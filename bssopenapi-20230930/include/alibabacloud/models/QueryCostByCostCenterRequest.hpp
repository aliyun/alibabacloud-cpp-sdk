// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCOSTBYCOSTCENTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYCOSTBYCOSTCENTERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class QueryCostByCostCenterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCostByCostCenterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BillingMonth, billingMonth_);
      DARABONBA_PTR_TO_JSON(DisplayZeroAmountBills, displayZeroAmountBills_);
      DARABONBA_PTR_TO_JSON(GroupByCostCenterLevel, groupByCostCenterLevel_);
      DARABONBA_PTR_TO_JSON(Metrics, metrics_);
      DARABONBA_PTR_TO_JSON(OwnerAccountId, ownerAccountId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCostByCostCenterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BillingMonth, billingMonth_);
      DARABONBA_PTR_FROM_JSON(DisplayZeroAmountBills, displayZeroAmountBills_);
      DARABONBA_PTR_FROM_JSON(GroupByCostCenterLevel, groupByCostCenterLevel_);
      DARABONBA_PTR_FROM_JSON(Metrics, metrics_);
      DARABONBA_PTR_FROM_JSON(OwnerAccountId, ownerAccountId_);
    };
    QueryCostByCostCenterRequest() = default ;
    QueryCostByCostCenterRequest(const QueryCostByCostCenterRequest &) = default ;
    QueryCostByCostCenterRequest(QueryCostByCostCenterRequest &&) = default ;
    QueryCostByCostCenterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCostByCostCenterRequest() = default ;
    QueryCostByCostCenterRequest& operator=(const QueryCostByCostCenterRequest &) = default ;
    QueryCostByCostCenterRequest& operator=(QueryCostByCostCenterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->billingMonth_ == nullptr
        && this->displayZeroAmountBills_ == nullptr && this->groupByCostCenterLevel_ == nullptr && this->metrics_ == nullptr && this->ownerAccountId_ == nullptr; };
    // billingMonth Field Functions 
    bool hasBillingMonth() const { return this->billingMonth_ != nullptr;};
    void deleteBillingMonth() { this->billingMonth_ = nullptr;};
    inline int32_t getBillingMonth() const { DARABONBA_PTR_GET_DEFAULT(billingMonth_, 0) };
    inline QueryCostByCostCenterRequest& setBillingMonth(int32_t billingMonth) { DARABONBA_PTR_SET_VALUE(billingMonth_, billingMonth) };


    // displayZeroAmountBills Field Functions 
    bool hasDisplayZeroAmountBills() const { return this->displayZeroAmountBills_ != nullptr;};
    void deleteDisplayZeroAmountBills() { this->displayZeroAmountBills_ = nullptr;};
    inline bool getDisplayZeroAmountBills() const { DARABONBA_PTR_GET_DEFAULT(displayZeroAmountBills_, false) };
    inline QueryCostByCostCenterRequest& setDisplayZeroAmountBills(bool displayZeroAmountBills) { DARABONBA_PTR_SET_VALUE(displayZeroAmountBills_, displayZeroAmountBills) };


    // groupByCostCenterLevel Field Functions 
    bool hasGroupByCostCenterLevel() const { return this->groupByCostCenterLevel_ != nullptr;};
    void deleteGroupByCostCenterLevel() { this->groupByCostCenterLevel_ = nullptr;};
    inline bool getGroupByCostCenterLevel() const { DARABONBA_PTR_GET_DEFAULT(groupByCostCenterLevel_, false) };
    inline QueryCostByCostCenterRequest& setGroupByCostCenterLevel(bool groupByCostCenterLevel) { DARABONBA_PTR_SET_VALUE(groupByCostCenterLevel_, groupByCostCenterLevel) };


    // metrics Field Functions 
    bool hasMetrics() const { return this->metrics_ != nullptr;};
    void deleteMetrics() { this->metrics_ = nullptr;};
    inline string getMetrics() const { DARABONBA_PTR_GET_DEFAULT(metrics_, "") };
    inline QueryCostByCostCenterRequest& setMetrics(string metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };


    // ownerAccountId Field Functions 
    bool hasOwnerAccountId() const { return this->ownerAccountId_ != nullptr;};
    void deleteOwnerAccountId() { this->ownerAccountId_ = nullptr;};
    inline int64_t getOwnerAccountId() const { DARABONBA_PTR_GET_DEFAULT(ownerAccountId_, 0L) };
    inline QueryCostByCostCenterRequest& setOwnerAccountId(int64_t ownerAccountId) { DARABONBA_PTR_SET_VALUE(ownerAccountId_, ownerAccountId) };


  protected:
    // This parameter is required.
    shared_ptr<int32_t> billingMonth_ {};
    shared_ptr<bool> displayZeroAmountBills_ {};
    shared_ptr<bool> groupByCostCenterLevel_ {};
    // This parameter is required.
    shared_ptr<string> metrics_ {};
    shared_ptr<int64_t> ownerAccountId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
