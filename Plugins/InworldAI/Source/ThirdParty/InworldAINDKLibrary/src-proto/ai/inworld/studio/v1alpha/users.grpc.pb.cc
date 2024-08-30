#include "ProtoDisableWarning.h"
// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: ai/inworld/studio/v1alpha/users.proto

#include "ai/inworld/studio/v1alpha/users.pb.h"
#include "ai/inworld/studio/v1alpha/users.grpc.pb.h"

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
namespace studio {
namespace v1alpha {

static const char* Users_method_names[] = {
  "/ai.inworld.studio.v1alpha.Users/GenerateTokenUser",
  "/ai.inworld.studio.v1alpha.Users/LinkAccountUser",
  "/ai.inworld.studio.v1alpha.Users/GetUser",
  "/ai.inworld.studio.v1alpha.Users/UpdateUser",
  "/ai.inworld.studio.v1alpha.Users/AcceptTos",
  "/ai.inworld.studio.v1alpha.Users/DeleteUser",
};

std::unique_ptr< Users::Stub> Users::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< Users::Stub> stub(new Users::Stub(channel));
  return stub;
}

Users::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_GenerateTokenUser_(Users_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_LinkAccountUser_(Users_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetUser_(Users_method_names[2], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_UpdateUser_(Users_method_names[3], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_AcceptTos_(Users_method_names[4], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_DeleteUser_(Users_method_names[5], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status Users::Stub::GenerateTokenUser(::grpc::ClientContext* context, const ::ai::inworld::studio::v1alpha::GenerateTokenUserRequest& request, ::ai::inworld::studio::v1alpha::GenerateTokenUserResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::ai::inworld::studio::v1alpha::GenerateTokenUserRequest, ::ai::inworld::studio::v1alpha::GenerateTokenUserResponse, ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(channel_.get(), rpcmethod_GenerateTokenUser_, context, request, response);
}

void Users::Stub::experimental_async::GenerateTokenUser(::grpc::ClientContext* context, const ::ai::inworld::studio::v1alpha::GenerateTokenUserRequest* request, ::ai::inworld::studio::v1alpha::GenerateTokenUserResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::ai::inworld::studio::v1alpha::GenerateTokenUserRequest, ::ai::inworld::studio::v1alpha::GenerateTokenUserResponse, ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GenerateTokenUser_, context, request, response, std::move(f));
}

void Users::Stub::experimental_async::GenerateTokenUser(::grpc::ClientContext* context, const ::ai::inworld::studio::v1alpha::GenerateTokenUserRequest* request, ::ai::inworld::studio::v1alpha::GenerateTokenUserResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GenerateTokenUser_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::ai::inworld::studio::v1alpha::GenerateTokenUserResponse>* Users::Stub::PrepareAsyncGenerateTokenUserRaw(::grpc::ClientContext* context, const ::ai::inworld::studio::v1alpha::GenerateTokenUserRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::ai::inworld::studio::v1alpha::GenerateTokenUserResponse, ::ai::inworld::studio::v1alpha::GenerateTokenUserRequest, ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(channel_.get(), cq, rpcmethod_GenerateTokenUser_, context, request);
}

::grpc::ClientAsyncResponseReader< ::ai::inworld::studio::v1alpha::GenerateTokenUserResponse>* Users::Stub::AsyncGenerateTokenUserRaw(::grpc::ClientContext* context, const ::ai::inworld::studio::v1alpha::GenerateTokenUserRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncGenerateTokenUserRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status Users::Stub::LinkAccountUser(::grpc::ClientContext* context, const ::ai::inworld::studio::v1alpha::LinkAccountRequest& request, ::google::protobuf_inworld::Empty* response) {
  return ::grpc::internal::BlockingUnaryCall< ::ai::inworld::studio::v1alpha::LinkAccountRequest, ::google::protobuf_inworld::Empty, ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(channel_.get(), rpcmethod_LinkAccountUser_, context, request, response);
}

void Users::Stub::experimental_async::LinkAccountUser(::grpc::ClientContext* context, const ::ai::inworld::studio::v1alpha::LinkAccountRequest* request, ::google::protobuf_inworld::Empty* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::ai::inworld::studio::v1alpha::LinkAccountRequest, ::google::protobuf_inworld::Empty, ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_LinkAccountUser_, context, request, response, std::move(f));
}

void Users::Stub::experimental_async::LinkAccountUser(::grpc::ClientContext* context, const ::ai::inworld::studio::v1alpha::LinkAccountRequest* request, ::google::protobuf_inworld::Empty* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_LinkAccountUser_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::google::protobuf_inworld::Empty>* Users::Stub::PrepareAsyncLinkAccountUserRaw(::grpc::ClientContext* context, const ::ai::inworld::studio::v1alpha::LinkAccountRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::google::protobuf_inworld::Empty, ::ai::inworld::studio::v1alpha::LinkAccountRequest, ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(channel_.get(), cq, rpcmethod_LinkAccountUser_, context, request);
}

::grpc::ClientAsyncResponseReader< ::google::protobuf_inworld::Empty>* Users::Stub::AsyncLinkAccountUserRaw(::grpc::ClientContext* context, const ::ai::inworld::studio::v1alpha::LinkAccountRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncLinkAccountUserRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status Users::Stub::GetUser(::grpc::ClientContext* context, const ::ai::inworld::studio::v1alpha::GetUserRequest& request, ::ai::inworld::studio::v1alpha::User* response) {
  return ::grpc::internal::BlockingUnaryCall< ::ai::inworld::studio::v1alpha::GetUserRequest, ::ai::inworld::studio::v1alpha::User, ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(channel_.get(), rpcmethod_GetUser_, context, request, response);
}

void Users::Stub::experimental_async::GetUser(::grpc::ClientContext* context, const ::ai::inworld::studio::v1alpha::GetUserRequest* request, ::ai::inworld::studio::v1alpha::User* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::ai::inworld::studio::v1alpha::GetUserRequest, ::ai::inworld::studio::v1alpha::User, ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetUser_, context, request, response, std::move(f));
}

void Users::Stub::experimental_async::GetUser(::grpc::ClientContext* context, const ::ai::inworld::studio::v1alpha::GetUserRequest* request, ::ai::inworld::studio::v1alpha::User* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetUser_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::ai::inworld::studio::v1alpha::User>* Users::Stub::PrepareAsyncGetUserRaw(::grpc::ClientContext* context, const ::ai::inworld::studio::v1alpha::GetUserRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::ai::inworld::studio::v1alpha::User, ::ai::inworld::studio::v1alpha::GetUserRequest, ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(channel_.get(), cq, rpcmethod_GetUser_, context, request);
}

::grpc::ClientAsyncResponseReader< ::ai::inworld::studio::v1alpha::User>* Users::Stub::AsyncGetUserRaw(::grpc::ClientContext* context, const ::ai::inworld::studio::v1alpha::GetUserRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncGetUserRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status Users::Stub::UpdateUser(::grpc::ClientContext* context, const ::ai::inworld::studio::v1alpha::UpdateUserRequest& request, ::ai::inworld::studio::v1alpha::User* response) {
  return ::grpc::internal::BlockingUnaryCall< ::ai::inworld::studio::v1alpha::UpdateUserRequest, ::ai::inworld::studio::v1alpha::User, ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(channel_.get(), rpcmethod_UpdateUser_, context, request, response);
}

void Users::Stub::experimental_async::UpdateUser(::grpc::ClientContext* context, const ::ai::inworld::studio::v1alpha::UpdateUserRequest* request, ::ai::inworld::studio::v1alpha::User* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::ai::inworld::studio::v1alpha::UpdateUserRequest, ::ai::inworld::studio::v1alpha::User, ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_UpdateUser_, context, request, response, std::move(f));
}

void Users::Stub::experimental_async::UpdateUser(::grpc::ClientContext* context, const ::ai::inworld::studio::v1alpha::UpdateUserRequest* request, ::ai::inworld::studio::v1alpha::User* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_UpdateUser_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::ai::inworld::studio::v1alpha::User>* Users::Stub::PrepareAsyncUpdateUserRaw(::grpc::ClientContext* context, const ::ai::inworld::studio::v1alpha::UpdateUserRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::ai::inworld::studio::v1alpha::User, ::ai::inworld::studio::v1alpha::UpdateUserRequest, ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(channel_.get(), cq, rpcmethod_UpdateUser_, context, request);
}

::grpc::ClientAsyncResponseReader< ::ai::inworld::studio::v1alpha::User>* Users::Stub::AsyncUpdateUserRaw(::grpc::ClientContext* context, const ::ai::inworld::studio::v1alpha::UpdateUserRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncUpdateUserRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status Users::Stub::AcceptTos(::grpc::ClientContext* context, const ::ai::inworld::studio::v1alpha::AcceptTosRequest& request, ::ai::inworld::studio::v1alpha::User* response) {
  return ::grpc::internal::BlockingUnaryCall< ::ai::inworld::studio::v1alpha::AcceptTosRequest, ::ai::inworld::studio::v1alpha::User, ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(channel_.get(), rpcmethod_AcceptTos_, context, request, response);
}

void Users::Stub::experimental_async::AcceptTos(::grpc::ClientContext* context, const ::ai::inworld::studio::v1alpha::AcceptTosRequest* request, ::ai::inworld::studio::v1alpha::User* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::ai::inworld::studio::v1alpha::AcceptTosRequest, ::ai::inworld::studio::v1alpha::User, ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_AcceptTos_, context, request, response, std::move(f));
}

void Users::Stub::experimental_async::AcceptTos(::grpc::ClientContext* context, const ::ai::inworld::studio::v1alpha::AcceptTosRequest* request, ::ai::inworld::studio::v1alpha::User* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_AcceptTos_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::ai::inworld::studio::v1alpha::User>* Users::Stub::PrepareAsyncAcceptTosRaw(::grpc::ClientContext* context, const ::ai::inworld::studio::v1alpha::AcceptTosRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::ai::inworld::studio::v1alpha::User, ::ai::inworld::studio::v1alpha::AcceptTosRequest, ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(channel_.get(), cq, rpcmethod_AcceptTos_, context, request);
}

::grpc::ClientAsyncResponseReader< ::ai::inworld::studio::v1alpha::User>* Users::Stub::AsyncAcceptTosRaw(::grpc::ClientContext* context, const ::ai::inworld::studio::v1alpha::AcceptTosRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncAcceptTosRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status Users::Stub::DeleteUser(::grpc::ClientContext* context, const ::ai::inworld::studio::v1alpha::DeleteUserRequest& request, ::google::protobuf_inworld::Empty* response) {
  return ::grpc::internal::BlockingUnaryCall< ::ai::inworld::studio::v1alpha::DeleteUserRequest, ::google::protobuf_inworld::Empty, ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(channel_.get(), rpcmethod_DeleteUser_, context, request, response);
}

void Users::Stub::experimental_async::DeleteUser(::grpc::ClientContext* context, const ::ai::inworld::studio::v1alpha::DeleteUserRequest* request, ::google::protobuf_inworld::Empty* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::ai::inworld::studio::v1alpha::DeleteUserRequest, ::google::protobuf_inworld::Empty, ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_DeleteUser_, context, request, response, std::move(f));
}

void Users::Stub::experimental_async::DeleteUser(::grpc::ClientContext* context, const ::ai::inworld::studio::v1alpha::DeleteUserRequest* request, ::google::protobuf_inworld::Empty* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_DeleteUser_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::google::protobuf_inworld::Empty>* Users::Stub::PrepareAsyncDeleteUserRaw(::grpc::ClientContext* context, const ::ai::inworld::studio::v1alpha::DeleteUserRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::google::protobuf_inworld::Empty, ::ai::inworld::studio::v1alpha::DeleteUserRequest, ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(channel_.get(), cq, rpcmethod_DeleteUser_, context, request);
}

::grpc::ClientAsyncResponseReader< ::google::protobuf_inworld::Empty>* Users::Stub::AsyncDeleteUserRaw(::grpc::ClientContext* context, const ::ai::inworld::studio::v1alpha::DeleteUserRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncDeleteUserRaw(context, request, cq);
  result->StartCall();
  return result;
}

Users::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Users_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Users::Service, ::ai::inworld::studio::v1alpha::GenerateTokenUserRequest, ::ai::inworld::studio::v1alpha::GenerateTokenUserResponse, ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(
          [](Users::Service* service,
             ::grpc::ServerContext* ctx,
             const ::ai::inworld::studio::v1alpha::GenerateTokenUserRequest* req,
             ::ai::inworld::studio::v1alpha::GenerateTokenUserResponse* resp) {
               return service->GenerateTokenUser(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Users_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Users::Service, ::ai::inworld::studio::v1alpha::LinkAccountRequest, ::google::protobuf_inworld::Empty, ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(
          [](Users::Service* service,
             ::grpc::ServerContext* ctx,
             const ::ai::inworld::studio::v1alpha::LinkAccountRequest* req,
             ::google::protobuf_inworld::Empty* resp) {
               return service->LinkAccountUser(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Users_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Users::Service, ::ai::inworld::studio::v1alpha::GetUserRequest, ::ai::inworld::studio::v1alpha::User, ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(
          [](Users::Service* service,
             ::grpc::ServerContext* ctx,
             const ::ai::inworld::studio::v1alpha::GetUserRequest* req,
             ::ai::inworld::studio::v1alpha::User* resp) {
               return service->GetUser(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Users_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Users::Service, ::ai::inworld::studio::v1alpha::UpdateUserRequest, ::ai::inworld::studio::v1alpha::User, ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(
          [](Users::Service* service,
             ::grpc::ServerContext* ctx,
             const ::ai::inworld::studio::v1alpha::UpdateUserRequest* req,
             ::ai::inworld::studio::v1alpha::User* resp) {
               return service->UpdateUser(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Users_method_names[4],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Users::Service, ::ai::inworld::studio::v1alpha::AcceptTosRequest, ::ai::inworld::studio::v1alpha::User, ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(
          [](Users::Service* service,
             ::grpc::ServerContext* ctx,
             const ::ai::inworld::studio::v1alpha::AcceptTosRequest* req,
             ::ai::inworld::studio::v1alpha::User* resp) {
               return service->AcceptTos(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Users_method_names[5],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Users::Service, ::ai::inworld::studio::v1alpha::DeleteUserRequest, ::google::protobuf_inworld::Empty, ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(
          [](Users::Service* service,
             ::grpc::ServerContext* ctx,
             const ::ai::inworld::studio::v1alpha::DeleteUserRequest* req,
             ::google::protobuf_inworld::Empty* resp) {
               return service->DeleteUser(ctx, req, resp);
             }, this)));
}

Users::Service::~Service() {
}

::grpc::Status Users::Service::GenerateTokenUser(::grpc::ServerContext* context, const ::ai::inworld::studio::v1alpha::GenerateTokenUserRequest* request, ::ai::inworld::studio::v1alpha::GenerateTokenUserResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Users::Service::LinkAccountUser(::grpc::ServerContext* context, const ::ai::inworld::studio::v1alpha::LinkAccountRequest* request, ::google::protobuf_inworld::Empty* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Users::Service::GetUser(::grpc::ServerContext* context, const ::ai::inworld::studio::v1alpha::GetUserRequest* request, ::ai::inworld::studio::v1alpha::User* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Users::Service::UpdateUser(::grpc::ServerContext* context, const ::ai::inworld::studio::v1alpha::UpdateUserRequest* request, ::ai::inworld::studio::v1alpha::User* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Users::Service::AcceptTos(::grpc::ServerContext* context, const ::ai::inworld::studio::v1alpha::AcceptTosRequest* request, ::ai::inworld::studio::v1alpha::User* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Users::Service::DeleteUser(::grpc::ServerContext* context, const ::ai::inworld::studio::v1alpha::DeleteUserRequest* request, ::google::protobuf_inworld::Empty* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace ai
}  // namespace inworld
}  // namespace studio
}  // namespace v1alpha

