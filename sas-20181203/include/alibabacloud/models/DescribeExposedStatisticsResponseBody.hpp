// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEXPOSEDSTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEXPOSEDSTATISTICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeExposedStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeExposedStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ExposedAsapVulCount, exposedAsapVulCount_);
      DARABONBA_PTR_TO_JSON(ExposedComponentCount, exposedComponentCount_);
      DARABONBA_PTR_TO_JSON(ExposedDdsCount, exposedDdsCount_);
      DARABONBA_PTR_TO_JSON(ExposedEcsCount, exposedEcsCount_);
      DARABONBA_PTR_TO_JSON(ExposedInstanceCount, exposedInstanceCount_);
      DARABONBA_PTR_TO_JSON(ExposedIpCount, exposedIpCount_);
      DARABONBA_PTR_TO_JSON(ExposedKvstoreCount, exposedKvstoreCount_);
      DARABONBA_PTR_TO_JSON(ExposedLaterVulCount, exposedLaterVulCount_);
      DARABONBA_PTR_TO_JSON(ExposedNntfVulCount, exposedNntfVulCount_);
      DARABONBA_PTR_TO_JSON(ExposedPortCount, exposedPortCount_);
      DARABONBA_PTR_TO_JSON(ExposedRdsCount, exposedRdsCount_);
      DARABONBA_PTR_TO_JSON(ExposedWeekPasswordMachineCount, exposedWeekPasswordMachineCount_);
      DARABONBA_PTR_TO_JSON(GatewayAssetCount, gatewayAssetCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeExposedStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ExposedAsapVulCount, exposedAsapVulCount_);
      DARABONBA_PTR_FROM_JSON(ExposedComponentCount, exposedComponentCount_);
      DARABONBA_PTR_FROM_JSON(ExposedDdsCount, exposedDdsCount_);
      DARABONBA_PTR_FROM_JSON(ExposedEcsCount, exposedEcsCount_);
      DARABONBA_PTR_FROM_JSON(ExposedInstanceCount, exposedInstanceCount_);
      DARABONBA_PTR_FROM_JSON(ExposedIpCount, exposedIpCount_);
      DARABONBA_PTR_FROM_JSON(ExposedKvstoreCount, exposedKvstoreCount_);
      DARABONBA_PTR_FROM_JSON(ExposedLaterVulCount, exposedLaterVulCount_);
      DARABONBA_PTR_FROM_JSON(ExposedNntfVulCount, exposedNntfVulCount_);
      DARABONBA_PTR_FROM_JSON(ExposedPortCount, exposedPortCount_);
      DARABONBA_PTR_FROM_JSON(ExposedRdsCount, exposedRdsCount_);
      DARABONBA_PTR_FROM_JSON(ExposedWeekPasswordMachineCount, exposedWeekPasswordMachineCount_);
      DARABONBA_PTR_FROM_JSON(GatewayAssetCount, gatewayAssetCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeExposedStatisticsResponseBody() = default ;
    DescribeExposedStatisticsResponseBody(const DescribeExposedStatisticsResponseBody &) = default ;
    DescribeExposedStatisticsResponseBody(DescribeExposedStatisticsResponseBody &&) = default ;
    DescribeExposedStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeExposedStatisticsResponseBody() = default ;
    DescribeExposedStatisticsResponseBody& operator=(const DescribeExposedStatisticsResponseBody &) = default ;
    DescribeExposedStatisticsResponseBody& operator=(DescribeExposedStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->exposedAsapVulCount_ != nullptr
        && this->exposedComponentCount_ != nullptr && this->exposedDdsCount_ != nullptr && this->exposedEcsCount_ != nullptr && this->exposedInstanceCount_ != nullptr && this->exposedIpCount_ != nullptr
        && this->exposedKvstoreCount_ != nullptr && this->exposedLaterVulCount_ != nullptr && this->exposedNntfVulCount_ != nullptr && this->exposedPortCount_ != nullptr && this->exposedRdsCount_ != nullptr
        && this->exposedWeekPasswordMachineCount_ != nullptr && this->gatewayAssetCount_ != nullptr && this->requestId_ != nullptr; };
    // exposedAsapVulCount Field Functions 
    bool hasExposedAsapVulCount() const { return this->exposedAsapVulCount_ != nullptr;};
    void deleteExposedAsapVulCount() { this->exposedAsapVulCount_ = nullptr;};
    inline int32_t exposedAsapVulCount() const { DARABONBA_PTR_GET_DEFAULT(exposedAsapVulCount_, 0) };
    inline DescribeExposedStatisticsResponseBody& setExposedAsapVulCount(int32_t exposedAsapVulCount) { DARABONBA_PTR_SET_VALUE(exposedAsapVulCount_, exposedAsapVulCount) };


    // exposedComponentCount Field Functions 
    bool hasExposedComponentCount() const { return this->exposedComponentCount_ != nullptr;};
    void deleteExposedComponentCount() { this->exposedComponentCount_ = nullptr;};
    inline int32_t exposedComponentCount() const { DARABONBA_PTR_GET_DEFAULT(exposedComponentCount_, 0) };
    inline DescribeExposedStatisticsResponseBody& setExposedComponentCount(int32_t exposedComponentCount) { DARABONBA_PTR_SET_VALUE(exposedComponentCount_, exposedComponentCount) };


    // exposedDdsCount Field Functions 
    bool hasExposedDdsCount() const { return this->exposedDdsCount_ != nullptr;};
    void deleteExposedDdsCount() { this->exposedDdsCount_ = nullptr;};
    inline int32_t exposedDdsCount() const { DARABONBA_PTR_GET_DEFAULT(exposedDdsCount_, 0) };
    inline DescribeExposedStatisticsResponseBody& setExposedDdsCount(int32_t exposedDdsCount) { DARABONBA_PTR_SET_VALUE(exposedDdsCount_, exposedDdsCount) };


    // exposedEcsCount Field Functions 
    bool hasExposedEcsCount() const { return this->exposedEcsCount_ != nullptr;};
    void deleteExposedEcsCount() { this->exposedEcsCount_ = nullptr;};
    inline int32_t exposedEcsCount() const { DARABONBA_PTR_GET_DEFAULT(exposedEcsCount_, 0) };
    inline DescribeExposedStatisticsResponseBody& setExposedEcsCount(int32_t exposedEcsCount) { DARABONBA_PTR_SET_VALUE(exposedEcsCount_, exposedEcsCount) };


    // exposedInstanceCount Field Functions 
    bool hasExposedInstanceCount() const { return this->exposedInstanceCount_ != nullptr;};
    void deleteExposedInstanceCount() { this->exposedInstanceCount_ = nullptr;};
    inline int32_t exposedInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(exposedInstanceCount_, 0) };
    inline DescribeExposedStatisticsResponseBody& setExposedInstanceCount(int32_t exposedInstanceCount) { DARABONBA_PTR_SET_VALUE(exposedInstanceCount_, exposedInstanceCount) };


    // exposedIpCount Field Functions 
    bool hasExposedIpCount() const { return this->exposedIpCount_ != nullptr;};
    void deleteExposedIpCount() { this->exposedIpCount_ = nullptr;};
    inline int32_t exposedIpCount() const { DARABONBA_PTR_GET_DEFAULT(exposedIpCount_, 0) };
    inline DescribeExposedStatisticsResponseBody& setExposedIpCount(int32_t exposedIpCount) { DARABONBA_PTR_SET_VALUE(exposedIpCount_, exposedIpCount) };


    // exposedKvstoreCount Field Functions 
    bool hasExposedKvstoreCount() const { return this->exposedKvstoreCount_ != nullptr;};
    void deleteExposedKvstoreCount() { this->exposedKvstoreCount_ = nullptr;};
    inline int32_t exposedKvstoreCount() const { DARABONBA_PTR_GET_DEFAULT(exposedKvstoreCount_, 0) };
    inline DescribeExposedStatisticsResponseBody& setExposedKvstoreCount(int32_t exposedKvstoreCount) { DARABONBA_PTR_SET_VALUE(exposedKvstoreCount_, exposedKvstoreCount) };


    // exposedLaterVulCount Field Functions 
    bool hasExposedLaterVulCount() const { return this->exposedLaterVulCount_ != nullptr;};
    void deleteExposedLaterVulCount() { this->exposedLaterVulCount_ = nullptr;};
    inline int32_t exposedLaterVulCount() const { DARABONBA_PTR_GET_DEFAULT(exposedLaterVulCount_, 0) };
    inline DescribeExposedStatisticsResponseBody& setExposedLaterVulCount(int32_t exposedLaterVulCount) { DARABONBA_PTR_SET_VALUE(exposedLaterVulCount_, exposedLaterVulCount) };


    // exposedNntfVulCount Field Functions 
    bool hasExposedNntfVulCount() const { return this->exposedNntfVulCount_ != nullptr;};
    void deleteExposedNntfVulCount() { this->exposedNntfVulCount_ = nullptr;};
    inline int32_t exposedNntfVulCount() const { DARABONBA_PTR_GET_DEFAULT(exposedNntfVulCount_, 0) };
    inline DescribeExposedStatisticsResponseBody& setExposedNntfVulCount(int32_t exposedNntfVulCount) { DARABONBA_PTR_SET_VALUE(exposedNntfVulCount_, exposedNntfVulCount) };


    // exposedPortCount Field Functions 
    bool hasExposedPortCount() const { return this->exposedPortCount_ != nullptr;};
    void deleteExposedPortCount() { this->exposedPortCount_ = nullptr;};
    inline int32_t exposedPortCount() const { DARABONBA_PTR_GET_DEFAULT(exposedPortCount_, 0) };
    inline DescribeExposedStatisticsResponseBody& setExposedPortCount(int32_t exposedPortCount) { DARABONBA_PTR_SET_VALUE(exposedPortCount_, exposedPortCount) };


    // exposedRdsCount Field Functions 
    bool hasExposedRdsCount() const { return this->exposedRdsCount_ != nullptr;};
    void deleteExposedRdsCount() { this->exposedRdsCount_ = nullptr;};
    inline int32_t exposedRdsCount() const { DARABONBA_PTR_GET_DEFAULT(exposedRdsCount_, 0) };
    inline DescribeExposedStatisticsResponseBody& setExposedRdsCount(int32_t exposedRdsCount) { DARABONBA_PTR_SET_VALUE(exposedRdsCount_, exposedRdsCount) };


    // exposedWeekPasswordMachineCount Field Functions 
    bool hasExposedWeekPasswordMachineCount() const { return this->exposedWeekPasswordMachineCount_ != nullptr;};
    void deleteExposedWeekPasswordMachineCount() { this->exposedWeekPasswordMachineCount_ = nullptr;};
    inline int32_t exposedWeekPasswordMachineCount() const { DARABONBA_PTR_GET_DEFAULT(exposedWeekPasswordMachineCount_, 0) };
    inline DescribeExposedStatisticsResponseBody& setExposedWeekPasswordMachineCount(int32_t exposedWeekPasswordMachineCount) { DARABONBA_PTR_SET_VALUE(exposedWeekPasswordMachineCount_, exposedWeekPasswordMachineCount) };


    // gatewayAssetCount Field Functions 
    bool hasGatewayAssetCount() const { return this->gatewayAssetCount_ != nullptr;};
    void deleteGatewayAssetCount() { this->gatewayAssetCount_ = nullptr;};
    inline int32_t gatewayAssetCount() const { DARABONBA_PTR_GET_DEFAULT(gatewayAssetCount_, 0) };
    inline DescribeExposedStatisticsResponseBody& setGatewayAssetCount(int32_t gatewayAssetCount) { DARABONBA_PTR_SET_VALUE(gatewayAssetCount_, gatewayAssetCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeExposedStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The total number of high-risk vulnerabilities that are exposed on the Internet and can be exploited by attackers.
    std::shared_ptr<int32_t> exposedAsapVulCount_ = nullptr;
    // The total number of system components that are exposed on the Internet. The components include OpenSSL and OpenSSH.
    std::shared_ptr<int32_t> exposedComponentCount_ = nullptr;
    // The number of ApsaraDB for MongoDB instances that are exposed on the Internet.
    std::shared_ptr<int32_t> exposedDdsCount_ = nullptr;
    // The number of Elastic Compute Service (ECS) instances that are exposed on the Internet.
    std::shared_ptr<int32_t> exposedEcsCount_ = nullptr;
    // The total number of assets that are exposed on the Internet.
    std::shared_ptr<int32_t> exposedInstanceCount_ = nullptr;
    // The total number of IP addresses that are exposed on the Internet.
    std::shared_ptr<int32_t> exposedIpCount_ = nullptr;
    // The number of ApsaraDB for Redis instances that are exposed on the Internet.
    std::shared_ptr<int32_t> exposedKvstoreCount_ = nullptr;
    // The total number of medium-risk vulnerabilities that are exposed on the Internet and can be exploited by attackers.
    std::shared_ptr<int32_t> exposedLaterVulCount_ = nullptr;
    // The total number of low-risk vulnerabilities that are exposed on the Internet and can be exploited by attackers.
    std::shared_ptr<int32_t> exposedNntfVulCount_ = nullptr;
    // The total number of ports that are exposed on the Internet.
    std::shared_ptr<int32_t> exposedPortCount_ = nullptr;
    // The number of ApsaraDB RDS instances that are exposed on the Internet.
    std::shared_ptr<int32_t> exposedRdsCount_ = nullptr;
    // The total number of system keys that are detected on your servers and are exposed on the Internet.
    std::shared_ptr<int32_t> exposedWeekPasswordMachineCount_ = nullptr;
    // The total number of gateway assets that are exposed on the Internet. The gateway assets include NAT gateways and Server Load Balancer (SLB) instances.
    std::shared_ptr<int32_t> gatewayAssetCount_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
