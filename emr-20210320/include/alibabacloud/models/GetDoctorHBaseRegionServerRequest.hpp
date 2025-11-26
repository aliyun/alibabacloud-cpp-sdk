// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCTORHBASEREGIONSERVERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDOCTORHBASEREGIONSERVERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class GetDoctorHBaseRegionServerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDoctorHBaseRegionServerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(DateTime, dateTime_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RegionServerHost, regionServerHost_);
    };
    friend void from_json(const Darabonba::Json& j, GetDoctorHBaseRegionServerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(DateTime, dateTime_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RegionServerHost, regionServerHost_);
    };
    GetDoctorHBaseRegionServerRequest() = default ;
    GetDoctorHBaseRegionServerRequest(const GetDoctorHBaseRegionServerRequest &) = default ;
    GetDoctorHBaseRegionServerRequest(GetDoctorHBaseRegionServerRequest &&) = default ;
    GetDoctorHBaseRegionServerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDoctorHBaseRegionServerRequest() = default ;
    GetDoctorHBaseRegionServerRequest& operator=(const GetDoctorHBaseRegionServerRequest &) = default ;
    GetDoctorHBaseRegionServerRequest& operator=(GetDoctorHBaseRegionServerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->dateTime_ == nullptr && return this->regionId_ == nullptr && return this->regionServerHost_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline GetDoctorHBaseRegionServerRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // dateTime Field Functions 
    bool hasDateTime() const { return this->dateTime_ != nullptr;};
    void deleteDateTime() { this->dateTime_ = nullptr;};
    inline string dateTime() const { DARABONBA_PTR_GET_DEFAULT(dateTime_, "") };
    inline GetDoctorHBaseRegionServerRequest& setDateTime(string dateTime) { DARABONBA_PTR_SET_VALUE(dateTime_, dateTime) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetDoctorHBaseRegionServerRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // regionServerHost Field Functions 
    bool hasRegionServerHost() const { return this->regionServerHost_ != nullptr;};
    void deleteRegionServerHost() { this->regionServerHost_ = nullptr;};
    inline string regionServerHost() const { DARABONBA_PTR_GET_DEFAULT(regionServerHost_, "") };
    inline GetDoctorHBaseRegionServerRequest& setRegionServerHost(string regionServerHost) { DARABONBA_PTR_SET_VALUE(regionServerHost_, regionServerHost) };


  protected:
    // The cluster ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The date.
    // 
    // This parameter is required.
    std::shared_ptr<string> dateTime_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The host of the region server.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionServerHost_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
