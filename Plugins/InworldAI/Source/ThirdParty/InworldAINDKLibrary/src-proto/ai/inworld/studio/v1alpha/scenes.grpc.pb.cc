#include "ProtoDisableWarning.h"
// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: ai/inworld/studio/v1alpha/scenes.proto

#include "ai/inworld/studio/v1alpha/scenes.pb.h"
#include "ai/inworld/studio/v1alpha/scenes.grpc.pb.h"

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

static const char* Scenes_method_names[] = {
  "/ai.inworld.studio.v1alpha.Scenes/DeployScene",
  "/ai.inworld.studio.v1alpha.Scenes/DeploySceneAsynchronously",
  "/ai.inworld.studio.v1alpha.Scenes/GetScene",
  "/ai.inworld.studio.v1alpha.Scenes/ListScenes",
  "/ai.inworld.studio.v1alpha.Scenes/UpdateScene",
  "/ai.inworld.studio.v1alpha.Scenes/CreateScene",
  "/ai.inworld.studio.v1alpha.Scenes/DeleteScene",
};

std::unique_ptr< Scenes::Stub> Scenes::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< Scenes::Stub> stub(new Scenes::Stub(channel));
  return stub;
}

Scenes::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_DeployScene_(Scenes_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_DeploySceneAsynchronously_(Scenes_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetScene_(Scenes_method_names[2], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_ListScenes_(Scenes_method_names[3], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_UpdateScene_(Scenes_method_names[4], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_CreateScene_(Scenes_method_names[5], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_DeleteScene_(Scenes_method_names[6], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status Scenes::Stub::DeployScene(::grpc::ClientContext* context, const ::ai::inworld::studio::v1alpha::DeploySceneRequest& request, ::google::protobuf_inworld::Empty* response) {
  return ::grpc::internal::BlockingUnaryCall< ::ai::inworld::studio::v1alpha::DeploySceneRequest, ::google::protobuf_inworld::Empty, ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(channel_.get(), rpcmethod_DeployScene_, context, request, response);
}

void Scenes::Stub::experimental_async::DeployScene(::grpc::ClientContext* context, const ::ai::inworld::studio::v1alpha::DeploySceneRequest* request, ::google::protobuf_inworld::Empty* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::ai::inworld::studio::v1alpha::DeploySceneRequest, ::google::protobuf_inworld::Empty, ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_DeployScene_, context, request, response, std::move(f));
}

void Scenes::Stub::experimental_async::DeployScene(::grpc::ClientContext* context, const ::ai::inworld::studio::v1alpha::DeploySceneRequest* request, ::google::protobuf_inworld::Empty* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_DeployScene_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::google::protobuf_inworld::Empty>* Scenes::Stub::PrepareAsyncDeploySceneRaw(::grpc::ClientContext* context, const ::ai::inworld::studio::v1alpha::DeploySceneRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::google::protobuf_inworld::Empty, ::ai::inworld::studio::v1alpha::DeploySceneRequest, ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(channel_.get(), cq, rpcmethod_DeployScene_, context, request);
}

::grpc::ClientAsyncResponseReader< ::google::protobuf_inworld::Empty>* Scenes::Stub::AsyncDeploySceneRaw(::grpc::ClientContext* context, const ::ai::inworld::studio::v1alpha::DeploySceneRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncDeploySceneRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status Scenes::Stub::DeploySceneAsynchronously(::grpc::ClientContext* context, const ::ai::inworld::studio::v1alpha::DeploySceneRequest& request, ::google::longrunning::Operation* response) {
  return ::grpc::internal::BlockingUnaryCall< ::ai::inworld::studio::v1alpha::DeploySceneRequest, ::google::longrunning::Operation, ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(channel_.get(), rpcmethod_DeploySceneAsynchronously_, context, request, response);
}

void Scenes::Stub::experimental_async::DeploySceneAsynchronously(::grpc::ClientContext* context, const ::ai::inworld::studio::v1alpha::DeploySceneRequest* request, ::google::longrunning::Operation* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::ai::inworld::studio::v1alpha::DeploySceneRequest, ::google::longrunning::Operation, ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_DeploySceneAsynchronously_, context, request, response, std::move(f));
}

void Scenes::Stub::experimental_async::DeploySceneAsynchronously(::grpc::ClientContext* context, const ::ai::inworld::studio::v1alpha::DeploySceneRequest* request, ::google::longrunning::Operation* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_DeploySceneAsynchronously_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>* Scenes::Stub::PrepareAsyncDeploySceneAsynchronouslyRaw(::grpc::ClientContext* context, const ::ai::inworld::studio::v1alpha::DeploySceneRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::google::longrunning::Operation, ::ai::inworld::studio::v1alpha::DeploySceneRequest, ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(channel_.get(), cq, rpcmethod_DeploySceneAsynchronously_, context, request);
}

::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>* Scenes::Stub::AsyncDeploySceneAsynchronouslyRaw(::grpc::ClientContext* context, const ::ai::inworld::studio::v1alpha::DeploySceneRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncDeploySceneAsynchronouslyRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status Scenes::Stub::GetScene(::grpc::ClientContext* context, const ::ai::inworld::studio::v1alpha::GetSceneRequest& request, ::ai::inworld::studio::v1alpha::Scene* response) {
  return ::grpc::internal::BlockingUnaryCall< ::ai::inworld::studio::v1alpha::GetSceneRequest, ::ai::inworld::studio::v1alpha::Scene, ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(channel_.get(), rpcmethod_GetScene_, context, request, response);
}

void Scenes::Stub::experimental_async::GetScene(::grpc::ClientContext* context, const ::ai::inworld::studio::v1alpha::GetSceneRequest* request, ::ai::inworld::studio::v1alpha::Scene* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::ai::inworld::studio::v1alpha::GetSceneRequest, ::ai::inworld::studio::v1alpha::Scene, ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetScene_, context, request, response, std::move(f));
}

void Scenes::Stub::experimental_async::GetScene(::grpc::ClientContext* context, const ::ai::inworld::studio::v1alpha::GetSceneRequest* request, ::ai::inworld::studio::v1alpha::Scene* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetScene_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::ai::inworld::studio::v1alpha::Scene>* Scenes::Stub::PrepareAsyncGetSceneRaw(::grpc::ClientContext* context, const ::ai::inworld::studio::v1alpha::GetSceneRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::ai::inworld::studio::v1alpha::Scene, ::ai::inworld::studio::v1alpha::GetSceneRequest, ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(channel_.get(), cq, rpcmethod_GetScene_, context, request);
}

::grpc::ClientAsyncResponseReader< ::ai::inworld::studio::v1alpha::Scene>* Scenes::Stub::AsyncGetSceneRaw(::grpc::ClientContext* context, const ::ai::inworld::studio::v1alpha::GetSceneRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncGetSceneRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status Scenes::Stub::ListScenes(::grpc::ClientContext* context, const ::ai::inworld::studio::v1alpha::ListScenesRequest& request, ::ai::inworld::studio::v1alpha::ListScenesResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::ai::inworld::studio::v1alpha::ListScenesRequest, ::ai::inworld::studio::v1alpha::ListScenesResponse, ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(channel_.get(), rpcmethod_ListScenes_, context, request, response);
}

void Scenes::Stub::experimental_async::ListScenes(::grpc::ClientContext* context, const ::ai::inworld::studio::v1alpha::ListScenesRequest* request, ::ai::inworld::studio::v1alpha::ListScenesResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::ai::inworld::studio::v1alpha::ListScenesRequest, ::ai::inworld::studio::v1alpha::ListScenesResponse, ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_ListScenes_, context, request, response, std::move(f));
}

void Scenes::Stub::experimental_async::ListScenes(::grpc::ClientContext* context, const ::ai::inworld::studio::v1alpha::ListScenesRequest* request, ::ai::inworld::studio::v1alpha::ListScenesResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_ListScenes_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::ai::inworld::studio::v1alpha::ListScenesResponse>* Scenes::Stub::PrepareAsyncListScenesRaw(::grpc::ClientContext* context, const ::ai::inworld::studio::v1alpha::ListScenesRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::ai::inworld::studio::v1alpha::ListScenesResponse, ::ai::inworld::studio::v1alpha::ListScenesRequest, ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(channel_.get(), cq, rpcmethod_ListScenes_, context, request);
}

::grpc::ClientAsyncResponseReader< ::ai::inworld::studio::v1alpha::ListScenesResponse>* Scenes::Stub::AsyncListScenesRaw(::grpc::ClientContext* context, const ::ai::inworld::studio::v1alpha::ListScenesRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncListScenesRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status Scenes::Stub::UpdateScene(::grpc::ClientContext* context, const ::ai::inworld::studio::v1alpha::UpdateSceneRequest& request, ::ai::inworld::studio::v1alpha::Scene* response) {
  return ::grpc::internal::BlockingUnaryCall< ::ai::inworld::studio::v1alpha::UpdateSceneRequest, ::ai::inworld::studio::v1alpha::Scene, ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(channel_.get(), rpcmethod_UpdateScene_, context, request, response);
}

void Scenes::Stub::experimental_async::UpdateScene(::grpc::ClientContext* context, const ::ai::inworld::studio::v1alpha::UpdateSceneRequest* request, ::ai::inworld::studio::v1alpha::Scene* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::ai::inworld::studio::v1alpha::UpdateSceneRequest, ::ai::inworld::studio::v1alpha::Scene, ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_UpdateScene_, context, request, response, std::move(f));
}

void Scenes::Stub::experimental_async::UpdateScene(::grpc::ClientContext* context, const ::ai::inworld::studio::v1alpha::UpdateSceneRequest* request, ::ai::inworld::studio::v1alpha::Scene* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_UpdateScene_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::ai::inworld::studio::v1alpha::Scene>* Scenes::Stub::PrepareAsyncUpdateSceneRaw(::grpc::ClientContext* context, const ::ai::inworld::studio::v1alpha::UpdateSceneRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::ai::inworld::studio::v1alpha::Scene, ::ai::inworld::studio::v1alpha::UpdateSceneRequest, ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(channel_.get(), cq, rpcmethod_UpdateScene_, context, request);
}

::grpc::ClientAsyncResponseReader< ::ai::inworld::studio::v1alpha::Scene>* Scenes::Stub::AsyncUpdateSceneRaw(::grpc::ClientContext* context, const ::ai::inworld::studio::v1alpha::UpdateSceneRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncUpdateSceneRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status Scenes::Stub::CreateScene(::grpc::ClientContext* context, const ::ai::inworld::studio::v1alpha::CreateSceneRequest& request, ::ai::inworld::studio::v1alpha::Scene* response) {
  return ::grpc::internal::BlockingUnaryCall< ::ai::inworld::studio::v1alpha::CreateSceneRequest, ::ai::inworld::studio::v1alpha::Scene, ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(channel_.get(), rpcmethod_CreateScene_, context, request, response);
}

void Scenes::Stub::experimental_async::CreateScene(::grpc::ClientContext* context, const ::ai::inworld::studio::v1alpha::CreateSceneRequest* request, ::ai::inworld::studio::v1alpha::Scene* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::ai::inworld::studio::v1alpha::CreateSceneRequest, ::ai::inworld::studio::v1alpha::Scene, ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_CreateScene_, context, request, response, std::move(f));
}

void Scenes::Stub::experimental_async::CreateScene(::grpc::ClientContext* context, const ::ai::inworld::studio::v1alpha::CreateSceneRequest* request, ::ai::inworld::studio::v1alpha::Scene* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_CreateScene_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::ai::inworld::studio::v1alpha::Scene>* Scenes::Stub::PrepareAsyncCreateSceneRaw(::grpc::ClientContext* context, const ::ai::inworld::studio::v1alpha::CreateSceneRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::ai::inworld::studio::v1alpha::Scene, ::ai::inworld::studio::v1alpha::CreateSceneRequest, ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(channel_.get(), cq, rpcmethod_CreateScene_, context, request);
}

::grpc::ClientAsyncResponseReader< ::ai::inworld::studio::v1alpha::Scene>* Scenes::Stub::AsyncCreateSceneRaw(::grpc::ClientContext* context, const ::ai::inworld::studio::v1alpha::CreateSceneRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncCreateSceneRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status Scenes::Stub::DeleteScene(::grpc::ClientContext* context, const ::ai::inworld::studio::v1alpha::DeleteSceneRequest& request, ::google::protobuf_inworld::Empty* response) {
  return ::grpc::internal::BlockingUnaryCall< ::ai::inworld::studio::v1alpha::DeleteSceneRequest, ::google::protobuf_inworld::Empty, ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(channel_.get(), rpcmethod_DeleteScene_, context, request, response);
}

void Scenes::Stub::experimental_async::DeleteScene(::grpc::ClientContext* context, const ::ai::inworld::studio::v1alpha::DeleteSceneRequest* request, ::google::protobuf_inworld::Empty* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::ai::inworld::studio::v1alpha::DeleteSceneRequest, ::google::protobuf_inworld::Empty, ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_DeleteScene_, context, request, response, std::move(f));
}

void Scenes::Stub::experimental_async::DeleteScene(::grpc::ClientContext* context, const ::ai::inworld::studio::v1alpha::DeleteSceneRequest* request, ::google::protobuf_inworld::Empty* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_DeleteScene_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::google::protobuf_inworld::Empty>* Scenes::Stub::PrepareAsyncDeleteSceneRaw(::grpc::ClientContext* context, const ::ai::inworld::studio::v1alpha::DeleteSceneRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::google::protobuf_inworld::Empty, ::ai::inworld::studio::v1alpha::DeleteSceneRequest, ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(channel_.get(), cq, rpcmethod_DeleteScene_, context, request);
}

::grpc::ClientAsyncResponseReader< ::google::protobuf_inworld::Empty>* Scenes::Stub::AsyncDeleteSceneRaw(::grpc::ClientContext* context, const ::ai::inworld::studio::v1alpha::DeleteSceneRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncDeleteSceneRaw(context, request, cq);
  result->StartCall();
  return result;
}

Scenes::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Scenes_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Scenes::Service, ::ai::inworld::studio::v1alpha::DeploySceneRequest, ::google::protobuf_inworld::Empty, ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(
          [](Scenes::Service* service,
             ::grpc::ServerContext* ctx,
             const ::ai::inworld::studio::v1alpha::DeploySceneRequest* req,
             ::google::protobuf_inworld::Empty* resp) {
               return service->DeployScene(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Scenes_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Scenes::Service, ::ai::inworld::studio::v1alpha::DeploySceneRequest, ::google::longrunning::Operation, ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(
          [](Scenes::Service* service,
             ::grpc::ServerContext* ctx,
             const ::ai::inworld::studio::v1alpha::DeploySceneRequest* req,
             ::google::longrunning::Operation* resp) {
               return service->DeploySceneAsynchronously(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Scenes_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Scenes::Service, ::ai::inworld::studio::v1alpha::GetSceneRequest, ::ai::inworld::studio::v1alpha::Scene, ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(
          [](Scenes::Service* service,
             ::grpc::ServerContext* ctx,
             const ::ai::inworld::studio::v1alpha::GetSceneRequest* req,
             ::ai::inworld::studio::v1alpha::Scene* resp) {
               return service->GetScene(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Scenes_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Scenes::Service, ::ai::inworld::studio::v1alpha::ListScenesRequest, ::ai::inworld::studio::v1alpha::ListScenesResponse, ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(
          [](Scenes::Service* service,
             ::grpc::ServerContext* ctx,
             const ::ai::inworld::studio::v1alpha::ListScenesRequest* req,
             ::ai::inworld::studio::v1alpha::ListScenesResponse* resp) {
               return service->ListScenes(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Scenes_method_names[4],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Scenes::Service, ::ai::inworld::studio::v1alpha::UpdateSceneRequest, ::ai::inworld::studio::v1alpha::Scene, ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(
          [](Scenes::Service* service,
             ::grpc::ServerContext* ctx,
             const ::ai::inworld::studio::v1alpha::UpdateSceneRequest* req,
             ::ai::inworld::studio::v1alpha::Scene* resp) {
               return service->UpdateScene(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Scenes_method_names[5],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Scenes::Service, ::ai::inworld::studio::v1alpha::CreateSceneRequest, ::ai::inworld::studio::v1alpha::Scene, ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(
          [](Scenes::Service* service,
             ::grpc::ServerContext* ctx,
             const ::ai::inworld::studio::v1alpha::CreateSceneRequest* req,
             ::ai::inworld::studio::v1alpha::Scene* resp) {
               return service->CreateScene(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Scenes_method_names[6],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Scenes::Service, ::ai::inworld::studio::v1alpha::DeleteSceneRequest, ::google::protobuf_inworld::Empty, ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(
          [](Scenes::Service* service,
             ::grpc::ServerContext* ctx,
             const ::ai::inworld::studio::v1alpha::DeleteSceneRequest* req,
             ::google::protobuf_inworld::Empty* resp) {
               return service->DeleteScene(ctx, req, resp);
             }, this)));
}

Scenes::Service::~Service() {
}

::grpc::Status Scenes::Service::DeployScene(::grpc::ServerContext* context, const ::ai::inworld::studio::v1alpha::DeploySceneRequest* request, ::google::protobuf_inworld::Empty* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Scenes::Service::DeploySceneAsynchronously(::grpc::ServerContext* context, const ::ai::inworld::studio::v1alpha::DeploySceneRequest* request, ::google::longrunning::Operation* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Scenes::Service::GetScene(::grpc::ServerContext* context, const ::ai::inworld::studio::v1alpha::GetSceneRequest* request, ::ai::inworld::studio::v1alpha::Scene* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Scenes::Service::ListScenes(::grpc::ServerContext* context, const ::ai::inworld::studio::v1alpha::ListScenesRequest* request, ::ai::inworld::studio::v1alpha::ListScenesResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Scenes::Service::UpdateScene(::grpc::ServerContext* context, const ::ai::inworld::studio::v1alpha::UpdateSceneRequest* request, ::ai::inworld::studio::v1alpha::Scene* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Scenes::Service::CreateScene(::grpc::ServerContext* context, const ::ai::inworld::studio::v1alpha::CreateSceneRequest* request, ::ai::inworld::studio::v1alpha::Scene* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Scenes::Service::DeleteScene(::grpc::ServerContext* context, const ::ai::inworld::studio::v1alpha::DeleteSceneRequest* request, ::google::protobuf_inworld::Empty* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace ai
}  // namespace inworld
}  // namespace studio
}  // namespace v1alpha

