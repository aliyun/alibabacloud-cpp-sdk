// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEXPOSEDSTATISTICSDETAILRESPONSEBODYSTATISTICSDETAILS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEXPOSEDSTATISTICSDETAILRESPONSEBODYSTATISTICSDETAILS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeExposedStatisticsDetailResponseBodyStatisticsDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeExposedStatisticsDetailResponseBodyStatisticsDetails& obj) { 
      DARABONBA_PTR_TO_JSON(ExposedCount, exposedCount_);
      DARABONBA_PTR_TO_JSON(ExposureComponent, exposureComponent_);
      DARABONBA_PTR_TO_JSON(ExposureIp, exposureIp_);
      DARABONBA_PTR_TO_JSON(ExposurePort, exposurePort_);
      DARABONBA_PTR_TO_JSON(ExposureType, exposureType_);
      DARABONBA_PTR_TO_JSON(ExposureTypeId, exposureTypeId_);
      DARABONBA_PTR_TO_JSON(ExposureTypeInstanceName, exposureTypeInstanceName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeExposedStatisticsDetailResponseBodyStatisticsDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(ExposedCount, exposedCount_);
      DARABONBA_PTR_FROM_JSON(ExposureComponent, exposureComponent_);
      DARABONBA_PTR_FROM_JSON(ExposureIp, exposureIp_);
      DARABONBA_PTR_FROM_JSON(ExposurePort, exposurePort_);
      DARABONBA_PTR_FROM_JSON(ExposureType, exposureType_);
      DARABONBA_PTR_FROM_JSON(ExposureTypeId, exposureTypeId_);
      DARABONBA_PTR_FROM_JSON(ExposureTypeInstanceName, exposureTypeInstanceName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeExposedStatisticsDetailResponseBodyStatisticsDetails() = default ;
    DescribeExposedStatisticsDetailResponseBodyStatisticsDetails(const DescribeExposedStatisticsDetailResponseBodyStatisticsDetails &) = default ;
    DescribeExposedStatisticsDetailResponseBodyStatisticsDetails(DescribeExposedStatisticsDetailResponseBodyStatisticsDetails &&) = default ;
    DescribeExposedStatisticsDetailResponseBodyStatisticsDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeExposedStatisticsDetailResponseBodyStatisticsDetails() = default ;
    DescribeExposedStatisticsDetailResponseBodyStatisticsDetails& operator=(const DescribeExposedStatisticsDetailResponseBodyStatisticsDetails &) = default ;
    DescribeExposedStatisticsDetailResponseBodyStatisticsDetails& operator=(DescribeExposedStatisticsDetailResponseBodyStatisticsDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->exposedCount_ != nullptr
        && this->exposureComponent_ != nullptr && this->exposureIp_ != nullptr && this->exposurePort_ != nullptr && this->exposureType_ != nullptr && this->exposureTypeId_ != nullptr
        && this->exposureTypeInstanceName_ != nullptr && this->regionId_ != nullptr; };
    // exposedCount Field Functions 
    bool hasExposedCount() const { return this->exposedCount_ != nullptr;};
    void deleteExposedCount() { this->exposedCount_ = nullptr;};
    inline int32_t exposedCount() const { DARABONBA_PTR_GET_DEFAULT(exposedCount_, 0) };
    inline DescribeExposedStatisticsDetailResponseBodyStatisticsDetails& setExposedCount(int32_t exposedCount) { DARABONBA_PTR_SET_VALUE(exposedCount_, exposedCount) };


    // exposureComponent Field Functions 
    bool hasExposureComponent() const { return this->exposureComponent_ != nullptr;};
    void deleteExposureComponent() { this->exposureComponent_ = nullptr;};
    inline string exposureComponent() const { DARABONBA_PTR_GET_DEFAULT(exposureComponent_, "") };
    inline DescribeExposedStatisticsDetailResponseBodyStatisticsDetails& setExposureComponent(string exposureComponent) { DARABONBA_PTR_SET_VALUE(exposureComponent_, exposureComponent) };


    // exposureIp Field Functions 
    bool hasExposureIp() const { return this->exposureIp_ != nullptr;};
    void deleteExposureIp() { this->exposureIp_ = nullptr;};
    inline string exposureIp() const { DARABONBA_PTR_GET_DEFAULT(exposureIp_, "") };
    inline DescribeExposedStatisticsDetailResponseBodyStatisticsDetails& setExposureIp(string exposureIp) { DARABONBA_PTR_SET_VALUE(exposureIp_, exposureIp) };


    // exposurePort Field Functions 
    bool hasExposurePort() const { return this->exposurePort_ != nullptr;};
    void deleteExposurePort() { this->exposurePort_ = nullptr;};
    inline string exposurePort() const { DARABONBA_PTR_GET_DEFAULT(exposurePort_, "") };
    inline DescribeExposedStatisticsDetailResponseBodyStatisticsDetails& setExposurePort(string exposurePort) { DARABONBA_PTR_SET_VALUE(exposurePort_, exposurePort) };


    // exposureType Field Functions 
    bool hasExposureType() const { return this->exposureType_ != nullptr;};
    void deleteExposureType() { this->exposureType_ = nullptr;};
    inline string exposureType() const { DARABONBA_PTR_GET_DEFAULT(exposureType_, "") };
    inline DescribeExposedStatisticsDetailResponseBodyStatisticsDetails& setExposureType(string exposureType) { DARABONBA_PTR_SET_VALUE(exposureType_, exposureType) };


    // exposureTypeId Field Functions 
    bool hasExposureTypeId() const { return this->exposureTypeId_ != nullptr;};
    void deleteExposureTypeId() { this->exposureTypeId_ = nullptr;};
    inline string exposureTypeId() const { DARABONBA_PTR_GET_DEFAULT(exposureTypeId_, "") };
    inline DescribeExposedStatisticsDetailResponseBodyStatisticsDetails& setExposureTypeId(string exposureTypeId) { DARABONBA_PTR_SET_VALUE(exposureTypeId_, exposureTypeId) };


    // exposureTypeInstanceName Field Functions 
    bool hasExposureTypeInstanceName() const { return this->exposureTypeInstanceName_ != nullptr;};
    void deleteExposureTypeInstanceName() { this->exposureTypeInstanceName_ = nullptr;};
    inline string exposureTypeInstanceName() const { DARABONBA_PTR_GET_DEFAULT(exposureTypeInstanceName_, "") };
    inline DescribeExposedStatisticsDetailResponseBodyStatisticsDetails& setExposureTypeInstanceName(string exposureTypeInstanceName) { DARABONBA_PTR_SET_VALUE(exposureTypeInstanceName_, exposureTypeInstanceName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeExposedStatisticsDetailResponseBodyStatisticsDetails& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The total number of system vulnerabilities that are detected on your server and are exposed on the Internet.
    std::shared_ptr<int32_t> exposedCount_ = nullptr;
    // The system component that is exposed on the Internet.
    std::shared_ptr<string> exposureComponent_ = nullptr;
    // The public IP address that is exposed on the Internet.
    std::shared_ptr<string> exposureIp_ = nullptr;
    // The port that is exposed on the Internet.
    std::shared_ptr<string> exposurePort_ = nullptr;
    // The resource from which the asset is exposed. Valid values:
    // 
    // *   **INTERNET_IP**: the IP address of the Elastic Compute Service (ECS) instance
    // *   **SLB**: the public IP address of the SLB instance
    // *   **EIP**: the elastic IP address (EIP)
    // *   **DNAT**: the NAT gateway that connects to the Internet by using the DNAT feature
    std::shared_ptr<string> exposureType_ = nullptr;
    // The ID of the instance to which the resource belongs. The valid values of this parameter vary based on the value of the ExposureType parameter.
    // 
    // *   If the value of the **ExposureType** parameter is **INTERNET_IP**, the value of this parameter is an empty string.
    // *   If the value of the **ExposureType** parameter is **SLB**, the value of this parameter is the ID of the Internet-facing SLB instance.
    // *   If the value of the **ExposureType** parameter is **EIP**, the value of this parameter is the ID of the EIP.
    // *   If the value of the **ExposureType** parameter is **DNAT**, the value of this parameter is the ID of the NAT gateway.
    std::shared_ptr<string> exposureTypeId_ = nullptr;
    // The name of the gateway asset that is exposed on the Internet.
    std::shared_ptr<string> exposureTypeInstanceName_ = nullptr;
    // The region ID of the asset.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
