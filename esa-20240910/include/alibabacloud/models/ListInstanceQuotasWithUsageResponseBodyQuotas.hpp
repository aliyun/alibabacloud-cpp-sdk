// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCEQUOTASWITHUSAGERESPONSEBODYQUOTAS_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCEQUOTASWITHUSAGERESPONSEBODYQUOTAS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListInstanceQuotasWithUsageResponseBodyQuotasSiteUsage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListInstanceQuotasWithUsageResponseBodyQuotas : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceQuotasWithUsageResponseBodyQuotas& obj) { 
      DARABONBA_PTR_TO_JSON(QuotaName, quotaName_);
      DARABONBA_PTR_TO_JSON(QuotaValue, quotaValue_);
      DARABONBA_PTR_TO_JSON(SiteUsage, siteUsage_);
      DARABONBA_PTR_TO_JSON(Usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceQuotasWithUsageResponseBodyQuotas& obj) { 
      DARABONBA_PTR_FROM_JSON(QuotaName, quotaName_);
      DARABONBA_PTR_FROM_JSON(QuotaValue, quotaValue_);
      DARABONBA_PTR_FROM_JSON(SiteUsage, siteUsage_);
      DARABONBA_PTR_FROM_JSON(Usage, usage_);
    };
    ListInstanceQuotasWithUsageResponseBodyQuotas() = default ;
    ListInstanceQuotasWithUsageResponseBodyQuotas(const ListInstanceQuotasWithUsageResponseBodyQuotas &) = default ;
    ListInstanceQuotasWithUsageResponseBodyQuotas(ListInstanceQuotasWithUsageResponseBodyQuotas &&) = default ;
    ListInstanceQuotasWithUsageResponseBodyQuotas(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceQuotasWithUsageResponseBodyQuotas() = default ;
    ListInstanceQuotasWithUsageResponseBodyQuotas& operator=(const ListInstanceQuotasWithUsageResponseBodyQuotas &) = default ;
    ListInstanceQuotasWithUsageResponseBodyQuotas& operator=(ListInstanceQuotasWithUsageResponseBodyQuotas &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->quotaName_ != nullptr
        && this->quotaValue_ != nullptr && this->siteUsage_ != nullptr && this->usage_ != nullptr; };
    // quotaName Field Functions 
    bool hasQuotaName() const { return this->quotaName_ != nullptr;};
    void deleteQuotaName() { this->quotaName_ = nullptr;};
    inline string quotaName() const { DARABONBA_PTR_GET_DEFAULT(quotaName_, "") };
    inline ListInstanceQuotasWithUsageResponseBodyQuotas& setQuotaName(string quotaName) { DARABONBA_PTR_SET_VALUE(quotaName_, quotaName) };


    // quotaValue Field Functions 
    bool hasQuotaValue() const { return this->quotaValue_ != nullptr;};
    void deleteQuotaValue() { this->quotaValue_ = nullptr;};
    inline string quotaValue() const { DARABONBA_PTR_GET_DEFAULT(quotaValue_, "") };
    inline ListInstanceQuotasWithUsageResponseBodyQuotas& setQuotaValue(string quotaValue) { DARABONBA_PTR_SET_VALUE(quotaValue_, quotaValue) };


    // siteUsage Field Functions 
    bool hasSiteUsage() const { return this->siteUsage_ != nullptr;};
    void deleteSiteUsage() { this->siteUsage_ = nullptr;};
    inline const vector<Models::ListInstanceQuotasWithUsageResponseBodyQuotasSiteUsage> & siteUsage() const { DARABONBA_PTR_GET_CONST(siteUsage_, vector<Models::ListInstanceQuotasWithUsageResponseBodyQuotasSiteUsage>) };
    inline vector<Models::ListInstanceQuotasWithUsageResponseBodyQuotasSiteUsage> siteUsage() { DARABONBA_PTR_GET(siteUsage_, vector<Models::ListInstanceQuotasWithUsageResponseBodyQuotasSiteUsage>) };
    inline ListInstanceQuotasWithUsageResponseBodyQuotas& setSiteUsage(const vector<Models::ListInstanceQuotasWithUsageResponseBodyQuotasSiteUsage> & siteUsage) { DARABONBA_PTR_SET_VALUE(siteUsage_, siteUsage) };
    inline ListInstanceQuotasWithUsageResponseBodyQuotas& setSiteUsage(vector<Models::ListInstanceQuotasWithUsageResponseBodyQuotasSiteUsage> && siteUsage) { DARABONBA_PTR_SET_RVALUE(siteUsage_, siteUsage) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline string usage() const { DARABONBA_PTR_GET_DEFAULT(usage_, "") };
    inline ListInstanceQuotasWithUsageResponseBodyQuotas& setUsage(string usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };


  protected:
    // The quota name.
    std::shared_ptr<string> quotaName_ = nullptr;
    // The quota value.
    std::shared_ptr<string> quotaValue_ = nullptr;
    // The usage of the quota in each website associated with the plan.
    std::shared_ptr<vector<Models::ListInstanceQuotasWithUsageResponseBodyQuotasSiteUsage>> siteUsage_ = nullptr;
    // The quota usage.
    std::shared_ptr<string> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
