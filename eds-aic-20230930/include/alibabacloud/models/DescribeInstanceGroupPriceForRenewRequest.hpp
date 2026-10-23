// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEGROUPPRICEFORRENEWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEGROUPPRICEFORRENEWREQUEST_HPP_
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
  class DescribeInstanceGroupPriceForRenewRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceGroupPriceForRenewRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceGroupIds, instanceGroupIds_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(PromotionId, promotionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceGroupPriceForRenewRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceGroupIds, instanceGroupIds_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(PromotionId, promotionId_);
    };
    DescribeInstanceGroupPriceForRenewRequest() = default ;
    DescribeInstanceGroupPriceForRenewRequest(const DescribeInstanceGroupPriceForRenewRequest &) = default ;
    DescribeInstanceGroupPriceForRenewRequest(DescribeInstanceGroupPriceForRenewRequest &&) = default ;
    DescribeInstanceGroupPriceForRenewRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceGroupPriceForRenewRequest() = default ;
    DescribeInstanceGroupPriceForRenewRequest& operator=(const DescribeInstanceGroupPriceForRenewRequest &) = default ;
    DescribeInstanceGroupPriceForRenewRequest& operator=(DescribeInstanceGroupPriceForRenewRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceGroupIds_ == nullptr
        && this->period_ == nullptr && this->periodUnit_ == nullptr && this->promotionId_ == nullptr; };
    // instanceGroupIds Field Functions 
    bool hasInstanceGroupIds() const { return this->instanceGroupIds_ != nullptr;};
    void deleteInstanceGroupIds() { this->instanceGroupIds_ = nullptr;};
    inline const vector<string> & getInstanceGroupIds() const { DARABONBA_PTR_GET_CONST(instanceGroupIds_, vector<string>) };
    inline vector<string> getInstanceGroupIds() { DARABONBA_PTR_GET(instanceGroupIds_, vector<string>) };
    inline DescribeInstanceGroupPriceForRenewRequest& setInstanceGroupIds(const vector<string> & instanceGroupIds) { DARABONBA_PTR_SET_VALUE(instanceGroupIds_, instanceGroupIds) };
    inline DescribeInstanceGroupPriceForRenewRequest& setInstanceGroupIds(vector<string> && instanceGroupIds) { DARABONBA_PTR_SET_RVALUE(instanceGroupIds_, instanceGroupIds) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline DescribeInstanceGroupPriceForRenewRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string getPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline DescribeInstanceGroupPriceForRenewRequest& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // promotionId Field Functions 
    bool hasPromotionId() const { return this->promotionId_ != nullptr;};
    void deletePromotionId() { this->promotionId_ = nullptr;};
    inline string getPromotionId() const { DARABONBA_PTR_GET_DEFAULT(promotionId_, "") };
    inline DescribeInstanceGroupPriceForRenewRequest& setPromotionId(string promotionId) { DARABONBA_PTR_SET_VALUE(promotionId_, promotionId) };


  protected:
    // The list of instance group IDs.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> instanceGroupIds_ {};
    // The subscription period of the resource. The unit is specified by PeriodUnit. Valid values: 1 month, 2 months, 3 months, 6 months, and 1 year.
    shared_ptr<int32_t> period_ {};
    // The unit of the subscription period. Valid values:
    // - **Month**: month
    // - **Year**: year
    shared_ptr<string> periodUnit_ {};
    // The promotion ID.
    shared_ptr<string> promotionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
