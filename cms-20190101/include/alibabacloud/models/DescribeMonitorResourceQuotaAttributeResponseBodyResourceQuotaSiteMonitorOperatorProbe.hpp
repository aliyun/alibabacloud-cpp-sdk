// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMONITORRESOURCEQUOTAATTRIBUTERESPONSEBODYRESOURCEQUOTASITEMONITOROPERATORPROBE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMONITORRESOURCEQUOTAATTRIBUTERESPONSEBODYRESOURCEQUOTASITEMONITOROPERATORPROBE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaSiteMonitorOperatorProbe : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaSiteMonitorOperatorProbe& obj) { 
      DARABONBA_PTR_TO_JSON(QuotaLimit, quotaLimit_);
      DARABONBA_PTR_TO_JSON(QuotaPackage, quotaPackage_);
      DARABONBA_PTR_TO_JSON(QuotaUsed, quotaUsed_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaSiteMonitorOperatorProbe& obj) { 
      DARABONBA_PTR_FROM_JSON(QuotaLimit, quotaLimit_);
      DARABONBA_PTR_FROM_JSON(QuotaPackage, quotaPackage_);
      DARABONBA_PTR_FROM_JSON(QuotaUsed, quotaUsed_);
    };
    DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaSiteMonitorOperatorProbe() = default ;
    DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaSiteMonitorOperatorProbe(const DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaSiteMonitorOperatorProbe &) = default ;
    DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaSiteMonitorOperatorProbe(DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaSiteMonitorOperatorProbe &&) = default ;
    DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaSiteMonitorOperatorProbe(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaSiteMonitorOperatorProbe() = default ;
    DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaSiteMonitorOperatorProbe& operator=(const DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaSiteMonitorOperatorProbe &) = default ;
    DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaSiteMonitorOperatorProbe& operator=(DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaSiteMonitorOperatorProbe &&) = default ;
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
    inline DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaSiteMonitorOperatorProbe& setQuotaLimit(int32_t quotaLimit) { DARABONBA_PTR_SET_VALUE(quotaLimit_, quotaLimit) };


    // quotaPackage Field Functions 
    bool hasQuotaPackage() const { return this->quotaPackage_ != nullptr;};
    void deleteQuotaPackage() { this->quotaPackage_ = nullptr;};
    inline int32_t quotaPackage() const { DARABONBA_PTR_GET_DEFAULT(quotaPackage_, 0) };
    inline DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaSiteMonitorOperatorProbe& setQuotaPackage(int32_t quotaPackage) { DARABONBA_PTR_SET_VALUE(quotaPackage_, quotaPackage) };


    // quotaUsed Field Functions 
    bool hasQuotaUsed() const { return this->quotaUsed_ != nullptr;};
    void deleteQuotaUsed() { this->quotaUsed_ = nullptr;};
    inline int32_t quotaUsed() const { DARABONBA_PTR_GET_DEFAULT(quotaUsed_, 0) };
    inline DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaSiteMonitorOperatorProbe& setQuotaUsed(int32_t quotaUsed) { DARABONBA_PTR_SET_VALUE(quotaUsed_, quotaUsed) };


  protected:
    // The total quota of carrier detection points for site monitoring.
    std::shared_ptr<int32_t> quotaLimit_ = nullptr;
    // The quota of carrier detection points for site monitoring in your resource plan.
    std::shared_ptr<int32_t> quotaPackage_ = nullptr;
    // The used quota of carrier detection points for site monitoring in your resource plan.
    std::shared_ptr<int32_t> quotaUsed_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
