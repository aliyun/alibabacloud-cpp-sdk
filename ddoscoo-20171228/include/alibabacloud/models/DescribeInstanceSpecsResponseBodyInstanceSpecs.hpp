// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESPECSRESPONSEBODYINSTANCESPECS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESPECSRESPONSEBODYINSTANCESPECS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20171228
{
namespace Models
{
  class DescribeInstanceSpecsResponseBodyInstanceSpecs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceSpecsResponseBodyInstanceSpecs& obj) { 
      DARABONBA_PTR_TO_JSON(BandwidthMbps, bandwidthMbps_);
      DARABONBA_PTR_TO_JSON(BaseBandwidth, baseBandwidth_);
      DARABONBA_PTR_TO_JSON(DefenseCount, defenseCount_);
      DARABONBA_PTR_TO_JSON(DomainLimit, domainLimit_);
      DARABONBA_PTR_TO_JSON(ElasticBandwidth, elasticBandwidth_);
      DARABONBA_PTR_TO_JSON(FunctionVersion, functionVersion_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PortLimit, portLimit_);
      DARABONBA_PTR_TO_JSON(QpsLimit, qpsLimit_);
      DARABONBA_PTR_TO_JSON(SiteLimit, siteLimit_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceSpecsResponseBodyInstanceSpecs& obj) { 
      DARABONBA_PTR_FROM_JSON(BandwidthMbps, bandwidthMbps_);
      DARABONBA_PTR_FROM_JSON(BaseBandwidth, baseBandwidth_);
      DARABONBA_PTR_FROM_JSON(DefenseCount, defenseCount_);
      DARABONBA_PTR_FROM_JSON(DomainLimit, domainLimit_);
      DARABONBA_PTR_FROM_JSON(ElasticBandwidth, elasticBandwidth_);
      DARABONBA_PTR_FROM_JSON(FunctionVersion, functionVersion_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PortLimit, portLimit_);
      DARABONBA_PTR_FROM_JSON(QpsLimit, qpsLimit_);
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
        && this->baseBandwidth_ != nullptr && this->defenseCount_ != nullptr && this->domainLimit_ != nullptr && this->elasticBandwidth_ != nullptr && this->functionVersion_ != nullptr
        && this->instanceId_ != nullptr && this->portLimit_ != nullptr && this->qpsLimit_ != nullptr && this->siteLimit_ != nullptr; };
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


    // siteLimit Field Functions 
    bool hasSiteLimit() const { return this->siteLimit_ != nullptr;};
    void deleteSiteLimit() { this->siteLimit_ = nullptr;};
    inline int32_t siteLimit() const { DARABONBA_PTR_GET_DEFAULT(siteLimit_, 0) };
    inline DescribeInstanceSpecsResponseBodyInstanceSpecs& setSiteLimit(int32_t siteLimit) { DARABONBA_PTR_SET_VALUE(siteLimit_, siteLimit) };


  protected:
    std::shared_ptr<int32_t> bandwidthMbps_ = nullptr;
    std::shared_ptr<int32_t> baseBandwidth_ = nullptr;
    std::shared_ptr<int32_t> defenseCount_ = nullptr;
    std::shared_ptr<int32_t> domainLimit_ = nullptr;
    std::shared_ptr<int32_t> elasticBandwidth_ = nullptr;
    std::shared_ptr<string> functionVersion_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<int32_t> portLimit_ = nullptr;
    std::shared_ptr<int32_t> qpsLimit_ = nullptr;
    std::shared_ptr<int32_t> siteLimit_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20171228
#endif
