// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREQUESTHITRESPONSEBODYRESULTOBJECTRULEHITRECORDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREQUESTHITRESPONSEBODYRESULTOBJECTRULEHITRECORDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeRequestHitResponseBodyResultObjectRuleHitRecords : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRequestHitResponseBodyResultObjectRuleHitRecords& obj) { 
      DARABONBA_PTR_TO_JSON(cost, cost_);
      DARABONBA_PTR_TO_JSON(hitSuccessful, hitSuccessful_);
      DARABONBA_PTR_TO_JSON(isShowDetail, isShowDetail_);
      DARABONBA_PTR_TO_JSON(order, order_);
      DARABONBA_PTR_TO_JSON(ruleId, ruleId_);
      DARABONBA_PTR_TO_JSON(ruleName, ruleName_);
      DARABONBA_PTR_TO_JSON(ruleSnapshotId, ruleSnapshotId_);
      DARABONBA_PTR_TO_JSON(ruleStatus, ruleStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRequestHitResponseBodyResultObjectRuleHitRecords& obj) { 
      DARABONBA_PTR_FROM_JSON(cost, cost_);
      DARABONBA_PTR_FROM_JSON(hitSuccessful, hitSuccessful_);
      DARABONBA_PTR_FROM_JSON(isShowDetail, isShowDetail_);
      DARABONBA_PTR_FROM_JSON(order, order_);
      DARABONBA_PTR_FROM_JSON(ruleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(ruleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(ruleSnapshotId, ruleSnapshotId_);
      DARABONBA_PTR_FROM_JSON(ruleStatus, ruleStatus_);
    };
    DescribeRequestHitResponseBodyResultObjectRuleHitRecords() = default ;
    DescribeRequestHitResponseBodyResultObjectRuleHitRecords(const DescribeRequestHitResponseBodyResultObjectRuleHitRecords &) = default ;
    DescribeRequestHitResponseBodyResultObjectRuleHitRecords(DescribeRequestHitResponseBodyResultObjectRuleHitRecords &&) = default ;
    DescribeRequestHitResponseBodyResultObjectRuleHitRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRequestHitResponseBodyResultObjectRuleHitRecords() = default ;
    DescribeRequestHitResponseBodyResultObjectRuleHitRecords& operator=(const DescribeRequestHitResponseBodyResultObjectRuleHitRecords &) = default ;
    DescribeRequestHitResponseBodyResultObjectRuleHitRecords& operator=(DescribeRequestHitResponseBodyResultObjectRuleHitRecords &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cost_ != nullptr
        && this->hitSuccessful_ != nullptr && this->isShowDetail_ != nullptr && this->order_ != nullptr && this->ruleId_ != nullptr && this->ruleName_ != nullptr
        && this->ruleSnapshotId_ != nullptr && this->ruleStatus_ != nullptr; };
    // cost Field Functions 
    bool hasCost() const { return this->cost_ != nullptr;};
    void deleteCost() { this->cost_ = nullptr;};
    inline int32_t cost() const { DARABONBA_PTR_GET_DEFAULT(cost_, 0) };
    inline DescribeRequestHitResponseBodyResultObjectRuleHitRecords& setCost(int32_t cost) { DARABONBA_PTR_SET_VALUE(cost_, cost) };


    // hitSuccessful Field Functions 
    bool hasHitSuccessful() const { return this->hitSuccessful_ != nullptr;};
    void deleteHitSuccessful() { this->hitSuccessful_ = nullptr;};
    inline bool hitSuccessful() const { DARABONBA_PTR_GET_DEFAULT(hitSuccessful_, false) };
    inline DescribeRequestHitResponseBodyResultObjectRuleHitRecords& setHitSuccessful(bool hitSuccessful) { DARABONBA_PTR_SET_VALUE(hitSuccessful_, hitSuccessful) };


    // isShowDetail Field Functions 
    bool hasIsShowDetail() const { return this->isShowDetail_ != nullptr;};
    void deleteIsShowDetail() { this->isShowDetail_ = nullptr;};
    inline bool isShowDetail() const { DARABONBA_PTR_GET_DEFAULT(isShowDetail_, false) };
    inline DescribeRequestHitResponseBodyResultObjectRuleHitRecords& setIsShowDetail(bool isShowDetail) { DARABONBA_PTR_SET_VALUE(isShowDetail_, isShowDetail) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline int32_t order() const { DARABONBA_PTR_GET_DEFAULT(order_, 0) };
    inline DescribeRequestHitResponseBodyResultObjectRuleHitRecords& setOrder(int32_t order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline DescribeRequestHitResponseBodyResultObjectRuleHitRecords& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline DescribeRequestHitResponseBodyResultObjectRuleHitRecords& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // ruleSnapshotId Field Functions 
    bool hasRuleSnapshotId() const { return this->ruleSnapshotId_ != nullptr;};
    void deleteRuleSnapshotId() { this->ruleSnapshotId_ = nullptr;};
    inline string ruleSnapshotId() const { DARABONBA_PTR_GET_DEFAULT(ruleSnapshotId_, "") };
    inline DescribeRequestHitResponseBodyResultObjectRuleHitRecords& setRuleSnapshotId(string ruleSnapshotId) { DARABONBA_PTR_SET_VALUE(ruleSnapshotId_, ruleSnapshotId) };


    // ruleStatus Field Functions 
    bool hasRuleStatus() const { return this->ruleStatus_ != nullptr;};
    void deleteRuleStatus() { this->ruleStatus_ = nullptr;};
    inline string ruleStatus() const { DARABONBA_PTR_GET_DEFAULT(ruleStatus_, "") };
    inline DescribeRequestHitResponseBodyResultObjectRuleHitRecords& setRuleStatus(string ruleStatus) { DARABONBA_PTR_SET_VALUE(ruleStatus_, ruleStatus) };


  protected:
    // Duration
    std::shared_ptr<int32_t> cost_ = nullptr;
    // Whether the rule was hit.
    std::shared_ptr<bool> hitSuccessful_ = nullptr;
    // Whether to show details
    std::shared_ptr<bool> isShowDetail_ = nullptr;
    // Order.
    std::shared_ptr<int32_t> order_ = nullptr;
    // Policy ID
    std::shared_ptr<string> ruleId_ = nullptr;
    // Policy name
    std::shared_ptr<string> ruleName_ = nullptr;
    // Rule snapshot ID
    std::shared_ptr<string> ruleSnapshotId_ = nullptr;
    // Policy status
    std::shared_ptr<string> ruleStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
