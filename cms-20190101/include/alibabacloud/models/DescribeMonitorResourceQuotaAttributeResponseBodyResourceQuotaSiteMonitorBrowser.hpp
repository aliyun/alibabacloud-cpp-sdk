// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMONITORRESOURCEQUOTAATTRIBUTERESPONSEBODYRESOURCEQUOTASITEMONITORBROWSER_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMONITORRESOURCEQUOTAATTRIBUTERESPONSEBODYRESOURCEQUOTASITEMONITORBROWSER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaSiteMonitorBrowser : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaSiteMonitorBrowser& obj) { 
      DARABONBA_PTR_TO_JSON(QuotaLimit, quotaLimit_);
      DARABONBA_PTR_TO_JSON(QuotaPackage, quotaPackage_);
      DARABONBA_PTR_TO_JSON(QuotaUsed, quotaUsed_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaSiteMonitorBrowser& obj) { 
      DARABONBA_PTR_FROM_JSON(QuotaLimit, quotaLimit_);
      DARABONBA_PTR_FROM_JSON(QuotaPackage, quotaPackage_);
      DARABONBA_PTR_FROM_JSON(QuotaUsed, quotaUsed_);
    };
    DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaSiteMonitorBrowser() = default ;
    DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaSiteMonitorBrowser(const DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaSiteMonitorBrowser &) = default ;
    DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaSiteMonitorBrowser(DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaSiteMonitorBrowser &&) = default ;
    DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaSiteMonitorBrowser(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaSiteMonitorBrowser() = default ;
    DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaSiteMonitorBrowser& operator=(const DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaSiteMonitorBrowser &) = default ;
    DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaSiteMonitorBrowser& operator=(DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaSiteMonitorBrowser &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->quotaLimit_ != nullptr
        && this->quotaPackage_ != nullptr && this->quotaUsed_ != nullptr; };
    // quotaLimit Field Functions 
    bool hasQuotaLimit() const { return this->quotaLimit_ != nullptr;};
    void deleteQuotaLimit() { this->quotaLimit_ = nullptr;};
    inline int32_t quotaLimit() const { DARABONBA_PTR_GET_DEFAULT(quotaLimit_, 0) };
    inline DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaSiteMonitorBrowser& setQuotaLimit(int32_t quotaLimit) { DARABONBA_PTR_SET_VALUE(quotaLimit_, quotaLimit) };


    // quotaPackage Field Functions 
    bool hasQuotaPackage() const { return this->quotaPackage_ != nullptr;};
    void deleteQuotaPackage() { this->quotaPackage_ = nullptr;};
    inline int32_t quotaPackage() const { DARABONBA_PTR_GET_DEFAULT(quotaPackage_, 0) };
    inline DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaSiteMonitorBrowser& setQuotaPackage(int32_t quotaPackage) { DARABONBA_PTR_SET_VALUE(quotaPackage_, quotaPackage) };


    // quotaUsed Field Functions 
    bool hasQuotaUsed() const { return this->quotaUsed_ != nullptr;};
    void deleteQuotaUsed() { this->quotaUsed_ = nullptr;};
    inline int32_t quotaUsed() const { DARABONBA_PTR_GET_DEFAULT(quotaUsed_, 0) };
    inline DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuotaSiteMonitorBrowser& setQuotaUsed(int32_t quotaUsed) { DARABONBA_PTR_SET_VALUE(quotaUsed_, quotaUsed) };


  protected:
    // The total quota of browser detection tasks.
    std::shared_ptr<int32_t> quotaLimit_ = nullptr;
    // The quota of browser detection tasks in your resource plan.
    std::shared_ptr<int32_t> quotaPackage_ = nullptr;
    // The used quota of browser detection tasks in your resource plan.
    std::shared_ptr<int32_t> quotaUsed_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
