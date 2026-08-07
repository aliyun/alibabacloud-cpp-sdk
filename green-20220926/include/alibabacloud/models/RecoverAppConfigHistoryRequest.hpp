// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOVERAPPCONFIGHISTORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RECOVERAPPCONFIGHISTORYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class RecoverAppConfigHistoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecoverAppConfigHistoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppVersion, appVersion_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, RecoverAppConfigHistoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppVersion, appVersion_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    RecoverAppConfigHistoryRequest() = default ;
    RecoverAppConfigHistoryRequest(const RecoverAppConfigHistoryRequest &) = default ;
    RecoverAppConfigHistoryRequest(RecoverAppConfigHistoryRequest &&) = default ;
    RecoverAppConfigHistoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecoverAppConfigHistoryRequest() = default ;
    RecoverAppConfigHistoryRequest& operator=(const RecoverAppConfigHistoryRequest &) = default ;
    RecoverAppConfigHistoryRequest& operator=(RecoverAppConfigHistoryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->appVersion_ == nullptr && this->regionId_ == nullptr && this->resourceType_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline RecoverAppConfigHistoryRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appVersion Field Functions 
    bool hasAppVersion() const { return this->appVersion_ != nullptr;};
    void deleteAppVersion() { this->appVersion_ = nullptr;};
    inline int64_t getAppVersion() const { DARABONBA_PTR_GET_DEFAULT(appVersion_, 0L) };
    inline RecoverAppConfigHistoryRequest& setAppVersion(int64_t appVersion) { DARABONBA_PTR_SET_VALUE(appVersion_, appVersion) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline RecoverAppConfigHistoryRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline RecoverAppConfigHistoryRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    // App ID。
    shared_ptr<string> appId_ {};
    // The version number.
    shared_ptr<int64_t> appVersion_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The resource type.
    shared_ptr<string> resourceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
