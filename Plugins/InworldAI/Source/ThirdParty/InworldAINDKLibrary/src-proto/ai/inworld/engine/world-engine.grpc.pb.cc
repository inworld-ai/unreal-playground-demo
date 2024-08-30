#include "ProtoDisableWarning.h"
// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: ai/inworld/engine/world-engine.proto

#include "ai/inworld/engine/world-engine.pb.h"
#include "ai/inworld/engine/world-engine.grpc.pb.h"

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

static const char* WorldEngine_method_names[] = {
  "/ai.inworld.engine.WorldEngine/Session",
  "/ai.inworld.engine.WorldEngine/OpenSession",
  "/ai.inworld.engine.WorldEngine/LoadScene",
  "/ai.inworld.engine.WorldEngine/LogError",
  "/ai.inworld.engine.WorldEngine/VoicePreview",
  "/ai.inworld.engine.WorldEngine/ListBaseVoices",
  "/ai.inworld.engine.WorldEngine/GenerateToken",
};

std::unique_ptr< WorldEngine::Stub> WorldEngine::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< WorldEngine::Stub> stub(new WorldEngine::Stub(channel));
  return stub;
}

WorldEngine::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_Session_(WorldEngine_method_names[0], ::grpc::internal::RpcMethod::BIDI_STREAMING, channel)
  , rpcmethod_OpenSession_(WorldEngine_method_names[1], ::grpc::internal::RpcMethod::BIDI_STREAMING, channel)
  , rpcmethod_LoadScene_(WorldEngine_method_names[2], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_LogError_(WorldEngine_method_names[3], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_VoicePreview_(WorldEngine_method_names[4], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_ListBaseVoices_(WorldEngine_method_names[5], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GenerateToken_(WorldEngine_method_names[6], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::ClientReaderWriter< ::ai::inworld::packets::InworldPacket, ::ai::inworld::packets::InworldPacket>* WorldEngine::Stub::SessionRaw(::grpc::ClientContext* context) {
  return ::grpc::internal::ClientReaderWriterFactory< ::ai::inworld::packets::InworldPacket, ::ai::inworld::packets::InworldPacket>::Create(channel_.get(), rpcmethod_Session_, context);
}

void WorldEngine::Stub::experimental_async::Session(::grpc::ClientContext* context, ::grpc::experimental::ClientBidiReactor< ::ai::inworld::packets::InworldPacket,::ai::inworld::packets::InworldPacket>* reactor) {
  ::grpc::internal::ClientCallbackReaderWriterFactory< ::ai::inworld::packets::InworldPacket,::ai::inworld::packets::InworldPacket>::Create(stub_->channel_.get(), stub_->rpcmethod_Session_, context, reactor);
}

::grpc::ClientAsyncReaderWriter< ::ai::inworld::packets::InworldPacket, ::ai::inworld::packets::InworldPacket>* WorldEngine::Stub::AsyncSessionRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderWriterFactory< ::ai::inworld::packets::InworldPacket, ::ai::inworld::packets::InworldPacket>::Create(channel_.get(), cq, rpcmethod_Session_, context, true, tag);
}

::grpc::ClientAsyncReaderWriter< ::ai::inworld::packets::InworldPacket, ::ai::inworld::packets::InworldPacket>* WorldEngine::Stub::PrepareAsyncSessionRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderWriterFactory< ::ai::inworld::packets::InworldPacket, ::ai::inworld::packets::InworldPacket>::Create(channel_.get(), cq, rpcmethod_Session_, context, false, nullptr);
}

::grpc::ClientReaderWriter< ::ai::inworld::packets::InworldPacket, ::ai::inworld::packets::InworldPacket>* WorldEngine::Stub::OpenSessionRaw(::grpc::ClientContext* context) {
  return ::grpc::internal::ClientReaderWriterFactory< ::ai::inworld::packets::InworldPacket, ::ai::inworld::packets::InworldPacket>::Create(channel_.get(), rpcmethod_OpenSession_, context);
}

void WorldEngine::Stub::experimental_async::OpenSession(::grpc::ClientContext* context, ::grpc::experimental::ClientBidiReactor< ::ai::inworld::packets::InworldPacket,::ai::inworld::packets::InworldPacket>* reactor) {
  ::grpc::internal::ClientCallbackReaderWriterFactory< ::ai::inworld::packets::InworldPacket,::ai::inworld::packets::InworldPacket>::Create(stub_->channel_.get(), stub_->rpcmethod_OpenSession_, context, reactor);
}

::grpc::ClientAsyncReaderWriter< ::ai::inworld::packets::InworldPacket, ::ai::inworld::packets::InworldPacket>* WorldEngine::Stub::AsyncOpenSessionRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderWriterFactory< ::ai::inworld::packets::InworldPacket, ::ai::inworld::packets::InworldPacket>::Create(channel_.get(), cq, rpcmethod_OpenSession_, context, true, tag);
}

::grpc::ClientAsyncReaderWriter< ::ai::inworld::packets::InworldPacket, ::ai::inworld::packets::InworldPacket>* WorldEngine::Stub::PrepareAsyncOpenSessionRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderWriterFactory< ::ai::inworld::packets::InworldPacket, ::ai::inworld::packets::InworldPacket>::Create(channel_.get(), cq, rpcmethod_OpenSession_, context, false, nullptr);
}

::grpc::Status WorldEngine::Stub::LoadScene(::grpc::ClientContext* context, const ::ai::inworld::engine::LoadSceneRequest& request, ::ai::inworld::engine::LoadSceneResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::ai::inworld::engine::LoadSceneRequest, ::ai::inworld::engine::LoadSceneResponse, ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(channel_.get(), rpcmethod_LoadScene_, context, request, response);
}

void WorldEngine::Stub::experimental_async::LoadScene(::grpc::ClientContext* context, const ::ai::inworld::engine::LoadSceneRequest* request, ::ai::inworld::engine::LoadSceneResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::ai::inworld::engine::LoadSceneRequest, ::ai::inworld::engine::LoadSceneResponse, ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_LoadScene_, context, request, response, std::move(f));
}

void WorldEngine::Stub::experimental_async::LoadScene(::grpc::ClientContext* context, const ::ai::inworld::engine::LoadSceneRequest* request, ::ai::inworld::engine::LoadSceneResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_LoadScene_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::ai::inworld::engine::LoadSceneResponse>* WorldEngine::Stub::PrepareAsyncLoadSceneRaw(::grpc::ClientContext* context, const ::ai::inworld::engine::LoadSceneRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::ai::inworld::engine::LoadSceneResponse, ::ai::inworld::engine::LoadSceneRequest, ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(channel_.get(), cq, rpcmethod_LoadScene_, context, request);
}

::grpc::ClientAsyncResponseReader< ::ai::inworld::engine::LoadSceneResponse>* WorldEngine::Stub::AsyncLoadSceneRaw(::grpc::ClientContext* context, const ::ai::inworld::engine::LoadSceneRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncLoadSceneRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status WorldEngine::Stub::LogError(::grpc::ClientContext* context, const ::ai::inworld::engine::LogErrorRequest& request, ::google::protobuf_inworld::Empty* response) {
  return ::grpc::internal::BlockingUnaryCall< ::ai::inworld::engine::LogErrorRequest, ::google::protobuf_inworld::Empty, ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(channel_.get(), rpcmethod_LogError_, context, request, response);
}

void WorldEngine::Stub::experimental_async::LogError(::grpc::ClientContext* context, const ::ai::inworld::engine::LogErrorRequest* request, ::google::protobuf_inworld::Empty* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::ai::inworld::engine::LogErrorRequest, ::google::protobuf_inworld::Empty, ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_LogError_, context, request, response, std::move(f));
}

void WorldEngine::Stub::experimental_async::LogError(::grpc::ClientContext* context, const ::ai::inworld::engine::LogErrorRequest* request, ::google::protobuf_inworld::Empty* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_LogError_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::google::protobuf_inworld::Empty>* WorldEngine::Stub::PrepareAsyncLogErrorRaw(::grpc::ClientContext* context, const ::ai::inworld::engine::LogErrorRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::google::protobuf_inworld::Empty, ::ai::inworld::engine::LogErrorRequest, ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(channel_.get(), cq, rpcmethod_LogError_, context, request);
}

::grpc::ClientAsyncResponseReader< ::google::protobuf_inworld::Empty>* WorldEngine::Stub::AsyncLogErrorRaw(::grpc::ClientContext* context, const ::ai::inworld::engine::LogErrorRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncLogErrorRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status WorldEngine::Stub::VoicePreview(::grpc::ClientContext* context, const ::ai::inworld::engine::VoicePreviewRequest& request, ::ai::inworld::engine::VoicePreviewResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::ai::inworld::engine::VoicePreviewRequest, ::ai::inworld::engine::VoicePreviewResponse, ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(channel_.get(), rpcmethod_VoicePreview_, context, request, response);
}

void WorldEngine::Stub::experimental_async::VoicePreview(::grpc::ClientContext* context, const ::ai::inworld::engine::VoicePreviewRequest* request, ::ai::inworld::engine::VoicePreviewResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::ai::inworld::engine::VoicePreviewRequest, ::ai::inworld::engine::VoicePreviewResponse, ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_VoicePreview_, context, request, response, std::move(f));
}

void WorldEngine::Stub::experimental_async::VoicePreview(::grpc::ClientContext* context, const ::ai::inworld::engine::VoicePreviewRequest* request, ::ai::inworld::engine::VoicePreviewResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_VoicePreview_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::ai::inworld::engine::VoicePreviewResponse>* WorldEngine::Stub::PrepareAsyncVoicePreviewRaw(::grpc::ClientContext* context, const ::ai::inworld::engine::VoicePreviewRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::ai::inworld::engine::VoicePreviewResponse, ::ai::inworld::engine::VoicePreviewRequest, ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(channel_.get(), cq, rpcmethod_VoicePreview_, context, request);
}

::grpc::ClientAsyncResponseReader< ::ai::inworld::engine::VoicePreviewResponse>* WorldEngine::Stub::AsyncVoicePreviewRaw(::grpc::ClientContext* context, const ::ai::inworld::engine::VoicePreviewRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncVoicePreviewRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status WorldEngine::Stub::ListBaseVoices(::grpc::ClientContext* context, const ::ai::inworld::engine::ListBaseVoicesRequest& request, ::ai::inworld::engine::ListBaseVoicesResponce* response) {
  return ::grpc::internal::BlockingUnaryCall< ::ai::inworld::engine::ListBaseVoicesRequest, ::ai::inworld::engine::ListBaseVoicesResponce, ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(channel_.get(), rpcmethod_ListBaseVoices_, context, request, response);
}

void WorldEngine::Stub::experimental_async::ListBaseVoices(::grpc::ClientContext* context, const ::ai::inworld::engine::ListBaseVoicesRequest* request, ::ai::inworld::engine::ListBaseVoicesResponce* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::ai::inworld::engine::ListBaseVoicesRequest, ::ai::inworld::engine::ListBaseVoicesResponce, ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_ListBaseVoices_, context, request, response, std::move(f));
}

void WorldEngine::Stub::experimental_async::ListBaseVoices(::grpc::ClientContext* context, const ::ai::inworld::engine::ListBaseVoicesRequest* request, ::ai::inworld::engine::ListBaseVoicesResponce* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_ListBaseVoices_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::ai::inworld::engine::ListBaseVoicesResponce>* WorldEngine::Stub::PrepareAsyncListBaseVoicesRaw(::grpc::ClientContext* context, const ::ai::inworld::engine::ListBaseVoicesRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::ai::inworld::engine::ListBaseVoicesResponce, ::ai::inworld::engine::ListBaseVoicesRequest, ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(channel_.get(), cq, rpcmethod_ListBaseVoices_, context, request);
}

::grpc::ClientAsyncResponseReader< ::ai::inworld::engine::ListBaseVoicesResponce>* WorldEngine::Stub::AsyncListBaseVoicesRaw(::grpc::ClientContext* context, const ::ai::inworld::engine::ListBaseVoicesRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncListBaseVoicesRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status WorldEngine::Stub::GenerateToken(::grpc::ClientContext* context, const ::ai::inworld::engine::GenerateTokenRequest& request, ::ai::inworld::engine::AccessToken* response) {
  return ::grpc::internal::BlockingUnaryCall< ::ai::inworld::engine::GenerateTokenRequest, ::ai::inworld::engine::AccessToken, ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(channel_.get(), rpcmethod_GenerateToken_, context, request, response);
}

void WorldEngine::Stub::experimental_async::GenerateToken(::grpc::ClientContext* context, const ::ai::inworld::engine::GenerateTokenRequest* request, ::ai::inworld::engine::AccessToken* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::ai::inworld::engine::GenerateTokenRequest, ::ai::inworld::engine::AccessToken, ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GenerateToken_, context, request, response, std::move(f));
}

void WorldEngine::Stub::experimental_async::GenerateToken(::grpc::ClientContext* context, const ::ai::inworld::engine::GenerateTokenRequest* request, ::ai::inworld::engine::AccessToken* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GenerateToken_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::ai::inworld::engine::AccessToken>* WorldEngine::Stub::PrepareAsyncGenerateTokenRaw(::grpc::ClientContext* context, const ::ai::inworld::engine::GenerateTokenRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::ai::inworld::engine::AccessToken, ::ai::inworld::engine::GenerateTokenRequest, ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(channel_.get(), cq, rpcmethod_GenerateToken_, context, request);
}

::grpc::ClientAsyncResponseReader< ::ai::inworld::engine::AccessToken>* WorldEngine::Stub::AsyncGenerateTokenRaw(::grpc::ClientContext* context, const ::ai::inworld::engine::GenerateTokenRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncGenerateTokenRaw(context, request, cq);
  result->StartCall();
  return result;
}

WorldEngine::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      WorldEngine_method_names[0],
      ::grpc::internal::RpcMethod::BIDI_STREAMING,
      new ::grpc::internal::BidiStreamingHandler< WorldEngine::Service, ::ai::inworld::packets::InworldPacket, ::ai::inworld::packets::InworldPacket>(
          [](WorldEngine::Service* service,
             ::grpc::ServerContext* ctx,
             ::grpc::ServerReaderWriter<::ai::inworld::packets::InworldPacket,
             ::ai::inworld::packets::InworldPacket>* stream) {
               return service->Session(ctx, stream);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      WorldEngine_method_names[1],
      ::grpc::internal::RpcMethod::BIDI_STREAMING,
      new ::grpc::internal::BidiStreamingHandler< WorldEngine::Service, ::ai::inworld::packets::InworldPacket, ::ai::inworld::packets::InworldPacket>(
          [](WorldEngine::Service* service,
             ::grpc::ServerContext* ctx,
             ::grpc::ServerReaderWriter<::ai::inworld::packets::InworldPacket,
             ::ai::inworld::packets::InworldPacket>* stream) {
               return service->OpenSession(ctx, stream);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      WorldEngine_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< WorldEngine::Service, ::ai::inworld::engine::LoadSceneRequest, ::ai::inworld::engine::LoadSceneResponse, ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(
          [](WorldEngine::Service* service,
             ::grpc::ServerContext* ctx,
             const ::ai::inworld::engine::LoadSceneRequest* req,
             ::ai::inworld::engine::LoadSceneResponse* resp) {
               return service->LoadScene(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      WorldEngine_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< WorldEngine::Service, ::ai::inworld::engine::LogErrorRequest, ::google::protobuf_inworld::Empty, ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(
          [](WorldEngine::Service* service,
             ::grpc::ServerContext* ctx,
             const ::ai::inworld::engine::LogErrorRequest* req,
             ::google::protobuf_inworld::Empty* resp) {
               return service->LogError(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      WorldEngine_method_names[4],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< WorldEngine::Service, ::ai::inworld::engine::VoicePreviewRequest, ::ai::inworld::engine::VoicePreviewResponse, ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(
          [](WorldEngine::Service* service,
             ::grpc::ServerContext* ctx,
             const ::ai::inworld::engine::VoicePreviewRequest* req,
             ::ai::inworld::engine::VoicePreviewResponse* resp) {
               return service->VoicePreview(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      WorldEngine_method_names[5],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< WorldEngine::Service, ::ai::inworld::engine::ListBaseVoicesRequest, ::ai::inworld::engine::ListBaseVoicesResponce, ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(
          [](WorldEngine::Service* service,
             ::grpc::ServerContext* ctx,
             const ::ai::inworld::engine::ListBaseVoicesRequest* req,
             ::ai::inworld::engine::ListBaseVoicesResponce* resp) {
               return service->ListBaseVoices(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      WorldEngine_method_names[6],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< WorldEngine::Service, ::ai::inworld::engine::GenerateTokenRequest, ::ai::inworld::engine::AccessToken, ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(
          [](WorldEngine::Service* service,
             ::grpc::ServerContext* ctx,
             const ::ai::inworld::engine::GenerateTokenRequest* req,
             ::ai::inworld::engine::AccessToken* resp) {
               return service->GenerateToken(ctx, req, resp);
             }, this)));
}

WorldEngine::Service::~Service() {
}

::grpc::Status WorldEngine::Service::Session(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::ai::inworld::packets::InworldPacket, ::ai::inworld::packets::InworldPacket>* stream) {
  (void) context;
  (void) stream;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status WorldEngine::Service::OpenSession(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::ai::inworld::packets::InworldPacket, ::ai::inworld::packets::InworldPacket>* stream) {
  (void) context;
  (void) stream;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status WorldEngine::Service::LoadScene(::grpc::ServerContext* context, const ::ai::inworld::engine::LoadSceneRequest* request, ::ai::inworld::engine::LoadSceneResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status WorldEngine::Service::LogError(::grpc::ServerContext* context, const ::ai::inworld::engine::LogErrorRequest* request, ::google::protobuf_inworld::Empty* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status WorldEngine::Service::VoicePreview(::grpc::ServerContext* context, const ::ai::inworld::engine::VoicePreviewRequest* request, ::ai::inworld::engine::VoicePreviewResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status WorldEngine::Service::ListBaseVoices(::grpc::ServerContext* context, const ::ai::inworld::engine::ListBaseVoicesRequest* request, ::ai::inworld::engine::ListBaseVoicesResponce* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status WorldEngine::Service::GenerateToken(::grpc::ServerContext* context, const ::ai::inworld::engine::GenerateTokenRequest* request, ::ai::inworld::engine::AccessToken* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace ai
}  // namespace inworld
}  // namespace engine

