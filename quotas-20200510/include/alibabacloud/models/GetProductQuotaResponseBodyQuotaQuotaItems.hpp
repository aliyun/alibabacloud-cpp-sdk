// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPRODUCTQUOTARESPONSEBODYQUOTAQUOTAITEMS_HPP_
#define ALIBABACLOUD_MODELS_GETPRODUCTQUOTARESPONSEBODYQUOTAQUOTAITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Quotas20200510
{
namespace Models
{
  class GetProductQuotaResponseBodyQuotaQuotaItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetProductQuotaResponseBodyQuotaQuotaItems& obj) { 
      DARABONBA_PTR_TO_JSON(Quota, quota_);
      DARABONBA_PTR_TO_JSON(QuotaUnit, quotaUnit_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, GetProductQuotaResponseBodyQuotaQuotaItems& obj) { 
      DARABONBA_PTR_FROM_JSON(Quota, quota_);
      DARABONBA_PTR_FROM_JSON(QuotaUnit, quotaUnit_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Usage, usage_);
    };
    GetProductQuotaResponseBodyQuotaQuotaItems() = default ;
    GetProductQuotaResponseBodyQuotaQuotaItems(const GetProductQuotaResponseBodyQuotaQuotaItems &) = default ;
    GetProductQuotaResponseBodyQuotaQuotaItems(GetProductQuotaResponseBodyQuotaQuotaItems &&) = default ;
    GetProductQuotaResponseBodyQuotaQuotaItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetProductQuotaResponseBodyQuotaQuotaItems() = default ;
    GetProductQuotaResponseBodyQuotaQuotaItems& operator=(const GetProductQuotaResponseBodyQuotaQuotaItems &) = default ;
    GetProductQuotaResponseBodyQuotaQuotaItems& operator=(GetProductQuotaResponseBodyQuotaQuotaItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->quota_ != nullptr
        && this->quotaUnit_ != nullptr && this->type_ != nullptr && this->usage_ != nullptr; };
    // quota Field Functions 
    bool hasQuota() const { return this->quota_ != nullptr;};
    void deleteQuota() { this->quota_ = nullptr;};
    inline string quota() const { DARABONBA_PTR_GET_DEFAULT(quota_, "") };
    inline GetProductQuotaResponseBodyQuotaQuotaItems& setQuota(string quota) { DARABONBA_PTR_SET_VALUE(quota_, quota) };


    // quotaUnit Field Functions 
    bool hasQuotaUnit() const { return this->quotaUnit_ != nullptr;};
    void deleteQuotaUnit() { this->quotaUnit_ = nullptr;};
    inline string quotaUnit() const { DARABONBA_PTR_GET_DEFAULT(quotaUnit_, "") };
    inline GetProductQuotaResponseBodyQuotaQuotaItems& setQuotaUnit(string quotaUnit) { DARABONBA_PTR_SET_VALUE(quotaUnit_, quotaUnit) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetProductQuotaResponseBodyQuotaQuotaItems& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline string usage() const { DARABONBA_PTR_GET_DEFAULT(usage_, "") };
    inline GetProductQuotaResponseBodyQuotaQuotaItems& setUsage(string usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };


  protected:
    // The value of the quota.
    std::shared_ptr<string> quota_ = nullptr;
    // The unit of the quota.
    // 
    // >  The unit of each quota is unique. For example, the quota whose ID is `q_cbdch3` represents the maximum number of ACK clusters. The unit of this quota is clusters. The quota whose ID is `q_security-groups` represents the maximum number of security groups. The unit of this quota is security groups.
    std::shared_ptr<string> quotaUnit_ = nullptr;
    // The category of the quota. Valid values:
    // 
    // *   BaseQuota: base quota.
    // *   ReservedQuota: reserved quota.
    std::shared_ptr<string> type_ = nullptr;
    // The used quota.
    std::shared_ptr<string> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Quotas20200510
#endif
