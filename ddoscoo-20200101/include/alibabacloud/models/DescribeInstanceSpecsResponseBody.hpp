// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESPECSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESPECSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeInstanceSpecsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceSpecsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceSpecs, instanceSpecs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceSpecsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceSpecs, instanceSpecs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeInstanceSpecsResponseBody() = default ;
    DescribeInstanceSpecsResponseBody(const DescribeInstanceSpecsResponseBody &) = default ;
    DescribeInstanceSpecsResponseBody(DescribeInstanceSpecsResponseBody &&) = default ;
    DescribeInstanceSpecsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceSpecsResponseBody() = default ;
    DescribeInstanceSpecsResponseBody& operator=(const DescribeInstanceSpecsResponseBody &) = default ;
    DescribeInstanceSpecsResponseBody& operator=(DescribeInstanceSpecsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InstanceSpecs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceSpecs& obj) { 
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
      friend void from_json(const Darabonba::Json& j, InstanceSpecs& obj) { 
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
      InstanceSpecs() = default ;
      InstanceSpecs(const InstanceSpecs &) = default ;
      InstanceSpecs(InstanceSpecs &&) = default ;
      InstanceSpecs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceSpecs() = default ;
      InstanceSpecs& operator=(const InstanceSpecs &) = default ;
      InstanceSpecs& operator=(InstanceSpecs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->bandwidthMbps_ == nullptr
        && this->baseBandwidth_ == nullptr && this->connLimit_ == nullptr && this->cpsLimit_ == nullptr && this->defenseCount_ == nullptr && this->domainLimit_ == nullptr
        && this->elasticBandwidth_ == nullptr && this->elasticBw_ == nullptr && this->elasticBwModel_ == nullptr && this->elasticQps_ == nullptr && this->elasticQpsMode_ == nullptr
        && this->functionVersion_ == nullptr && this->instanceId_ == nullptr && this->portLimit_ == nullptr && this->qpsLimit_ == nullptr && this->realLimitBw_ == nullptr
        && this->siteLimit_ == nullptr; };
      // bandwidthMbps Field Functions 
      bool hasBandwidthMbps() const { return this->bandwidthMbps_ != nullptr;};
      void deleteBandwidthMbps() { this->bandwidthMbps_ = nullptr;};
      inline int32_t getBandwidthMbps() const { DARABONBA_PTR_GET_DEFAULT(bandwidthMbps_, 0) };
      inline InstanceSpecs& setBandwidthMbps(int32_t bandwidthMbps) { DARABONBA_PTR_SET_VALUE(bandwidthMbps_, bandwidthMbps) };


      // baseBandwidth Field Functions 
      bool hasBaseBandwidth() const { return this->baseBandwidth_ != nullptr;};
      void deleteBaseBandwidth() { this->baseBandwidth_ = nullptr;};
      inline int32_t getBaseBandwidth() const { DARABONBA_PTR_GET_DEFAULT(baseBandwidth_, 0) };
      inline InstanceSpecs& setBaseBandwidth(int32_t baseBandwidth) { DARABONBA_PTR_SET_VALUE(baseBandwidth_, baseBandwidth) };


      // connLimit Field Functions 
      bool hasConnLimit() const { return this->connLimit_ != nullptr;};
      void deleteConnLimit() { this->connLimit_ = nullptr;};
      inline int64_t getConnLimit() const { DARABONBA_PTR_GET_DEFAULT(connLimit_, 0L) };
      inline InstanceSpecs& setConnLimit(int64_t connLimit) { DARABONBA_PTR_SET_VALUE(connLimit_, connLimit) };


      // cpsLimit Field Functions 
      bool hasCpsLimit() const { return this->cpsLimit_ != nullptr;};
      void deleteCpsLimit() { this->cpsLimit_ = nullptr;};
      inline int64_t getCpsLimit() const { DARABONBA_PTR_GET_DEFAULT(cpsLimit_, 0L) };
      inline InstanceSpecs& setCpsLimit(int64_t cpsLimit) { DARABONBA_PTR_SET_VALUE(cpsLimit_, cpsLimit) };


      // defenseCount Field Functions 
      bool hasDefenseCount() const { return this->defenseCount_ != nullptr;};
      void deleteDefenseCount() { this->defenseCount_ = nullptr;};
      inline int32_t getDefenseCount() const { DARABONBA_PTR_GET_DEFAULT(defenseCount_, 0) };
      inline InstanceSpecs& setDefenseCount(int32_t defenseCount) { DARABONBA_PTR_SET_VALUE(defenseCount_, defenseCount) };


      // domainLimit Field Functions 
      bool hasDomainLimit() const { return this->domainLimit_ != nullptr;};
      void deleteDomainLimit() { this->domainLimit_ = nullptr;};
      inline int32_t getDomainLimit() const { DARABONBA_PTR_GET_DEFAULT(domainLimit_, 0) };
      inline InstanceSpecs& setDomainLimit(int32_t domainLimit) { DARABONBA_PTR_SET_VALUE(domainLimit_, domainLimit) };


      // elasticBandwidth Field Functions 
      bool hasElasticBandwidth() const { return this->elasticBandwidth_ != nullptr;};
      void deleteElasticBandwidth() { this->elasticBandwidth_ = nullptr;};
      inline int32_t getElasticBandwidth() const { DARABONBA_PTR_GET_DEFAULT(elasticBandwidth_, 0) };
      inline InstanceSpecs& setElasticBandwidth(int32_t elasticBandwidth) { DARABONBA_PTR_SET_VALUE(elasticBandwidth_, elasticBandwidth) };


      // elasticBw Field Functions 
      bool hasElasticBw() const { return this->elasticBw_ != nullptr;};
      void deleteElasticBw() { this->elasticBw_ = nullptr;};
      inline int32_t getElasticBw() const { DARABONBA_PTR_GET_DEFAULT(elasticBw_, 0) };
      inline InstanceSpecs& setElasticBw(int32_t elasticBw) { DARABONBA_PTR_SET_VALUE(elasticBw_, elasticBw) };


      // elasticBwModel Field Functions 
      bool hasElasticBwModel() const { return this->elasticBwModel_ != nullptr;};
      void deleteElasticBwModel() { this->elasticBwModel_ = nullptr;};
      inline string getElasticBwModel() const { DARABONBA_PTR_GET_DEFAULT(elasticBwModel_, "") };
      inline InstanceSpecs& setElasticBwModel(string elasticBwModel) { DARABONBA_PTR_SET_VALUE(elasticBwModel_, elasticBwModel) };


      // elasticQps Field Functions 
      bool hasElasticQps() const { return this->elasticQps_ != nullptr;};
      void deleteElasticQps() { this->elasticQps_ = nullptr;};
      inline int64_t getElasticQps() const { DARABONBA_PTR_GET_DEFAULT(elasticQps_, 0L) };
      inline InstanceSpecs& setElasticQps(int64_t elasticQps) { DARABONBA_PTR_SET_VALUE(elasticQps_, elasticQps) };


      // elasticQpsMode Field Functions 
      bool hasElasticQpsMode() const { return this->elasticQpsMode_ != nullptr;};
      void deleteElasticQpsMode() { this->elasticQpsMode_ = nullptr;};
      inline string getElasticQpsMode() const { DARABONBA_PTR_GET_DEFAULT(elasticQpsMode_, "") };
      inline InstanceSpecs& setElasticQpsMode(string elasticQpsMode) { DARABONBA_PTR_SET_VALUE(elasticQpsMode_, elasticQpsMode) };


      // functionVersion Field Functions 
      bool hasFunctionVersion() const { return this->functionVersion_ != nullptr;};
      void deleteFunctionVersion() { this->functionVersion_ = nullptr;};
      inline string getFunctionVersion() const { DARABONBA_PTR_GET_DEFAULT(functionVersion_, "") };
      inline InstanceSpecs& setFunctionVersion(string functionVersion) { DARABONBA_PTR_SET_VALUE(functionVersion_, functionVersion) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline InstanceSpecs& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // portLimit Field Functions 
      bool hasPortLimit() const { return this->portLimit_ != nullptr;};
      void deletePortLimit() { this->portLimit_ = nullptr;};
      inline int32_t getPortLimit() const { DARABONBA_PTR_GET_DEFAULT(portLimit_, 0) };
      inline InstanceSpecs& setPortLimit(int32_t portLimit) { DARABONBA_PTR_SET_VALUE(portLimit_, portLimit) };


      // qpsLimit Field Functions 
      bool hasQpsLimit() const { return this->qpsLimit_ != nullptr;};
      void deleteQpsLimit() { this->qpsLimit_ = nullptr;};
      inline int32_t getQpsLimit() const { DARABONBA_PTR_GET_DEFAULT(qpsLimit_, 0) };
      inline InstanceSpecs& setQpsLimit(int32_t qpsLimit) { DARABONBA_PTR_SET_VALUE(qpsLimit_, qpsLimit) };


      // realLimitBw Field Functions 
      bool hasRealLimitBw() const { return this->realLimitBw_ != nullptr;};
      void deleteRealLimitBw() { this->realLimitBw_ = nullptr;};
      inline int64_t getRealLimitBw() const { DARABONBA_PTR_GET_DEFAULT(realLimitBw_, 0L) };
      inline InstanceSpecs& setRealLimitBw(int64_t realLimitBw) { DARABONBA_PTR_SET_VALUE(realLimitBw_, realLimitBw) };


      // siteLimit Field Functions 
      bool hasSiteLimit() const { return this->siteLimit_ != nullptr;};
      void deleteSiteLimit() { this->siteLimit_ = nullptr;};
      inline int32_t getSiteLimit() const { DARABONBA_PTR_GET_DEFAULT(siteLimit_, 0) };
      inline InstanceSpecs& setSiteLimit(int32_t siteLimit) { DARABONBA_PTR_SET_VALUE(siteLimit_, siteLimit) };


    protected:
      // The clean bandwidth. Unit: Mbit/s.
      shared_ptr<int32_t> bandwidthMbps_ {};
      // The basic protection bandwidth. Unit: Gbit/s.
      shared_ptr<int32_t> baseBandwidth_ {};
      // The specification of concurrent connections of the instance.
      shared_ptr<int64_t> connLimit_ {};
      // The specification of new connections of the instance.
      shared_ptr<int64_t> cpsLimit_ {};
      // The number of available advanced mitigation sessions for this month. **-1**: unlimited
      // 
      // >  This parameter is returned only when the request parameter **RegionId** is set to **ap-southeast-1**. If RegionId is set to ap-southeast-1, the specifications of Anti-DDoS Proxy (Outside Chinese Mainland) instances are queried.
      shared_ptr<int32_t> defenseCount_ {};
      // The number of domain names that can be protected by the instance.
      shared_ptr<int32_t> domainLimit_ {};
      // The burstable protection bandwidth. Unit: Gbit/s.
      shared_ptr<int32_t> elasticBandwidth_ {};
      // The burstable clean bandwidth. Unit: Mbit/s.
      shared_ptr<int32_t> elasticBw_ {};
      // The metering method of the burstable clean bandwidth. Valid values:
      // 
      // *   **day**: the metering method of daily 95th percentile
      // *   **month**: the metering method of monthly 95th percentile
      shared_ptr<string> elasticBwModel_ {};
      // The burstable QPS. Unit: QPS
      shared_ptr<int64_t> elasticQps_ {};
      // The metering method of the burstable QPS. Valid values:
      // 
      // *   **day**: the metering method of daily 95th percentile
      // *   **month**: the metering method of monthly 95th percentile
      shared_ptr<string> elasticQpsMode_ {};
      // The function plan of the instance. Valid values:
      // 
      // *   **default**: Standard
      // *   **enhance**: Enhanced
      // *   **cnhk**: Chinese Mainland Acceleration (CMA)
      // *   **cnhk_default**: Secure Chinese Mainland Acceleration (Sec-CMA) standard
      // *   **cnhk_enhance**: Sec-CMA enhanced
      shared_ptr<string> functionVersion_ {};
      // The ID of the instance.
      shared_ptr<string> instanceId_ {};
      // The number of ports that can be protected by the instance.
      shared_ptr<int32_t> portLimit_ {};
      // The clean QPS.
      shared_ptr<int32_t> qpsLimit_ {};
      // The threshold of the clean bandwidth. Valid values: 0 to 15360. The value 0 indicates that rate limiting is never triggered. Unit: Mbit/s
      shared_ptr<int64_t> realLimitBw_ {};
      // The number of sites that can be protected by the instance.
      shared_ptr<int32_t> siteLimit_ {};
    };

    virtual bool empty() const override { return this->instanceSpecs_ == nullptr
        && this->requestId_ == nullptr; };
    // instanceSpecs Field Functions 
    bool hasInstanceSpecs() const { return this->instanceSpecs_ != nullptr;};
    void deleteInstanceSpecs() { this->instanceSpecs_ = nullptr;};
    inline const vector<DescribeInstanceSpecsResponseBody::InstanceSpecs> & getInstanceSpecs() const { DARABONBA_PTR_GET_CONST(instanceSpecs_, vector<DescribeInstanceSpecsResponseBody::InstanceSpecs>) };
    inline vector<DescribeInstanceSpecsResponseBody::InstanceSpecs> getInstanceSpecs() { DARABONBA_PTR_GET(instanceSpecs_, vector<DescribeInstanceSpecsResponseBody::InstanceSpecs>) };
    inline DescribeInstanceSpecsResponseBody& setInstanceSpecs(const vector<DescribeInstanceSpecsResponseBody::InstanceSpecs> & instanceSpecs) { DARABONBA_PTR_SET_VALUE(instanceSpecs_, instanceSpecs) };
    inline DescribeInstanceSpecsResponseBody& setInstanceSpecs(vector<DescribeInstanceSpecsResponseBody::InstanceSpecs> && instanceSpecs) { DARABONBA_PTR_SET_RVALUE(instanceSpecs_, instanceSpecs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceSpecsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the specifications of the instance.
    shared_ptr<vector<DescribeInstanceSpecsResponseBody::InstanceSpecs>> instanceSpecs_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
