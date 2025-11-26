// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCTORHBASEREGIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDOCTORHBASEREGIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class GetDoctorHBaseRegionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDoctorHBaseRegionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(DateTime, dateTime_);
      DARABONBA_PTR_TO_JSON(HbaseRegionId, hbaseRegionId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDoctorHBaseRegionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(DateTime, dateTime_);
      DARABONBA_PTR_FROM_JSON(HbaseRegionId, hbaseRegionId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    GetDoctorHBaseRegionRequest() = default ;
    GetDoctorHBaseRegionRequest(const GetDoctorHBaseRegionRequest &) = default ;
    GetDoctorHBaseRegionRequest(GetDoctorHBaseRegionRequest &&) = default ;
    GetDoctorHBaseRegionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDoctorHBaseRegionRequest() = default ;
    GetDoctorHBaseRegionRequest& operator=(const GetDoctorHBaseRegionRequest &) = default ;
    GetDoctorHBaseRegionRequest& operator=(GetDoctorHBaseRegionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->dateTime_ == nullptr && return this->hbaseRegionId_ == nullptr && return this->regionId_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline GetDoctorHBaseRegionRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // dateTime Field Functions 
    bool hasDateTime() const { return this->dateTime_ != nullptr;};
    void deleteDateTime() { this->dateTime_ = nullptr;};
    inline string dateTime() const { DARABONBA_PTR_GET_DEFAULT(dateTime_, "") };
    inline GetDoctorHBaseRegionRequest& setDateTime(string dateTime) { DARABONBA_PTR_SET_VALUE(dateTime_, dateTime) };


    // hbaseRegionId Field Functions 
    bool hasHbaseRegionId() const { return this->hbaseRegionId_ != nullptr;};
    void deleteHbaseRegionId() { this->hbaseRegionId_ = nullptr;};
    inline string hbaseRegionId() const { DARABONBA_PTR_GET_DEFAULT(hbaseRegionId_, "") };
    inline GetDoctorHBaseRegionRequest& setHbaseRegionId(string hbaseRegionId) { DARABONBA_PTR_SET_VALUE(hbaseRegionId_, hbaseRegionId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetDoctorHBaseRegionRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // Cluster ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // Date.
    // 
    // This parameter is required.
    std::shared_ptr<string> dateTime_ = nullptr;
    // Region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> hbaseRegionId_ = nullptr;
    // Region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
