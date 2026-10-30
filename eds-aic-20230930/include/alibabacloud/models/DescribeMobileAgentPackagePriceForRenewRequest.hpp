// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMOBILEAGENTPACKAGEPRICEFORRENEWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMOBILEAGENTPACKAGEPRICEFORRENEWREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class DescribeMobileAgentPackagePriceForRenewRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMobileAgentPackagePriceForRenewRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MobileAgentPackageIds, mobileAgentPackageIds_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(PromotionId, promotionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMobileAgentPackagePriceForRenewRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MobileAgentPackageIds, mobileAgentPackageIds_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(PromotionId, promotionId_);
    };
    DescribeMobileAgentPackagePriceForRenewRequest() = default ;
    DescribeMobileAgentPackagePriceForRenewRequest(const DescribeMobileAgentPackagePriceForRenewRequest &) = default ;
    DescribeMobileAgentPackagePriceForRenewRequest(DescribeMobileAgentPackagePriceForRenewRequest &&) = default ;
    DescribeMobileAgentPackagePriceForRenewRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMobileAgentPackagePriceForRenewRequest() = default ;
    DescribeMobileAgentPackagePriceForRenewRequest& operator=(const DescribeMobileAgentPackagePriceForRenewRequest &) = default ;
    DescribeMobileAgentPackagePriceForRenewRequest& operator=(DescribeMobileAgentPackagePriceForRenewRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mobileAgentPackageIds_ == nullptr
        && this->period_ == nullptr && this->periodUnit_ == nullptr && this->promotionId_ == nullptr; };
    // mobileAgentPackageIds Field Functions 
    bool hasMobileAgentPackageIds() const { return this->mobileAgentPackageIds_ != nullptr;};
    void deleteMobileAgentPackageIds() { this->mobileAgentPackageIds_ = nullptr;};
    inline const vector<string> & getMobileAgentPackageIds() const { DARABONBA_PTR_GET_CONST(mobileAgentPackageIds_, vector<string>) };
    inline vector<string> getMobileAgentPackageIds() { DARABONBA_PTR_GET(mobileAgentPackageIds_, vector<string>) };
    inline DescribeMobileAgentPackagePriceForRenewRequest& setMobileAgentPackageIds(const vector<string> & mobileAgentPackageIds) { DARABONBA_PTR_SET_VALUE(mobileAgentPackageIds_, mobileAgentPackageIds) };
    inline DescribeMobileAgentPackagePriceForRenewRequest& setMobileAgentPackageIds(vector<string> && mobileAgentPackageIds) { DARABONBA_PTR_SET_RVALUE(mobileAgentPackageIds_, mobileAgentPackageIds) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline DescribeMobileAgentPackagePriceForRenewRequest& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string getPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline DescribeMobileAgentPackagePriceForRenewRequest& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // promotionId Field Functions 
    bool hasPromotionId() const { return this->promotionId_ != nullptr;};
    void deletePromotionId() { this->promotionId_ = nullptr;};
    inline string getPromotionId() const { DARABONBA_PTR_GET_DEFAULT(promotionId_, "") };
    inline DescribeMobileAgentPackagePriceForRenewRequest& setPromotionId(string promotionId) { DARABONBA_PTR_SET_VALUE(promotionId_, promotionId) };


  protected:
    // The IDs of the MobileAgent resource plans.
    shared_ptr<vector<string>> mobileAgentPackageIds_ {};
    // The subscription period of the resource. The unit is specified by PeriodUnit. Valid values: 1 month, 2 months, 3 months, 6 months, and 1 year.
    shared_ptr<string> period_ {};
    // The unit of the subscription period. Valid values:
    // - **Month**: Month.
    // - **Year**: Year.
    shared_ptr<string> periodUnit_ {};
    // The promotion ID.
    shared_ptr<string> promotionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
