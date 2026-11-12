// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIMAGECACHESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEIMAGECACHESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class CreateImageCacheShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateImageCacheShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, bodyShrink_);
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateImageCacheShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, bodyShrink_);
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
    };
    CreateImageCacheShrinkRequest() = default ;
    CreateImageCacheShrinkRequest(const CreateImageCacheShrinkRequest &) = default ;
    CreateImageCacheShrinkRequest(CreateImageCacheShrinkRequest &&) = default ;
    CreateImageCacheShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateImageCacheShrinkRequest() = default ;
    CreateImageCacheShrinkRequest& operator=(const CreateImageCacheShrinkRequest &) = default ;
    CreateImageCacheShrinkRequest& operator=(CreateImageCacheShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bodyShrink_ == nullptr
        && this->clientToken_ == nullptr && this->regionId_ == nullptr && this->workspaceId_ == nullptr; };
    // bodyShrink Field Functions 
    bool hasBodyShrink() const { return this->bodyShrink_ != nullptr;};
    void deleteBodyShrink() { this->bodyShrink_ = nullptr;};
    inline string getBodyShrink() const { DARABONBA_PTR_GET_DEFAULT(bodyShrink_, "") };
    inline CreateImageCacheShrinkRequest& setBodyShrink(string bodyShrink) { DARABONBA_PTR_SET_VALUE(bodyShrink_, bodyShrink) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateImageCacheShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateImageCacheShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateImageCacheShrinkRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The request body for creating an image cache.
    // 
    // This parameter is required.
    shared_ptr<string> bodyShrink_ {};
    // The non-empty request identifier passed as a query parameter. The current implementation does not guarantee deduplication based on this identifier or recovery of the original acceptance result.
    // 
    // This parameter is required.
    shared_ptr<string> clientToken_ {};
    // The product entry region. This parameter is passed as a query parameter and must match the selected region endpoint and the workspace region.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The workspace ID.
    // 
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
