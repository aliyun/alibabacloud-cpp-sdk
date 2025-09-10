// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPRODUCTQUOTASRESPONSEBODYQUOTASQUOTAITEMS_HPP_
#define ALIBABACLOUD_MODELS_LISTPRODUCTQUOTASRESPONSEBODYQUOTASQUOTAITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Quotas20200510
{
namespace Models
{
  class ListProductQuotasResponseBodyQuotasQuotaItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProductQuotasResponseBodyQuotasQuotaItems& obj) { 
      DARABONBA_PTR_TO_JSON(Quota, quota_);
      DARABONBA_PTR_TO_JSON(QuotaUnit, quotaUnit_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, ListProductQuotasResponseBodyQuotasQuotaItems& obj) { 
      DARABONBA_PTR_FROM_JSON(Quota, quota_);
      DARABONBA_PTR_FROM_JSON(QuotaUnit, quotaUnit_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Usage, usage_);
    };
    ListProductQuotasResponseBodyQuotasQuotaItems() = default ;
    ListProductQuotasResponseBodyQuotasQuotaItems(const ListProductQuotasResponseBodyQuotasQuotaItems &) = default ;
    ListProductQuotasResponseBodyQuotasQuotaItems(ListProductQuotasResponseBodyQuotasQuotaItems &&) = default ;
    ListProductQuotasResponseBodyQuotasQuotaItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProductQuotasResponseBodyQuotasQuotaItems() = default ;
    ListProductQuotasResponseBodyQuotasQuotaItems& operator=(const ListProductQuotasResponseBodyQuotasQuotaItems &) = default ;
    ListProductQuotasResponseBodyQuotasQuotaItems& operator=(ListProductQuotasResponseBodyQuotasQuotaItems &&) = default ;
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
    inline ListProductQuotasResponseBodyQuotasQuotaItems& setQuota(string quota) { DARABONBA_PTR_SET_VALUE(quota_, quota) };


    // quotaUnit Field Functions 
    bool hasQuotaUnit() const { return this->quotaUnit_ != nullptr;};
    void deleteQuotaUnit() { this->quotaUnit_ = nullptr;};
    inline string quotaUnit() const { DARABONBA_PTR_GET_DEFAULT(quotaUnit_, "") };
    inline ListProductQuotasResponseBodyQuotasQuotaItems& setQuotaUnit(string quotaUnit) { DARABONBA_PTR_SET_VALUE(quotaUnit_, quotaUnit) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListProductQuotasResponseBodyQuotasQuotaItems& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline string usage() const { DARABONBA_PTR_GET_DEFAULT(usage_, "") };
    inline ListProductQuotasResponseBodyQuotasQuotaItems& setUsage(string usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };


  protected:
    // The value of the quota.
    std::shared_ptr<string> quota_ = nullptr;
    // The unit of the quota.
    std::shared_ptr<string> quotaUnit_ = nullptr;
    // The category of the quota.
    // 
    // Valid values:
    // 
    // *   BaseQuota: base quota
    // *   ReservedQuota: reserved quota
    std::shared_ptr<string> type_ = nullptr;
    // The quota usage.
    std::shared_ptr<string> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Quotas20200510
#endif
