// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATAREFUNDCHANGERULEMAPVALUE_HPP_
#define ALIBABACLOUD_MODELS_DATAREFUNDCHANGERULEMAPVALUE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DataRefundChangeRuleMapValueRefundRuleAllUnusedList.hpp>
#include <alibabacloud/models/DataRefundChangeRuleMapValueRefundRulePartUnusedList.hpp>
#include <alibabacloud/models/DataRefundChangeRuleMapValueChangeRuleInUnusedList.hpp>
#include <alibabacloud/models/DataRefundChangeRuleMapValueChangeRuleOutUnusedList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class DataRefundChangeRuleMapValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DataRefundChangeRuleMapValue& obj) { 
      DARABONBA_PTR_TO_JSON(refund_rule_all_unused_list, refundRuleAllUnusedList_);
      DARABONBA_PTR_TO_JSON(refund_rule_part_unused_list, refundRulePartUnusedList_);
      DARABONBA_PTR_TO_JSON(change_rule_in_unused_list, changeRuleInUnusedList_);
      DARABONBA_PTR_TO_JSON(change_rule_out_unused_list, changeRuleOutUnusedList_);
    };
    friend void from_json(const Darabonba::Json& j, DataRefundChangeRuleMapValue& obj) { 
      DARABONBA_PTR_FROM_JSON(refund_rule_all_unused_list, refundRuleAllUnusedList_);
      DARABONBA_PTR_FROM_JSON(refund_rule_part_unused_list, refundRulePartUnusedList_);
      DARABONBA_PTR_FROM_JSON(change_rule_in_unused_list, changeRuleInUnusedList_);
      DARABONBA_PTR_FROM_JSON(change_rule_out_unused_list, changeRuleOutUnusedList_);
    };
    DataRefundChangeRuleMapValue() = default ;
    DataRefundChangeRuleMapValue(const DataRefundChangeRuleMapValue &) = default ;
    DataRefundChangeRuleMapValue(DataRefundChangeRuleMapValue &&) = default ;
    DataRefundChangeRuleMapValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DataRefundChangeRuleMapValue() = default ;
    DataRefundChangeRuleMapValue& operator=(const DataRefundChangeRuleMapValue &) = default ;
    DataRefundChangeRuleMapValue& operator=(DataRefundChangeRuleMapValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->refundRuleAllUnusedList_ == nullptr
        && return this->refundRulePartUnusedList_ == nullptr && return this->changeRuleInUnusedList_ == nullptr && return this->changeRuleOutUnusedList_ == nullptr; };
    // refundRuleAllUnusedList Field Functions 
    bool hasRefundRuleAllUnusedList() const { return this->refundRuleAllUnusedList_ != nullptr;};
    void deleteRefundRuleAllUnusedList() { this->refundRuleAllUnusedList_ = nullptr;};
    inline const vector<DataRefundChangeRuleMapValueRefundRuleAllUnusedList> & refundRuleAllUnusedList() const { DARABONBA_PTR_GET_CONST(refundRuleAllUnusedList_, vector<DataRefundChangeRuleMapValueRefundRuleAllUnusedList>) };
    inline vector<DataRefundChangeRuleMapValueRefundRuleAllUnusedList> refundRuleAllUnusedList() { DARABONBA_PTR_GET(refundRuleAllUnusedList_, vector<DataRefundChangeRuleMapValueRefundRuleAllUnusedList>) };
    inline DataRefundChangeRuleMapValue& setRefundRuleAllUnusedList(const vector<DataRefundChangeRuleMapValueRefundRuleAllUnusedList> & refundRuleAllUnusedList) { DARABONBA_PTR_SET_VALUE(refundRuleAllUnusedList_, refundRuleAllUnusedList) };
    inline DataRefundChangeRuleMapValue& setRefundRuleAllUnusedList(vector<DataRefundChangeRuleMapValueRefundRuleAllUnusedList> && refundRuleAllUnusedList) { DARABONBA_PTR_SET_RVALUE(refundRuleAllUnusedList_, refundRuleAllUnusedList) };


    // refundRulePartUnusedList Field Functions 
    bool hasRefundRulePartUnusedList() const { return this->refundRulePartUnusedList_ != nullptr;};
    void deleteRefundRulePartUnusedList() { this->refundRulePartUnusedList_ = nullptr;};
    inline const vector<DataRefundChangeRuleMapValueRefundRulePartUnusedList> & refundRulePartUnusedList() const { DARABONBA_PTR_GET_CONST(refundRulePartUnusedList_, vector<DataRefundChangeRuleMapValueRefundRulePartUnusedList>) };
    inline vector<DataRefundChangeRuleMapValueRefundRulePartUnusedList> refundRulePartUnusedList() { DARABONBA_PTR_GET(refundRulePartUnusedList_, vector<DataRefundChangeRuleMapValueRefundRulePartUnusedList>) };
    inline DataRefundChangeRuleMapValue& setRefundRulePartUnusedList(const vector<DataRefundChangeRuleMapValueRefundRulePartUnusedList> & refundRulePartUnusedList) { DARABONBA_PTR_SET_VALUE(refundRulePartUnusedList_, refundRulePartUnusedList) };
    inline DataRefundChangeRuleMapValue& setRefundRulePartUnusedList(vector<DataRefundChangeRuleMapValueRefundRulePartUnusedList> && refundRulePartUnusedList) { DARABONBA_PTR_SET_RVALUE(refundRulePartUnusedList_, refundRulePartUnusedList) };


    // changeRuleInUnusedList Field Functions 
    bool hasChangeRuleInUnusedList() const { return this->changeRuleInUnusedList_ != nullptr;};
    void deleteChangeRuleInUnusedList() { this->changeRuleInUnusedList_ = nullptr;};
    inline const vector<DataRefundChangeRuleMapValueChangeRuleInUnusedList> & changeRuleInUnusedList() const { DARABONBA_PTR_GET_CONST(changeRuleInUnusedList_, vector<DataRefundChangeRuleMapValueChangeRuleInUnusedList>) };
    inline vector<DataRefundChangeRuleMapValueChangeRuleInUnusedList> changeRuleInUnusedList() { DARABONBA_PTR_GET(changeRuleInUnusedList_, vector<DataRefundChangeRuleMapValueChangeRuleInUnusedList>) };
    inline DataRefundChangeRuleMapValue& setChangeRuleInUnusedList(const vector<DataRefundChangeRuleMapValueChangeRuleInUnusedList> & changeRuleInUnusedList) { DARABONBA_PTR_SET_VALUE(changeRuleInUnusedList_, changeRuleInUnusedList) };
    inline DataRefundChangeRuleMapValue& setChangeRuleInUnusedList(vector<DataRefundChangeRuleMapValueChangeRuleInUnusedList> && changeRuleInUnusedList) { DARABONBA_PTR_SET_RVALUE(changeRuleInUnusedList_, changeRuleInUnusedList) };


    // changeRuleOutUnusedList Field Functions 
    bool hasChangeRuleOutUnusedList() const { return this->changeRuleOutUnusedList_ != nullptr;};
    void deleteChangeRuleOutUnusedList() { this->changeRuleOutUnusedList_ = nullptr;};
    inline const vector<DataRefundChangeRuleMapValueChangeRuleOutUnusedList> & changeRuleOutUnusedList() const { DARABONBA_PTR_GET_CONST(changeRuleOutUnusedList_, vector<DataRefundChangeRuleMapValueChangeRuleOutUnusedList>) };
    inline vector<DataRefundChangeRuleMapValueChangeRuleOutUnusedList> changeRuleOutUnusedList() { DARABONBA_PTR_GET(changeRuleOutUnusedList_, vector<DataRefundChangeRuleMapValueChangeRuleOutUnusedList>) };
    inline DataRefundChangeRuleMapValue& setChangeRuleOutUnusedList(const vector<DataRefundChangeRuleMapValueChangeRuleOutUnusedList> & changeRuleOutUnusedList) { DARABONBA_PTR_SET_VALUE(changeRuleOutUnusedList_, changeRuleOutUnusedList) };
    inline DataRefundChangeRuleMapValue& setChangeRuleOutUnusedList(vector<DataRefundChangeRuleMapValueChangeRuleOutUnusedList> && changeRuleOutUnusedList) { DARABONBA_PTR_SET_RVALUE(changeRuleOutUnusedList_, changeRuleOutUnusedList) };


  protected:
    // refund rule for fully-unused tickets
    std::shared_ptr<vector<DataRefundChangeRuleMapValueRefundRuleAllUnusedList>> refundRuleAllUnusedList_ = nullptr;
    // refund rule for partially-used tickets
    std::shared_ptr<vector<DataRefundChangeRuleMapValueRefundRulePartUnusedList>> refundRulePartUnusedList_ = nullptr;
    // change rule for inbound segment unused tickets
    std::shared_ptr<vector<DataRefundChangeRuleMapValueChangeRuleInUnusedList>> changeRuleInUnusedList_ = nullptr;
    // change rule for outbound-flight-unused tickets
    std::shared_ptr<vector<DataRefundChangeRuleMapValueChangeRuleOutUnusedList>> changeRuleOutUnusedList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
