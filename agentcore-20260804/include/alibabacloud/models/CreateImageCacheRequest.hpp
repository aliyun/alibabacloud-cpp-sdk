// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIMAGECACHEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEIMAGECACHEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class CreateImageCacheRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateImageCacheRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateImageCacheRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
    };
    CreateImageCacheRequest() = default ;
    CreateImageCacheRequest(const CreateImageCacheRequest &) = default ;
    CreateImageCacheRequest(CreateImageCacheRequest &&) = default ;
    CreateImageCacheRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateImageCacheRequest() = default ;
    CreateImageCacheRequest& operator=(const CreateImageCacheRequest &) = default ;
    CreateImageCacheRequest& operator=(CreateImageCacheRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Body : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Body& obj) { 
        DARABONBA_PTR_TO_JSON(accessInternet, accessInternet_);
        DARABONBA_PTR_TO_JSON(accessVpc, accessVpc_);
        DARABONBA_PTR_TO_JSON(acrInstanceId, acrInstanceId_);
        DARABONBA_PTR_TO_JSON(namespace, namespace_);
        DARABONBA_PTR_TO_JSON(repository, repository_);
        DARABONBA_PTR_TO_JSON(tag, tag_);
      };
      friend void from_json(const Darabonba::Json& j, Body& obj) { 
        DARABONBA_PTR_FROM_JSON(accessInternet, accessInternet_);
        DARABONBA_PTR_FROM_JSON(accessVpc, accessVpc_);
        DARABONBA_PTR_FROM_JSON(acrInstanceId, acrInstanceId_);
        DARABONBA_PTR_FROM_JSON(namespace, namespace_);
        DARABONBA_PTR_FROM_JSON(repository, repository_);
        DARABONBA_PTR_FROM_JSON(tag, tag_);
      };
      Body() = default ;
      Body(const Body &) = default ;
      Body(Body &&) = default ;
      Body(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Body() = default ;
      Body& operator=(const Body &) = default ;
      Body& operator=(Body &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accessInternet_ == nullptr
        && this->accessVpc_ == nullptr && this->acrInstanceId_ == nullptr && this->namespace_ == nullptr && this->repository_ == nullptr && this->tag_ == nullptr; };
      // accessInternet Field Functions 
      bool hasAccessInternet() const { return this->accessInternet_ != nullptr;};
      void deleteAccessInternet() { this->accessInternet_ = nullptr;};
      inline bool getAccessInternet() const { DARABONBA_PTR_GET_DEFAULT(accessInternet_, false) };
      inline Body& setAccessInternet(bool accessInternet) { DARABONBA_PTR_SET_VALUE(accessInternet_, accessInternet) };


      // accessVpc Field Functions 
      bool hasAccessVpc() const { return this->accessVpc_ != nullptr;};
      void deleteAccessVpc() { this->accessVpc_ = nullptr;};
      inline bool getAccessVpc() const { DARABONBA_PTR_GET_DEFAULT(accessVpc_, false) };
      inline Body& setAccessVpc(bool accessVpc) { DARABONBA_PTR_SET_VALUE(accessVpc_, accessVpc) };


      // acrInstanceId Field Functions 
      bool hasAcrInstanceId() const { return this->acrInstanceId_ != nullptr;};
      void deleteAcrInstanceId() { this->acrInstanceId_ = nullptr;};
      inline string getAcrInstanceId() const { DARABONBA_PTR_GET_DEFAULT(acrInstanceId_, "") };
      inline Body& setAcrInstanceId(string acrInstanceId) { DARABONBA_PTR_SET_VALUE(acrInstanceId_, acrInstanceId) };


      // namespace Field Functions 
      bool hasNamespace() const { return this->namespace_ != nullptr;};
      void deleteNamespace() { this->namespace_ = nullptr;};
      inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
      inline Body& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


      // repository Field Functions 
      bool hasRepository() const { return this->repository_ != nullptr;};
      void deleteRepository() { this->repository_ = nullptr;};
      inline string getRepository() const { DARABONBA_PTR_GET_DEFAULT(repository_, "") };
      inline Body& setRepository(string repository) { DARABONBA_PTR_SET_VALUE(repository_, repository) };


      // tag Field Functions 
      bool hasTag() const { return this->tag_ != nullptr;};
      void deleteTag() { this->tag_ = nullptr;};
      inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
      inline Body& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


    protected:
      // Specifies whether to allow the current source reading and transfer to use the public network. At least one of this parameter and accessVpc must be set to true. The server verifies the access conditions of the current workspace.
      // 
      // This parameter is required.
      shared_ptr<bool> accessInternet_ {};
      // Specifies whether to allow the current source reading and transfer to use a VPC. At least one of this parameter and accessInternet must be set to true. The server parses the trusted network of the current workspace and does not modify the agent runtime network.
      // 
      // This parameter is required.
      shared_ptr<bool> accessVpc_ {};
      // The ID of the source ACR Enterprise instance.
      // 
      // This parameter is required.
      shared_ptr<string> acrInstanceId_ {};
      // The namespace of the source ACR.
      // 
      // This parameter is required.
      shared_ptr<string> namespace_ {};
      // The name of the repository under the namespace. Do not include the namespace repeatedly.
      // 
      // This parameter is required.
      shared_ptr<string> repository_ {};
      // The selected tag of the source image.
      // 
      // This parameter is required.
      shared_ptr<string> tag_ {};
    };

    virtual bool empty() const override { return this->body_ == nullptr
        && this->clientToken_ == nullptr && this->regionId_ == nullptr && this->workspaceId_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const CreateImageCacheRequest::Body & getBody() const { DARABONBA_PTR_GET_CONST(body_, CreateImageCacheRequest::Body) };
    inline CreateImageCacheRequest::Body getBody() { DARABONBA_PTR_GET(body_, CreateImageCacheRequest::Body) };
    inline CreateImageCacheRequest& setBody(const CreateImageCacheRequest::Body & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateImageCacheRequest& setBody(CreateImageCacheRequest::Body && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateImageCacheRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateImageCacheRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateImageCacheRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The business parameters for creating an image cache.
    // 
    // This parameter is required.
    shared_ptr<CreateImageCacheRequest::Body> body_ {};
    // This parameter is required and cannot be empty. It is reserved to be compatible with the API. Currently, it does not provide the ability to deduplicate requests or recover the original result based on this field. If a timeout occurs or the result is unconfirmed, query the query cache status first before deciding whether to recommit.
    // 
    // This parameter is required.
    shared_ptr<string> clientToken_ {};
    // The product entry region, which is determined by the selected region endpoint.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The current routed workspace. The server verifies the account, region, and resource ownership. This parameter cannot be omitted or used to access other workspaces.
    // 
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
