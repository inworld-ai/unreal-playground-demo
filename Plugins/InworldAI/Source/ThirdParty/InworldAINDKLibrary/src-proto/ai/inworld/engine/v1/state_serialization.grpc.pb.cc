#include "ProtoDisableWarning.h"
// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: ai/inworld/engine/v1/state_serialization.proto

#include "ai/inworld/engine/v1/state_serialization.pb.h"
#include "ai/inworld/engine/v1/state_serialization.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace ai {
namespace inworld {
namespace engine {
namespace v1 {

static const char* StateSerialization_method_names[] = {
  "/ai.inworld.engine.v1.StateSerialization/GetSessionState",
};

std::unique_ptr< StateSerialization::Stub> StateSerialization::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< StateSerialization::Stub> stub(new StateSerialization::Stub(channel));
  return stub;
}

StateSerialization::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_GetSessionState_(StateSerialization_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status StateSerialization::Stub::GetSessionState(::grpc::ClientContext* context, const ::ai::inworld::engine::v1::GetSessionStateRequest& request, ::ai::inworld::engine::v1::SessionState* response) {
  return ::grpc::internal::BlockingUnaryCall< ::ai::inworld::engine::v1::GetSessionStateRequest, ::ai::inworld::engine::v1::SessionState, ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(channel_.get(), rpcmethod_GetSessionState_, context, request, response);
}

void StateSerialization::Stub::experimental_async::GetSessionState(::grpc::ClientContext* context, const ::ai::inworld::engine::v1::GetSessionStateRequest* request, ::ai::inworld::engine::v1::SessionState* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::ai::inworld::engine::v1::GetSessionStateRequest, ::ai::inworld::engine::v1::SessionState, ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetSessionState_, context, request, response, std::move(f));
}

void StateSerialization::Stub::experimental_async::GetSessionState(::grpc::ClientContext* context, const ::ai::inworld::engine::v1::GetSessionStateRequest* request, ::ai::inworld::engine::v1::SessionState* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetSessionState_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::ai::inworld::engine::v1::SessionState>* StateSerialization::Stub::PrepareAsyncGetSessionStateRaw(::grpc::ClientContext* context, const ::ai::inworld::engine::v1::GetSessionStateRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::ai::inworld::engine::v1::SessionState, ::ai::inworld::engine::v1::GetSessionStateRequest, ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(channel_.get(), cq, rpcmethod_GetSessionState_, context, request);
}

::grpc::ClientAsyncResponseReader< ::ai::inworld::engine::v1::SessionState>* StateSerialization::Stub::AsyncGetSessionStateRaw(::grpc::ClientContext* context, const ::ai::inworld::engine::v1::GetSessionStateRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncGetSessionStateRaw(context, request, cq);
  result->StartCall();
  return result;
}

StateSerialization::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      StateSerialization_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< StateSerialization::Service, ::ai::inworld::engine::v1::GetSessionStateRequest, ::ai::inworld::engine::v1::SessionState, ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(
          [](StateSerialization::Service* service,
             ::grpc::ServerContext* ctx,
             const ::ai::inworld::engine::v1::GetSessionStateRequest* req,
             ::ai::inworld::engine::v1::SessionState* resp) {
               return service->GetSessionState(ctx, req, resp);
             }, this)));
}

StateSerialization::Service::~Service() {
}

::grpc::Status StateSerialization::Service::GetSessionState(::grpc::ServerContext* context, const ::ai::inworld::engine::v1::GetSessionStateRequest* request, ::ai::inworld::engine::v1::SessionState* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace ai
}  // namespace inworld
}  // namespace engine
}  // namespace v1

