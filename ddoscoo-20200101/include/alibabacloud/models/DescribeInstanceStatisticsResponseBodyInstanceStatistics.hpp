// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESTATISTICSRESPONSEBODYINSTANCESTATISTICS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESTATISTICSRESPONSEBODYINSTANCESTATISTICS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeInstanceStatisticsResponseBodyInstanceStatistics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceStatisticsResponseBodyInstanceStatistics& obj) { 
      DARABONBA_PTR_TO_JSON(DefenseCountUsage, defenseCountUsage_);
      DARABONBA_PTR_TO_JSON(DomainUsage, domainUsage_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PortUsage, portUsage_);
      DARABONBA_PTR_TO_JSON(SiteUsage, siteUsage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceStatisticsResponseBodyInstanceStatistics& obj) { 
      DARABONBA_PTR_FROM_JSON(DefenseCountUsage, defenseCountUsage_);
      DARABONBA_PTR_FROM_JSON(DomainUsage, domainUsage_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PortUsage, portUsage_);
      DARABONBA_PTR_FROM_JSON(SiteUsage, siteUsage_);
    };
    DescribeInstanceStatisticsResponseBodyInstanceStatistics() = default ;
    DescribeInstanceStatisticsResponseBodyInstanceStatistics(const DescribeInstanceStatisticsResponseBodyInstanceStatistics &) = default ;
    DescribeInstanceStatisticsResponseBodyInstanceStatistics(DescribeInstanceStatisticsResponseBodyInstanceStatistics &&) = default ;
    DescribeInstanceStatisticsResponseBodyInstanceStatistics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceStatisticsResponseBodyInstanceStatistics() = default ;
    DescribeInstanceStatisticsResponseBodyInstanceStatistics& operator=(const DescribeInstanceStatisticsResponseBodyInstanceStatistics &) = default ;
    DescribeInstanceStatisticsResponseBodyInstanceStatistics& operator=(DescribeInstanceStatisticsResponseBodyInstanceStatistics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->defenseCountUsage_ != nullptr
        && this->domainUsage_ != nullptr && this->instanceId_ != nullptr && this->portUsage_ != nullptr && this->siteUsage_ != nullptr; };
    // defenseCountUsage Field Functions 
    bool hasDefenseCountUsage() const { return this->defenseCountUsage_ != nullptr;};
    void deleteDefenseCountUsage() { this->defenseCountUsage_ = nullptr;};
    inline int32_t defenseCountUsage() const { DARABONBA_PTR_GET_DEFAULT(defenseCountUsage_, 0) };
    inline DescribeInstanceStatisticsResponseBodyInstanceStatistics& setDefenseCountUsage(int32_t defenseCountUsage) { DARABONBA_PTR_SET_VALUE(defenseCountUsage_, defenseCountUsage) };


    // domainUsage Field Functions 
    bool hasDomainUsage() const { return this->domainUsage_ != nullptr;};
    void deleteDomainUsage() { this->domainUsage_ = nullptr;};
    inline int32_t domainUsage() const { DARABONBA_PTR_GET_DEFAULT(domainUsage_, 0) };
    inline DescribeInstanceStatisticsResponseBodyInstanceStatistics& setDomainUsage(int32_t domainUsage) { DARABONBA_PTR_SET_VALUE(domainUsage_, domainUsage) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeInstanceStatisticsResponseBodyInstanceStatistics& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // portUsage Field Functions 
    bool hasPortUsage() const { return this->portUsage_ != nullptr;};
    void deletePortUsage() { this->portUsage_ = nullptr;};
    inline int32_t portUsage() const { DARABONBA_PTR_GET_DEFAULT(portUsage_, 0) };
    inline DescribeInstanceStatisticsResponseBodyInstanceStatistics& setPortUsage(int32_t portUsage) { DARABONBA_PTR_SET_VALUE(portUsage_, portUsage) };


    // siteUsage Field Functions 
    bool hasSiteUsage() const { return this->siteUsage_ != nullptr;};
    void deleteSiteUsage() { this->siteUsage_ = nullptr;};
    inline int32_t siteUsage() const { DARABONBA_PTR_GET_DEFAULT(siteUsage_, 0) };
    inline DescribeInstanceStatisticsResponseBodyInstanceStatistics& setSiteUsage(int32_t siteUsage) { DARABONBA_PTR_SET_VALUE(siteUsage_, siteUsage) };


  protected:
    // The number of advanced mitigation sessions that are used in this month.
    // 
    // >  This parameter is returned only if Anti-DDoS Proxy (Outside Chinese Mainland) instances are queried.
    std::shared_ptr<int32_t> defenseCountUsage_ = nullptr;
    // The number of domain names that are protected by the instance.
    std::shared_ptr<int32_t> domainUsage_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The number of ports that are protected by the instance.
    std::shared_ptr<int32_t> portUsage_ = nullptr;
    // The number of websites that are protected by the instance.
    std::shared_ptr<int32_t> siteUsage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
