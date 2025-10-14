// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMONITORRESOURCEQUOTAATTRIBUTERESPONSEBODYRESOURCEQUOTACUSTOMMONITOR_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMONITORRESOURCEQUOTAATTRIBUTERESPONSEBODYRESOURCEQUOTACUSTOMMONITOR_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaCustomMonitor : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaCustomMonitor& obj) { 
      DARABONBA_PTR_TO_JSON(QuotaLimit, quotaLimit_);
      DARABONBA_PTR_TO_JSON(QuotaPackage, quotaPackage_);
      DARABONBA_PTR_TO_JSON(QuotaUsed, quotaUsed_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaCustomMonitor& obj) { 
      DARABONBA_PTR_FROM_JSON(QuotaLimit, quotaLimit_);
      DARABONBA_PTR_FROM_JSON(QuotaPackage, quotaPackage_);
      DARABONBA_PTR_FROM_JSON(QuotaUsed, quotaUsed_);
    };
    DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaCustomMonitor() = default ;
    DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaCustomMonitor(const DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaCustomMonitor &) = default ;
    DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaCustomMonitor(DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaCustomMonitor &&) = default ;
    DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaCustomMonitor(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaCustomMonitor() = default ;
    DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaCustomMonitor& operator=(const DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaCustomMonitor &) = default ;
    DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaCustomMonitor& operator=(DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaCustomMonitor &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->quotaLimit_ == nullptr
        && return this->quotaPackage_ == nullptr && return this->quotaUsed_ == nullptr; };
    // quotaLimit Field Functions 
    bool hasQuotaLimit() const { return this->quotaLimit_ != nullptr;};
    void deleteQuotaLimit() { this->quotaLimit_ = nullptr;};
    inline int32_t quotaLimit() const { DARABONBA_PTR_GET_DEFAULT(quotaLimit_, 0) };
    inline DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaCustomMonitor& setQuotaLimit(int32_t quotaLimit) { DARABONBA_PTR_SET_VALUE(quotaLimit_, quotaLimit) };


    // quotaPackage Field Functions 
    bool hasQuotaPackage() const { return this->quotaPackage_ != nullptr;};
    void deleteQuotaPackage() { this->quotaPackage_ = nullptr;};
    inline int32_t quotaPackage() const { DARABONBA_PTR_GET_DEFAULT(quotaPackage_, 0) };
    inline DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaCustomMonitor& setQuotaPackage(int32_t quotaPackage) { DARABONBA_PTR_SET_VALUE(quotaPackage_, quotaPackage) };


    // quotaUsed Field Functions 
    bool hasQuotaUsed() const { return this->quotaUsed_ != nullptr;};
    void deleteQuotaUsed() { this->quotaUsed_ = nullptr;};
    inline int32_t quotaUsed() const { DARABONBA_PTR_GET_DEFAULT(quotaUsed_, 0) };
    inline DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaCustomMonitor& setQuotaUsed(int32_t quotaUsed) { DARABONBA_PTR_SET_VALUE(quotaUsed_, quotaUsed) };


  protected:
    // The total quota of the time series for custom monitoring.
    std::shared_ptr<int32_t> quotaLimit_ = nullptr;
    // The quota of the time series for custom monitoring in your resource plan.
    std::shared_ptr<int32_t> quotaPackage_ = nullptr;
    // The used quota of the time series for custom monitoring in your resource plan.
    std::shared_ptr<int32_t> quotaUsed_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
