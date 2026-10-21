// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIMAGECACHEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETIMAGECACHEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class GetImageCacheRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetImageCacheRequest& obj) { 
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetImageCacheRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
    };
    GetImageCacheRequest() = default ;
    GetImageCacheRequest(const GetImageCacheRequest &) = default ;
    GetImageCacheRequest(GetImageCacheRequest &&) = default ;
    GetImageCacheRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetImageCacheRequest() = default ;
    GetImageCacheRequest& operator=(const GetImageCacheRequest &) = default ;
    GetImageCacheRequest& operator=(GetImageCacheRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr
        && this->workspaceId_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetImageCacheRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline GetImageCacheRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
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
