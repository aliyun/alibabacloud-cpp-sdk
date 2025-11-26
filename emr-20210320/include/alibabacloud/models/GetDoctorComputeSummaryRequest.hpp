// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCTORCOMPUTESUMMARYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDOCTORCOMPUTESUMMARYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDoctorComputeSummaryRequestComponentInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class GetDoctorComputeSummaryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDoctorComputeSummaryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ComponentInfo, componentInfo_);
      DARABONBA_PTR_TO_JSON(DateTime, dateTime_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDoctorComputeSummaryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ComponentInfo, componentInfo_);
      DARABONBA_PTR_FROM_JSON(DateTime, dateTime_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    GetDoctorComputeSummaryRequest() = default ;
    GetDoctorComputeSummaryRequest(const GetDoctorComputeSummaryRequest &) = default ;
    GetDoctorComputeSummaryRequest(GetDoctorComputeSummaryRequest &&) = default ;
    GetDoctorComputeSummaryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDoctorComputeSummaryRequest() = default ;
    GetDoctorComputeSummaryRequest& operator=(const GetDoctorComputeSummaryRequest &) = default ;
    GetDoctorComputeSummaryRequest& operator=(GetDoctorComputeSummaryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->componentInfo_ == nullptr && return this->dateTime_ == nullptr && return this->regionId_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline GetDoctorComputeSummaryRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // componentInfo Field Functions 
    bool hasComponentInfo() const { return this->componentInfo_ != nullptr;};
    void deleteComponentInfo() { this->componentInfo_ = nullptr;};
    inline const GetDoctorComputeSummaryRequestComponentInfo & componentInfo() const { DARABONBA_PTR_GET_CONST(componentInfo_, GetDoctorComputeSummaryRequestComponentInfo) };
    inline GetDoctorComputeSummaryRequestComponentInfo componentInfo() { DARABONBA_PTR_GET(componentInfo_, GetDoctorComputeSummaryRequestComponentInfo) };
    inline GetDoctorComputeSummaryRequest& setComponentInfo(const GetDoctorComputeSummaryRequestComponentInfo & componentInfo) { DARABONBA_PTR_SET_VALUE(componentInfo_, componentInfo) };
    inline GetDoctorComputeSummaryRequest& setComponentInfo(GetDoctorComputeSummaryRequestComponentInfo && componentInfo) { DARABONBA_PTR_SET_RVALUE(componentInfo_, componentInfo) };


    // dateTime Field Functions 
    bool hasDateTime() const { return this->dateTime_ != nullptr;};
    void deleteDateTime() { this->dateTime_ = nullptr;};
    inline string dateTime() const { DARABONBA_PTR_GET_DEFAULT(dateTime_, "") };
    inline GetDoctorComputeSummaryRequest& setDateTime(string dateTime) { DARABONBA_PTR_SET_VALUE(dateTime_, dateTime) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetDoctorComputeSummaryRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The cluster ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The resource information, which is used to filter the results.
    std::shared_ptr<GetDoctorComputeSummaryRequestComponentInfo> componentInfo_ = nullptr;
    // Specify the date in the ISO 8601 standard. For example, 2023-01-01 represents January 1, 2023.
    // 
    // This parameter is required.
    std::shared_ptr<string> dateTime_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
