// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEMBODIEDAIPLATFORMRESOURCEUSAGEINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETEMBODIEDAIPLATFORMRESOURCEUSAGEINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ADBAI20250812
{
namespace Models
{
  class GetEmbodiedAIPlatformResourceUsageInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEmbodiedAIPlatformResourceUsageInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(PlatformName, platformName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetEmbodiedAIPlatformResourceUsageInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(PlatformName, platformName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    GetEmbodiedAIPlatformResourceUsageInfoRequest() = default ;
    GetEmbodiedAIPlatformResourceUsageInfoRequest(const GetEmbodiedAIPlatformResourceUsageInfoRequest &) = default ;
    GetEmbodiedAIPlatformResourceUsageInfoRequest(GetEmbodiedAIPlatformResourceUsageInfoRequest &&) = default ;
    GetEmbodiedAIPlatformResourceUsageInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEmbodiedAIPlatformResourceUsageInfoRequest() = default ;
    GetEmbodiedAIPlatformResourceUsageInfoRequest& operator=(const GetEmbodiedAIPlatformResourceUsageInfoRequest &) = default ;
    GetEmbodiedAIPlatformResourceUsageInfoRequest& operator=(GetEmbodiedAIPlatformResourceUsageInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->endTime_ == nullptr && this->platformName_ == nullptr && this->regionId_ == nullptr && this->startTime_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline GetEmbodiedAIPlatformResourceUsageInfoRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetEmbodiedAIPlatformResourceUsageInfoRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // platformName Field Functions 
    bool hasPlatformName() const { return this->platformName_ != nullptr;};
    void deletePlatformName() { this->platformName_ = nullptr;};
    inline string getPlatformName() const { DARABONBA_PTR_GET_DEFAULT(platformName_, "") };
    inline GetEmbodiedAIPlatformResourceUsageInfoRequest& setPlatformName(string platformName) { DARABONBA_PTR_SET_VALUE(platformName_, platformName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetEmbodiedAIPlatformResourceUsageInfoRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetEmbodiedAIPlatformResourceUsageInfoRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // Use the UTC time format: yyyy-MM-ddTHH:mmZ
    shared_ptr<string> endTime_ {};
    shared_ptr<string> platformName_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // Use the UTC time format: yyyy-MM-ddTHH:mmZ
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ADBAI20250812
#endif
