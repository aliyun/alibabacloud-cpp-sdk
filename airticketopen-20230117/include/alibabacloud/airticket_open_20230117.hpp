// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_AIRTICKETOPEN20230117_H_
#define ALIBABACLOUD_AIRTICKETOPEN20230117_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_AirticketOpen20230117 {
class DataSolutionListSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue : public Darabonba::Model {
public:
  shared_ptr<long> baggageAmount{};
  shared_ptr<long> baggageWeight{};
  shared_ptr<string> baggageWeightUnit{};
  shared_ptr<bool> isAllWeight{};
  shared_ptr<long> carryOnAmount{};
  shared_ptr<long> carryOnWeight{};
  shared_ptr<string> carryOnWeightUnit{};
  shared_ptr<bool> isAllCarryOnWeight{};

  DataSolutionListSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue() {}

  explicit DataSolutionListSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (baggageAmount) {
      res["baggage_amount"] = boost::any(*baggageAmount);
    }
    if (baggageWeight) {
      res["baggage_weight"] = boost::any(*baggageWeight);
    }
    if (baggageWeightUnit) {
      res["baggage_weight_unit"] = boost::any(*baggageWeightUnit);
    }
    if (isAllWeight) {
      res["is_all_weight"] = boost::any(*isAllWeight);
    }
    if (carryOnAmount) {
      res["carry_on_amount"] = boost::any(*carryOnAmount);
    }
    if (carryOnWeight) {
      res["carry_on_weight"] = boost::any(*carryOnWeight);
    }
    if (carryOnWeightUnit) {
      res["carry_on_weight_unit"] = boost::any(*carryOnWeightUnit);
    }
    if (isAllCarryOnWeight) {
      res["is_all_carry_on_weight"] = boost::any(*isAllCarryOnWeight);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("baggage_amount") != m.end() && !m["baggage_amount"].empty()) {
      baggageAmount = make_shared<long>(boost::any_cast<long>(m["baggage_amount"]));
    }
    if (m.find("baggage_weight") != m.end() && !m["baggage_weight"].empty()) {
      baggageWeight = make_shared<long>(boost::any_cast<long>(m["baggage_weight"]));
    }
    if (m.find("baggage_weight_unit") != m.end() && !m["baggage_weight_unit"].empty()) {
      baggageWeightUnit = make_shared<string>(boost::any_cast<string>(m["baggage_weight_unit"]));
    }
    if (m.find("is_all_weight") != m.end() && !m["is_all_weight"].empty()) {
      isAllWeight = make_shared<bool>(boost::any_cast<bool>(m["is_all_weight"]));
    }
    if (m.find("carry_on_amount") != m.end() && !m["carry_on_amount"].empty()) {
      carryOnAmount = make_shared<long>(boost::any_cast<long>(m["carry_on_amount"]));
    }
    if (m.find("carry_on_weight") != m.end() && !m["carry_on_weight"].empty()) {
      carryOnWeight = make_shared<long>(boost::any_cast<long>(m["carry_on_weight"]));
    }
    if (m.find("carry_on_weight_unit") != m.end() && !m["carry_on_weight_unit"].empty()) {
      carryOnWeightUnit = make_shared<string>(boost::any_cast<string>(m["carry_on_weight_unit"]));
    }
    if (m.find("is_all_carry_on_weight") != m.end() && !m["is_all_carry_on_weight"].empty()) {
      isAllCarryOnWeight = make_shared<bool>(boost::any_cast<bool>(m["is_all_carry_on_weight"]));
    }
  }


  virtual ~DataSolutionListSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue() = default;
};
class DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueRefundRuleAllUnusedList : public Darabonba::Model {
public:
  shared_ptr<long> type{};
  shared_ptr<string> timeUnit{};
  shared_ptr<long> ruleStartTime{};
  shared_ptr<long> ruleEndTime{};
  shared_ptr<bool> canRefund{};
  shared_ptr<double> refundFee{};
  shared_ptr<bool> canReturnAllTax{};
  shared_ptr<double> returnPartTaxFee{};

  DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueRefundRuleAllUnusedList() {}

  explicit DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueRefundRuleAllUnusedList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (timeUnit) {
      res["time_unit"] = boost::any(*timeUnit);
    }
    if (ruleStartTime) {
      res["rule_start_time"] = boost::any(*ruleStartTime);
    }
    if (ruleEndTime) {
      res["rule_end_time"] = boost::any(*ruleEndTime);
    }
    if (canRefund) {
      res["can_refund"] = boost::any(*canRefund);
    }
    if (refundFee) {
      res["refund_fee"] = boost::any(*refundFee);
    }
    if (canReturnAllTax) {
      res["can_return_all_tax"] = boost::any(*canReturnAllTax);
    }
    if (returnPartTaxFee) {
      res["return_part_tax_fee"] = boost::any(*returnPartTaxFee);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["type"]));
    }
    if (m.find("time_unit") != m.end() && !m["time_unit"].empty()) {
      timeUnit = make_shared<string>(boost::any_cast<string>(m["time_unit"]));
    }
    if (m.find("rule_start_time") != m.end() && !m["rule_start_time"].empty()) {
      ruleStartTime = make_shared<long>(boost::any_cast<long>(m["rule_start_time"]));
    }
    if (m.find("rule_end_time") != m.end() && !m["rule_end_time"].empty()) {
      ruleEndTime = make_shared<long>(boost::any_cast<long>(m["rule_end_time"]));
    }
    if (m.find("can_refund") != m.end() && !m["can_refund"].empty()) {
      canRefund = make_shared<bool>(boost::any_cast<bool>(m["can_refund"]));
    }
    if (m.find("refund_fee") != m.end() && !m["refund_fee"].empty()) {
      refundFee = make_shared<double>(boost::any_cast<double>(m["refund_fee"]));
    }
    if (m.find("can_return_all_tax") != m.end() && !m["can_return_all_tax"].empty()) {
      canReturnAllTax = make_shared<bool>(boost::any_cast<bool>(m["can_return_all_tax"]));
    }
    if (m.find("return_part_tax_fee") != m.end() && !m["return_part_tax_fee"].empty()) {
      returnPartTaxFee = make_shared<double>(boost::any_cast<double>(m["return_part_tax_fee"]));
    }
  }


  virtual ~DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueRefundRuleAllUnusedList() = default;
};
class DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueRefundRulePartUnusedList : public Darabonba::Model {
public:
  shared_ptr<long> type{};
  shared_ptr<string> timeUnit{};
  shared_ptr<long> ruleStartTime{};
  shared_ptr<long> ruleEndTime{};
  shared_ptr<bool> canRefund{};
  shared_ptr<double> refundFee{};
  shared_ptr<bool> canReturnAllTax{};
  shared_ptr<double> returnPartTaxFee{};

  DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueRefundRulePartUnusedList() {}

  explicit DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueRefundRulePartUnusedList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (timeUnit) {
      res["time_unit"] = boost::any(*timeUnit);
    }
    if (ruleStartTime) {
      res["rule_start_time"] = boost::any(*ruleStartTime);
    }
    if (ruleEndTime) {
      res["rule_end_time"] = boost::any(*ruleEndTime);
    }
    if (canRefund) {
      res["can_refund"] = boost::any(*canRefund);
    }
    if (refundFee) {
      res["refund_fee"] = boost::any(*refundFee);
    }
    if (canReturnAllTax) {
      res["can_return_all_tax"] = boost::any(*canReturnAllTax);
    }
    if (returnPartTaxFee) {
      res["return_part_tax_fee"] = boost::any(*returnPartTaxFee);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["type"]));
    }
    if (m.find("time_unit") != m.end() && !m["time_unit"].empty()) {
      timeUnit = make_shared<string>(boost::any_cast<string>(m["time_unit"]));
    }
    if (m.find("rule_start_time") != m.end() && !m["rule_start_time"].empty()) {
      ruleStartTime = make_shared<long>(boost::any_cast<long>(m["rule_start_time"]));
    }
    if (m.find("rule_end_time") != m.end() && !m["rule_end_time"].empty()) {
      ruleEndTime = make_shared<long>(boost::any_cast<long>(m["rule_end_time"]));
    }
    if (m.find("can_refund") != m.end() && !m["can_refund"].empty()) {
      canRefund = make_shared<bool>(boost::any_cast<bool>(m["can_refund"]));
    }
    if (m.find("refund_fee") != m.end() && !m["refund_fee"].empty()) {
      refundFee = make_shared<double>(boost::any_cast<double>(m["refund_fee"]));
    }
    if (m.find("can_return_all_tax") != m.end() && !m["can_return_all_tax"].empty()) {
      canReturnAllTax = make_shared<bool>(boost::any_cast<bool>(m["can_return_all_tax"]));
    }
    if (m.find("return_part_tax_fee") != m.end() && !m["return_part_tax_fee"].empty()) {
      returnPartTaxFee = make_shared<double>(boost::any_cast<double>(m["return_part_tax_fee"]));
    }
  }


  virtual ~DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueRefundRulePartUnusedList() = default;
};
class DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleInUnusedList : public Darabonba::Model {
public:
  shared_ptr<long> type{};
  shared_ptr<string> timeUnit{};
  shared_ptr<long> ruleStartTime{};
  shared_ptr<long> ruleEndTime{};
  shared_ptr<bool> canChange{};
  shared_ptr<double> changeFee{};

  DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleInUnusedList() {}

  explicit DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleInUnusedList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (timeUnit) {
      res["time_unit"] = boost::any(*timeUnit);
    }
    if (ruleStartTime) {
      res["rule_start_time"] = boost::any(*ruleStartTime);
    }
    if (ruleEndTime) {
      res["rule_end_time"] = boost::any(*ruleEndTime);
    }
    if (canChange) {
      res["can_change"] = boost::any(*canChange);
    }
    if (changeFee) {
      res["change_fee"] = boost::any(*changeFee);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["type"]));
    }
    if (m.find("time_unit") != m.end() && !m["time_unit"].empty()) {
      timeUnit = make_shared<string>(boost::any_cast<string>(m["time_unit"]));
    }
    if (m.find("rule_start_time") != m.end() && !m["rule_start_time"].empty()) {
      ruleStartTime = make_shared<long>(boost::any_cast<long>(m["rule_start_time"]));
    }
    if (m.find("rule_end_time") != m.end() && !m["rule_end_time"].empty()) {
      ruleEndTime = make_shared<long>(boost::any_cast<long>(m["rule_end_time"]));
    }
    if (m.find("can_change") != m.end() && !m["can_change"].empty()) {
      canChange = make_shared<bool>(boost::any_cast<bool>(m["can_change"]));
    }
    if (m.find("change_fee") != m.end() && !m["change_fee"].empty()) {
      changeFee = make_shared<double>(boost::any_cast<double>(m["change_fee"]));
    }
  }


  virtual ~DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleInUnusedList() = default;
};
class DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleOutUnusedList : public Darabonba::Model {
public:
  shared_ptr<long> type{};
  shared_ptr<string> timeUnit{};
  shared_ptr<long> ruleStartTime{};
  shared_ptr<long> ruleEndTime{};
  shared_ptr<bool> canChange{};
  shared_ptr<double> changeFee{};

  DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleOutUnusedList() {}

  explicit DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleOutUnusedList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (timeUnit) {
      res["time_unit"] = boost::any(*timeUnit);
    }
    if (ruleStartTime) {
      res["rule_start_time"] = boost::any(*ruleStartTime);
    }
    if (ruleEndTime) {
      res["rule_end_time"] = boost::any(*ruleEndTime);
    }
    if (canChange) {
      res["can_change"] = boost::any(*canChange);
    }
    if (changeFee) {
      res["change_fee"] = boost::any(*changeFee);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["type"]));
    }
    if (m.find("time_unit") != m.end() && !m["time_unit"].empty()) {
      timeUnit = make_shared<string>(boost::any_cast<string>(m["time_unit"]));
    }
    if (m.find("rule_start_time") != m.end() && !m["rule_start_time"].empty()) {
      ruleStartTime = make_shared<long>(boost::any_cast<long>(m["rule_start_time"]));
    }
    if (m.find("rule_end_time") != m.end() && !m["rule_end_time"].empty()) {
      ruleEndTime = make_shared<long>(boost::any_cast<long>(m["rule_end_time"]));
    }
    if (m.find("can_change") != m.end() && !m["can_change"].empty()) {
      canChange = make_shared<bool>(boost::any_cast<bool>(m["can_change"]));
    }
    if (m.find("change_fee") != m.end() && !m["change_fee"].empty()) {
      changeFee = make_shared<double>(boost::any_cast<double>(m["change_fee"]));
    }
  }


  virtual ~DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleOutUnusedList() = default;
};
class DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue : public Darabonba::Model {
public:
  shared_ptr<vector<DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueRefundRuleAllUnusedList>> refundRuleAllUnusedList{};
  shared_ptr<vector<DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueRefundRulePartUnusedList>> refundRulePartUnusedList{};
  shared_ptr<vector<DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleInUnusedList>> changeRuleInUnusedList{};
  shared_ptr<vector<DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleOutUnusedList>> changeRuleOutUnusedList{};

  DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue() {}

  explicit DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (refundRuleAllUnusedList) {
      vector<boost::any> temp1;
      for(auto item1:*refundRuleAllUnusedList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["refund_rule_all_unused_list"] = boost::any(temp1);
    }
    if (refundRulePartUnusedList) {
      vector<boost::any> temp1;
      for(auto item1:*refundRulePartUnusedList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["refund_rule_part_unused_list"] = boost::any(temp1);
    }
    if (changeRuleInUnusedList) {
      vector<boost::any> temp1;
      for(auto item1:*changeRuleInUnusedList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["change_rule_in_unused_list"] = boost::any(temp1);
    }
    if (changeRuleOutUnusedList) {
      vector<boost::any> temp1;
      for(auto item1:*changeRuleOutUnusedList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["change_rule_out_unused_list"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("refund_rule_all_unused_list") != m.end() && !m["refund_rule_all_unused_list"].empty()) {
      if (typeid(vector<boost::any>) == m["refund_rule_all_unused_list"].type()) {
        vector<DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueRefundRuleAllUnusedList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["refund_rule_all_unused_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueRefundRuleAllUnusedList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        refundRuleAllUnusedList = make_shared<vector<DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueRefundRuleAllUnusedList>>(expect1);
      }
    }
    if (m.find("refund_rule_part_unused_list") != m.end() && !m["refund_rule_part_unused_list"].empty()) {
      if (typeid(vector<boost::any>) == m["refund_rule_part_unused_list"].type()) {
        vector<DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueRefundRulePartUnusedList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["refund_rule_part_unused_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueRefundRulePartUnusedList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        refundRulePartUnusedList = make_shared<vector<DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueRefundRulePartUnusedList>>(expect1);
      }
    }
    if (m.find("change_rule_in_unused_list") != m.end() && !m["change_rule_in_unused_list"].empty()) {
      if (typeid(vector<boost::any>) == m["change_rule_in_unused_list"].type()) {
        vector<DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleInUnusedList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["change_rule_in_unused_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleInUnusedList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        changeRuleInUnusedList = make_shared<vector<DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleInUnusedList>>(expect1);
      }
    }
    if (m.find("change_rule_out_unused_list") != m.end() && !m["change_rule_out_unused_list"].empty()) {
      if (typeid(vector<boost::any>) == m["change_rule_out_unused_list"].type()) {
        vector<DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleOutUnusedList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["change_rule_out_unused_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleOutUnusedList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        changeRuleOutUnusedList = make_shared<vector<DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleOutUnusedList>>(expect1);
      }
    }
  }


  virtual ~DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue() = default;
};
class DataBaggageAllowanceMapValue : public Darabonba::Model {
public:
  shared_ptr<long> baggageAmount{};
  shared_ptr<long> baggageWeight{};
  shared_ptr<string> baggageWeightUnit{};
  shared_ptr<bool> isAllWeight{};
  shared_ptr<long> carryOnAmount{};
  shared_ptr<long> carryOnWeight{};
  shared_ptr<string> carryOnWeightUnit{};
  shared_ptr<bool> isAllCarryOnWeight{};

  DataBaggageAllowanceMapValue() {}

  explicit DataBaggageAllowanceMapValue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (baggageAmount) {
      res["baggage_amount"] = boost::any(*baggageAmount);
    }
    if (baggageWeight) {
      res["baggage_weight"] = boost::any(*baggageWeight);
    }
    if (baggageWeightUnit) {
      res["baggage_weight_unit"] = boost::any(*baggageWeightUnit);
    }
    if (isAllWeight) {
      res["is_all_weight"] = boost::any(*isAllWeight);
    }
    if (carryOnAmount) {
      res["carry_on_amount"] = boost::any(*carryOnAmount);
    }
    if (carryOnWeight) {
      res["carry_on_weight"] = boost::any(*carryOnWeight);
    }
    if (carryOnWeightUnit) {
      res["carry_on_weight_unit"] = boost::any(*carryOnWeightUnit);
    }
    if (isAllCarryOnWeight) {
      res["is_all_carry_on_weight"] = boost::any(*isAllCarryOnWeight);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("baggage_amount") != m.end() && !m["baggage_amount"].empty()) {
      baggageAmount = make_shared<long>(boost::any_cast<long>(m["baggage_amount"]));
    }
    if (m.find("baggage_weight") != m.end() && !m["baggage_weight"].empty()) {
      baggageWeight = make_shared<long>(boost::any_cast<long>(m["baggage_weight"]));
    }
    if (m.find("baggage_weight_unit") != m.end() && !m["baggage_weight_unit"].empty()) {
      baggageWeightUnit = make_shared<string>(boost::any_cast<string>(m["baggage_weight_unit"]));
    }
    if (m.find("is_all_weight") != m.end() && !m["is_all_weight"].empty()) {
      isAllWeight = make_shared<bool>(boost::any_cast<bool>(m["is_all_weight"]));
    }
    if (m.find("carry_on_amount") != m.end() && !m["carry_on_amount"].empty()) {
      carryOnAmount = make_shared<long>(boost::any_cast<long>(m["carry_on_amount"]));
    }
    if (m.find("carry_on_weight") != m.end() && !m["carry_on_weight"].empty()) {
      carryOnWeight = make_shared<long>(boost::any_cast<long>(m["carry_on_weight"]));
    }
    if (m.find("carry_on_weight_unit") != m.end() && !m["carry_on_weight_unit"].empty()) {
      carryOnWeightUnit = make_shared<string>(boost::any_cast<string>(m["carry_on_weight_unit"]));
    }
    if (m.find("is_all_carry_on_weight") != m.end() && !m["is_all_carry_on_weight"].empty()) {
      isAllCarryOnWeight = make_shared<bool>(boost::any_cast<bool>(m["is_all_carry_on_weight"]));
    }
  }


  virtual ~DataBaggageAllowanceMapValue() = default;
};
class DataRefundChangeRuleMapValueRefundRuleAllUnusedList : public Darabonba::Model {
public:
  shared_ptr<long> type{};
  shared_ptr<string> timeUnit{};
  shared_ptr<long> ruleStartTime{};
  shared_ptr<long> ruleEndTime{};
  shared_ptr<bool> canRefund{};
  shared_ptr<double> refundFee{};
  shared_ptr<bool> canReturnAllTax{};
  shared_ptr<double> returnPartTaxFee{};

  DataRefundChangeRuleMapValueRefundRuleAllUnusedList() {}

  explicit DataRefundChangeRuleMapValueRefundRuleAllUnusedList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (timeUnit) {
      res["time_unit"] = boost::any(*timeUnit);
    }
    if (ruleStartTime) {
      res["rule_start_time"] = boost::any(*ruleStartTime);
    }
    if (ruleEndTime) {
      res["rule_end_time"] = boost::any(*ruleEndTime);
    }
    if (canRefund) {
      res["can_refund"] = boost::any(*canRefund);
    }
    if (refundFee) {
      res["refund_fee"] = boost::any(*refundFee);
    }
    if (canReturnAllTax) {
      res["can_return_all_tax"] = boost::any(*canReturnAllTax);
    }
    if (returnPartTaxFee) {
      res["return_part_tax_fee"] = boost::any(*returnPartTaxFee);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["type"]));
    }
    if (m.find("time_unit") != m.end() && !m["time_unit"].empty()) {
      timeUnit = make_shared<string>(boost::any_cast<string>(m["time_unit"]));
    }
    if (m.find("rule_start_time") != m.end() && !m["rule_start_time"].empty()) {
      ruleStartTime = make_shared<long>(boost::any_cast<long>(m["rule_start_time"]));
    }
    if (m.find("rule_end_time") != m.end() && !m["rule_end_time"].empty()) {
      ruleEndTime = make_shared<long>(boost::any_cast<long>(m["rule_end_time"]));
    }
    if (m.find("can_refund") != m.end() && !m["can_refund"].empty()) {
      canRefund = make_shared<bool>(boost::any_cast<bool>(m["can_refund"]));
    }
    if (m.find("refund_fee") != m.end() && !m["refund_fee"].empty()) {
      refundFee = make_shared<double>(boost::any_cast<double>(m["refund_fee"]));
    }
    if (m.find("can_return_all_tax") != m.end() && !m["can_return_all_tax"].empty()) {
      canReturnAllTax = make_shared<bool>(boost::any_cast<bool>(m["can_return_all_tax"]));
    }
    if (m.find("return_part_tax_fee") != m.end() && !m["return_part_tax_fee"].empty()) {
      returnPartTaxFee = make_shared<double>(boost::any_cast<double>(m["return_part_tax_fee"]));
    }
  }


  virtual ~DataRefundChangeRuleMapValueRefundRuleAllUnusedList() = default;
};
class DataRefundChangeRuleMapValueRefundRulePartUnusedList : public Darabonba::Model {
public:
  shared_ptr<long> type{};
  shared_ptr<string> timeUnit{};
  shared_ptr<long> ruleStartTime{};
  shared_ptr<long> ruleEndTime{};
  shared_ptr<bool> canRefund{};
  shared_ptr<double> refundFee{};
  shared_ptr<bool> canReturnAllTax{};
  shared_ptr<double> returnPartTaxFee{};

  DataRefundChangeRuleMapValueRefundRulePartUnusedList() {}

  explicit DataRefundChangeRuleMapValueRefundRulePartUnusedList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (timeUnit) {
      res["time_unit"] = boost::any(*timeUnit);
    }
    if (ruleStartTime) {
      res["rule_start_time"] = boost::any(*ruleStartTime);
    }
    if (ruleEndTime) {
      res["rule_end_time"] = boost::any(*ruleEndTime);
    }
    if (canRefund) {
      res["can_refund"] = boost::any(*canRefund);
    }
    if (refundFee) {
      res["refund_fee"] = boost::any(*refundFee);
    }
    if (canReturnAllTax) {
      res["can_return_all_tax"] = boost::any(*canReturnAllTax);
    }
    if (returnPartTaxFee) {
      res["return_part_tax_fee"] = boost::any(*returnPartTaxFee);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["type"]));
    }
    if (m.find("time_unit") != m.end() && !m["time_unit"].empty()) {
      timeUnit = make_shared<string>(boost::any_cast<string>(m["time_unit"]));
    }
    if (m.find("rule_start_time") != m.end() && !m["rule_start_time"].empty()) {
      ruleStartTime = make_shared<long>(boost::any_cast<long>(m["rule_start_time"]));
    }
    if (m.find("rule_end_time") != m.end() && !m["rule_end_time"].empty()) {
      ruleEndTime = make_shared<long>(boost::any_cast<long>(m["rule_end_time"]));
    }
    if (m.find("can_refund") != m.end() && !m["can_refund"].empty()) {
      canRefund = make_shared<bool>(boost::any_cast<bool>(m["can_refund"]));
    }
    if (m.find("refund_fee") != m.end() && !m["refund_fee"].empty()) {
      refundFee = make_shared<double>(boost::any_cast<double>(m["refund_fee"]));
    }
    if (m.find("can_return_all_tax") != m.end() && !m["can_return_all_tax"].empty()) {
      canReturnAllTax = make_shared<bool>(boost::any_cast<bool>(m["can_return_all_tax"]));
    }
    if (m.find("return_part_tax_fee") != m.end() && !m["return_part_tax_fee"].empty()) {
      returnPartTaxFee = make_shared<double>(boost::any_cast<double>(m["return_part_tax_fee"]));
    }
  }


  virtual ~DataRefundChangeRuleMapValueRefundRulePartUnusedList() = default;
};
class DataRefundChangeRuleMapValueChangeRuleInUnusedList : public Darabonba::Model {
public:
  shared_ptr<long> type{};
  shared_ptr<string> timeUnit{};
  shared_ptr<long> ruleStartTime{};
  shared_ptr<long> ruleEndTime{};
  shared_ptr<bool> canChange{};
  shared_ptr<double> changeFee{};

  DataRefundChangeRuleMapValueChangeRuleInUnusedList() {}

  explicit DataRefundChangeRuleMapValueChangeRuleInUnusedList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (timeUnit) {
      res["time_unit"] = boost::any(*timeUnit);
    }
    if (ruleStartTime) {
      res["rule_start_time"] = boost::any(*ruleStartTime);
    }
    if (ruleEndTime) {
      res["rule_end_time"] = boost::any(*ruleEndTime);
    }
    if (canChange) {
      res["can_change"] = boost::any(*canChange);
    }
    if (changeFee) {
      res["change_fee"] = boost::any(*changeFee);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["type"]));
    }
    if (m.find("time_unit") != m.end() && !m["time_unit"].empty()) {
      timeUnit = make_shared<string>(boost::any_cast<string>(m["time_unit"]));
    }
    if (m.find("rule_start_time") != m.end() && !m["rule_start_time"].empty()) {
      ruleStartTime = make_shared<long>(boost::any_cast<long>(m["rule_start_time"]));
    }
    if (m.find("rule_end_time") != m.end() && !m["rule_end_time"].empty()) {
      ruleEndTime = make_shared<long>(boost::any_cast<long>(m["rule_end_time"]));
    }
    if (m.find("can_change") != m.end() && !m["can_change"].empty()) {
      canChange = make_shared<bool>(boost::any_cast<bool>(m["can_change"]));
    }
    if (m.find("change_fee") != m.end() && !m["change_fee"].empty()) {
      changeFee = make_shared<double>(boost::any_cast<double>(m["change_fee"]));
    }
  }


  virtual ~DataRefundChangeRuleMapValueChangeRuleInUnusedList() = default;
};
class DataRefundChangeRuleMapValueChangeRuleOutUnusedList : public Darabonba::Model {
public:
  shared_ptr<long> type{};
  shared_ptr<string> timeUnit{};
  shared_ptr<long> ruleStartTime{};
  shared_ptr<long> ruleEndTime{};
  shared_ptr<bool> canChange{};
  shared_ptr<double> changeFee{};

  DataRefundChangeRuleMapValueChangeRuleOutUnusedList() {}

  explicit DataRefundChangeRuleMapValueChangeRuleOutUnusedList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (timeUnit) {
      res["time_unit"] = boost::any(*timeUnit);
    }
    if (ruleStartTime) {
      res["rule_start_time"] = boost::any(*ruleStartTime);
    }
    if (ruleEndTime) {
      res["rule_end_time"] = boost::any(*ruleEndTime);
    }
    if (canChange) {
      res["can_change"] = boost::any(*canChange);
    }
    if (changeFee) {
      res["change_fee"] = boost::any(*changeFee);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["type"]));
    }
    if (m.find("time_unit") != m.end() && !m["time_unit"].empty()) {
      timeUnit = make_shared<string>(boost::any_cast<string>(m["time_unit"]));
    }
    if (m.find("rule_start_time") != m.end() && !m["rule_start_time"].empty()) {
      ruleStartTime = make_shared<long>(boost::any_cast<long>(m["rule_start_time"]));
    }
    if (m.find("rule_end_time") != m.end() && !m["rule_end_time"].empty()) {
      ruleEndTime = make_shared<long>(boost::any_cast<long>(m["rule_end_time"]));
    }
    if (m.find("can_change") != m.end() && !m["can_change"].empty()) {
      canChange = make_shared<bool>(boost::any_cast<bool>(m["can_change"]));
    }
    if (m.find("change_fee") != m.end() && !m["change_fee"].empty()) {
      changeFee = make_shared<double>(boost::any_cast<double>(m["change_fee"]));
    }
  }


  virtual ~DataRefundChangeRuleMapValueChangeRuleOutUnusedList() = default;
};
class DataRefundChangeRuleMapValue : public Darabonba::Model {
public:
  shared_ptr<vector<DataRefundChangeRuleMapValueRefundRuleAllUnusedList>> refundRuleAllUnusedList{};
  shared_ptr<vector<DataRefundChangeRuleMapValueRefundRulePartUnusedList>> refundRulePartUnusedList{};
  shared_ptr<vector<DataRefundChangeRuleMapValueChangeRuleInUnusedList>> changeRuleInUnusedList{};
  shared_ptr<vector<DataRefundChangeRuleMapValueChangeRuleOutUnusedList>> changeRuleOutUnusedList{};

  DataRefundChangeRuleMapValue() {}

  explicit DataRefundChangeRuleMapValue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (refundRuleAllUnusedList) {
      vector<boost::any> temp1;
      for(auto item1:*refundRuleAllUnusedList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["refund_rule_all_unused_list"] = boost::any(temp1);
    }
    if (refundRulePartUnusedList) {
      vector<boost::any> temp1;
      for(auto item1:*refundRulePartUnusedList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["refund_rule_part_unused_list"] = boost::any(temp1);
    }
    if (changeRuleInUnusedList) {
      vector<boost::any> temp1;
      for(auto item1:*changeRuleInUnusedList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["change_rule_in_unused_list"] = boost::any(temp1);
    }
    if (changeRuleOutUnusedList) {
      vector<boost::any> temp1;
      for(auto item1:*changeRuleOutUnusedList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["change_rule_out_unused_list"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("refund_rule_all_unused_list") != m.end() && !m["refund_rule_all_unused_list"].empty()) {
      if (typeid(vector<boost::any>) == m["refund_rule_all_unused_list"].type()) {
        vector<DataRefundChangeRuleMapValueRefundRuleAllUnusedList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["refund_rule_all_unused_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DataRefundChangeRuleMapValueRefundRuleAllUnusedList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        refundRuleAllUnusedList = make_shared<vector<DataRefundChangeRuleMapValueRefundRuleAllUnusedList>>(expect1);
      }
    }
    if (m.find("refund_rule_part_unused_list") != m.end() && !m["refund_rule_part_unused_list"].empty()) {
      if (typeid(vector<boost::any>) == m["refund_rule_part_unused_list"].type()) {
        vector<DataRefundChangeRuleMapValueRefundRulePartUnusedList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["refund_rule_part_unused_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DataRefundChangeRuleMapValueRefundRulePartUnusedList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        refundRulePartUnusedList = make_shared<vector<DataRefundChangeRuleMapValueRefundRulePartUnusedList>>(expect1);
      }
    }
    if (m.find("change_rule_in_unused_list") != m.end() && !m["change_rule_in_unused_list"].empty()) {
      if (typeid(vector<boost::any>) == m["change_rule_in_unused_list"].type()) {
        vector<DataRefundChangeRuleMapValueChangeRuleInUnusedList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["change_rule_in_unused_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DataRefundChangeRuleMapValueChangeRuleInUnusedList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        changeRuleInUnusedList = make_shared<vector<DataRefundChangeRuleMapValueChangeRuleInUnusedList>>(expect1);
      }
    }
    if (m.find("change_rule_out_unused_list") != m.end() && !m["change_rule_out_unused_list"].empty()) {
      if (typeid(vector<boost::any>) == m["change_rule_out_unused_list"].type()) {
        vector<DataRefundChangeRuleMapValueChangeRuleOutUnusedList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["change_rule_out_unused_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DataRefundChangeRuleMapValueChangeRuleOutUnusedList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        changeRuleOutUnusedList = make_shared<vector<DataRefundChangeRuleMapValueChangeRuleOutUnusedList>>(expect1);
      }
    }
  }


  virtual ~DataRefundChangeRuleMapValue() = default;
};
class DataSolutionSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue : public Darabonba::Model {
public:
  shared_ptr<long> baggageAmount{};
  shared_ptr<long> baggageWeight{};
  shared_ptr<string> baggageWeightUnit{};
  shared_ptr<bool> isAllWeight{};
  shared_ptr<long> carryOnAmount{};
  shared_ptr<long> carryOnWeight{};
  shared_ptr<string> carryOnWeightUnit{};
  shared_ptr<bool> isAllCarryOnWeight{};

  DataSolutionSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue() {}

  explicit DataSolutionSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (baggageAmount) {
      res["baggage_amount"] = boost::any(*baggageAmount);
    }
    if (baggageWeight) {
      res["baggage_weight"] = boost::any(*baggageWeight);
    }
    if (baggageWeightUnit) {
      res["baggage_weight_unit"] = boost::any(*baggageWeightUnit);
    }
    if (isAllWeight) {
      res["is_all_weight"] = boost::any(*isAllWeight);
    }
    if (carryOnAmount) {
      res["carry_on_amount"] = boost::any(*carryOnAmount);
    }
    if (carryOnWeight) {
      res["carry_on_weight"] = boost::any(*carryOnWeight);
    }
    if (carryOnWeightUnit) {
      res["carry_on_weight_unit"] = boost::any(*carryOnWeightUnit);
    }
    if (isAllCarryOnWeight) {
      res["is_all_carry_on_weight"] = boost::any(*isAllCarryOnWeight);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("baggage_amount") != m.end() && !m["baggage_amount"].empty()) {
      baggageAmount = make_shared<long>(boost::any_cast<long>(m["baggage_amount"]));
    }
    if (m.find("baggage_weight") != m.end() && !m["baggage_weight"].empty()) {
      baggageWeight = make_shared<long>(boost::any_cast<long>(m["baggage_weight"]));
    }
    if (m.find("baggage_weight_unit") != m.end() && !m["baggage_weight_unit"].empty()) {
      baggageWeightUnit = make_shared<string>(boost::any_cast<string>(m["baggage_weight_unit"]));
    }
    if (m.find("is_all_weight") != m.end() && !m["is_all_weight"].empty()) {
      isAllWeight = make_shared<bool>(boost::any_cast<bool>(m["is_all_weight"]));
    }
    if (m.find("carry_on_amount") != m.end() && !m["carry_on_amount"].empty()) {
      carryOnAmount = make_shared<long>(boost::any_cast<long>(m["carry_on_amount"]));
    }
    if (m.find("carry_on_weight") != m.end() && !m["carry_on_weight"].empty()) {
      carryOnWeight = make_shared<long>(boost::any_cast<long>(m["carry_on_weight"]));
    }
    if (m.find("carry_on_weight_unit") != m.end() && !m["carry_on_weight_unit"].empty()) {
      carryOnWeightUnit = make_shared<string>(boost::any_cast<string>(m["carry_on_weight_unit"]));
    }
    if (m.find("is_all_carry_on_weight") != m.end() && !m["is_all_carry_on_weight"].empty()) {
      isAllCarryOnWeight = make_shared<bool>(boost::any_cast<bool>(m["is_all_carry_on_weight"]));
    }
  }


  virtual ~DataSolutionSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue() = default;
};
class DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueRefundRuleAllUnusedList : public Darabonba::Model {
public:
  shared_ptr<long> type{};
  shared_ptr<string> timeUnit{};
  shared_ptr<long> ruleStartTime{};
  shared_ptr<long> ruleEndTime{};
  shared_ptr<bool> canRefund{};
  shared_ptr<double> refundFee{};
  shared_ptr<bool> canReturnAllTax{};
  shared_ptr<double> returnPartTaxFee{};

  DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueRefundRuleAllUnusedList() {}

  explicit DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueRefundRuleAllUnusedList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (timeUnit) {
      res["time_unit"] = boost::any(*timeUnit);
    }
    if (ruleStartTime) {
      res["rule_start_time"] = boost::any(*ruleStartTime);
    }
    if (ruleEndTime) {
      res["rule_end_time"] = boost::any(*ruleEndTime);
    }
    if (canRefund) {
      res["can_refund"] = boost::any(*canRefund);
    }
    if (refundFee) {
      res["refund_fee"] = boost::any(*refundFee);
    }
    if (canReturnAllTax) {
      res["can_return_all_tax"] = boost::any(*canReturnAllTax);
    }
    if (returnPartTaxFee) {
      res["return_part_tax_fee"] = boost::any(*returnPartTaxFee);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["type"]));
    }
    if (m.find("time_unit") != m.end() && !m["time_unit"].empty()) {
      timeUnit = make_shared<string>(boost::any_cast<string>(m["time_unit"]));
    }
    if (m.find("rule_start_time") != m.end() && !m["rule_start_time"].empty()) {
      ruleStartTime = make_shared<long>(boost::any_cast<long>(m["rule_start_time"]));
    }
    if (m.find("rule_end_time") != m.end() && !m["rule_end_time"].empty()) {
      ruleEndTime = make_shared<long>(boost::any_cast<long>(m["rule_end_time"]));
    }
    if (m.find("can_refund") != m.end() && !m["can_refund"].empty()) {
      canRefund = make_shared<bool>(boost::any_cast<bool>(m["can_refund"]));
    }
    if (m.find("refund_fee") != m.end() && !m["refund_fee"].empty()) {
      refundFee = make_shared<double>(boost::any_cast<double>(m["refund_fee"]));
    }
    if (m.find("can_return_all_tax") != m.end() && !m["can_return_all_tax"].empty()) {
      canReturnAllTax = make_shared<bool>(boost::any_cast<bool>(m["can_return_all_tax"]));
    }
    if (m.find("return_part_tax_fee") != m.end() && !m["return_part_tax_fee"].empty()) {
      returnPartTaxFee = make_shared<double>(boost::any_cast<double>(m["return_part_tax_fee"]));
    }
  }


  virtual ~DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueRefundRuleAllUnusedList() = default;
};
class DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueRefundRulePartUnusedList : public Darabonba::Model {
public:
  shared_ptr<long> type{};
  shared_ptr<string> timeUnit{};
  shared_ptr<long> ruleStartTime{};
  shared_ptr<long> ruleEndTime{};
  shared_ptr<bool> canRefund{};
  shared_ptr<double> refundFee{};
  shared_ptr<bool> canReturnAllTax{};
  shared_ptr<double> returnPartTaxFee{};

  DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueRefundRulePartUnusedList() {}

  explicit DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueRefundRulePartUnusedList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (timeUnit) {
      res["time_unit"] = boost::any(*timeUnit);
    }
    if (ruleStartTime) {
      res["rule_start_time"] = boost::any(*ruleStartTime);
    }
    if (ruleEndTime) {
      res["rule_end_time"] = boost::any(*ruleEndTime);
    }
    if (canRefund) {
      res["can_refund"] = boost::any(*canRefund);
    }
    if (refundFee) {
      res["refund_fee"] = boost::any(*refundFee);
    }
    if (canReturnAllTax) {
      res["can_return_all_tax"] = boost::any(*canReturnAllTax);
    }
    if (returnPartTaxFee) {
      res["return_part_tax_fee"] = boost::any(*returnPartTaxFee);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["type"]));
    }
    if (m.find("time_unit") != m.end() && !m["time_unit"].empty()) {
      timeUnit = make_shared<string>(boost::any_cast<string>(m["time_unit"]));
    }
    if (m.find("rule_start_time") != m.end() && !m["rule_start_time"].empty()) {
      ruleStartTime = make_shared<long>(boost::any_cast<long>(m["rule_start_time"]));
    }
    if (m.find("rule_end_time") != m.end() && !m["rule_end_time"].empty()) {
      ruleEndTime = make_shared<long>(boost::any_cast<long>(m["rule_end_time"]));
    }
    if (m.find("can_refund") != m.end() && !m["can_refund"].empty()) {
      canRefund = make_shared<bool>(boost::any_cast<bool>(m["can_refund"]));
    }
    if (m.find("refund_fee") != m.end() && !m["refund_fee"].empty()) {
      refundFee = make_shared<double>(boost::any_cast<double>(m["refund_fee"]));
    }
    if (m.find("can_return_all_tax") != m.end() && !m["can_return_all_tax"].empty()) {
      canReturnAllTax = make_shared<bool>(boost::any_cast<bool>(m["can_return_all_tax"]));
    }
    if (m.find("return_part_tax_fee") != m.end() && !m["return_part_tax_fee"].empty()) {
      returnPartTaxFee = make_shared<double>(boost::any_cast<double>(m["return_part_tax_fee"]));
    }
  }


  virtual ~DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueRefundRulePartUnusedList() = default;
};
class DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleInUnusedList : public Darabonba::Model {
public:
  shared_ptr<long> type{};
  shared_ptr<string> timeUnit{};
  shared_ptr<long> ruleStartTime{};
  shared_ptr<long> ruleEndTime{};
  shared_ptr<bool> canChange{};
  shared_ptr<double> changeFee{};

  DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleInUnusedList() {}

  explicit DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleInUnusedList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (timeUnit) {
      res["time_unit"] = boost::any(*timeUnit);
    }
    if (ruleStartTime) {
      res["rule_start_time"] = boost::any(*ruleStartTime);
    }
    if (ruleEndTime) {
      res["rule_end_time"] = boost::any(*ruleEndTime);
    }
    if (canChange) {
      res["can_change"] = boost::any(*canChange);
    }
    if (changeFee) {
      res["change_fee"] = boost::any(*changeFee);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["type"]));
    }
    if (m.find("time_unit") != m.end() && !m["time_unit"].empty()) {
      timeUnit = make_shared<string>(boost::any_cast<string>(m["time_unit"]));
    }
    if (m.find("rule_start_time") != m.end() && !m["rule_start_time"].empty()) {
      ruleStartTime = make_shared<long>(boost::any_cast<long>(m["rule_start_time"]));
    }
    if (m.find("rule_end_time") != m.end() && !m["rule_end_time"].empty()) {
      ruleEndTime = make_shared<long>(boost::any_cast<long>(m["rule_end_time"]));
    }
    if (m.find("can_change") != m.end() && !m["can_change"].empty()) {
      canChange = make_shared<bool>(boost::any_cast<bool>(m["can_change"]));
    }
    if (m.find("change_fee") != m.end() && !m["change_fee"].empty()) {
      changeFee = make_shared<double>(boost::any_cast<double>(m["change_fee"]));
    }
  }


  virtual ~DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleInUnusedList() = default;
};
class DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleOutUnusedList : public Darabonba::Model {
public:
  shared_ptr<long> type{};
  shared_ptr<string> timeUnit{};
  shared_ptr<long> ruleStartTime{};
  shared_ptr<long> ruleEndTime{};
  shared_ptr<bool> canChange{};
  shared_ptr<double> changeFee{};

  DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleOutUnusedList() {}

  explicit DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleOutUnusedList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (timeUnit) {
      res["time_unit"] = boost::any(*timeUnit);
    }
    if (ruleStartTime) {
      res["rule_start_time"] = boost::any(*ruleStartTime);
    }
    if (ruleEndTime) {
      res["rule_end_time"] = boost::any(*ruleEndTime);
    }
    if (canChange) {
      res["can_change"] = boost::any(*canChange);
    }
    if (changeFee) {
      res["change_fee"] = boost::any(*changeFee);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["type"]));
    }
    if (m.find("time_unit") != m.end() && !m["time_unit"].empty()) {
      timeUnit = make_shared<string>(boost::any_cast<string>(m["time_unit"]));
    }
    if (m.find("rule_start_time") != m.end() && !m["rule_start_time"].empty()) {
      ruleStartTime = make_shared<long>(boost::any_cast<long>(m["rule_start_time"]));
    }
    if (m.find("rule_end_time") != m.end() && !m["rule_end_time"].empty()) {
      ruleEndTime = make_shared<long>(boost::any_cast<long>(m["rule_end_time"]));
    }
    if (m.find("can_change") != m.end() && !m["can_change"].empty()) {
      canChange = make_shared<bool>(boost::any_cast<bool>(m["can_change"]));
    }
    if (m.find("change_fee") != m.end() && !m["change_fee"].empty()) {
      changeFee = make_shared<double>(boost::any_cast<double>(m["change_fee"]));
    }
  }


  virtual ~DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleOutUnusedList() = default;
};
class DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue : public Darabonba::Model {
public:
  shared_ptr<vector<DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueRefundRuleAllUnusedList>> refundRuleAllUnusedList{};
  shared_ptr<vector<DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueRefundRulePartUnusedList>> refundRulePartUnusedList{};
  shared_ptr<vector<DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleInUnusedList>> changeRuleInUnusedList{};
  shared_ptr<vector<DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleOutUnusedList>> changeRuleOutUnusedList{};

  DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue() {}

  explicit DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (refundRuleAllUnusedList) {
      vector<boost::any> temp1;
      for(auto item1:*refundRuleAllUnusedList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["refund_rule_all_unused_list"] = boost::any(temp1);
    }
    if (refundRulePartUnusedList) {
      vector<boost::any> temp1;
      for(auto item1:*refundRulePartUnusedList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["refund_rule_part_unused_list"] = boost::any(temp1);
    }
    if (changeRuleInUnusedList) {
      vector<boost::any> temp1;
      for(auto item1:*changeRuleInUnusedList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["change_rule_in_unused_list"] = boost::any(temp1);
    }
    if (changeRuleOutUnusedList) {
      vector<boost::any> temp1;
      for(auto item1:*changeRuleOutUnusedList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["change_rule_out_unused_list"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("refund_rule_all_unused_list") != m.end() && !m["refund_rule_all_unused_list"].empty()) {
      if (typeid(vector<boost::any>) == m["refund_rule_all_unused_list"].type()) {
        vector<DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueRefundRuleAllUnusedList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["refund_rule_all_unused_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueRefundRuleAllUnusedList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        refundRuleAllUnusedList = make_shared<vector<DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueRefundRuleAllUnusedList>>(expect1);
      }
    }
    if (m.find("refund_rule_part_unused_list") != m.end() && !m["refund_rule_part_unused_list"].empty()) {
      if (typeid(vector<boost::any>) == m["refund_rule_part_unused_list"].type()) {
        vector<DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueRefundRulePartUnusedList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["refund_rule_part_unused_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueRefundRulePartUnusedList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        refundRulePartUnusedList = make_shared<vector<DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueRefundRulePartUnusedList>>(expect1);
      }
    }
    if (m.find("change_rule_in_unused_list") != m.end() && !m["change_rule_in_unused_list"].empty()) {
      if (typeid(vector<boost::any>) == m["change_rule_in_unused_list"].type()) {
        vector<DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleInUnusedList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["change_rule_in_unused_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleInUnusedList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        changeRuleInUnusedList = make_shared<vector<DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleInUnusedList>>(expect1);
      }
    }
    if (m.find("change_rule_out_unused_list") != m.end() && !m["change_rule_out_unused_list"].empty()) {
      if (typeid(vector<boost::any>) == m["change_rule_out_unused_list"].type()) {
        vector<DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleOutUnusedList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["change_rule_out_unused_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleOutUnusedList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        changeRuleOutUnusedList = make_shared<vector<DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleOutUnusedList>>(expect1);
      }
    }
  }


  virtual ~DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue() = default;
};
class AccountFlowListHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAirticketAccessToken{};
  shared_ptr<string> xAcsAirticketLanguage{};

  AccountFlowListHeaders() {}

  explicit AccountFlowListHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAirticketAccessToken) {
      res["x-acs-airticket-access-token"] = boost::any(*xAcsAirticketAccessToken);
    }
    if (xAcsAirticketLanguage) {
      res["x-acs-airticket-language"] = boost::any(*xAcsAirticketLanguage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("x-acs-airticket-access-token") != m.end() && !m["x-acs-airticket-access-token"].empty()) {
      xAcsAirticketAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-airticket-access-token"]));
    }
    if (m.find("x-acs-airticket-language") != m.end() && !m["x-acs-airticket-language"].empty()) {
      xAcsAirticketLanguage = make_shared<string>(boost::any_cast<string>(m["x-acs-airticket-language"]));
    }
  }


  virtual ~AccountFlowListHeaders() = default;
};
class AccountFlowListRequest : public Darabonba::Model {
public:
  shared_ptr<long> dayNum{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> utcBeginTime{};

  AccountFlowListRequest() {}

  explicit AccountFlowListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dayNum) {
      res["day_num"] = boost::any(*dayNum);
    }
    if (pageIndex) {
      res["page_index"] = boost::any(*pageIndex);
    }
    if (pageSize) {
      res["page_size"] = boost::any(*pageSize);
    }
    if (utcBeginTime) {
      res["utc_begin_time"] = boost::any(*utcBeginTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("day_num") != m.end() && !m["day_num"].empty()) {
      dayNum = make_shared<long>(boost::any_cast<long>(m["day_num"]));
    }
    if (m.find("page_index") != m.end() && !m["page_index"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["page_index"]));
    }
    if (m.find("page_size") != m.end() && !m["page_size"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["page_size"]));
    }
    if (m.find("utc_begin_time") != m.end() && !m["utc_begin_time"].empty()) {
      utcBeginTime = make_shared<long>(boost::any_cast<long>(m["utc_begin_time"]));
    }
  }


  virtual ~AccountFlowListRequest() = default;
};
class AccountFlowListResponseBodyDataList : public Darabonba::Model {
public:
  shared_ptr<double> afterAvailableAmount{};
  shared_ptr<double> beforeAvailableAmount{};
  shared_ptr<long> changeOrderNum{};
  shared_ptr<long> flowId{};
  shared_ptr<long> gmtCreate{};
  shared_ptr<long> gmtModified{};
  shared_ptr<double> opAmount{};
  shared_ptr<long> opType{};
  shared_ptr<long> orderNum{};
  shared_ptr<long> orderType{};
  shared_ptr<string> outOrderNum{};
  shared_ptr<long> refundOrderNum{};

  AccountFlowListResponseBodyDataList() {}

  explicit AccountFlowListResponseBodyDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (afterAvailableAmount) {
      res["after_available_amount"] = boost::any(*afterAvailableAmount);
    }
    if (beforeAvailableAmount) {
      res["before_available_amount"] = boost::any(*beforeAvailableAmount);
    }
    if (changeOrderNum) {
      res["change_order_num"] = boost::any(*changeOrderNum);
    }
    if (flowId) {
      res["flow_id"] = boost::any(*flowId);
    }
    if (gmtCreate) {
      res["gmt_create"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmt_modified"] = boost::any(*gmtModified);
    }
    if (opAmount) {
      res["op_amount"] = boost::any(*opAmount);
    }
    if (opType) {
      res["op_type"] = boost::any(*opType);
    }
    if (orderNum) {
      res["order_num"] = boost::any(*orderNum);
    }
    if (orderType) {
      res["order_type"] = boost::any(*orderType);
    }
    if (outOrderNum) {
      res["out_order_num"] = boost::any(*outOrderNum);
    }
    if (refundOrderNum) {
      res["refund_order_num"] = boost::any(*refundOrderNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("after_available_amount") != m.end() && !m["after_available_amount"].empty()) {
      afterAvailableAmount = make_shared<double>(boost::any_cast<double>(m["after_available_amount"]));
    }
    if (m.find("before_available_amount") != m.end() && !m["before_available_amount"].empty()) {
      beforeAvailableAmount = make_shared<double>(boost::any_cast<double>(m["before_available_amount"]));
    }
    if (m.find("change_order_num") != m.end() && !m["change_order_num"].empty()) {
      changeOrderNum = make_shared<long>(boost::any_cast<long>(m["change_order_num"]));
    }
    if (m.find("flow_id") != m.end() && !m["flow_id"].empty()) {
      flowId = make_shared<long>(boost::any_cast<long>(m["flow_id"]));
    }
    if (m.find("gmt_create") != m.end() && !m["gmt_create"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["gmt_create"]));
    }
    if (m.find("gmt_modified") != m.end() && !m["gmt_modified"].empty()) {
      gmtModified = make_shared<long>(boost::any_cast<long>(m["gmt_modified"]));
    }
    if (m.find("op_amount") != m.end() && !m["op_amount"].empty()) {
      opAmount = make_shared<double>(boost::any_cast<double>(m["op_amount"]));
    }
    if (m.find("op_type") != m.end() && !m["op_type"].empty()) {
      opType = make_shared<long>(boost::any_cast<long>(m["op_type"]));
    }
    if (m.find("order_num") != m.end() && !m["order_num"].empty()) {
      orderNum = make_shared<long>(boost::any_cast<long>(m["order_num"]));
    }
    if (m.find("order_type") != m.end() && !m["order_type"].empty()) {
      orderType = make_shared<long>(boost::any_cast<long>(m["order_type"]));
    }
    if (m.find("out_order_num") != m.end() && !m["out_order_num"].empty()) {
      outOrderNum = make_shared<string>(boost::any_cast<string>(m["out_order_num"]));
    }
    if (m.find("refund_order_num") != m.end() && !m["refund_order_num"].empty()) {
      refundOrderNum = make_shared<long>(boost::any_cast<long>(m["refund_order_num"]));
    }
  }


  virtual ~AccountFlowListResponseBodyDataList() = default;
};
class AccountFlowListResponseBodyDataPagination : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};
  shared_ptr<long> totalPage{};

  AccountFlowListResponseBodyDataPagination() {}

  explicit AccountFlowListResponseBodyDataPagination(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["current_page"] = boost::any(*currentPage);
    }
    if (pageSize) {
      res["page_size"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["total_count"] = boost::any(*totalCount);
    }
    if (totalPage) {
      res["total_page"] = boost::any(*totalPage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("current_page") != m.end() && !m["current_page"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["current_page"]));
    }
    if (m.find("page_size") != m.end() && !m["page_size"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["page_size"]));
    }
    if (m.find("total_count") != m.end() && !m["total_count"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["total_count"]));
    }
    if (m.find("total_page") != m.end() && !m["total_page"].empty()) {
      totalPage = make_shared<long>(boost::any_cast<long>(m["total_page"]));
    }
  }


  virtual ~AccountFlowListResponseBodyDataPagination() = default;
};
class AccountFlowListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<AccountFlowListResponseBodyDataList>> list{};
  shared_ptr<AccountFlowListResponseBodyDataPagination> pagination{};

  AccountFlowListResponseBodyData() {}

  explicit AccountFlowListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["list"] = boost::any(temp1);
    }
    if (pagination) {
      res["pagination"] = pagination ? boost::any(pagination->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("list") != m.end() && !m["list"].empty()) {
      if (typeid(vector<boost::any>) == m["list"].type()) {
        vector<AccountFlowListResponseBodyDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AccountFlowListResponseBodyDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<AccountFlowListResponseBodyDataList>>(expect1);
      }
    }
    if (m.find("pagination") != m.end() && !m["pagination"].empty()) {
      if (typeid(map<string, boost::any>) == m["pagination"].type()) {
        AccountFlowListResponseBodyDataPagination model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["pagination"]));
        pagination = make_shared<AccountFlowListResponseBodyDataPagination>(model1);
      }
    }
  }


  virtual ~AccountFlowListResponseBodyData() = default;
};
class AccountFlowListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<AccountFlowListResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<boost::any> errorData{};
  shared_ptr<string> errorMsg{};
  shared_ptr<long> status{};
  shared_ptr<bool> success{};

  AccountFlowListResponseBody() {}

  explicit AccountFlowListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["error_code"] = boost::any(*errorCode);
    }
    if (errorData) {
      res["error_data"] = boost::any(*errorData);
    }
    if (errorMsg) {
      res["error_msg"] = boost::any(*errorMsg);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        AccountFlowListResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<AccountFlowListResponseBodyData>(model1);
      }
    }
    if (m.find("error_code") != m.end() && !m["error_code"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["error_code"]));
    }
    if (m.find("error_data") != m.end() && !m["error_data"].empty()) {
      errorData = make_shared<boost::any>(boost::any_cast<boost::any>(m["error_data"]));
    }
    if (m.find("error_msg") != m.end() && !m["error_msg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["error_msg"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~AccountFlowListResponseBody() = default;
};
class AccountFlowListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AccountFlowListResponseBody> body{};

  AccountFlowListResponse() {}

  explicit AccountFlowListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AccountFlowListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AccountFlowListResponseBody>(model1);
      }
    }
  }


  virtual ~AccountFlowListResponse() = default;
};
class AncillarySuggestHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAirticketAccessToken{};
  shared_ptr<string> xAcsAirticketLanguage{};

  AncillarySuggestHeaders() {}

  explicit AncillarySuggestHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAirticketAccessToken) {
      res["x-acs-airticket-access-token"] = boost::any(*xAcsAirticketAccessToken);
    }
    if (xAcsAirticketLanguage) {
      res["x-acs-airticket-language"] = boost::any(*xAcsAirticketLanguage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("x-acs-airticket-access-token") != m.end() && !m["x-acs-airticket-access-token"].empty()) {
      xAcsAirticketAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-airticket-access-token"]));
    }
    if (m.find("x-acs-airticket-language") != m.end() && !m["x-acs-airticket-language"].empty()) {
      xAcsAirticketLanguage = make_shared<string>(boost::any_cast<string>(m["x-acs-airticket-language"]));
    }
  }


  virtual ~AncillarySuggestHeaders() = default;
};
class AncillarySuggestRequest : public Darabonba::Model {
public:
  shared_ptr<string> solutionId{};

  AncillarySuggestRequest() {}

  explicit AncillarySuggestRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (solutionId) {
      res["solution_id"] = boost::any(*solutionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("solution_id") != m.end() && !m["solution_id"].empty()) {
      solutionId = make_shared<string>(boost::any_cast<string>(m["solution_id"]));
    }
  }


  virtual ~AncillarySuggestRequest() = default;
};
class AncillarySuggestResponseBodyDataSegAncillaryMapListAncillaryBaggageAncillary : public Darabonba::Model {
public:
  shared_ptr<long> baggageAmount{};
  shared_ptr<long> baggageWeight{};
  shared_ptr<string> baggageWeightUnit{};
  shared_ptr<bool> isAllWeight{};
  shared_ptr<double> price{};

  AncillarySuggestResponseBodyDataSegAncillaryMapListAncillaryBaggageAncillary() {}

  explicit AncillarySuggestResponseBodyDataSegAncillaryMapListAncillaryBaggageAncillary(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (baggageAmount) {
      res["baggage_amount"] = boost::any(*baggageAmount);
    }
    if (baggageWeight) {
      res["baggage_weight"] = boost::any(*baggageWeight);
    }
    if (baggageWeightUnit) {
      res["baggage_weight_unit"] = boost::any(*baggageWeightUnit);
    }
    if (isAllWeight) {
      res["is_all_weight"] = boost::any(*isAllWeight);
    }
    if (price) {
      res["price"] = boost::any(*price);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("baggage_amount") != m.end() && !m["baggage_amount"].empty()) {
      baggageAmount = make_shared<long>(boost::any_cast<long>(m["baggage_amount"]));
    }
    if (m.find("baggage_weight") != m.end() && !m["baggage_weight"].empty()) {
      baggageWeight = make_shared<long>(boost::any_cast<long>(m["baggage_weight"]));
    }
    if (m.find("baggage_weight_unit") != m.end() && !m["baggage_weight_unit"].empty()) {
      baggageWeightUnit = make_shared<string>(boost::any_cast<string>(m["baggage_weight_unit"]));
    }
    if (m.find("is_all_weight") != m.end() && !m["is_all_weight"].empty()) {
      isAllWeight = make_shared<bool>(boost::any_cast<bool>(m["is_all_weight"]));
    }
    if (m.find("price") != m.end() && !m["price"].empty()) {
      price = make_shared<double>(boost::any_cast<double>(m["price"]));
    }
  }


  virtual ~AncillarySuggestResponseBodyDataSegAncillaryMapListAncillaryBaggageAncillary() = default;
};
class AncillarySuggestResponseBodyDataSegAncillaryMapListAncillary : public Darabonba::Model {
public:
  shared_ptr<string> ancillaryId{};
  shared_ptr<long> ancillaryType{};
  shared_ptr<AncillarySuggestResponseBodyDataSegAncillaryMapListAncillaryBaggageAncillary> baggageAncillary{};

  AncillarySuggestResponseBodyDataSegAncillaryMapListAncillary() {}

  explicit AncillarySuggestResponseBodyDataSegAncillaryMapListAncillary(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ancillaryId) {
      res["ancillary_id"] = boost::any(*ancillaryId);
    }
    if (ancillaryType) {
      res["ancillary_type"] = boost::any(*ancillaryType);
    }
    if (baggageAncillary) {
      res["baggage_ancillary"] = baggageAncillary ? boost::any(baggageAncillary->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ancillary_id") != m.end() && !m["ancillary_id"].empty()) {
      ancillaryId = make_shared<string>(boost::any_cast<string>(m["ancillary_id"]));
    }
    if (m.find("ancillary_type") != m.end() && !m["ancillary_type"].empty()) {
      ancillaryType = make_shared<long>(boost::any_cast<long>(m["ancillary_type"]));
    }
    if (m.find("baggage_ancillary") != m.end() && !m["baggage_ancillary"].empty()) {
      if (typeid(map<string, boost::any>) == m["baggage_ancillary"].type()) {
        AncillarySuggestResponseBodyDataSegAncillaryMapListAncillaryBaggageAncillary model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["baggage_ancillary"]));
        baggageAncillary = make_shared<AncillarySuggestResponseBodyDataSegAncillaryMapListAncillaryBaggageAncillary>(model1);
      }
    }
  }


  virtual ~AncillarySuggestResponseBodyDataSegAncillaryMapListAncillary() = default;
};
class AncillarySuggestResponseBodyDataSegAncillaryMapList : public Darabonba::Model {
public:
  shared_ptr<AncillarySuggestResponseBodyDataSegAncillaryMapListAncillary> ancillary{};
  shared_ptr<vector<string>> segmentIdList{};

  AncillarySuggestResponseBodyDataSegAncillaryMapList() {}

  explicit AncillarySuggestResponseBodyDataSegAncillaryMapList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ancillary) {
      res["ancillary"] = ancillary ? boost::any(ancillary->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (segmentIdList) {
      res["segment_id_list"] = boost::any(*segmentIdList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ancillary") != m.end() && !m["ancillary"].empty()) {
      if (typeid(map<string, boost::any>) == m["ancillary"].type()) {
        AncillarySuggestResponseBodyDataSegAncillaryMapListAncillary model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ancillary"]));
        ancillary = make_shared<AncillarySuggestResponseBodyDataSegAncillaryMapListAncillary>(model1);
      }
    }
    if (m.find("segment_id_list") != m.end() && !m["segment_id_list"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["segment_id_list"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["segment_id_list"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      segmentIdList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~AncillarySuggestResponseBodyDataSegAncillaryMapList() = default;
};
class AncillarySuggestResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<AncillarySuggestResponseBodyDataSegAncillaryMapList>> segAncillaryMapList{};
  shared_ptr<string> solutionId{};

  AncillarySuggestResponseBodyData() {}

  explicit AncillarySuggestResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (segAncillaryMapList) {
      vector<boost::any> temp1;
      for(auto item1:*segAncillaryMapList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["seg_ancillary_map_list"] = boost::any(temp1);
    }
    if (solutionId) {
      res["solution_id"] = boost::any(*solutionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("seg_ancillary_map_list") != m.end() && !m["seg_ancillary_map_list"].empty()) {
      if (typeid(vector<boost::any>) == m["seg_ancillary_map_list"].type()) {
        vector<AncillarySuggestResponseBodyDataSegAncillaryMapList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["seg_ancillary_map_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AncillarySuggestResponseBodyDataSegAncillaryMapList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        segAncillaryMapList = make_shared<vector<AncillarySuggestResponseBodyDataSegAncillaryMapList>>(expect1);
      }
    }
    if (m.find("solution_id") != m.end() && !m["solution_id"].empty()) {
      solutionId = make_shared<string>(boost::any_cast<string>(m["solution_id"]));
    }
  }


  virtual ~AncillarySuggestResponseBodyData() = default;
};
class AncillarySuggestResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<AncillarySuggestResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<boost::any> errorData{};
  shared_ptr<string> errorMsg{};
  shared_ptr<long> status{};
  shared_ptr<bool> success{};

  AncillarySuggestResponseBody() {}

  explicit AncillarySuggestResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["error_code"] = boost::any(*errorCode);
    }
    if (errorData) {
      res["error_data"] = boost::any(*errorData);
    }
    if (errorMsg) {
      res["error_msg"] = boost::any(*errorMsg);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        AncillarySuggestResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<AncillarySuggestResponseBodyData>(model1);
      }
    }
    if (m.find("error_code") != m.end() && !m["error_code"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["error_code"]));
    }
    if (m.find("error_data") != m.end() && !m["error_data"].empty()) {
      errorData = make_shared<boost::any>(boost::any_cast<boost::any>(m["error_data"]));
    }
    if (m.find("error_msg") != m.end() && !m["error_msg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["error_msg"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~AncillarySuggestResponseBody() = default;
};
class AncillarySuggestResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AncillarySuggestResponseBody> body{};

  AncillarySuggestResponse() {}

  explicit AncillarySuggestResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AncillarySuggestResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AncillarySuggestResponseBody>(model1);
      }
    }
  }


  virtual ~AncillarySuggestResponse() = default;
};
class BookHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAirticketAccessToken{};
  shared_ptr<string> xAcsAirticketLanguage{};

  BookHeaders() {}

  explicit BookHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAirticketAccessToken) {
      res["x-acs-airticket-access-token"] = boost::any(*xAcsAirticketAccessToken);
    }
    if (xAcsAirticketLanguage) {
      res["x-acs-airticket-language"] = boost::any(*xAcsAirticketLanguage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("x-acs-airticket-access-token") != m.end() && !m["x-acs-airticket-access-token"].empty()) {
      xAcsAirticketAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-airticket-access-token"]));
    }
    if (m.find("x-acs-airticket-language") != m.end() && !m["x-acs-airticket-language"].empty()) {
      xAcsAirticketLanguage = make_shared<string>(boost::any_cast<string>(m["x-acs-airticket-language"]));
    }
  }


  virtual ~BookHeaders() = default;
};
class BookRequestContact : public Darabonba::Model {
public:
  shared_ptr<string> email{};
  shared_ptr<string> firstName{};
  shared_ptr<string> lastName{};
  shared_ptr<string> mobileCountryCode{};
  shared_ptr<string> mobilePhoneNum{};

  BookRequestContact() {}

  explicit BookRequestContact(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (email) {
      res["email"] = boost::any(*email);
    }
    if (firstName) {
      res["first_name"] = boost::any(*firstName);
    }
    if (lastName) {
      res["last_name"] = boost::any(*lastName);
    }
    if (mobileCountryCode) {
      res["mobile_country_code"] = boost::any(*mobileCountryCode);
    }
    if (mobilePhoneNum) {
      res["mobile_phone_num"] = boost::any(*mobilePhoneNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("email") != m.end() && !m["email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["email"]));
    }
    if (m.find("first_name") != m.end() && !m["first_name"].empty()) {
      firstName = make_shared<string>(boost::any_cast<string>(m["first_name"]));
    }
    if (m.find("last_name") != m.end() && !m["last_name"].empty()) {
      lastName = make_shared<string>(boost::any_cast<string>(m["last_name"]));
    }
    if (m.find("mobile_country_code") != m.end() && !m["mobile_country_code"].empty()) {
      mobileCountryCode = make_shared<string>(boost::any_cast<string>(m["mobile_country_code"]));
    }
    if (m.find("mobile_phone_num") != m.end() && !m["mobile_phone_num"].empty()) {
      mobilePhoneNum = make_shared<string>(boost::any_cast<string>(m["mobile_phone_num"]));
    }
  }


  virtual ~BookRequestContact() = default;
};
class BookRequestPassengerAncillaryPurchaseMapListBookAncillaryReqItem : public Darabonba::Model {
public:
  shared_ptr<string> ancillaryId{};
  shared_ptr<long> ancillaryType{};

  BookRequestPassengerAncillaryPurchaseMapListBookAncillaryReqItem() {}

  explicit BookRequestPassengerAncillaryPurchaseMapListBookAncillaryReqItem(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ancillaryId) {
      res["ancillary_id"] = boost::any(*ancillaryId);
    }
    if (ancillaryType) {
      res["ancillary_type"] = boost::any(*ancillaryType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ancillary_id") != m.end() && !m["ancillary_id"].empty()) {
      ancillaryId = make_shared<string>(boost::any_cast<string>(m["ancillary_id"]));
    }
    if (m.find("ancillary_type") != m.end() && !m["ancillary_type"].empty()) {
      ancillaryType = make_shared<long>(boost::any_cast<long>(m["ancillary_type"]));
    }
  }


  virtual ~BookRequestPassengerAncillaryPurchaseMapListBookAncillaryReqItem() = default;
};
class BookRequestPassengerAncillaryPurchaseMapListPassengerListCredential : public Darabonba::Model {
public:
  shared_ptr<string> certIssuePlace{};
  shared_ptr<string> credentialNum{};
  shared_ptr<long> credentialType{};
  shared_ptr<string> expireDate{};

  BookRequestPassengerAncillaryPurchaseMapListPassengerListCredential() {}

  explicit BookRequestPassengerAncillaryPurchaseMapListPassengerListCredential(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certIssuePlace) {
      res["cert_issue_place"] = boost::any(*certIssuePlace);
    }
    if (credentialNum) {
      res["credential_num"] = boost::any(*credentialNum);
    }
    if (credentialType) {
      res["credential_type"] = boost::any(*credentialType);
    }
    if (expireDate) {
      res["expire_date"] = boost::any(*expireDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cert_issue_place") != m.end() && !m["cert_issue_place"].empty()) {
      certIssuePlace = make_shared<string>(boost::any_cast<string>(m["cert_issue_place"]));
    }
    if (m.find("credential_num") != m.end() && !m["credential_num"].empty()) {
      credentialNum = make_shared<string>(boost::any_cast<string>(m["credential_num"]));
    }
    if (m.find("credential_type") != m.end() && !m["credential_type"].empty()) {
      credentialType = make_shared<long>(boost::any_cast<long>(m["credential_type"]));
    }
    if (m.find("expire_date") != m.end() && !m["expire_date"].empty()) {
      expireDate = make_shared<string>(boost::any_cast<string>(m["expire_date"]));
    }
  }


  virtual ~BookRequestPassengerAncillaryPurchaseMapListPassengerListCredential() = default;
};
class BookRequestPassengerAncillaryPurchaseMapListPassengerList : public Darabonba::Model {
public:
  shared_ptr<string> birthday{};
  shared_ptr<BookRequestPassengerAncillaryPurchaseMapListPassengerListCredential> credential{};
  shared_ptr<string> firstName{};
  shared_ptr<long> gender{};
  shared_ptr<string> lastName{};
  shared_ptr<string> mobileCountryCode{};
  shared_ptr<string> mobilePhoneNumber{};
  shared_ptr<string> nationality{};
  shared_ptr<long> type{};

  BookRequestPassengerAncillaryPurchaseMapListPassengerList() {}

  explicit BookRequestPassengerAncillaryPurchaseMapListPassengerList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (birthday) {
      res["birthday"] = boost::any(*birthday);
    }
    if (credential) {
      res["credential"] = credential ? boost::any(credential->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (firstName) {
      res["first_name"] = boost::any(*firstName);
    }
    if (gender) {
      res["gender"] = boost::any(*gender);
    }
    if (lastName) {
      res["last_name"] = boost::any(*lastName);
    }
    if (mobileCountryCode) {
      res["mobile_country_code"] = boost::any(*mobileCountryCode);
    }
    if (mobilePhoneNumber) {
      res["mobile_phone_number"] = boost::any(*mobilePhoneNumber);
    }
    if (nationality) {
      res["nationality"] = boost::any(*nationality);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("birthday") != m.end() && !m["birthday"].empty()) {
      birthday = make_shared<string>(boost::any_cast<string>(m["birthday"]));
    }
    if (m.find("credential") != m.end() && !m["credential"].empty()) {
      if (typeid(map<string, boost::any>) == m["credential"].type()) {
        BookRequestPassengerAncillaryPurchaseMapListPassengerListCredential model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["credential"]));
        credential = make_shared<BookRequestPassengerAncillaryPurchaseMapListPassengerListCredential>(model1);
      }
    }
    if (m.find("first_name") != m.end() && !m["first_name"].empty()) {
      firstName = make_shared<string>(boost::any_cast<string>(m["first_name"]));
    }
    if (m.find("gender") != m.end() && !m["gender"].empty()) {
      gender = make_shared<long>(boost::any_cast<long>(m["gender"]));
    }
    if (m.find("last_name") != m.end() && !m["last_name"].empty()) {
      lastName = make_shared<string>(boost::any_cast<string>(m["last_name"]));
    }
    if (m.find("mobile_country_code") != m.end() && !m["mobile_country_code"].empty()) {
      mobileCountryCode = make_shared<string>(boost::any_cast<string>(m["mobile_country_code"]));
    }
    if (m.find("mobile_phone_number") != m.end() && !m["mobile_phone_number"].empty()) {
      mobilePhoneNumber = make_shared<string>(boost::any_cast<string>(m["mobile_phone_number"]));
    }
    if (m.find("nationality") != m.end() && !m["nationality"].empty()) {
      nationality = make_shared<string>(boost::any_cast<string>(m["nationality"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["type"]));
    }
  }


  virtual ~BookRequestPassengerAncillaryPurchaseMapListPassengerList() = default;
};
class BookRequestPassengerAncillaryPurchaseMapList : public Darabonba::Model {
public:
  shared_ptr<BookRequestPassengerAncillaryPurchaseMapListBookAncillaryReqItem> bookAncillaryReqItem{};
  shared_ptr<vector<BookRequestPassengerAncillaryPurchaseMapListPassengerList>> passengerList{};

  BookRequestPassengerAncillaryPurchaseMapList() {}

  explicit BookRequestPassengerAncillaryPurchaseMapList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bookAncillaryReqItem) {
      res["book_ancillary_req_item"] = bookAncillaryReqItem ? boost::any(bookAncillaryReqItem->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (passengerList) {
      vector<boost::any> temp1;
      for(auto item1:*passengerList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["passenger_list"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("book_ancillary_req_item") != m.end() && !m["book_ancillary_req_item"].empty()) {
      if (typeid(map<string, boost::any>) == m["book_ancillary_req_item"].type()) {
        BookRequestPassengerAncillaryPurchaseMapListBookAncillaryReqItem model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["book_ancillary_req_item"]));
        bookAncillaryReqItem = make_shared<BookRequestPassengerAncillaryPurchaseMapListBookAncillaryReqItem>(model1);
      }
    }
    if (m.find("passenger_list") != m.end() && !m["passenger_list"].empty()) {
      if (typeid(vector<boost::any>) == m["passenger_list"].type()) {
        vector<BookRequestPassengerAncillaryPurchaseMapListPassengerList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["passenger_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BookRequestPassengerAncillaryPurchaseMapListPassengerList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        passengerList = make_shared<vector<BookRequestPassengerAncillaryPurchaseMapListPassengerList>>(expect1);
      }
    }
  }


  virtual ~BookRequestPassengerAncillaryPurchaseMapList() = default;
};
class BookRequestPassengerListCredential : public Darabonba::Model {
public:
  shared_ptr<string> certIssuePlace{};
  shared_ptr<string> credentialNum{};
  shared_ptr<long> credentialType{};
  shared_ptr<string> expireDate{};

  BookRequestPassengerListCredential() {}

  explicit BookRequestPassengerListCredential(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certIssuePlace) {
      res["cert_issue_place"] = boost::any(*certIssuePlace);
    }
    if (credentialNum) {
      res["credential_num"] = boost::any(*credentialNum);
    }
    if (credentialType) {
      res["credential_type"] = boost::any(*credentialType);
    }
    if (expireDate) {
      res["expire_date"] = boost::any(*expireDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cert_issue_place") != m.end() && !m["cert_issue_place"].empty()) {
      certIssuePlace = make_shared<string>(boost::any_cast<string>(m["cert_issue_place"]));
    }
    if (m.find("credential_num") != m.end() && !m["credential_num"].empty()) {
      credentialNum = make_shared<string>(boost::any_cast<string>(m["credential_num"]));
    }
    if (m.find("credential_type") != m.end() && !m["credential_type"].empty()) {
      credentialType = make_shared<long>(boost::any_cast<long>(m["credential_type"]));
    }
    if (m.find("expire_date") != m.end() && !m["expire_date"].empty()) {
      expireDate = make_shared<string>(boost::any_cast<string>(m["expire_date"]));
    }
  }


  virtual ~BookRequestPassengerListCredential() = default;
};
class BookRequestPassengerList : public Darabonba::Model {
public:
  shared_ptr<string> birthday{};
  shared_ptr<BookRequestPassengerListCredential> credential{};
  shared_ptr<string> firstName{};
  shared_ptr<long> gender{};
  shared_ptr<string> lastName{};
  shared_ptr<string> mobileCountryCode{};
  shared_ptr<string> mobilePhoneNumber{};
  shared_ptr<string> nationality{};
  shared_ptr<long> type{};

  BookRequestPassengerList() {}

  explicit BookRequestPassengerList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (birthday) {
      res["birthday"] = boost::any(*birthday);
    }
    if (credential) {
      res["credential"] = credential ? boost::any(credential->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (firstName) {
      res["first_name"] = boost::any(*firstName);
    }
    if (gender) {
      res["gender"] = boost::any(*gender);
    }
    if (lastName) {
      res["last_name"] = boost::any(*lastName);
    }
    if (mobileCountryCode) {
      res["mobile_country_code"] = boost::any(*mobileCountryCode);
    }
    if (mobilePhoneNumber) {
      res["mobile_phone_number"] = boost::any(*mobilePhoneNumber);
    }
    if (nationality) {
      res["nationality"] = boost::any(*nationality);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("birthday") != m.end() && !m["birthday"].empty()) {
      birthday = make_shared<string>(boost::any_cast<string>(m["birthday"]));
    }
    if (m.find("credential") != m.end() && !m["credential"].empty()) {
      if (typeid(map<string, boost::any>) == m["credential"].type()) {
        BookRequestPassengerListCredential model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["credential"]));
        credential = make_shared<BookRequestPassengerListCredential>(model1);
      }
    }
    if (m.find("first_name") != m.end() && !m["first_name"].empty()) {
      firstName = make_shared<string>(boost::any_cast<string>(m["first_name"]));
    }
    if (m.find("gender") != m.end() && !m["gender"].empty()) {
      gender = make_shared<long>(boost::any_cast<long>(m["gender"]));
    }
    if (m.find("last_name") != m.end() && !m["last_name"].empty()) {
      lastName = make_shared<string>(boost::any_cast<string>(m["last_name"]));
    }
    if (m.find("mobile_country_code") != m.end() && !m["mobile_country_code"].empty()) {
      mobileCountryCode = make_shared<string>(boost::any_cast<string>(m["mobile_country_code"]));
    }
    if (m.find("mobile_phone_number") != m.end() && !m["mobile_phone_number"].empty()) {
      mobilePhoneNumber = make_shared<string>(boost::any_cast<string>(m["mobile_phone_number"]));
    }
    if (m.find("nationality") != m.end() && !m["nationality"].empty()) {
      nationality = make_shared<string>(boost::any_cast<string>(m["nationality"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["type"]));
    }
  }


  virtual ~BookRequestPassengerList() = default;
};
class BookRequest : public Darabonba::Model {
public:
  shared_ptr<BookRequestContact> contact{};
  shared_ptr<string> outOrderNum{};
  shared_ptr<vector<BookRequestPassengerAncillaryPurchaseMapList>> passengerAncillaryPurchaseMapList{};
  shared_ptr<vector<BookRequestPassengerList>> passengerList{};
  shared_ptr<string> solutionId{};

  BookRequest() {}

  explicit BookRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contact) {
      res["contact"] = contact ? boost::any(contact->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (outOrderNum) {
      res["out_order_num"] = boost::any(*outOrderNum);
    }
    if (passengerAncillaryPurchaseMapList) {
      vector<boost::any> temp1;
      for(auto item1:*passengerAncillaryPurchaseMapList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["passenger_ancillary_purchase_map_list"] = boost::any(temp1);
    }
    if (passengerList) {
      vector<boost::any> temp1;
      for(auto item1:*passengerList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["passenger_list"] = boost::any(temp1);
    }
    if (solutionId) {
      res["solution_id"] = boost::any(*solutionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("contact") != m.end() && !m["contact"].empty()) {
      if (typeid(map<string, boost::any>) == m["contact"].type()) {
        BookRequestContact model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["contact"]));
        contact = make_shared<BookRequestContact>(model1);
      }
    }
    if (m.find("out_order_num") != m.end() && !m["out_order_num"].empty()) {
      outOrderNum = make_shared<string>(boost::any_cast<string>(m["out_order_num"]));
    }
    if (m.find("passenger_ancillary_purchase_map_list") != m.end() && !m["passenger_ancillary_purchase_map_list"].empty()) {
      if (typeid(vector<boost::any>) == m["passenger_ancillary_purchase_map_list"].type()) {
        vector<BookRequestPassengerAncillaryPurchaseMapList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["passenger_ancillary_purchase_map_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BookRequestPassengerAncillaryPurchaseMapList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        passengerAncillaryPurchaseMapList = make_shared<vector<BookRequestPassengerAncillaryPurchaseMapList>>(expect1);
      }
    }
    if (m.find("passenger_list") != m.end() && !m["passenger_list"].empty()) {
      if (typeid(vector<boost::any>) == m["passenger_list"].type()) {
        vector<BookRequestPassengerList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["passenger_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BookRequestPassengerList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        passengerList = make_shared<vector<BookRequestPassengerList>>(expect1);
      }
    }
    if (m.find("solution_id") != m.end() && !m["solution_id"].empty()) {
      solutionId = make_shared<string>(boost::any_cast<string>(m["solution_id"]));
    }
  }


  virtual ~BookRequest() = default;
};
class BookShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> contactShrink{};
  shared_ptr<string> outOrderNum{};
  shared_ptr<string> passengerAncillaryPurchaseMapListShrink{};
  shared_ptr<string> passengerListShrink{};
  shared_ptr<string> solutionId{};

  BookShrinkRequest() {}

  explicit BookShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contactShrink) {
      res["contact"] = boost::any(*contactShrink);
    }
    if (outOrderNum) {
      res["out_order_num"] = boost::any(*outOrderNum);
    }
    if (passengerAncillaryPurchaseMapListShrink) {
      res["passenger_ancillary_purchase_map_list"] = boost::any(*passengerAncillaryPurchaseMapListShrink);
    }
    if (passengerListShrink) {
      res["passenger_list"] = boost::any(*passengerListShrink);
    }
    if (solutionId) {
      res["solution_id"] = boost::any(*solutionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("contact") != m.end() && !m["contact"].empty()) {
      contactShrink = make_shared<string>(boost::any_cast<string>(m["contact"]));
    }
    if (m.find("out_order_num") != m.end() && !m["out_order_num"].empty()) {
      outOrderNum = make_shared<string>(boost::any_cast<string>(m["out_order_num"]));
    }
    if (m.find("passenger_ancillary_purchase_map_list") != m.end() && !m["passenger_ancillary_purchase_map_list"].empty()) {
      passengerAncillaryPurchaseMapListShrink = make_shared<string>(boost::any_cast<string>(m["passenger_ancillary_purchase_map_list"]));
    }
    if (m.find("passenger_list") != m.end() && !m["passenger_list"].empty()) {
      passengerListShrink = make_shared<string>(boost::any_cast<string>(m["passenger_list"]));
    }
    if (m.find("solution_id") != m.end() && !m["solution_id"].empty()) {
      solutionId = make_shared<string>(boost::any_cast<string>(m["solution_id"]));
    }
  }


  virtual ~BookShrinkRequest() = default;
};
class BookResponseBodyDataOrderList : public Darabonba::Model {
public:
  shared_ptr<long> orderNum{};

  BookResponseBodyDataOrderList() {}

  explicit BookResponseBodyDataOrderList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderNum) {
      res["order_num"] = boost::any(*orderNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("order_num") != m.end() && !m["order_num"].empty()) {
      orderNum = make_shared<long>(boost::any_cast<long>(m["order_num"]));
    }
  }


  virtual ~BookResponseBodyDataOrderList() = default;
};
class BookResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<BookResponseBodyDataOrderList>> orderList{};

  BookResponseBodyData() {}

  explicit BookResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderList) {
      vector<boost::any> temp1;
      for(auto item1:*orderList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["order_list"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("order_list") != m.end() && !m["order_list"].empty()) {
      if (typeid(vector<boost::any>) == m["order_list"].type()) {
        vector<BookResponseBodyDataOrderList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["order_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BookResponseBodyDataOrderList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        orderList = make_shared<vector<BookResponseBodyDataOrderList>>(expect1);
      }
    }
  }


  virtual ~BookResponseBodyData() = default;
};
class BookResponseBodyErrorDataOrderList : public Darabonba::Model {
public:
  shared_ptr<long> orderNum{};

  BookResponseBodyErrorDataOrderList() {}

  explicit BookResponseBodyErrorDataOrderList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderNum) {
      res["order_num"] = boost::any(*orderNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("order_num") != m.end() && !m["order_num"].empty()) {
      orderNum = make_shared<long>(boost::any_cast<long>(m["order_num"]));
    }
  }


  virtual ~BookResponseBodyErrorDataOrderList() = default;
};
class BookResponseBodyErrorData : public Darabonba::Model {
public:
  shared_ptr<vector<BookResponseBodyErrorDataOrderList>> orderList{};

  BookResponseBodyErrorData() {}

  explicit BookResponseBodyErrorData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderList) {
      vector<boost::any> temp1;
      for(auto item1:*orderList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["order_list"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("order_list") != m.end() && !m["order_list"].empty()) {
      if (typeid(vector<boost::any>) == m["order_list"].type()) {
        vector<BookResponseBodyErrorDataOrderList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["order_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BookResponseBodyErrorDataOrderList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        orderList = make_shared<vector<BookResponseBodyErrorDataOrderList>>(expect1);
      }
    }
  }


  virtual ~BookResponseBodyErrorData() = default;
};
class BookResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<BookResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<BookResponseBodyErrorData> errorData{};
  shared_ptr<string> errorMsg{};
  shared_ptr<long> status{};
  shared_ptr<bool> success{};

  BookResponseBody() {}

  explicit BookResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["error_code"] = boost::any(*errorCode);
    }
    if (errorData) {
      res["error_data"] = errorData ? boost::any(errorData->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorMsg) {
      res["error_msg"] = boost::any(*errorMsg);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        BookResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<BookResponseBodyData>(model1);
      }
    }
    if (m.find("error_code") != m.end() && !m["error_code"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["error_code"]));
    }
    if (m.find("error_data") != m.end() && !m["error_data"].empty()) {
      if (typeid(map<string, boost::any>) == m["error_data"].type()) {
        BookResponseBodyErrorData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["error_data"]));
        errorData = make_shared<BookResponseBodyErrorData>(model1);
      }
    }
    if (m.find("error_msg") != m.end() && !m["error_msg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["error_msg"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~BookResponseBody() = default;
};
class BookResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BookResponseBody> body{};

  BookResponse() {}

  explicit BookResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        BookResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BookResponseBody>(model1);
      }
    }
  }


  virtual ~BookResponse() = default;
};
class CancelHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAirticketAccessToken{};
  shared_ptr<string> xAcsAirticketLanguage{};

  CancelHeaders() {}

  explicit CancelHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAirticketAccessToken) {
      res["x-acs-airticket-access-token"] = boost::any(*xAcsAirticketAccessToken);
    }
    if (xAcsAirticketLanguage) {
      res["x-acs-airticket-language"] = boost::any(*xAcsAirticketLanguage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("x-acs-airticket-access-token") != m.end() && !m["x-acs-airticket-access-token"].empty()) {
      xAcsAirticketAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-airticket-access-token"]));
    }
    if (m.find("x-acs-airticket-language") != m.end() && !m["x-acs-airticket-language"].empty()) {
      xAcsAirticketLanguage = make_shared<string>(boost::any_cast<string>(m["x-acs-airticket-language"]));
    }
  }


  virtual ~CancelHeaders() = default;
};
class CancelRequest : public Darabonba::Model {
public:
  shared_ptr<long> orderNum{};

  CancelRequest() {}

  explicit CancelRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderNum) {
      res["order_num"] = boost::any(*orderNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("order_num") != m.end() && !m["order_num"].empty()) {
      orderNum = make_shared<long>(boost::any_cast<long>(m["order_num"]));
    }
  }


  virtual ~CancelRequest() = default;
};
class CancelResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> orderNum{};

  CancelResponseBodyData() {}

  explicit CancelResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderNum) {
      res["order_num"] = boost::any(*orderNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("order_num") != m.end() && !m["order_num"].empty()) {
      orderNum = make_shared<long>(boost::any_cast<long>(m["order_num"]));
    }
  }


  virtual ~CancelResponseBodyData() = default;
};
class CancelResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<CancelResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<boost::any> errorData{};
  shared_ptr<string> errorMsg{};
  shared_ptr<long> status{};
  shared_ptr<bool> success{};

  CancelResponseBody() {}

  explicit CancelResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["error_code"] = boost::any(*errorCode);
    }
    if (errorData) {
      res["error_data"] = boost::any(*errorData);
    }
    if (errorMsg) {
      res["error_msg"] = boost::any(*errorMsg);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        CancelResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<CancelResponseBodyData>(model1);
      }
    }
    if (m.find("error_code") != m.end() && !m["error_code"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["error_code"]));
    }
    if (m.find("error_data") != m.end() && !m["error_data"].empty()) {
      errorData = make_shared<boost::any>(boost::any_cast<boost::any>(m["error_data"]));
    }
    if (m.find("error_msg") != m.end() && !m["error_msg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["error_msg"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~CancelResponseBody() = default;
};
class CancelResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CancelResponseBody> body{};

  CancelResponse() {}

  explicit CancelResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CancelResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancelResponseBody>(model1);
      }
    }
  }


  virtual ~CancelResponse() = default;
};
class ChangeApplyHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAirticketAccessToken{};
  shared_ptr<string> xAcsAirticketLanguage{};

  ChangeApplyHeaders() {}

  explicit ChangeApplyHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAirticketAccessToken) {
      res["x-acs-airticket-access-token"] = boost::any(*xAcsAirticketAccessToken);
    }
    if (xAcsAirticketLanguage) {
      res["x-acs-airticket-language"] = boost::any(*xAcsAirticketLanguage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("x-acs-airticket-access-token") != m.end() && !m["x-acs-airticket-access-token"].empty()) {
      xAcsAirticketAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-airticket-access-token"]));
    }
    if (m.find("x-acs-airticket-language") != m.end() && !m["x-acs-airticket-language"].empty()) {
      xAcsAirticketLanguage = make_shared<string>(boost::any_cast<string>(m["x-acs-airticket-language"]));
    }
  }


  virtual ~ChangeApplyHeaders() = default;
};
class ChangeApplyRequestChangePassengerList : public Darabonba::Model {
public:
  shared_ptr<string> document{};
  shared_ptr<string> firstName{};
  shared_ptr<string> lastName{};

  ChangeApplyRequestChangePassengerList() {}

  explicit ChangeApplyRequestChangePassengerList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (document) {
      res["document"] = boost::any(*document);
    }
    if (firstName) {
      res["first_name"] = boost::any(*firstName);
    }
    if (lastName) {
      res["last_name"] = boost::any(*lastName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("document") != m.end() && !m["document"].empty()) {
      document = make_shared<string>(boost::any_cast<string>(m["document"]));
    }
    if (m.find("first_name") != m.end() && !m["first_name"].empty()) {
      firstName = make_shared<string>(boost::any_cast<string>(m["first_name"]));
    }
    if (m.find("last_name") != m.end() && !m["last_name"].empty()) {
      lastName = make_shared<string>(boost::any_cast<string>(m["last_name"]));
    }
  }


  virtual ~ChangeApplyRequestChangePassengerList() = default;
};
class ChangeApplyRequestChangedJourneysSegmentList : public Darabonba::Model {
public:
  shared_ptr<string> arrivalAirport{};
  shared_ptr<string> arrivalCity{};
  shared_ptr<string> arriveTerminal{};
  shared_ptr<long> arriveTime{};
  shared_ptr<string> arriveTimeStr{};
  shared_ptr<bool> codeShare{};
  shared_ptr<string> departureAirport{};
  shared_ptr<string> departureCity{};
  shared_ptr<string> departureDate{};
  shared_ptr<string> departureTerminal{};
  shared_ptr<long> departureTime{};
  shared_ptr<string> departureTimeStr{};
  shared_ptr<string> marketingFlightNo{};
  shared_ptr<string> operatingFlightNo{};

  ChangeApplyRequestChangedJourneysSegmentList() {}

  explicit ChangeApplyRequestChangedJourneysSegmentList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arrivalAirport) {
      res["arrival_airport"] = boost::any(*arrivalAirport);
    }
    if (arrivalCity) {
      res["arrival_city"] = boost::any(*arrivalCity);
    }
    if (arriveTerminal) {
      res["arrive_terminal"] = boost::any(*arriveTerminal);
    }
    if (arriveTime) {
      res["arrive_time"] = boost::any(*arriveTime);
    }
    if (arriveTimeStr) {
      res["arrive_time_str"] = boost::any(*arriveTimeStr);
    }
    if (codeShare) {
      res["code_share"] = boost::any(*codeShare);
    }
    if (departureAirport) {
      res["departure_airport"] = boost::any(*departureAirport);
    }
    if (departureCity) {
      res["departure_city"] = boost::any(*departureCity);
    }
    if (departureDate) {
      res["departure_date"] = boost::any(*departureDate);
    }
    if (departureTerminal) {
      res["departure_terminal"] = boost::any(*departureTerminal);
    }
    if (departureTime) {
      res["departure_time"] = boost::any(*departureTime);
    }
    if (departureTimeStr) {
      res["departure_time_str"] = boost::any(*departureTimeStr);
    }
    if (marketingFlightNo) {
      res["marketing_flight_no"] = boost::any(*marketingFlightNo);
    }
    if (operatingFlightNo) {
      res["operating_flight_no"] = boost::any(*operatingFlightNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("arrival_airport") != m.end() && !m["arrival_airport"].empty()) {
      arrivalAirport = make_shared<string>(boost::any_cast<string>(m["arrival_airport"]));
    }
    if (m.find("arrival_city") != m.end() && !m["arrival_city"].empty()) {
      arrivalCity = make_shared<string>(boost::any_cast<string>(m["arrival_city"]));
    }
    if (m.find("arrive_terminal") != m.end() && !m["arrive_terminal"].empty()) {
      arriveTerminal = make_shared<string>(boost::any_cast<string>(m["arrive_terminal"]));
    }
    if (m.find("arrive_time") != m.end() && !m["arrive_time"].empty()) {
      arriveTime = make_shared<long>(boost::any_cast<long>(m["arrive_time"]));
    }
    if (m.find("arrive_time_str") != m.end() && !m["arrive_time_str"].empty()) {
      arriveTimeStr = make_shared<string>(boost::any_cast<string>(m["arrive_time_str"]));
    }
    if (m.find("code_share") != m.end() && !m["code_share"].empty()) {
      codeShare = make_shared<bool>(boost::any_cast<bool>(m["code_share"]));
    }
    if (m.find("departure_airport") != m.end() && !m["departure_airport"].empty()) {
      departureAirport = make_shared<string>(boost::any_cast<string>(m["departure_airport"]));
    }
    if (m.find("departure_city") != m.end() && !m["departure_city"].empty()) {
      departureCity = make_shared<string>(boost::any_cast<string>(m["departure_city"]));
    }
    if (m.find("departure_date") != m.end() && !m["departure_date"].empty()) {
      departureDate = make_shared<string>(boost::any_cast<string>(m["departure_date"]));
    }
    if (m.find("departure_terminal") != m.end() && !m["departure_terminal"].empty()) {
      departureTerminal = make_shared<string>(boost::any_cast<string>(m["departure_terminal"]));
    }
    if (m.find("departure_time") != m.end() && !m["departure_time"].empty()) {
      departureTime = make_shared<long>(boost::any_cast<long>(m["departure_time"]));
    }
    if (m.find("departure_time_str") != m.end() && !m["departure_time_str"].empty()) {
      departureTimeStr = make_shared<string>(boost::any_cast<string>(m["departure_time_str"]));
    }
    if (m.find("marketing_flight_no") != m.end() && !m["marketing_flight_no"].empty()) {
      marketingFlightNo = make_shared<string>(boost::any_cast<string>(m["marketing_flight_no"]));
    }
    if (m.find("operating_flight_no") != m.end() && !m["operating_flight_no"].empty()) {
      operatingFlightNo = make_shared<string>(boost::any_cast<string>(m["operating_flight_no"]));
    }
  }


  virtual ~ChangeApplyRequestChangedJourneysSegmentList() = default;
};
class ChangeApplyRequestChangedJourneys : public Darabonba::Model {
public:
  shared_ptr<vector<ChangeApplyRequestChangedJourneysSegmentList>> segmentList{};

  ChangeApplyRequestChangedJourneys() {}

  explicit ChangeApplyRequestChangedJourneys(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (segmentList) {
      vector<boost::any> temp1;
      for(auto item1:*segmentList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["segment_list"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("segment_list") != m.end() && !m["segment_list"].empty()) {
      if (typeid(vector<boost::any>) == m["segment_list"].type()) {
        vector<ChangeApplyRequestChangedJourneysSegmentList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["segment_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ChangeApplyRequestChangedJourneysSegmentList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        segmentList = make_shared<vector<ChangeApplyRequestChangedJourneysSegmentList>>(expect1);
      }
    }
  }


  virtual ~ChangeApplyRequestChangedJourneys() = default;
};
class ChangeApplyRequestContact : public Darabonba::Model {
public:
  shared_ptr<string> email{};
  shared_ptr<string> mobileCountryCode{};
  shared_ptr<string> mobilePhoneNum{};

  ChangeApplyRequestContact() {}

  explicit ChangeApplyRequestContact(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (email) {
      res["email"] = boost::any(*email);
    }
    if (mobileCountryCode) {
      res["mobile_country_code"] = boost::any(*mobileCountryCode);
    }
    if (mobilePhoneNum) {
      res["mobile_phone_num"] = boost::any(*mobilePhoneNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("email") != m.end() && !m["email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["email"]));
    }
    if (m.find("mobile_country_code") != m.end() && !m["mobile_country_code"].empty()) {
      mobileCountryCode = make_shared<string>(boost::any_cast<string>(m["mobile_country_code"]));
    }
    if (m.find("mobile_phone_num") != m.end() && !m["mobile_phone_num"].empty()) {
      mobilePhoneNum = make_shared<string>(boost::any_cast<string>(m["mobile_phone_num"]));
    }
  }


  virtual ~ChangeApplyRequestContact() = default;
};
class ChangeApplyRequest : public Darabonba::Model {
public:
  shared_ptr<vector<ChangeApplyRequestChangePassengerList>> changePassengerList{};
  shared_ptr<vector<ChangeApplyRequestChangedJourneys>> changedJourneys{};
  shared_ptr<ChangeApplyRequestContact> contact{};
  shared_ptr<long> orderNum{};
  shared_ptr<string> remark{};
  shared_ptr<long> type{};

  ChangeApplyRequest() {}

  explicit ChangeApplyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (changePassengerList) {
      vector<boost::any> temp1;
      for(auto item1:*changePassengerList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["change_passenger_list"] = boost::any(temp1);
    }
    if (changedJourneys) {
      vector<boost::any> temp1;
      for(auto item1:*changedJourneys){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["changed_journeys"] = boost::any(temp1);
    }
    if (contact) {
      res["contact"] = contact ? boost::any(contact->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (orderNum) {
      res["order_num"] = boost::any(*orderNum);
    }
    if (remark) {
      res["remark"] = boost::any(*remark);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("change_passenger_list") != m.end() && !m["change_passenger_list"].empty()) {
      if (typeid(vector<boost::any>) == m["change_passenger_list"].type()) {
        vector<ChangeApplyRequestChangePassengerList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["change_passenger_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ChangeApplyRequestChangePassengerList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        changePassengerList = make_shared<vector<ChangeApplyRequestChangePassengerList>>(expect1);
      }
    }
    if (m.find("changed_journeys") != m.end() && !m["changed_journeys"].empty()) {
      if (typeid(vector<boost::any>) == m["changed_journeys"].type()) {
        vector<ChangeApplyRequestChangedJourneys> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["changed_journeys"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ChangeApplyRequestChangedJourneys model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        changedJourneys = make_shared<vector<ChangeApplyRequestChangedJourneys>>(expect1);
      }
    }
    if (m.find("contact") != m.end() && !m["contact"].empty()) {
      if (typeid(map<string, boost::any>) == m["contact"].type()) {
        ChangeApplyRequestContact model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["contact"]));
        contact = make_shared<ChangeApplyRequestContact>(model1);
      }
    }
    if (m.find("order_num") != m.end() && !m["order_num"].empty()) {
      orderNum = make_shared<long>(boost::any_cast<long>(m["order_num"]));
    }
    if (m.find("remark") != m.end() && !m["remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["remark"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["type"]));
    }
  }


  virtual ~ChangeApplyRequest() = default;
};
class ChangeApplyShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> changePassengerListShrink{};
  shared_ptr<string> changedJourneysShrink{};
  shared_ptr<string> contactShrink{};
  shared_ptr<long> orderNum{};
  shared_ptr<string> remark{};
  shared_ptr<long> type{};

  ChangeApplyShrinkRequest() {}

  explicit ChangeApplyShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (changePassengerListShrink) {
      res["change_passenger_list"] = boost::any(*changePassengerListShrink);
    }
    if (changedJourneysShrink) {
      res["changed_journeys"] = boost::any(*changedJourneysShrink);
    }
    if (contactShrink) {
      res["contact"] = boost::any(*contactShrink);
    }
    if (orderNum) {
      res["order_num"] = boost::any(*orderNum);
    }
    if (remark) {
      res["remark"] = boost::any(*remark);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("change_passenger_list") != m.end() && !m["change_passenger_list"].empty()) {
      changePassengerListShrink = make_shared<string>(boost::any_cast<string>(m["change_passenger_list"]));
    }
    if (m.find("changed_journeys") != m.end() && !m["changed_journeys"].empty()) {
      changedJourneysShrink = make_shared<string>(boost::any_cast<string>(m["changed_journeys"]));
    }
    if (m.find("contact") != m.end() && !m["contact"].empty()) {
      contactShrink = make_shared<string>(boost::any_cast<string>(m["contact"]));
    }
    if (m.find("order_num") != m.end() && !m["order_num"].empty()) {
      orderNum = make_shared<long>(boost::any_cast<long>(m["order_num"]));
    }
    if (m.find("remark") != m.end() && !m["remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["remark"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["type"]));
    }
  }


  virtual ~ChangeApplyShrinkRequest() = default;
};
class ChangeApplyResponseBodyDataChangeOrdersPassengers : public Darabonba::Model {
public:
  shared_ptr<string> document{};
  shared_ptr<string> firstName{};
  shared_ptr<string> lastName{};

  ChangeApplyResponseBodyDataChangeOrdersPassengers() {}

  explicit ChangeApplyResponseBodyDataChangeOrdersPassengers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (document) {
      res["document"] = boost::any(*document);
    }
    if (firstName) {
      res["first_name"] = boost::any(*firstName);
    }
    if (lastName) {
      res["last_name"] = boost::any(*lastName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("document") != m.end() && !m["document"].empty()) {
      document = make_shared<string>(boost::any_cast<string>(m["document"]));
    }
    if (m.find("first_name") != m.end() && !m["first_name"].empty()) {
      firstName = make_shared<string>(boost::any_cast<string>(m["first_name"]));
    }
    if (m.find("last_name") != m.end() && !m["last_name"].empty()) {
      lastName = make_shared<string>(boost::any_cast<string>(m["last_name"]));
    }
  }


  virtual ~ChangeApplyResponseBodyDataChangeOrdersPassengers() = default;
};
class ChangeApplyResponseBodyDataChangeOrders : public Darabonba::Model {
public:
  shared_ptr<long> changeOrderNum{};
  shared_ptr<long> changeOrderStatus{};
  shared_ptr<string> failReason{};
  shared_ptr<vector<ChangeApplyResponseBodyDataChangeOrdersPassengers>> passengers{};

  ChangeApplyResponseBodyDataChangeOrders() {}

  explicit ChangeApplyResponseBodyDataChangeOrders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (changeOrderNum) {
      res["change_order_num"] = boost::any(*changeOrderNum);
    }
    if (changeOrderStatus) {
      res["change_order_status"] = boost::any(*changeOrderStatus);
    }
    if (failReason) {
      res["fail_reason"] = boost::any(*failReason);
    }
    if (passengers) {
      vector<boost::any> temp1;
      for(auto item1:*passengers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["passengers"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("change_order_num") != m.end() && !m["change_order_num"].empty()) {
      changeOrderNum = make_shared<long>(boost::any_cast<long>(m["change_order_num"]));
    }
    if (m.find("change_order_status") != m.end() && !m["change_order_status"].empty()) {
      changeOrderStatus = make_shared<long>(boost::any_cast<long>(m["change_order_status"]));
    }
    if (m.find("fail_reason") != m.end() && !m["fail_reason"].empty()) {
      failReason = make_shared<string>(boost::any_cast<string>(m["fail_reason"]));
    }
    if (m.find("passengers") != m.end() && !m["passengers"].empty()) {
      if (typeid(vector<boost::any>) == m["passengers"].type()) {
        vector<ChangeApplyResponseBodyDataChangeOrdersPassengers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["passengers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ChangeApplyResponseBodyDataChangeOrdersPassengers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        passengers = make_shared<vector<ChangeApplyResponseBodyDataChangeOrdersPassengers>>(expect1);
      }
    }
  }


  virtual ~ChangeApplyResponseBodyDataChangeOrders() = default;
};
class ChangeApplyResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ChangeApplyResponseBodyDataChangeOrders>> changeOrders{};
  shared_ptr<long> orderNum{};

  ChangeApplyResponseBodyData() {}

  explicit ChangeApplyResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (changeOrders) {
      vector<boost::any> temp1;
      for(auto item1:*changeOrders){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["change_orders"] = boost::any(temp1);
    }
    if (orderNum) {
      res["order_num"] = boost::any(*orderNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("change_orders") != m.end() && !m["change_orders"].empty()) {
      if (typeid(vector<boost::any>) == m["change_orders"].type()) {
        vector<ChangeApplyResponseBodyDataChangeOrders> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["change_orders"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ChangeApplyResponseBodyDataChangeOrders model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        changeOrders = make_shared<vector<ChangeApplyResponseBodyDataChangeOrders>>(expect1);
      }
    }
    if (m.find("order_num") != m.end() && !m["order_num"].empty()) {
      orderNum = make_shared<long>(boost::any_cast<long>(m["order_num"]));
    }
  }


  virtual ~ChangeApplyResponseBodyData() = default;
};
class ChangeApplyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ChangeApplyResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<boost::any> errorData{};
  shared_ptr<string> errorMsg{};
  shared_ptr<long> status{};
  shared_ptr<bool> success{};

  ChangeApplyResponseBody() {}

  explicit ChangeApplyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["error_code"] = boost::any(*errorCode);
    }
    if (errorData) {
      res["error_data"] = boost::any(*errorData);
    }
    if (errorMsg) {
      res["error_msg"] = boost::any(*errorMsg);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        ChangeApplyResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ChangeApplyResponseBodyData>(model1);
      }
    }
    if (m.find("error_code") != m.end() && !m["error_code"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["error_code"]));
    }
    if (m.find("error_data") != m.end() && !m["error_data"].empty()) {
      errorData = make_shared<boost::any>(boost::any_cast<boost::any>(m["error_data"]));
    }
    if (m.find("error_msg") != m.end() && !m["error_msg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["error_msg"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~ChangeApplyResponseBody() = default;
};
class ChangeApplyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ChangeApplyResponseBody> body{};

  ChangeApplyResponse() {}

  explicit ChangeApplyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ChangeApplyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ChangeApplyResponseBody>(model1);
      }
    }
  }


  virtual ~ChangeApplyResponse() = default;
};
class ChangeCancelHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAirticketAccessToken{};
  shared_ptr<string> xAcsAirticketLanguage{};

  ChangeCancelHeaders() {}

  explicit ChangeCancelHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAirticketAccessToken) {
      res["x-acs-airticket-access-token"] = boost::any(*xAcsAirticketAccessToken);
    }
    if (xAcsAirticketLanguage) {
      res["x-acs-airticket-language"] = boost::any(*xAcsAirticketLanguage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("x-acs-airticket-access-token") != m.end() && !m["x-acs-airticket-access-token"].empty()) {
      xAcsAirticketAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-airticket-access-token"]));
    }
    if (m.find("x-acs-airticket-language") != m.end() && !m["x-acs-airticket-language"].empty()) {
      xAcsAirticketLanguage = make_shared<string>(boost::any_cast<string>(m["x-acs-airticket-language"]));
    }
  }


  virtual ~ChangeCancelHeaders() = default;
};
class ChangeCancelRequest : public Darabonba::Model {
public:
  shared_ptr<long> changeOrderNum{};

  ChangeCancelRequest() {}

  explicit ChangeCancelRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (changeOrderNum) {
      res["change_order_num"] = boost::any(*changeOrderNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("change_order_num") != m.end() && !m["change_order_num"].empty()) {
      changeOrderNum = make_shared<long>(boost::any_cast<long>(m["change_order_num"]));
    }
  }


  virtual ~ChangeCancelRequest() = default;
};
class ChangeCancelResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<boost::any> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<boost::any> errorData{};
  shared_ptr<string> errorMsg{};
  shared_ptr<long> status{};
  shared_ptr<bool> success{};

  ChangeCancelResponseBody() {}

  explicit ChangeCancelResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (errorCode) {
      res["error_code"] = boost::any(*errorCode);
    }
    if (errorData) {
      res["error_data"] = boost::any(*errorData);
    }
    if (errorMsg) {
      res["error_msg"] = boost::any(*errorMsg);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<boost::any>(boost::any_cast<boost::any>(m["data"]));
    }
    if (m.find("error_code") != m.end() && !m["error_code"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["error_code"]));
    }
    if (m.find("error_data") != m.end() && !m["error_data"].empty()) {
      errorData = make_shared<boost::any>(boost::any_cast<boost::any>(m["error_data"]));
    }
    if (m.find("error_msg") != m.end() && !m["error_msg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["error_msg"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~ChangeCancelResponseBody() = default;
};
class ChangeCancelResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ChangeCancelResponseBody> body{};

  ChangeCancelResponse() {}

  explicit ChangeCancelResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ChangeCancelResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ChangeCancelResponseBody>(model1);
      }
    }
  }


  virtual ~ChangeCancelResponse() = default;
};
class ChangeConfirmHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAirticketAccessToken{};
  shared_ptr<string> xAcsAirticketLanguage{};

  ChangeConfirmHeaders() {}

  explicit ChangeConfirmHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAirticketAccessToken) {
      res["x-acs-airticket-access-token"] = boost::any(*xAcsAirticketAccessToken);
    }
    if (xAcsAirticketLanguage) {
      res["x-acs-airticket-language"] = boost::any(*xAcsAirticketLanguage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("x-acs-airticket-access-token") != m.end() && !m["x-acs-airticket-access-token"].empty()) {
      xAcsAirticketAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-airticket-access-token"]));
    }
    if (m.find("x-acs-airticket-language") != m.end() && !m["x-acs-airticket-language"].empty()) {
      xAcsAirticketLanguage = make_shared<string>(boost::any_cast<string>(m["x-acs-airticket-language"]));
    }
  }


  virtual ~ChangeConfirmHeaders() = default;
};
class ChangeConfirmRequest : public Darabonba::Model {
public:
  shared_ptr<long> changeOrderNum{};

  ChangeConfirmRequest() {}

  explicit ChangeConfirmRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (changeOrderNum) {
      res["change_order_num"] = boost::any(*changeOrderNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("change_order_num") != m.end() && !m["change_order_num"].empty()) {
      changeOrderNum = make_shared<long>(boost::any_cast<long>(m["change_order_num"]));
    }
  }


  virtual ~ChangeConfirmRequest() = default;
};
class ChangeConfirmResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<double> payAmount{};
  shared_ptr<string> transactionNo{};

  ChangeConfirmResponseBodyData() {}

  explicit ChangeConfirmResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (payAmount) {
      res["pay_amount"] = boost::any(*payAmount);
    }
    if (transactionNo) {
      res["transaction_no"] = boost::any(*transactionNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("pay_amount") != m.end() && !m["pay_amount"].empty()) {
      payAmount = make_shared<double>(boost::any_cast<double>(m["pay_amount"]));
    }
    if (m.find("transaction_no") != m.end() && !m["transaction_no"].empty()) {
      transactionNo = make_shared<string>(boost::any_cast<string>(m["transaction_no"]));
    }
  }


  virtual ~ChangeConfirmResponseBodyData() = default;
};
class ChangeConfirmResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ChangeConfirmResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<boost::any> errorData{};
  shared_ptr<string> errorMsg{};
  shared_ptr<long> status{};
  shared_ptr<bool> success{};

  ChangeConfirmResponseBody() {}

  explicit ChangeConfirmResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["error_code"] = boost::any(*errorCode);
    }
    if (errorData) {
      res["error_data"] = boost::any(*errorData);
    }
    if (errorMsg) {
      res["error_msg"] = boost::any(*errorMsg);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        ChangeConfirmResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ChangeConfirmResponseBodyData>(model1);
      }
    }
    if (m.find("error_code") != m.end() && !m["error_code"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["error_code"]));
    }
    if (m.find("error_data") != m.end() && !m["error_data"].empty()) {
      errorData = make_shared<boost::any>(boost::any_cast<boost::any>(m["error_data"]));
    }
    if (m.find("error_msg") != m.end() && !m["error_msg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["error_msg"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~ChangeConfirmResponseBody() = default;
};
class ChangeConfirmResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ChangeConfirmResponseBody> body{};

  ChangeConfirmResponse() {}

  explicit ChangeConfirmResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ChangeConfirmResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ChangeConfirmResponseBody>(model1);
      }
    }
  }


  virtual ~ChangeConfirmResponse() = default;
};
class ChangeDetailHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAirticketAccessToken{};
  shared_ptr<string> xAcsAirticketLanguage{};

  ChangeDetailHeaders() {}

  explicit ChangeDetailHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAirticketAccessToken) {
      res["x-acs-airticket-access-token"] = boost::any(*xAcsAirticketAccessToken);
    }
    if (xAcsAirticketLanguage) {
      res["x-acs-airticket-language"] = boost::any(*xAcsAirticketLanguage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("x-acs-airticket-access-token") != m.end() && !m["x-acs-airticket-access-token"].empty()) {
      xAcsAirticketAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-airticket-access-token"]));
    }
    if (m.find("x-acs-airticket-language") != m.end() && !m["x-acs-airticket-language"].empty()) {
      xAcsAirticketLanguage = make_shared<string>(boost::any_cast<string>(m["x-acs-airticket-language"]));
    }
  }


  virtual ~ChangeDetailHeaders() = default;
};
class ChangeDetailRequest : public Darabonba::Model {
public:
  shared_ptr<long> changeOrderNum{};

  ChangeDetailRequest() {}

  explicit ChangeDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (changeOrderNum) {
      res["change_order_num"] = boost::any(*changeOrderNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("change_order_num") != m.end() && !m["change_order_num"].empty()) {
      changeOrderNum = make_shared<long>(boost::any_cast<long>(m["change_order_num"]));
    }
  }


  virtual ~ChangeDetailRequest() = default;
};
class ChangeDetailResponseBodyDataChangeFeeDetailsChangeFee : public Darabonba::Model {
public:
  shared_ptr<double> serviceFee{};
  shared_ptr<double> taxFee{};
  shared_ptr<double> upgradeFee{};

  ChangeDetailResponseBodyDataChangeFeeDetailsChangeFee() {}

  explicit ChangeDetailResponseBodyDataChangeFeeDetailsChangeFee(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceFee) {
      res["service_fee"] = boost::any(*serviceFee);
    }
    if (taxFee) {
      res["tax_fee"] = boost::any(*taxFee);
    }
    if (upgradeFee) {
      res["upgrade_fee"] = boost::any(*upgradeFee);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("service_fee") != m.end() && !m["service_fee"].empty()) {
      serviceFee = make_shared<double>(boost::any_cast<double>(m["service_fee"]));
    }
    if (m.find("tax_fee") != m.end() && !m["tax_fee"].empty()) {
      taxFee = make_shared<double>(boost::any_cast<double>(m["tax_fee"]));
    }
    if (m.find("upgrade_fee") != m.end() && !m["upgrade_fee"].empty()) {
      upgradeFee = make_shared<double>(boost::any_cast<double>(m["upgrade_fee"]));
    }
  }


  virtual ~ChangeDetailResponseBodyDataChangeFeeDetailsChangeFee() = default;
};
class ChangeDetailResponseBodyDataChangeFeeDetailsPassenger : public Darabonba::Model {
public:
  shared_ptr<string> document{};
  shared_ptr<string> firstName{};
  shared_ptr<string> lastName{};

  ChangeDetailResponseBodyDataChangeFeeDetailsPassenger() {}

  explicit ChangeDetailResponseBodyDataChangeFeeDetailsPassenger(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (document) {
      res["document"] = boost::any(*document);
    }
    if (firstName) {
      res["first_name"] = boost::any(*firstName);
    }
    if (lastName) {
      res["last_name"] = boost::any(*lastName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("document") != m.end() && !m["document"].empty()) {
      document = make_shared<string>(boost::any_cast<string>(m["document"]));
    }
    if (m.find("first_name") != m.end() && !m["first_name"].empty()) {
      firstName = make_shared<string>(boost::any_cast<string>(m["first_name"]));
    }
    if (m.find("last_name") != m.end() && !m["last_name"].empty()) {
      lastName = make_shared<string>(boost::any_cast<string>(m["last_name"]));
    }
  }


  virtual ~ChangeDetailResponseBodyDataChangeFeeDetailsPassenger() = default;
};
class ChangeDetailResponseBodyDataChangeFeeDetails : public Darabonba::Model {
public:
  shared_ptr<ChangeDetailResponseBodyDataChangeFeeDetailsChangeFee> changeFee{};
  shared_ptr<ChangeDetailResponseBodyDataChangeFeeDetailsPassenger> passenger{};

  ChangeDetailResponseBodyDataChangeFeeDetails() {}

  explicit ChangeDetailResponseBodyDataChangeFeeDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (changeFee) {
      res["change_fee"] = changeFee ? boost::any(changeFee->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (passenger) {
      res["passenger"] = passenger ? boost::any(passenger->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("change_fee") != m.end() && !m["change_fee"].empty()) {
      if (typeid(map<string, boost::any>) == m["change_fee"].type()) {
        ChangeDetailResponseBodyDataChangeFeeDetailsChangeFee model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["change_fee"]));
        changeFee = make_shared<ChangeDetailResponseBodyDataChangeFeeDetailsChangeFee>(model1);
      }
    }
    if (m.find("passenger") != m.end() && !m["passenger"].empty()) {
      if (typeid(map<string, boost::any>) == m["passenger"].type()) {
        ChangeDetailResponseBodyDataChangeFeeDetailsPassenger model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["passenger"]));
        passenger = make_shared<ChangeDetailResponseBodyDataChangeFeeDetailsPassenger>(model1);
      }
    }
  }


  virtual ~ChangeDetailResponseBodyDataChangeFeeDetails() = default;
};
class ChangeDetailResponseBodyDataChangePassengers : public Darabonba::Model {
public:
  shared_ptr<string> document{};
  shared_ptr<string> firstName{};
  shared_ptr<string> lastName{};

  ChangeDetailResponseBodyDataChangePassengers() {}

  explicit ChangeDetailResponseBodyDataChangePassengers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (document) {
      res["document"] = boost::any(*document);
    }
    if (firstName) {
      res["first_name"] = boost::any(*firstName);
    }
    if (lastName) {
      res["last_name"] = boost::any(*lastName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("document") != m.end() && !m["document"].empty()) {
      document = make_shared<string>(boost::any_cast<string>(m["document"]));
    }
    if (m.find("first_name") != m.end() && !m["first_name"].empty()) {
      firstName = make_shared<string>(boost::any_cast<string>(m["first_name"]));
    }
    if (m.find("last_name") != m.end() && !m["last_name"].empty()) {
      lastName = make_shared<string>(boost::any_cast<string>(m["last_name"]));
    }
  }


  virtual ~ChangeDetailResponseBodyDataChangePassengers() = default;
};
class ChangeDetailResponseBodyDataChangedJourneysSegmentList : public Darabonba::Model {
public:
  shared_ptr<string> arrivalAirport{};
  shared_ptr<string> arrivalCity{};
  shared_ptr<string> arrivalTerminal{};
  shared_ptr<string> arrivalTime{};
  shared_ptr<string> availability{};
  shared_ptr<string> cabin{};
  shared_ptr<string> cabinClass{};
  shared_ptr<bool> codeShare{};
  shared_ptr<string> departureAirport{};
  shared_ptr<string> departureCity{};
  shared_ptr<string> departureTerminal{};
  shared_ptr<string> departureTime{};
  shared_ptr<string> equipType{};
  shared_ptr<long> flightDuration{};
  shared_ptr<string> marketingAirline{};
  shared_ptr<string> marketingFlightNo{};
  shared_ptr<long> marketingFlightNoInt{};
  shared_ptr<string> operatingAirline{};
  shared_ptr<string> operatingFlightNo{};
  shared_ptr<string> segmentId{};
  shared_ptr<string> stopCityList{};
  shared_ptr<long> stopQuantity{};

  ChangeDetailResponseBodyDataChangedJourneysSegmentList() {}

  explicit ChangeDetailResponseBodyDataChangedJourneysSegmentList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arrivalAirport) {
      res["arrival_airport"] = boost::any(*arrivalAirport);
    }
    if (arrivalCity) {
      res["arrival_city"] = boost::any(*arrivalCity);
    }
    if (arrivalTerminal) {
      res["arrival_terminal"] = boost::any(*arrivalTerminal);
    }
    if (arrivalTime) {
      res["arrival_time"] = boost::any(*arrivalTime);
    }
    if (availability) {
      res["availability"] = boost::any(*availability);
    }
    if (cabin) {
      res["cabin"] = boost::any(*cabin);
    }
    if (cabinClass) {
      res["cabin_class"] = boost::any(*cabinClass);
    }
    if (codeShare) {
      res["code_share"] = boost::any(*codeShare);
    }
    if (departureAirport) {
      res["departure_airport"] = boost::any(*departureAirport);
    }
    if (departureCity) {
      res["departure_city"] = boost::any(*departureCity);
    }
    if (departureTerminal) {
      res["departure_terminal"] = boost::any(*departureTerminal);
    }
    if (departureTime) {
      res["departure_time"] = boost::any(*departureTime);
    }
    if (equipType) {
      res["equip_type"] = boost::any(*equipType);
    }
    if (flightDuration) {
      res["flight_duration"] = boost::any(*flightDuration);
    }
    if (marketingAirline) {
      res["marketing_airline"] = boost::any(*marketingAirline);
    }
    if (marketingFlightNo) {
      res["marketing_flight_no"] = boost::any(*marketingFlightNo);
    }
    if (marketingFlightNoInt) {
      res["marketing_flight_no_int"] = boost::any(*marketingFlightNoInt);
    }
    if (operatingAirline) {
      res["operating_airline"] = boost::any(*operatingAirline);
    }
    if (operatingFlightNo) {
      res["operating_flight_no"] = boost::any(*operatingFlightNo);
    }
    if (segmentId) {
      res["segment_id"] = boost::any(*segmentId);
    }
    if (stopCityList) {
      res["stop_city_list"] = boost::any(*stopCityList);
    }
    if (stopQuantity) {
      res["stop_quantity"] = boost::any(*stopQuantity);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("arrival_airport") != m.end() && !m["arrival_airport"].empty()) {
      arrivalAirport = make_shared<string>(boost::any_cast<string>(m["arrival_airport"]));
    }
    if (m.find("arrival_city") != m.end() && !m["arrival_city"].empty()) {
      arrivalCity = make_shared<string>(boost::any_cast<string>(m["arrival_city"]));
    }
    if (m.find("arrival_terminal") != m.end() && !m["arrival_terminal"].empty()) {
      arrivalTerminal = make_shared<string>(boost::any_cast<string>(m["arrival_terminal"]));
    }
    if (m.find("arrival_time") != m.end() && !m["arrival_time"].empty()) {
      arrivalTime = make_shared<string>(boost::any_cast<string>(m["arrival_time"]));
    }
    if (m.find("availability") != m.end() && !m["availability"].empty()) {
      availability = make_shared<string>(boost::any_cast<string>(m["availability"]));
    }
    if (m.find("cabin") != m.end() && !m["cabin"].empty()) {
      cabin = make_shared<string>(boost::any_cast<string>(m["cabin"]));
    }
    if (m.find("cabin_class") != m.end() && !m["cabin_class"].empty()) {
      cabinClass = make_shared<string>(boost::any_cast<string>(m["cabin_class"]));
    }
    if (m.find("code_share") != m.end() && !m["code_share"].empty()) {
      codeShare = make_shared<bool>(boost::any_cast<bool>(m["code_share"]));
    }
    if (m.find("departure_airport") != m.end() && !m["departure_airport"].empty()) {
      departureAirport = make_shared<string>(boost::any_cast<string>(m["departure_airport"]));
    }
    if (m.find("departure_city") != m.end() && !m["departure_city"].empty()) {
      departureCity = make_shared<string>(boost::any_cast<string>(m["departure_city"]));
    }
    if (m.find("departure_terminal") != m.end() && !m["departure_terminal"].empty()) {
      departureTerminal = make_shared<string>(boost::any_cast<string>(m["departure_terminal"]));
    }
    if (m.find("departure_time") != m.end() && !m["departure_time"].empty()) {
      departureTime = make_shared<string>(boost::any_cast<string>(m["departure_time"]));
    }
    if (m.find("equip_type") != m.end() && !m["equip_type"].empty()) {
      equipType = make_shared<string>(boost::any_cast<string>(m["equip_type"]));
    }
    if (m.find("flight_duration") != m.end() && !m["flight_duration"].empty()) {
      flightDuration = make_shared<long>(boost::any_cast<long>(m["flight_duration"]));
    }
    if (m.find("marketing_airline") != m.end() && !m["marketing_airline"].empty()) {
      marketingAirline = make_shared<string>(boost::any_cast<string>(m["marketing_airline"]));
    }
    if (m.find("marketing_flight_no") != m.end() && !m["marketing_flight_no"].empty()) {
      marketingFlightNo = make_shared<string>(boost::any_cast<string>(m["marketing_flight_no"]));
    }
    if (m.find("marketing_flight_no_int") != m.end() && !m["marketing_flight_no_int"].empty()) {
      marketingFlightNoInt = make_shared<long>(boost::any_cast<long>(m["marketing_flight_no_int"]));
    }
    if (m.find("operating_airline") != m.end() && !m["operating_airline"].empty()) {
      operatingAirline = make_shared<string>(boost::any_cast<string>(m["operating_airline"]));
    }
    if (m.find("operating_flight_no") != m.end() && !m["operating_flight_no"].empty()) {
      operatingFlightNo = make_shared<string>(boost::any_cast<string>(m["operating_flight_no"]));
    }
    if (m.find("segment_id") != m.end() && !m["segment_id"].empty()) {
      segmentId = make_shared<string>(boost::any_cast<string>(m["segment_id"]));
    }
    if (m.find("stop_city_list") != m.end() && !m["stop_city_list"].empty()) {
      stopCityList = make_shared<string>(boost::any_cast<string>(m["stop_city_list"]));
    }
    if (m.find("stop_quantity") != m.end() && !m["stop_quantity"].empty()) {
      stopQuantity = make_shared<long>(boost::any_cast<long>(m["stop_quantity"]));
    }
  }


  virtual ~ChangeDetailResponseBodyDataChangedJourneysSegmentList() = default;
};
class ChangeDetailResponseBodyDataChangedJourneys : public Darabonba::Model {
public:
  shared_ptr<vector<ChangeDetailResponseBodyDataChangedJourneysSegmentList>> segmentList{};
  shared_ptr<long> transferCount{};

  ChangeDetailResponseBodyDataChangedJourneys() {}

  explicit ChangeDetailResponseBodyDataChangedJourneys(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (segmentList) {
      vector<boost::any> temp1;
      for(auto item1:*segmentList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["segment_list"] = boost::any(temp1);
    }
    if (transferCount) {
      res["transfer_count"] = boost::any(*transferCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("segment_list") != m.end() && !m["segment_list"].empty()) {
      if (typeid(vector<boost::any>) == m["segment_list"].type()) {
        vector<ChangeDetailResponseBodyDataChangedJourneysSegmentList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["segment_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ChangeDetailResponseBodyDataChangedJourneysSegmentList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        segmentList = make_shared<vector<ChangeDetailResponseBodyDataChangedJourneysSegmentList>>(expect1);
      }
    }
    if (m.find("transfer_count") != m.end() && !m["transfer_count"].empty()) {
      transferCount = make_shared<long>(boost::any_cast<long>(m["transfer_count"]));
    }
  }


  virtual ~ChangeDetailResponseBodyDataChangedJourneys() = default;
};
class ChangeDetailResponseBodyDataContact : public Darabonba::Model {
public:
  shared_ptr<string> email{};
  shared_ptr<string> mobileCountryCode{};
  shared_ptr<string> mobilePhoneNum{};

  ChangeDetailResponseBodyDataContact() {}

  explicit ChangeDetailResponseBodyDataContact(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (email) {
      res["email"] = boost::any(*email);
    }
    if (mobileCountryCode) {
      res["mobile_country_code"] = boost::any(*mobileCountryCode);
    }
    if (mobilePhoneNum) {
      res["mobile_phone_num"] = boost::any(*mobilePhoneNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("email") != m.end() && !m["email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["email"]));
    }
    if (m.find("mobile_country_code") != m.end() && !m["mobile_country_code"].empty()) {
      mobileCountryCode = make_shared<string>(boost::any_cast<string>(m["mobile_country_code"]));
    }
    if (m.find("mobile_phone_num") != m.end() && !m["mobile_phone_num"].empty()) {
      mobilePhoneNum = make_shared<string>(boost::any_cast<string>(m["mobile_phone_num"]));
    }
  }


  virtual ~ChangeDetailResponseBodyDataContact() = default;
};
class ChangeDetailResponseBodyDataLastJourneysSegmentList : public Darabonba::Model {
public:
  shared_ptr<string> arrivalAirport{};
  shared_ptr<string> arrivalCity{};
  shared_ptr<string> arrivalTerminal{};
  shared_ptr<string> arrivalTime{};
  shared_ptr<string> availability{};
  shared_ptr<string> cabin{};
  shared_ptr<string> cabinClass{};
  shared_ptr<bool> codeShare{};
  shared_ptr<string> departureAirport{};
  shared_ptr<string> departureCity{};
  shared_ptr<string> departureTerminal{};
  shared_ptr<string> departureTime{};
  shared_ptr<string> equipType{};
  shared_ptr<long> flightDuration{};
  shared_ptr<string> marketingAirline{};
  shared_ptr<string> marketingFlightNo{};
  shared_ptr<long> marketingFlightNoInt{};
  shared_ptr<string> operatingAirline{};
  shared_ptr<string> operatingFlightNo{};
  shared_ptr<string> segmentId{};
  shared_ptr<string> stopCityList{};
  shared_ptr<long> stopQuantity{};

  ChangeDetailResponseBodyDataLastJourneysSegmentList() {}

  explicit ChangeDetailResponseBodyDataLastJourneysSegmentList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arrivalAirport) {
      res["arrival_airport"] = boost::any(*arrivalAirport);
    }
    if (arrivalCity) {
      res["arrival_city"] = boost::any(*arrivalCity);
    }
    if (arrivalTerminal) {
      res["arrival_terminal"] = boost::any(*arrivalTerminal);
    }
    if (arrivalTime) {
      res["arrival_time"] = boost::any(*arrivalTime);
    }
    if (availability) {
      res["availability"] = boost::any(*availability);
    }
    if (cabin) {
      res["cabin"] = boost::any(*cabin);
    }
    if (cabinClass) {
      res["cabin_class"] = boost::any(*cabinClass);
    }
    if (codeShare) {
      res["code_share"] = boost::any(*codeShare);
    }
    if (departureAirport) {
      res["departure_airport"] = boost::any(*departureAirport);
    }
    if (departureCity) {
      res["departure_city"] = boost::any(*departureCity);
    }
    if (departureTerminal) {
      res["departure_terminal"] = boost::any(*departureTerminal);
    }
    if (departureTime) {
      res["departure_time"] = boost::any(*departureTime);
    }
    if (equipType) {
      res["equip_type"] = boost::any(*equipType);
    }
    if (flightDuration) {
      res["flight_duration"] = boost::any(*flightDuration);
    }
    if (marketingAirline) {
      res["marketing_airline"] = boost::any(*marketingAirline);
    }
    if (marketingFlightNo) {
      res["marketing_flight_no"] = boost::any(*marketingFlightNo);
    }
    if (marketingFlightNoInt) {
      res["marketing_flight_no_int"] = boost::any(*marketingFlightNoInt);
    }
    if (operatingAirline) {
      res["operating_airline"] = boost::any(*operatingAirline);
    }
    if (operatingFlightNo) {
      res["operating_flight_no"] = boost::any(*operatingFlightNo);
    }
    if (segmentId) {
      res["segment_id"] = boost::any(*segmentId);
    }
    if (stopCityList) {
      res["stop_city_list"] = boost::any(*stopCityList);
    }
    if (stopQuantity) {
      res["stop_quantity"] = boost::any(*stopQuantity);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("arrival_airport") != m.end() && !m["arrival_airport"].empty()) {
      arrivalAirport = make_shared<string>(boost::any_cast<string>(m["arrival_airport"]));
    }
    if (m.find("arrival_city") != m.end() && !m["arrival_city"].empty()) {
      arrivalCity = make_shared<string>(boost::any_cast<string>(m["arrival_city"]));
    }
    if (m.find("arrival_terminal") != m.end() && !m["arrival_terminal"].empty()) {
      arrivalTerminal = make_shared<string>(boost::any_cast<string>(m["arrival_terminal"]));
    }
    if (m.find("arrival_time") != m.end() && !m["arrival_time"].empty()) {
      arrivalTime = make_shared<string>(boost::any_cast<string>(m["arrival_time"]));
    }
    if (m.find("availability") != m.end() && !m["availability"].empty()) {
      availability = make_shared<string>(boost::any_cast<string>(m["availability"]));
    }
    if (m.find("cabin") != m.end() && !m["cabin"].empty()) {
      cabin = make_shared<string>(boost::any_cast<string>(m["cabin"]));
    }
    if (m.find("cabin_class") != m.end() && !m["cabin_class"].empty()) {
      cabinClass = make_shared<string>(boost::any_cast<string>(m["cabin_class"]));
    }
    if (m.find("code_share") != m.end() && !m["code_share"].empty()) {
      codeShare = make_shared<bool>(boost::any_cast<bool>(m["code_share"]));
    }
    if (m.find("departure_airport") != m.end() && !m["departure_airport"].empty()) {
      departureAirport = make_shared<string>(boost::any_cast<string>(m["departure_airport"]));
    }
    if (m.find("departure_city") != m.end() && !m["departure_city"].empty()) {
      departureCity = make_shared<string>(boost::any_cast<string>(m["departure_city"]));
    }
    if (m.find("departure_terminal") != m.end() && !m["departure_terminal"].empty()) {
      departureTerminal = make_shared<string>(boost::any_cast<string>(m["departure_terminal"]));
    }
    if (m.find("departure_time") != m.end() && !m["departure_time"].empty()) {
      departureTime = make_shared<string>(boost::any_cast<string>(m["departure_time"]));
    }
    if (m.find("equip_type") != m.end() && !m["equip_type"].empty()) {
      equipType = make_shared<string>(boost::any_cast<string>(m["equip_type"]));
    }
    if (m.find("flight_duration") != m.end() && !m["flight_duration"].empty()) {
      flightDuration = make_shared<long>(boost::any_cast<long>(m["flight_duration"]));
    }
    if (m.find("marketing_airline") != m.end() && !m["marketing_airline"].empty()) {
      marketingAirline = make_shared<string>(boost::any_cast<string>(m["marketing_airline"]));
    }
    if (m.find("marketing_flight_no") != m.end() && !m["marketing_flight_no"].empty()) {
      marketingFlightNo = make_shared<string>(boost::any_cast<string>(m["marketing_flight_no"]));
    }
    if (m.find("marketing_flight_no_int") != m.end() && !m["marketing_flight_no_int"].empty()) {
      marketingFlightNoInt = make_shared<long>(boost::any_cast<long>(m["marketing_flight_no_int"]));
    }
    if (m.find("operating_airline") != m.end() && !m["operating_airline"].empty()) {
      operatingAirline = make_shared<string>(boost::any_cast<string>(m["operating_airline"]));
    }
    if (m.find("operating_flight_no") != m.end() && !m["operating_flight_no"].empty()) {
      operatingFlightNo = make_shared<string>(boost::any_cast<string>(m["operating_flight_no"]));
    }
    if (m.find("segment_id") != m.end() && !m["segment_id"].empty()) {
      segmentId = make_shared<string>(boost::any_cast<string>(m["segment_id"]));
    }
    if (m.find("stop_city_list") != m.end() && !m["stop_city_list"].empty()) {
      stopCityList = make_shared<string>(boost::any_cast<string>(m["stop_city_list"]));
    }
    if (m.find("stop_quantity") != m.end() && !m["stop_quantity"].empty()) {
      stopQuantity = make_shared<long>(boost::any_cast<long>(m["stop_quantity"]));
    }
  }


  virtual ~ChangeDetailResponseBodyDataLastJourneysSegmentList() = default;
};
class ChangeDetailResponseBodyDataLastJourneys : public Darabonba::Model {
public:
  shared_ptr<vector<ChangeDetailResponseBodyDataLastJourneysSegmentList>> segmentList{};
  shared_ptr<long> transferCount{};

  ChangeDetailResponseBodyDataLastJourneys() {}

  explicit ChangeDetailResponseBodyDataLastJourneys(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (segmentList) {
      vector<boost::any> temp1;
      for(auto item1:*segmentList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["segment_list"] = boost::any(temp1);
    }
    if (transferCount) {
      res["transfer_count"] = boost::any(*transferCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("segment_list") != m.end() && !m["segment_list"].empty()) {
      if (typeid(vector<boost::any>) == m["segment_list"].type()) {
        vector<ChangeDetailResponseBodyDataLastJourneysSegmentList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["segment_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ChangeDetailResponseBodyDataLastJourneysSegmentList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        segmentList = make_shared<vector<ChangeDetailResponseBodyDataLastJourneysSegmentList>>(expect1);
      }
    }
    if (m.find("transfer_count") != m.end() && !m["transfer_count"].empty()) {
      transferCount = make_shared<long>(boost::any_cast<long>(m["transfer_count"]));
    }
  }


  virtual ~ChangeDetailResponseBodyDataLastJourneys() = default;
};
class ChangeDetailResponseBodyDataOriginalJourneysSegmentList : public Darabonba::Model {
public:
  shared_ptr<string> arrivalAirport{};
  shared_ptr<string> arrivalCity{};
  shared_ptr<string> arrivalTerminal{};
  shared_ptr<string> arrivalTime{};
  shared_ptr<string> availability{};
  shared_ptr<string> cabin{};
  shared_ptr<string> cabinClass{};
  shared_ptr<bool> codeShare{};
  shared_ptr<string> departureAirport{};
  shared_ptr<string> departureCity{};
  shared_ptr<string> departureTerminal{};
  shared_ptr<string> departureTime{};
  shared_ptr<string> equipType{};
  shared_ptr<long> flightDuration{};
  shared_ptr<string> marketingAirline{};
  shared_ptr<string> marketingFlightNo{};
  shared_ptr<long> marketingFlightNoInt{};
  shared_ptr<string> operatingAirline{};
  shared_ptr<string> operatingFlightNo{};
  shared_ptr<string> segmentId{};
  shared_ptr<string> stopCityList{};
  shared_ptr<long> stopQuantity{};

  ChangeDetailResponseBodyDataOriginalJourneysSegmentList() {}

  explicit ChangeDetailResponseBodyDataOriginalJourneysSegmentList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arrivalAirport) {
      res["arrival_airport"] = boost::any(*arrivalAirport);
    }
    if (arrivalCity) {
      res["arrival_city"] = boost::any(*arrivalCity);
    }
    if (arrivalTerminal) {
      res["arrival_terminal"] = boost::any(*arrivalTerminal);
    }
    if (arrivalTime) {
      res["arrival_time"] = boost::any(*arrivalTime);
    }
    if (availability) {
      res["availability"] = boost::any(*availability);
    }
    if (cabin) {
      res["cabin"] = boost::any(*cabin);
    }
    if (cabinClass) {
      res["cabin_class"] = boost::any(*cabinClass);
    }
    if (codeShare) {
      res["code_share"] = boost::any(*codeShare);
    }
    if (departureAirport) {
      res["departure_airport"] = boost::any(*departureAirport);
    }
    if (departureCity) {
      res["departure_city"] = boost::any(*departureCity);
    }
    if (departureTerminal) {
      res["departure_terminal"] = boost::any(*departureTerminal);
    }
    if (departureTime) {
      res["departure_time"] = boost::any(*departureTime);
    }
    if (equipType) {
      res["equip_type"] = boost::any(*equipType);
    }
    if (flightDuration) {
      res["flight_duration"] = boost::any(*flightDuration);
    }
    if (marketingAirline) {
      res["marketing_airline"] = boost::any(*marketingAirline);
    }
    if (marketingFlightNo) {
      res["marketing_flight_no"] = boost::any(*marketingFlightNo);
    }
    if (marketingFlightNoInt) {
      res["marketing_flight_no_int"] = boost::any(*marketingFlightNoInt);
    }
    if (operatingAirline) {
      res["operating_airline"] = boost::any(*operatingAirline);
    }
    if (operatingFlightNo) {
      res["operating_flight_no"] = boost::any(*operatingFlightNo);
    }
    if (segmentId) {
      res["segment_id"] = boost::any(*segmentId);
    }
    if (stopCityList) {
      res["stop_city_list"] = boost::any(*stopCityList);
    }
    if (stopQuantity) {
      res["stop_quantity"] = boost::any(*stopQuantity);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("arrival_airport") != m.end() && !m["arrival_airport"].empty()) {
      arrivalAirport = make_shared<string>(boost::any_cast<string>(m["arrival_airport"]));
    }
    if (m.find("arrival_city") != m.end() && !m["arrival_city"].empty()) {
      arrivalCity = make_shared<string>(boost::any_cast<string>(m["arrival_city"]));
    }
    if (m.find("arrival_terminal") != m.end() && !m["arrival_terminal"].empty()) {
      arrivalTerminal = make_shared<string>(boost::any_cast<string>(m["arrival_terminal"]));
    }
    if (m.find("arrival_time") != m.end() && !m["arrival_time"].empty()) {
      arrivalTime = make_shared<string>(boost::any_cast<string>(m["arrival_time"]));
    }
    if (m.find("availability") != m.end() && !m["availability"].empty()) {
      availability = make_shared<string>(boost::any_cast<string>(m["availability"]));
    }
    if (m.find("cabin") != m.end() && !m["cabin"].empty()) {
      cabin = make_shared<string>(boost::any_cast<string>(m["cabin"]));
    }
    if (m.find("cabin_class") != m.end() && !m["cabin_class"].empty()) {
      cabinClass = make_shared<string>(boost::any_cast<string>(m["cabin_class"]));
    }
    if (m.find("code_share") != m.end() && !m["code_share"].empty()) {
      codeShare = make_shared<bool>(boost::any_cast<bool>(m["code_share"]));
    }
    if (m.find("departure_airport") != m.end() && !m["departure_airport"].empty()) {
      departureAirport = make_shared<string>(boost::any_cast<string>(m["departure_airport"]));
    }
    if (m.find("departure_city") != m.end() && !m["departure_city"].empty()) {
      departureCity = make_shared<string>(boost::any_cast<string>(m["departure_city"]));
    }
    if (m.find("departure_terminal") != m.end() && !m["departure_terminal"].empty()) {
      departureTerminal = make_shared<string>(boost::any_cast<string>(m["departure_terminal"]));
    }
    if (m.find("departure_time") != m.end() && !m["departure_time"].empty()) {
      departureTime = make_shared<string>(boost::any_cast<string>(m["departure_time"]));
    }
    if (m.find("equip_type") != m.end() && !m["equip_type"].empty()) {
      equipType = make_shared<string>(boost::any_cast<string>(m["equip_type"]));
    }
    if (m.find("flight_duration") != m.end() && !m["flight_duration"].empty()) {
      flightDuration = make_shared<long>(boost::any_cast<long>(m["flight_duration"]));
    }
    if (m.find("marketing_airline") != m.end() && !m["marketing_airline"].empty()) {
      marketingAirline = make_shared<string>(boost::any_cast<string>(m["marketing_airline"]));
    }
    if (m.find("marketing_flight_no") != m.end() && !m["marketing_flight_no"].empty()) {
      marketingFlightNo = make_shared<string>(boost::any_cast<string>(m["marketing_flight_no"]));
    }
    if (m.find("marketing_flight_no_int") != m.end() && !m["marketing_flight_no_int"].empty()) {
      marketingFlightNoInt = make_shared<long>(boost::any_cast<long>(m["marketing_flight_no_int"]));
    }
    if (m.find("operating_airline") != m.end() && !m["operating_airline"].empty()) {
      operatingAirline = make_shared<string>(boost::any_cast<string>(m["operating_airline"]));
    }
    if (m.find("operating_flight_no") != m.end() && !m["operating_flight_no"].empty()) {
      operatingFlightNo = make_shared<string>(boost::any_cast<string>(m["operating_flight_no"]));
    }
    if (m.find("segment_id") != m.end() && !m["segment_id"].empty()) {
      segmentId = make_shared<string>(boost::any_cast<string>(m["segment_id"]));
    }
    if (m.find("stop_city_list") != m.end() && !m["stop_city_list"].empty()) {
      stopCityList = make_shared<string>(boost::any_cast<string>(m["stop_city_list"]));
    }
    if (m.find("stop_quantity") != m.end() && !m["stop_quantity"].empty()) {
      stopQuantity = make_shared<long>(boost::any_cast<long>(m["stop_quantity"]));
    }
  }


  virtual ~ChangeDetailResponseBodyDataOriginalJourneysSegmentList() = default;
};
class ChangeDetailResponseBodyDataOriginalJourneys : public Darabonba::Model {
public:
  shared_ptr<vector<ChangeDetailResponseBodyDataOriginalJourneysSegmentList>> segmentList{};
  shared_ptr<long> transferCount{};

  ChangeDetailResponseBodyDataOriginalJourneys() {}

  explicit ChangeDetailResponseBodyDataOriginalJourneys(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (segmentList) {
      vector<boost::any> temp1;
      for(auto item1:*segmentList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["segment_list"] = boost::any(temp1);
    }
    if (transferCount) {
      res["transfer_count"] = boost::any(*transferCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("segment_list") != m.end() && !m["segment_list"].empty()) {
      if (typeid(vector<boost::any>) == m["segment_list"].type()) {
        vector<ChangeDetailResponseBodyDataOriginalJourneysSegmentList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["segment_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ChangeDetailResponseBodyDataOriginalJourneysSegmentList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        segmentList = make_shared<vector<ChangeDetailResponseBodyDataOriginalJourneysSegmentList>>(expect1);
      }
    }
    if (m.find("transfer_count") != m.end() && !m["transfer_count"].empty()) {
      transferCount = make_shared<long>(boost::any_cast<long>(m["transfer_count"]));
    }
  }


  virtual ~ChangeDetailResponseBodyDataOriginalJourneys() = default;
};
class ChangeDetailResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ChangeDetailResponseBodyDataChangeFeeDetails>> changeFeeDetails{};
  shared_ptr<long> changeOrderNum{};
  shared_ptr<vector<ChangeDetailResponseBodyDataChangePassengers>> changePassengers{};
  shared_ptr<long> changeReasonType{};
  shared_ptr<vector<ChangeDetailResponseBodyDataChangedJourneys>> changedJourneys{};
  shared_ptr<string> closeReason{};
  shared_ptr<long> closeUtcTime{};
  shared_ptr<ChangeDetailResponseBodyDataContact> contact{};
  shared_ptr<long> createUtcTime{};
  shared_ptr<long> lastConfirmUtcTime{};
  shared_ptr<vector<ChangeDetailResponseBodyDataLastJourneys>> lastJourneys{};
  shared_ptr<long> orderNum{};
  shared_ptr<long> orderStatus{};
  shared_ptr<vector<ChangeDetailResponseBodyDataOriginalJourneys>> originalJourneys{};
  shared_ptr<long> payStatus{};
  shared_ptr<long> paySuccessUtcTime{};
  shared_ptr<double> totalAmount{};
  shared_ptr<string> transactionNo{};

  ChangeDetailResponseBodyData() {}

  explicit ChangeDetailResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (changeFeeDetails) {
      vector<boost::any> temp1;
      for(auto item1:*changeFeeDetails){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["change_fee_details"] = boost::any(temp1);
    }
    if (changeOrderNum) {
      res["change_order_num"] = boost::any(*changeOrderNum);
    }
    if (changePassengers) {
      vector<boost::any> temp1;
      for(auto item1:*changePassengers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["change_passengers"] = boost::any(temp1);
    }
    if (changeReasonType) {
      res["change_reason_type"] = boost::any(*changeReasonType);
    }
    if (changedJourneys) {
      vector<boost::any> temp1;
      for(auto item1:*changedJourneys){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["changed_journeys"] = boost::any(temp1);
    }
    if (closeReason) {
      res["close_reason"] = boost::any(*closeReason);
    }
    if (closeUtcTime) {
      res["close_utc_time"] = boost::any(*closeUtcTime);
    }
    if (contact) {
      res["contact"] = contact ? boost::any(contact->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (createUtcTime) {
      res["create_utc_time"] = boost::any(*createUtcTime);
    }
    if (lastConfirmUtcTime) {
      res["last_confirm_utc_time"] = boost::any(*lastConfirmUtcTime);
    }
    if (lastJourneys) {
      vector<boost::any> temp1;
      for(auto item1:*lastJourneys){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["last_journeys"] = boost::any(temp1);
    }
    if (orderNum) {
      res["order_num"] = boost::any(*orderNum);
    }
    if (orderStatus) {
      res["order_status"] = boost::any(*orderStatus);
    }
    if (originalJourneys) {
      vector<boost::any> temp1;
      for(auto item1:*originalJourneys){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["original_journeys"] = boost::any(temp1);
    }
    if (payStatus) {
      res["pay_status"] = boost::any(*payStatus);
    }
    if (paySuccessUtcTime) {
      res["pay_success_utc_time"] = boost::any(*paySuccessUtcTime);
    }
    if (totalAmount) {
      res["total_amount"] = boost::any(*totalAmount);
    }
    if (transactionNo) {
      res["transaction_no"] = boost::any(*transactionNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("change_fee_details") != m.end() && !m["change_fee_details"].empty()) {
      if (typeid(vector<boost::any>) == m["change_fee_details"].type()) {
        vector<ChangeDetailResponseBodyDataChangeFeeDetails> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["change_fee_details"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ChangeDetailResponseBodyDataChangeFeeDetails model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        changeFeeDetails = make_shared<vector<ChangeDetailResponseBodyDataChangeFeeDetails>>(expect1);
      }
    }
    if (m.find("change_order_num") != m.end() && !m["change_order_num"].empty()) {
      changeOrderNum = make_shared<long>(boost::any_cast<long>(m["change_order_num"]));
    }
    if (m.find("change_passengers") != m.end() && !m["change_passengers"].empty()) {
      if (typeid(vector<boost::any>) == m["change_passengers"].type()) {
        vector<ChangeDetailResponseBodyDataChangePassengers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["change_passengers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ChangeDetailResponseBodyDataChangePassengers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        changePassengers = make_shared<vector<ChangeDetailResponseBodyDataChangePassengers>>(expect1);
      }
    }
    if (m.find("change_reason_type") != m.end() && !m["change_reason_type"].empty()) {
      changeReasonType = make_shared<long>(boost::any_cast<long>(m["change_reason_type"]));
    }
    if (m.find("changed_journeys") != m.end() && !m["changed_journeys"].empty()) {
      if (typeid(vector<boost::any>) == m["changed_journeys"].type()) {
        vector<ChangeDetailResponseBodyDataChangedJourneys> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["changed_journeys"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ChangeDetailResponseBodyDataChangedJourneys model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        changedJourneys = make_shared<vector<ChangeDetailResponseBodyDataChangedJourneys>>(expect1);
      }
    }
    if (m.find("close_reason") != m.end() && !m["close_reason"].empty()) {
      closeReason = make_shared<string>(boost::any_cast<string>(m["close_reason"]));
    }
    if (m.find("close_utc_time") != m.end() && !m["close_utc_time"].empty()) {
      closeUtcTime = make_shared<long>(boost::any_cast<long>(m["close_utc_time"]));
    }
    if (m.find("contact") != m.end() && !m["contact"].empty()) {
      if (typeid(map<string, boost::any>) == m["contact"].type()) {
        ChangeDetailResponseBodyDataContact model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["contact"]));
        contact = make_shared<ChangeDetailResponseBodyDataContact>(model1);
      }
    }
    if (m.find("create_utc_time") != m.end() && !m["create_utc_time"].empty()) {
      createUtcTime = make_shared<long>(boost::any_cast<long>(m["create_utc_time"]));
    }
    if (m.find("last_confirm_utc_time") != m.end() && !m["last_confirm_utc_time"].empty()) {
      lastConfirmUtcTime = make_shared<long>(boost::any_cast<long>(m["last_confirm_utc_time"]));
    }
    if (m.find("last_journeys") != m.end() && !m["last_journeys"].empty()) {
      if (typeid(vector<boost::any>) == m["last_journeys"].type()) {
        vector<ChangeDetailResponseBodyDataLastJourneys> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["last_journeys"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ChangeDetailResponseBodyDataLastJourneys model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        lastJourneys = make_shared<vector<ChangeDetailResponseBodyDataLastJourneys>>(expect1);
      }
    }
    if (m.find("order_num") != m.end() && !m["order_num"].empty()) {
      orderNum = make_shared<long>(boost::any_cast<long>(m["order_num"]));
    }
    if (m.find("order_status") != m.end() && !m["order_status"].empty()) {
      orderStatus = make_shared<long>(boost::any_cast<long>(m["order_status"]));
    }
    if (m.find("original_journeys") != m.end() && !m["original_journeys"].empty()) {
      if (typeid(vector<boost::any>) == m["original_journeys"].type()) {
        vector<ChangeDetailResponseBodyDataOriginalJourneys> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["original_journeys"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ChangeDetailResponseBodyDataOriginalJourneys model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        originalJourneys = make_shared<vector<ChangeDetailResponseBodyDataOriginalJourneys>>(expect1);
      }
    }
    if (m.find("pay_status") != m.end() && !m["pay_status"].empty()) {
      payStatus = make_shared<long>(boost::any_cast<long>(m["pay_status"]));
    }
    if (m.find("pay_success_utc_time") != m.end() && !m["pay_success_utc_time"].empty()) {
      paySuccessUtcTime = make_shared<long>(boost::any_cast<long>(m["pay_success_utc_time"]));
    }
    if (m.find("total_amount") != m.end() && !m["total_amount"].empty()) {
      totalAmount = make_shared<double>(boost::any_cast<double>(m["total_amount"]));
    }
    if (m.find("transaction_no") != m.end() && !m["transaction_no"].empty()) {
      transactionNo = make_shared<string>(boost::any_cast<string>(m["transaction_no"]));
    }
  }


  virtual ~ChangeDetailResponseBodyData() = default;
};
class ChangeDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ChangeDetailResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<boost::any> errorData{};
  shared_ptr<string> errorMsg{};
  shared_ptr<long> status{};
  shared_ptr<bool> success{};

  ChangeDetailResponseBody() {}

  explicit ChangeDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["error_code"] = boost::any(*errorCode);
    }
    if (errorData) {
      res["error_data"] = boost::any(*errorData);
    }
    if (errorMsg) {
      res["error_msg"] = boost::any(*errorMsg);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        ChangeDetailResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ChangeDetailResponseBodyData>(model1);
      }
    }
    if (m.find("error_code") != m.end() && !m["error_code"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["error_code"]));
    }
    if (m.find("error_data") != m.end() && !m["error_data"].empty()) {
      errorData = make_shared<boost::any>(boost::any_cast<boost::any>(m["error_data"]));
    }
    if (m.find("error_msg") != m.end() && !m["error_msg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["error_msg"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~ChangeDetailResponseBody() = default;
};
class ChangeDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ChangeDetailResponseBody> body{};

  ChangeDetailResponse() {}

  explicit ChangeDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ChangeDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ChangeDetailResponseBody>(model1);
      }
    }
  }


  virtual ~ChangeDetailResponse() = default;
};
class ChangeDetailListOfBuyerHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAirticketAccessToken{};
  shared_ptr<string> xAcsAirticketLanguage{};

  ChangeDetailListOfBuyerHeaders() {}

  explicit ChangeDetailListOfBuyerHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAirticketAccessToken) {
      res["x-acs-airticket-access-token"] = boost::any(*xAcsAirticketAccessToken);
    }
    if (xAcsAirticketLanguage) {
      res["x-acs-airticket-language"] = boost::any(*xAcsAirticketLanguage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("x-acs-airticket-access-token") != m.end() && !m["x-acs-airticket-access-token"].empty()) {
      xAcsAirticketAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-airticket-access-token"]));
    }
    if (m.find("x-acs-airticket-language") != m.end() && !m["x-acs-airticket-language"].empty()) {
      xAcsAirticketLanguage = make_shared<string>(boost::any_cast<string>(m["x-acs-airticket-language"]));
    }
  }


  virtual ~ChangeDetailListOfBuyerHeaders() = default;
};
class ChangeDetailListOfBuyerRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> utcCreateBegin{};
  shared_ptr<long> utcCreateEnd{};

  ChangeDetailListOfBuyerRequest() {}

  explicit ChangeDetailListOfBuyerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageIndex) {
      res["page_index"] = boost::any(*pageIndex);
    }
    if (pageSize) {
      res["page_size"] = boost::any(*pageSize);
    }
    if (utcCreateBegin) {
      res["utc_create_begin"] = boost::any(*utcCreateBegin);
    }
    if (utcCreateEnd) {
      res["utc_create_end"] = boost::any(*utcCreateEnd);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("page_index") != m.end() && !m["page_index"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["page_index"]));
    }
    if (m.find("page_size") != m.end() && !m["page_size"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["page_size"]));
    }
    if (m.find("utc_create_begin") != m.end() && !m["utc_create_begin"].empty()) {
      utcCreateBegin = make_shared<long>(boost::any_cast<long>(m["utc_create_begin"]));
    }
    if (m.find("utc_create_end") != m.end() && !m["utc_create_end"].empty()) {
      utcCreateEnd = make_shared<long>(boost::any_cast<long>(m["utc_create_end"]));
    }
  }


  virtual ~ChangeDetailListOfBuyerRequest() = default;
};
class ChangeDetailListOfBuyerResponseBodyDataList : public Darabonba::Model {
public:
  shared_ptr<long> changeOrderNum{};
  shared_ptr<long> orderNum{};
  shared_ptr<long> orderStatus{};
  shared_ptr<long> payStatus{};
  shared_ptr<string> transactionNo{};
  shared_ptr<long> utcCreateTime{};

  ChangeDetailListOfBuyerResponseBodyDataList() {}

  explicit ChangeDetailListOfBuyerResponseBodyDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (changeOrderNum) {
      res["change_order_num"] = boost::any(*changeOrderNum);
    }
    if (orderNum) {
      res["order_num"] = boost::any(*orderNum);
    }
    if (orderStatus) {
      res["order_status"] = boost::any(*orderStatus);
    }
    if (payStatus) {
      res["pay_status"] = boost::any(*payStatus);
    }
    if (transactionNo) {
      res["transaction_no"] = boost::any(*transactionNo);
    }
    if (utcCreateTime) {
      res["utc_create_time"] = boost::any(*utcCreateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("change_order_num") != m.end() && !m["change_order_num"].empty()) {
      changeOrderNum = make_shared<long>(boost::any_cast<long>(m["change_order_num"]));
    }
    if (m.find("order_num") != m.end() && !m["order_num"].empty()) {
      orderNum = make_shared<long>(boost::any_cast<long>(m["order_num"]));
    }
    if (m.find("order_status") != m.end() && !m["order_status"].empty()) {
      orderStatus = make_shared<long>(boost::any_cast<long>(m["order_status"]));
    }
    if (m.find("pay_status") != m.end() && !m["pay_status"].empty()) {
      payStatus = make_shared<long>(boost::any_cast<long>(m["pay_status"]));
    }
    if (m.find("transaction_no") != m.end() && !m["transaction_no"].empty()) {
      transactionNo = make_shared<string>(boost::any_cast<string>(m["transaction_no"]));
    }
    if (m.find("utc_create_time") != m.end() && !m["utc_create_time"].empty()) {
      utcCreateTime = make_shared<long>(boost::any_cast<long>(m["utc_create_time"]));
    }
  }


  virtual ~ChangeDetailListOfBuyerResponseBodyDataList() = default;
};
class ChangeDetailListOfBuyerResponseBodyDataPagination : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};
  shared_ptr<long> totalPage{};

  ChangeDetailListOfBuyerResponseBodyDataPagination() {}

  explicit ChangeDetailListOfBuyerResponseBodyDataPagination(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["current_page"] = boost::any(*currentPage);
    }
    if (pageSize) {
      res["page_size"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["total_count"] = boost::any(*totalCount);
    }
    if (totalPage) {
      res["total_page"] = boost::any(*totalPage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("current_page") != m.end() && !m["current_page"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["current_page"]));
    }
    if (m.find("page_size") != m.end() && !m["page_size"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["page_size"]));
    }
    if (m.find("total_count") != m.end() && !m["total_count"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["total_count"]));
    }
    if (m.find("total_page") != m.end() && !m["total_page"].empty()) {
      totalPage = make_shared<long>(boost::any_cast<long>(m["total_page"]));
    }
  }


  virtual ~ChangeDetailListOfBuyerResponseBodyDataPagination() = default;
};
class ChangeDetailListOfBuyerResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ChangeDetailListOfBuyerResponseBodyDataList>> list{};
  shared_ptr<ChangeDetailListOfBuyerResponseBodyDataPagination> pagination{};

  ChangeDetailListOfBuyerResponseBodyData() {}

  explicit ChangeDetailListOfBuyerResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["list"] = boost::any(temp1);
    }
    if (pagination) {
      res["pagination"] = pagination ? boost::any(pagination->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("list") != m.end() && !m["list"].empty()) {
      if (typeid(vector<boost::any>) == m["list"].type()) {
        vector<ChangeDetailListOfBuyerResponseBodyDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ChangeDetailListOfBuyerResponseBodyDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<ChangeDetailListOfBuyerResponseBodyDataList>>(expect1);
      }
    }
    if (m.find("pagination") != m.end() && !m["pagination"].empty()) {
      if (typeid(map<string, boost::any>) == m["pagination"].type()) {
        ChangeDetailListOfBuyerResponseBodyDataPagination model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["pagination"]));
        pagination = make_shared<ChangeDetailListOfBuyerResponseBodyDataPagination>(model1);
      }
    }
  }


  virtual ~ChangeDetailListOfBuyerResponseBodyData() = default;
};
class ChangeDetailListOfBuyerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ChangeDetailListOfBuyerResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<boost::any> errorData{};
  shared_ptr<string> errorMsg{};
  shared_ptr<long> status{};
  shared_ptr<bool> success{};

  ChangeDetailListOfBuyerResponseBody() {}

  explicit ChangeDetailListOfBuyerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["error_code"] = boost::any(*errorCode);
    }
    if (errorData) {
      res["error_data"] = boost::any(*errorData);
    }
    if (errorMsg) {
      res["error_msg"] = boost::any(*errorMsg);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        ChangeDetailListOfBuyerResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ChangeDetailListOfBuyerResponseBodyData>(model1);
      }
    }
    if (m.find("error_code") != m.end() && !m["error_code"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["error_code"]));
    }
    if (m.find("error_data") != m.end() && !m["error_data"].empty()) {
      errorData = make_shared<boost::any>(boost::any_cast<boost::any>(m["error_data"]));
    }
    if (m.find("error_msg") != m.end() && !m["error_msg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["error_msg"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~ChangeDetailListOfBuyerResponseBody() = default;
};
class ChangeDetailListOfBuyerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ChangeDetailListOfBuyerResponseBody> body{};

  ChangeDetailListOfBuyerResponse() {}

  explicit ChangeDetailListOfBuyerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ChangeDetailListOfBuyerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ChangeDetailListOfBuyerResponseBody>(model1);
      }
    }
  }


  virtual ~ChangeDetailListOfBuyerResponse() = default;
};
class ChangeDetailListOfOrderNumHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAirticketAccessToken{};
  shared_ptr<string> xAcsAirticketLanguage{};

  ChangeDetailListOfOrderNumHeaders() {}

  explicit ChangeDetailListOfOrderNumHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAirticketAccessToken) {
      res["x-acs-airticket-access-token"] = boost::any(*xAcsAirticketAccessToken);
    }
    if (xAcsAirticketLanguage) {
      res["x-acs-airticket-language"] = boost::any(*xAcsAirticketLanguage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("x-acs-airticket-access-token") != m.end() && !m["x-acs-airticket-access-token"].empty()) {
      xAcsAirticketAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-airticket-access-token"]));
    }
    if (m.find("x-acs-airticket-language") != m.end() && !m["x-acs-airticket-language"].empty()) {
      xAcsAirticketLanguage = make_shared<string>(boost::any_cast<string>(m["x-acs-airticket-language"]));
    }
  }


  virtual ~ChangeDetailListOfOrderNumHeaders() = default;
};
class ChangeDetailListOfOrderNumRequest : public Darabonba::Model {
public:
  shared_ptr<long> orderNum{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageSize{};

  ChangeDetailListOfOrderNumRequest() {}

  explicit ChangeDetailListOfOrderNumRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderNum) {
      res["order_num"] = boost::any(*orderNum);
    }
    if (pageIndex) {
      res["page_index"] = boost::any(*pageIndex);
    }
    if (pageSize) {
      res["page_size"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("order_num") != m.end() && !m["order_num"].empty()) {
      orderNum = make_shared<long>(boost::any_cast<long>(m["order_num"]));
    }
    if (m.find("page_index") != m.end() && !m["page_index"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["page_index"]));
    }
    if (m.find("page_size") != m.end() && !m["page_size"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["page_size"]));
    }
  }


  virtual ~ChangeDetailListOfOrderNumRequest() = default;
};
class ChangeDetailListOfOrderNumResponseBodyDataListChangeFeeDetailsChangeFee : public Darabonba::Model {
public:
  shared_ptr<double> serviceFee{};
  shared_ptr<double> taxFee{};
  shared_ptr<double> upgradeFee{};

  ChangeDetailListOfOrderNumResponseBodyDataListChangeFeeDetailsChangeFee() {}

  explicit ChangeDetailListOfOrderNumResponseBodyDataListChangeFeeDetailsChangeFee(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceFee) {
      res["service_fee"] = boost::any(*serviceFee);
    }
    if (taxFee) {
      res["tax_fee"] = boost::any(*taxFee);
    }
    if (upgradeFee) {
      res["upgrade_fee"] = boost::any(*upgradeFee);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("service_fee") != m.end() && !m["service_fee"].empty()) {
      serviceFee = make_shared<double>(boost::any_cast<double>(m["service_fee"]));
    }
    if (m.find("tax_fee") != m.end() && !m["tax_fee"].empty()) {
      taxFee = make_shared<double>(boost::any_cast<double>(m["tax_fee"]));
    }
    if (m.find("upgrade_fee") != m.end() && !m["upgrade_fee"].empty()) {
      upgradeFee = make_shared<double>(boost::any_cast<double>(m["upgrade_fee"]));
    }
  }


  virtual ~ChangeDetailListOfOrderNumResponseBodyDataListChangeFeeDetailsChangeFee() = default;
};
class ChangeDetailListOfOrderNumResponseBodyDataListChangeFeeDetailsPassenger : public Darabonba::Model {
public:
  shared_ptr<string> document{};
  shared_ptr<string> firstName{};
  shared_ptr<string> lastName{};

  ChangeDetailListOfOrderNumResponseBodyDataListChangeFeeDetailsPassenger() {}

  explicit ChangeDetailListOfOrderNumResponseBodyDataListChangeFeeDetailsPassenger(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (document) {
      res["document"] = boost::any(*document);
    }
    if (firstName) {
      res["first_name"] = boost::any(*firstName);
    }
    if (lastName) {
      res["last_name"] = boost::any(*lastName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("document") != m.end() && !m["document"].empty()) {
      document = make_shared<string>(boost::any_cast<string>(m["document"]));
    }
    if (m.find("first_name") != m.end() && !m["first_name"].empty()) {
      firstName = make_shared<string>(boost::any_cast<string>(m["first_name"]));
    }
    if (m.find("last_name") != m.end() && !m["last_name"].empty()) {
      lastName = make_shared<string>(boost::any_cast<string>(m["last_name"]));
    }
  }


  virtual ~ChangeDetailListOfOrderNumResponseBodyDataListChangeFeeDetailsPassenger() = default;
};
class ChangeDetailListOfOrderNumResponseBodyDataListChangeFeeDetails : public Darabonba::Model {
public:
  shared_ptr<ChangeDetailListOfOrderNumResponseBodyDataListChangeFeeDetailsChangeFee> changeFee{};
  shared_ptr<ChangeDetailListOfOrderNumResponseBodyDataListChangeFeeDetailsPassenger> passenger{};

  ChangeDetailListOfOrderNumResponseBodyDataListChangeFeeDetails() {}

  explicit ChangeDetailListOfOrderNumResponseBodyDataListChangeFeeDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (changeFee) {
      res["change_fee"] = changeFee ? boost::any(changeFee->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (passenger) {
      res["passenger"] = passenger ? boost::any(passenger->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("change_fee") != m.end() && !m["change_fee"].empty()) {
      if (typeid(map<string, boost::any>) == m["change_fee"].type()) {
        ChangeDetailListOfOrderNumResponseBodyDataListChangeFeeDetailsChangeFee model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["change_fee"]));
        changeFee = make_shared<ChangeDetailListOfOrderNumResponseBodyDataListChangeFeeDetailsChangeFee>(model1);
      }
    }
    if (m.find("passenger") != m.end() && !m["passenger"].empty()) {
      if (typeid(map<string, boost::any>) == m["passenger"].type()) {
        ChangeDetailListOfOrderNumResponseBodyDataListChangeFeeDetailsPassenger model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["passenger"]));
        passenger = make_shared<ChangeDetailListOfOrderNumResponseBodyDataListChangeFeeDetailsPassenger>(model1);
      }
    }
  }


  virtual ~ChangeDetailListOfOrderNumResponseBodyDataListChangeFeeDetails() = default;
};
class ChangeDetailListOfOrderNumResponseBodyDataListChangePassengers : public Darabonba::Model {
public:
  shared_ptr<string> document{};
  shared_ptr<string> firstName{};
  shared_ptr<string> lastName{};

  ChangeDetailListOfOrderNumResponseBodyDataListChangePassengers() {}

  explicit ChangeDetailListOfOrderNumResponseBodyDataListChangePassengers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (document) {
      res["document"] = boost::any(*document);
    }
    if (firstName) {
      res["first_name"] = boost::any(*firstName);
    }
    if (lastName) {
      res["last_name"] = boost::any(*lastName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("document") != m.end() && !m["document"].empty()) {
      document = make_shared<string>(boost::any_cast<string>(m["document"]));
    }
    if (m.find("first_name") != m.end() && !m["first_name"].empty()) {
      firstName = make_shared<string>(boost::any_cast<string>(m["first_name"]));
    }
    if (m.find("last_name") != m.end() && !m["last_name"].empty()) {
      lastName = make_shared<string>(boost::any_cast<string>(m["last_name"]));
    }
  }


  virtual ~ChangeDetailListOfOrderNumResponseBodyDataListChangePassengers() = default;
};
class ChangeDetailListOfOrderNumResponseBodyDataListChangedJourneysSegmentList : public Darabonba::Model {
public:
  shared_ptr<string> arrivalAirport{};
  shared_ptr<string> arrivalCity{};
  shared_ptr<string> arrivalTerminal{};
  shared_ptr<string> arrivalTime{};
  shared_ptr<string> availability{};
  shared_ptr<string> cabin{};
  shared_ptr<string> cabinClass{};
  shared_ptr<bool> codeShare{};
  shared_ptr<string> departureAirport{};
  shared_ptr<string> departureCity{};
  shared_ptr<string> departureTerminal{};
  shared_ptr<string> departureTime{};
  shared_ptr<string> equipType{};
  shared_ptr<long> flightDuration{};
  shared_ptr<string> marketingAirline{};
  shared_ptr<string> marketingFlightNo{};
  shared_ptr<long> marketingFlightNoInt{};
  shared_ptr<string> operatingAirline{};
  shared_ptr<string> operatingFlightNo{};
  shared_ptr<string> segmentId{};
  shared_ptr<string> stopCityList{};
  shared_ptr<long> stopQuantity{};

  ChangeDetailListOfOrderNumResponseBodyDataListChangedJourneysSegmentList() {}

  explicit ChangeDetailListOfOrderNumResponseBodyDataListChangedJourneysSegmentList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arrivalAirport) {
      res["arrival_airport"] = boost::any(*arrivalAirport);
    }
    if (arrivalCity) {
      res["arrival_city"] = boost::any(*arrivalCity);
    }
    if (arrivalTerminal) {
      res["arrival_terminal"] = boost::any(*arrivalTerminal);
    }
    if (arrivalTime) {
      res["arrival_time"] = boost::any(*arrivalTime);
    }
    if (availability) {
      res["availability"] = boost::any(*availability);
    }
    if (cabin) {
      res["cabin"] = boost::any(*cabin);
    }
    if (cabinClass) {
      res["cabin_class"] = boost::any(*cabinClass);
    }
    if (codeShare) {
      res["code_share"] = boost::any(*codeShare);
    }
    if (departureAirport) {
      res["departure_airport"] = boost::any(*departureAirport);
    }
    if (departureCity) {
      res["departure_city"] = boost::any(*departureCity);
    }
    if (departureTerminal) {
      res["departure_terminal"] = boost::any(*departureTerminal);
    }
    if (departureTime) {
      res["departure_time"] = boost::any(*departureTime);
    }
    if (equipType) {
      res["equip_type"] = boost::any(*equipType);
    }
    if (flightDuration) {
      res["flight_duration"] = boost::any(*flightDuration);
    }
    if (marketingAirline) {
      res["marketing_airline"] = boost::any(*marketingAirline);
    }
    if (marketingFlightNo) {
      res["marketing_flight_no"] = boost::any(*marketingFlightNo);
    }
    if (marketingFlightNoInt) {
      res["marketing_flight_no_int"] = boost::any(*marketingFlightNoInt);
    }
    if (operatingAirline) {
      res["operating_airline"] = boost::any(*operatingAirline);
    }
    if (operatingFlightNo) {
      res["operating_flight_no"] = boost::any(*operatingFlightNo);
    }
    if (segmentId) {
      res["segment_id"] = boost::any(*segmentId);
    }
    if (stopCityList) {
      res["stop_city_list"] = boost::any(*stopCityList);
    }
    if (stopQuantity) {
      res["stop_quantity"] = boost::any(*stopQuantity);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("arrival_airport") != m.end() && !m["arrival_airport"].empty()) {
      arrivalAirport = make_shared<string>(boost::any_cast<string>(m["arrival_airport"]));
    }
    if (m.find("arrival_city") != m.end() && !m["arrival_city"].empty()) {
      arrivalCity = make_shared<string>(boost::any_cast<string>(m["arrival_city"]));
    }
    if (m.find("arrival_terminal") != m.end() && !m["arrival_terminal"].empty()) {
      arrivalTerminal = make_shared<string>(boost::any_cast<string>(m["arrival_terminal"]));
    }
    if (m.find("arrival_time") != m.end() && !m["arrival_time"].empty()) {
      arrivalTime = make_shared<string>(boost::any_cast<string>(m["arrival_time"]));
    }
    if (m.find("availability") != m.end() && !m["availability"].empty()) {
      availability = make_shared<string>(boost::any_cast<string>(m["availability"]));
    }
    if (m.find("cabin") != m.end() && !m["cabin"].empty()) {
      cabin = make_shared<string>(boost::any_cast<string>(m["cabin"]));
    }
    if (m.find("cabin_class") != m.end() && !m["cabin_class"].empty()) {
      cabinClass = make_shared<string>(boost::any_cast<string>(m["cabin_class"]));
    }
    if (m.find("code_share") != m.end() && !m["code_share"].empty()) {
      codeShare = make_shared<bool>(boost::any_cast<bool>(m["code_share"]));
    }
    if (m.find("departure_airport") != m.end() && !m["departure_airport"].empty()) {
      departureAirport = make_shared<string>(boost::any_cast<string>(m["departure_airport"]));
    }
    if (m.find("departure_city") != m.end() && !m["departure_city"].empty()) {
      departureCity = make_shared<string>(boost::any_cast<string>(m["departure_city"]));
    }
    if (m.find("departure_terminal") != m.end() && !m["departure_terminal"].empty()) {
      departureTerminal = make_shared<string>(boost::any_cast<string>(m["departure_terminal"]));
    }
    if (m.find("departure_time") != m.end() && !m["departure_time"].empty()) {
      departureTime = make_shared<string>(boost::any_cast<string>(m["departure_time"]));
    }
    if (m.find("equip_type") != m.end() && !m["equip_type"].empty()) {
      equipType = make_shared<string>(boost::any_cast<string>(m["equip_type"]));
    }
    if (m.find("flight_duration") != m.end() && !m["flight_duration"].empty()) {
      flightDuration = make_shared<long>(boost::any_cast<long>(m["flight_duration"]));
    }
    if (m.find("marketing_airline") != m.end() && !m["marketing_airline"].empty()) {
      marketingAirline = make_shared<string>(boost::any_cast<string>(m["marketing_airline"]));
    }
    if (m.find("marketing_flight_no") != m.end() && !m["marketing_flight_no"].empty()) {
      marketingFlightNo = make_shared<string>(boost::any_cast<string>(m["marketing_flight_no"]));
    }
    if (m.find("marketing_flight_no_int") != m.end() && !m["marketing_flight_no_int"].empty()) {
      marketingFlightNoInt = make_shared<long>(boost::any_cast<long>(m["marketing_flight_no_int"]));
    }
    if (m.find("operating_airline") != m.end() && !m["operating_airline"].empty()) {
      operatingAirline = make_shared<string>(boost::any_cast<string>(m["operating_airline"]));
    }
    if (m.find("operating_flight_no") != m.end() && !m["operating_flight_no"].empty()) {
      operatingFlightNo = make_shared<string>(boost::any_cast<string>(m["operating_flight_no"]));
    }
    if (m.find("segment_id") != m.end() && !m["segment_id"].empty()) {
      segmentId = make_shared<string>(boost::any_cast<string>(m["segment_id"]));
    }
    if (m.find("stop_city_list") != m.end() && !m["stop_city_list"].empty()) {
      stopCityList = make_shared<string>(boost::any_cast<string>(m["stop_city_list"]));
    }
    if (m.find("stop_quantity") != m.end() && !m["stop_quantity"].empty()) {
      stopQuantity = make_shared<long>(boost::any_cast<long>(m["stop_quantity"]));
    }
  }


  virtual ~ChangeDetailListOfOrderNumResponseBodyDataListChangedJourneysSegmentList() = default;
};
class ChangeDetailListOfOrderNumResponseBodyDataListChangedJourneys : public Darabonba::Model {
public:
  shared_ptr<vector<ChangeDetailListOfOrderNumResponseBodyDataListChangedJourneysSegmentList>> segmentList{};
  shared_ptr<long> transferCount{};

  ChangeDetailListOfOrderNumResponseBodyDataListChangedJourneys() {}

  explicit ChangeDetailListOfOrderNumResponseBodyDataListChangedJourneys(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (segmentList) {
      vector<boost::any> temp1;
      for(auto item1:*segmentList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["segment_list"] = boost::any(temp1);
    }
    if (transferCount) {
      res["transfer_count"] = boost::any(*transferCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("segment_list") != m.end() && !m["segment_list"].empty()) {
      if (typeid(vector<boost::any>) == m["segment_list"].type()) {
        vector<ChangeDetailListOfOrderNumResponseBodyDataListChangedJourneysSegmentList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["segment_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ChangeDetailListOfOrderNumResponseBodyDataListChangedJourneysSegmentList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        segmentList = make_shared<vector<ChangeDetailListOfOrderNumResponseBodyDataListChangedJourneysSegmentList>>(expect1);
      }
    }
    if (m.find("transfer_count") != m.end() && !m["transfer_count"].empty()) {
      transferCount = make_shared<long>(boost::any_cast<long>(m["transfer_count"]));
    }
  }


  virtual ~ChangeDetailListOfOrderNumResponseBodyDataListChangedJourneys() = default;
};
class ChangeDetailListOfOrderNumResponseBodyDataListContact : public Darabonba::Model {
public:
  shared_ptr<string> email{};
  shared_ptr<string> mobileCountryCode{};
  shared_ptr<string> mobilePhoneNum{};

  ChangeDetailListOfOrderNumResponseBodyDataListContact() {}

  explicit ChangeDetailListOfOrderNumResponseBodyDataListContact(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (email) {
      res["email"] = boost::any(*email);
    }
    if (mobileCountryCode) {
      res["mobile_country_code"] = boost::any(*mobileCountryCode);
    }
    if (mobilePhoneNum) {
      res["mobile_phone_num"] = boost::any(*mobilePhoneNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("email") != m.end() && !m["email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["email"]));
    }
    if (m.find("mobile_country_code") != m.end() && !m["mobile_country_code"].empty()) {
      mobileCountryCode = make_shared<string>(boost::any_cast<string>(m["mobile_country_code"]));
    }
    if (m.find("mobile_phone_num") != m.end() && !m["mobile_phone_num"].empty()) {
      mobilePhoneNum = make_shared<string>(boost::any_cast<string>(m["mobile_phone_num"]));
    }
  }


  virtual ~ChangeDetailListOfOrderNumResponseBodyDataListContact() = default;
};
class ChangeDetailListOfOrderNumResponseBodyDataListLastJourneysSegmentList : public Darabonba::Model {
public:
  shared_ptr<string> arrivalAirport{};
  shared_ptr<string> arrivalCity{};
  shared_ptr<string> arrivalTerminal{};
  shared_ptr<string> arrivalTime{};
  shared_ptr<string> availability{};
  shared_ptr<string> cabin{};
  shared_ptr<string> cabinClass{};
  shared_ptr<bool> codeShare{};
  shared_ptr<string> departureAirport{};
  shared_ptr<string> departureCity{};
  shared_ptr<string> departureTerminal{};
  shared_ptr<string> departureTime{};
  shared_ptr<string> equipType{};
  shared_ptr<long> flightDuration{};
  shared_ptr<string> marketingAirline{};
  shared_ptr<string> marketingFlightNo{};
  shared_ptr<long> marketingFlightNoInt{};
  shared_ptr<string> operatingAirline{};
  shared_ptr<string> operatingFlightNo{};
  shared_ptr<string> segmentId{};
  shared_ptr<string> stopCityList{};
  shared_ptr<long> stopQuantity{};

  ChangeDetailListOfOrderNumResponseBodyDataListLastJourneysSegmentList() {}

  explicit ChangeDetailListOfOrderNumResponseBodyDataListLastJourneysSegmentList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arrivalAirport) {
      res["arrival_airport"] = boost::any(*arrivalAirport);
    }
    if (arrivalCity) {
      res["arrival_city"] = boost::any(*arrivalCity);
    }
    if (arrivalTerminal) {
      res["arrival_terminal"] = boost::any(*arrivalTerminal);
    }
    if (arrivalTime) {
      res["arrival_time"] = boost::any(*arrivalTime);
    }
    if (availability) {
      res["availability"] = boost::any(*availability);
    }
    if (cabin) {
      res["cabin"] = boost::any(*cabin);
    }
    if (cabinClass) {
      res["cabin_class"] = boost::any(*cabinClass);
    }
    if (codeShare) {
      res["code_share"] = boost::any(*codeShare);
    }
    if (departureAirport) {
      res["departure_airport"] = boost::any(*departureAirport);
    }
    if (departureCity) {
      res["departure_city"] = boost::any(*departureCity);
    }
    if (departureTerminal) {
      res["departure_terminal"] = boost::any(*departureTerminal);
    }
    if (departureTime) {
      res["departure_time"] = boost::any(*departureTime);
    }
    if (equipType) {
      res["equip_type"] = boost::any(*equipType);
    }
    if (flightDuration) {
      res["flight_duration"] = boost::any(*flightDuration);
    }
    if (marketingAirline) {
      res["marketing_airline"] = boost::any(*marketingAirline);
    }
    if (marketingFlightNo) {
      res["marketing_flight_no"] = boost::any(*marketingFlightNo);
    }
    if (marketingFlightNoInt) {
      res["marketing_flight_no_int"] = boost::any(*marketingFlightNoInt);
    }
    if (operatingAirline) {
      res["operating_airline"] = boost::any(*operatingAirline);
    }
    if (operatingFlightNo) {
      res["operating_flight_no"] = boost::any(*operatingFlightNo);
    }
    if (segmentId) {
      res["segment_id"] = boost::any(*segmentId);
    }
    if (stopCityList) {
      res["stop_city_list"] = boost::any(*stopCityList);
    }
    if (stopQuantity) {
      res["stop_quantity"] = boost::any(*stopQuantity);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("arrival_airport") != m.end() && !m["arrival_airport"].empty()) {
      arrivalAirport = make_shared<string>(boost::any_cast<string>(m["arrival_airport"]));
    }
    if (m.find("arrival_city") != m.end() && !m["arrival_city"].empty()) {
      arrivalCity = make_shared<string>(boost::any_cast<string>(m["arrival_city"]));
    }
    if (m.find("arrival_terminal") != m.end() && !m["arrival_terminal"].empty()) {
      arrivalTerminal = make_shared<string>(boost::any_cast<string>(m["arrival_terminal"]));
    }
    if (m.find("arrival_time") != m.end() && !m["arrival_time"].empty()) {
      arrivalTime = make_shared<string>(boost::any_cast<string>(m["arrival_time"]));
    }
    if (m.find("availability") != m.end() && !m["availability"].empty()) {
      availability = make_shared<string>(boost::any_cast<string>(m["availability"]));
    }
    if (m.find("cabin") != m.end() && !m["cabin"].empty()) {
      cabin = make_shared<string>(boost::any_cast<string>(m["cabin"]));
    }
    if (m.find("cabin_class") != m.end() && !m["cabin_class"].empty()) {
      cabinClass = make_shared<string>(boost::any_cast<string>(m["cabin_class"]));
    }
    if (m.find("code_share") != m.end() && !m["code_share"].empty()) {
      codeShare = make_shared<bool>(boost::any_cast<bool>(m["code_share"]));
    }
    if (m.find("departure_airport") != m.end() && !m["departure_airport"].empty()) {
      departureAirport = make_shared<string>(boost::any_cast<string>(m["departure_airport"]));
    }
    if (m.find("departure_city") != m.end() && !m["departure_city"].empty()) {
      departureCity = make_shared<string>(boost::any_cast<string>(m["departure_city"]));
    }
    if (m.find("departure_terminal") != m.end() && !m["departure_terminal"].empty()) {
      departureTerminal = make_shared<string>(boost::any_cast<string>(m["departure_terminal"]));
    }
    if (m.find("departure_time") != m.end() && !m["departure_time"].empty()) {
      departureTime = make_shared<string>(boost::any_cast<string>(m["departure_time"]));
    }
    if (m.find("equip_type") != m.end() && !m["equip_type"].empty()) {
      equipType = make_shared<string>(boost::any_cast<string>(m["equip_type"]));
    }
    if (m.find("flight_duration") != m.end() && !m["flight_duration"].empty()) {
      flightDuration = make_shared<long>(boost::any_cast<long>(m["flight_duration"]));
    }
    if (m.find("marketing_airline") != m.end() && !m["marketing_airline"].empty()) {
      marketingAirline = make_shared<string>(boost::any_cast<string>(m["marketing_airline"]));
    }
    if (m.find("marketing_flight_no") != m.end() && !m["marketing_flight_no"].empty()) {
      marketingFlightNo = make_shared<string>(boost::any_cast<string>(m["marketing_flight_no"]));
    }
    if (m.find("marketing_flight_no_int") != m.end() && !m["marketing_flight_no_int"].empty()) {
      marketingFlightNoInt = make_shared<long>(boost::any_cast<long>(m["marketing_flight_no_int"]));
    }
    if (m.find("operating_airline") != m.end() && !m["operating_airline"].empty()) {
      operatingAirline = make_shared<string>(boost::any_cast<string>(m["operating_airline"]));
    }
    if (m.find("operating_flight_no") != m.end() && !m["operating_flight_no"].empty()) {
      operatingFlightNo = make_shared<string>(boost::any_cast<string>(m["operating_flight_no"]));
    }
    if (m.find("segment_id") != m.end() && !m["segment_id"].empty()) {
      segmentId = make_shared<string>(boost::any_cast<string>(m["segment_id"]));
    }
    if (m.find("stop_city_list") != m.end() && !m["stop_city_list"].empty()) {
      stopCityList = make_shared<string>(boost::any_cast<string>(m["stop_city_list"]));
    }
    if (m.find("stop_quantity") != m.end() && !m["stop_quantity"].empty()) {
      stopQuantity = make_shared<long>(boost::any_cast<long>(m["stop_quantity"]));
    }
  }


  virtual ~ChangeDetailListOfOrderNumResponseBodyDataListLastJourneysSegmentList() = default;
};
class ChangeDetailListOfOrderNumResponseBodyDataListLastJourneys : public Darabonba::Model {
public:
  shared_ptr<vector<ChangeDetailListOfOrderNumResponseBodyDataListLastJourneysSegmentList>> segmentList{};
  shared_ptr<long> transferCount{};

  ChangeDetailListOfOrderNumResponseBodyDataListLastJourneys() {}

  explicit ChangeDetailListOfOrderNumResponseBodyDataListLastJourneys(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (segmentList) {
      vector<boost::any> temp1;
      for(auto item1:*segmentList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["segment_list"] = boost::any(temp1);
    }
    if (transferCount) {
      res["transfer_count"] = boost::any(*transferCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("segment_list") != m.end() && !m["segment_list"].empty()) {
      if (typeid(vector<boost::any>) == m["segment_list"].type()) {
        vector<ChangeDetailListOfOrderNumResponseBodyDataListLastJourneysSegmentList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["segment_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ChangeDetailListOfOrderNumResponseBodyDataListLastJourneysSegmentList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        segmentList = make_shared<vector<ChangeDetailListOfOrderNumResponseBodyDataListLastJourneysSegmentList>>(expect1);
      }
    }
    if (m.find("transfer_count") != m.end() && !m["transfer_count"].empty()) {
      transferCount = make_shared<long>(boost::any_cast<long>(m["transfer_count"]));
    }
  }


  virtual ~ChangeDetailListOfOrderNumResponseBodyDataListLastJourneys() = default;
};
class ChangeDetailListOfOrderNumResponseBodyDataListOriginalJourneysSegmentList : public Darabonba::Model {
public:
  shared_ptr<string> arrivalAirport{};
  shared_ptr<string> arrivalCity{};
  shared_ptr<string> arrivalTerminal{};
  shared_ptr<string> arrivalTime{};
  shared_ptr<string> availability{};
  shared_ptr<string> cabin{};
  shared_ptr<string> cabinClass{};
  shared_ptr<bool> codeShare{};
  shared_ptr<string> departureAirport{};
  shared_ptr<string> departureCity{};
  shared_ptr<string> departureTerminal{};
  shared_ptr<string> departureTime{};
  shared_ptr<string> equipType{};
  shared_ptr<long> flightDuration{};
  shared_ptr<string> marketingAirline{};
  shared_ptr<string> marketingFlightNo{};
  shared_ptr<long> marketingFlightNoInt{};
  shared_ptr<string> operatingAirline{};
  shared_ptr<string> operatingFlightNo{};
  shared_ptr<string> segmentId{};
  shared_ptr<string> stopCityList{};
  shared_ptr<long> stopQuantity{};

  ChangeDetailListOfOrderNumResponseBodyDataListOriginalJourneysSegmentList() {}

  explicit ChangeDetailListOfOrderNumResponseBodyDataListOriginalJourneysSegmentList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arrivalAirport) {
      res["arrival_airport"] = boost::any(*arrivalAirport);
    }
    if (arrivalCity) {
      res["arrival_city"] = boost::any(*arrivalCity);
    }
    if (arrivalTerminal) {
      res["arrival_terminal"] = boost::any(*arrivalTerminal);
    }
    if (arrivalTime) {
      res["arrival_time"] = boost::any(*arrivalTime);
    }
    if (availability) {
      res["availability"] = boost::any(*availability);
    }
    if (cabin) {
      res["cabin"] = boost::any(*cabin);
    }
    if (cabinClass) {
      res["cabin_class"] = boost::any(*cabinClass);
    }
    if (codeShare) {
      res["code_share"] = boost::any(*codeShare);
    }
    if (departureAirport) {
      res["departure_airport"] = boost::any(*departureAirport);
    }
    if (departureCity) {
      res["departure_city"] = boost::any(*departureCity);
    }
    if (departureTerminal) {
      res["departure_terminal"] = boost::any(*departureTerminal);
    }
    if (departureTime) {
      res["departure_time"] = boost::any(*departureTime);
    }
    if (equipType) {
      res["equip_type"] = boost::any(*equipType);
    }
    if (flightDuration) {
      res["flight_duration"] = boost::any(*flightDuration);
    }
    if (marketingAirline) {
      res["marketing_airline"] = boost::any(*marketingAirline);
    }
    if (marketingFlightNo) {
      res["marketing_flight_no"] = boost::any(*marketingFlightNo);
    }
    if (marketingFlightNoInt) {
      res["marketing_flight_no_int"] = boost::any(*marketingFlightNoInt);
    }
    if (operatingAirline) {
      res["operating_airline"] = boost::any(*operatingAirline);
    }
    if (operatingFlightNo) {
      res["operating_flight_no"] = boost::any(*operatingFlightNo);
    }
    if (segmentId) {
      res["segment_id"] = boost::any(*segmentId);
    }
    if (stopCityList) {
      res["stop_city_list"] = boost::any(*stopCityList);
    }
    if (stopQuantity) {
      res["stop_quantity"] = boost::any(*stopQuantity);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("arrival_airport") != m.end() && !m["arrival_airport"].empty()) {
      arrivalAirport = make_shared<string>(boost::any_cast<string>(m["arrival_airport"]));
    }
    if (m.find("arrival_city") != m.end() && !m["arrival_city"].empty()) {
      arrivalCity = make_shared<string>(boost::any_cast<string>(m["arrival_city"]));
    }
    if (m.find("arrival_terminal") != m.end() && !m["arrival_terminal"].empty()) {
      arrivalTerminal = make_shared<string>(boost::any_cast<string>(m["arrival_terminal"]));
    }
    if (m.find("arrival_time") != m.end() && !m["arrival_time"].empty()) {
      arrivalTime = make_shared<string>(boost::any_cast<string>(m["arrival_time"]));
    }
    if (m.find("availability") != m.end() && !m["availability"].empty()) {
      availability = make_shared<string>(boost::any_cast<string>(m["availability"]));
    }
    if (m.find("cabin") != m.end() && !m["cabin"].empty()) {
      cabin = make_shared<string>(boost::any_cast<string>(m["cabin"]));
    }
    if (m.find("cabin_class") != m.end() && !m["cabin_class"].empty()) {
      cabinClass = make_shared<string>(boost::any_cast<string>(m["cabin_class"]));
    }
    if (m.find("code_share") != m.end() && !m["code_share"].empty()) {
      codeShare = make_shared<bool>(boost::any_cast<bool>(m["code_share"]));
    }
    if (m.find("departure_airport") != m.end() && !m["departure_airport"].empty()) {
      departureAirport = make_shared<string>(boost::any_cast<string>(m["departure_airport"]));
    }
    if (m.find("departure_city") != m.end() && !m["departure_city"].empty()) {
      departureCity = make_shared<string>(boost::any_cast<string>(m["departure_city"]));
    }
    if (m.find("departure_terminal") != m.end() && !m["departure_terminal"].empty()) {
      departureTerminal = make_shared<string>(boost::any_cast<string>(m["departure_terminal"]));
    }
    if (m.find("departure_time") != m.end() && !m["departure_time"].empty()) {
      departureTime = make_shared<string>(boost::any_cast<string>(m["departure_time"]));
    }
    if (m.find("equip_type") != m.end() && !m["equip_type"].empty()) {
      equipType = make_shared<string>(boost::any_cast<string>(m["equip_type"]));
    }
    if (m.find("flight_duration") != m.end() && !m["flight_duration"].empty()) {
      flightDuration = make_shared<long>(boost::any_cast<long>(m["flight_duration"]));
    }
    if (m.find("marketing_airline") != m.end() && !m["marketing_airline"].empty()) {
      marketingAirline = make_shared<string>(boost::any_cast<string>(m["marketing_airline"]));
    }
    if (m.find("marketing_flight_no") != m.end() && !m["marketing_flight_no"].empty()) {
      marketingFlightNo = make_shared<string>(boost::any_cast<string>(m["marketing_flight_no"]));
    }
    if (m.find("marketing_flight_no_int") != m.end() && !m["marketing_flight_no_int"].empty()) {
      marketingFlightNoInt = make_shared<long>(boost::any_cast<long>(m["marketing_flight_no_int"]));
    }
    if (m.find("operating_airline") != m.end() && !m["operating_airline"].empty()) {
      operatingAirline = make_shared<string>(boost::any_cast<string>(m["operating_airline"]));
    }
    if (m.find("operating_flight_no") != m.end() && !m["operating_flight_no"].empty()) {
      operatingFlightNo = make_shared<string>(boost::any_cast<string>(m["operating_flight_no"]));
    }
    if (m.find("segment_id") != m.end() && !m["segment_id"].empty()) {
      segmentId = make_shared<string>(boost::any_cast<string>(m["segment_id"]));
    }
    if (m.find("stop_city_list") != m.end() && !m["stop_city_list"].empty()) {
      stopCityList = make_shared<string>(boost::any_cast<string>(m["stop_city_list"]));
    }
    if (m.find("stop_quantity") != m.end() && !m["stop_quantity"].empty()) {
      stopQuantity = make_shared<long>(boost::any_cast<long>(m["stop_quantity"]));
    }
  }


  virtual ~ChangeDetailListOfOrderNumResponseBodyDataListOriginalJourneysSegmentList() = default;
};
class ChangeDetailListOfOrderNumResponseBodyDataListOriginalJourneys : public Darabonba::Model {
public:
  shared_ptr<vector<ChangeDetailListOfOrderNumResponseBodyDataListOriginalJourneysSegmentList>> segmentList{};
  shared_ptr<long> transferCount{};

  ChangeDetailListOfOrderNumResponseBodyDataListOriginalJourneys() {}

  explicit ChangeDetailListOfOrderNumResponseBodyDataListOriginalJourneys(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (segmentList) {
      vector<boost::any> temp1;
      for(auto item1:*segmentList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["segment_list"] = boost::any(temp1);
    }
    if (transferCount) {
      res["transfer_count"] = boost::any(*transferCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("segment_list") != m.end() && !m["segment_list"].empty()) {
      if (typeid(vector<boost::any>) == m["segment_list"].type()) {
        vector<ChangeDetailListOfOrderNumResponseBodyDataListOriginalJourneysSegmentList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["segment_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ChangeDetailListOfOrderNumResponseBodyDataListOriginalJourneysSegmentList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        segmentList = make_shared<vector<ChangeDetailListOfOrderNumResponseBodyDataListOriginalJourneysSegmentList>>(expect1);
      }
    }
    if (m.find("transfer_count") != m.end() && !m["transfer_count"].empty()) {
      transferCount = make_shared<long>(boost::any_cast<long>(m["transfer_count"]));
    }
  }


  virtual ~ChangeDetailListOfOrderNumResponseBodyDataListOriginalJourneys() = default;
};
class ChangeDetailListOfOrderNumResponseBodyDataList : public Darabonba::Model {
public:
  shared_ptr<vector<ChangeDetailListOfOrderNumResponseBodyDataListChangeFeeDetails>> changeFeeDetails{};
  shared_ptr<long> changeOrderNum{};
  shared_ptr<vector<ChangeDetailListOfOrderNumResponseBodyDataListChangePassengers>> changePassengers{};
  shared_ptr<long> changeReasonType{};
  shared_ptr<vector<ChangeDetailListOfOrderNumResponseBodyDataListChangedJourneys>> changedJourneys{};
  shared_ptr<string> closeReason{};
  shared_ptr<long> closeUtcTime{};
  shared_ptr<ChangeDetailListOfOrderNumResponseBodyDataListContact> contact{};
  shared_ptr<long> createUtcTime{};
  shared_ptr<long> lastConfirmUtcTime{};
  shared_ptr<vector<ChangeDetailListOfOrderNumResponseBodyDataListLastJourneys>> lastJourneys{};
  shared_ptr<long> orderNum{};
  shared_ptr<long> orderStatus{};
  shared_ptr<vector<ChangeDetailListOfOrderNumResponseBodyDataListOriginalJourneys>> originalJourneys{};
  shared_ptr<long> payStatus{};
  shared_ptr<long> paySuccessUtcTime{};
  shared_ptr<double> totalAmount{};
  shared_ptr<string> transactionNo{};

  ChangeDetailListOfOrderNumResponseBodyDataList() {}

  explicit ChangeDetailListOfOrderNumResponseBodyDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (changeFeeDetails) {
      vector<boost::any> temp1;
      for(auto item1:*changeFeeDetails){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["change_fee_details"] = boost::any(temp1);
    }
    if (changeOrderNum) {
      res["change_order_num"] = boost::any(*changeOrderNum);
    }
    if (changePassengers) {
      vector<boost::any> temp1;
      for(auto item1:*changePassengers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["change_passengers"] = boost::any(temp1);
    }
    if (changeReasonType) {
      res["change_reason_type"] = boost::any(*changeReasonType);
    }
    if (changedJourneys) {
      vector<boost::any> temp1;
      for(auto item1:*changedJourneys){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["changed_journeys"] = boost::any(temp1);
    }
    if (closeReason) {
      res["close_reason"] = boost::any(*closeReason);
    }
    if (closeUtcTime) {
      res["close_utc_time"] = boost::any(*closeUtcTime);
    }
    if (contact) {
      res["contact"] = contact ? boost::any(contact->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (createUtcTime) {
      res["create_utc_time"] = boost::any(*createUtcTime);
    }
    if (lastConfirmUtcTime) {
      res["last_confirm_utc_time"] = boost::any(*lastConfirmUtcTime);
    }
    if (lastJourneys) {
      vector<boost::any> temp1;
      for(auto item1:*lastJourneys){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["last_journeys"] = boost::any(temp1);
    }
    if (orderNum) {
      res["order_num"] = boost::any(*orderNum);
    }
    if (orderStatus) {
      res["order_status"] = boost::any(*orderStatus);
    }
    if (originalJourneys) {
      vector<boost::any> temp1;
      for(auto item1:*originalJourneys){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["original_journeys"] = boost::any(temp1);
    }
    if (payStatus) {
      res["pay_status"] = boost::any(*payStatus);
    }
    if (paySuccessUtcTime) {
      res["pay_success_utc_time"] = boost::any(*paySuccessUtcTime);
    }
    if (totalAmount) {
      res["total_amount"] = boost::any(*totalAmount);
    }
    if (transactionNo) {
      res["transaction_no"] = boost::any(*transactionNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("change_fee_details") != m.end() && !m["change_fee_details"].empty()) {
      if (typeid(vector<boost::any>) == m["change_fee_details"].type()) {
        vector<ChangeDetailListOfOrderNumResponseBodyDataListChangeFeeDetails> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["change_fee_details"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ChangeDetailListOfOrderNumResponseBodyDataListChangeFeeDetails model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        changeFeeDetails = make_shared<vector<ChangeDetailListOfOrderNumResponseBodyDataListChangeFeeDetails>>(expect1);
      }
    }
    if (m.find("change_order_num") != m.end() && !m["change_order_num"].empty()) {
      changeOrderNum = make_shared<long>(boost::any_cast<long>(m["change_order_num"]));
    }
    if (m.find("change_passengers") != m.end() && !m["change_passengers"].empty()) {
      if (typeid(vector<boost::any>) == m["change_passengers"].type()) {
        vector<ChangeDetailListOfOrderNumResponseBodyDataListChangePassengers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["change_passengers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ChangeDetailListOfOrderNumResponseBodyDataListChangePassengers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        changePassengers = make_shared<vector<ChangeDetailListOfOrderNumResponseBodyDataListChangePassengers>>(expect1);
      }
    }
    if (m.find("change_reason_type") != m.end() && !m["change_reason_type"].empty()) {
      changeReasonType = make_shared<long>(boost::any_cast<long>(m["change_reason_type"]));
    }
    if (m.find("changed_journeys") != m.end() && !m["changed_journeys"].empty()) {
      if (typeid(vector<boost::any>) == m["changed_journeys"].type()) {
        vector<ChangeDetailListOfOrderNumResponseBodyDataListChangedJourneys> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["changed_journeys"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ChangeDetailListOfOrderNumResponseBodyDataListChangedJourneys model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        changedJourneys = make_shared<vector<ChangeDetailListOfOrderNumResponseBodyDataListChangedJourneys>>(expect1);
      }
    }
    if (m.find("close_reason") != m.end() && !m["close_reason"].empty()) {
      closeReason = make_shared<string>(boost::any_cast<string>(m["close_reason"]));
    }
    if (m.find("close_utc_time") != m.end() && !m["close_utc_time"].empty()) {
      closeUtcTime = make_shared<long>(boost::any_cast<long>(m["close_utc_time"]));
    }
    if (m.find("contact") != m.end() && !m["contact"].empty()) {
      if (typeid(map<string, boost::any>) == m["contact"].type()) {
        ChangeDetailListOfOrderNumResponseBodyDataListContact model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["contact"]));
        contact = make_shared<ChangeDetailListOfOrderNumResponseBodyDataListContact>(model1);
      }
    }
    if (m.find("create_utc_time") != m.end() && !m["create_utc_time"].empty()) {
      createUtcTime = make_shared<long>(boost::any_cast<long>(m["create_utc_time"]));
    }
    if (m.find("last_confirm_utc_time") != m.end() && !m["last_confirm_utc_time"].empty()) {
      lastConfirmUtcTime = make_shared<long>(boost::any_cast<long>(m["last_confirm_utc_time"]));
    }
    if (m.find("last_journeys") != m.end() && !m["last_journeys"].empty()) {
      if (typeid(vector<boost::any>) == m["last_journeys"].type()) {
        vector<ChangeDetailListOfOrderNumResponseBodyDataListLastJourneys> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["last_journeys"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ChangeDetailListOfOrderNumResponseBodyDataListLastJourneys model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        lastJourneys = make_shared<vector<ChangeDetailListOfOrderNumResponseBodyDataListLastJourneys>>(expect1);
      }
    }
    if (m.find("order_num") != m.end() && !m["order_num"].empty()) {
      orderNum = make_shared<long>(boost::any_cast<long>(m["order_num"]));
    }
    if (m.find("order_status") != m.end() && !m["order_status"].empty()) {
      orderStatus = make_shared<long>(boost::any_cast<long>(m["order_status"]));
    }
    if (m.find("original_journeys") != m.end() && !m["original_journeys"].empty()) {
      if (typeid(vector<boost::any>) == m["original_journeys"].type()) {
        vector<ChangeDetailListOfOrderNumResponseBodyDataListOriginalJourneys> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["original_journeys"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ChangeDetailListOfOrderNumResponseBodyDataListOriginalJourneys model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        originalJourneys = make_shared<vector<ChangeDetailListOfOrderNumResponseBodyDataListOriginalJourneys>>(expect1);
      }
    }
    if (m.find("pay_status") != m.end() && !m["pay_status"].empty()) {
      payStatus = make_shared<long>(boost::any_cast<long>(m["pay_status"]));
    }
    if (m.find("pay_success_utc_time") != m.end() && !m["pay_success_utc_time"].empty()) {
      paySuccessUtcTime = make_shared<long>(boost::any_cast<long>(m["pay_success_utc_time"]));
    }
    if (m.find("total_amount") != m.end() && !m["total_amount"].empty()) {
      totalAmount = make_shared<double>(boost::any_cast<double>(m["total_amount"]));
    }
    if (m.find("transaction_no") != m.end() && !m["transaction_no"].empty()) {
      transactionNo = make_shared<string>(boost::any_cast<string>(m["transaction_no"]));
    }
  }


  virtual ~ChangeDetailListOfOrderNumResponseBodyDataList() = default;
};
class ChangeDetailListOfOrderNumResponseBodyDataPagination : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};
  shared_ptr<long> totalPage{};

  ChangeDetailListOfOrderNumResponseBodyDataPagination() {}

  explicit ChangeDetailListOfOrderNumResponseBodyDataPagination(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["current_page"] = boost::any(*currentPage);
    }
    if (pageSize) {
      res["page_size"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["total_count"] = boost::any(*totalCount);
    }
    if (totalPage) {
      res["total_page"] = boost::any(*totalPage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("current_page") != m.end() && !m["current_page"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["current_page"]));
    }
    if (m.find("page_size") != m.end() && !m["page_size"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["page_size"]));
    }
    if (m.find("total_count") != m.end() && !m["total_count"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["total_count"]));
    }
    if (m.find("total_page") != m.end() && !m["total_page"].empty()) {
      totalPage = make_shared<long>(boost::any_cast<long>(m["total_page"]));
    }
  }


  virtual ~ChangeDetailListOfOrderNumResponseBodyDataPagination() = default;
};
class ChangeDetailListOfOrderNumResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ChangeDetailListOfOrderNumResponseBodyDataList>> list{};
  shared_ptr<ChangeDetailListOfOrderNumResponseBodyDataPagination> pagination{};

  ChangeDetailListOfOrderNumResponseBodyData() {}

  explicit ChangeDetailListOfOrderNumResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["list"] = boost::any(temp1);
    }
    if (pagination) {
      res["pagination"] = pagination ? boost::any(pagination->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("list") != m.end() && !m["list"].empty()) {
      if (typeid(vector<boost::any>) == m["list"].type()) {
        vector<ChangeDetailListOfOrderNumResponseBodyDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ChangeDetailListOfOrderNumResponseBodyDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<ChangeDetailListOfOrderNumResponseBodyDataList>>(expect1);
      }
    }
    if (m.find("pagination") != m.end() && !m["pagination"].empty()) {
      if (typeid(map<string, boost::any>) == m["pagination"].type()) {
        ChangeDetailListOfOrderNumResponseBodyDataPagination model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["pagination"]));
        pagination = make_shared<ChangeDetailListOfOrderNumResponseBodyDataPagination>(model1);
      }
    }
  }


  virtual ~ChangeDetailListOfOrderNumResponseBodyData() = default;
};
class ChangeDetailListOfOrderNumResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ChangeDetailListOfOrderNumResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<boost::any> errorData{};
  shared_ptr<string> errorMsg{};
  shared_ptr<long> status{};
  shared_ptr<bool> success{};

  ChangeDetailListOfOrderNumResponseBody() {}

  explicit ChangeDetailListOfOrderNumResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["error_code"] = boost::any(*errorCode);
    }
    if (errorData) {
      res["error_data"] = boost::any(*errorData);
    }
    if (errorMsg) {
      res["error_msg"] = boost::any(*errorMsg);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        ChangeDetailListOfOrderNumResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ChangeDetailListOfOrderNumResponseBodyData>(model1);
      }
    }
    if (m.find("error_code") != m.end() && !m["error_code"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["error_code"]));
    }
    if (m.find("error_data") != m.end() && !m["error_data"].empty()) {
      errorData = make_shared<boost::any>(boost::any_cast<boost::any>(m["error_data"]));
    }
    if (m.find("error_msg") != m.end() && !m["error_msg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["error_msg"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~ChangeDetailListOfOrderNumResponseBody() = default;
};
class ChangeDetailListOfOrderNumResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ChangeDetailListOfOrderNumResponseBody> body{};

  ChangeDetailListOfOrderNumResponse() {}

  explicit ChangeDetailListOfOrderNumResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ChangeDetailListOfOrderNumResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ChangeDetailListOfOrderNumResponseBody>(model1);
      }
    }
  }


  virtual ~ChangeDetailListOfOrderNumResponse() = default;
};
class CollectFlightLowestPriceHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAirticketAccessToken{};
  shared_ptr<string> xAcsAirticketLanguage{};

  CollectFlightLowestPriceHeaders() {}

  explicit CollectFlightLowestPriceHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAirticketAccessToken) {
      res["x-acs-airticket-access-token"] = boost::any(*xAcsAirticketAccessToken);
    }
    if (xAcsAirticketLanguage) {
      res["x-acs-airticket-language"] = boost::any(*xAcsAirticketLanguage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("x-acs-airticket-access-token") != m.end() && !m["x-acs-airticket-access-token"].empty()) {
      xAcsAirticketAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-airticket-access-token"]));
    }
    if (m.find("x-acs-airticket-language") != m.end() && !m["x-acs-airticket-language"].empty()) {
      xAcsAirticketLanguage = make_shared<string>(boost::any_cast<string>(m["x-acs-airticket-language"]));
    }
  }


  virtual ~CollectFlightLowestPriceHeaders() = default;
};
class CollectFlightLowestPriceRequestLowestPriceFlightInfoList : public Darabonba::Model {
public:
  shared_ptr<string> arrivalCity{};
  shared_ptr<string> departureCity{};
  shared_ptr<string> departureDate{};
  shared_ptr<string> departureFlightNumber{};
  shared_ptr<double> marketTotalPrice{};
  shared_ptr<string> requestId{};
  shared_ptr<string> returnDate{};
  shared_ptr<string> returnFlightNumber{};
  shared_ptr<string> solutionId{};
  shared_ptr<double> suezTotalPrice{};
  shared_ptr<long> tripType{};

  CollectFlightLowestPriceRequestLowestPriceFlightInfoList() {}

  explicit CollectFlightLowestPriceRequestLowestPriceFlightInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arrivalCity) {
      res["arrival_city"] = boost::any(*arrivalCity);
    }
    if (departureCity) {
      res["departure_city"] = boost::any(*departureCity);
    }
    if (departureDate) {
      res["departure_date"] = boost::any(*departureDate);
    }
    if (departureFlightNumber) {
      res["departure_flight_number"] = boost::any(*departureFlightNumber);
    }
    if (marketTotalPrice) {
      res["market_total_price"] = boost::any(*marketTotalPrice);
    }
    if (requestId) {
      res["request_id"] = boost::any(*requestId);
    }
    if (returnDate) {
      res["return_date"] = boost::any(*returnDate);
    }
    if (returnFlightNumber) {
      res["return_flight_number"] = boost::any(*returnFlightNumber);
    }
    if (solutionId) {
      res["solution_id"] = boost::any(*solutionId);
    }
    if (suezTotalPrice) {
      res["suez_total_price"] = boost::any(*suezTotalPrice);
    }
    if (tripType) {
      res["trip_type"] = boost::any(*tripType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("arrival_city") != m.end() && !m["arrival_city"].empty()) {
      arrivalCity = make_shared<string>(boost::any_cast<string>(m["arrival_city"]));
    }
    if (m.find("departure_city") != m.end() && !m["departure_city"].empty()) {
      departureCity = make_shared<string>(boost::any_cast<string>(m["departure_city"]));
    }
    if (m.find("departure_date") != m.end() && !m["departure_date"].empty()) {
      departureDate = make_shared<string>(boost::any_cast<string>(m["departure_date"]));
    }
    if (m.find("departure_flight_number") != m.end() && !m["departure_flight_number"].empty()) {
      departureFlightNumber = make_shared<string>(boost::any_cast<string>(m["departure_flight_number"]));
    }
    if (m.find("market_total_price") != m.end() && !m["market_total_price"].empty()) {
      marketTotalPrice = make_shared<double>(boost::any_cast<double>(m["market_total_price"]));
    }
    if (m.find("request_id") != m.end() && !m["request_id"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["request_id"]));
    }
    if (m.find("return_date") != m.end() && !m["return_date"].empty()) {
      returnDate = make_shared<string>(boost::any_cast<string>(m["return_date"]));
    }
    if (m.find("return_flight_number") != m.end() && !m["return_flight_number"].empty()) {
      returnFlightNumber = make_shared<string>(boost::any_cast<string>(m["return_flight_number"]));
    }
    if (m.find("solution_id") != m.end() && !m["solution_id"].empty()) {
      solutionId = make_shared<string>(boost::any_cast<string>(m["solution_id"]));
    }
    if (m.find("suez_total_price") != m.end() && !m["suez_total_price"].empty()) {
      suezTotalPrice = make_shared<double>(boost::any_cast<double>(m["suez_total_price"]));
    }
    if (m.find("trip_type") != m.end() && !m["trip_type"].empty()) {
      tripType = make_shared<long>(boost::any_cast<long>(m["trip_type"]));
    }
  }


  virtual ~CollectFlightLowestPriceRequestLowestPriceFlightInfoList() = default;
};
class CollectFlightLowestPriceRequest : public Darabonba::Model {
public:
  shared_ptr<vector<CollectFlightLowestPriceRequestLowestPriceFlightInfoList>> lowestPriceFlightInfoList{};

  CollectFlightLowestPriceRequest() {}

  explicit CollectFlightLowestPriceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lowestPriceFlightInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*lowestPriceFlightInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["lowest_price_flight_info_list"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("lowest_price_flight_info_list") != m.end() && !m["lowest_price_flight_info_list"].empty()) {
      if (typeid(vector<boost::any>) == m["lowest_price_flight_info_list"].type()) {
        vector<CollectFlightLowestPriceRequestLowestPriceFlightInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["lowest_price_flight_info_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CollectFlightLowestPriceRequestLowestPriceFlightInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        lowestPriceFlightInfoList = make_shared<vector<CollectFlightLowestPriceRequestLowestPriceFlightInfoList>>(expect1);
      }
    }
  }


  virtual ~CollectFlightLowestPriceRequest() = default;
};
class CollectFlightLowestPriceShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> lowestPriceFlightInfoListShrink{};

  CollectFlightLowestPriceShrinkRequest() {}

  explicit CollectFlightLowestPriceShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lowestPriceFlightInfoListShrink) {
      res["lowest_price_flight_info_list"] = boost::any(*lowestPriceFlightInfoListShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("lowest_price_flight_info_list") != m.end() && !m["lowest_price_flight_info_list"].empty()) {
      lowestPriceFlightInfoListShrink = make_shared<string>(boost::any_cast<string>(m["lowest_price_flight_info_list"]));
    }
  }


  virtual ~CollectFlightLowestPriceShrinkRequest() = default;
};
class CollectFlightLowestPriceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<boost::any> errorData{};
  shared_ptr<string> errorMsg{};
  shared_ptr<long> status{};
  shared_ptr<bool> success{};

  CollectFlightLowestPriceResponseBody() {}

  explicit CollectFlightLowestPriceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (errorCode) {
      res["error_code"] = boost::any(*errorCode);
    }
    if (errorData) {
      res["error_data"] = boost::any(*errorData);
    }
    if (errorMsg) {
      res["error_msg"] = boost::any(*errorMsg);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["data"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      data = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("error_code") != m.end() && !m["error_code"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["error_code"]));
    }
    if (m.find("error_data") != m.end() && !m["error_data"].empty()) {
      errorData = make_shared<boost::any>(boost::any_cast<boost::any>(m["error_data"]));
    }
    if (m.find("error_msg") != m.end() && !m["error_msg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["error_msg"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~CollectFlightLowestPriceResponseBody() = default;
};
class CollectFlightLowestPriceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CollectFlightLowestPriceResponseBody> body{};

  CollectFlightLowestPriceResponse() {}

  explicit CollectFlightLowestPriceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CollectFlightLowestPriceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CollectFlightLowestPriceResponseBody>(model1);
      }
    }
  }


  virtual ~CollectFlightLowestPriceResponse() = default;
};
class EnrichHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAirticketAccessToken{};
  shared_ptr<string> xAcsAirticketLanguage{};

  EnrichHeaders() {}

  explicit EnrichHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAirticketAccessToken) {
      res["x-acs-airticket-access-token"] = boost::any(*xAcsAirticketAccessToken);
    }
    if (xAcsAirticketLanguage) {
      res["x-acs-airticket-language"] = boost::any(*xAcsAirticketLanguage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("x-acs-airticket-access-token") != m.end() && !m["x-acs-airticket-access-token"].empty()) {
      xAcsAirticketAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-airticket-access-token"]));
    }
    if (m.find("x-acs-airticket-language") != m.end() && !m["x-acs-airticket-language"].empty()) {
      xAcsAirticketLanguage = make_shared<string>(boost::any_cast<string>(m["x-acs-airticket-language"]));
    }
  }


  virtual ~EnrichHeaders() = default;
};
class EnrichRequestJourneyParamListSegmentParamList : public Darabonba::Model {
public:
  shared_ptr<string> arrivalAirport{};
  shared_ptr<string> arrivalCity{};
  shared_ptr<string> cabin{};
  shared_ptr<string> childCabin{};
  shared_ptr<string> departureAirport{};
  shared_ptr<string> departureCity{};
  shared_ptr<string> departureTime{};
  shared_ptr<string> marketingFlightNo{};

  EnrichRequestJourneyParamListSegmentParamList() {}

  explicit EnrichRequestJourneyParamListSegmentParamList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arrivalAirport) {
      res["arrival_airport"] = boost::any(*arrivalAirport);
    }
    if (arrivalCity) {
      res["arrival_city"] = boost::any(*arrivalCity);
    }
    if (cabin) {
      res["cabin"] = boost::any(*cabin);
    }
    if (childCabin) {
      res["child_cabin"] = boost::any(*childCabin);
    }
    if (departureAirport) {
      res["departure_airport"] = boost::any(*departureAirport);
    }
    if (departureCity) {
      res["departure_city"] = boost::any(*departureCity);
    }
    if (departureTime) {
      res["departure_time"] = boost::any(*departureTime);
    }
    if (marketingFlightNo) {
      res["marketing_flight_no"] = boost::any(*marketingFlightNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("arrival_airport") != m.end() && !m["arrival_airport"].empty()) {
      arrivalAirport = make_shared<string>(boost::any_cast<string>(m["arrival_airport"]));
    }
    if (m.find("arrival_city") != m.end() && !m["arrival_city"].empty()) {
      arrivalCity = make_shared<string>(boost::any_cast<string>(m["arrival_city"]));
    }
    if (m.find("cabin") != m.end() && !m["cabin"].empty()) {
      cabin = make_shared<string>(boost::any_cast<string>(m["cabin"]));
    }
    if (m.find("child_cabin") != m.end() && !m["child_cabin"].empty()) {
      childCabin = make_shared<string>(boost::any_cast<string>(m["child_cabin"]));
    }
    if (m.find("departure_airport") != m.end() && !m["departure_airport"].empty()) {
      departureAirport = make_shared<string>(boost::any_cast<string>(m["departure_airport"]));
    }
    if (m.find("departure_city") != m.end() && !m["departure_city"].empty()) {
      departureCity = make_shared<string>(boost::any_cast<string>(m["departure_city"]));
    }
    if (m.find("departure_time") != m.end() && !m["departure_time"].empty()) {
      departureTime = make_shared<string>(boost::any_cast<string>(m["departure_time"]));
    }
    if (m.find("marketing_flight_no") != m.end() && !m["marketing_flight_no"].empty()) {
      marketingFlightNo = make_shared<string>(boost::any_cast<string>(m["marketing_flight_no"]));
    }
  }


  virtual ~EnrichRequestJourneyParamListSegmentParamList() = default;
};
class EnrichRequestJourneyParamList : public Darabonba::Model {
public:
  shared_ptr<string> arrivalCity{};
  shared_ptr<string> departureCity{};
  shared_ptr<string> departureDate{};
  shared_ptr<vector<EnrichRequestJourneyParamListSegmentParamList>> segmentParamList{};

  EnrichRequestJourneyParamList() {}

  explicit EnrichRequestJourneyParamList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arrivalCity) {
      res["arrival_city"] = boost::any(*arrivalCity);
    }
    if (departureCity) {
      res["departure_city"] = boost::any(*departureCity);
    }
    if (departureDate) {
      res["departure_date"] = boost::any(*departureDate);
    }
    if (segmentParamList) {
      vector<boost::any> temp1;
      for(auto item1:*segmentParamList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["segment_param_list"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("arrival_city") != m.end() && !m["arrival_city"].empty()) {
      arrivalCity = make_shared<string>(boost::any_cast<string>(m["arrival_city"]));
    }
    if (m.find("departure_city") != m.end() && !m["departure_city"].empty()) {
      departureCity = make_shared<string>(boost::any_cast<string>(m["departure_city"]));
    }
    if (m.find("departure_date") != m.end() && !m["departure_date"].empty()) {
      departureDate = make_shared<string>(boost::any_cast<string>(m["departure_date"]));
    }
    if (m.find("segment_param_list") != m.end() && !m["segment_param_list"].empty()) {
      if (typeid(vector<boost::any>) == m["segment_param_list"].type()) {
        vector<EnrichRequestJourneyParamListSegmentParamList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["segment_param_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            EnrichRequestJourneyParamListSegmentParamList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        segmentParamList = make_shared<vector<EnrichRequestJourneyParamListSegmentParamList>>(expect1);
      }
    }
  }


  virtual ~EnrichRequestJourneyParamList() = default;
};
class EnrichRequest : public Darabonba::Model {
public:
  shared_ptr<long> adults{};
  shared_ptr<string> cabinClass{};
  shared_ptr<long> children{};
  shared_ptr<long> infants{};
  shared_ptr<vector<EnrichRequestJourneyParamList>> journeyParamList{};
  shared_ptr<string> solutionId{};

  EnrichRequest() {}

  explicit EnrichRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (adults) {
      res["adults"] = boost::any(*adults);
    }
    if (cabinClass) {
      res["cabin_class"] = boost::any(*cabinClass);
    }
    if (children) {
      res["children"] = boost::any(*children);
    }
    if (infants) {
      res["infants"] = boost::any(*infants);
    }
    if (journeyParamList) {
      vector<boost::any> temp1;
      for(auto item1:*journeyParamList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["journey_param_list"] = boost::any(temp1);
    }
    if (solutionId) {
      res["solution_id"] = boost::any(*solutionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("adults") != m.end() && !m["adults"].empty()) {
      adults = make_shared<long>(boost::any_cast<long>(m["adults"]));
    }
    if (m.find("cabin_class") != m.end() && !m["cabin_class"].empty()) {
      cabinClass = make_shared<string>(boost::any_cast<string>(m["cabin_class"]));
    }
    if (m.find("children") != m.end() && !m["children"].empty()) {
      children = make_shared<long>(boost::any_cast<long>(m["children"]));
    }
    if (m.find("infants") != m.end() && !m["infants"].empty()) {
      infants = make_shared<long>(boost::any_cast<long>(m["infants"]));
    }
    if (m.find("journey_param_list") != m.end() && !m["journey_param_list"].empty()) {
      if (typeid(vector<boost::any>) == m["journey_param_list"].type()) {
        vector<EnrichRequestJourneyParamList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["journey_param_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            EnrichRequestJourneyParamList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        journeyParamList = make_shared<vector<EnrichRequestJourneyParamList>>(expect1);
      }
    }
    if (m.find("solution_id") != m.end() && !m["solution_id"].empty()) {
      solutionId = make_shared<string>(boost::any_cast<string>(m["solution_id"]));
    }
  }


  virtual ~EnrichRequest() = default;
};
class EnrichShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<long> adults{};
  shared_ptr<string> cabinClass{};
  shared_ptr<long> children{};
  shared_ptr<long> infants{};
  shared_ptr<string> journeyParamListShrink{};
  shared_ptr<string> solutionId{};

  EnrichShrinkRequest() {}

  explicit EnrichShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (adults) {
      res["adults"] = boost::any(*adults);
    }
    if (cabinClass) {
      res["cabin_class"] = boost::any(*cabinClass);
    }
    if (children) {
      res["children"] = boost::any(*children);
    }
    if (infants) {
      res["infants"] = boost::any(*infants);
    }
    if (journeyParamListShrink) {
      res["journey_param_list"] = boost::any(*journeyParamListShrink);
    }
    if (solutionId) {
      res["solution_id"] = boost::any(*solutionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("adults") != m.end() && !m["adults"].empty()) {
      adults = make_shared<long>(boost::any_cast<long>(m["adults"]));
    }
    if (m.find("cabin_class") != m.end() && !m["cabin_class"].empty()) {
      cabinClass = make_shared<string>(boost::any_cast<string>(m["cabin_class"]));
    }
    if (m.find("children") != m.end() && !m["children"].empty()) {
      children = make_shared<long>(boost::any_cast<long>(m["children"]));
    }
    if (m.find("infants") != m.end() && !m["infants"].empty()) {
      infants = make_shared<long>(boost::any_cast<long>(m["infants"]));
    }
    if (m.find("journey_param_list") != m.end() && !m["journey_param_list"].empty()) {
      journeyParamListShrink = make_shared<string>(boost::any_cast<string>(m["journey_param_list"]));
    }
    if (m.find("solution_id") != m.end() && !m["solution_id"].empty()) {
      solutionId = make_shared<string>(boost::any_cast<string>(m["solution_id"]));
    }
  }


  virtual ~EnrichShrinkRequest() = default;
};
class EnrichResponseBodyDataSolutionListJourneyListSegmentList : public Darabonba::Model {
public:
  shared_ptr<string> arrivalAirport{};
  shared_ptr<string> arrivalCity{};
  shared_ptr<string> arrivalTerminal{};
  shared_ptr<string> arrivalTime{};
  shared_ptr<string> availability{};
  shared_ptr<string> cabin{};
  shared_ptr<string> cabinClass{};
  shared_ptr<bool> codeShare{};
  shared_ptr<string> departureAirport{};
  shared_ptr<string> departureCity{};
  shared_ptr<string> departureTerminal{};
  shared_ptr<string> departureTime{};
  shared_ptr<string> equipType{};
  shared_ptr<long> flightDuration{};
  shared_ptr<string> marketingAirline{};
  shared_ptr<string> marketingFlightNo{};
  shared_ptr<long> marketingFlightNoInt{};
  shared_ptr<string> operatingAirline{};
  shared_ptr<string> operatingFlightNo{};
  shared_ptr<string> segmentId{};
  shared_ptr<string> stopCityList{};
  shared_ptr<long> stopQuantity{};

  EnrichResponseBodyDataSolutionListJourneyListSegmentList() {}

  explicit EnrichResponseBodyDataSolutionListJourneyListSegmentList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arrivalAirport) {
      res["arrival_airport"] = boost::any(*arrivalAirport);
    }
    if (arrivalCity) {
      res["arrival_city"] = boost::any(*arrivalCity);
    }
    if (arrivalTerminal) {
      res["arrival_terminal"] = boost::any(*arrivalTerminal);
    }
    if (arrivalTime) {
      res["arrival_time"] = boost::any(*arrivalTime);
    }
    if (availability) {
      res["availability"] = boost::any(*availability);
    }
    if (cabin) {
      res["cabin"] = boost::any(*cabin);
    }
    if (cabinClass) {
      res["cabin_class"] = boost::any(*cabinClass);
    }
    if (codeShare) {
      res["code_share"] = boost::any(*codeShare);
    }
    if (departureAirport) {
      res["departure_airport"] = boost::any(*departureAirport);
    }
    if (departureCity) {
      res["departure_city"] = boost::any(*departureCity);
    }
    if (departureTerminal) {
      res["departure_terminal"] = boost::any(*departureTerminal);
    }
    if (departureTime) {
      res["departure_time"] = boost::any(*departureTime);
    }
    if (equipType) {
      res["equip_type"] = boost::any(*equipType);
    }
    if (flightDuration) {
      res["flight_duration"] = boost::any(*flightDuration);
    }
    if (marketingAirline) {
      res["marketing_airline"] = boost::any(*marketingAirline);
    }
    if (marketingFlightNo) {
      res["marketing_flight_no"] = boost::any(*marketingFlightNo);
    }
    if (marketingFlightNoInt) {
      res["marketing_flight_no_int"] = boost::any(*marketingFlightNoInt);
    }
    if (operatingAirline) {
      res["operating_airline"] = boost::any(*operatingAirline);
    }
    if (operatingFlightNo) {
      res["operating_flight_no"] = boost::any(*operatingFlightNo);
    }
    if (segmentId) {
      res["segment_id"] = boost::any(*segmentId);
    }
    if (stopCityList) {
      res["stop_city_list"] = boost::any(*stopCityList);
    }
    if (stopQuantity) {
      res["stop_quantity"] = boost::any(*stopQuantity);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("arrival_airport") != m.end() && !m["arrival_airport"].empty()) {
      arrivalAirport = make_shared<string>(boost::any_cast<string>(m["arrival_airport"]));
    }
    if (m.find("arrival_city") != m.end() && !m["arrival_city"].empty()) {
      arrivalCity = make_shared<string>(boost::any_cast<string>(m["arrival_city"]));
    }
    if (m.find("arrival_terminal") != m.end() && !m["arrival_terminal"].empty()) {
      arrivalTerminal = make_shared<string>(boost::any_cast<string>(m["arrival_terminal"]));
    }
    if (m.find("arrival_time") != m.end() && !m["arrival_time"].empty()) {
      arrivalTime = make_shared<string>(boost::any_cast<string>(m["arrival_time"]));
    }
    if (m.find("availability") != m.end() && !m["availability"].empty()) {
      availability = make_shared<string>(boost::any_cast<string>(m["availability"]));
    }
    if (m.find("cabin") != m.end() && !m["cabin"].empty()) {
      cabin = make_shared<string>(boost::any_cast<string>(m["cabin"]));
    }
    if (m.find("cabin_class") != m.end() && !m["cabin_class"].empty()) {
      cabinClass = make_shared<string>(boost::any_cast<string>(m["cabin_class"]));
    }
    if (m.find("code_share") != m.end() && !m["code_share"].empty()) {
      codeShare = make_shared<bool>(boost::any_cast<bool>(m["code_share"]));
    }
    if (m.find("departure_airport") != m.end() && !m["departure_airport"].empty()) {
      departureAirport = make_shared<string>(boost::any_cast<string>(m["departure_airport"]));
    }
    if (m.find("departure_city") != m.end() && !m["departure_city"].empty()) {
      departureCity = make_shared<string>(boost::any_cast<string>(m["departure_city"]));
    }
    if (m.find("departure_terminal") != m.end() && !m["departure_terminal"].empty()) {
      departureTerminal = make_shared<string>(boost::any_cast<string>(m["departure_terminal"]));
    }
    if (m.find("departure_time") != m.end() && !m["departure_time"].empty()) {
      departureTime = make_shared<string>(boost::any_cast<string>(m["departure_time"]));
    }
    if (m.find("equip_type") != m.end() && !m["equip_type"].empty()) {
      equipType = make_shared<string>(boost::any_cast<string>(m["equip_type"]));
    }
    if (m.find("flight_duration") != m.end() && !m["flight_duration"].empty()) {
      flightDuration = make_shared<long>(boost::any_cast<long>(m["flight_duration"]));
    }
    if (m.find("marketing_airline") != m.end() && !m["marketing_airline"].empty()) {
      marketingAirline = make_shared<string>(boost::any_cast<string>(m["marketing_airline"]));
    }
    if (m.find("marketing_flight_no") != m.end() && !m["marketing_flight_no"].empty()) {
      marketingFlightNo = make_shared<string>(boost::any_cast<string>(m["marketing_flight_no"]));
    }
    if (m.find("marketing_flight_no_int") != m.end() && !m["marketing_flight_no_int"].empty()) {
      marketingFlightNoInt = make_shared<long>(boost::any_cast<long>(m["marketing_flight_no_int"]));
    }
    if (m.find("operating_airline") != m.end() && !m["operating_airline"].empty()) {
      operatingAirline = make_shared<string>(boost::any_cast<string>(m["operating_airline"]));
    }
    if (m.find("operating_flight_no") != m.end() && !m["operating_flight_no"].empty()) {
      operatingFlightNo = make_shared<string>(boost::any_cast<string>(m["operating_flight_no"]));
    }
    if (m.find("segment_id") != m.end() && !m["segment_id"].empty()) {
      segmentId = make_shared<string>(boost::any_cast<string>(m["segment_id"]));
    }
    if (m.find("stop_city_list") != m.end() && !m["stop_city_list"].empty()) {
      stopCityList = make_shared<string>(boost::any_cast<string>(m["stop_city_list"]));
    }
    if (m.find("stop_quantity") != m.end() && !m["stop_quantity"].empty()) {
      stopQuantity = make_shared<long>(boost::any_cast<long>(m["stop_quantity"]));
    }
  }


  virtual ~EnrichResponseBodyDataSolutionListJourneyListSegmentList() = default;
};
class EnrichResponseBodyDataSolutionListJourneyList : public Darabonba::Model {
public:
  shared_ptr<vector<EnrichResponseBodyDataSolutionListJourneyListSegmentList>> segmentList{};
  shared_ptr<long> transferCount{};

  EnrichResponseBodyDataSolutionListJourneyList() {}

  explicit EnrichResponseBodyDataSolutionListJourneyList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (segmentList) {
      vector<boost::any> temp1;
      for(auto item1:*segmentList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["segment_list"] = boost::any(temp1);
    }
    if (transferCount) {
      res["transfer_count"] = boost::any(*transferCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("segment_list") != m.end() && !m["segment_list"].empty()) {
      if (typeid(vector<boost::any>) == m["segment_list"].type()) {
        vector<EnrichResponseBodyDataSolutionListJourneyListSegmentList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["segment_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            EnrichResponseBodyDataSolutionListJourneyListSegmentList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        segmentList = make_shared<vector<EnrichResponseBodyDataSolutionListJourneyListSegmentList>>(expect1);
      }
    }
    if (m.find("transfer_count") != m.end() && !m["transfer_count"].empty()) {
      transferCount = make_shared<long>(boost::any_cast<long>(m["transfer_count"]));
    }
  }


  virtual ~EnrichResponseBodyDataSolutionListJourneyList() = default;
};
class EnrichResponseBodyDataSolutionListSegmentBaggageCheckInInfoList : public Darabonba::Model {
public:
  shared_ptr<long> luggageDirectInfoType{};
  shared_ptr<vector<string>> segmentIdList{};

  EnrichResponseBodyDataSolutionListSegmentBaggageCheckInInfoList() {}

  explicit EnrichResponseBodyDataSolutionListSegmentBaggageCheckInInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (luggageDirectInfoType) {
      res["luggage_direct_info_type"] = boost::any(*luggageDirectInfoType);
    }
    if (segmentIdList) {
      res["segment_id_list"] = boost::any(*segmentIdList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("luggage_direct_info_type") != m.end() && !m["luggage_direct_info_type"].empty()) {
      luggageDirectInfoType = make_shared<long>(boost::any_cast<long>(m["luggage_direct_info_type"]));
    }
    if (m.find("segment_id_list") != m.end() && !m["segment_id_list"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["segment_id_list"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["segment_id_list"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      segmentIdList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~EnrichResponseBodyDataSolutionListSegmentBaggageCheckInInfoList() = default;
};
class EnrichResponseBodyDataSolutionListSegmentBaggageMappingList : public Darabonba::Model {
public:
  shared_ptr<map<string, DataSolutionListSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue>> passengerBaggageAllowanceMapping{};
  shared_ptr<vector<string>> segmentIdList{};

  EnrichResponseBodyDataSolutionListSegmentBaggageMappingList() {}

  explicit EnrichResponseBodyDataSolutionListSegmentBaggageMappingList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (passengerBaggageAllowanceMapping) {
      map<string, boost::any> temp1;
      for(auto item1:*passengerBaggageAllowanceMapping){
        temp1[item1.first] = boost::any(item1.second.toMap());
      }
      res["passenger_baggage_allowance_mapping"] = boost::any(temp1);
    }
    if (segmentIdList) {
      res["segment_id_list"] = boost::any(*segmentIdList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("passenger_baggage_allowance_mapping") != m.end() && !m["passenger_baggage_allowance_mapping"].empty()) {
      if (typeid(map<string, boost::any>) == m["passenger_baggage_allowance_mapping"].type()) {
        map<string, DataSolutionListSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue> expect1;
        for(auto item1:boost::any_cast<map<string, boost::any>>(m["passenger_baggage_allowance_mapping"])){
          if (typeid(map<string, boost::any>) == item1.second.type()) {
            DataSolutionListSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1.second));
            expect1[item1.first] = model2;
          }
        }
        passengerBaggageAllowanceMapping = make_shared<map<string, DataSolutionListSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue>>(expect1);
      }
    }
    if (m.find("segment_id_list") != m.end() && !m["segment_id_list"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["segment_id_list"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["segment_id_list"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      segmentIdList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~EnrichResponseBodyDataSolutionListSegmentBaggageMappingList() = default;
};
class EnrichResponseBodyDataSolutionListSegmentRefundChangeRuleMappingList : public Darabonba::Model {
public:
  shared_ptr<map<string, DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue>> refundChangeRuleMap{};
  shared_ptr<vector<string>> segmentIdList{};

  EnrichResponseBodyDataSolutionListSegmentRefundChangeRuleMappingList() {}

  explicit EnrichResponseBodyDataSolutionListSegmentRefundChangeRuleMappingList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (refundChangeRuleMap) {
      map<string, boost::any> temp1;
      for(auto item1:*refundChangeRuleMap){
        temp1[item1.first] = boost::any(item1.second.toMap());
      }
      res["refund_change_rule_map"] = boost::any(temp1);
    }
    if (segmentIdList) {
      res["segment_id_list"] = boost::any(*segmentIdList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("refund_change_rule_map") != m.end() && !m["refund_change_rule_map"].empty()) {
      if (typeid(map<string, boost::any>) == m["refund_change_rule_map"].type()) {
        map<string, DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue> expect1;
        for(auto item1:boost::any_cast<map<string, boost::any>>(m["refund_change_rule_map"])){
          if (typeid(map<string, boost::any>) == item1.second.type()) {
            DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1.second));
            expect1[item1.first] = model2;
          }
        }
        refundChangeRuleMap = make_shared<map<string, DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue>>(expect1);
      }
    }
    if (m.find("segment_id_list") != m.end() && !m["segment_id_list"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["segment_id_list"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["segment_id_list"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      segmentIdList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~EnrichResponseBodyDataSolutionListSegmentRefundChangeRuleMappingList() = default;
};
class EnrichResponseBodyDataSolutionListSolutionAttribute : public Darabonba::Model {
public:
  shared_ptr<string> supplySourceType{};

  EnrichResponseBodyDataSolutionListSolutionAttribute() {}

  explicit EnrichResponseBodyDataSolutionListSolutionAttribute(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (supplySourceType) {
      res["supply_source_type"] = boost::any(*supplySourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("supply_source_type") != m.end() && !m["supply_source_type"].empty()) {
      supplySourceType = make_shared<string>(boost::any_cast<string>(m["supply_source_type"]));
    }
  }


  virtual ~EnrichResponseBodyDataSolutionListSolutionAttribute() = default;
};
class EnrichResponseBodyDataSolutionList : public Darabonba::Model {
public:
  shared_ptr<double> adultPrice{};
  shared_ptr<double> adultTax{};
  shared_ptr<double> childPrice{};
  shared_ptr<double> childTax{};
  shared_ptr<double> infantPrice{};
  shared_ptr<double> infantTax{};
  shared_ptr<vector<EnrichResponseBodyDataSolutionListJourneyList>> journeyList{};
  shared_ptr<string> productTypeDescription{};
  shared_ptr<string> refundTicketCouponDescription{};
  shared_ptr<vector<EnrichResponseBodyDataSolutionListSegmentBaggageCheckInInfoList>> segmentBaggageCheckInInfoList{};
  shared_ptr<vector<EnrichResponseBodyDataSolutionListSegmentBaggageMappingList>> segmentBaggageMappingList{};
  shared_ptr<vector<EnrichResponseBodyDataSolutionListSegmentRefundChangeRuleMappingList>> segmentRefundChangeRuleMappingList{};
  shared_ptr<EnrichResponseBodyDataSolutionListSolutionAttribute> solutionAttribute{};
  shared_ptr<string> solutionId{};

  EnrichResponseBodyDataSolutionList() {}

  explicit EnrichResponseBodyDataSolutionList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (adultPrice) {
      res["adult_price"] = boost::any(*adultPrice);
    }
    if (adultTax) {
      res["adult_tax"] = boost::any(*adultTax);
    }
    if (childPrice) {
      res["child_price"] = boost::any(*childPrice);
    }
    if (childTax) {
      res["child_tax"] = boost::any(*childTax);
    }
    if (infantPrice) {
      res["infant_price"] = boost::any(*infantPrice);
    }
    if (infantTax) {
      res["infant_tax"] = boost::any(*infantTax);
    }
    if (journeyList) {
      vector<boost::any> temp1;
      for(auto item1:*journeyList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["journey_list"] = boost::any(temp1);
    }
    if (productTypeDescription) {
      res["product_type_description"] = boost::any(*productTypeDescription);
    }
    if (refundTicketCouponDescription) {
      res["refund_ticket_coupon_description"] = boost::any(*refundTicketCouponDescription);
    }
    if (segmentBaggageCheckInInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*segmentBaggageCheckInInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["segment_baggage_check_in_info_list"] = boost::any(temp1);
    }
    if (segmentBaggageMappingList) {
      vector<boost::any> temp1;
      for(auto item1:*segmentBaggageMappingList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["segment_baggage_mapping_list"] = boost::any(temp1);
    }
    if (segmentRefundChangeRuleMappingList) {
      vector<boost::any> temp1;
      for(auto item1:*segmentRefundChangeRuleMappingList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["segment_refund_change_rule_mapping_list"] = boost::any(temp1);
    }
    if (solutionAttribute) {
      res["solution_attribute"] = solutionAttribute ? boost::any(solutionAttribute->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (solutionId) {
      res["solution_id"] = boost::any(*solutionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("adult_price") != m.end() && !m["adult_price"].empty()) {
      adultPrice = make_shared<double>(boost::any_cast<double>(m["adult_price"]));
    }
    if (m.find("adult_tax") != m.end() && !m["adult_tax"].empty()) {
      adultTax = make_shared<double>(boost::any_cast<double>(m["adult_tax"]));
    }
    if (m.find("child_price") != m.end() && !m["child_price"].empty()) {
      childPrice = make_shared<double>(boost::any_cast<double>(m["child_price"]));
    }
    if (m.find("child_tax") != m.end() && !m["child_tax"].empty()) {
      childTax = make_shared<double>(boost::any_cast<double>(m["child_tax"]));
    }
    if (m.find("infant_price") != m.end() && !m["infant_price"].empty()) {
      infantPrice = make_shared<double>(boost::any_cast<double>(m["infant_price"]));
    }
    if (m.find("infant_tax") != m.end() && !m["infant_tax"].empty()) {
      infantTax = make_shared<double>(boost::any_cast<double>(m["infant_tax"]));
    }
    if (m.find("journey_list") != m.end() && !m["journey_list"].empty()) {
      if (typeid(vector<boost::any>) == m["journey_list"].type()) {
        vector<EnrichResponseBodyDataSolutionListJourneyList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["journey_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            EnrichResponseBodyDataSolutionListJourneyList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        journeyList = make_shared<vector<EnrichResponseBodyDataSolutionListJourneyList>>(expect1);
      }
    }
    if (m.find("product_type_description") != m.end() && !m["product_type_description"].empty()) {
      productTypeDescription = make_shared<string>(boost::any_cast<string>(m["product_type_description"]));
    }
    if (m.find("refund_ticket_coupon_description") != m.end() && !m["refund_ticket_coupon_description"].empty()) {
      refundTicketCouponDescription = make_shared<string>(boost::any_cast<string>(m["refund_ticket_coupon_description"]));
    }
    if (m.find("segment_baggage_check_in_info_list") != m.end() && !m["segment_baggage_check_in_info_list"].empty()) {
      if (typeid(vector<boost::any>) == m["segment_baggage_check_in_info_list"].type()) {
        vector<EnrichResponseBodyDataSolutionListSegmentBaggageCheckInInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["segment_baggage_check_in_info_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            EnrichResponseBodyDataSolutionListSegmentBaggageCheckInInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        segmentBaggageCheckInInfoList = make_shared<vector<EnrichResponseBodyDataSolutionListSegmentBaggageCheckInInfoList>>(expect1);
      }
    }
    if (m.find("segment_baggage_mapping_list") != m.end() && !m["segment_baggage_mapping_list"].empty()) {
      if (typeid(vector<boost::any>) == m["segment_baggage_mapping_list"].type()) {
        vector<EnrichResponseBodyDataSolutionListSegmentBaggageMappingList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["segment_baggage_mapping_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            EnrichResponseBodyDataSolutionListSegmentBaggageMappingList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        segmentBaggageMappingList = make_shared<vector<EnrichResponseBodyDataSolutionListSegmentBaggageMappingList>>(expect1);
      }
    }
    if (m.find("segment_refund_change_rule_mapping_list") != m.end() && !m["segment_refund_change_rule_mapping_list"].empty()) {
      if (typeid(vector<boost::any>) == m["segment_refund_change_rule_mapping_list"].type()) {
        vector<EnrichResponseBodyDataSolutionListSegmentRefundChangeRuleMappingList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["segment_refund_change_rule_mapping_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            EnrichResponseBodyDataSolutionListSegmentRefundChangeRuleMappingList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        segmentRefundChangeRuleMappingList = make_shared<vector<EnrichResponseBodyDataSolutionListSegmentRefundChangeRuleMappingList>>(expect1);
      }
    }
    if (m.find("solution_attribute") != m.end() && !m["solution_attribute"].empty()) {
      if (typeid(map<string, boost::any>) == m["solution_attribute"].type()) {
        EnrichResponseBodyDataSolutionListSolutionAttribute model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["solution_attribute"]));
        solutionAttribute = make_shared<EnrichResponseBodyDataSolutionListSolutionAttribute>(model1);
      }
    }
    if (m.find("solution_id") != m.end() && !m["solution_id"].empty()) {
      solutionId = make_shared<string>(boost::any_cast<string>(m["solution_id"]));
    }
  }


  virtual ~EnrichResponseBodyDataSolutionList() = default;
};
class EnrichResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<EnrichResponseBodyDataSolutionList>> solutionList{};

  EnrichResponseBodyData() {}

  explicit EnrichResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (solutionList) {
      vector<boost::any> temp1;
      for(auto item1:*solutionList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["solution_list"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("solution_list") != m.end() && !m["solution_list"].empty()) {
      if (typeid(vector<boost::any>) == m["solution_list"].type()) {
        vector<EnrichResponseBodyDataSolutionList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["solution_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            EnrichResponseBodyDataSolutionList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        solutionList = make_shared<vector<EnrichResponseBodyDataSolutionList>>(expect1);
      }
    }
  }


  virtual ~EnrichResponseBodyData() = default;
};
class EnrichResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<EnrichResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<boost::any> errorData{};
  shared_ptr<string> errorMsg{};
  shared_ptr<long> status{};
  shared_ptr<bool> success{};

  EnrichResponseBody() {}

  explicit EnrichResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["error_code"] = boost::any(*errorCode);
    }
    if (errorData) {
      res["error_data"] = boost::any(*errorData);
    }
    if (errorMsg) {
      res["error_msg"] = boost::any(*errorMsg);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        EnrichResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<EnrichResponseBodyData>(model1);
      }
    }
    if (m.find("error_code") != m.end() && !m["error_code"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["error_code"]));
    }
    if (m.find("error_data") != m.end() && !m["error_data"].empty()) {
      errorData = make_shared<boost::any>(boost::any_cast<boost::any>(m["error_data"]));
    }
    if (m.find("error_msg") != m.end() && !m["error_msg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["error_msg"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~EnrichResponseBody() = default;
};
class EnrichResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EnrichResponseBody> body{};

  EnrichResponse() {}

  explicit EnrichResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        EnrichResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnrichResponseBody>(model1);
      }
    }
  }


  virtual ~EnrichResponse() = default;
};
class FileUploadHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAirticketAccessToken{};
  shared_ptr<string> xAcsAirticketLanguage{};

  FileUploadHeaders() {}

  explicit FileUploadHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAirticketAccessToken) {
      res["x-acs-airticket-access-token"] = boost::any(*xAcsAirticketAccessToken);
    }
    if (xAcsAirticketLanguage) {
      res["x-acs-airticket-language"] = boost::any(*xAcsAirticketLanguage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("x-acs-airticket-access-token") != m.end() && !m["x-acs-airticket-access-token"].empty()) {
      xAcsAirticketAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-airticket-access-token"]));
    }
    if (m.find("x-acs-airticket-language") != m.end() && !m["x-acs-airticket-language"].empty()) {
      xAcsAirticketLanguage = make_shared<string>(boost::any_cast<string>(m["x-acs-airticket-language"]));
    }
  }


  virtual ~FileUploadHeaders() = default;
};
class FileUploadRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileContent{};
  shared_ptr<long> orderNum{};

  FileUploadRequest() {}

  explicit FileUploadRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileContent) {
      res["file_content"] = boost::any(*fileContent);
    }
    if (orderNum) {
      res["order_num"] = boost::any(*orderNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("file_content") != m.end() && !m["file_content"].empty()) {
      fileContent = make_shared<string>(boost::any_cast<string>(m["file_content"]));
    }
    if (m.find("order_num") != m.end() && !m["order_num"].empty()) {
      orderNum = make_shared<long>(boost::any_cast<long>(m["order_num"]));
    }
  }


  virtual ~FileUploadRequest() = default;
};
class FileUploadResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> uploadedFileUrl{};

  FileUploadResponseBodyData() {}

  explicit FileUploadResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (uploadedFileUrl) {
      res["uploaded_file_url"] = boost::any(*uploadedFileUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("uploaded_file_url") != m.end() && !m["uploaded_file_url"].empty()) {
      uploadedFileUrl = make_shared<string>(boost::any_cast<string>(m["uploaded_file_url"]));
    }
  }


  virtual ~FileUploadResponseBodyData() = default;
};
class FileUploadResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<FileUploadResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<boost::any> errorData{};
  shared_ptr<string> errorMsg{};
  shared_ptr<long> status{};
  shared_ptr<bool> success{};

  FileUploadResponseBody() {}

  explicit FileUploadResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["error_code"] = boost::any(*errorCode);
    }
    if (errorData) {
      res["error_data"] = boost::any(*errorData);
    }
    if (errorMsg) {
      res["error_msg"] = boost::any(*errorMsg);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        FileUploadResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<FileUploadResponseBodyData>(model1);
      }
    }
    if (m.find("error_code") != m.end() && !m["error_code"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["error_code"]));
    }
    if (m.find("error_data") != m.end() && !m["error_data"].empty()) {
      errorData = make_shared<boost::any>(boost::any_cast<boost::any>(m["error_data"]));
    }
    if (m.find("error_msg") != m.end() && !m["error_msg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["error_msg"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~FileUploadResponseBody() = default;
};
class FileUploadResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<FileUploadResponseBody> body{};

  FileUploadResponse() {}

  explicit FileUploadResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        FileUploadResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<FileUploadResponseBody>(model1);
      }
    }
  }


  virtual ~FileUploadResponse() = default;
};
class FlightChangeOfOrderHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAirticketAccessToken{};
  shared_ptr<string> xAcsAirticketLanguage{};

  FlightChangeOfOrderHeaders() {}

  explicit FlightChangeOfOrderHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAirticketAccessToken) {
      res["x-acs-airticket-access-token"] = boost::any(*xAcsAirticketAccessToken);
    }
    if (xAcsAirticketLanguage) {
      res["x-acs-airticket-language"] = boost::any(*xAcsAirticketLanguage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("x-acs-airticket-access-token") != m.end() && !m["x-acs-airticket-access-token"].empty()) {
      xAcsAirticketAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-airticket-access-token"]));
    }
    if (m.find("x-acs-airticket-language") != m.end() && !m["x-acs-airticket-language"].empty()) {
      xAcsAirticketLanguage = make_shared<string>(boost::any_cast<string>(m["x-acs-airticket-language"]));
    }
  }


  virtual ~FlightChangeOfOrderHeaders() = default;
};
class FlightChangeOfOrderRequest : public Darabonba::Model {
public:
  shared_ptr<long> orderNum{};

  FlightChangeOfOrderRequest() {}

  explicit FlightChangeOfOrderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderNum) {
      res["order_num"] = boost::any(*orderNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("order_num") != m.end() && !m["order_num"].empty()) {
      orderNum = make_shared<long>(boost::any_cast<long>(m["order_num"]));
    }
  }


  virtual ~FlightChangeOfOrderRequest() = default;
};
class FlightChangeOfOrderResponseBodyDataFlightChangeDetail : public Darabonba::Model {
public:
  shared_ptr<string> changeReason{};
  shared_ptr<string> changeTime{};
  shared_ptr<long> changeType{};
  shared_ptr<string> newArrivalAirport{};
  shared_ptr<string> newArrivalTime{};
  shared_ptr<string> newDepartureAirport{};
  shared_ptr<string> newDepartureTime{};
  shared_ptr<string> newFlightNo{};
  shared_ptr<string> oldArrivalAirport{};
  shared_ptr<string> oldArrivalTime{};
  shared_ptr<string> oldDepartureAirport{};
  shared_ptr<string> oldDepartureTime{};
  shared_ptr<string> oldFlightNo{};

  FlightChangeOfOrderResponseBodyDataFlightChangeDetail() {}

  explicit FlightChangeOfOrderResponseBodyDataFlightChangeDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (changeReason) {
      res["change_reason"] = boost::any(*changeReason);
    }
    if (changeTime) {
      res["change_time"] = boost::any(*changeTime);
    }
    if (changeType) {
      res["change_type"] = boost::any(*changeType);
    }
    if (newArrivalAirport) {
      res["new_arrival_airport"] = boost::any(*newArrivalAirport);
    }
    if (newArrivalTime) {
      res["new_arrival_time"] = boost::any(*newArrivalTime);
    }
    if (newDepartureAirport) {
      res["new_departure_airport"] = boost::any(*newDepartureAirport);
    }
    if (newDepartureTime) {
      res["new_departure_time"] = boost::any(*newDepartureTime);
    }
    if (newFlightNo) {
      res["new_flight_no"] = boost::any(*newFlightNo);
    }
    if (oldArrivalAirport) {
      res["old_arrival_airport"] = boost::any(*oldArrivalAirport);
    }
    if (oldArrivalTime) {
      res["old_arrival_time"] = boost::any(*oldArrivalTime);
    }
    if (oldDepartureAirport) {
      res["old_departure_airport"] = boost::any(*oldDepartureAirport);
    }
    if (oldDepartureTime) {
      res["old_departure_time"] = boost::any(*oldDepartureTime);
    }
    if (oldFlightNo) {
      res["old_flight_no"] = boost::any(*oldFlightNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("change_reason") != m.end() && !m["change_reason"].empty()) {
      changeReason = make_shared<string>(boost::any_cast<string>(m["change_reason"]));
    }
    if (m.find("change_time") != m.end() && !m["change_time"].empty()) {
      changeTime = make_shared<string>(boost::any_cast<string>(m["change_time"]));
    }
    if (m.find("change_type") != m.end() && !m["change_type"].empty()) {
      changeType = make_shared<long>(boost::any_cast<long>(m["change_type"]));
    }
    if (m.find("new_arrival_airport") != m.end() && !m["new_arrival_airport"].empty()) {
      newArrivalAirport = make_shared<string>(boost::any_cast<string>(m["new_arrival_airport"]));
    }
    if (m.find("new_arrival_time") != m.end() && !m["new_arrival_time"].empty()) {
      newArrivalTime = make_shared<string>(boost::any_cast<string>(m["new_arrival_time"]));
    }
    if (m.find("new_departure_airport") != m.end() && !m["new_departure_airport"].empty()) {
      newDepartureAirport = make_shared<string>(boost::any_cast<string>(m["new_departure_airport"]));
    }
    if (m.find("new_departure_time") != m.end() && !m["new_departure_time"].empty()) {
      newDepartureTime = make_shared<string>(boost::any_cast<string>(m["new_departure_time"]));
    }
    if (m.find("new_flight_no") != m.end() && !m["new_flight_no"].empty()) {
      newFlightNo = make_shared<string>(boost::any_cast<string>(m["new_flight_no"]));
    }
    if (m.find("old_arrival_airport") != m.end() && !m["old_arrival_airport"].empty()) {
      oldArrivalAirport = make_shared<string>(boost::any_cast<string>(m["old_arrival_airport"]));
    }
    if (m.find("old_arrival_time") != m.end() && !m["old_arrival_time"].empty()) {
      oldArrivalTime = make_shared<string>(boost::any_cast<string>(m["old_arrival_time"]));
    }
    if (m.find("old_departure_airport") != m.end() && !m["old_departure_airport"].empty()) {
      oldDepartureAirport = make_shared<string>(boost::any_cast<string>(m["old_departure_airport"]));
    }
    if (m.find("old_departure_time") != m.end() && !m["old_departure_time"].empty()) {
      oldDepartureTime = make_shared<string>(boost::any_cast<string>(m["old_departure_time"]));
    }
    if (m.find("old_flight_no") != m.end() && !m["old_flight_no"].empty()) {
      oldFlightNo = make_shared<string>(boost::any_cast<string>(m["old_flight_no"]));
    }
  }


  virtual ~FlightChangeOfOrderResponseBodyDataFlightChangeDetail() = default;
};
class FlightChangeOfOrderResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<FlightChangeOfOrderResponseBodyDataFlightChangeDetail> flightChangeDetail{};
  shared_ptr<long> orderNum{};

  FlightChangeOfOrderResponseBodyData() {}

  explicit FlightChangeOfOrderResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (flightChangeDetail) {
      res["flight_change_detail"] = flightChangeDetail ? boost::any(flightChangeDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (orderNum) {
      res["order_num"] = boost::any(*orderNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("flight_change_detail") != m.end() && !m["flight_change_detail"].empty()) {
      if (typeid(map<string, boost::any>) == m["flight_change_detail"].type()) {
        FlightChangeOfOrderResponseBodyDataFlightChangeDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["flight_change_detail"]));
        flightChangeDetail = make_shared<FlightChangeOfOrderResponseBodyDataFlightChangeDetail>(model1);
      }
    }
    if (m.find("order_num") != m.end() && !m["order_num"].empty()) {
      orderNum = make_shared<long>(boost::any_cast<long>(m["order_num"]));
    }
  }


  virtual ~FlightChangeOfOrderResponseBodyData() = default;
};
class FlightChangeOfOrderResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<FlightChangeOfOrderResponseBodyData>> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<boost::any> errorData{};
  shared_ptr<string> errorMsg{};
  shared_ptr<long> status{};
  shared_ptr<bool> success{};

  FlightChangeOfOrderResponseBody() {}

  explicit FlightChangeOfOrderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["data"] = boost::any(temp1);
    }
    if (errorCode) {
      res["error_code"] = boost::any(*errorCode);
    }
    if (errorData) {
      res["error_data"] = boost::any(*errorData);
    }
    if (errorMsg) {
      res["error_msg"] = boost::any(*errorMsg);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<FlightChangeOfOrderResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            FlightChangeOfOrderResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<FlightChangeOfOrderResponseBodyData>>(expect1);
      }
    }
    if (m.find("error_code") != m.end() && !m["error_code"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["error_code"]));
    }
    if (m.find("error_data") != m.end() && !m["error_data"].empty()) {
      errorData = make_shared<boost::any>(boost::any_cast<boost::any>(m["error_data"]));
    }
    if (m.find("error_msg") != m.end() && !m["error_msg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["error_msg"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~FlightChangeOfOrderResponseBody() = default;
};
class FlightChangeOfOrderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<FlightChangeOfOrderResponseBody> body{};

  FlightChangeOfOrderResponse() {}

  explicit FlightChangeOfOrderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        FlightChangeOfOrderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<FlightChangeOfOrderResponseBody>(model1);
      }
    }
  }


  virtual ~FlightChangeOfOrderResponse() = default;
};
class GetTokenRequest : public Darabonba::Model {
public:
  shared_ptr<string> appKey{};
  shared_ptr<string> appSecret{};

  GetTokenRequest() {}

  explicit GetTokenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appKey) {
      res["app_key"] = boost::any(*appKey);
    }
    if (appSecret) {
      res["app_secret"] = boost::any(*appSecret);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("app_key") != m.end() && !m["app_key"].empty()) {
      appKey = make_shared<string>(boost::any_cast<string>(m["app_key"]));
    }
    if (m.find("app_secret") != m.end() && !m["app_secret"].empty()) {
      appSecret = make_shared<string>(boost::any_cast<string>(m["app_secret"]));
    }
  }


  virtual ~GetTokenRequest() = default;
};
class GetTokenResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> expireTime{};
  shared_ptr<long> generateTime{};
  shared_ptr<string> token{};

  GetTokenResponseBodyData() {}

  explicit GetTokenResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (expireTime) {
      res["expire_time"] = boost::any(*expireTime);
    }
    if (generateTime) {
      res["generate_time"] = boost::any(*generateTime);
    }
    if (token) {
      res["token"] = boost::any(*token);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("expire_time") != m.end() && !m["expire_time"].empty()) {
      expireTime = make_shared<long>(boost::any_cast<long>(m["expire_time"]));
    }
    if (m.find("generate_time") != m.end() && !m["generate_time"].empty()) {
      generateTime = make_shared<long>(boost::any_cast<long>(m["generate_time"]));
    }
    if (m.find("token") != m.end() && !m["token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["token"]));
    }
  }


  virtual ~GetTokenResponseBodyData() = default;
};
class GetTokenResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetTokenResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<boost::any> errorData{};
  shared_ptr<string> errorMsg{};
  shared_ptr<long> status{};
  shared_ptr<bool> success{};

  GetTokenResponseBody() {}

  explicit GetTokenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["error_code"] = boost::any(*errorCode);
    }
    if (errorData) {
      res["error_data"] = boost::any(*errorData);
    }
    if (errorMsg) {
      res["error_msg"] = boost::any(*errorMsg);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetTokenResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetTokenResponseBodyData>(model1);
      }
    }
    if (m.find("error_code") != m.end() && !m["error_code"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["error_code"]));
    }
    if (m.find("error_data") != m.end() && !m["error_data"].empty()) {
      errorData = make_shared<boost::any>(boost::any_cast<boost::any>(m["error_data"]));
    }
    if (m.find("error_msg") != m.end() && !m["error_msg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["error_msg"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~GetTokenResponseBody() = default;
};
class GetTokenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTokenResponseBody> body{};

  GetTokenResponse() {}

  explicit GetTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetTokenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTokenResponseBody>(model1);
      }
    }
  }


  virtual ~GetTokenResponse() = default;
};
class LuggageDirectHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAirticketAccessToken{};
  shared_ptr<string> xAcsAirticketLanguage{};

  LuggageDirectHeaders() {}

  explicit LuggageDirectHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAirticketAccessToken) {
      res["x-acs-airticket-access-token"] = boost::any(*xAcsAirticketAccessToken);
    }
    if (xAcsAirticketLanguage) {
      res["x-acs-airticket-language"] = boost::any(*xAcsAirticketLanguage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("x-acs-airticket-access-token") != m.end() && !m["x-acs-airticket-access-token"].empty()) {
      xAcsAirticketAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-airticket-access-token"]));
    }
    if (m.find("x-acs-airticket-language") != m.end() && !m["x-acs-airticket-language"].empty()) {
      xAcsAirticketLanguage = make_shared<string>(boost::any_cast<string>(m["x-acs-airticket-language"]));
    }
  }


  virtual ~LuggageDirectHeaders() = default;
};
class LuggageDirectRequestFlightSegmentParamList : public Darabonba::Model {
public:
  shared_ptr<string> arrivalAirport{};
  shared_ptr<string> arrivalTerminal{};
  shared_ptr<long> arrivalTime{};
  shared_ptr<bool> codeShare{};
  shared_ptr<string> departureAirport{};
  shared_ptr<string> departureTerminal{};
  shared_ptr<long> departureTime{};
  shared_ptr<string> marketingAirline{};
  shared_ptr<string> marketingFlightNo{};
  shared_ptr<string> operatingAirline{};
  shared_ptr<string> stopCityList{};
  shared_ptr<string> ticketingAirline{};

  LuggageDirectRequestFlightSegmentParamList() {}

  explicit LuggageDirectRequestFlightSegmentParamList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arrivalAirport) {
      res["arrival_airport"] = boost::any(*arrivalAirport);
    }
    if (arrivalTerminal) {
      res["arrival_terminal"] = boost::any(*arrivalTerminal);
    }
    if (arrivalTime) {
      res["arrival_time"] = boost::any(*arrivalTime);
    }
    if (codeShare) {
      res["code_share"] = boost::any(*codeShare);
    }
    if (departureAirport) {
      res["departure_airport"] = boost::any(*departureAirport);
    }
    if (departureTerminal) {
      res["departure_terminal"] = boost::any(*departureTerminal);
    }
    if (departureTime) {
      res["departure_time"] = boost::any(*departureTime);
    }
    if (marketingAirline) {
      res["marketing_airline"] = boost::any(*marketingAirline);
    }
    if (marketingFlightNo) {
      res["marketing_flight_no"] = boost::any(*marketingFlightNo);
    }
    if (operatingAirline) {
      res["operating_airline"] = boost::any(*operatingAirline);
    }
    if (stopCityList) {
      res["stop_city_list"] = boost::any(*stopCityList);
    }
    if (ticketingAirline) {
      res["ticketing_airline"] = boost::any(*ticketingAirline);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("arrival_airport") != m.end() && !m["arrival_airport"].empty()) {
      arrivalAirport = make_shared<string>(boost::any_cast<string>(m["arrival_airport"]));
    }
    if (m.find("arrival_terminal") != m.end() && !m["arrival_terminal"].empty()) {
      arrivalTerminal = make_shared<string>(boost::any_cast<string>(m["arrival_terminal"]));
    }
    if (m.find("arrival_time") != m.end() && !m["arrival_time"].empty()) {
      arrivalTime = make_shared<long>(boost::any_cast<long>(m["arrival_time"]));
    }
    if (m.find("code_share") != m.end() && !m["code_share"].empty()) {
      codeShare = make_shared<bool>(boost::any_cast<bool>(m["code_share"]));
    }
    if (m.find("departure_airport") != m.end() && !m["departure_airport"].empty()) {
      departureAirport = make_shared<string>(boost::any_cast<string>(m["departure_airport"]));
    }
    if (m.find("departure_terminal") != m.end() && !m["departure_terminal"].empty()) {
      departureTerminal = make_shared<string>(boost::any_cast<string>(m["departure_terminal"]));
    }
    if (m.find("departure_time") != m.end() && !m["departure_time"].empty()) {
      departureTime = make_shared<long>(boost::any_cast<long>(m["departure_time"]));
    }
    if (m.find("marketing_airline") != m.end() && !m["marketing_airline"].empty()) {
      marketingAirline = make_shared<string>(boost::any_cast<string>(m["marketing_airline"]));
    }
    if (m.find("marketing_flight_no") != m.end() && !m["marketing_flight_no"].empty()) {
      marketingFlightNo = make_shared<string>(boost::any_cast<string>(m["marketing_flight_no"]));
    }
    if (m.find("operating_airline") != m.end() && !m["operating_airline"].empty()) {
      operatingAirline = make_shared<string>(boost::any_cast<string>(m["operating_airline"]));
    }
    if (m.find("stop_city_list") != m.end() && !m["stop_city_list"].empty()) {
      stopCityList = make_shared<string>(boost::any_cast<string>(m["stop_city_list"]));
    }
    if (m.find("ticketing_airline") != m.end() && !m["ticketing_airline"].empty()) {
      ticketingAirline = make_shared<string>(boost::any_cast<string>(m["ticketing_airline"]));
    }
  }


  virtual ~LuggageDirectRequestFlightSegmentParamList() = default;
};
class LuggageDirectRequest : public Darabonba::Model {
public:
  shared_ptr<vector<LuggageDirectRequestFlightSegmentParamList>> flightSegmentParamList{};

  LuggageDirectRequest() {}

  explicit LuggageDirectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (flightSegmentParamList) {
      vector<boost::any> temp1;
      for(auto item1:*flightSegmentParamList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["flight_segment_param_list"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("flight_segment_param_list") != m.end() && !m["flight_segment_param_list"].empty()) {
      if (typeid(vector<boost::any>) == m["flight_segment_param_list"].type()) {
        vector<LuggageDirectRequestFlightSegmentParamList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["flight_segment_param_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            LuggageDirectRequestFlightSegmentParamList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        flightSegmentParamList = make_shared<vector<LuggageDirectRequestFlightSegmentParamList>>(expect1);
      }
    }
  }


  virtual ~LuggageDirectRequest() = default;
};
class LuggageDirectShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> flightSegmentParamListShrink{};

  LuggageDirectShrinkRequest() {}

  explicit LuggageDirectShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (flightSegmentParamListShrink) {
      res["flight_segment_param_list"] = boost::any(*flightSegmentParamListShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("flight_segment_param_list") != m.end() && !m["flight_segment_param_list"].empty()) {
      flightSegmentParamListShrink = make_shared<string>(boost::any_cast<string>(m["flight_segment_param_list"]));
    }
  }


  virtual ~LuggageDirectShrinkRequest() = default;
};
class LuggageDirectResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> cityCode{};
  shared_ptr<long> directType{};

  LuggageDirectResponseBodyData() {}

  explicit LuggageDirectResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cityCode) {
      res["city_code"] = boost::any(*cityCode);
    }
    if (directType) {
      res["direct_type"] = boost::any(*directType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("city_code") != m.end() && !m["city_code"].empty()) {
      cityCode = make_shared<string>(boost::any_cast<string>(m["city_code"]));
    }
    if (m.find("direct_type") != m.end() && !m["direct_type"].empty()) {
      directType = make_shared<long>(boost::any_cast<long>(m["direct_type"]));
    }
  }


  virtual ~LuggageDirectResponseBodyData() = default;
};
class LuggageDirectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<LuggageDirectResponseBodyData>> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<boost::any> errorData{};
  shared_ptr<string> errorMsg{};
  shared_ptr<long> status{};
  shared_ptr<bool> success{};

  LuggageDirectResponseBody() {}

  explicit LuggageDirectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["data"] = boost::any(temp1);
    }
    if (errorCode) {
      res["error_code"] = boost::any(*errorCode);
    }
    if (errorData) {
      res["error_data"] = boost::any(*errorData);
    }
    if (errorMsg) {
      res["error_msg"] = boost::any(*errorMsg);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<LuggageDirectResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            LuggageDirectResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<LuggageDirectResponseBodyData>>(expect1);
      }
    }
    if (m.find("error_code") != m.end() && !m["error_code"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["error_code"]));
    }
    if (m.find("error_data") != m.end() && !m["error_data"].empty()) {
      errorData = make_shared<boost::any>(boost::any_cast<boost::any>(m["error_data"]));
    }
    if (m.find("error_msg") != m.end() && !m["error_msg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["error_msg"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~LuggageDirectResponseBody() = default;
};
class LuggageDirectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<LuggageDirectResponseBody> body{};

  LuggageDirectResponse() {}

  explicit LuggageDirectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        LuggageDirectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<LuggageDirectResponseBody>(model1);
      }
    }
  }


  virtual ~LuggageDirectResponse() = default;
};
class OrderDetailHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAirticketAccessToken{};
  shared_ptr<string> xAcsAirticketLanguage{};

  OrderDetailHeaders() {}

  explicit OrderDetailHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAirticketAccessToken) {
      res["x-acs-airticket-access-token"] = boost::any(*xAcsAirticketAccessToken);
    }
    if (xAcsAirticketLanguage) {
      res["x-acs-airticket-language"] = boost::any(*xAcsAirticketLanguage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("x-acs-airticket-access-token") != m.end() && !m["x-acs-airticket-access-token"].empty()) {
      xAcsAirticketAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-airticket-access-token"]));
    }
    if (m.find("x-acs-airticket-language") != m.end() && !m["x-acs-airticket-language"].empty()) {
      xAcsAirticketLanguage = make_shared<string>(boost::any_cast<string>(m["x-acs-airticket-language"]));
    }
  }


  virtual ~OrderDetailHeaders() = default;
};
class OrderDetailRequest : public Darabonba::Model {
public:
  shared_ptr<long> orderNum{};
  shared_ptr<string> outOrderNum{};

  OrderDetailRequest() {}

  explicit OrderDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderNum) {
      res["order_num"] = boost::any(*orderNum);
    }
    if (outOrderNum) {
      res["out_order_num"] = boost::any(*outOrderNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("order_num") != m.end() && !m["order_num"].empty()) {
      orderNum = make_shared<long>(boost::any_cast<long>(m["order_num"]));
    }
    if (m.find("out_order_num") != m.end() && !m["out_order_num"].empty()) {
      outOrderNum = make_shared<string>(boost::any_cast<string>(m["out_order_num"]));
    }
  }


  virtual ~OrderDetailRequest() = default;
};
class OrderDetailResponseBodyDataAncillaryItemDetailListAncillaryBaggageAncillary : public Darabonba::Model {
public:
  shared_ptr<long> baggageAmount{};
  shared_ptr<long> baggageWeight{};
  shared_ptr<string> baggageWeightUnit{};
  shared_ptr<bool> isAllWeight{};
  shared_ptr<double> price{};

  OrderDetailResponseBodyDataAncillaryItemDetailListAncillaryBaggageAncillary() {}

  explicit OrderDetailResponseBodyDataAncillaryItemDetailListAncillaryBaggageAncillary(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (baggageAmount) {
      res["baggage_amount"] = boost::any(*baggageAmount);
    }
    if (baggageWeight) {
      res["baggage_weight"] = boost::any(*baggageWeight);
    }
    if (baggageWeightUnit) {
      res["baggage_weight_unit"] = boost::any(*baggageWeightUnit);
    }
    if (isAllWeight) {
      res["is_all_weight"] = boost::any(*isAllWeight);
    }
    if (price) {
      res["price"] = boost::any(*price);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("baggage_amount") != m.end() && !m["baggage_amount"].empty()) {
      baggageAmount = make_shared<long>(boost::any_cast<long>(m["baggage_amount"]));
    }
    if (m.find("baggage_weight") != m.end() && !m["baggage_weight"].empty()) {
      baggageWeight = make_shared<long>(boost::any_cast<long>(m["baggage_weight"]));
    }
    if (m.find("baggage_weight_unit") != m.end() && !m["baggage_weight_unit"].empty()) {
      baggageWeightUnit = make_shared<string>(boost::any_cast<string>(m["baggage_weight_unit"]));
    }
    if (m.find("is_all_weight") != m.end() && !m["is_all_weight"].empty()) {
      isAllWeight = make_shared<bool>(boost::any_cast<bool>(m["is_all_weight"]));
    }
    if (m.find("price") != m.end() && !m["price"].empty()) {
      price = make_shared<double>(boost::any_cast<double>(m["price"]));
    }
  }


  virtual ~OrderDetailResponseBodyDataAncillaryItemDetailListAncillaryBaggageAncillary() = default;
};
class OrderDetailResponseBodyDataAncillaryItemDetailListAncillary : public Darabonba::Model {
public:
  shared_ptr<string> ancillaryId{};
  shared_ptr<long> ancillaryType{};
  shared_ptr<OrderDetailResponseBodyDataAncillaryItemDetailListAncillaryBaggageAncillary> baggageAncillary{};

  OrderDetailResponseBodyDataAncillaryItemDetailListAncillary() {}

  explicit OrderDetailResponseBodyDataAncillaryItemDetailListAncillary(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ancillaryId) {
      res["ancillary_id"] = boost::any(*ancillaryId);
    }
    if (ancillaryType) {
      res["ancillary_type"] = boost::any(*ancillaryType);
    }
    if (baggageAncillary) {
      res["baggage_ancillary"] = baggageAncillary ? boost::any(baggageAncillary->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ancillary_id") != m.end() && !m["ancillary_id"].empty()) {
      ancillaryId = make_shared<string>(boost::any_cast<string>(m["ancillary_id"]));
    }
    if (m.find("ancillary_type") != m.end() && !m["ancillary_type"].empty()) {
      ancillaryType = make_shared<long>(boost::any_cast<long>(m["ancillary_type"]));
    }
    if (m.find("baggage_ancillary") != m.end() && !m["baggage_ancillary"].empty()) {
      if (typeid(map<string, boost::any>) == m["baggage_ancillary"].type()) {
        OrderDetailResponseBodyDataAncillaryItemDetailListAncillaryBaggageAncillary model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["baggage_ancillary"]));
        baggageAncillary = make_shared<OrderDetailResponseBodyDataAncillaryItemDetailListAncillaryBaggageAncillary>(model1);
      }
    }
  }


  virtual ~OrderDetailResponseBodyDataAncillaryItemDetailListAncillary() = default;
};
class OrderDetailResponseBodyDataAncillaryItemDetailListPassengerCredential : public Darabonba::Model {
public:
  shared_ptr<string> certIssuePlace{};
  shared_ptr<string> credentialNum{};
  shared_ptr<long> credentialType{};
  shared_ptr<string> expireDate{};

  OrderDetailResponseBodyDataAncillaryItemDetailListPassengerCredential() {}

  explicit OrderDetailResponseBodyDataAncillaryItemDetailListPassengerCredential(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certIssuePlace) {
      res["cert_issue_place"] = boost::any(*certIssuePlace);
    }
    if (credentialNum) {
      res["credential_num"] = boost::any(*credentialNum);
    }
    if (credentialType) {
      res["credential_type"] = boost::any(*credentialType);
    }
    if (expireDate) {
      res["expire_date"] = boost::any(*expireDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cert_issue_place") != m.end() && !m["cert_issue_place"].empty()) {
      certIssuePlace = make_shared<string>(boost::any_cast<string>(m["cert_issue_place"]));
    }
    if (m.find("credential_num") != m.end() && !m["credential_num"].empty()) {
      credentialNum = make_shared<string>(boost::any_cast<string>(m["credential_num"]));
    }
    if (m.find("credential_type") != m.end() && !m["credential_type"].empty()) {
      credentialType = make_shared<long>(boost::any_cast<long>(m["credential_type"]));
    }
    if (m.find("expire_date") != m.end() && !m["expire_date"].empty()) {
      expireDate = make_shared<string>(boost::any_cast<string>(m["expire_date"]));
    }
  }


  virtual ~OrderDetailResponseBodyDataAncillaryItemDetailListPassengerCredential() = default;
};
class OrderDetailResponseBodyDataAncillaryItemDetailListPassenger : public Darabonba::Model {
public:
  shared_ptr<string> birthday{};
  shared_ptr<OrderDetailResponseBodyDataAncillaryItemDetailListPassengerCredential> credential{};
  shared_ptr<string> firstName{};
  shared_ptr<long> gender{};
  shared_ptr<string> lastName{};
  shared_ptr<string> mobileCountryCode{};
  shared_ptr<string> mobilePhoneNumber{};
  shared_ptr<string> nationality{};
  shared_ptr<long> type{};

  OrderDetailResponseBodyDataAncillaryItemDetailListPassenger() {}

  explicit OrderDetailResponseBodyDataAncillaryItemDetailListPassenger(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (birthday) {
      res["birthday"] = boost::any(*birthday);
    }
    if (credential) {
      res["credential"] = credential ? boost::any(credential->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (firstName) {
      res["first_name"] = boost::any(*firstName);
    }
    if (gender) {
      res["gender"] = boost::any(*gender);
    }
    if (lastName) {
      res["last_name"] = boost::any(*lastName);
    }
    if (mobileCountryCode) {
      res["mobile_country_code"] = boost::any(*mobileCountryCode);
    }
    if (mobilePhoneNumber) {
      res["mobile_phone_number"] = boost::any(*mobilePhoneNumber);
    }
    if (nationality) {
      res["nationality"] = boost::any(*nationality);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("birthday") != m.end() && !m["birthday"].empty()) {
      birthday = make_shared<string>(boost::any_cast<string>(m["birthday"]));
    }
    if (m.find("credential") != m.end() && !m["credential"].empty()) {
      if (typeid(map<string, boost::any>) == m["credential"].type()) {
        OrderDetailResponseBodyDataAncillaryItemDetailListPassengerCredential model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["credential"]));
        credential = make_shared<OrderDetailResponseBodyDataAncillaryItemDetailListPassengerCredential>(model1);
      }
    }
    if (m.find("first_name") != m.end() && !m["first_name"].empty()) {
      firstName = make_shared<string>(boost::any_cast<string>(m["first_name"]));
    }
    if (m.find("gender") != m.end() && !m["gender"].empty()) {
      gender = make_shared<long>(boost::any_cast<long>(m["gender"]));
    }
    if (m.find("last_name") != m.end() && !m["last_name"].empty()) {
      lastName = make_shared<string>(boost::any_cast<string>(m["last_name"]));
    }
    if (m.find("mobile_country_code") != m.end() && !m["mobile_country_code"].empty()) {
      mobileCountryCode = make_shared<string>(boost::any_cast<string>(m["mobile_country_code"]));
    }
    if (m.find("mobile_phone_number") != m.end() && !m["mobile_phone_number"].empty()) {
      mobilePhoneNumber = make_shared<string>(boost::any_cast<string>(m["mobile_phone_number"]));
    }
    if (m.find("nationality") != m.end() && !m["nationality"].empty()) {
      nationality = make_shared<string>(boost::any_cast<string>(m["nationality"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["type"]));
    }
  }


  virtual ~OrderDetailResponseBodyDataAncillaryItemDetailListPassenger() = default;
};
class OrderDetailResponseBodyDataAncillaryItemDetailList : public Darabonba::Model {
public:
  shared_ptr<OrderDetailResponseBodyDataAncillaryItemDetailListAncillary> ancillary{};
  shared_ptr<OrderDetailResponseBodyDataAncillaryItemDetailListPassenger> passenger{};
  shared_ptr<vector<string>> segmentIdList{};

  OrderDetailResponseBodyDataAncillaryItemDetailList() {}

  explicit OrderDetailResponseBodyDataAncillaryItemDetailList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ancillary) {
      res["ancillary"] = ancillary ? boost::any(ancillary->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (passenger) {
      res["passenger"] = passenger ? boost::any(passenger->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (segmentIdList) {
      res["segment_id_list"] = boost::any(*segmentIdList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ancillary") != m.end() && !m["ancillary"].empty()) {
      if (typeid(map<string, boost::any>) == m["ancillary"].type()) {
        OrderDetailResponseBodyDataAncillaryItemDetailListAncillary model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ancillary"]));
        ancillary = make_shared<OrderDetailResponseBodyDataAncillaryItemDetailListAncillary>(model1);
      }
    }
    if (m.find("passenger") != m.end() && !m["passenger"].empty()) {
      if (typeid(map<string, boost::any>) == m["passenger"].type()) {
        OrderDetailResponseBodyDataAncillaryItemDetailListPassenger model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["passenger"]));
        passenger = make_shared<OrderDetailResponseBodyDataAncillaryItemDetailListPassenger>(model1);
      }
    }
    if (m.find("segment_id_list") != m.end() && !m["segment_id_list"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["segment_id_list"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["segment_id_list"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      segmentIdList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~OrderDetailResponseBodyDataAncillaryItemDetailList() = default;
};
class OrderDetailResponseBodyDataFlightItemDetailListFlightPrice : public Darabonba::Model {
public:
  shared_ptr<double> sellPrice{};
  shared_ptr<double> tax{};

  OrderDetailResponseBodyDataFlightItemDetailListFlightPrice() {}

  explicit OrderDetailResponseBodyDataFlightItemDetailListFlightPrice(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sellPrice) {
      res["sell_price"] = boost::any(*sellPrice);
    }
    if (tax) {
      res["tax"] = boost::any(*tax);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("sell_price") != m.end() && !m["sell_price"].empty()) {
      sellPrice = make_shared<double>(boost::any_cast<double>(m["sell_price"]));
    }
    if (m.find("tax") != m.end() && !m["tax"].empty()) {
      tax = make_shared<double>(boost::any_cast<double>(m["tax"]));
    }
  }


  virtual ~OrderDetailResponseBodyDataFlightItemDetailListFlightPrice() = default;
};
class OrderDetailResponseBodyDataFlightItemDetailListFlightSegmentCabinRelation : public Darabonba::Model {
public:
  shared_ptr<string> cabin{};
  shared_ptr<string> cabinClass{};
  shared_ptr<string> cabinClassName{};
  shared_ptr<string> cabinQuantity{};
  shared_ptr<string> segmentId{};

  OrderDetailResponseBodyDataFlightItemDetailListFlightSegmentCabinRelation() {}

  explicit OrderDetailResponseBodyDataFlightItemDetailListFlightSegmentCabinRelation(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cabin) {
      res["cabin"] = boost::any(*cabin);
    }
    if (cabinClass) {
      res["cabin_class"] = boost::any(*cabinClass);
    }
    if (cabinClassName) {
      res["cabin_class_name"] = boost::any(*cabinClassName);
    }
    if (cabinQuantity) {
      res["cabin_quantity"] = boost::any(*cabinQuantity);
    }
    if (segmentId) {
      res["segment_id"] = boost::any(*segmentId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cabin") != m.end() && !m["cabin"].empty()) {
      cabin = make_shared<string>(boost::any_cast<string>(m["cabin"]));
    }
    if (m.find("cabin_class") != m.end() && !m["cabin_class"].empty()) {
      cabinClass = make_shared<string>(boost::any_cast<string>(m["cabin_class"]));
    }
    if (m.find("cabin_class_name") != m.end() && !m["cabin_class_name"].empty()) {
      cabinClassName = make_shared<string>(boost::any_cast<string>(m["cabin_class_name"]));
    }
    if (m.find("cabin_quantity") != m.end() && !m["cabin_quantity"].empty()) {
      cabinQuantity = make_shared<string>(boost::any_cast<string>(m["cabin_quantity"]));
    }
    if (m.find("segment_id") != m.end() && !m["segment_id"].empty()) {
      segmentId = make_shared<string>(boost::any_cast<string>(m["segment_id"]));
    }
  }


  virtual ~OrderDetailResponseBodyDataFlightItemDetailListFlightSegmentCabinRelation() = default;
};
class OrderDetailResponseBodyDataFlightItemDetailListPassengerCredential : public Darabonba::Model {
public:
  shared_ptr<string> certIssuePlace{};
  shared_ptr<string> credentialNum{};
  shared_ptr<long> credentialType{};
  shared_ptr<string> expireDate{};

  OrderDetailResponseBodyDataFlightItemDetailListPassengerCredential() {}

  explicit OrderDetailResponseBodyDataFlightItemDetailListPassengerCredential(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certIssuePlace) {
      res["cert_issue_place"] = boost::any(*certIssuePlace);
    }
    if (credentialNum) {
      res["credential_num"] = boost::any(*credentialNum);
    }
    if (credentialType) {
      res["credential_type"] = boost::any(*credentialType);
    }
    if (expireDate) {
      res["expire_date"] = boost::any(*expireDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cert_issue_place") != m.end() && !m["cert_issue_place"].empty()) {
      certIssuePlace = make_shared<string>(boost::any_cast<string>(m["cert_issue_place"]));
    }
    if (m.find("credential_num") != m.end() && !m["credential_num"].empty()) {
      credentialNum = make_shared<string>(boost::any_cast<string>(m["credential_num"]));
    }
    if (m.find("credential_type") != m.end() && !m["credential_type"].empty()) {
      credentialType = make_shared<long>(boost::any_cast<long>(m["credential_type"]));
    }
    if (m.find("expire_date") != m.end() && !m["expire_date"].empty()) {
      expireDate = make_shared<string>(boost::any_cast<string>(m["expire_date"]));
    }
  }


  virtual ~OrderDetailResponseBodyDataFlightItemDetailListPassengerCredential() = default;
};
class OrderDetailResponseBodyDataFlightItemDetailListPassenger : public Darabonba::Model {
public:
  shared_ptr<string> birthday{};
  shared_ptr<OrderDetailResponseBodyDataFlightItemDetailListPassengerCredential> credential{};
  shared_ptr<string> firstName{};
  shared_ptr<long> gender{};
  shared_ptr<string> lastName{};
  shared_ptr<string> mobileCountryCode{};
  shared_ptr<string> mobilePhoneNumber{};
  shared_ptr<string> nationality{};
  shared_ptr<long> type{};

  OrderDetailResponseBodyDataFlightItemDetailListPassenger() {}

  explicit OrderDetailResponseBodyDataFlightItemDetailListPassenger(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (birthday) {
      res["birthday"] = boost::any(*birthday);
    }
    if (credential) {
      res["credential"] = credential ? boost::any(credential->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (firstName) {
      res["first_name"] = boost::any(*firstName);
    }
    if (gender) {
      res["gender"] = boost::any(*gender);
    }
    if (lastName) {
      res["last_name"] = boost::any(*lastName);
    }
    if (mobileCountryCode) {
      res["mobile_country_code"] = boost::any(*mobileCountryCode);
    }
    if (mobilePhoneNumber) {
      res["mobile_phone_number"] = boost::any(*mobilePhoneNumber);
    }
    if (nationality) {
      res["nationality"] = boost::any(*nationality);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("birthday") != m.end() && !m["birthday"].empty()) {
      birthday = make_shared<string>(boost::any_cast<string>(m["birthday"]));
    }
    if (m.find("credential") != m.end() && !m["credential"].empty()) {
      if (typeid(map<string, boost::any>) == m["credential"].type()) {
        OrderDetailResponseBodyDataFlightItemDetailListPassengerCredential model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["credential"]));
        credential = make_shared<OrderDetailResponseBodyDataFlightItemDetailListPassengerCredential>(model1);
      }
    }
    if (m.find("first_name") != m.end() && !m["first_name"].empty()) {
      firstName = make_shared<string>(boost::any_cast<string>(m["first_name"]));
    }
    if (m.find("gender") != m.end() && !m["gender"].empty()) {
      gender = make_shared<long>(boost::any_cast<long>(m["gender"]));
    }
    if (m.find("last_name") != m.end() && !m["last_name"].empty()) {
      lastName = make_shared<string>(boost::any_cast<string>(m["last_name"]));
    }
    if (m.find("mobile_country_code") != m.end() && !m["mobile_country_code"].empty()) {
      mobileCountryCode = make_shared<string>(boost::any_cast<string>(m["mobile_country_code"]));
    }
    if (m.find("mobile_phone_number") != m.end() && !m["mobile_phone_number"].empty()) {
      mobilePhoneNumber = make_shared<string>(boost::any_cast<string>(m["mobile_phone_number"]));
    }
    if (m.find("nationality") != m.end() && !m["nationality"].empty()) {
      nationality = make_shared<string>(boost::any_cast<string>(m["nationality"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["type"]));
    }
  }


  virtual ~OrderDetailResponseBodyDataFlightItemDetailListPassenger() = default;
};
class OrderDetailResponseBodyDataFlightItemDetailList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> bPnrList{};
  shared_ptr<vector<string>> cPnrList{};
  shared_ptr<OrderDetailResponseBodyDataFlightItemDetailListFlightPrice> flightPrice{};
  shared_ptr<vector<OrderDetailResponseBodyDataFlightItemDetailListFlightSegmentCabinRelation>> flightSegmentCabinRelation{};
  shared_ptr<OrderDetailResponseBodyDataFlightItemDetailListPassenger> passenger{};
  shared_ptr<string> ticketAirLine{};
  shared_ptr<vector<string>> ticketNos{};

  OrderDetailResponseBodyDataFlightItemDetailList() {}

  explicit OrderDetailResponseBodyDataFlightItemDetailList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bPnrList) {
      res["b_pnr_list"] = boost::any(*bPnrList);
    }
    if (cPnrList) {
      res["c_pnr_list"] = boost::any(*cPnrList);
    }
    if (flightPrice) {
      res["flight_price"] = flightPrice ? boost::any(flightPrice->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (flightSegmentCabinRelation) {
      vector<boost::any> temp1;
      for(auto item1:*flightSegmentCabinRelation){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["flight_segment_cabin_relation"] = boost::any(temp1);
    }
    if (passenger) {
      res["passenger"] = passenger ? boost::any(passenger->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (ticketAirLine) {
      res["ticket_air_line"] = boost::any(*ticketAirLine);
    }
    if (ticketNos) {
      res["ticket_nos"] = boost::any(*ticketNos);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("b_pnr_list") != m.end() && !m["b_pnr_list"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["b_pnr_list"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["b_pnr_list"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      bPnrList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("c_pnr_list") != m.end() && !m["c_pnr_list"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["c_pnr_list"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["c_pnr_list"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      cPnrList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("flight_price") != m.end() && !m["flight_price"].empty()) {
      if (typeid(map<string, boost::any>) == m["flight_price"].type()) {
        OrderDetailResponseBodyDataFlightItemDetailListFlightPrice model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["flight_price"]));
        flightPrice = make_shared<OrderDetailResponseBodyDataFlightItemDetailListFlightPrice>(model1);
      }
    }
    if (m.find("flight_segment_cabin_relation") != m.end() && !m["flight_segment_cabin_relation"].empty()) {
      if (typeid(vector<boost::any>) == m["flight_segment_cabin_relation"].type()) {
        vector<OrderDetailResponseBodyDataFlightItemDetailListFlightSegmentCabinRelation> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["flight_segment_cabin_relation"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            OrderDetailResponseBodyDataFlightItemDetailListFlightSegmentCabinRelation model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        flightSegmentCabinRelation = make_shared<vector<OrderDetailResponseBodyDataFlightItemDetailListFlightSegmentCabinRelation>>(expect1);
      }
    }
    if (m.find("passenger") != m.end() && !m["passenger"].empty()) {
      if (typeid(map<string, boost::any>) == m["passenger"].type()) {
        OrderDetailResponseBodyDataFlightItemDetailListPassenger model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["passenger"]));
        passenger = make_shared<OrderDetailResponseBodyDataFlightItemDetailListPassenger>(model1);
      }
    }
    if (m.find("ticket_air_line") != m.end() && !m["ticket_air_line"].empty()) {
      ticketAirLine = make_shared<string>(boost::any_cast<string>(m["ticket_air_line"]));
    }
    if (m.find("ticket_nos") != m.end() && !m["ticket_nos"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ticket_nos"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ticket_nos"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ticketNos = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~OrderDetailResponseBodyDataFlightItemDetailList() = default;
};
class OrderDetailResponseBodyDataPassengerListCredential : public Darabonba::Model {
public:
  shared_ptr<string> certIssuePlace{};
  shared_ptr<string> credentialNum{};
  shared_ptr<long> credentialType{};
  shared_ptr<string> expireDate{};

  OrderDetailResponseBodyDataPassengerListCredential() {}

  explicit OrderDetailResponseBodyDataPassengerListCredential(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certIssuePlace) {
      res["cert_issue_place"] = boost::any(*certIssuePlace);
    }
    if (credentialNum) {
      res["credential_num"] = boost::any(*credentialNum);
    }
    if (credentialType) {
      res["credential_type"] = boost::any(*credentialType);
    }
    if (expireDate) {
      res["expire_date"] = boost::any(*expireDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cert_issue_place") != m.end() && !m["cert_issue_place"].empty()) {
      certIssuePlace = make_shared<string>(boost::any_cast<string>(m["cert_issue_place"]));
    }
    if (m.find("credential_num") != m.end() && !m["credential_num"].empty()) {
      credentialNum = make_shared<string>(boost::any_cast<string>(m["credential_num"]));
    }
    if (m.find("credential_type") != m.end() && !m["credential_type"].empty()) {
      credentialType = make_shared<long>(boost::any_cast<long>(m["credential_type"]));
    }
    if (m.find("expire_date") != m.end() && !m["expire_date"].empty()) {
      expireDate = make_shared<string>(boost::any_cast<string>(m["expire_date"]));
    }
  }


  virtual ~OrderDetailResponseBodyDataPassengerListCredential() = default;
};
class OrderDetailResponseBodyDataPassengerList : public Darabonba::Model {
public:
  shared_ptr<string> birthday{};
  shared_ptr<OrderDetailResponseBodyDataPassengerListCredential> credential{};
  shared_ptr<string> firstName{};
  shared_ptr<long> gender{};
  shared_ptr<string> lastName{};
  shared_ptr<string> mobileCountryCode{};
  shared_ptr<string> mobilePhoneNumber{};
  shared_ptr<string> nationality{};
  shared_ptr<long> type{};

  OrderDetailResponseBodyDataPassengerList() {}

  explicit OrderDetailResponseBodyDataPassengerList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (birthday) {
      res["birthday"] = boost::any(*birthday);
    }
    if (credential) {
      res["credential"] = credential ? boost::any(credential->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (firstName) {
      res["first_name"] = boost::any(*firstName);
    }
    if (gender) {
      res["gender"] = boost::any(*gender);
    }
    if (lastName) {
      res["last_name"] = boost::any(*lastName);
    }
    if (mobileCountryCode) {
      res["mobile_country_code"] = boost::any(*mobileCountryCode);
    }
    if (mobilePhoneNumber) {
      res["mobile_phone_number"] = boost::any(*mobilePhoneNumber);
    }
    if (nationality) {
      res["nationality"] = boost::any(*nationality);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("birthday") != m.end() && !m["birthday"].empty()) {
      birthday = make_shared<string>(boost::any_cast<string>(m["birthday"]));
    }
    if (m.find("credential") != m.end() && !m["credential"].empty()) {
      if (typeid(map<string, boost::any>) == m["credential"].type()) {
        OrderDetailResponseBodyDataPassengerListCredential model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["credential"]));
        credential = make_shared<OrderDetailResponseBodyDataPassengerListCredential>(model1);
      }
    }
    if (m.find("first_name") != m.end() && !m["first_name"].empty()) {
      firstName = make_shared<string>(boost::any_cast<string>(m["first_name"]));
    }
    if (m.find("gender") != m.end() && !m["gender"].empty()) {
      gender = make_shared<long>(boost::any_cast<long>(m["gender"]));
    }
    if (m.find("last_name") != m.end() && !m["last_name"].empty()) {
      lastName = make_shared<string>(boost::any_cast<string>(m["last_name"]));
    }
    if (m.find("mobile_country_code") != m.end() && !m["mobile_country_code"].empty()) {
      mobileCountryCode = make_shared<string>(boost::any_cast<string>(m["mobile_country_code"]));
    }
    if (m.find("mobile_phone_number") != m.end() && !m["mobile_phone_number"].empty()) {
      mobilePhoneNumber = make_shared<string>(boost::any_cast<string>(m["mobile_phone_number"]));
    }
    if (m.find("nationality") != m.end() && !m["nationality"].empty()) {
      nationality = make_shared<string>(boost::any_cast<string>(m["nationality"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["type"]));
    }
  }


  virtual ~OrderDetailResponseBodyDataPassengerList() = default;
};
class OrderDetailResponseBodyDataSolutionJourneyListSegmentList : public Darabonba::Model {
public:
  shared_ptr<string> arrivalAirport{};
  shared_ptr<string> arrivalCity{};
  shared_ptr<string> arrivalTerminal{};
  shared_ptr<string> arrivalTime{};
  shared_ptr<string> availability{};
  shared_ptr<string> cabin{};
  shared_ptr<string> cabinClass{};
  shared_ptr<bool> codeShare{};
  shared_ptr<string> departureAirport{};
  shared_ptr<string> departureCity{};
  shared_ptr<string> departureTerminal{};
  shared_ptr<string> departureTime{};
  shared_ptr<string> equipType{};
  shared_ptr<long> flightDuration{};
  shared_ptr<string> marketingAirline{};
  shared_ptr<string> marketingFlightNo{};
  shared_ptr<long> marketingFlightNoInt{};
  shared_ptr<string> operatingAirline{};
  shared_ptr<string> operatingFlightNo{};
  shared_ptr<string> segmentId{};
  shared_ptr<string> stopCityList{};
  shared_ptr<long> stopQuantity{};

  OrderDetailResponseBodyDataSolutionJourneyListSegmentList() {}

  explicit OrderDetailResponseBodyDataSolutionJourneyListSegmentList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arrivalAirport) {
      res["arrival_airport"] = boost::any(*arrivalAirport);
    }
    if (arrivalCity) {
      res["arrival_city"] = boost::any(*arrivalCity);
    }
    if (arrivalTerminal) {
      res["arrival_terminal"] = boost::any(*arrivalTerminal);
    }
    if (arrivalTime) {
      res["arrival_time"] = boost::any(*arrivalTime);
    }
    if (availability) {
      res["availability"] = boost::any(*availability);
    }
    if (cabin) {
      res["cabin"] = boost::any(*cabin);
    }
    if (cabinClass) {
      res["cabin_class"] = boost::any(*cabinClass);
    }
    if (codeShare) {
      res["code_share"] = boost::any(*codeShare);
    }
    if (departureAirport) {
      res["departure_airport"] = boost::any(*departureAirport);
    }
    if (departureCity) {
      res["departure_city"] = boost::any(*departureCity);
    }
    if (departureTerminal) {
      res["departure_terminal"] = boost::any(*departureTerminal);
    }
    if (departureTime) {
      res["departure_time"] = boost::any(*departureTime);
    }
    if (equipType) {
      res["equip_type"] = boost::any(*equipType);
    }
    if (flightDuration) {
      res["flight_duration"] = boost::any(*flightDuration);
    }
    if (marketingAirline) {
      res["marketing_airline"] = boost::any(*marketingAirline);
    }
    if (marketingFlightNo) {
      res["marketing_flight_no"] = boost::any(*marketingFlightNo);
    }
    if (marketingFlightNoInt) {
      res["marketing_flight_no_int"] = boost::any(*marketingFlightNoInt);
    }
    if (operatingAirline) {
      res["operating_airline"] = boost::any(*operatingAirline);
    }
    if (operatingFlightNo) {
      res["operating_flight_no"] = boost::any(*operatingFlightNo);
    }
    if (segmentId) {
      res["segment_id"] = boost::any(*segmentId);
    }
    if (stopCityList) {
      res["stop_city_list"] = boost::any(*stopCityList);
    }
    if (stopQuantity) {
      res["stop_quantity"] = boost::any(*stopQuantity);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("arrival_airport") != m.end() && !m["arrival_airport"].empty()) {
      arrivalAirport = make_shared<string>(boost::any_cast<string>(m["arrival_airport"]));
    }
    if (m.find("arrival_city") != m.end() && !m["arrival_city"].empty()) {
      arrivalCity = make_shared<string>(boost::any_cast<string>(m["arrival_city"]));
    }
    if (m.find("arrival_terminal") != m.end() && !m["arrival_terminal"].empty()) {
      arrivalTerminal = make_shared<string>(boost::any_cast<string>(m["arrival_terminal"]));
    }
    if (m.find("arrival_time") != m.end() && !m["arrival_time"].empty()) {
      arrivalTime = make_shared<string>(boost::any_cast<string>(m["arrival_time"]));
    }
    if (m.find("availability") != m.end() && !m["availability"].empty()) {
      availability = make_shared<string>(boost::any_cast<string>(m["availability"]));
    }
    if (m.find("cabin") != m.end() && !m["cabin"].empty()) {
      cabin = make_shared<string>(boost::any_cast<string>(m["cabin"]));
    }
    if (m.find("cabin_class") != m.end() && !m["cabin_class"].empty()) {
      cabinClass = make_shared<string>(boost::any_cast<string>(m["cabin_class"]));
    }
    if (m.find("code_share") != m.end() && !m["code_share"].empty()) {
      codeShare = make_shared<bool>(boost::any_cast<bool>(m["code_share"]));
    }
    if (m.find("departure_airport") != m.end() && !m["departure_airport"].empty()) {
      departureAirport = make_shared<string>(boost::any_cast<string>(m["departure_airport"]));
    }
    if (m.find("departure_city") != m.end() && !m["departure_city"].empty()) {
      departureCity = make_shared<string>(boost::any_cast<string>(m["departure_city"]));
    }
    if (m.find("departure_terminal") != m.end() && !m["departure_terminal"].empty()) {
      departureTerminal = make_shared<string>(boost::any_cast<string>(m["departure_terminal"]));
    }
    if (m.find("departure_time") != m.end() && !m["departure_time"].empty()) {
      departureTime = make_shared<string>(boost::any_cast<string>(m["departure_time"]));
    }
    if (m.find("equip_type") != m.end() && !m["equip_type"].empty()) {
      equipType = make_shared<string>(boost::any_cast<string>(m["equip_type"]));
    }
    if (m.find("flight_duration") != m.end() && !m["flight_duration"].empty()) {
      flightDuration = make_shared<long>(boost::any_cast<long>(m["flight_duration"]));
    }
    if (m.find("marketing_airline") != m.end() && !m["marketing_airline"].empty()) {
      marketingAirline = make_shared<string>(boost::any_cast<string>(m["marketing_airline"]));
    }
    if (m.find("marketing_flight_no") != m.end() && !m["marketing_flight_no"].empty()) {
      marketingFlightNo = make_shared<string>(boost::any_cast<string>(m["marketing_flight_no"]));
    }
    if (m.find("marketing_flight_no_int") != m.end() && !m["marketing_flight_no_int"].empty()) {
      marketingFlightNoInt = make_shared<long>(boost::any_cast<long>(m["marketing_flight_no_int"]));
    }
    if (m.find("operating_airline") != m.end() && !m["operating_airline"].empty()) {
      operatingAirline = make_shared<string>(boost::any_cast<string>(m["operating_airline"]));
    }
    if (m.find("operating_flight_no") != m.end() && !m["operating_flight_no"].empty()) {
      operatingFlightNo = make_shared<string>(boost::any_cast<string>(m["operating_flight_no"]));
    }
    if (m.find("segment_id") != m.end() && !m["segment_id"].empty()) {
      segmentId = make_shared<string>(boost::any_cast<string>(m["segment_id"]));
    }
    if (m.find("stop_city_list") != m.end() && !m["stop_city_list"].empty()) {
      stopCityList = make_shared<string>(boost::any_cast<string>(m["stop_city_list"]));
    }
    if (m.find("stop_quantity") != m.end() && !m["stop_quantity"].empty()) {
      stopQuantity = make_shared<long>(boost::any_cast<long>(m["stop_quantity"]));
    }
  }


  virtual ~OrderDetailResponseBodyDataSolutionJourneyListSegmentList() = default;
};
class OrderDetailResponseBodyDataSolutionJourneyList : public Darabonba::Model {
public:
  shared_ptr<vector<OrderDetailResponseBodyDataSolutionJourneyListSegmentList>> segmentList{};
  shared_ptr<long> transferCount{};

  OrderDetailResponseBodyDataSolutionJourneyList() {}

  explicit OrderDetailResponseBodyDataSolutionJourneyList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (segmentList) {
      vector<boost::any> temp1;
      for(auto item1:*segmentList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["segment_list"] = boost::any(temp1);
    }
    if (transferCount) {
      res["transfer_count"] = boost::any(*transferCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("segment_list") != m.end() && !m["segment_list"].empty()) {
      if (typeid(vector<boost::any>) == m["segment_list"].type()) {
        vector<OrderDetailResponseBodyDataSolutionJourneyListSegmentList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["segment_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            OrderDetailResponseBodyDataSolutionJourneyListSegmentList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        segmentList = make_shared<vector<OrderDetailResponseBodyDataSolutionJourneyListSegmentList>>(expect1);
      }
    }
    if (m.find("transfer_count") != m.end() && !m["transfer_count"].empty()) {
      transferCount = make_shared<long>(boost::any_cast<long>(m["transfer_count"]));
    }
  }


  virtual ~OrderDetailResponseBodyDataSolutionJourneyList() = default;
};
class OrderDetailResponseBodyDataSolutionSegmentBaggageCheckInInfoList : public Darabonba::Model {
public:
  shared_ptr<long> luggageDirectInfoType{};
  shared_ptr<vector<string>> segmentIdList{};

  OrderDetailResponseBodyDataSolutionSegmentBaggageCheckInInfoList() {}

  explicit OrderDetailResponseBodyDataSolutionSegmentBaggageCheckInInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (luggageDirectInfoType) {
      res["luggage_direct_info_type"] = boost::any(*luggageDirectInfoType);
    }
    if (segmentIdList) {
      res["segment_id_list"] = boost::any(*segmentIdList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("luggage_direct_info_type") != m.end() && !m["luggage_direct_info_type"].empty()) {
      luggageDirectInfoType = make_shared<long>(boost::any_cast<long>(m["luggage_direct_info_type"]));
    }
    if (m.find("segment_id_list") != m.end() && !m["segment_id_list"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["segment_id_list"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["segment_id_list"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      segmentIdList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~OrderDetailResponseBodyDataSolutionSegmentBaggageCheckInInfoList() = default;
};
class OrderDetailResponseBodyDataSolutionSegmentBaggageMappingList : public Darabonba::Model {
public:
  shared_ptr<map<string, DataSolutionSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue>> passengerBaggageAllowanceMapping{};
  shared_ptr<vector<string>> segmentIdList{};

  OrderDetailResponseBodyDataSolutionSegmentBaggageMappingList() {}

  explicit OrderDetailResponseBodyDataSolutionSegmentBaggageMappingList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (passengerBaggageAllowanceMapping) {
      map<string, boost::any> temp1;
      for(auto item1:*passengerBaggageAllowanceMapping){
        temp1[item1.first] = boost::any(item1.second.toMap());
      }
      res["passenger_baggage_allowance_mapping"] = boost::any(temp1);
    }
    if (segmentIdList) {
      res["segment_id_list"] = boost::any(*segmentIdList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("passenger_baggage_allowance_mapping") != m.end() && !m["passenger_baggage_allowance_mapping"].empty()) {
      if (typeid(map<string, boost::any>) == m["passenger_baggage_allowance_mapping"].type()) {
        map<string, DataSolutionSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue> expect1;
        for(auto item1:boost::any_cast<map<string, boost::any>>(m["passenger_baggage_allowance_mapping"])){
          if (typeid(map<string, boost::any>) == item1.second.type()) {
            DataSolutionSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1.second));
            expect1[item1.first] = model2;
          }
        }
        passengerBaggageAllowanceMapping = make_shared<map<string, DataSolutionSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue>>(expect1);
      }
    }
    if (m.find("segment_id_list") != m.end() && !m["segment_id_list"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["segment_id_list"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["segment_id_list"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      segmentIdList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~OrderDetailResponseBodyDataSolutionSegmentBaggageMappingList() = default;
};
class OrderDetailResponseBodyDataSolutionSegmentRefundChangeRuleMappingList : public Darabonba::Model {
public:
  shared_ptr<map<string, DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue>> refundChangeRuleMap{};
  shared_ptr<vector<string>> segmentIdList{};

  OrderDetailResponseBodyDataSolutionSegmentRefundChangeRuleMappingList() {}

  explicit OrderDetailResponseBodyDataSolutionSegmentRefundChangeRuleMappingList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (refundChangeRuleMap) {
      map<string, boost::any> temp1;
      for(auto item1:*refundChangeRuleMap){
        temp1[item1.first] = boost::any(item1.second.toMap());
      }
      res["refund_change_rule_map"] = boost::any(temp1);
    }
    if (segmentIdList) {
      res["segment_id_list"] = boost::any(*segmentIdList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("refund_change_rule_map") != m.end() && !m["refund_change_rule_map"].empty()) {
      if (typeid(map<string, boost::any>) == m["refund_change_rule_map"].type()) {
        map<string, DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue> expect1;
        for(auto item1:boost::any_cast<map<string, boost::any>>(m["refund_change_rule_map"])){
          if (typeid(map<string, boost::any>) == item1.second.type()) {
            DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1.second));
            expect1[item1.first] = model2;
          }
        }
        refundChangeRuleMap = make_shared<map<string, DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue>>(expect1);
      }
    }
    if (m.find("segment_id_list") != m.end() && !m["segment_id_list"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["segment_id_list"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["segment_id_list"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      segmentIdList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~OrderDetailResponseBodyDataSolutionSegmentRefundChangeRuleMappingList() = default;
};
class OrderDetailResponseBodyDataSolution : public Darabonba::Model {
public:
  shared_ptr<double> adultPrice{};
  shared_ptr<double> adultTax{};
  shared_ptr<double> childPrice{};
  shared_ptr<double> childTax{};
  shared_ptr<double> infantPrice{};
  shared_ptr<double> infantTax{};
  shared_ptr<vector<OrderDetailResponseBodyDataSolutionJourneyList>> journeyList{};
  shared_ptr<string> productTypeDescription{};
  shared_ptr<string> refundTicketCouponDescription{};
  shared_ptr<vector<OrderDetailResponseBodyDataSolutionSegmentBaggageCheckInInfoList>> segmentBaggageCheckInInfoList{};
  shared_ptr<vector<OrderDetailResponseBodyDataSolutionSegmentBaggageMappingList>> segmentBaggageMappingList{};
  shared_ptr<vector<OrderDetailResponseBodyDataSolutionSegmentRefundChangeRuleMappingList>> segmentRefundChangeRuleMappingList{};
  shared_ptr<string> solutionId{};

  OrderDetailResponseBodyDataSolution() {}

  explicit OrderDetailResponseBodyDataSolution(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (adultPrice) {
      res["adult_price"] = boost::any(*adultPrice);
    }
    if (adultTax) {
      res["adult_tax"] = boost::any(*adultTax);
    }
    if (childPrice) {
      res["child_price"] = boost::any(*childPrice);
    }
    if (childTax) {
      res["child_tax"] = boost::any(*childTax);
    }
    if (infantPrice) {
      res["infant_price"] = boost::any(*infantPrice);
    }
    if (infantTax) {
      res["infant_tax"] = boost::any(*infantTax);
    }
    if (journeyList) {
      vector<boost::any> temp1;
      for(auto item1:*journeyList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["journey_list"] = boost::any(temp1);
    }
    if (productTypeDescription) {
      res["product_type_description"] = boost::any(*productTypeDescription);
    }
    if (refundTicketCouponDescription) {
      res["refund_ticket_coupon_description"] = boost::any(*refundTicketCouponDescription);
    }
    if (segmentBaggageCheckInInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*segmentBaggageCheckInInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["segment_baggage_check_in_info_list"] = boost::any(temp1);
    }
    if (segmentBaggageMappingList) {
      vector<boost::any> temp1;
      for(auto item1:*segmentBaggageMappingList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["segment_baggage_mapping_list"] = boost::any(temp1);
    }
    if (segmentRefundChangeRuleMappingList) {
      vector<boost::any> temp1;
      for(auto item1:*segmentRefundChangeRuleMappingList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["segment_refund_change_rule_mapping_list"] = boost::any(temp1);
    }
    if (solutionId) {
      res["solution_id"] = boost::any(*solutionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("adult_price") != m.end() && !m["adult_price"].empty()) {
      adultPrice = make_shared<double>(boost::any_cast<double>(m["adult_price"]));
    }
    if (m.find("adult_tax") != m.end() && !m["adult_tax"].empty()) {
      adultTax = make_shared<double>(boost::any_cast<double>(m["adult_tax"]));
    }
    if (m.find("child_price") != m.end() && !m["child_price"].empty()) {
      childPrice = make_shared<double>(boost::any_cast<double>(m["child_price"]));
    }
    if (m.find("child_tax") != m.end() && !m["child_tax"].empty()) {
      childTax = make_shared<double>(boost::any_cast<double>(m["child_tax"]));
    }
    if (m.find("infant_price") != m.end() && !m["infant_price"].empty()) {
      infantPrice = make_shared<double>(boost::any_cast<double>(m["infant_price"]));
    }
    if (m.find("infant_tax") != m.end() && !m["infant_tax"].empty()) {
      infantTax = make_shared<double>(boost::any_cast<double>(m["infant_tax"]));
    }
    if (m.find("journey_list") != m.end() && !m["journey_list"].empty()) {
      if (typeid(vector<boost::any>) == m["journey_list"].type()) {
        vector<OrderDetailResponseBodyDataSolutionJourneyList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["journey_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            OrderDetailResponseBodyDataSolutionJourneyList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        journeyList = make_shared<vector<OrderDetailResponseBodyDataSolutionJourneyList>>(expect1);
      }
    }
    if (m.find("product_type_description") != m.end() && !m["product_type_description"].empty()) {
      productTypeDescription = make_shared<string>(boost::any_cast<string>(m["product_type_description"]));
    }
    if (m.find("refund_ticket_coupon_description") != m.end() && !m["refund_ticket_coupon_description"].empty()) {
      refundTicketCouponDescription = make_shared<string>(boost::any_cast<string>(m["refund_ticket_coupon_description"]));
    }
    if (m.find("segment_baggage_check_in_info_list") != m.end() && !m["segment_baggage_check_in_info_list"].empty()) {
      if (typeid(vector<boost::any>) == m["segment_baggage_check_in_info_list"].type()) {
        vector<OrderDetailResponseBodyDataSolutionSegmentBaggageCheckInInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["segment_baggage_check_in_info_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            OrderDetailResponseBodyDataSolutionSegmentBaggageCheckInInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        segmentBaggageCheckInInfoList = make_shared<vector<OrderDetailResponseBodyDataSolutionSegmentBaggageCheckInInfoList>>(expect1);
      }
    }
    if (m.find("segment_baggage_mapping_list") != m.end() && !m["segment_baggage_mapping_list"].empty()) {
      if (typeid(vector<boost::any>) == m["segment_baggage_mapping_list"].type()) {
        vector<OrderDetailResponseBodyDataSolutionSegmentBaggageMappingList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["segment_baggage_mapping_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            OrderDetailResponseBodyDataSolutionSegmentBaggageMappingList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        segmentBaggageMappingList = make_shared<vector<OrderDetailResponseBodyDataSolutionSegmentBaggageMappingList>>(expect1);
      }
    }
    if (m.find("segment_refund_change_rule_mapping_list") != m.end() && !m["segment_refund_change_rule_mapping_list"].empty()) {
      if (typeid(vector<boost::any>) == m["segment_refund_change_rule_mapping_list"].type()) {
        vector<OrderDetailResponseBodyDataSolutionSegmentRefundChangeRuleMappingList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["segment_refund_change_rule_mapping_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            OrderDetailResponseBodyDataSolutionSegmentRefundChangeRuleMappingList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        segmentRefundChangeRuleMappingList = make_shared<vector<OrderDetailResponseBodyDataSolutionSegmentRefundChangeRuleMappingList>>(expect1);
      }
    }
    if (m.find("solution_id") != m.end() && !m["solution_id"].empty()) {
      solutionId = make_shared<string>(boost::any_cast<string>(m["solution_id"]));
    }
  }


  virtual ~OrderDetailResponseBodyDataSolution() = default;
};
class OrderDetailResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<OrderDetailResponseBodyDataAncillaryItemDetailList>> ancillaryItemDetailList{};
  shared_ptr<map<string, DataBaggageAllowanceMapValue>> baggageAllowanceMap{};
  shared_ptr<long> bookTime{};
  shared_ptr<vector<OrderDetailResponseBodyDataFlightItemDetailList>> flightItemDetailList{};
  shared_ptr<long> orderNum{};
  shared_ptr<long> orderStatus{};
  shared_ptr<string> outOrderNum{};
  shared_ptr<vector<OrderDetailResponseBodyDataPassengerList>> passengerList{};
  shared_ptr<long> payStatus{};
  shared_ptr<long> payTime{};
  shared_ptr<double> promotionPrice{};
  shared_ptr<double> realPayPrice{};
  shared_ptr<map<string, DataRefundChangeRuleMapValue>> refundChangeRuleMap{};
  shared_ptr<string> sessionNick{};
  shared_ptr<OrderDetailResponseBodyDataSolution> solution{};
  shared_ptr<long> succeedTime{};
  shared_ptr<double> totalPrice{};
  shared_ptr<string> transactionNo{};

  OrderDetailResponseBodyData() {}

  explicit OrderDetailResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ancillaryItemDetailList) {
      vector<boost::any> temp1;
      for(auto item1:*ancillaryItemDetailList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ancillary_item_detail_list"] = boost::any(temp1);
    }
    if (baggageAllowanceMap) {
      map<string, boost::any> temp1;
      for(auto item1:*baggageAllowanceMap){
        temp1[item1.first] = boost::any(item1.second.toMap());
      }
      res["baggage_allowance_map"] = boost::any(temp1);
    }
    if (bookTime) {
      res["book_time"] = boost::any(*bookTime);
    }
    if (flightItemDetailList) {
      vector<boost::any> temp1;
      for(auto item1:*flightItemDetailList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["flight_item_detail_list"] = boost::any(temp1);
    }
    if (orderNum) {
      res["order_num"] = boost::any(*orderNum);
    }
    if (orderStatus) {
      res["order_status"] = boost::any(*orderStatus);
    }
    if (outOrderNum) {
      res["out_order_num"] = boost::any(*outOrderNum);
    }
    if (passengerList) {
      vector<boost::any> temp1;
      for(auto item1:*passengerList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["passenger_list"] = boost::any(temp1);
    }
    if (payStatus) {
      res["pay_status"] = boost::any(*payStatus);
    }
    if (payTime) {
      res["pay_time"] = boost::any(*payTime);
    }
    if (promotionPrice) {
      res["promotion_price"] = boost::any(*promotionPrice);
    }
    if (realPayPrice) {
      res["real_pay_price"] = boost::any(*realPayPrice);
    }
    if (refundChangeRuleMap) {
      map<string, boost::any> temp1;
      for(auto item1:*refundChangeRuleMap){
        temp1[item1.first] = boost::any(item1.second.toMap());
      }
      res["refund_change_rule_map"] = boost::any(temp1);
    }
    if (sessionNick) {
      res["session_nick"] = boost::any(*sessionNick);
    }
    if (solution) {
      res["solution"] = solution ? boost::any(solution->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (succeedTime) {
      res["succeed_time"] = boost::any(*succeedTime);
    }
    if (totalPrice) {
      res["total_price"] = boost::any(*totalPrice);
    }
    if (transactionNo) {
      res["transaction_no"] = boost::any(*transactionNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ancillary_item_detail_list") != m.end() && !m["ancillary_item_detail_list"].empty()) {
      if (typeid(vector<boost::any>) == m["ancillary_item_detail_list"].type()) {
        vector<OrderDetailResponseBodyDataAncillaryItemDetailList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ancillary_item_detail_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            OrderDetailResponseBodyDataAncillaryItemDetailList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ancillaryItemDetailList = make_shared<vector<OrderDetailResponseBodyDataAncillaryItemDetailList>>(expect1);
      }
    }
    if (m.find("baggage_allowance_map") != m.end() && !m["baggage_allowance_map"].empty()) {
      if (typeid(map<string, boost::any>) == m["baggage_allowance_map"].type()) {
        map<string, DataBaggageAllowanceMapValue> expect1;
        for(auto item1:boost::any_cast<map<string, boost::any>>(m["baggage_allowance_map"])){
          if (typeid(map<string, boost::any>) == item1.second.type()) {
            DataBaggageAllowanceMapValue model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1.second));
            expect1[item1.first] = model2;
          }
        }
        baggageAllowanceMap = make_shared<map<string, DataBaggageAllowanceMapValue>>(expect1);
      }
    }
    if (m.find("book_time") != m.end() && !m["book_time"].empty()) {
      bookTime = make_shared<long>(boost::any_cast<long>(m["book_time"]));
    }
    if (m.find("flight_item_detail_list") != m.end() && !m["flight_item_detail_list"].empty()) {
      if (typeid(vector<boost::any>) == m["flight_item_detail_list"].type()) {
        vector<OrderDetailResponseBodyDataFlightItemDetailList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["flight_item_detail_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            OrderDetailResponseBodyDataFlightItemDetailList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        flightItemDetailList = make_shared<vector<OrderDetailResponseBodyDataFlightItemDetailList>>(expect1);
      }
    }
    if (m.find("order_num") != m.end() && !m["order_num"].empty()) {
      orderNum = make_shared<long>(boost::any_cast<long>(m["order_num"]));
    }
    if (m.find("order_status") != m.end() && !m["order_status"].empty()) {
      orderStatus = make_shared<long>(boost::any_cast<long>(m["order_status"]));
    }
    if (m.find("out_order_num") != m.end() && !m["out_order_num"].empty()) {
      outOrderNum = make_shared<string>(boost::any_cast<string>(m["out_order_num"]));
    }
    if (m.find("passenger_list") != m.end() && !m["passenger_list"].empty()) {
      if (typeid(vector<boost::any>) == m["passenger_list"].type()) {
        vector<OrderDetailResponseBodyDataPassengerList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["passenger_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            OrderDetailResponseBodyDataPassengerList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        passengerList = make_shared<vector<OrderDetailResponseBodyDataPassengerList>>(expect1);
      }
    }
    if (m.find("pay_status") != m.end() && !m["pay_status"].empty()) {
      payStatus = make_shared<long>(boost::any_cast<long>(m["pay_status"]));
    }
    if (m.find("pay_time") != m.end() && !m["pay_time"].empty()) {
      payTime = make_shared<long>(boost::any_cast<long>(m["pay_time"]));
    }
    if (m.find("promotion_price") != m.end() && !m["promotion_price"].empty()) {
      promotionPrice = make_shared<double>(boost::any_cast<double>(m["promotion_price"]));
    }
    if (m.find("real_pay_price") != m.end() && !m["real_pay_price"].empty()) {
      realPayPrice = make_shared<double>(boost::any_cast<double>(m["real_pay_price"]));
    }
    if (m.find("refund_change_rule_map") != m.end() && !m["refund_change_rule_map"].empty()) {
      if (typeid(map<string, boost::any>) == m["refund_change_rule_map"].type()) {
        map<string, DataRefundChangeRuleMapValue> expect1;
        for(auto item1:boost::any_cast<map<string, boost::any>>(m["refund_change_rule_map"])){
          if (typeid(map<string, boost::any>) == item1.second.type()) {
            DataRefundChangeRuleMapValue model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1.second));
            expect1[item1.first] = model2;
          }
        }
        refundChangeRuleMap = make_shared<map<string, DataRefundChangeRuleMapValue>>(expect1);
      }
    }
    if (m.find("session_nick") != m.end() && !m["session_nick"].empty()) {
      sessionNick = make_shared<string>(boost::any_cast<string>(m["session_nick"]));
    }
    if (m.find("solution") != m.end() && !m["solution"].empty()) {
      if (typeid(map<string, boost::any>) == m["solution"].type()) {
        OrderDetailResponseBodyDataSolution model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["solution"]));
        solution = make_shared<OrderDetailResponseBodyDataSolution>(model1);
      }
    }
    if (m.find("succeed_time") != m.end() && !m["succeed_time"].empty()) {
      succeedTime = make_shared<long>(boost::any_cast<long>(m["succeed_time"]));
    }
    if (m.find("total_price") != m.end() && !m["total_price"].empty()) {
      totalPrice = make_shared<double>(boost::any_cast<double>(m["total_price"]));
    }
    if (m.find("transaction_no") != m.end() && !m["transaction_no"].empty()) {
      transactionNo = make_shared<string>(boost::any_cast<string>(m["transaction_no"]));
    }
  }


  virtual ~OrderDetailResponseBodyData() = default;
};
class OrderDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<OrderDetailResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<boost::any> errorData{};
  shared_ptr<string> errorMsg{};
  shared_ptr<long> status{};
  shared_ptr<bool> success{};

  OrderDetailResponseBody() {}

  explicit OrderDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["error_code"] = boost::any(*errorCode);
    }
    if (errorData) {
      res["error_data"] = boost::any(*errorData);
    }
    if (errorMsg) {
      res["error_msg"] = boost::any(*errorMsg);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        OrderDetailResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<OrderDetailResponseBodyData>(model1);
      }
    }
    if (m.find("error_code") != m.end() && !m["error_code"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["error_code"]));
    }
    if (m.find("error_data") != m.end() && !m["error_data"].empty()) {
      errorData = make_shared<boost::any>(boost::any_cast<boost::any>(m["error_data"]));
    }
    if (m.find("error_msg") != m.end() && !m["error_msg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["error_msg"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~OrderDetailResponseBody() = default;
};
class OrderDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OrderDetailResponseBody> body{};

  OrderDetailResponse() {}

  explicit OrderDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        OrderDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OrderDetailResponseBody>(model1);
      }
    }
  }


  virtual ~OrderDetailResponse() = default;
};
class OrderListHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAirticketAccessToken{};
  shared_ptr<string> xAcsAirticketLanguage{};

  OrderListHeaders() {}

  explicit OrderListHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAirticketAccessToken) {
      res["x-acs-airticket-access-token"] = boost::any(*xAcsAirticketAccessToken);
    }
    if (xAcsAirticketLanguage) {
      res["x-acs-airticket-language"] = boost::any(*xAcsAirticketLanguage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("x-acs-airticket-access-token") != m.end() && !m["x-acs-airticket-access-token"].empty()) {
      xAcsAirticketAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-airticket-access-token"]));
    }
    if (m.find("x-acs-airticket-language") != m.end() && !m["x-acs-airticket-language"].empty()) {
      xAcsAirticketLanguage = make_shared<string>(boost::any_cast<string>(m["x-acs-airticket-language"]));
    }
  }


  virtual ~OrderListHeaders() = default;
};
class OrderListRequest : public Darabonba::Model {
public:
  shared_ptr<long> bookTimeEnd{};
  shared_ptr<long> bookTimeStart{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> status{};

  OrderListRequest() {}

  explicit OrderListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bookTimeEnd) {
      res["book_time_end"] = boost::any(*bookTimeEnd);
    }
    if (bookTimeStart) {
      res["book_time_start"] = boost::any(*bookTimeStart);
    }
    if (pageIndex) {
      res["page_index"] = boost::any(*pageIndex);
    }
    if (pageSize) {
      res["page_size"] = boost::any(*pageSize);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("book_time_end") != m.end() && !m["book_time_end"].empty()) {
      bookTimeEnd = make_shared<long>(boost::any_cast<long>(m["book_time_end"]));
    }
    if (m.find("book_time_start") != m.end() && !m["book_time_start"].empty()) {
      bookTimeStart = make_shared<long>(boost::any_cast<long>(m["book_time_start"]));
    }
    if (m.find("page_index") != m.end() && !m["page_index"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["page_index"]));
    }
    if (m.find("page_size") != m.end() && !m["page_size"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["page_size"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
  }


  virtual ~OrderListRequest() = default;
};
class OrderListResponseBodyDataListPassengerListCredential : public Darabonba::Model {
public:
  shared_ptr<string> certIssuePlace{};
  shared_ptr<string> credentialNum{};
  shared_ptr<long> credentialType{};
  shared_ptr<string> expireDate{};

  OrderListResponseBodyDataListPassengerListCredential() {}

  explicit OrderListResponseBodyDataListPassengerListCredential(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certIssuePlace) {
      res["cert_issue_place"] = boost::any(*certIssuePlace);
    }
    if (credentialNum) {
      res["credential_num"] = boost::any(*credentialNum);
    }
    if (credentialType) {
      res["credential_type"] = boost::any(*credentialType);
    }
    if (expireDate) {
      res["expire_date"] = boost::any(*expireDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cert_issue_place") != m.end() && !m["cert_issue_place"].empty()) {
      certIssuePlace = make_shared<string>(boost::any_cast<string>(m["cert_issue_place"]));
    }
    if (m.find("credential_num") != m.end() && !m["credential_num"].empty()) {
      credentialNum = make_shared<string>(boost::any_cast<string>(m["credential_num"]));
    }
    if (m.find("credential_type") != m.end() && !m["credential_type"].empty()) {
      credentialType = make_shared<long>(boost::any_cast<long>(m["credential_type"]));
    }
    if (m.find("expire_date") != m.end() && !m["expire_date"].empty()) {
      expireDate = make_shared<string>(boost::any_cast<string>(m["expire_date"]));
    }
  }


  virtual ~OrderListResponseBodyDataListPassengerListCredential() = default;
};
class OrderListResponseBodyDataListPassengerList : public Darabonba::Model {
public:
  shared_ptr<string> birthday{};
  shared_ptr<OrderListResponseBodyDataListPassengerListCredential> credential{};
  shared_ptr<string> firstName{};
  shared_ptr<long> gender{};
  shared_ptr<string> lastName{};
  shared_ptr<string> mobileCountryCode{};
  shared_ptr<string> mobilePhoneNumber{};
  shared_ptr<string> nationality{};
  shared_ptr<long> type{};

  OrderListResponseBodyDataListPassengerList() {}

  explicit OrderListResponseBodyDataListPassengerList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (birthday) {
      res["birthday"] = boost::any(*birthday);
    }
    if (credential) {
      res["credential"] = credential ? boost::any(credential->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (firstName) {
      res["first_name"] = boost::any(*firstName);
    }
    if (gender) {
      res["gender"] = boost::any(*gender);
    }
    if (lastName) {
      res["last_name"] = boost::any(*lastName);
    }
    if (mobileCountryCode) {
      res["mobile_country_code"] = boost::any(*mobileCountryCode);
    }
    if (mobilePhoneNumber) {
      res["mobile_phone_number"] = boost::any(*mobilePhoneNumber);
    }
    if (nationality) {
      res["nationality"] = boost::any(*nationality);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("birthday") != m.end() && !m["birthday"].empty()) {
      birthday = make_shared<string>(boost::any_cast<string>(m["birthday"]));
    }
    if (m.find("credential") != m.end() && !m["credential"].empty()) {
      if (typeid(map<string, boost::any>) == m["credential"].type()) {
        OrderListResponseBodyDataListPassengerListCredential model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["credential"]));
        credential = make_shared<OrderListResponseBodyDataListPassengerListCredential>(model1);
      }
    }
    if (m.find("first_name") != m.end() && !m["first_name"].empty()) {
      firstName = make_shared<string>(boost::any_cast<string>(m["first_name"]));
    }
    if (m.find("gender") != m.end() && !m["gender"].empty()) {
      gender = make_shared<long>(boost::any_cast<long>(m["gender"]));
    }
    if (m.find("last_name") != m.end() && !m["last_name"].empty()) {
      lastName = make_shared<string>(boost::any_cast<string>(m["last_name"]));
    }
    if (m.find("mobile_country_code") != m.end() && !m["mobile_country_code"].empty()) {
      mobileCountryCode = make_shared<string>(boost::any_cast<string>(m["mobile_country_code"]));
    }
    if (m.find("mobile_phone_number") != m.end() && !m["mobile_phone_number"].empty()) {
      mobilePhoneNumber = make_shared<string>(boost::any_cast<string>(m["mobile_phone_number"]));
    }
    if (m.find("nationality") != m.end() && !m["nationality"].empty()) {
      nationality = make_shared<string>(boost::any_cast<string>(m["nationality"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["type"]));
    }
  }


  virtual ~OrderListResponseBodyDataListPassengerList() = default;
};
class OrderListResponseBodyDataList : public Darabonba::Model {
public:
  shared_ptr<long> bookTime{};
  shared_ptr<long> orderNum{};
  shared_ptr<string> orderStatus{};
  shared_ptr<string> outOrderNum{};
  shared_ptr<vector<OrderListResponseBodyDataListPassengerList>> passengerList{};
  shared_ptr<string> payStatus{};
  shared_ptr<long> payTime{};
  shared_ptr<double> promotionPrice{};
  shared_ptr<double> realPayPrice{};
  shared_ptr<string> sessionNick{};
  shared_ptr<long> succeedTime{};
  shared_ptr<double> totalPrice{};
  shared_ptr<string> transactionNo{};

  OrderListResponseBodyDataList() {}

  explicit OrderListResponseBodyDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bookTime) {
      res["book_time"] = boost::any(*bookTime);
    }
    if (orderNum) {
      res["order_num"] = boost::any(*orderNum);
    }
    if (orderStatus) {
      res["order_status"] = boost::any(*orderStatus);
    }
    if (outOrderNum) {
      res["out_order_num"] = boost::any(*outOrderNum);
    }
    if (passengerList) {
      vector<boost::any> temp1;
      for(auto item1:*passengerList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["passenger_list"] = boost::any(temp1);
    }
    if (payStatus) {
      res["pay_status"] = boost::any(*payStatus);
    }
    if (payTime) {
      res["pay_time"] = boost::any(*payTime);
    }
    if (promotionPrice) {
      res["promotion_price"] = boost::any(*promotionPrice);
    }
    if (realPayPrice) {
      res["real_pay_price"] = boost::any(*realPayPrice);
    }
    if (sessionNick) {
      res["session_nick"] = boost::any(*sessionNick);
    }
    if (succeedTime) {
      res["succeed_time"] = boost::any(*succeedTime);
    }
    if (totalPrice) {
      res["total_price"] = boost::any(*totalPrice);
    }
    if (transactionNo) {
      res["transaction_no"] = boost::any(*transactionNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("book_time") != m.end() && !m["book_time"].empty()) {
      bookTime = make_shared<long>(boost::any_cast<long>(m["book_time"]));
    }
    if (m.find("order_num") != m.end() && !m["order_num"].empty()) {
      orderNum = make_shared<long>(boost::any_cast<long>(m["order_num"]));
    }
    if (m.find("order_status") != m.end() && !m["order_status"].empty()) {
      orderStatus = make_shared<string>(boost::any_cast<string>(m["order_status"]));
    }
    if (m.find("out_order_num") != m.end() && !m["out_order_num"].empty()) {
      outOrderNum = make_shared<string>(boost::any_cast<string>(m["out_order_num"]));
    }
    if (m.find("passenger_list") != m.end() && !m["passenger_list"].empty()) {
      if (typeid(vector<boost::any>) == m["passenger_list"].type()) {
        vector<OrderListResponseBodyDataListPassengerList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["passenger_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            OrderListResponseBodyDataListPassengerList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        passengerList = make_shared<vector<OrderListResponseBodyDataListPassengerList>>(expect1);
      }
    }
    if (m.find("pay_status") != m.end() && !m["pay_status"].empty()) {
      payStatus = make_shared<string>(boost::any_cast<string>(m["pay_status"]));
    }
    if (m.find("pay_time") != m.end() && !m["pay_time"].empty()) {
      payTime = make_shared<long>(boost::any_cast<long>(m["pay_time"]));
    }
    if (m.find("promotion_price") != m.end() && !m["promotion_price"].empty()) {
      promotionPrice = make_shared<double>(boost::any_cast<double>(m["promotion_price"]));
    }
    if (m.find("real_pay_price") != m.end() && !m["real_pay_price"].empty()) {
      realPayPrice = make_shared<double>(boost::any_cast<double>(m["real_pay_price"]));
    }
    if (m.find("session_nick") != m.end() && !m["session_nick"].empty()) {
      sessionNick = make_shared<string>(boost::any_cast<string>(m["session_nick"]));
    }
    if (m.find("succeed_time") != m.end() && !m["succeed_time"].empty()) {
      succeedTime = make_shared<long>(boost::any_cast<long>(m["succeed_time"]));
    }
    if (m.find("total_price") != m.end() && !m["total_price"].empty()) {
      totalPrice = make_shared<double>(boost::any_cast<double>(m["total_price"]));
    }
    if (m.find("transaction_no") != m.end() && !m["transaction_no"].empty()) {
      transactionNo = make_shared<string>(boost::any_cast<string>(m["transaction_no"]));
    }
  }


  virtual ~OrderListResponseBodyDataList() = default;
};
class OrderListResponseBodyDataPagination : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};
  shared_ptr<long> totalPage{};

  OrderListResponseBodyDataPagination() {}

  explicit OrderListResponseBodyDataPagination(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["current_page"] = boost::any(*currentPage);
    }
    if (pageSize) {
      res["page_size"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["total_count"] = boost::any(*totalCount);
    }
    if (totalPage) {
      res["total_page"] = boost::any(*totalPage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("current_page") != m.end() && !m["current_page"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["current_page"]));
    }
    if (m.find("page_size") != m.end() && !m["page_size"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["page_size"]));
    }
    if (m.find("total_count") != m.end() && !m["total_count"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["total_count"]));
    }
    if (m.find("total_page") != m.end() && !m["total_page"].empty()) {
      totalPage = make_shared<long>(boost::any_cast<long>(m["total_page"]));
    }
  }


  virtual ~OrderListResponseBodyDataPagination() = default;
};
class OrderListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<OrderListResponseBodyDataList>> list{};
  shared_ptr<OrderListResponseBodyDataPagination> pagination{};

  OrderListResponseBodyData() {}

  explicit OrderListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["list"] = boost::any(temp1);
    }
    if (pagination) {
      res["pagination"] = pagination ? boost::any(pagination->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("list") != m.end() && !m["list"].empty()) {
      if (typeid(vector<boost::any>) == m["list"].type()) {
        vector<OrderListResponseBodyDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            OrderListResponseBodyDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<OrderListResponseBodyDataList>>(expect1);
      }
    }
    if (m.find("pagination") != m.end() && !m["pagination"].empty()) {
      if (typeid(map<string, boost::any>) == m["pagination"].type()) {
        OrderListResponseBodyDataPagination model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["pagination"]));
        pagination = make_shared<OrderListResponseBodyDataPagination>(model1);
      }
    }
  }


  virtual ~OrderListResponseBodyData() = default;
};
class OrderListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<OrderListResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<boost::any> errorData{};
  shared_ptr<string> errorMsg{};
  shared_ptr<long> status{};
  shared_ptr<bool> success{};

  OrderListResponseBody() {}

  explicit OrderListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["error_code"] = boost::any(*errorCode);
    }
    if (errorData) {
      res["error_data"] = boost::any(*errorData);
    }
    if (errorMsg) {
      res["error_msg"] = boost::any(*errorMsg);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        OrderListResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<OrderListResponseBodyData>(model1);
      }
    }
    if (m.find("error_code") != m.end() && !m["error_code"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["error_code"]));
    }
    if (m.find("error_data") != m.end() && !m["error_data"].empty()) {
      errorData = make_shared<boost::any>(boost::any_cast<boost::any>(m["error_data"]));
    }
    if (m.find("error_msg") != m.end() && !m["error_msg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["error_msg"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~OrderListResponseBody() = default;
};
class OrderListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OrderListResponseBody> body{};

  OrderListResponse() {}

  explicit OrderListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        OrderListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OrderListResponseBody>(model1);
      }
    }
  }


  virtual ~OrderListResponse() = default;
};
class PricingHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAirticketAccessToken{};
  shared_ptr<string> xAcsAirticketLanguage{};

  PricingHeaders() {}

  explicit PricingHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAirticketAccessToken) {
      res["x-acs-airticket-access-token"] = boost::any(*xAcsAirticketAccessToken);
    }
    if (xAcsAirticketLanguage) {
      res["x-acs-airticket-language"] = boost::any(*xAcsAirticketLanguage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("x-acs-airticket-access-token") != m.end() && !m["x-acs-airticket-access-token"].empty()) {
      xAcsAirticketAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-airticket-access-token"]));
    }
    if (m.find("x-acs-airticket-language") != m.end() && !m["x-acs-airticket-language"].empty()) {
      xAcsAirticketLanguage = make_shared<string>(boost::any_cast<string>(m["x-acs-airticket-language"]));
    }
  }


  virtual ~PricingHeaders() = default;
};
class PricingRequest : public Darabonba::Model {
public:
  shared_ptr<string> solutionId{};

  PricingRequest() {}

  explicit PricingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (solutionId) {
      res["solution_id"] = boost::any(*solutionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("solution_id") != m.end() && !m["solution_id"].empty()) {
      solutionId = make_shared<string>(boost::any_cast<string>(m["solution_id"]));
    }
  }


  virtual ~PricingRequest() = default;
};
class PricingResponseBodyDataChangedPriceInfo : public Darabonba::Model {
public:
  shared_ptr<double> adultPrice{};
  shared_ptr<double> adultTax{};
  shared_ptr<double> childPrice{};
  shared_ptr<double> childTax{};
  shared_ptr<double> infantPrice{};
  shared_ptr<double> infantTax{};

  PricingResponseBodyDataChangedPriceInfo() {}

  explicit PricingResponseBodyDataChangedPriceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (adultPrice) {
      res["adult_price"] = boost::any(*adultPrice);
    }
    if (adultTax) {
      res["adult_tax"] = boost::any(*adultTax);
    }
    if (childPrice) {
      res["child_price"] = boost::any(*childPrice);
    }
    if (childTax) {
      res["child_tax"] = boost::any(*childTax);
    }
    if (infantPrice) {
      res["infant_price"] = boost::any(*infantPrice);
    }
    if (infantTax) {
      res["infant_tax"] = boost::any(*infantTax);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("adult_price") != m.end() && !m["adult_price"].empty()) {
      adultPrice = make_shared<double>(boost::any_cast<double>(m["adult_price"]));
    }
    if (m.find("adult_tax") != m.end() && !m["adult_tax"].empty()) {
      adultTax = make_shared<double>(boost::any_cast<double>(m["adult_tax"]));
    }
    if (m.find("child_price") != m.end() && !m["child_price"].empty()) {
      childPrice = make_shared<double>(boost::any_cast<double>(m["child_price"]));
    }
    if (m.find("child_tax") != m.end() && !m["child_tax"].empty()) {
      childTax = make_shared<double>(boost::any_cast<double>(m["child_tax"]));
    }
    if (m.find("infant_price") != m.end() && !m["infant_price"].empty()) {
      infantPrice = make_shared<double>(boost::any_cast<double>(m["infant_price"]));
    }
    if (m.find("infant_tax") != m.end() && !m["infant_tax"].empty()) {
      infantTax = make_shared<double>(boost::any_cast<double>(m["infant_tax"]));
    }
  }


  virtual ~PricingResponseBodyDataChangedPriceInfo() = default;
};
class PricingResponseBodyDataOriginalPriceInfo : public Darabonba::Model {
public:
  shared_ptr<double> adultPrice{};
  shared_ptr<double> adultTax{};
  shared_ptr<double> childPrice{};
  shared_ptr<double> childTax{};
  shared_ptr<double> infantPrice{};
  shared_ptr<double> infantTax{};

  PricingResponseBodyDataOriginalPriceInfo() {}

  explicit PricingResponseBodyDataOriginalPriceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (adultPrice) {
      res["adult_price"] = boost::any(*adultPrice);
    }
    if (adultTax) {
      res["adult_tax"] = boost::any(*adultTax);
    }
    if (childPrice) {
      res["child_price"] = boost::any(*childPrice);
    }
    if (childTax) {
      res["child_tax"] = boost::any(*childTax);
    }
    if (infantPrice) {
      res["infant_price"] = boost::any(*infantPrice);
    }
    if (infantTax) {
      res["infant_tax"] = boost::any(*infantTax);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("adult_price") != m.end() && !m["adult_price"].empty()) {
      adultPrice = make_shared<double>(boost::any_cast<double>(m["adult_price"]));
    }
    if (m.find("adult_tax") != m.end() && !m["adult_tax"].empty()) {
      adultTax = make_shared<double>(boost::any_cast<double>(m["adult_tax"]));
    }
    if (m.find("child_price") != m.end() && !m["child_price"].empty()) {
      childPrice = make_shared<double>(boost::any_cast<double>(m["child_price"]));
    }
    if (m.find("child_tax") != m.end() && !m["child_tax"].empty()) {
      childTax = make_shared<double>(boost::any_cast<double>(m["child_tax"]));
    }
    if (m.find("infant_price") != m.end() && !m["infant_price"].empty()) {
      infantPrice = make_shared<double>(boost::any_cast<double>(m["infant_price"]));
    }
    if (m.find("infant_tax") != m.end() && !m["infant_tax"].empty()) {
      infantTax = make_shared<double>(boost::any_cast<double>(m["infant_tax"]));
    }
  }


  virtual ~PricingResponseBodyDataOriginalPriceInfo() = default;
};
class PricingResponseBodyDataSolutionJourneyListSegmentList : public Darabonba::Model {
public:
  shared_ptr<string> arrivalAirport{};
  shared_ptr<string> arrivalCity{};
  shared_ptr<string> arrivalTerminal{};
  shared_ptr<string> arrivalTime{};
  shared_ptr<string> availability{};
  shared_ptr<string> cabin{};
  shared_ptr<string> cabinClass{};
  shared_ptr<bool> codeShare{};
  shared_ptr<string> departureAirport{};
  shared_ptr<string> departureCity{};
  shared_ptr<string> departureTerminal{};
  shared_ptr<string> departureTime{};
  shared_ptr<string> equipType{};
  shared_ptr<long> flightDuration{};
  shared_ptr<string> marketingAirline{};
  shared_ptr<string> marketingFlightNo{};
  shared_ptr<long> marketingFlightNoInt{};
  shared_ptr<string> operatingAirline{};
  shared_ptr<string> operatingFlightNo{};
  shared_ptr<string> segmentId{};
  shared_ptr<string> stopCityList{};
  shared_ptr<long> stopQuantity{};

  PricingResponseBodyDataSolutionJourneyListSegmentList() {}

  explicit PricingResponseBodyDataSolutionJourneyListSegmentList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arrivalAirport) {
      res["arrival_airport"] = boost::any(*arrivalAirport);
    }
    if (arrivalCity) {
      res["arrival_city"] = boost::any(*arrivalCity);
    }
    if (arrivalTerminal) {
      res["arrival_terminal"] = boost::any(*arrivalTerminal);
    }
    if (arrivalTime) {
      res["arrival_time"] = boost::any(*arrivalTime);
    }
    if (availability) {
      res["availability"] = boost::any(*availability);
    }
    if (cabin) {
      res["cabin"] = boost::any(*cabin);
    }
    if (cabinClass) {
      res["cabin_class"] = boost::any(*cabinClass);
    }
    if (codeShare) {
      res["code_share"] = boost::any(*codeShare);
    }
    if (departureAirport) {
      res["departure_airport"] = boost::any(*departureAirport);
    }
    if (departureCity) {
      res["departure_city"] = boost::any(*departureCity);
    }
    if (departureTerminal) {
      res["departure_terminal"] = boost::any(*departureTerminal);
    }
    if (departureTime) {
      res["departure_time"] = boost::any(*departureTime);
    }
    if (equipType) {
      res["equip_type"] = boost::any(*equipType);
    }
    if (flightDuration) {
      res["flight_duration"] = boost::any(*flightDuration);
    }
    if (marketingAirline) {
      res["marketing_airline"] = boost::any(*marketingAirline);
    }
    if (marketingFlightNo) {
      res["marketing_flight_no"] = boost::any(*marketingFlightNo);
    }
    if (marketingFlightNoInt) {
      res["marketing_flight_no_int"] = boost::any(*marketingFlightNoInt);
    }
    if (operatingAirline) {
      res["operating_airline"] = boost::any(*operatingAirline);
    }
    if (operatingFlightNo) {
      res["operating_flight_no"] = boost::any(*operatingFlightNo);
    }
    if (segmentId) {
      res["segment_id"] = boost::any(*segmentId);
    }
    if (stopCityList) {
      res["stop_city_list"] = boost::any(*stopCityList);
    }
    if (stopQuantity) {
      res["stop_quantity"] = boost::any(*stopQuantity);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("arrival_airport") != m.end() && !m["arrival_airport"].empty()) {
      arrivalAirport = make_shared<string>(boost::any_cast<string>(m["arrival_airport"]));
    }
    if (m.find("arrival_city") != m.end() && !m["arrival_city"].empty()) {
      arrivalCity = make_shared<string>(boost::any_cast<string>(m["arrival_city"]));
    }
    if (m.find("arrival_terminal") != m.end() && !m["arrival_terminal"].empty()) {
      arrivalTerminal = make_shared<string>(boost::any_cast<string>(m["arrival_terminal"]));
    }
    if (m.find("arrival_time") != m.end() && !m["arrival_time"].empty()) {
      arrivalTime = make_shared<string>(boost::any_cast<string>(m["arrival_time"]));
    }
    if (m.find("availability") != m.end() && !m["availability"].empty()) {
      availability = make_shared<string>(boost::any_cast<string>(m["availability"]));
    }
    if (m.find("cabin") != m.end() && !m["cabin"].empty()) {
      cabin = make_shared<string>(boost::any_cast<string>(m["cabin"]));
    }
    if (m.find("cabin_class") != m.end() && !m["cabin_class"].empty()) {
      cabinClass = make_shared<string>(boost::any_cast<string>(m["cabin_class"]));
    }
    if (m.find("code_share") != m.end() && !m["code_share"].empty()) {
      codeShare = make_shared<bool>(boost::any_cast<bool>(m["code_share"]));
    }
    if (m.find("departure_airport") != m.end() && !m["departure_airport"].empty()) {
      departureAirport = make_shared<string>(boost::any_cast<string>(m["departure_airport"]));
    }
    if (m.find("departure_city") != m.end() && !m["departure_city"].empty()) {
      departureCity = make_shared<string>(boost::any_cast<string>(m["departure_city"]));
    }
    if (m.find("departure_terminal") != m.end() && !m["departure_terminal"].empty()) {
      departureTerminal = make_shared<string>(boost::any_cast<string>(m["departure_terminal"]));
    }
    if (m.find("departure_time") != m.end() && !m["departure_time"].empty()) {
      departureTime = make_shared<string>(boost::any_cast<string>(m["departure_time"]));
    }
    if (m.find("equip_type") != m.end() && !m["equip_type"].empty()) {
      equipType = make_shared<string>(boost::any_cast<string>(m["equip_type"]));
    }
    if (m.find("flight_duration") != m.end() && !m["flight_duration"].empty()) {
      flightDuration = make_shared<long>(boost::any_cast<long>(m["flight_duration"]));
    }
    if (m.find("marketing_airline") != m.end() && !m["marketing_airline"].empty()) {
      marketingAirline = make_shared<string>(boost::any_cast<string>(m["marketing_airline"]));
    }
    if (m.find("marketing_flight_no") != m.end() && !m["marketing_flight_no"].empty()) {
      marketingFlightNo = make_shared<string>(boost::any_cast<string>(m["marketing_flight_no"]));
    }
    if (m.find("marketing_flight_no_int") != m.end() && !m["marketing_flight_no_int"].empty()) {
      marketingFlightNoInt = make_shared<long>(boost::any_cast<long>(m["marketing_flight_no_int"]));
    }
    if (m.find("operating_airline") != m.end() && !m["operating_airline"].empty()) {
      operatingAirline = make_shared<string>(boost::any_cast<string>(m["operating_airline"]));
    }
    if (m.find("operating_flight_no") != m.end() && !m["operating_flight_no"].empty()) {
      operatingFlightNo = make_shared<string>(boost::any_cast<string>(m["operating_flight_no"]));
    }
    if (m.find("segment_id") != m.end() && !m["segment_id"].empty()) {
      segmentId = make_shared<string>(boost::any_cast<string>(m["segment_id"]));
    }
    if (m.find("stop_city_list") != m.end() && !m["stop_city_list"].empty()) {
      stopCityList = make_shared<string>(boost::any_cast<string>(m["stop_city_list"]));
    }
    if (m.find("stop_quantity") != m.end() && !m["stop_quantity"].empty()) {
      stopQuantity = make_shared<long>(boost::any_cast<long>(m["stop_quantity"]));
    }
  }


  virtual ~PricingResponseBodyDataSolutionJourneyListSegmentList() = default;
};
class PricingResponseBodyDataSolutionJourneyList : public Darabonba::Model {
public:
  shared_ptr<vector<PricingResponseBodyDataSolutionJourneyListSegmentList>> segmentList{};
  shared_ptr<long> transferCount{};

  PricingResponseBodyDataSolutionJourneyList() {}

  explicit PricingResponseBodyDataSolutionJourneyList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (segmentList) {
      vector<boost::any> temp1;
      for(auto item1:*segmentList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["segment_list"] = boost::any(temp1);
    }
    if (transferCount) {
      res["transfer_count"] = boost::any(*transferCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("segment_list") != m.end() && !m["segment_list"].empty()) {
      if (typeid(vector<boost::any>) == m["segment_list"].type()) {
        vector<PricingResponseBodyDataSolutionJourneyListSegmentList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["segment_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PricingResponseBodyDataSolutionJourneyListSegmentList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        segmentList = make_shared<vector<PricingResponseBodyDataSolutionJourneyListSegmentList>>(expect1);
      }
    }
    if (m.find("transfer_count") != m.end() && !m["transfer_count"].empty()) {
      transferCount = make_shared<long>(boost::any_cast<long>(m["transfer_count"]));
    }
  }


  virtual ~PricingResponseBodyDataSolutionJourneyList() = default;
};
class PricingResponseBodyDataSolutionSegmentBaggageCheckInInfoList : public Darabonba::Model {
public:
  shared_ptr<long> luggageDirectInfoType{};
  shared_ptr<vector<string>> segmentIdList{};

  PricingResponseBodyDataSolutionSegmentBaggageCheckInInfoList() {}

  explicit PricingResponseBodyDataSolutionSegmentBaggageCheckInInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (luggageDirectInfoType) {
      res["luggage_direct_info_type"] = boost::any(*luggageDirectInfoType);
    }
    if (segmentIdList) {
      res["segment_id_list"] = boost::any(*segmentIdList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("luggage_direct_info_type") != m.end() && !m["luggage_direct_info_type"].empty()) {
      luggageDirectInfoType = make_shared<long>(boost::any_cast<long>(m["luggage_direct_info_type"]));
    }
    if (m.find("segment_id_list") != m.end() && !m["segment_id_list"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["segment_id_list"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["segment_id_list"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      segmentIdList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~PricingResponseBodyDataSolutionSegmentBaggageCheckInInfoList() = default;
};
class PricingResponseBodyDataSolutionSegmentBaggageMappingList : public Darabonba::Model {
public:
  shared_ptr<map<string, DataSolutionSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue>> passengerBaggageAllowanceMapping{};
  shared_ptr<vector<string>> segmentIdList{};

  PricingResponseBodyDataSolutionSegmentBaggageMappingList() {}

  explicit PricingResponseBodyDataSolutionSegmentBaggageMappingList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (passengerBaggageAllowanceMapping) {
      map<string, boost::any> temp1;
      for(auto item1:*passengerBaggageAllowanceMapping){
        temp1[item1.first] = boost::any(item1.second.toMap());
      }
      res["passenger_baggage_allowance_mapping"] = boost::any(temp1);
    }
    if (segmentIdList) {
      res["segment_id_list"] = boost::any(*segmentIdList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("passenger_baggage_allowance_mapping") != m.end() && !m["passenger_baggage_allowance_mapping"].empty()) {
      if (typeid(map<string, boost::any>) == m["passenger_baggage_allowance_mapping"].type()) {
        map<string, DataSolutionSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue> expect1;
        for(auto item1:boost::any_cast<map<string, boost::any>>(m["passenger_baggage_allowance_mapping"])){
          if (typeid(map<string, boost::any>) == item1.second.type()) {
            DataSolutionSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1.second));
            expect1[item1.first] = model2;
          }
        }
        passengerBaggageAllowanceMapping = make_shared<map<string, DataSolutionSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue>>(expect1);
      }
    }
    if (m.find("segment_id_list") != m.end() && !m["segment_id_list"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["segment_id_list"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["segment_id_list"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      segmentIdList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~PricingResponseBodyDataSolutionSegmentBaggageMappingList() = default;
};
class PricingResponseBodyDataSolutionSegmentRefundChangeRuleMappingList : public Darabonba::Model {
public:
  shared_ptr<map<string, DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue>> refundChangeRuleMap{};
  shared_ptr<vector<string>> segmentIdList{};

  PricingResponseBodyDataSolutionSegmentRefundChangeRuleMappingList() {}

  explicit PricingResponseBodyDataSolutionSegmentRefundChangeRuleMappingList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (refundChangeRuleMap) {
      map<string, boost::any> temp1;
      for(auto item1:*refundChangeRuleMap){
        temp1[item1.first] = boost::any(item1.second.toMap());
      }
      res["refund_change_rule_map"] = boost::any(temp1);
    }
    if (segmentIdList) {
      res["segment_id_list"] = boost::any(*segmentIdList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("refund_change_rule_map") != m.end() && !m["refund_change_rule_map"].empty()) {
      if (typeid(map<string, boost::any>) == m["refund_change_rule_map"].type()) {
        map<string, DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue> expect1;
        for(auto item1:boost::any_cast<map<string, boost::any>>(m["refund_change_rule_map"])){
          if (typeid(map<string, boost::any>) == item1.second.type()) {
            DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1.second));
            expect1[item1.first] = model2;
          }
        }
        refundChangeRuleMap = make_shared<map<string, DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue>>(expect1);
      }
    }
    if (m.find("segment_id_list") != m.end() && !m["segment_id_list"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["segment_id_list"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["segment_id_list"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      segmentIdList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~PricingResponseBodyDataSolutionSegmentRefundChangeRuleMappingList() = default;
};
class PricingResponseBodyDataSolution : public Darabonba::Model {
public:
  shared_ptr<double> adultPrice{};
  shared_ptr<double> adultTax{};
  shared_ptr<double> childPrice{};
  shared_ptr<double> childTax{};
  shared_ptr<double> infantPrice{};
  shared_ptr<double> infantTax{};
  shared_ptr<vector<PricingResponseBodyDataSolutionJourneyList>> journeyList{};
  shared_ptr<string> productTypeDescription{};
  shared_ptr<string> refundTicketCouponDescription{};
  shared_ptr<vector<PricingResponseBodyDataSolutionSegmentBaggageCheckInInfoList>> segmentBaggageCheckInInfoList{};
  shared_ptr<vector<PricingResponseBodyDataSolutionSegmentBaggageMappingList>> segmentBaggageMappingList{};
  shared_ptr<vector<PricingResponseBodyDataSolutionSegmentRefundChangeRuleMappingList>> segmentRefundChangeRuleMappingList{};
  shared_ptr<string> solutionId{};

  PricingResponseBodyDataSolution() {}

  explicit PricingResponseBodyDataSolution(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (adultPrice) {
      res["adult_price"] = boost::any(*adultPrice);
    }
    if (adultTax) {
      res["adult_tax"] = boost::any(*adultTax);
    }
    if (childPrice) {
      res["child_price"] = boost::any(*childPrice);
    }
    if (childTax) {
      res["child_tax"] = boost::any(*childTax);
    }
    if (infantPrice) {
      res["infant_price"] = boost::any(*infantPrice);
    }
    if (infantTax) {
      res["infant_tax"] = boost::any(*infantTax);
    }
    if (journeyList) {
      vector<boost::any> temp1;
      for(auto item1:*journeyList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["journey_list"] = boost::any(temp1);
    }
    if (productTypeDescription) {
      res["product_type_description"] = boost::any(*productTypeDescription);
    }
    if (refundTicketCouponDescription) {
      res["refund_ticket_coupon_description"] = boost::any(*refundTicketCouponDescription);
    }
    if (segmentBaggageCheckInInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*segmentBaggageCheckInInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["segment_baggage_check_in_info_list"] = boost::any(temp1);
    }
    if (segmentBaggageMappingList) {
      vector<boost::any> temp1;
      for(auto item1:*segmentBaggageMappingList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["segment_baggage_mapping_list"] = boost::any(temp1);
    }
    if (segmentRefundChangeRuleMappingList) {
      vector<boost::any> temp1;
      for(auto item1:*segmentRefundChangeRuleMappingList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["segment_refund_change_rule_mapping_list"] = boost::any(temp1);
    }
    if (solutionId) {
      res["solution_id"] = boost::any(*solutionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("adult_price") != m.end() && !m["adult_price"].empty()) {
      adultPrice = make_shared<double>(boost::any_cast<double>(m["adult_price"]));
    }
    if (m.find("adult_tax") != m.end() && !m["adult_tax"].empty()) {
      adultTax = make_shared<double>(boost::any_cast<double>(m["adult_tax"]));
    }
    if (m.find("child_price") != m.end() && !m["child_price"].empty()) {
      childPrice = make_shared<double>(boost::any_cast<double>(m["child_price"]));
    }
    if (m.find("child_tax") != m.end() && !m["child_tax"].empty()) {
      childTax = make_shared<double>(boost::any_cast<double>(m["child_tax"]));
    }
    if (m.find("infant_price") != m.end() && !m["infant_price"].empty()) {
      infantPrice = make_shared<double>(boost::any_cast<double>(m["infant_price"]));
    }
    if (m.find("infant_tax") != m.end() && !m["infant_tax"].empty()) {
      infantTax = make_shared<double>(boost::any_cast<double>(m["infant_tax"]));
    }
    if (m.find("journey_list") != m.end() && !m["journey_list"].empty()) {
      if (typeid(vector<boost::any>) == m["journey_list"].type()) {
        vector<PricingResponseBodyDataSolutionJourneyList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["journey_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PricingResponseBodyDataSolutionJourneyList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        journeyList = make_shared<vector<PricingResponseBodyDataSolutionJourneyList>>(expect1);
      }
    }
    if (m.find("product_type_description") != m.end() && !m["product_type_description"].empty()) {
      productTypeDescription = make_shared<string>(boost::any_cast<string>(m["product_type_description"]));
    }
    if (m.find("refund_ticket_coupon_description") != m.end() && !m["refund_ticket_coupon_description"].empty()) {
      refundTicketCouponDescription = make_shared<string>(boost::any_cast<string>(m["refund_ticket_coupon_description"]));
    }
    if (m.find("segment_baggage_check_in_info_list") != m.end() && !m["segment_baggage_check_in_info_list"].empty()) {
      if (typeid(vector<boost::any>) == m["segment_baggage_check_in_info_list"].type()) {
        vector<PricingResponseBodyDataSolutionSegmentBaggageCheckInInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["segment_baggage_check_in_info_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PricingResponseBodyDataSolutionSegmentBaggageCheckInInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        segmentBaggageCheckInInfoList = make_shared<vector<PricingResponseBodyDataSolutionSegmentBaggageCheckInInfoList>>(expect1);
      }
    }
    if (m.find("segment_baggage_mapping_list") != m.end() && !m["segment_baggage_mapping_list"].empty()) {
      if (typeid(vector<boost::any>) == m["segment_baggage_mapping_list"].type()) {
        vector<PricingResponseBodyDataSolutionSegmentBaggageMappingList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["segment_baggage_mapping_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PricingResponseBodyDataSolutionSegmentBaggageMappingList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        segmentBaggageMappingList = make_shared<vector<PricingResponseBodyDataSolutionSegmentBaggageMappingList>>(expect1);
      }
    }
    if (m.find("segment_refund_change_rule_mapping_list") != m.end() && !m["segment_refund_change_rule_mapping_list"].empty()) {
      if (typeid(vector<boost::any>) == m["segment_refund_change_rule_mapping_list"].type()) {
        vector<PricingResponseBodyDataSolutionSegmentRefundChangeRuleMappingList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["segment_refund_change_rule_mapping_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PricingResponseBodyDataSolutionSegmentRefundChangeRuleMappingList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        segmentRefundChangeRuleMappingList = make_shared<vector<PricingResponseBodyDataSolutionSegmentRefundChangeRuleMappingList>>(expect1);
      }
    }
    if (m.find("solution_id") != m.end() && !m["solution_id"].empty()) {
      solutionId = make_shared<string>(boost::any_cast<string>(m["solution_id"]));
    }
  }


  virtual ~PricingResponseBodyDataSolution() = default;
};
class PricingResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<PricingResponseBodyDataChangedPriceInfo> changedPriceInfo{};
  shared_ptr<bool> isChanged{};
  shared_ptr<PricingResponseBodyDataOriginalPriceInfo> originalPriceInfo{};
  shared_ptr<string> remainSeats{};
  shared_ptr<PricingResponseBodyDataSolution> solution{};

  PricingResponseBodyData() {}

  explicit PricingResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (changedPriceInfo) {
      res["changed_price_info"] = changedPriceInfo ? boost::any(changedPriceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (isChanged) {
      res["is_changed"] = boost::any(*isChanged);
    }
    if (originalPriceInfo) {
      res["original_price_info"] = originalPriceInfo ? boost::any(originalPriceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (remainSeats) {
      res["remain_seats"] = boost::any(*remainSeats);
    }
    if (solution) {
      res["solution"] = solution ? boost::any(solution->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("changed_price_info") != m.end() && !m["changed_price_info"].empty()) {
      if (typeid(map<string, boost::any>) == m["changed_price_info"].type()) {
        PricingResponseBodyDataChangedPriceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["changed_price_info"]));
        changedPriceInfo = make_shared<PricingResponseBodyDataChangedPriceInfo>(model1);
      }
    }
    if (m.find("is_changed") != m.end() && !m["is_changed"].empty()) {
      isChanged = make_shared<bool>(boost::any_cast<bool>(m["is_changed"]));
    }
    if (m.find("original_price_info") != m.end() && !m["original_price_info"].empty()) {
      if (typeid(map<string, boost::any>) == m["original_price_info"].type()) {
        PricingResponseBodyDataOriginalPriceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["original_price_info"]));
        originalPriceInfo = make_shared<PricingResponseBodyDataOriginalPriceInfo>(model1);
      }
    }
    if (m.find("remain_seats") != m.end() && !m["remain_seats"].empty()) {
      remainSeats = make_shared<string>(boost::any_cast<string>(m["remain_seats"]));
    }
    if (m.find("solution") != m.end() && !m["solution"].empty()) {
      if (typeid(map<string, boost::any>) == m["solution"].type()) {
        PricingResponseBodyDataSolution model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["solution"]));
        solution = make_shared<PricingResponseBodyDataSolution>(model1);
      }
    }
  }


  virtual ~PricingResponseBodyData() = default;
};
class PricingResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<PricingResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<boost::any> errorData{};
  shared_ptr<string> errorMsg{};
  shared_ptr<long> status{};
  shared_ptr<bool> success{};

  PricingResponseBody() {}

  explicit PricingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["error_code"] = boost::any(*errorCode);
    }
    if (errorData) {
      res["error_data"] = boost::any(*errorData);
    }
    if (errorMsg) {
      res["error_msg"] = boost::any(*errorMsg);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        PricingResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<PricingResponseBodyData>(model1);
      }
    }
    if (m.find("error_code") != m.end() && !m["error_code"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["error_code"]));
    }
    if (m.find("error_data") != m.end() && !m["error_data"].empty()) {
      errorData = make_shared<boost::any>(boost::any_cast<boost::any>(m["error_data"]));
    }
    if (m.find("error_msg") != m.end() && !m["error_msg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["error_msg"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~PricingResponseBody() = default;
};
class PricingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PricingResponseBody> body{};

  PricingResponse() {}

  explicit PricingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        PricingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PricingResponseBody>(model1);
      }
    }
  }


  virtual ~PricingResponse() = default;
};
class RefundApplyHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAirticketAccessToken{};
  shared_ptr<string> xAcsAirticketLanguage{};

  RefundApplyHeaders() {}

  explicit RefundApplyHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAirticketAccessToken) {
      res["x-acs-airticket-access-token"] = boost::any(*xAcsAirticketAccessToken);
    }
    if (xAcsAirticketLanguage) {
      res["x-acs-airticket-language"] = boost::any(*xAcsAirticketLanguage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("x-acs-airticket-access-token") != m.end() && !m["x-acs-airticket-access-token"].empty()) {
      xAcsAirticketAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-airticket-access-token"]));
    }
    if (m.find("x-acs-airticket-language") != m.end() && !m["x-acs-airticket-language"].empty()) {
      xAcsAirticketLanguage = make_shared<string>(boost::any_cast<string>(m["x-acs-airticket-language"]));
    }
  }


  virtual ~RefundApplyHeaders() = default;
};
class RefundApplyRequestRefundJourneysSegmentList : public Darabonba::Model {
public:
  shared_ptr<string> arrivalAirport{};
  shared_ptr<string> arrivalCity{};
  shared_ptr<string> departureAirport{};
  shared_ptr<string> departureCity{};

  RefundApplyRequestRefundJourneysSegmentList() {}

  explicit RefundApplyRequestRefundJourneysSegmentList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arrivalAirport) {
      res["arrival_airport"] = boost::any(*arrivalAirport);
    }
    if (arrivalCity) {
      res["arrival_city"] = boost::any(*arrivalCity);
    }
    if (departureAirport) {
      res["departure_airport"] = boost::any(*departureAirport);
    }
    if (departureCity) {
      res["departure_city"] = boost::any(*departureCity);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("arrival_airport") != m.end() && !m["arrival_airport"].empty()) {
      arrivalAirport = make_shared<string>(boost::any_cast<string>(m["arrival_airport"]));
    }
    if (m.find("arrival_city") != m.end() && !m["arrival_city"].empty()) {
      arrivalCity = make_shared<string>(boost::any_cast<string>(m["arrival_city"]));
    }
    if (m.find("departure_airport") != m.end() && !m["departure_airport"].empty()) {
      departureAirport = make_shared<string>(boost::any_cast<string>(m["departure_airport"]));
    }
    if (m.find("departure_city") != m.end() && !m["departure_city"].empty()) {
      departureCity = make_shared<string>(boost::any_cast<string>(m["departure_city"]));
    }
  }


  virtual ~RefundApplyRequestRefundJourneysSegmentList() = default;
};
class RefundApplyRequestRefundJourneys : public Darabonba::Model {
public:
  shared_ptr<vector<RefundApplyRequestRefundJourneysSegmentList>> segmentList{};

  RefundApplyRequestRefundJourneys() {}

  explicit RefundApplyRequestRefundJourneys(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (segmentList) {
      vector<boost::any> temp1;
      for(auto item1:*segmentList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["segment_list"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("segment_list") != m.end() && !m["segment_list"].empty()) {
      if (typeid(vector<boost::any>) == m["segment_list"].type()) {
        vector<RefundApplyRequestRefundJourneysSegmentList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["segment_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RefundApplyRequestRefundJourneysSegmentList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        segmentList = make_shared<vector<RefundApplyRequestRefundJourneysSegmentList>>(expect1);
      }
    }
  }


  virtual ~RefundApplyRequestRefundJourneys() = default;
};
class RefundApplyRequestRefundPassengerList : public Darabonba::Model {
public:
  shared_ptr<string> document{};
  shared_ptr<string> firstName{};
  shared_ptr<string> lastName{};

  RefundApplyRequestRefundPassengerList() {}

  explicit RefundApplyRequestRefundPassengerList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (document) {
      res["document"] = boost::any(*document);
    }
    if (firstName) {
      res["first_name"] = boost::any(*firstName);
    }
    if (lastName) {
      res["last_name"] = boost::any(*lastName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("document") != m.end() && !m["document"].empty()) {
      document = make_shared<string>(boost::any_cast<string>(m["document"]));
    }
    if (m.find("first_name") != m.end() && !m["first_name"].empty()) {
      firstName = make_shared<string>(boost::any_cast<string>(m["first_name"]));
    }
    if (m.find("last_name") != m.end() && !m["last_name"].empty()) {
      lastName = make_shared<string>(boost::any_cast<string>(m["last_name"]));
    }
  }


  virtual ~RefundApplyRequestRefundPassengerList() = default;
};
class RefundApplyRequestRefundType : public Darabonba::Model {
public:
  shared_ptr<vector<string>> file{};
  shared_ptr<long> refundTypeId{};
  shared_ptr<string> remark{};

  RefundApplyRequestRefundType() {}

  explicit RefundApplyRequestRefundType(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (file) {
      res["file"] = boost::any(*file);
    }
    if (refundTypeId) {
      res["refund_type_id"] = boost::any(*refundTypeId);
    }
    if (remark) {
      res["remark"] = boost::any(*remark);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("file") != m.end() && !m["file"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["file"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["file"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      file = make_shared<vector<string>>(toVec1);
    }
    if (m.find("refund_type_id") != m.end() && !m["refund_type_id"].empty()) {
      refundTypeId = make_shared<long>(boost::any_cast<long>(m["refund_type_id"]));
    }
    if (m.find("remark") != m.end() && !m["remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["remark"]));
    }
  }


  virtual ~RefundApplyRequestRefundType() = default;
};
class RefundApplyRequest : public Darabonba::Model {
public:
  shared_ptr<long> orderNum{};
  shared_ptr<vector<RefundApplyRequestRefundJourneys>> refundJourneys{};
  shared_ptr<vector<RefundApplyRequestRefundPassengerList>> refundPassengerList{};
  shared_ptr<RefundApplyRequestRefundType> refundType{};

  RefundApplyRequest() {}

  explicit RefundApplyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderNum) {
      res["order_num"] = boost::any(*orderNum);
    }
    if (refundJourneys) {
      vector<boost::any> temp1;
      for(auto item1:*refundJourneys){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["refund_journeys"] = boost::any(temp1);
    }
    if (refundPassengerList) {
      vector<boost::any> temp1;
      for(auto item1:*refundPassengerList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["refund_passenger_list"] = boost::any(temp1);
    }
    if (refundType) {
      res["refund_type"] = refundType ? boost::any(refundType->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("order_num") != m.end() && !m["order_num"].empty()) {
      orderNum = make_shared<long>(boost::any_cast<long>(m["order_num"]));
    }
    if (m.find("refund_journeys") != m.end() && !m["refund_journeys"].empty()) {
      if (typeid(vector<boost::any>) == m["refund_journeys"].type()) {
        vector<RefundApplyRequestRefundJourneys> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["refund_journeys"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RefundApplyRequestRefundJourneys model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        refundJourneys = make_shared<vector<RefundApplyRequestRefundJourneys>>(expect1);
      }
    }
    if (m.find("refund_passenger_list") != m.end() && !m["refund_passenger_list"].empty()) {
      if (typeid(vector<boost::any>) == m["refund_passenger_list"].type()) {
        vector<RefundApplyRequestRefundPassengerList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["refund_passenger_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RefundApplyRequestRefundPassengerList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        refundPassengerList = make_shared<vector<RefundApplyRequestRefundPassengerList>>(expect1);
      }
    }
    if (m.find("refund_type") != m.end() && !m["refund_type"].empty()) {
      if (typeid(map<string, boost::any>) == m["refund_type"].type()) {
        RefundApplyRequestRefundType model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["refund_type"]));
        refundType = make_shared<RefundApplyRequestRefundType>(model1);
      }
    }
  }


  virtual ~RefundApplyRequest() = default;
};
class RefundApplyShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<long> orderNum{};
  shared_ptr<string> refundJourneysShrink{};
  shared_ptr<string> refundPassengerListShrink{};
  shared_ptr<string> refundTypeShrink{};

  RefundApplyShrinkRequest() {}

  explicit RefundApplyShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderNum) {
      res["order_num"] = boost::any(*orderNum);
    }
    if (refundJourneysShrink) {
      res["refund_journeys"] = boost::any(*refundJourneysShrink);
    }
    if (refundPassengerListShrink) {
      res["refund_passenger_list"] = boost::any(*refundPassengerListShrink);
    }
    if (refundTypeShrink) {
      res["refund_type"] = boost::any(*refundTypeShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("order_num") != m.end() && !m["order_num"].empty()) {
      orderNum = make_shared<long>(boost::any_cast<long>(m["order_num"]));
    }
    if (m.find("refund_journeys") != m.end() && !m["refund_journeys"].empty()) {
      refundJourneysShrink = make_shared<string>(boost::any_cast<string>(m["refund_journeys"]));
    }
    if (m.find("refund_passenger_list") != m.end() && !m["refund_passenger_list"].empty()) {
      refundPassengerListShrink = make_shared<string>(boost::any_cast<string>(m["refund_passenger_list"]));
    }
    if (m.find("refund_type") != m.end() && !m["refund_type"].empty()) {
      refundTypeShrink = make_shared<string>(boost::any_cast<string>(m["refund_type"]));
    }
  }


  virtual ~RefundApplyShrinkRequest() = default;
};
class RefundApplyResponseBodyDataRefundResultsRefundPassengers : public Darabonba::Model {
public:
  shared_ptr<string> document{};
  shared_ptr<string> firstName{};
  shared_ptr<string> lastName{};

  RefundApplyResponseBodyDataRefundResultsRefundPassengers() {}

  explicit RefundApplyResponseBodyDataRefundResultsRefundPassengers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (document) {
      res["document"] = boost::any(*document);
    }
    if (firstName) {
      res["first_name"] = boost::any(*firstName);
    }
    if (lastName) {
      res["last_name"] = boost::any(*lastName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("document") != m.end() && !m["document"].empty()) {
      document = make_shared<string>(boost::any_cast<string>(m["document"]));
    }
    if (m.find("first_name") != m.end() && !m["first_name"].empty()) {
      firstName = make_shared<string>(boost::any_cast<string>(m["first_name"]));
    }
    if (m.find("last_name") != m.end() && !m["last_name"].empty()) {
      lastName = make_shared<string>(boost::any_cast<string>(m["last_name"]));
    }
  }


  virtual ~RefundApplyResponseBodyDataRefundResultsRefundPassengers() = default;
};
class RefundApplyResponseBodyDataRefundResults : public Darabonba::Model {
public:
  shared_ptr<string> failReason{};
  shared_ptr<long> refundOrderNum{};
  shared_ptr<vector<RefundApplyResponseBodyDataRefundResultsRefundPassengers>> refundPassengers{};
  shared_ptr<long> status{};

  RefundApplyResponseBodyDataRefundResults() {}

  explicit RefundApplyResponseBodyDataRefundResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (failReason) {
      res["fail_reason"] = boost::any(*failReason);
    }
    if (refundOrderNum) {
      res["refund_order_num"] = boost::any(*refundOrderNum);
    }
    if (refundPassengers) {
      vector<boost::any> temp1;
      for(auto item1:*refundPassengers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["refund_passengers"] = boost::any(temp1);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("fail_reason") != m.end() && !m["fail_reason"].empty()) {
      failReason = make_shared<string>(boost::any_cast<string>(m["fail_reason"]));
    }
    if (m.find("refund_order_num") != m.end() && !m["refund_order_num"].empty()) {
      refundOrderNum = make_shared<long>(boost::any_cast<long>(m["refund_order_num"]));
    }
    if (m.find("refund_passengers") != m.end() && !m["refund_passengers"].empty()) {
      if (typeid(vector<boost::any>) == m["refund_passengers"].type()) {
        vector<RefundApplyResponseBodyDataRefundResultsRefundPassengers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["refund_passengers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RefundApplyResponseBodyDataRefundResultsRefundPassengers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        refundPassengers = make_shared<vector<RefundApplyResponseBodyDataRefundResultsRefundPassengers>>(expect1);
      }
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
  }


  virtual ~RefundApplyResponseBodyDataRefundResults() = default;
};
class RefundApplyResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> orderNum{};
  shared_ptr<vector<RefundApplyResponseBodyDataRefundResults>> refundResults{};

  RefundApplyResponseBodyData() {}

  explicit RefundApplyResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderNum) {
      res["order_num"] = boost::any(*orderNum);
    }
    if (refundResults) {
      vector<boost::any> temp1;
      for(auto item1:*refundResults){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["refund_results"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("order_num") != m.end() && !m["order_num"].empty()) {
      orderNum = make_shared<long>(boost::any_cast<long>(m["order_num"]));
    }
    if (m.find("refund_results") != m.end() && !m["refund_results"].empty()) {
      if (typeid(vector<boost::any>) == m["refund_results"].type()) {
        vector<RefundApplyResponseBodyDataRefundResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["refund_results"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RefundApplyResponseBodyDataRefundResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        refundResults = make_shared<vector<RefundApplyResponseBodyDataRefundResults>>(expect1);
      }
    }
  }


  virtual ~RefundApplyResponseBodyData() = default;
};
class RefundApplyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<RefundApplyResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<boost::any> errorData{};
  shared_ptr<string> errorMsg{};
  shared_ptr<long> status{};
  shared_ptr<bool> success{};

  RefundApplyResponseBody() {}

  explicit RefundApplyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["error_code"] = boost::any(*errorCode);
    }
    if (errorData) {
      res["error_data"] = boost::any(*errorData);
    }
    if (errorMsg) {
      res["error_msg"] = boost::any(*errorMsg);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        RefundApplyResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<RefundApplyResponseBodyData>(model1);
      }
    }
    if (m.find("error_code") != m.end() && !m["error_code"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["error_code"]));
    }
    if (m.find("error_data") != m.end() && !m["error_data"].empty()) {
      errorData = make_shared<boost::any>(boost::any_cast<boost::any>(m["error_data"]));
    }
    if (m.find("error_msg") != m.end() && !m["error_msg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["error_msg"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~RefundApplyResponseBody() = default;
};
class RefundApplyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RefundApplyResponseBody> body{};

  RefundApplyResponse() {}

  explicit RefundApplyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RefundApplyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RefundApplyResponseBody>(model1);
      }
    }
  }


  virtual ~RefundApplyResponse() = default;
};
class RefundDetailHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAirticketAccessToken{};
  shared_ptr<string> xAcsAirticketLanguage{};

  RefundDetailHeaders() {}

  explicit RefundDetailHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAirticketAccessToken) {
      res["x-acs-airticket-access-token"] = boost::any(*xAcsAirticketAccessToken);
    }
    if (xAcsAirticketLanguage) {
      res["x-acs-airticket-language"] = boost::any(*xAcsAirticketLanguage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("x-acs-airticket-access-token") != m.end() && !m["x-acs-airticket-access-token"].empty()) {
      xAcsAirticketAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-airticket-access-token"]));
    }
    if (m.find("x-acs-airticket-language") != m.end() && !m["x-acs-airticket-language"].empty()) {
      xAcsAirticketLanguage = make_shared<string>(boost::any_cast<string>(m["x-acs-airticket-language"]));
    }
  }


  virtual ~RefundDetailHeaders() = default;
};
class RefundDetailRequest : public Darabonba::Model {
public:
  shared_ptr<long> refundOrderNum{};

  RefundDetailRequest() {}

  explicit RefundDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (refundOrderNum) {
      res["refund_order_num"] = boost::any(*refundOrderNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("refund_order_num") != m.end() && !m["refund_order_num"].empty()) {
      refundOrderNum = make_shared<long>(boost::any_cast<long>(m["refund_order_num"]));
    }
  }


  virtual ~RefundDetailRequest() = default;
};
class RefundDetailResponseBodyDataMultiRefundDetailsPassengerMultiRefundDetailsPassenger : public Darabonba::Model {
public:
  shared_ptr<string> document{};
  shared_ptr<string> firstName{};
  shared_ptr<string> lastName{};

  RefundDetailResponseBodyDataMultiRefundDetailsPassengerMultiRefundDetailsPassenger() {}

  explicit RefundDetailResponseBodyDataMultiRefundDetailsPassengerMultiRefundDetailsPassenger(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (document) {
      res["document"] = boost::any(*document);
    }
    if (firstName) {
      res["first_name"] = boost::any(*firstName);
    }
    if (lastName) {
      res["last_name"] = boost::any(*lastName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("document") != m.end() && !m["document"].empty()) {
      document = make_shared<string>(boost::any_cast<string>(m["document"]));
    }
    if (m.find("first_name") != m.end() && !m["first_name"].empty()) {
      firstName = make_shared<string>(boost::any_cast<string>(m["first_name"]));
    }
    if (m.find("last_name") != m.end() && !m["last_name"].empty()) {
      lastName = make_shared<string>(boost::any_cast<string>(m["last_name"]));
    }
  }


  virtual ~RefundDetailResponseBodyDataMultiRefundDetailsPassengerMultiRefundDetailsPassenger() = default;
};
class RefundDetailResponseBodyDataMultiRefundDetailsPassengerMultiRefundDetails : public Darabonba::Model {
public:
  shared_ptr<double> changeOrderRefundFee{};
  shared_ptr<double> originalOrderRefundFee{};
  shared_ptr<RefundDetailResponseBodyDataMultiRefundDetailsPassengerMultiRefundDetailsPassenger> passenger{};

  RefundDetailResponseBodyDataMultiRefundDetailsPassengerMultiRefundDetails() {}

  explicit RefundDetailResponseBodyDataMultiRefundDetailsPassengerMultiRefundDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (changeOrderRefundFee) {
      res["change_order_refund_fee"] = boost::any(*changeOrderRefundFee);
    }
    if (originalOrderRefundFee) {
      res["original_order_refund_fee"] = boost::any(*originalOrderRefundFee);
    }
    if (passenger) {
      res["passenger"] = passenger ? boost::any(passenger->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("change_order_refund_fee") != m.end() && !m["change_order_refund_fee"].empty()) {
      changeOrderRefundFee = make_shared<double>(boost::any_cast<double>(m["change_order_refund_fee"]));
    }
    if (m.find("original_order_refund_fee") != m.end() && !m["original_order_refund_fee"].empty()) {
      originalOrderRefundFee = make_shared<double>(boost::any_cast<double>(m["original_order_refund_fee"]));
    }
    if (m.find("passenger") != m.end() && !m["passenger"].empty()) {
      if (typeid(map<string, boost::any>) == m["passenger"].type()) {
        RefundDetailResponseBodyDataMultiRefundDetailsPassengerMultiRefundDetailsPassenger model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["passenger"]));
        passenger = make_shared<RefundDetailResponseBodyDataMultiRefundDetailsPassengerMultiRefundDetailsPassenger>(model1);
      }
    }
  }


  virtual ~RefundDetailResponseBodyDataMultiRefundDetailsPassengerMultiRefundDetails() = default;
};
class RefundDetailResponseBodyDataMultiRefundDetails : public Darabonba::Model {
public:
  shared_ptr<long> multiRefundOrderNum{};
  shared_ptr<string> multiRefundTransactionNo{};
  shared_ptr<vector<RefundDetailResponseBodyDataMultiRefundDetailsPassengerMultiRefundDetails>> passengerMultiRefundDetails{};

  RefundDetailResponseBodyDataMultiRefundDetails() {}

  explicit RefundDetailResponseBodyDataMultiRefundDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (multiRefundOrderNum) {
      res["multi_refund_order_num"] = boost::any(*multiRefundOrderNum);
    }
    if (multiRefundTransactionNo) {
      res["multi_refund_transaction_no"] = boost::any(*multiRefundTransactionNo);
    }
    if (passengerMultiRefundDetails) {
      vector<boost::any> temp1;
      for(auto item1:*passengerMultiRefundDetails){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["passenger_multi_refund_details"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("multi_refund_order_num") != m.end() && !m["multi_refund_order_num"].empty()) {
      multiRefundOrderNum = make_shared<long>(boost::any_cast<long>(m["multi_refund_order_num"]));
    }
    if (m.find("multi_refund_transaction_no") != m.end() && !m["multi_refund_transaction_no"].empty()) {
      multiRefundTransactionNo = make_shared<string>(boost::any_cast<string>(m["multi_refund_transaction_no"]));
    }
    if (m.find("passenger_multi_refund_details") != m.end() && !m["passenger_multi_refund_details"].empty()) {
      if (typeid(vector<boost::any>) == m["passenger_multi_refund_details"].type()) {
        vector<RefundDetailResponseBodyDataMultiRefundDetailsPassengerMultiRefundDetails> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["passenger_multi_refund_details"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RefundDetailResponseBodyDataMultiRefundDetailsPassengerMultiRefundDetails model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        passengerMultiRefundDetails = make_shared<vector<RefundDetailResponseBodyDataMultiRefundDetailsPassengerMultiRefundDetails>>(expect1);
      }
    }
  }


  virtual ~RefundDetailResponseBodyDataMultiRefundDetails() = default;
};
class RefundDetailResponseBodyDataPassengerRefundDetailsPassenger : public Darabonba::Model {
public:
  shared_ptr<string> document{};
  shared_ptr<string> firstName{};
  shared_ptr<string> lastName{};

  RefundDetailResponseBodyDataPassengerRefundDetailsPassenger() {}

  explicit RefundDetailResponseBodyDataPassengerRefundDetailsPassenger(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (document) {
      res["document"] = boost::any(*document);
    }
    if (firstName) {
      res["first_name"] = boost::any(*firstName);
    }
    if (lastName) {
      res["last_name"] = boost::any(*lastName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("document") != m.end() && !m["document"].empty()) {
      document = make_shared<string>(boost::any_cast<string>(m["document"]));
    }
    if (m.find("first_name") != m.end() && !m["first_name"].empty()) {
      firstName = make_shared<string>(boost::any_cast<string>(m["first_name"]));
    }
    if (m.find("last_name") != m.end() && !m["last_name"].empty()) {
      lastName = make_shared<string>(boost::any_cast<string>(m["last_name"]));
    }
  }


  virtual ~RefundDetailResponseBodyDataPassengerRefundDetailsPassenger() = default;
};
class RefundDetailResponseBodyDataPassengerRefundDetailsRefundFee : public Darabonba::Model {
public:
  shared_ptr<double> alreadyUsedTotalFee{};
  shared_ptr<double> modifyRefundToBuyerMoney{};
  shared_ptr<double> nonRefundableChangeServiceFee{};
  shared_ptr<double> nonRefundableChangeUpgradeFee{};
  shared_ptr<double> nonRefundableTaxFee{};
  shared_ptr<double> nonRefundableTicketFee{};
  shared_ptr<double> refundToBuyerMoney{};

  RefundDetailResponseBodyDataPassengerRefundDetailsRefundFee() {}

  explicit RefundDetailResponseBodyDataPassengerRefundDetailsRefundFee(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alreadyUsedTotalFee) {
      res["already_used_total_fee"] = boost::any(*alreadyUsedTotalFee);
    }
    if (modifyRefundToBuyerMoney) {
      res["modify_refund_to_buyer_money"] = boost::any(*modifyRefundToBuyerMoney);
    }
    if (nonRefundableChangeServiceFee) {
      res["non_refundable_change_service_fee"] = boost::any(*nonRefundableChangeServiceFee);
    }
    if (nonRefundableChangeUpgradeFee) {
      res["non_refundable_change_upgrade_fee"] = boost::any(*nonRefundableChangeUpgradeFee);
    }
    if (nonRefundableTaxFee) {
      res["non_refundable_tax_fee"] = boost::any(*nonRefundableTaxFee);
    }
    if (nonRefundableTicketFee) {
      res["non_refundable_ticket_fee"] = boost::any(*nonRefundableTicketFee);
    }
    if (refundToBuyerMoney) {
      res["refund_to_buyer_money"] = boost::any(*refundToBuyerMoney);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("already_used_total_fee") != m.end() && !m["already_used_total_fee"].empty()) {
      alreadyUsedTotalFee = make_shared<double>(boost::any_cast<double>(m["already_used_total_fee"]));
    }
    if (m.find("modify_refund_to_buyer_money") != m.end() && !m["modify_refund_to_buyer_money"].empty()) {
      modifyRefundToBuyerMoney = make_shared<double>(boost::any_cast<double>(m["modify_refund_to_buyer_money"]));
    }
    if (m.find("non_refundable_change_service_fee") != m.end() && !m["non_refundable_change_service_fee"].empty()) {
      nonRefundableChangeServiceFee = make_shared<double>(boost::any_cast<double>(m["non_refundable_change_service_fee"]));
    }
    if (m.find("non_refundable_change_upgrade_fee") != m.end() && !m["non_refundable_change_upgrade_fee"].empty()) {
      nonRefundableChangeUpgradeFee = make_shared<double>(boost::any_cast<double>(m["non_refundable_change_upgrade_fee"]));
    }
    if (m.find("non_refundable_tax_fee") != m.end() && !m["non_refundable_tax_fee"].empty()) {
      nonRefundableTaxFee = make_shared<double>(boost::any_cast<double>(m["non_refundable_tax_fee"]));
    }
    if (m.find("non_refundable_ticket_fee") != m.end() && !m["non_refundable_ticket_fee"].empty()) {
      nonRefundableTicketFee = make_shared<double>(boost::any_cast<double>(m["non_refundable_ticket_fee"]));
    }
    if (m.find("refund_to_buyer_money") != m.end() && !m["refund_to_buyer_money"].empty()) {
      refundToBuyerMoney = make_shared<double>(boost::any_cast<double>(m["refund_to_buyer_money"]));
    }
  }


  virtual ~RefundDetailResponseBodyDataPassengerRefundDetailsRefundFee() = default;
};
class RefundDetailResponseBodyDataPassengerRefundDetails : public Darabonba::Model {
public:
  shared_ptr<RefundDetailResponseBodyDataPassengerRefundDetailsPassenger> passenger{};
  shared_ptr<RefundDetailResponseBodyDataPassengerRefundDetailsRefundFee> refundFee{};

  RefundDetailResponseBodyDataPassengerRefundDetails() {}

  explicit RefundDetailResponseBodyDataPassengerRefundDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (passenger) {
      res["passenger"] = passenger ? boost::any(passenger->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (refundFee) {
      res["refund_fee"] = refundFee ? boost::any(refundFee->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("passenger") != m.end() && !m["passenger"].empty()) {
      if (typeid(map<string, boost::any>) == m["passenger"].type()) {
        RefundDetailResponseBodyDataPassengerRefundDetailsPassenger model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["passenger"]));
        passenger = make_shared<RefundDetailResponseBodyDataPassengerRefundDetailsPassenger>(model1);
      }
    }
    if (m.find("refund_fee") != m.end() && !m["refund_fee"].empty()) {
      if (typeid(map<string, boost::any>) == m["refund_fee"].type()) {
        RefundDetailResponseBodyDataPassengerRefundDetailsRefundFee model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["refund_fee"]));
        refundFee = make_shared<RefundDetailResponseBodyDataPassengerRefundDetailsRefundFee>(model1);
      }
    }
  }


  virtual ~RefundDetailResponseBodyDataPassengerRefundDetails() = default;
};
class RefundDetailResponseBodyDataRefundJourneysSegmentList : public Darabonba::Model {
public:
  shared_ptr<string> arrivalAirport{};
  shared_ptr<string> arrivalCity{};
  shared_ptr<string> arrivalTerminal{};
  shared_ptr<string> arrivalTime{};
  shared_ptr<string> availability{};
  shared_ptr<string> cabin{};
  shared_ptr<string> cabinClass{};
  shared_ptr<bool> codeShare{};
  shared_ptr<string> departureAirport{};
  shared_ptr<string> departureCity{};
  shared_ptr<string> departureTerminal{};
  shared_ptr<string> departureTime{};
  shared_ptr<string> equipType{};
  shared_ptr<long> flightDuration{};
  shared_ptr<string> marketingAirline{};
  shared_ptr<string> marketingFlightNo{};
  shared_ptr<long> marketingFlightNoInt{};
  shared_ptr<string> operatingAirline{};
  shared_ptr<string> operatingFlightNo{};
  shared_ptr<string> segmentId{};
  shared_ptr<string> stopCityList{};
  shared_ptr<long> stopQuantity{};

  RefundDetailResponseBodyDataRefundJourneysSegmentList() {}

  explicit RefundDetailResponseBodyDataRefundJourneysSegmentList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arrivalAirport) {
      res["arrival_airport"] = boost::any(*arrivalAirport);
    }
    if (arrivalCity) {
      res["arrival_city"] = boost::any(*arrivalCity);
    }
    if (arrivalTerminal) {
      res["arrival_terminal"] = boost::any(*arrivalTerminal);
    }
    if (arrivalTime) {
      res["arrival_time"] = boost::any(*arrivalTime);
    }
    if (availability) {
      res["availability"] = boost::any(*availability);
    }
    if (cabin) {
      res["cabin"] = boost::any(*cabin);
    }
    if (cabinClass) {
      res["cabin_class"] = boost::any(*cabinClass);
    }
    if (codeShare) {
      res["code_share"] = boost::any(*codeShare);
    }
    if (departureAirport) {
      res["departure_airport"] = boost::any(*departureAirport);
    }
    if (departureCity) {
      res["departure_city"] = boost::any(*departureCity);
    }
    if (departureTerminal) {
      res["departure_terminal"] = boost::any(*departureTerminal);
    }
    if (departureTime) {
      res["departure_time"] = boost::any(*departureTime);
    }
    if (equipType) {
      res["equip_type"] = boost::any(*equipType);
    }
    if (flightDuration) {
      res["flight_duration"] = boost::any(*flightDuration);
    }
    if (marketingAirline) {
      res["marketing_airline"] = boost::any(*marketingAirline);
    }
    if (marketingFlightNo) {
      res["marketing_flight_no"] = boost::any(*marketingFlightNo);
    }
    if (marketingFlightNoInt) {
      res["marketing_flight_no_int"] = boost::any(*marketingFlightNoInt);
    }
    if (operatingAirline) {
      res["operating_airline"] = boost::any(*operatingAirline);
    }
    if (operatingFlightNo) {
      res["operating_flight_no"] = boost::any(*operatingFlightNo);
    }
    if (segmentId) {
      res["segment_id"] = boost::any(*segmentId);
    }
    if (stopCityList) {
      res["stop_city_list"] = boost::any(*stopCityList);
    }
    if (stopQuantity) {
      res["stop_quantity"] = boost::any(*stopQuantity);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("arrival_airport") != m.end() && !m["arrival_airport"].empty()) {
      arrivalAirport = make_shared<string>(boost::any_cast<string>(m["arrival_airport"]));
    }
    if (m.find("arrival_city") != m.end() && !m["arrival_city"].empty()) {
      arrivalCity = make_shared<string>(boost::any_cast<string>(m["arrival_city"]));
    }
    if (m.find("arrival_terminal") != m.end() && !m["arrival_terminal"].empty()) {
      arrivalTerminal = make_shared<string>(boost::any_cast<string>(m["arrival_terminal"]));
    }
    if (m.find("arrival_time") != m.end() && !m["arrival_time"].empty()) {
      arrivalTime = make_shared<string>(boost::any_cast<string>(m["arrival_time"]));
    }
    if (m.find("availability") != m.end() && !m["availability"].empty()) {
      availability = make_shared<string>(boost::any_cast<string>(m["availability"]));
    }
    if (m.find("cabin") != m.end() && !m["cabin"].empty()) {
      cabin = make_shared<string>(boost::any_cast<string>(m["cabin"]));
    }
    if (m.find("cabin_class") != m.end() && !m["cabin_class"].empty()) {
      cabinClass = make_shared<string>(boost::any_cast<string>(m["cabin_class"]));
    }
    if (m.find("code_share") != m.end() && !m["code_share"].empty()) {
      codeShare = make_shared<bool>(boost::any_cast<bool>(m["code_share"]));
    }
    if (m.find("departure_airport") != m.end() && !m["departure_airport"].empty()) {
      departureAirport = make_shared<string>(boost::any_cast<string>(m["departure_airport"]));
    }
    if (m.find("departure_city") != m.end() && !m["departure_city"].empty()) {
      departureCity = make_shared<string>(boost::any_cast<string>(m["departure_city"]));
    }
    if (m.find("departure_terminal") != m.end() && !m["departure_terminal"].empty()) {
      departureTerminal = make_shared<string>(boost::any_cast<string>(m["departure_terminal"]));
    }
    if (m.find("departure_time") != m.end() && !m["departure_time"].empty()) {
      departureTime = make_shared<string>(boost::any_cast<string>(m["departure_time"]));
    }
    if (m.find("equip_type") != m.end() && !m["equip_type"].empty()) {
      equipType = make_shared<string>(boost::any_cast<string>(m["equip_type"]));
    }
    if (m.find("flight_duration") != m.end() && !m["flight_duration"].empty()) {
      flightDuration = make_shared<long>(boost::any_cast<long>(m["flight_duration"]));
    }
    if (m.find("marketing_airline") != m.end() && !m["marketing_airline"].empty()) {
      marketingAirline = make_shared<string>(boost::any_cast<string>(m["marketing_airline"]));
    }
    if (m.find("marketing_flight_no") != m.end() && !m["marketing_flight_no"].empty()) {
      marketingFlightNo = make_shared<string>(boost::any_cast<string>(m["marketing_flight_no"]));
    }
    if (m.find("marketing_flight_no_int") != m.end() && !m["marketing_flight_no_int"].empty()) {
      marketingFlightNoInt = make_shared<long>(boost::any_cast<long>(m["marketing_flight_no_int"]));
    }
    if (m.find("operating_airline") != m.end() && !m["operating_airline"].empty()) {
      operatingAirline = make_shared<string>(boost::any_cast<string>(m["operating_airline"]));
    }
    if (m.find("operating_flight_no") != m.end() && !m["operating_flight_no"].empty()) {
      operatingFlightNo = make_shared<string>(boost::any_cast<string>(m["operating_flight_no"]));
    }
    if (m.find("segment_id") != m.end() && !m["segment_id"].empty()) {
      segmentId = make_shared<string>(boost::any_cast<string>(m["segment_id"]));
    }
    if (m.find("stop_city_list") != m.end() && !m["stop_city_list"].empty()) {
      stopCityList = make_shared<string>(boost::any_cast<string>(m["stop_city_list"]));
    }
    if (m.find("stop_quantity") != m.end() && !m["stop_quantity"].empty()) {
      stopQuantity = make_shared<long>(boost::any_cast<long>(m["stop_quantity"]));
    }
  }


  virtual ~RefundDetailResponseBodyDataRefundJourneysSegmentList() = default;
};
class RefundDetailResponseBodyDataRefundJourneys : public Darabonba::Model {
public:
  shared_ptr<vector<RefundDetailResponseBodyDataRefundJourneysSegmentList>> segmentList{};
  shared_ptr<long> transferCount{};

  RefundDetailResponseBodyDataRefundJourneys() {}

  explicit RefundDetailResponseBodyDataRefundJourneys(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (segmentList) {
      vector<boost::any> temp1;
      for(auto item1:*segmentList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["segment_list"] = boost::any(temp1);
    }
    if (transferCount) {
      res["transfer_count"] = boost::any(*transferCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("segment_list") != m.end() && !m["segment_list"].empty()) {
      if (typeid(vector<boost::any>) == m["segment_list"].type()) {
        vector<RefundDetailResponseBodyDataRefundJourneysSegmentList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["segment_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RefundDetailResponseBodyDataRefundJourneysSegmentList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        segmentList = make_shared<vector<RefundDetailResponseBodyDataRefundJourneysSegmentList>>(expect1);
      }
    }
    if (m.find("transfer_count") != m.end() && !m["transfer_count"].empty()) {
      transferCount = make_shared<long>(boost::any_cast<long>(m["transfer_count"]));
    }
  }


  virtual ~RefundDetailResponseBodyDataRefundJourneys() = default;
};
class RefundDetailResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<bool> containMultiRefund{};
  shared_ptr<vector<RefundDetailResponseBodyDataMultiRefundDetails>> multiRefundDetails{};
  shared_ptr<long> orderNum{};
  shared_ptr<vector<RefundDetailResponseBodyDataPassengerRefundDetails>> passengerRefundDetails{};
  shared_ptr<long> paySuccessUtcTime{};
  shared_ptr<vector<string>> refundAttachmentUrls{};
  shared_ptr<vector<RefundDetailResponseBodyDataRefundJourneys>> refundJourneys{};
  shared_ptr<long> refundOrderNum{};
  shared_ptr<string> refundReason{};
  shared_ptr<long> refundType{};
  shared_ptr<string> refuseReason{};
  shared_ptr<long> status{};
  shared_ptr<string> transactionNo{};
  shared_ptr<long> utcCreateTime{};

  RefundDetailResponseBodyData() {}

  explicit RefundDetailResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (containMultiRefund) {
      res["contain_multi_refund"] = boost::any(*containMultiRefund);
    }
    if (multiRefundDetails) {
      vector<boost::any> temp1;
      for(auto item1:*multiRefundDetails){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["multi_refund_details"] = boost::any(temp1);
    }
    if (orderNum) {
      res["order_num"] = boost::any(*orderNum);
    }
    if (passengerRefundDetails) {
      vector<boost::any> temp1;
      for(auto item1:*passengerRefundDetails){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["passenger_refund_details"] = boost::any(temp1);
    }
    if (paySuccessUtcTime) {
      res["pay_success_utc_time"] = boost::any(*paySuccessUtcTime);
    }
    if (refundAttachmentUrls) {
      res["refund_attachment_urls"] = boost::any(*refundAttachmentUrls);
    }
    if (refundJourneys) {
      vector<boost::any> temp1;
      for(auto item1:*refundJourneys){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["refund_journeys"] = boost::any(temp1);
    }
    if (refundOrderNum) {
      res["refund_order_num"] = boost::any(*refundOrderNum);
    }
    if (refundReason) {
      res["refund_reason"] = boost::any(*refundReason);
    }
    if (refundType) {
      res["refund_type"] = boost::any(*refundType);
    }
    if (refuseReason) {
      res["refuse_reason"] = boost::any(*refuseReason);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (transactionNo) {
      res["transaction_no"] = boost::any(*transactionNo);
    }
    if (utcCreateTime) {
      res["utc_create_time"] = boost::any(*utcCreateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("contain_multi_refund") != m.end() && !m["contain_multi_refund"].empty()) {
      containMultiRefund = make_shared<bool>(boost::any_cast<bool>(m["contain_multi_refund"]));
    }
    if (m.find("multi_refund_details") != m.end() && !m["multi_refund_details"].empty()) {
      if (typeid(vector<boost::any>) == m["multi_refund_details"].type()) {
        vector<RefundDetailResponseBodyDataMultiRefundDetails> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["multi_refund_details"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RefundDetailResponseBodyDataMultiRefundDetails model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        multiRefundDetails = make_shared<vector<RefundDetailResponseBodyDataMultiRefundDetails>>(expect1);
      }
    }
    if (m.find("order_num") != m.end() && !m["order_num"].empty()) {
      orderNum = make_shared<long>(boost::any_cast<long>(m["order_num"]));
    }
    if (m.find("passenger_refund_details") != m.end() && !m["passenger_refund_details"].empty()) {
      if (typeid(vector<boost::any>) == m["passenger_refund_details"].type()) {
        vector<RefundDetailResponseBodyDataPassengerRefundDetails> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["passenger_refund_details"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RefundDetailResponseBodyDataPassengerRefundDetails model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        passengerRefundDetails = make_shared<vector<RefundDetailResponseBodyDataPassengerRefundDetails>>(expect1);
      }
    }
    if (m.find("pay_success_utc_time") != m.end() && !m["pay_success_utc_time"].empty()) {
      paySuccessUtcTime = make_shared<long>(boost::any_cast<long>(m["pay_success_utc_time"]));
    }
    if (m.find("refund_attachment_urls") != m.end() && !m["refund_attachment_urls"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["refund_attachment_urls"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["refund_attachment_urls"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      refundAttachmentUrls = make_shared<vector<string>>(toVec1);
    }
    if (m.find("refund_journeys") != m.end() && !m["refund_journeys"].empty()) {
      if (typeid(vector<boost::any>) == m["refund_journeys"].type()) {
        vector<RefundDetailResponseBodyDataRefundJourneys> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["refund_journeys"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RefundDetailResponseBodyDataRefundJourneys model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        refundJourneys = make_shared<vector<RefundDetailResponseBodyDataRefundJourneys>>(expect1);
      }
    }
    if (m.find("refund_order_num") != m.end() && !m["refund_order_num"].empty()) {
      refundOrderNum = make_shared<long>(boost::any_cast<long>(m["refund_order_num"]));
    }
    if (m.find("refund_reason") != m.end() && !m["refund_reason"].empty()) {
      refundReason = make_shared<string>(boost::any_cast<string>(m["refund_reason"]));
    }
    if (m.find("refund_type") != m.end() && !m["refund_type"].empty()) {
      refundType = make_shared<long>(boost::any_cast<long>(m["refund_type"]));
    }
    if (m.find("refuse_reason") != m.end() && !m["refuse_reason"].empty()) {
      refuseReason = make_shared<string>(boost::any_cast<string>(m["refuse_reason"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("transaction_no") != m.end() && !m["transaction_no"].empty()) {
      transactionNo = make_shared<string>(boost::any_cast<string>(m["transaction_no"]));
    }
    if (m.find("utc_create_time") != m.end() && !m["utc_create_time"].empty()) {
      utcCreateTime = make_shared<long>(boost::any_cast<long>(m["utc_create_time"]));
    }
  }


  virtual ~RefundDetailResponseBodyData() = default;
};
class RefundDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<RefundDetailResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<boost::any> errorData{};
  shared_ptr<string> errorMsg{};
  shared_ptr<long> status{};
  shared_ptr<bool> success{};

  RefundDetailResponseBody() {}

  explicit RefundDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["error_code"] = boost::any(*errorCode);
    }
    if (errorData) {
      res["error_data"] = boost::any(*errorData);
    }
    if (errorMsg) {
      res["error_msg"] = boost::any(*errorMsg);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        RefundDetailResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<RefundDetailResponseBodyData>(model1);
      }
    }
    if (m.find("error_code") != m.end() && !m["error_code"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["error_code"]));
    }
    if (m.find("error_data") != m.end() && !m["error_data"].empty()) {
      errorData = make_shared<boost::any>(boost::any_cast<boost::any>(m["error_data"]));
    }
    if (m.find("error_msg") != m.end() && !m["error_msg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["error_msg"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~RefundDetailResponseBody() = default;
};
class RefundDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RefundDetailResponseBody> body{};

  RefundDetailResponse() {}

  explicit RefundDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RefundDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RefundDetailResponseBody>(model1);
      }
    }
  }


  virtual ~RefundDetailResponse() = default;
};
class RefundDetailListHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAirticketAccessToken{};
  shared_ptr<string> xAcsAirticketLanguage{};

  RefundDetailListHeaders() {}

  explicit RefundDetailListHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAirticketAccessToken) {
      res["x-acs-airticket-access-token"] = boost::any(*xAcsAirticketAccessToken);
    }
    if (xAcsAirticketLanguage) {
      res["x-acs-airticket-language"] = boost::any(*xAcsAirticketLanguage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("x-acs-airticket-access-token") != m.end() && !m["x-acs-airticket-access-token"].empty()) {
      xAcsAirticketAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-airticket-access-token"]));
    }
    if (m.find("x-acs-airticket-language") != m.end() && !m["x-acs-airticket-language"].empty()) {
      xAcsAirticketLanguage = make_shared<string>(boost::any_cast<string>(m["x-acs-airticket-language"]));
    }
  }


  virtual ~RefundDetailListHeaders() = default;
};
class RefundDetailListRequest : public Darabonba::Model {
public:
  shared_ptr<long> orderNum{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> refundCreateBeginTime{};
  shared_ptr<long> refundCreateEndTime{};

  RefundDetailListRequest() {}

  explicit RefundDetailListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderNum) {
      res["order_num"] = boost::any(*orderNum);
    }
    if (pageIndex) {
      res["page_index"] = boost::any(*pageIndex);
    }
    if (pageSize) {
      res["page_size"] = boost::any(*pageSize);
    }
    if (refundCreateBeginTime) {
      res["refund_create_begin_time"] = boost::any(*refundCreateBeginTime);
    }
    if (refundCreateEndTime) {
      res["refund_create_end_time"] = boost::any(*refundCreateEndTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("order_num") != m.end() && !m["order_num"].empty()) {
      orderNum = make_shared<long>(boost::any_cast<long>(m["order_num"]));
    }
    if (m.find("page_index") != m.end() && !m["page_index"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["page_index"]));
    }
    if (m.find("page_size") != m.end() && !m["page_size"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["page_size"]));
    }
    if (m.find("refund_create_begin_time") != m.end() && !m["refund_create_begin_time"].empty()) {
      refundCreateBeginTime = make_shared<long>(boost::any_cast<long>(m["refund_create_begin_time"]));
    }
    if (m.find("refund_create_end_time") != m.end() && !m["refund_create_end_time"].empty()) {
      refundCreateEndTime = make_shared<long>(boost::any_cast<long>(m["refund_create_end_time"]));
    }
  }


  virtual ~RefundDetailListRequest() = default;
};
class RefundDetailListResponseBodyDataList : public Darabonba::Model {
public:
  shared_ptr<bool> isMultiRefund{};
  shared_ptr<long> orderNum{};
  shared_ptr<long> refundOrderNum{};
  shared_ptr<long> refundOrderStatus{};
  shared_ptr<string> relatedRefundOrderNum{};
  shared_ptr<string> transactionNo{};
  shared_ptr<long> utcCreateTime{};

  RefundDetailListResponseBodyDataList() {}

  explicit RefundDetailListResponseBodyDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isMultiRefund) {
      res["is_multi_refund"] = boost::any(*isMultiRefund);
    }
    if (orderNum) {
      res["order_num"] = boost::any(*orderNum);
    }
    if (refundOrderNum) {
      res["refund_order_num"] = boost::any(*refundOrderNum);
    }
    if (refundOrderStatus) {
      res["refund_order_status"] = boost::any(*refundOrderStatus);
    }
    if (relatedRefundOrderNum) {
      res["related_refund_order_num"] = boost::any(*relatedRefundOrderNum);
    }
    if (transactionNo) {
      res["transaction_no"] = boost::any(*transactionNo);
    }
    if (utcCreateTime) {
      res["utc_create_time"] = boost::any(*utcCreateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("is_multi_refund") != m.end() && !m["is_multi_refund"].empty()) {
      isMultiRefund = make_shared<bool>(boost::any_cast<bool>(m["is_multi_refund"]));
    }
    if (m.find("order_num") != m.end() && !m["order_num"].empty()) {
      orderNum = make_shared<long>(boost::any_cast<long>(m["order_num"]));
    }
    if (m.find("refund_order_num") != m.end() && !m["refund_order_num"].empty()) {
      refundOrderNum = make_shared<long>(boost::any_cast<long>(m["refund_order_num"]));
    }
    if (m.find("refund_order_status") != m.end() && !m["refund_order_status"].empty()) {
      refundOrderStatus = make_shared<long>(boost::any_cast<long>(m["refund_order_status"]));
    }
    if (m.find("related_refund_order_num") != m.end() && !m["related_refund_order_num"].empty()) {
      relatedRefundOrderNum = make_shared<string>(boost::any_cast<string>(m["related_refund_order_num"]));
    }
    if (m.find("transaction_no") != m.end() && !m["transaction_no"].empty()) {
      transactionNo = make_shared<string>(boost::any_cast<string>(m["transaction_no"]));
    }
    if (m.find("utc_create_time") != m.end() && !m["utc_create_time"].empty()) {
      utcCreateTime = make_shared<long>(boost::any_cast<long>(m["utc_create_time"]));
    }
  }


  virtual ~RefundDetailListResponseBodyDataList() = default;
};
class RefundDetailListResponseBodyDataPagination : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};
  shared_ptr<long> totalPage{};

  RefundDetailListResponseBodyDataPagination() {}

  explicit RefundDetailListResponseBodyDataPagination(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["current_page"] = boost::any(*currentPage);
    }
    if (pageSize) {
      res["page_size"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["total_count"] = boost::any(*totalCount);
    }
    if (totalPage) {
      res["total_page"] = boost::any(*totalPage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("current_page") != m.end() && !m["current_page"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["current_page"]));
    }
    if (m.find("page_size") != m.end() && !m["page_size"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["page_size"]));
    }
    if (m.find("total_count") != m.end() && !m["total_count"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["total_count"]));
    }
    if (m.find("total_page") != m.end() && !m["total_page"].empty()) {
      totalPage = make_shared<long>(boost::any_cast<long>(m["total_page"]));
    }
  }


  virtual ~RefundDetailListResponseBodyDataPagination() = default;
};
class RefundDetailListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<RefundDetailListResponseBodyDataList>> list{};
  shared_ptr<RefundDetailListResponseBodyDataPagination> pagination{};

  RefundDetailListResponseBodyData() {}

  explicit RefundDetailListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["list"] = boost::any(temp1);
    }
    if (pagination) {
      res["pagination"] = pagination ? boost::any(pagination->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("list") != m.end() && !m["list"].empty()) {
      if (typeid(vector<boost::any>) == m["list"].type()) {
        vector<RefundDetailListResponseBodyDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RefundDetailListResponseBodyDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<RefundDetailListResponseBodyDataList>>(expect1);
      }
    }
    if (m.find("pagination") != m.end() && !m["pagination"].empty()) {
      if (typeid(map<string, boost::any>) == m["pagination"].type()) {
        RefundDetailListResponseBodyDataPagination model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["pagination"]));
        pagination = make_shared<RefundDetailListResponseBodyDataPagination>(model1);
      }
    }
  }


  virtual ~RefundDetailListResponseBodyData() = default;
};
class RefundDetailListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<RefundDetailListResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<boost::any> errorData{};
  shared_ptr<string> errorMsg{};
  shared_ptr<long> status{};
  shared_ptr<bool> success{};

  RefundDetailListResponseBody() {}

  explicit RefundDetailListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["error_code"] = boost::any(*errorCode);
    }
    if (errorData) {
      res["error_data"] = boost::any(*errorData);
    }
    if (errorMsg) {
      res["error_msg"] = boost::any(*errorMsg);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        RefundDetailListResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<RefundDetailListResponseBodyData>(model1);
      }
    }
    if (m.find("error_code") != m.end() && !m["error_code"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["error_code"]));
    }
    if (m.find("error_data") != m.end() && !m["error_data"].empty()) {
      errorData = make_shared<boost::any>(boost::any_cast<boost::any>(m["error_data"]));
    }
    if (m.find("error_msg") != m.end() && !m["error_msg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["error_msg"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~RefundDetailListResponseBody() = default;
};
class RefundDetailListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RefundDetailListResponseBody> body{};

  RefundDetailListResponse() {}

  explicit RefundDetailListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RefundDetailListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RefundDetailListResponseBody>(model1);
      }
    }
  }


  virtual ~RefundDetailListResponse() = default;
};
class SearchHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAirticketAccessToken{};
  shared_ptr<string> xAcsAirticketLanguage{};

  SearchHeaders() {}

  explicit SearchHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAirticketAccessToken) {
      res["x-acs-airticket-access-token"] = boost::any(*xAcsAirticketAccessToken);
    }
    if (xAcsAirticketLanguage) {
      res["x-acs-airticket-language"] = boost::any(*xAcsAirticketLanguage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("x-acs-airticket-access-token") != m.end() && !m["x-acs-airticket-access-token"].empty()) {
      xAcsAirticketAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-airticket-access-token"]));
    }
    if (m.find("x-acs-airticket-language") != m.end() && !m["x-acs-airticket-language"].empty()) {
      xAcsAirticketLanguage = make_shared<string>(boost::any_cast<string>(m["x-acs-airticket-language"]));
    }
  }


  virtual ~SearchHeaders() = default;
};
class SearchRequestAirLegs : public Darabonba::Model {
public:
  shared_ptr<vector<string>> arrivalAirportList{};
  shared_ptr<string> arrivalCity{};
  shared_ptr<vector<string>> departureAirportList{};
  shared_ptr<string> departureCity{};
  shared_ptr<string> departureDate{};

  SearchRequestAirLegs() {}

  explicit SearchRequestAirLegs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arrivalAirportList) {
      res["arrival_airport_list"] = boost::any(*arrivalAirportList);
    }
    if (arrivalCity) {
      res["arrival_city"] = boost::any(*arrivalCity);
    }
    if (departureAirportList) {
      res["departure_airport_list"] = boost::any(*departureAirportList);
    }
    if (departureCity) {
      res["departure_city"] = boost::any(*departureCity);
    }
    if (departureDate) {
      res["departure_date"] = boost::any(*departureDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("arrival_airport_list") != m.end() && !m["arrival_airport_list"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["arrival_airport_list"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["arrival_airport_list"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      arrivalAirportList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("arrival_city") != m.end() && !m["arrival_city"].empty()) {
      arrivalCity = make_shared<string>(boost::any_cast<string>(m["arrival_city"]));
    }
    if (m.find("departure_airport_list") != m.end() && !m["departure_airport_list"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["departure_airport_list"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["departure_airport_list"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      departureAirportList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("departure_city") != m.end() && !m["departure_city"].empty()) {
      departureCity = make_shared<string>(boost::any_cast<string>(m["departure_city"]));
    }
    if (m.find("departure_date") != m.end() && !m["departure_date"].empty()) {
      departureDate = make_shared<string>(boost::any_cast<string>(m["departure_date"]));
    }
  }


  virtual ~SearchRequestAirLegs() = default;
};
class SearchRequestSearchControlOptions : public Darabonba::Model {
public:
  shared_ptr<vector<string>> airlineExcludedList{};
  shared_ptr<vector<string>> airlinePreferList{};
  shared_ptr<string> serviceQuality{};

  SearchRequestSearchControlOptions() {}

  explicit SearchRequestSearchControlOptions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (airlineExcludedList) {
      res["airline_excluded_list"] = boost::any(*airlineExcludedList);
    }
    if (airlinePreferList) {
      res["airline_prefer_list"] = boost::any(*airlinePreferList);
    }
    if (serviceQuality) {
      res["service_quality"] = boost::any(*serviceQuality);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("airline_excluded_list") != m.end() && !m["airline_excluded_list"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["airline_excluded_list"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["airline_excluded_list"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      airlineExcludedList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("airline_prefer_list") != m.end() && !m["airline_prefer_list"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["airline_prefer_list"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["airline_prefer_list"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      airlinePreferList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("service_quality") != m.end() && !m["service_quality"].empty()) {
      serviceQuality = make_shared<string>(boost::any_cast<string>(m["service_quality"]));
    }
  }


  virtual ~SearchRequestSearchControlOptions() = default;
};
class SearchRequest : public Darabonba::Model {
public:
  shared_ptr<long> adults{};
  shared_ptr<vector<SearchRequestAirLegs>> airLegs{};
  shared_ptr<string> cabinClass{};
  shared_ptr<long> children{};
  shared_ptr<long> infants{};
  shared_ptr<SearchRequestSearchControlOptions> searchControlOptions{};

  SearchRequest() {}

  explicit SearchRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (adults) {
      res["adults"] = boost::any(*adults);
    }
    if (airLegs) {
      vector<boost::any> temp1;
      for(auto item1:*airLegs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["air_legs"] = boost::any(temp1);
    }
    if (cabinClass) {
      res["cabin_class"] = boost::any(*cabinClass);
    }
    if (children) {
      res["children"] = boost::any(*children);
    }
    if (infants) {
      res["infants"] = boost::any(*infants);
    }
    if (searchControlOptions) {
      res["search_control_options"] = searchControlOptions ? boost::any(searchControlOptions->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("adults") != m.end() && !m["adults"].empty()) {
      adults = make_shared<long>(boost::any_cast<long>(m["adults"]));
    }
    if (m.find("air_legs") != m.end() && !m["air_legs"].empty()) {
      if (typeid(vector<boost::any>) == m["air_legs"].type()) {
        vector<SearchRequestAirLegs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["air_legs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchRequestAirLegs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        airLegs = make_shared<vector<SearchRequestAirLegs>>(expect1);
      }
    }
    if (m.find("cabin_class") != m.end() && !m["cabin_class"].empty()) {
      cabinClass = make_shared<string>(boost::any_cast<string>(m["cabin_class"]));
    }
    if (m.find("children") != m.end() && !m["children"].empty()) {
      children = make_shared<long>(boost::any_cast<long>(m["children"]));
    }
    if (m.find("infants") != m.end() && !m["infants"].empty()) {
      infants = make_shared<long>(boost::any_cast<long>(m["infants"]));
    }
    if (m.find("search_control_options") != m.end() && !m["search_control_options"].empty()) {
      if (typeid(map<string, boost::any>) == m["search_control_options"].type()) {
        SearchRequestSearchControlOptions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["search_control_options"]));
        searchControlOptions = make_shared<SearchRequestSearchControlOptions>(model1);
      }
    }
  }


  virtual ~SearchRequest() = default;
};
class SearchShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<long> adults{};
  shared_ptr<string> airLegsShrink{};
  shared_ptr<string> cabinClass{};
  shared_ptr<long> children{};
  shared_ptr<long> infants{};
  shared_ptr<string> searchControlOptionsShrink{};

  SearchShrinkRequest() {}

  explicit SearchShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (adults) {
      res["adults"] = boost::any(*adults);
    }
    if (airLegsShrink) {
      res["air_legs"] = boost::any(*airLegsShrink);
    }
    if (cabinClass) {
      res["cabin_class"] = boost::any(*cabinClass);
    }
    if (children) {
      res["children"] = boost::any(*children);
    }
    if (infants) {
      res["infants"] = boost::any(*infants);
    }
    if (searchControlOptionsShrink) {
      res["search_control_options"] = boost::any(*searchControlOptionsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("adults") != m.end() && !m["adults"].empty()) {
      adults = make_shared<long>(boost::any_cast<long>(m["adults"]));
    }
    if (m.find("air_legs") != m.end() && !m["air_legs"].empty()) {
      airLegsShrink = make_shared<string>(boost::any_cast<string>(m["air_legs"]));
    }
    if (m.find("cabin_class") != m.end() && !m["cabin_class"].empty()) {
      cabinClass = make_shared<string>(boost::any_cast<string>(m["cabin_class"]));
    }
    if (m.find("children") != m.end() && !m["children"].empty()) {
      children = make_shared<long>(boost::any_cast<long>(m["children"]));
    }
    if (m.find("infants") != m.end() && !m["infants"].empty()) {
      infants = make_shared<long>(boost::any_cast<long>(m["infants"]));
    }
    if (m.find("search_control_options") != m.end() && !m["search_control_options"].empty()) {
      searchControlOptionsShrink = make_shared<string>(boost::any_cast<string>(m["search_control_options"]));
    }
  }


  virtual ~SearchShrinkRequest() = default;
};
class SearchResponseBodyDataSolutionListJourneyListSegmentList : public Darabonba::Model {
public:
  shared_ptr<string> arrivalAirport{};
  shared_ptr<string> arrivalCity{};
  shared_ptr<string> arrivalTerminal{};
  shared_ptr<string> arrivalTime{};
  shared_ptr<string> availability{};
  shared_ptr<string> cabin{};
  shared_ptr<string> cabinClass{};
  shared_ptr<bool> codeShare{};
  shared_ptr<string> departureAirport{};
  shared_ptr<string> departureCity{};
  shared_ptr<string> departureTerminal{};
  shared_ptr<string> departureTime{};
  shared_ptr<string> equipType{};
  shared_ptr<long> flightDuration{};
  shared_ptr<string> marketingAirline{};
  shared_ptr<string> marketingFlightNo{};
  shared_ptr<long> marketingFlightNoInt{};
  shared_ptr<string> operatingAirline{};
  shared_ptr<string> operatingFlightNo{};
  shared_ptr<string> segmentId{};
  shared_ptr<string> stopCityList{};
  shared_ptr<long> stopQuantity{};

  SearchResponseBodyDataSolutionListJourneyListSegmentList() {}

  explicit SearchResponseBodyDataSolutionListJourneyListSegmentList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arrivalAirport) {
      res["arrival_airport"] = boost::any(*arrivalAirport);
    }
    if (arrivalCity) {
      res["arrival_city"] = boost::any(*arrivalCity);
    }
    if (arrivalTerminal) {
      res["arrival_terminal"] = boost::any(*arrivalTerminal);
    }
    if (arrivalTime) {
      res["arrival_time"] = boost::any(*arrivalTime);
    }
    if (availability) {
      res["availability"] = boost::any(*availability);
    }
    if (cabin) {
      res["cabin"] = boost::any(*cabin);
    }
    if (cabinClass) {
      res["cabin_class"] = boost::any(*cabinClass);
    }
    if (codeShare) {
      res["code_share"] = boost::any(*codeShare);
    }
    if (departureAirport) {
      res["departure_airport"] = boost::any(*departureAirport);
    }
    if (departureCity) {
      res["departure_city"] = boost::any(*departureCity);
    }
    if (departureTerminal) {
      res["departure_terminal"] = boost::any(*departureTerminal);
    }
    if (departureTime) {
      res["departure_time"] = boost::any(*departureTime);
    }
    if (equipType) {
      res["equip_type"] = boost::any(*equipType);
    }
    if (flightDuration) {
      res["flight_duration"] = boost::any(*flightDuration);
    }
    if (marketingAirline) {
      res["marketing_airline"] = boost::any(*marketingAirline);
    }
    if (marketingFlightNo) {
      res["marketing_flight_no"] = boost::any(*marketingFlightNo);
    }
    if (marketingFlightNoInt) {
      res["marketing_flight_no_int"] = boost::any(*marketingFlightNoInt);
    }
    if (operatingAirline) {
      res["operating_airline"] = boost::any(*operatingAirline);
    }
    if (operatingFlightNo) {
      res["operating_flight_no"] = boost::any(*operatingFlightNo);
    }
    if (segmentId) {
      res["segment_id"] = boost::any(*segmentId);
    }
    if (stopCityList) {
      res["stop_city_list"] = boost::any(*stopCityList);
    }
    if (stopQuantity) {
      res["stop_quantity"] = boost::any(*stopQuantity);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("arrival_airport") != m.end() && !m["arrival_airport"].empty()) {
      arrivalAirport = make_shared<string>(boost::any_cast<string>(m["arrival_airport"]));
    }
    if (m.find("arrival_city") != m.end() && !m["arrival_city"].empty()) {
      arrivalCity = make_shared<string>(boost::any_cast<string>(m["arrival_city"]));
    }
    if (m.find("arrival_terminal") != m.end() && !m["arrival_terminal"].empty()) {
      arrivalTerminal = make_shared<string>(boost::any_cast<string>(m["arrival_terminal"]));
    }
    if (m.find("arrival_time") != m.end() && !m["arrival_time"].empty()) {
      arrivalTime = make_shared<string>(boost::any_cast<string>(m["arrival_time"]));
    }
    if (m.find("availability") != m.end() && !m["availability"].empty()) {
      availability = make_shared<string>(boost::any_cast<string>(m["availability"]));
    }
    if (m.find("cabin") != m.end() && !m["cabin"].empty()) {
      cabin = make_shared<string>(boost::any_cast<string>(m["cabin"]));
    }
    if (m.find("cabin_class") != m.end() && !m["cabin_class"].empty()) {
      cabinClass = make_shared<string>(boost::any_cast<string>(m["cabin_class"]));
    }
    if (m.find("code_share") != m.end() && !m["code_share"].empty()) {
      codeShare = make_shared<bool>(boost::any_cast<bool>(m["code_share"]));
    }
    if (m.find("departure_airport") != m.end() && !m["departure_airport"].empty()) {
      departureAirport = make_shared<string>(boost::any_cast<string>(m["departure_airport"]));
    }
    if (m.find("departure_city") != m.end() && !m["departure_city"].empty()) {
      departureCity = make_shared<string>(boost::any_cast<string>(m["departure_city"]));
    }
    if (m.find("departure_terminal") != m.end() && !m["departure_terminal"].empty()) {
      departureTerminal = make_shared<string>(boost::any_cast<string>(m["departure_terminal"]));
    }
    if (m.find("departure_time") != m.end() && !m["departure_time"].empty()) {
      departureTime = make_shared<string>(boost::any_cast<string>(m["departure_time"]));
    }
    if (m.find("equip_type") != m.end() && !m["equip_type"].empty()) {
      equipType = make_shared<string>(boost::any_cast<string>(m["equip_type"]));
    }
    if (m.find("flight_duration") != m.end() && !m["flight_duration"].empty()) {
      flightDuration = make_shared<long>(boost::any_cast<long>(m["flight_duration"]));
    }
    if (m.find("marketing_airline") != m.end() && !m["marketing_airline"].empty()) {
      marketingAirline = make_shared<string>(boost::any_cast<string>(m["marketing_airline"]));
    }
    if (m.find("marketing_flight_no") != m.end() && !m["marketing_flight_no"].empty()) {
      marketingFlightNo = make_shared<string>(boost::any_cast<string>(m["marketing_flight_no"]));
    }
    if (m.find("marketing_flight_no_int") != m.end() && !m["marketing_flight_no_int"].empty()) {
      marketingFlightNoInt = make_shared<long>(boost::any_cast<long>(m["marketing_flight_no_int"]));
    }
    if (m.find("operating_airline") != m.end() && !m["operating_airline"].empty()) {
      operatingAirline = make_shared<string>(boost::any_cast<string>(m["operating_airline"]));
    }
    if (m.find("operating_flight_no") != m.end() && !m["operating_flight_no"].empty()) {
      operatingFlightNo = make_shared<string>(boost::any_cast<string>(m["operating_flight_no"]));
    }
    if (m.find("segment_id") != m.end() && !m["segment_id"].empty()) {
      segmentId = make_shared<string>(boost::any_cast<string>(m["segment_id"]));
    }
    if (m.find("stop_city_list") != m.end() && !m["stop_city_list"].empty()) {
      stopCityList = make_shared<string>(boost::any_cast<string>(m["stop_city_list"]));
    }
    if (m.find("stop_quantity") != m.end() && !m["stop_quantity"].empty()) {
      stopQuantity = make_shared<long>(boost::any_cast<long>(m["stop_quantity"]));
    }
  }


  virtual ~SearchResponseBodyDataSolutionListJourneyListSegmentList() = default;
};
class SearchResponseBodyDataSolutionListJourneyList : public Darabonba::Model {
public:
  shared_ptr<vector<SearchResponseBodyDataSolutionListJourneyListSegmentList>> segmentList{};
  shared_ptr<long> transferCount{};

  SearchResponseBodyDataSolutionListJourneyList() {}

  explicit SearchResponseBodyDataSolutionListJourneyList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (segmentList) {
      vector<boost::any> temp1;
      for(auto item1:*segmentList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["segment_list"] = boost::any(temp1);
    }
    if (transferCount) {
      res["transfer_count"] = boost::any(*transferCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("segment_list") != m.end() && !m["segment_list"].empty()) {
      if (typeid(vector<boost::any>) == m["segment_list"].type()) {
        vector<SearchResponseBodyDataSolutionListJourneyListSegmentList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["segment_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchResponseBodyDataSolutionListJourneyListSegmentList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        segmentList = make_shared<vector<SearchResponseBodyDataSolutionListJourneyListSegmentList>>(expect1);
      }
    }
    if (m.find("transfer_count") != m.end() && !m["transfer_count"].empty()) {
      transferCount = make_shared<long>(boost::any_cast<long>(m["transfer_count"]));
    }
  }


  virtual ~SearchResponseBodyDataSolutionListJourneyList() = default;
};
class SearchResponseBodyDataSolutionListSegmentBaggageCheckInInfoList : public Darabonba::Model {
public:
  shared_ptr<long> luggageDirectInfoType{};
  shared_ptr<vector<string>> segmentIdList{};

  SearchResponseBodyDataSolutionListSegmentBaggageCheckInInfoList() {}

  explicit SearchResponseBodyDataSolutionListSegmentBaggageCheckInInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (luggageDirectInfoType) {
      res["luggage_direct_info_type"] = boost::any(*luggageDirectInfoType);
    }
    if (segmentIdList) {
      res["segment_id_list"] = boost::any(*segmentIdList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("luggage_direct_info_type") != m.end() && !m["luggage_direct_info_type"].empty()) {
      luggageDirectInfoType = make_shared<long>(boost::any_cast<long>(m["luggage_direct_info_type"]));
    }
    if (m.find("segment_id_list") != m.end() && !m["segment_id_list"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["segment_id_list"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["segment_id_list"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      segmentIdList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~SearchResponseBodyDataSolutionListSegmentBaggageCheckInInfoList() = default;
};
class SearchResponseBodyDataSolutionListSegmentBaggageMappingList : public Darabonba::Model {
public:
  shared_ptr<map<string, DataSolutionListSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue>> passengerBaggageAllowanceMapping{};
  shared_ptr<vector<string>> segmentIdList{};

  SearchResponseBodyDataSolutionListSegmentBaggageMappingList() {}

  explicit SearchResponseBodyDataSolutionListSegmentBaggageMappingList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (passengerBaggageAllowanceMapping) {
      map<string, boost::any> temp1;
      for(auto item1:*passengerBaggageAllowanceMapping){
        temp1[item1.first] = boost::any(item1.second.toMap());
      }
      res["passenger_baggage_allowance_mapping"] = boost::any(temp1);
    }
    if (segmentIdList) {
      res["segment_id_list"] = boost::any(*segmentIdList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("passenger_baggage_allowance_mapping") != m.end() && !m["passenger_baggage_allowance_mapping"].empty()) {
      if (typeid(map<string, boost::any>) == m["passenger_baggage_allowance_mapping"].type()) {
        map<string, DataSolutionListSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue> expect1;
        for(auto item1:boost::any_cast<map<string, boost::any>>(m["passenger_baggage_allowance_mapping"])){
          if (typeid(map<string, boost::any>) == item1.second.type()) {
            DataSolutionListSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1.second));
            expect1[item1.first] = model2;
          }
        }
        passengerBaggageAllowanceMapping = make_shared<map<string, DataSolutionListSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue>>(expect1);
      }
    }
    if (m.find("segment_id_list") != m.end() && !m["segment_id_list"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["segment_id_list"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["segment_id_list"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      segmentIdList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~SearchResponseBodyDataSolutionListSegmentBaggageMappingList() = default;
};
class SearchResponseBodyDataSolutionListSegmentRefundChangeRuleMappingList : public Darabonba::Model {
public:
  shared_ptr<map<string, DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue>> refundChangeRuleMap{};
  shared_ptr<vector<string>> segmentIdList{};

  SearchResponseBodyDataSolutionListSegmentRefundChangeRuleMappingList() {}

  explicit SearchResponseBodyDataSolutionListSegmentRefundChangeRuleMappingList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (refundChangeRuleMap) {
      map<string, boost::any> temp1;
      for(auto item1:*refundChangeRuleMap){
        temp1[item1.first] = boost::any(item1.second.toMap());
      }
      res["refund_change_rule_map"] = boost::any(temp1);
    }
    if (segmentIdList) {
      res["segment_id_list"] = boost::any(*segmentIdList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("refund_change_rule_map") != m.end() && !m["refund_change_rule_map"].empty()) {
      if (typeid(map<string, boost::any>) == m["refund_change_rule_map"].type()) {
        map<string, DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue> expect1;
        for(auto item1:boost::any_cast<map<string, boost::any>>(m["refund_change_rule_map"])){
          if (typeid(map<string, boost::any>) == item1.second.type()) {
            DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1.second));
            expect1[item1.first] = model2;
          }
        }
        refundChangeRuleMap = make_shared<map<string, DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue>>(expect1);
      }
    }
    if (m.find("segment_id_list") != m.end() && !m["segment_id_list"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["segment_id_list"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["segment_id_list"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      segmentIdList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~SearchResponseBodyDataSolutionListSegmentRefundChangeRuleMappingList() = default;
};
class SearchResponseBodyDataSolutionListSolutionAttribute : public Darabonba::Model {
public:
  shared_ptr<string> supplySourceType{};

  SearchResponseBodyDataSolutionListSolutionAttribute() {}

  explicit SearchResponseBodyDataSolutionListSolutionAttribute(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (supplySourceType) {
      res["supply_source_type"] = boost::any(*supplySourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("supply_source_type") != m.end() && !m["supply_source_type"].empty()) {
      supplySourceType = make_shared<string>(boost::any_cast<string>(m["supply_source_type"]));
    }
  }


  virtual ~SearchResponseBodyDataSolutionListSolutionAttribute() = default;
};
class SearchResponseBodyDataSolutionList : public Darabonba::Model {
public:
  shared_ptr<double> adultPrice{};
  shared_ptr<double> adultTax{};
  shared_ptr<double> childPrice{};
  shared_ptr<double> childTax{};
  shared_ptr<double> infantPrice{};
  shared_ptr<double> infantTax{};
  shared_ptr<vector<SearchResponseBodyDataSolutionListJourneyList>> journeyList{};
  shared_ptr<string> productTypeDescription{};
  shared_ptr<string> refundTicketCouponDescription{};
  shared_ptr<vector<SearchResponseBodyDataSolutionListSegmentBaggageCheckInInfoList>> segmentBaggageCheckInInfoList{};
  shared_ptr<vector<SearchResponseBodyDataSolutionListSegmentBaggageMappingList>> segmentBaggageMappingList{};
  shared_ptr<vector<SearchResponseBodyDataSolutionListSegmentRefundChangeRuleMappingList>> segmentRefundChangeRuleMappingList{};
  shared_ptr<SearchResponseBodyDataSolutionListSolutionAttribute> solutionAttribute{};
  shared_ptr<string> solutionId{};

  SearchResponseBodyDataSolutionList() {}

  explicit SearchResponseBodyDataSolutionList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (adultPrice) {
      res["adult_price"] = boost::any(*adultPrice);
    }
    if (adultTax) {
      res["adult_tax"] = boost::any(*adultTax);
    }
    if (childPrice) {
      res["child_price"] = boost::any(*childPrice);
    }
    if (childTax) {
      res["child_tax"] = boost::any(*childTax);
    }
    if (infantPrice) {
      res["infant_price"] = boost::any(*infantPrice);
    }
    if (infantTax) {
      res["infant_tax"] = boost::any(*infantTax);
    }
    if (journeyList) {
      vector<boost::any> temp1;
      for(auto item1:*journeyList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["journey_list"] = boost::any(temp1);
    }
    if (productTypeDescription) {
      res["product_type_description"] = boost::any(*productTypeDescription);
    }
    if (refundTicketCouponDescription) {
      res["refund_ticket_coupon_description"] = boost::any(*refundTicketCouponDescription);
    }
    if (segmentBaggageCheckInInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*segmentBaggageCheckInInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["segment_baggage_check_in_info_list"] = boost::any(temp1);
    }
    if (segmentBaggageMappingList) {
      vector<boost::any> temp1;
      for(auto item1:*segmentBaggageMappingList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["segment_baggage_mapping_list"] = boost::any(temp1);
    }
    if (segmentRefundChangeRuleMappingList) {
      vector<boost::any> temp1;
      for(auto item1:*segmentRefundChangeRuleMappingList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["segment_refund_change_rule_mapping_list"] = boost::any(temp1);
    }
    if (solutionAttribute) {
      res["solution_attribute"] = solutionAttribute ? boost::any(solutionAttribute->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (solutionId) {
      res["solution_id"] = boost::any(*solutionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("adult_price") != m.end() && !m["adult_price"].empty()) {
      adultPrice = make_shared<double>(boost::any_cast<double>(m["adult_price"]));
    }
    if (m.find("adult_tax") != m.end() && !m["adult_tax"].empty()) {
      adultTax = make_shared<double>(boost::any_cast<double>(m["adult_tax"]));
    }
    if (m.find("child_price") != m.end() && !m["child_price"].empty()) {
      childPrice = make_shared<double>(boost::any_cast<double>(m["child_price"]));
    }
    if (m.find("child_tax") != m.end() && !m["child_tax"].empty()) {
      childTax = make_shared<double>(boost::any_cast<double>(m["child_tax"]));
    }
    if (m.find("infant_price") != m.end() && !m["infant_price"].empty()) {
      infantPrice = make_shared<double>(boost::any_cast<double>(m["infant_price"]));
    }
    if (m.find("infant_tax") != m.end() && !m["infant_tax"].empty()) {
      infantTax = make_shared<double>(boost::any_cast<double>(m["infant_tax"]));
    }
    if (m.find("journey_list") != m.end() && !m["journey_list"].empty()) {
      if (typeid(vector<boost::any>) == m["journey_list"].type()) {
        vector<SearchResponseBodyDataSolutionListJourneyList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["journey_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchResponseBodyDataSolutionListJourneyList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        journeyList = make_shared<vector<SearchResponseBodyDataSolutionListJourneyList>>(expect1);
      }
    }
    if (m.find("product_type_description") != m.end() && !m["product_type_description"].empty()) {
      productTypeDescription = make_shared<string>(boost::any_cast<string>(m["product_type_description"]));
    }
    if (m.find("refund_ticket_coupon_description") != m.end() && !m["refund_ticket_coupon_description"].empty()) {
      refundTicketCouponDescription = make_shared<string>(boost::any_cast<string>(m["refund_ticket_coupon_description"]));
    }
    if (m.find("segment_baggage_check_in_info_list") != m.end() && !m["segment_baggage_check_in_info_list"].empty()) {
      if (typeid(vector<boost::any>) == m["segment_baggage_check_in_info_list"].type()) {
        vector<SearchResponseBodyDataSolutionListSegmentBaggageCheckInInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["segment_baggage_check_in_info_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchResponseBodyDataSolutionListSegmentBaggageCheckInInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        segmentBaggageCheckInInfoList = make_shared<vector<SearchResponseBodyDataSolutionListSegmentBaggageCheckInInfoList>>(expect1);
      }
    }
    if (m.find("segment_baggage_mapping_list") != m.end() && !m["segment_baggage_mapping_list"].empty()) {
      if (typeid(vector<boost::any>) == m["segment_baggage_mapping_list"].type()) {
        vector<SearchResponseBodyDataSolutionListSegmentBaggageMappingList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["segment_baggage_mapping_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchResponseBodyDataSolutionListSegmentBaggageMappingList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        segmentBaggageMappingList = make_shared<vector<SearchResponseBodyDataSolutionListSegmentBaggageMappingList>>(expect1);
      }
    }
    if (m.find("segment_refund_change_rule_mapping_list") != m.end() && !m["segment_refund_change_rule_mapping_list"].empty()) {
      if (typeid(vector<boost::any>) == m["segment_refund_change_rule_mapping_list"].type()) {
        vector<SearchResponseBodyDataSolutionListSegmentRefundChangeRuleMappingList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["segment_refund_change_rule_mapping_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchResponseBodyDataSolutionListSegmentRefundChangeRuleMappingList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        segmentRefundChangeRuleMappingList = make_shared<vector<SearchResponseBodyDataSolutionListSegmentRefundChangeRuleMappingList>>(expect1);
      }
    }
    if (m.find("solution_attribute") != m.end() && !m["solution_attribute"].empty()) {
      if (typeid(map<string, boost::any>) == m["solution_attribute"].type()) {
        SearchResponseBodyDataSolutionListSolutionAttribute model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["solution_attribute"]));
        solutionAttribute = make_shared<SearchResponseBodyDataSolutionListSolutionAttribute>(model1);
      }
    }
    if (m.find("solution_id") != m.end() && !m["solution_id"].empty()) {
      solutionId = make_shared<string>(boost::any_cast<string>(m["solution_id"]));
    }
  }


  virtual ~SearchResponseBodyDataSolutionList() = default;
};
class SearchResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<SearchResponseBodyDataSolutionList>> solutionList{};

  SearchResponseBodyData() {}

  explicit SearchResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (solutionList) {
      vector<boost::any> temp1;
      for(auto item1:*solutionList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["solution_list"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("solution_list") != m.end() && !m["solution_list"].empty()) {
      if (typeid(vector<boost::any>) == m["solution_list"].type()) {
        vector<SearchResponseBodyDataSolutionList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["solution_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchResponseBodyDataSolutionList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        solutionList = make_shared<vector<SearchResponseBodyDataSolutionList>>(expect1);
      }
    }
  }


  virtual ~SearchResponseBodyData() = default;
};
class SearchResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<SearchResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<boost::any> errorData{};
  shared_ptr<string> errorMsg{};
  shared_ptr<long> status{};
  shared_ptr<bool> success{};

  SearchResponseBody() {}

  explicit SearchResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["error_code"] = boost::any(*errorCode);
    }
    if (errorData) {
      res["error_data"] = boost::any(*errorData);
    }
    if (errorMsg) {
      res["error_msg"] = boost::any(*errorMsg);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        SearchResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<SearchResponseBodyData>(model1);
      }
    }
    if (m.find("error_code") != m.end() && !m["error_code"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["error_code"]));
    }
    if (m.find("error_data") != m.end() && !m["error_data"].empty()) {
      errorData = make_shared<boost::any>(boost::any_cast<boost::any>(m["error_data"]));
    }
    if (m.find("error_msg") != m.end() && !m["error_msg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["error_msg"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~SearchResponseBody() = default;
};
class SearchResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SearchResponseBody> body{};

  SearchResponse() {}

  explicit SearchResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SearchResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SearchResponseBody>(model1);
      }
    }
  }


  virtual ~SearchResponse() = default;
};
class TicketingHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAirticketAccessToken{};
  shared_ptr<string> xAcsAirticketLanguage{};

  TicketingHeaders() {}

  explicit TicketingHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAirticketAccessToken) {
      res["x-acs-airticket-access-token"] = boost::any(*xAcsAirticketAccessToken);
    }
    if (xAcsAirticketLanguage) {
      res["x-acs-airticket-language"] = boost::any(*xAcsAirticketLanguage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("x-acs-airticket-access-token") != m.end() && !m["x-acs-airticket-access-token"].empty()) {
      xAcsAirticketAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-airticket-access-token"]));
    }
    if (m.find("x-acs-airticket-language") != m.end() && !m["x-acs-airticket-language"].empty()) {
      xAcsAirticketLanguage = make_shared<string>(boost::any_cast<string>(m["x-acs-airticket-language"]));
    }
  }


  virtual ~TicketingHeaders() = default;
};
class TicketingRequest : public Darabonba::Model {
public:
  shared_ptr<long> orderNum{};

  TicketingRequest() {}

  explicit TicketingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderNum) {
      res["order_num"] = boost::any(*orderNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("order_num") != m.end() && !m["order_num"].empty()) {
      orderNum = make_shared<long>(boost::any_cast<long>(m["order_num"]));
    }
  }


  virtual ~TicketingRequest() = default;
};
class TicketingResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> orderNum{};
  shared_ptr<string> transactionNo{};

  TicketingResponseBodyData() {}

  explicit TicketingResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderNum) {
      res["order_num"] = boost::any(*orderNum);
    }
    if (transactionNo) {
      res["transaction_no"] = boost::any(*transactionNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("order_num") != m.end() && !m["order_num"].empty()) {
      orderNum = make_shared<long>(boost::any_cast<long>(m["order_num"]));
    }
    if (m.find("transaction_no") != m.end() && !m["transaction_no"].empty()) {
      transactionNo = make_shared<string>(boost::any_cast<string>(m["transaction_no"]));
    }
  }


  virtual ~TicketingResponseBodyData() = default;
};
class TicketingResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<TicketingResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<boost::any> errorData{};
  shared_ptr<string> errorMsg{};
  shared_ptr<long> status{};
  shared_ptr<bool> success{};

  TicketingResponseBody() {}

  explicit TicketingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["error_code"] = boost::any(*errorCode);
    }
    if (errorData) {
      res["error_data"] = boost::any(*errorData);
    }
    if (errorMsg) {
      res["error_msg"] = boost::any(*errorMsg);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        TicketingResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<TicketingResponseBodyData>(model1);
      }
    }
    if (m.find("error_code") != m.end() && !m["error_code"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["error_code"]));
    }
    if (m.find("error_data") != m.end() && !m["error_data"].empty()) {
      errorData = make_shared<boost::any>(boost::any_cast<boost::any>(m["error_data"]));
    }
    if (m.find("error_msg") != m.end() && !m["error_msg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["error_msg"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~TicketingResponseBody() = default;
};
class TicketingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<TicketingResponseBody> body{};

  TicketingResponse() {}

  explicit TicketingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        TicketingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TicketingResponseBody>(model1);
      }
    }
  }


  virtual ~TicketingResponse() = default;
};
class TicketingCheckHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAirticketAccessToken{};
  shared_ptr<string> xAcsAirticketLanguage{};

  TicketingCheckHeaders() {}

  explicit TicketingCheckHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAirticketAccessToken) {
      res["x-acs-airticket-access-token"] = boost::any(*xAcsAirticketAccessToken);
    }
    if (xAcsAirticketLanguage) {
      res["x-acs-airticket-language"] = boost::any(*xAcsAirticketLanguage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("x-acs-airticket-access-token") != m.end() && !m["x-acs-airticket-access-token"].empty()) {
      xAcsAirticketAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-airticket-access-token"]));
    }
    if (m.find("x-acs-airticket-language") != m.end() && !m["x-acs-airticket-language"].empty()) {
      xAcsAirticketLanguage = make_shared<string>(boost::any_cast<string>(m["x-acs-airticket-language"]));
    }
  }


  virtual ~TicketingCheckHeaders() = default;
};
class TicketingCheckRequest : public Darabonba::Model {
public:
  shared_ptr<long> orderNum{};

  TicketingCheckRequest() {}

  explicit TicketingCheckRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderNum) {
      res["order_num"] = boost::any(*orderNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("order_num") != m.end() && !m["order_num"].empty()) {
      orderNum = make_shared<long>(boost::any_cast<long>(m["order_num"]));
    }
  }


  virtual ~TicketingCheckRequest() = default;
};
class TicketingCheckResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> orderNum{};

  TicketingCheckResponseBodyData() {}

  explicit TicketingCheckResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderNum) {
      res["order_num"] = boost::any(*orderNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("order_num") != m.end() && !m["order_num"].empty()) {
      orderNum = make_shared<long>(boost::any_cast<long>(m["order_num"]));
    }
  }


  virtual ~TicketingCheckResponseBodyData() = default;
};
class TicketingCheckResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<TicketingCheckResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<boost::any> errorData{};
  shared_ptr<string> errorMsg{};
  shared_ptr<long> status{};
  shared_ptr<bool> success{};

  TicketingCheckResponseBody() {}

  explicit TicketingCheckResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["error_code"] = boost::any(*errorCode);
    }
    if (errorData) {
      res["error_data"] = boost::any(*errorData);
    }
    if (errorMsg) {
      res["error_msg"] = boost::any(*errorMsg);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        TicketingCheckResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<TicketingCheckResponseBodyData>(model1);
      }
    }
    if (m.find("error_code") != m.end() && !m["error_code"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["error_code"]));
    }
    if (m.find("error_data") != m.end() && !m["error_data"].empty()) {
      errorData = make_shared<boost::any>(boost::any_cast<boost::any>(m["error_data"]));
    }
    if (m.find("error_msg") != m.end() && !m["error_msg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["error_msg"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~TicketingCheckResponseBody() = default;
};
class TicketingCheckResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<TicketingCheckResponseBody> body{};

  TicketingCheckResponse() {}

  explicit TicketingCheckResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        TicketingCheckResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TicketingCheckResponseBody>(model1);
      }
    }
  }


  virtual ~TicketingCheckResponse() = default;
};
class TransitVisaHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAirticketAccessToken{};
  shared_ptr<string> xAcsAirticketLanguage{};

  TransitVisaHeaders() {}

  explicit TransitVisaHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAirticketAccessToken) {
      res["x-acs-airticket-access-token"] = boost::any(*xAcsAirticketAccessToken);
    }
    if (xAcsAirticketLanguage) {
      res["x-acs-airticket-language"] = boost::any(*xAcsAirticketLanguage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("x-acs-airticket-access-token") != m.end() && !m["x-acs-airticket-access-token"].empty()) {
      xAcsAirticketAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-airticket-access-token"]));
    }
    if (m.find("x-acs-airticket-language") != m.end() && !m["x-acs-airticket-language"].empty()) {
      xAcsAirticketLanguage = make_shared<string>(boost::any_cast<string>(m["x-acs-airticket-language"]));
    }
  }


  virtual ~TransitVisaHeaders() = default;
};
class TransitVisaRequestFlightSegmentParamList : public Darabonba::Model {
public:
  shared_ptr<string> arrivalAirport{};
  shared_ptr<string> arrivalTerminal{};
  shared_ptr<long> arrivalTime{};
  shared_ptr<bool> codeShare{};
  shared_ptr<string> departureAirport{};
  shared_ptr<string> departureTerminal{};
  shared_ptr<long> departureTime{};
  shared_ptr<string> marketingAirline{};
  shared_ptr<string> marketingFlightNo{};
  shared_ptr<string> operatingAirline{};
  shared_ptr<string> stopCityList{};
  shared_ptr<string> ticketingAirline{};

  TransitVisaRequestFlightSegmentParamList() {}

  explicit TransitVisaRequestFlightSegmentParamList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arrivalAirport) {
      res["arrival_airport"] = boost::any(*arrivalAirport);
    }
    if (arrivalTerminal) {
      res["arrival_terminal"] = boost::any(*arrivalTerminal);
    }
    if (arrivalTime) {
      res["arrival_time"] = boost::any(*arrivalTime);
    }
    if (codeShare) {
      res["code_share"] = boost::any(*codeShare);
    }
    if (departureAirport) {
      res["departure_airport"] = boost::any(*departureAirport);
    }
    if (departureTerminal) {
      res["departure_terminal"] = boost::any(*departureTerminal);
    }
    if (departureTime) {
      res["departure_time"] = boost::any(*departureTime);
    }
    if (marketingAirline) {
      res["marketing_airline"] = boost::any(*marketingAirline);
    }
    if (marketingFlightNo) {
      res["marketing_flight_no"] = boost::any(*marketingFlightNo);
    }
    if (operatingAirline) {
      res["operating_airline"] = boost::any(*operatingAirline);
    }
    if (stopCityList) {
      res["stop_city_list"] = boost::any(*stopCityList);
    }
    if (ticketingAirline) {
      res["ticketing_airline"] = boost::any(*ticketingAirline);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("arrival_airport") != m.end() && !m["arrival_airport"].empty()) {
      arrivalAirport = make_shared<string>(boost::any_cast<string>(m["arrival_airport"]));
    }
    if (m.find("arrival_terminal") != m.end() && !m["arrival_terminal"].empty()) {
      arrivalTerminal = make_shared<string>(boost::any_cast<string>(m["arrival_terminal"]));
    }
    if (m.find("arrival_time") != m.end() && !m["arrival_time"].empty()) {
      arrivalTime = make_shared<long>(boost::any_cast<long>(m["arrival_time"]));
    }
    if (m.find("code_share") != m.end() && !m["code_share"].empty()) {
      codeShare = make_shared<bool>(boost::any_cast<bool>(m["code_share"]));
    }
    if (m.find("departure_airport") != m.end() && !m["departure_airport"].empty()) {
      departureAirport = make_shared<string>(boost::any_cast<string>(m["departure_airport"]));
    }
    if (m.find("departure_terminal") != m.end() && !m["departure_terminal"].empty()) {
      departureTerminal = make_shared<string>(boost::any_cast<string>(m["departure_terminal"]));
    }
    if (m.find("departure_time") != m.end() && !m["departure_time"].empty()) {
      departureTime = make_shared<long>(boost::any_cast<long>(m["departure_time"]));
    }
    if (m.find("marketing_airline") != m.end() && !m["marketing_airline"].empty()) {
      marketingAirline = make_shared<string>(boost::any_cast<string>(m["marketing_airline"]));
    }
    if (m.find("marketing_flight_no") != m.end() && !m["marketing_flight_no"].empty()) {
      marketingFlightNo = make_shared<string>(boost::any_cast<string>(m["marketing_flight_no"]));
    }
    if (m.find("operating_airline") != m.end() && !m["operating_airline"].empty()) {
      operatingAirline = make_shared<string>(boost::any_cast<string>(m["operating_airline"]));
    }
    if (m.find("stop_city_list") != m.end() && !m["stop_city_list"].empty()) {
      stopCityList = make_shared<string>(boost::any_cast<string>(m["stop_city_list"]));
    }
    if (m.find("ticketing_airline") != m.end() && !m["ticketing_airline"].empty()) {
      ticketingAirline = make_shared<string>(boost::any_cast<string>(m["ticketing_airline"]));
    }
  }


  virtual ~TransitVisaRequestFlightSegmentParamList() = default;
};
class TransitVisaRequest : public Darabonba::Model {
public:
  shared_ptr<vector<TransitVisaRequestFlightSegmentParamList>> flightSegmentParamList{};

  TransitVisaRequest() {}

  explicit TransitVisaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (flightSegmentParamList) {
      vector<boost::any> temp1;
      for(auto item1:*flightSegmentParamList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["flight_segment_param_list"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("flight_segment_param_list") != m.end() && !m["flight_segment_param_list"].empty()) {
      if (typeid(vector<boost::any>) == m["flight_segment_param_list"].type()) {
        vector<TransitVisaRequestFlightSegmentParamList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["flight_segment_param_list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            TransitVisaRequestFlightSegmentParamList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        flightSegmentParamList = make_shared<vector<TransitVisaRequestFlightSegmentParamList>>(expect1);
      }
    }
  }


  virtual ~TransitVisaRequest() = default;
};
class TransitVisaShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> flightSegmentParamListShrink{};

  TransitVisaShrinkRequest() {}

  explicit TransitVisaShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (flightSegmentParamListShrink) {
      res["flight_segment_param_list"] = boost::any(*flightSegmentParamListShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("flight_segment_param_list") != m.end() && !m["flight_segment_param_list"].empty()) {
      flightSegmentParamListShrink = make_shared<string>(boost::any_cast<string>(m["flight_segment_param_list"]));
    }
  }


  virtual ~TransitVisaShrinkRequest() = default;
};
class TransitVisaResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> cityCode{};
  shared_ptr<long> visaType{};

  TransitVisaResponseBodyData() {}

  explicit TransitVisaResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cityCode) {
      res["city_code"] = boost::any(*cityCode);
    }
    if (visaType) {
      res["visa_type"] = boost::any(*visaType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("city_code") != m.end() && !m["city_code"].empty()) {
      cityCode = make_shared<string>(boost::any_cast<string>(m["city_code"]));
    }
    if (m.find("visa_type") != m.end() && !m["visa_type"].empty()) {
      visaType = make_shared<long>(boost::any_cast<long>(m["visa_type"]));
    }
  }


  virtual ~TransitVisaResponseBodyData() = default;
};
class TransitVisaResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<TransitVisaResponseBodyData>> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<boost::any> errorData{};
  shared_ptr<string> errorMsg{};
  shared_ptr<long> status{};
  shared_ptr<bool> success{};

  TransitVisaResponseBody() {}

  explicit TransitVisaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["data"] = boost::any(temp1);
    }
    if (errorCode) {
      res["error_code"] = boost::any(*errorCode);
    }
    if (errorData) {
      res["error_data"] = boost::any(*errorData);
    }
    if (errorMsg) {
      res["error_msg"] = boost::any(*errorMsg);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<TransitVisaResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            TransitVisaResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<TransitVisaResponseBodyData>>(expect1);
      }
    }
    if (m.find("error_code") != m.end() && !m["error_code"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["error_code"]));
    }
    if (m.find("error_data") != m.end() && !m["error_data"].empty()) {
      errorData = make_shared<boost::any>(boost::any_cast<boost::any>(m["error_data"]));
    }
    if (m.find("error_msg") != m.end() && !m["error_msg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["error_msg"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~TransitVisaResponseBody() = default;
};
class TransitVisaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<TransitVisaResponseBody> body{};

  TransitVisaResponse() {}

  explicit TransitVisaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        TransitVisaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TransitVisaResponseBody>(model1);
      }
    }
  }


  virtual ~TransitVisaResponse() = default;
};
class Client : Alibabacloud_OpenApi::Client {
public:
  explicit Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config);
  string getEndpoint(shared_ptr<string> productId,
                     shared_ptr<string> regionId,
                     shared_ptr<string> endpointRule,
                     shared_ptr<string> network,
                     shared_ptr<string> suffix,
                     shared_ptr<map<string, string>> endpointMap,
                     shared_ptr<string> endpoint);
  AccountFlowListResponse accountFlowListWithOptions(shared_ptr<AccountFlowListRequest> request, shared_ptr<AccountFlowListHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AccountFlowListResponse accountFlowList(shared_ptr<AccountFlowListRequest> request);
  AncillarySuggestResponse ancillarySuggestWithOptions(shared_ptr<AncillarySuggestRequest> request, shared_ptr<AncillarySuggestHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AncillarySuggestResponse ancillarySuggest(shared_ptr<AncillarySuggestRequest> request);
  BookResponse bookWithOptions(shared_ptr<BookRequest> tmpReq, shared_ptr<BookHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BookResponse book(shared_ptr<BookRequest> request);
  CancelResponse cancelWithOptions(shared_ptr<CancelRequest> request, shared_ptr<CancelHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelResponse cancel(shared_ptr<CancelRequest> request);
  ChangeApplyResponse changeApplyWithOptions(shared_ptr<ChangeApplyRequest> tmpReq, shared_ptr<ChangeApplyHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ChangeApplyResponse changeApply(shared_ptr<ChangeApplyRequest> request);
  ChangeCancelResponse changeCancelWithOptions(shared_ptr<ChangeCancelRequest> request, shared_ptr<ChangeCancelHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ChangeCancelResponse changeCancel(shared_ptr<ChangeCancelRequest> request);
  ChangeConfirmResponse changeConfirmWithOptions(shared_ptr<ChangeConfirmRequest> request, shared_ptr<ChangeConfirmHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ChangeConfirmResponse changeConfirm(shared_ptr<ChangeConfirmRequest> request);
  ChangeDetailResponse changeDetailWithOptions(shared_ptr<ChangeDetailRequest> request, shared_ptr<ChangeDetailHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ChangeDetailResponse changeDetail(shared_ptr<ChangeDetailRequest> request);
  ChangeDetailListOfBuyerResponse changeDetailListOfBuyerWithOptions(shared_ptr<ChangeDetailListOfBuyerRequest> request, shared_ptr<ChangeDetailListOfBuyerHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ChangeDetailListOfBuyerResponse changeDetailListOfBuyer(shared_ptr<ChangeDetailListOfBuyerRequest> request);
  ChangeDetailListOfOrderNumResponse changeDetailListOfOrderNumWithOptions(shared_ptr<ChangeDetailListOfOrderNumRequest> request, shared_ptr<ChangeDetailListOfOrderNumHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ChangeDetailListOfOrderNumResponse changeDetailListOfOrderNum(shared_ptr<ChangeDetailListOfOrderNumRequest> request);
  CollectFlightLowestPriceResponse collectFlightLowestPriceWithOptions(shared_ptr<CollectFlightLowestPriceRequest> tmpReq, shared_ptr<CollectFlightLowestPriceHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CollectFlightLowestPriceResponse collectFlightLowestPrice(shared_ptr<CollectFlightLowestPriceRequest> request);
  EnrichResponse enrichWithOptions(shared_ptr<EnrichRequest> tmpReq, shared_ptr<EnrichHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnrichResponse enrich(shared_ptr<EnrichRequest> request);
  FileUploadResponse fileUploadWithOptions(shared_ptr<FileUploadRequest> request, shared_ptr<FileUploadHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  FileUploadResponse fileUpload(shared_ptr<FileUploadRequest> request);
  FlightChangeOfOrderResponse flightChangeOfOrderWithOptions(shared_ptr<FlightChangeOfOrderRequest> request, shared_ptr<FlightChangeOfOrderHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  FlightChangeOfOrderResponse flightChangeOfOrder(shared_ptr<FlightChangeOfOrderRequest> request);
  GetTokenResponse getTokenWithOptions(shared_ptr<GetTokenRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTokenResponse getToken(shared_ptr<GetTokenRequest> request);
  LuggageDirectResponse luggageDirectWithOptions(shared_ptr<LuggageDirectRequest> tmpReq, shared_ptr<LuggageDirectHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  LuggageDirectResponse luggageDirect(shared_ptr<LuggageDirectRequest> request);
  OrderDetailResponse orderDetailWithOptions(shared_ptr<OrderDetailRequest> request, shared_ptr<OrderDetailHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OrderDetailResponse orderDetail(shared_ptr<OrderDetailRequest> request);
  OrderListResponse orderListWithOptions(shared_ptr<OrderListRequest> request, shared_ptr<OrderListHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OrderListResponse orderList(shared_ptr<OrderListRequest> request);
  PricingResponse pricingWithOptions(shared_ptr<PricingRequest> request, shared_ptr<PricingHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PricingResponse pricing(shared_ptr<PricingRequest> request);
  RefundApplyResponse refundApplyWithOptions(shared_ptr<RefundApplyRequest> tmpReq, shared_ptr<RefundApplyHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RefundApplyResponse refundApply(shared_ptr<RefundApplyRequest> request);
  RefundDetailResponse refundDetailWithOptions(shared_ptr<RefundDetailRequest> request, shared_ptr<RefundDetailHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RefundDetailResponse refundDetail(shared_ptr<RefundDetailRequest> request);
  RefundDetailListResponse refundDetailListWithOptions(shared_ptr<RefundDetailListRequest> request, shared_ptr<RefundDetailListHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RefundDetailListResponse refundDetailList(shared_ptr<RefundDetailListRequest> request);
  SearchResponse searchWithOptions(shared_ptr<SearchRequest> tmpReq, shared_ptr<SearchHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SearchResponse search(shared_ptr<SearchRequest> request);
  TicketingResponse ticketingWithOptions(shared_ptr<TicketingRequest> request, shared_ptr<TicketingHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TicketingResponse ticketing(shared_ptr<TicketingRequest> request);
  TicketingCheckResponse ticketingCheckWithOptions(shared_ptr<TicketingCheckRequest> request, shared_ptr<TicketingCheckHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TicketingCheckResponse ticketingCheck(shared_ptr<TicketingCheckRequest> request);
  TransitVisaResponse transitVisaWithOptions(shared_ptr<TransitVisaRequest> tmpReq, shared_ptr<TransitVisaHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TransitVisaResponse transitVisa(shared_ptr<TransitVisaRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_AirticketOpen20230117

#endif
