// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMONITORRESOURCEQUOTAATTRIBUTERESPONSEBODYRESOURCEQUOTAENTERPRISEQUOTA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMONITORRESOURCEQUOTAATTRIBUTERESPONSEBODYRESOURCEQUOTAENTERPRISEQUOTA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaEnterpriseQuota : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaEnterpriseQuota& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(SuitInfo, suitInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaEnterpriseQuota& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(SuitInfo, suitInfo_);
    };
    DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaEnterpriseQuota() = default ;
    DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaEnterpriseQuota(const DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaEnterpriseQuota &) = default ;
    DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaEnterpriseQuota(DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaEnterpriseQuota &&) = default ;
    DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaEnterpriseQuota(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaEnterpriseQuota() = default ;
    DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaEnterpriseQuota& operator=(const DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaEnterpriseQuota &) = default ;
    DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaEnterpriseQuota& operator=(DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaEnterpriseQuota &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->suitInfo_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaEnterpriseQuota& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // suitInfo Field Functions 
    bool hasSuitInfo() const { return this->suitInfo_ != nullptr;};
    void deleteSuitInfo() { this->suitInfo_ = nullptr;};
    inline string suitInfo() const { DARABONBA_PTR_GET_DEFAULT(suitInfo_, "") };
    inline DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaEnterpriseQuota& setSuitInfo(string suitInfo) { DARABONBA_PTR_SET_VALUE(suitInfo_, suitInfo) };


  protected:
    // The ID of the instance monitored by Hybrid Cloud Monitoring.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The description of Hybrid Cloud Monitoring.
    std::shared_ptr<string> suitInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
