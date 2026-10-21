// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RETRYIMAGECACHESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RETRYIMAGECACHESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class RetryImageCacheShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RetryImageCacheShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, bodyShrink_);
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, RetryImageCacheShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, bodyShrink_);
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
    };
    RetryImageCacheShrinkRequest() = default ;
    RetryImageCacheShrinkRequest(const RetryImageCacheShrinkRequest &) = default ;
    RetryImageCacheShrinkRequest(RetryImageCacheShrinkRequest &&) = default ;
    RetryImageCacheShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RetryImageCacheShrinkRequest() = default ;
    RetryImageCacheShrinkRequest& operator=(const RetryImageCacheShrinkRequest &) = default ;
    RetryImageCacheShrinkRequest& operator=(RetryImageCacheShrinkRequest &&) = default ;
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
    inline RetryImageCacheShrinkRequest& setBodyShrink(string bodyShrink) { DARABONBA_PTR_SET_VALUE(bodyShrink_, bodyShrink) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline RetryImageCacheShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline RetryImageCacheShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline RetryImageCacheShrinkRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The request body is a fixed empty object {}. WorkspaceId is passed as a query parameter. Do not pass the Pool, role, Digest, or network parameters.
    shared_ptr<string> bodyShrink_ {};
    // This parameter is required and cannot be empty. It is reserved to keep the API compatible. This field does not currently deduplicate requests or recover the original result. If a timeout occurs or the result is not confirmed, query the query cache status first before deciding whether to commit again.
    // 
    // This parameter is required.
    shared_ptr<string> clientToken_ {};
    // The product entry region, which is determined by the selected region endpoint.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The current routed workspace. The server verifies the account, region, and resource ownership. You cannot omit this parameter or use it to access other workspaces.
    // 
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
