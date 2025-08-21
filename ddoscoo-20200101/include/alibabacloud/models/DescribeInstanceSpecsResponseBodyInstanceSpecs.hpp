// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESPECSRESPONSEBODYINSTANCESPECS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESPECSRESPONSEBODYINSTANCESPECS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeInstanceSpecsResponseBodyInstanceSpecs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceSpecsResponseBodyInstanceSpecs& obj) { 
      DARABONBA_PTR_TO_JSON(BandwidthMbps, bandwidthMbps_);
      DARABONBA_PTR_TO_JSON(BaseBandwidth, baseBandwidth_);
      DARABONBA_PTR_TO_JSON(ConnLimit, connLimit_);
      DARABONBA_PTR_TO_JSON(CpsLimit, cpsLimit_);
      DARABONBA_PTR_TO_JSON(DefenseCount, defenseCount_);
      DARABONBA_PTR_TO_JSON(DomainLimit, domainLimit_);
      DARABONBA_PTR_TO_JSON(ElasticBandwidth, elasticBandwidth_);
      DARABONBA_PTR_TO_JSON(ElasticBw, elasticBw_);
      DARABONBA_PTR_TO_JSON(ElasticBwModel, elasticBwModel_);
      DARABONBA_PTR_TO_JSON(ElasticQps, elasticQps_);
      DARABONBA_PTR_TO_JSON(ElasticQpsMode, elasticQpsMode_);
      DARABONBA_PTR_TO_JSON(FunctionVersion, functionVersion_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PortLimit, portLimit_);
      DARABONBA_PTR_TO_JSON(QpsLimit, qpsLimit_);
      DARABONBA_PTR_TO_JSON(RealLimitBw, realLimitBw_);
      DARABONBA_PTR_TO_JSON(SiteLimit, siteLimit_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceSpecsResponseBodyInstanceSpecs& obj) { 
      DARABONBA_PTR_FROM_JSON(BandwidthMbps, bandwidthMbps_);
      DARABONBA_PTR_FROM_JSON(BaseBandwidth, baseBandwidth_);
      DARABONBA_PTR_FROM_JSON(ConnLimit, connLimit_);
      DARABONBA_PTR_FROM_JSON(CpsLimit, cpsLimit_);
      DARABONBA_PTR_FROM_JSON(DefenseCount, defenseCount_);
      DARABONBA_PTR_FROM_JSON(DomainLimit, domainLimit_);
      DARABONBA_PTR_FROM_JSON(ElasticBandwidth, elasticBandwidth_);
      DARABONBA_PTR_FROM_JSON(ElasticBw, elasticBw_);
      DARABONBA_PTR_FROM_JSON(ElasticBwModel, elasticBwModel_);
      DARABONBA_PTR_FROM_JSON(ElasticQps, elasticQps_);
      DARABONBA_PTR_FROM_JSON(ElasticQpsMode, elasticQpsMode_);
      DARABONBA_PTR_FROM_JSON(FunctionVersion, functionVersion_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PortLimit, portLimit_);
      DARABONBA_PTR_FROM_JSON(QpsLimit, qpsLimit_);
      DARABONBA_PTR_FROM_JSON(RealLimitBw, realLimitBw_);
      DARABONBA_PTR_FROM_JSON(SiteLimit, siteLimit_);
    };
    DescribeInstanceSpecsResponseBodyInstanceSpecs() = default ;
    DescribeInstanceSpecsResponseBodyInstanceSpecs(const DescribeInstanceSpecsResponseBodyInstanceSpecs &) = default ;
    DescribeInstanceSpecsResponseBodyInstanceSpecs(DescribeInstanceSpecsResponseBodyInstanceSpecs &&) = default ;
    DescribeInstanceSpecsResponseBodyInstanceSpecs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceSpecsResponseBodyInstanceSpecs() = default ;
    DescribeInstanceSpecsResponseBodyInstanceSpecs& operator=(const DescribeInstanceSpecsResponseBodyInstanceSpecs &) = default ;
    DescribeInstanceSpecsResponseBodyInstanceSpecs& operator=(DescribeInstanceSpecsResponseBodyInstanceSpecs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bandwidthMbps_ != nullptr
        && this->baseBandwidth_ != nullptr && this->connLimit_ != nullptr && this->cpsLimit_ != nullptr && this->defenseCount_ != nullptr && this->domainLimit_ != nullptr
        && this->elasticBandwidth_ != nullptr && this->elasticBw_ != nullptr && this->elasticBwModel_ != nullptr && this->elasticQps_ != nullptr && this->elasticQpsMode_ != nullptr
        && this->functionVersion_ != nullptr && this->instanceId_ != nullptr && this->portLimit_ != nullptr && this->qpsLimit_ != nullptr && this->realLimitBw_ != nullptr
        && this->siteLimit_ != nullptr; };
    // bandwidthMbps Field Functions 
    bool hasBandwidthMbps() const { return this->bandwidthMbps_ != nullptr;};
    void deleteBandwidthMbps() { this->bandwidthMbps_ = nullptr;};
    inline int32_t bandwidthMbps() const { DARABONBA_PTR_GET_DEFAULT(bandwidthMbps_, 0) };
    inline DescribeInstanceSpecsResponseBodyInstanceSpecs& setBandwidthMbps(int32_t bandwidthMbps) { DARABONBA_PTR_SET_VALUE(bandwidthMbps_, bandwidthMbps) };


    // baseBandwidth Field Functions 
    bool hasBaseBandwidth() const { return this->baseBandwidth_ != nullptr;};
    void deleteBaseBandwidth() { this->baseBandwidth_ = nullptr;};
    inline int32_t baseBandwidth() const { DARABONBA_PTR_GET_DEFAULT(baseBandwidth_, 0) };
    inline DescribeInstanceSpecsResponseBodyInstanceSpecs& setBaseBandwidth(int32_t baseBandwidth) { DARABONBA_PTR_SET_VALUE(baseBandwidth_, baseBandwidth) };


    // connLimit Field Functions 
    bool hasConnLimit() const { return this->connLimit_ != nullptr;};
    void deleteConnLimit() { this->connLimit_ = nullptr;};
    inline int64_t connLimit() const { DARABONBA_PTR_GET_DEFAULT(connLimit_, 0L) };
    inline DescribeInstanceSpecsResponseBodyInstanceSpecs& setConnLimit(int64_t connLimit) { DARABONBA_PTR_SET_VALUE(connLimit_, connLimit) };


    // cpsLimit Field Functions 
    bool hasCpsLimit() const { return this->cpsLimit_ != nullptr;};
    void deleteCpsLimit() { this->cpsLimit_ = nullptr;};
    inline int64_t cpsLimit() const { DARABONBA_PTR_GET_DEFAULT(cpsLimit_, 0L) };
    inline DescribeInstanceSpecsResponseBodyInstanceSpecs& setCpsLimit(int64_t cpsLimit) { DARABONBA_PTR_SET_VALUE(cpsLimit_, cpsLimit) };


    // defenseCount Field Functions 
    bool hasDefenseCount() const { return this->defenseCount_ != nullptr;};
    void deleteDefenseCount() { this->defenseCount_ = nullptr;};
    inline int32_t defenseCount() const { DARABONBA_PTR_GET_DEFAULT(defenseCount_, 0) };
    inline DescribeInstanceSpecsResponseBodyInstanceSpecs& setDefenseCount(int32_t defenseCount) { DARABONBA_PTR_SET_VALUE(defenseCount_, defenseCount) };


    // domainLimit Field Functions 
    bool hasDomainLimit() const { return this->domainLimit_ != nullptr;};
    void deleteDomainLimit() { this->domainLimit_ = nullptr;};
    inline int32_t domainLimit() const { DARABONBA_PTR_GET_DEFAULT(domainLimit_, 0) };
    inline DescribeInstanceSpecsResponseBodyInstanceSpecs& setDomainLimit(int32_t domainLimit) { DARABONBA_PTR_SET_VALUE(domainLimit_, domainLimit) };


    // elasticBandwidth Field Functions 
    bool hasElasticBandwidth() const { return this->elasticBandwidth_ != nullptr;};
    void deleteElasticBandwidth() { this->elasticBandwidth_ = nullptr;};
    inline int32_t elasticBandwidth() const { DARABONBA_PTR_GET_DEFAULT(elasticBandwidth_, 0) };
    inline DescribeInstanceSpecsResponseBodyInstanceSpecs& setElasticBandwidth(int32_t elasticBandwidth) { DARABONBA_PTR_SET_VALUE(elasticBandwidth_, elasticBandwidth) };


    // elasticBw Field Functions 
    bool hasElasticBw() const { return this->elasticBw_ != nullptr;};
    void deleteElasticBw() { this->elasticBw_ = nullptr;};
    inline int32_t elasticBw() const { DARABONBA_PTR_GET_DEFAULT(elasticBw_, 0) };
    inline DescribeInstanceSpecsResponseBodyInstanceSpecs& setElasticBw(int32_t elasticBw) { DARABONBA_PTR_SET_VALUE(elasticBw_, elasticBw) };


    // elasticBwModel Field Functions 
    bool hasElasticBwModel() const { return this->elasticBwModel_ != nullptr;};
    void deleteElasticBwModel() { this->elasticBwModel_ = nullptr;};
    inline string elasticBwModel() const { DARABONBA_PTR_GET_DEFAULT(elasticBwModel_, "") };
    inline DescribeInstanceSpecsResponseBodyInstanceSpecs& setElasticBwModel(string elasticBwModel) { DARABONBA_PTR_SET_VALUE(elasticBwModel_, elasticBwModel) };


    // elasticQps Field Functions 
    bool hasElasticQps() const { return this->elasticQps_ != nullptr;};
    void deleteElasticQps() { this->elasticQps_ = nullptr;};
    inline int64_t elasticQps() const { DARABONBA_PTR_GET_DEFAULT(elasticQps_, 0L) };
    inline DescribeInstanceSpecsResponseBodyInstanceSpecs& setElasticQps(int64_t elasticQps) { DARABONBA_PTR_SET_VALUE(elasticQps_, elasticQps) };


    // elasticQpsMode Field Functions 
    bool hasElasticQpsMode() const { return this->elasticQpsMode_ != nullptr;};
    void deleteElasticQpsMode() { this->elasticQpsMode_ = nullptr;};
    inline string elasticQpsMode() const { DARABONBA_PTR_GET_DEFAULT(elasticQpsMode_, "") };
    inline DescribeInstanceSpecsResponseBodyInstanceSpecs& setElasticQpsMode(string elasticQpsMode) { DARABONBA_PTR_SET_VALUE(elasticQpsMode_, elasticQpsMode) };


    // functionVersion Field Functions 
    bool hasFunctionVersion() const { return this->functionVersion_ != nullptr;};
    void deleteFunctionVersion() { this->functionVersion_ = nullptr;};
    inline string functionVersion() const { DARABONBA_PTR_GET_DEFAULT(functionVersion_, "") };
    inline DescribeInstanceSpecsResponseBodyInstanceSpecs& setFunctionVersion(string functionVersion) { DARABONBA_PTR_SET_VALUE(functionVersion_, functionVersion) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeInstanceSpecsResponseBodyInstanceSpecs& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // portLimit Field Functions 
    bool hasPortLimit() const { return this->portLimit_ != nullptr;};
    void deletePortLimit() { this->portLimit_ = nullptr;};
    inline int32_t portLimit() const { DARABONBA_PTR_GET_DEFAULT(portLimit_, 0) };
    inline DescribeInstanceSpecsResponseBodyInstanceSpecs& setPortLimit(int32_t portLimit) { DARABONBA_PTR_SET_VALUE(portLimit_, portLimit) };


    // qpsLimit Field Functions 
    bool hasQpsLimit() const { return this->qpsLimit_ != nullptr;};
    void deleteQpsLimit() { this->qpsLimit_ = nullptr;};
    inline int32_t qpsLimit() const { DARABONBA_PTR_GET_DEFAULT(qpsLimit_, 0) };
    inline DescribeInstanceSpecsResponseBodyInstanceSpecs& setQpsLimit(int32_t qpsLimit) { DARABONBA_PTR_SET_VALUE(qpsLimit_, qpsLimit) };


    // realLimitBw Field Functions 
    bool hasRealLimitBw() const { return this->realLimitBw_ != nullptr;};
    void deleteRealLimitBw() { this->realLimitBw_ = nullptr;};
    inline int64_t realLimitBw() const { DARABONBA_PTR_GET_DEFAULT(realLimitBw_, 0L) };
    inline DescribeInstanceSpecsResponseBodyInstanceSpecs& setRealLimitBw(int64_t realLimitBw) { DARABONBA_PTR_SET_VALUE(realLimitBw_, realLimitBw) };


    // siteLimit Field Functions 
    bool hasSiteLimit() const { return this->siteLimit_ != nullptr;};
    void deleteSiteLimit() { this->siteLimit_ = nullptr;};
    inline int32_t siteLimit() const { DARABONBA_PTR_GET_DEFAULT(siteLimit_, 0) };
    inline DescribeInstanceSpecsResponseBodyInstanceSpecs& setSiteLimit(int32_t siteLimit) { DARABONBA_PTR_SET_VALUE(siteLimit_, siteLimit) };


  protected:
    // The clean bandwidth. Unit: Mbit/s.
    std::shared_ptr<int32_t> bandwidthMbps_ = nullptr;
    // The basic protection bandwidth. Unit: Gbit/s.
    std::shared_ptr<int32_t> baseBandwidth_ = nullptr;
    // The specification of concurrent connections of the instance.
    std::shared_ptr<int64_t> connLimit_ = nullptr;
    // The specification of new connections of the instance.
    std::shared_ptr<int64_t> cpsLimit_ = nullptr;
    // The number of available advanced mitigation sessions for this month. **-1**: unlimited
    // 
    // >  This parameter is returned only when the request parameter **RegionId** is set to **ap-southeast-1**. If RegionId is set to ap-southeast-1, the specifications of Anti-DDoS Proxy (Outside Chinese Mainland) instances are queried.
    std::shared_ptr<int32_t> defenseCount_ = nullptr;
    // The number of domain names that can be protected by the instance.
    std::shared_ptr<int32_t> domainLimit_ = nullptr;
    // The burstable protection bandwidth. Unit: Gbit/s.
    std::shared_ptr<int32_t> elasticBandwidth_ = nullptr;
    // The burstable clean bandwidth. Unit: Mbit/s.
    std::shared_ptr<int32_t> elasticBw_ = nullptr;
    // The metering method of the burstable clean bandwidth. Valid values:
    // 
    // *   **day**: the metering method of daily 95th percentile
    // *   **month**: the metering method of monthly 95th percentile
    std::shared_ptr<string> elasticBwModel_ = nullptr;
    // The burstable QPS. Unit: QPS
    std::shared_ptr<int64_t> elasticQps_ = nullptr;
    // The metering method of the burstable QPS. Valid values:
    // 
    // *   **day**: the metering method of daily 95th percentile
    // *   **month**: the metering method of monthly 95th percentile
    std::shared_ptr<string> elasticQpsMode_ = nullptr;
    // The function plan of the instance. Valid values:
    // 
    // *   **default**: Standard
    // *   **enhance**: Enhanced
    // *   **cnhk**: Chinese Mainland Acceleration (CMA)
    // *   **cnhk_default**: Secure Chinese Mainland Acceleration (Sec-CMA) standard
    // *   **cnhk_enhance**: Sec-CMA enhanced
    std::shared_ptr<string> functionVersion_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The number of ports that can be protected by the instance.
    std::shared_ptr<int32_t> portLimit_ = nullptr;
    // The clean QPS.
    std::shared_ptr<int32_t> qpsLimit_ = nullptr;
    // The threshold of the clean bandwidth. Valid values: 0 to 15360. The value 0 indicates that rate limiting is never triggered. Unit: Mbit/s
    std::shared_ptr<int64_t> realLimitBw_ = nullptr;
    // The number of sites that can be protected by the instance.
    std::shared_ptr<int32_t> siteLimit_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
