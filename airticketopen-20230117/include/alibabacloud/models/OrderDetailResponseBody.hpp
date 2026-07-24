// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ORDERDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ORDERDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue.hpp>
#include <vector>
#include <alibabacloud/models/DataSolutionSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue.hpp>
#include <alibabacloud/models/DataBaggageAllowanceMapValue.hpp>
#include <alibabacloud/models/DataRefundChangeRuleMapValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class OrderDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OrderDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(error_code, errorCode_);
      DARABONBA_ANY_TO_JSON(error_data, errorData_);
      DARABONBA_PTR_TO_JSON(error_msg, errorMsg_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, OrderDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(error_code, errorCode_);
      DARABONBA_ANY_FROM_JSON(error_data, errorData_);
      DARABONBA_PTR_FROM_JSON(error_msg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    OrderDetailResponseBody() = default ;
    OrderDetailResponseBody(const OrderDetailResponseBody &) = default ;
    OrderDetailResponseBody(OrderDetailResponseBody &&) = default ;
    OrderDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OrderDetailResponseBody() = default ;
    OrderDetailResponseBody& operator=(const OrderDetailResponseBody &) = default ;
    OrderDetailResponseBody& operator=(OrderDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ancillary_item_detail_list, ancillaryItemDetailList_);
        DARABONBA_PTR_TO_JSON(baggage_allowance_map, baggageAllowanceMap_);
        DARABONBA_PTR_TO_JSON(book_time, bookTime_);
        DARABONBA_PTR_TO_JSON(flight_item_detail_list, flightItemDetailList_);
        DARABONBA_PTR_TO_JSON(order_num, orderNum_);
        DARABONBA_PTR_TO_JSON(order_status, orderStatus_);
        DARABONBA_PTR_TO_JSON(out_order_num, outOrderNum_);
        DARABONBA_PTR_TO_JSON(passenger_list, passengerList_);
        DARABONBA_PTR_TO_JSON(pay_status, payStatus_);
        DARABONBA_PTR_TO_JSON(pay_time, payTime_);
        DARABONBA_PTR_TO_JSON(promotion_price, promotionPrice_);
        DARABONBA_PTR_TO_JSON(real_pay_price, realPayPrice_);
        DARABONBA_PTR_TO_JSON(refund_change_rule_map, refundChangeRuleMap_);
        DARABONBA_PTR_TO_JSON(session_nick, sessionNick_);
        DARABONBA_PTR_TO_JSON(solution, solution_);
        DARABONBA_PTR_TO_JSON(succeed_time, succeedTime_);
        DARABONBA_PTR_TO_JSON(total_price, totalPrice_);
        DARABONBA_PTR_TO_JSON(transaction_no, transactionNo_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ancillary_item_detail_list, ancillaryItemDetailList_);
        DARABONBA_PTR_FROM_JSON(baggage_allowance_map, baggageAllowanceMap_);
        DARABONBA_PTR_FROM_JSON(book_time, bookTime_);
        DARABONBA_PTR_FROM_JSON(flight_item_detail_list, flightItemDetailList_);
        DARABONBA_PTR_FROM_JSON(order_num, orderNum_);
        DARABONBA_PTR_FROM_JSON(order_status, orderStatus_);
        DARABONBA_PTR_FROM_JSON(out_order_num, outOrderNum_);
        DARABONBA_PTR_FROM_JSON(passenger_list, passengerList_);
        DARABONBA_PTR_FROM_JSON(pay_status, payStatus_);
        DARABONBA_PTR_FROM_JSON(pay_time, payTime_);
        DARABONBA_PTR_FROM_JSON(promotion_price, promotionPrice_);
        DARABONBA_PTR_FROM_JSON(real_pay_price, realPayPrice_);
        DARABONBA_PTR_FROM_JSON(refund_change_rule_map, refundChangeRuleMap_);
        DARABONBA_PTR_FROM_JSON(session_nick, sessionNick_);
        DARABONBA_PTR_FROM_JSON(solution, solution_);
        DARABONBA_PTR_FROM_JSON(succeed_time, succeedTime_);
        DARABONBA_PTR_FROM_JSON(total_price, totalPrice_);
        DARABONBA_PTR_FROM_JSON(transaction_no, transactionNo_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Solution : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Solution& obj) { 
          DARABONBA_PTR_TO_JSON(adult_price, adultPrice_);
          DARABONBA_PTR_TO_JSON(adult_tax, adultTax_);
          DARABONBA_PTR_TO_JSON(child_price, childPrice_);
          DARABONBA_PTR_TO_JSON(child_tax, childTax_);
          DARABONBA_PTR_TO_JSON(infant_price, infantPrice_);
          DARABONBA_PTR_TO_JSON(infant_tax, infantTax_);
          DARABONBA_PTR_TO_JSON(journey_list, journeyList_);
          DARABONBA_PTR_TO_JSON(segment_baggage_check_in_info_list, segmentBaggageCheckInInfoList_);
          DARABONBA_PTR_TO_JSON(segment_baggage_mapping_list, segmentBaggageMappingList_);
          DARABONBA_PTR_TO_JSON(segment_refund_change_rule_mapping_list, segmentRefundChangeRuleMappingList_);
          DARABONBA_PTR_TO_JSON(solution_attribute, solutionAttribute_);
          DARABONBA_PTR_TO_JSON(solution_id, solutionId_);
        };
        friend void from_json(const Darabonba::Json& j, Solution& obj) { 
          DARABONBA_PTR_FROM_JSON(adult_price, adultPrice_);
          DARABONBA_PTR_FROM_JSON(adult_tax, adultTax_);
          DARABONBA_PTR_FROM_JSON(child_price, childPrice_);
          DARABONBA_PTR_FROM_JSON(child_tax, childTax_);
          DARABONBA_PTR_FROM_JSON(infant_price, infantPrice_);
          DARABONBA_PTR_FROM_JSON(infant_tax, infantTax_);
          DARABONBA_PTR_FROM_JSON(journey_list, journeyList_);
          DARABONBA_PTR_FROM_JSON(segment_baggage_check_in_info_list, segmentBaggageCheckInInfoList_);
          DARABONBA_PTR_FROM_JSON(segment_baggage_mapping_list, segmentBaggageMappingList_);
          DARABONBA_PTR_FROM_JSON(segment_refund_change_rule_mapping_list, segmentRefundChangeRuleMappingList_);
          DARABONBA_PTR_FROM_JSON(solution_attribute, solutionAttribute_);
          DARABONBA_PTR_FROM_JSON(solution_id, solutionId_);
        };
        Solution() = default ;
        Solution(const Solution &) = default ;
        Solution(Solution &&) = default ;
        Solution(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Solution() = default ;
        Solution& operator=(const Solution &) = default ;
        Solution& operator=(Solution &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class SolutionAttribute : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SolutionAttribute& obj) { 
            DARABONBA_PTR_TO_JSON(issue_time_info, issueTimeInfo_);
            DARABONBA_PTR_TO_JSON(supply_source_type, supplySourceType_);
          };
          friend void from_json(const Darabonba::Json& j, SolutionAttribute& obj) { 
            DARABONBA_PTR_FROM_JSON(issue_time_info, issueTimeInfo_);
            DARABONBA_PTR_FROM_JSON(supply_source_type, supplySourceType_);
          };
          SolutionAttribute() = default ;
          SolutionAttribute(const SolutionAttribute &) = default ;
          SolutionAttribute(SolutionAttribute &&) = default ;
          SolutionAttribute(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SolutionAttribute() = default ;
          SolutionAttribute& operator=(const SolutionAttribute &) = default ;
          SolutionAttribute& operator=(SolutionAttribute &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class IssueTimeInfo : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const IssueTimeInfo& obj) { 
              DARABONBA_PTR_TO_JSON(issue_ticket_type, issueTicketType_);
              DARABONBA_PTR_TO_JSON(issue_time_limit, issueTimeLimit_);
            };
            friend void from_json(const Darabonba::Json& j, IssueTimeInfo& obj) { 
              DARABONBA_PTR_FROM_JSON(issue_ticket_type, issueTicketType_);
              DARABONBA_PTR_FROM_JSON(issue_time_limit, issueTimeLimit_);
            };
            IssueTimeInfo() = default ;
            IssueTimeInfo(const IssueTimeInfo &) = default ;
            IssueTimeInfo(IssueTimeInfo &&) = default ;
            IssueTimeInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~IssueTimeInfo() = default ;
            IssueTimeInfo& operator=(const IssueTimeInfo &) = default ;
            IssueTimeInfo& operator=(IssueTimeInfo &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->issueTicketType_ == nullptr
        && this->issueTimeLimit_ == nullptr; };
            // issueTicketType Field Functions 
            bool hasIssueTicketType() const { return this->issueTicketType_ != nullptr;};
            void deleteIssueTicketType() { this->issueTicketType_ = nullptr;};
            inline int32_t getIssueTicketType() const { DARABONBA_PTR_GET_DEFAULT(issueTicketType_, 0) };
            inline IssueTimeInfo& setIssueTicketType(int32_t issueTicketType) { DARABONBA_PTR_SET_VALUE(issueTicketType_, issueTicketType) };


            // issueTimeLimit Field Functions 
            bool hasIssueTimeLimit() const { return this->issueTimeLimit_ != nullptr;};
            void deleteIssueTimeLimit() { this->issueTimeLimit_ = nullptr;};
            inline int32_t getIssueTimeLimit() const { DARABONBA_PTR_GET_DEFAULT(issueTimeLimit_, 0) };
            inline IssueTimeInfo& setIssueTimeLimit(int32_t issueTimeLimit) { DARABONBA_PTR_SET_VALUE(issueTimeLimit_, issueTimeLimit) };


          protected:
            shared_ptr<int32_t> issueTicketType_ {};
            shared_ptr<int32_t> issueTimeLimit_ {};
          };

          virtual bool empty() const override { return this->issueTimeInfo_ == nullptr
        && this->supplySourceType_ == nullptr; };
          // issueTimeInfo Field Functions 
          bool hasIssueTimeInfo() const { return this->issueTimeInfo_ != nullptr;};
          void deleteIssueTimeInfo() { this->issueTimeInfo_ = nullptr;};
          inline const SolutionAttribute::IssueTimeInfo & getIssueTimeInfo() const { DARABONBA_PTR_GET_CONST(issueTimeInfo_, SolutionAttribute::IssueTimeInfo) };
          inline SolutionAttribute::IssueTimeInfo getIssueTimeInfo() { DARABONBA_PTR_GET(issueTimeInfo_, SolutionAttribute::IssueTimeInfo) };
          inline SolutionAttribute& setIssueTimeInfo(const SolutionAttribute::IssueTimeInfo & issueTimeInfo) { DARABONBA_PTR_SET_VALUE(issueTimeInfo_, issueTimeInfo) };
          inline SolutionAttribute& setIssueTimeInfo(SolutionAttribute::IssueTimeInfo && issueTimeInfo) { DARABONBA_PTR_SET_RVALUE(issueTimeInfo_, issueTimeInfo) };


          // supplySourceType Field Functions 
          bool hasSupplySourceType() const { return this->supplySourceType_ != nullptr;};
          void deleteSupplySourceType() { this->supplySourceType_ = nullptr;};
          inline string getSupplySourceType() const { DARABONBA_PTR_GET_DEFAULT(supplySourceType_, "") };
          inline SolutionAttribute& setSupplySourceType(string supplySourceType) { DARABONBA_PTR_SET_VALUE(supplySourceType_, supplySourceType) };


        protected:
          shared_ptr<SolutionAttribute::IssueTimeInfo> issueTimeInfo_ {};
          shared_ptr<string> supplySourceType_ {};
        };

        class SegmentRefundChangeRuleMappingList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SegmentRefundChangeRuleMappingList& obj) { 
            DARABONBA_PTR_TO_JSON(refund_change_rule_map, refundChangeRuleMap_);
            DARABONBA_PTR_TO_JSON(segment_id_list, segmentIdList_);
          };
          friend void from_json(const Darabonba::Json& j, SegmentRefundChangeRuleMappingList& obj) { 
            DARABONBA_PTR_FROM_JSON(refund_change_rule_map, refundChangeRuleMap_);
            DARABONBA_PTR_FROM_JSON(segment_id_list, segmentIdList_);
          };
          SegmentRefundChangeRuleMappingList() = default ;
          SegmentRefundChangeRuleMappingList(const SegmentRefundChangeRuleMappingList &) = default ;
          SegmentRefundChangeRuleMappingList(SegmentRefundChangeRuleMappingList &&) = default ;
          SegmentRefundChangeRuleMappingList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SegmentRefundChangeRuleMappingList() = default ;
          SegmentRefundChangeRuleMappingList& operator=(const SegmentRefundChangeRuleMappingList &) = default ;
          SegmentRefundChangeRuleMappingList& operator=(SegmentRefundChangeRuleMappingList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->refundChangeRuleMap_ == nullptr
        && this->segmentIdList_ == nullptr; };
          // refundChangeRuleMap Field Functions 
          bool hasRefundChangeRuleMap() const { return this->refundChangeRuleMap_ != nullptr;};
          void deleteRefundChangeRuleMap() { this->refundChangeRuleMap_ = nullptr;};
          inline const map<string, DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue> & getRefundChangeRuleMap() const { DARABONBA_PTR_GET_CONST(refundChangeRuleMap_, map<string, DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue>) };
          inline map<string, DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue> getRefundChangeRuleMap() { DARABONBA_PTR_GET(refundChangeRuleMap_, map<string, DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue>) };
          inline SegmentRefundChangeRuleMappingList& setRefundChangeRuleMap(const map<string, DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue> & refundChangeRuleMap) { DARABONBA_PTR_SET_VALUE(refundChangeRuleMap_, refundChangeRuleMap) };
          inline SegmentRefundChangeRuleMappingList& setRefundChangeRuleMap(map<string, DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue> && refundChangeRuleMap) { DARABONBA_PTR_SET_RVALUE(refundChangeRuleMap_, refundChangeRuleMap) };


          // segmentIdList Field Functions 
          bool hasSegmentIdList() const { return this->segmentIdList_ != nullptr;};
          void deleteSegmentIdList() { this->segmentIdList_ = nullptr;};
          inline const vector<string> & getSegmentIdList() const { DARABONBA_PTR_GET_CONST(segmentIdList_, vector<string>) };
          inline vector<string> getSegmentIdList() { DARABONBA_PTR_GET(segmentIdList_, vector<string>) };
          inline SegmentRefundChangeRuleMappingList& setSegmentIdList(const vector<string> & segmentIdList) { DARABONBA_PTR_SET_VALUE(segmentIdList_, segmentIdList) };
          inline SegmentRefundChangeRuleMappingList& setSegmentIdList(vector<string> && segmentIdList) { DARABONBA_PTR_SET_RVALUE(segmentIdList_, segmentIdList) };


        protected:
          // The mapping of passenger types to refund and change rules.
          shared_ptr<map<string, DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue>> refundChangeRuleMap_ {};
          // The list of segment IDs. These segments share the same refund and change rule.
          shared_ptr<vector<string>> segmentIdList_ {};
        };

        class SegmentBaggageMappingList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SegmentBaggageMappingList& obj) { 
            DARABONBA_PTR_TO_JSON(passenger_baggage_allowance_mapping, passengerBaggageAllowanceMapping_);
            DARABONBA_PTR_TO_JSON(segment_id_list, segmentIdList_);
          };
          friend void from_json(const Darabonba::Json& j, SegmentBaggageMappingList& obj) { 
            DARABONBA_PTR_FROM_JSON(passenger_baggage_allowance_mapping, passengerBaggageAllowanceMapping_);
            DARABONBA_PTR_FROM_JSON(segment_id_list, segmentIdList_);
          };
          SegmentBaggageMappingList() = default ;
          SegmentBaggageMappingList(const SegmentBaggageMappingList &) = default ;
          SegmentBaggageMappingList(SegmentBaggageMappingList &&) = default ;
          SegmentBaggageMappingList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SegmentBaggageMappingList() = default ;
          SegmentBaggageMappingList& operator=(const SegmentBaggageMappingList &) = default ;
          SegmentBaggageMappingList& operator=(SegmentBaggageMappingList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->passengerBaggageAllowanceMapping_ == nullptr
        && this->segmentIdList_ == nullptr; };
          // passengerBaggageAllowanceMapping Field Functions 
          bool hasPassengerBaggageAllowanceMapping() const { return this->passengerBaggageAllowanceMapping_ != nullptr;};
          void deletePassengerBaggageAllowanceMapping() { this->passengerBaggageAllowanceMapping_ = nullptr;};
          inline const map<string, DataSolutionSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue> & getPassengerBaggageAllowanceMapping() const { DARABONBA_PTR_GET_CONST(passengerBaggageAllowanceMapping_, map<string, DataSolutionSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue>) };
          inline map<string, DataSolutionSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue> getPassengerBaggageAllowanceMapping() { DARABONBA_PTR_GET(passengerBaggageAllowanceMapping_, map<string, DataSolutionSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue>) };
          inline SegmentBaggageMappingList& setPassengerBaggageAllowanceMapping(const map<string, DataSolutionSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue> & passengerBaggageAllowanceMapping) { DARABONBA_PTR_SET_VALUE(passengerBaggageAllowanceMapping_, passengerBaggageAllowanceMapping) };
          inline SegmentBaggageMappingList& setPassengerBaggageAllowanceMapping(map<string, DataSolutionSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue> && passengerBaggageAllowanceMapping) { DARABONBA_PTR_SET_RVALUE(passengerBaggageAllowanceMapping_, passengerBaggageAllowanceMapping) };


          // segmentIdList Field Functions 
          bool hasSegmentIdList() const { return this->segmentIdList_ != nullptr;};
          void deleteSegmentIdList() { this->segmentIdList_ = nullptr;};
          inline const vector<string> & getSegmentIdList() const { DARABONBA_PTR_GET_CONST(segmentIdList_, vector<string>) };
          inline vector<string> getSegmentIdList() { DARABONBA_PTR_GET(segmentIdList_, vector<string>) };
          inline SegmentBaggageMappingList& setSegmentIdList(const vector<string> & segmentIdList) { DARABONBA_PTR_SET_VALUE(segmentIdList_, segmentIdList) };
          inline SegmentBaggageMappingList& setSegmentIdList(vector<string> && segmentIdList) { DARABONBA_PTR_SET_RVALUE(segmentIdList_, segmentIdList) };


        protected:
          // The mapping of passenger types to complimentary baggage allowances.
          shared_ptr<map<string, DataSolutionSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue>> passengerBaggageAllowanceMapping_ {};
          // The list of segment IDs. These segments share the same complimentary baggage rule.
          shared_ptr<vector<string>> segmentIdList_ {};
        };

        class SegmentBaggageCheckInInfoList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SegmentBaggageCheckInInfoList& obj) { 
            DARABONBA_PTR_TO_JSON(luggage_direct_info_type, luggageDirectInfoType_);
            DARABONBA_PTR_TO_JSON(segment_id_list, segmentIdList_);
          };
          friend void from_json(const Darabonba::Json& j, SegmentBaggageCheckInInfoList& obj) { 
            DARABONBA_PTR_FROM_JSON(luggage_direct_info_type, luggageDirectInfoType_);
            DARABONBA_PTR_FROM_JSON(segment_id_list, segmentIdList_);
          };
          SegmentBaggageCheckInInfoList() = default ;
          SegmentBaggageCheckInInfoList(const SegmentBaggageCheckInInfoList &) = default ;
          SegmentBaggageCheckInInfoList(SegmentBaggageCheckInInfoList &&) = default ;
          SegmentBaggageCheckInInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SegmentBaggageCheckInInfoList() = default ;
          SegmentBaggageCheckInInfoList& operator=(const SegmentBaggageCheckInInfoList &) = default ;
          SegmentBaggageCheckInInfoList& operator=(SegmentBaggageCheckInInfoList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->luggageDirectInfoType_ == nullptr
        && this->segmentIdList_ == nullptr; };
          // luggageDirectInfoType Field Functions 
          bool hasLuggageDirectInfoType() const { return this->luggageDirectInfoType_ != nullptr;};
          void deleteLuggageDirectInfoType() { this->luggageDirectInfoType_ = nullptr;};
          inline int32_t getLuggageDirectInfoType() const { DARABONBA_PTR_GET_DEFAULT(luggageDirectInfoType_, 0) };
          inline SegmentBaggageCheckInInfoList& setLuggageDirectInfoType(int32_t luggageDirectInfoType) { DARABONBA_PTR_SET_VALUE(luggageDirectInfoType_, luggageDirectInfoType) };


          // segmentIdList Field Functions 
          bool hasSegmentIdList() const { return this->segmentIdList_ != nullptr;};
          void deleteSegmentIdList() { this->segmentIdList_ = nullptr;};
          inline const vector<string> & getSegmentIdList() const { DARABONBA_PTR_GET_CONST(segmentIdList_, vector<string>) };
          inline vector<string> getSegmentIdList() { DARABONBA_PTR_GET(segmentIdList_, vector<string>) };
          inline SegmentBaggageCheckInInfoList& setSegmentIdList(const vector<string> & segmentIdList) { DARABONBA_PTR_SET_VALUE(segmentIdList_, segmentIdList) };
          inline SegmentBaggageCheckInInfoList& setSegmentIdList(vector<string> && segmentIdList) { DARABONBA_PTR_SET_RVALUE(segmentIdList_, segmentIdList) };


        protected:
          // The baggage through-check rule type. Valid values:
          // - 1: baggage is checked through between segments.
          // - 2: baggage must be rechecked between segments.
          // - 3: baggage is checked through at stopover cities.
          // - 4: baggage must be rechecked at stopover cities.
          shared_ptr<int32_t> luggageDirectInfoType_ {};
          // The list of segment IDs. These segments share the same baggage through-check rule.
          shared_ptr<vector<string>> segmentIdList_ {};
        };

        class JourneyList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const JourneyList& obj) { 
            DARABONBA_PTR_TO_JSON(segment_list, segmentList_);
            DARABONBA_PTR_TO_JSON(transfer_count, transferCount_);
          };
          friend void from_json(const Darabonba::Json& j, JourneyList& obj) { 
            DARABONBA_PTR_FROM_JSON(segment_list, segmentList_);
            DARABONBA_PTR_FROM_JSON(transfer_count, transferCount_);
          };
          JourneyList() = default ;
          JourneyList(const JourneyList &) = default ;
          JourneyList(JourneyList &&) = default ;
          JourneyList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~JourneyList() = default ;
          JourneyList& operator=(const JourneyList &) = default ;
          JourneyList& operator=(JourneyList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class SegmentList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const SegmentList& obj) { 
              DARABONBA_PTR_TO_JSON(arrival_airport, arrivalAirport_);
              DARABONBA_PTR_TO_JSON(arrival_city, arrivalCity_);
              DARABONBA_PTR_TO_JSON(arrival_terminal, arrivalTerminal_);
              DARABONBA_PTR_TO_JSON(arrival_time, arrivalTime_);
              DARABONBA_PTR_TO_JSON(availability, availability_);
              DARABONBA_PTR_TO_JSON(cabin, cabin_);
              DARABONBA_PTR_TO_JSON(cabin_class, cabinClass_);
              DARABONBA_PTR_TO_JSON(code_share, codeShare_);
              DARABONBA_PTR_TO_JSON(departure_airport, departureAirport_);
              DARABONBA_PTR_TO_JSON(departure_city, departureCity_);
              DARABONBA_PTR_TO_JSON(departure_terminal, departureTerminal_);
              DARABONBA_PTR_TO_JSON(departure_time, departureTime_);
              DARABONBA_PTR_TO_JSON(equip_type, equipType_);
              DARABONBA_PTR_TO_JSON(flight_duration, flightDuration_);
              DARABONBA_PTR_TO_JSON(marketing_airline, marketingAirline_);
              DARABONBA_PTR_TO_JSON(marketing_flight_no, marketingFlightNo_);
              DARABONBA_PTR_TO_JSON(marketing_flight_no_int, marketingFlightNoInt_);
              DARABONBA_PTR_TO_JSON(operating_airline, operatingAirline_);
              DARABONBA_PTR_TO_JSON(operating_flight_no, operatingFlightNo_);
              DARABONBA_PTR_TO_JSON(segment_id, segmentId_);
              DARABONBA_PTR_TO_JSON(stop_city_list, stopCityList_);
              DARABONBA_PTR_TO_JSON(stop_quantity, stopQuantity_);
            };
            friend void from_json(const Darabonba::Json& j, SegmentList& obj) { 
              DARABONBA_PTR_FROM_JSON(arrival_airport, arrivalAirport_);
              DARABONBA_PTR_FROM_JSON(arrival_city, arrivalCity_);
              DARABONBA_PTR_FROM_JSON(arrival_terminal, arrivalTerminal_);
              DARABONBA_PTR_FROM_JSON(arrival_time, arrivalTime_);
              DARABONBA_PTR_FROM_JSON(availability, availability_);
              DARABONBA_PTR_FROM_JSON(cabin, cabin_);
              DARABONBA_PTR_FROM_JSON(cabin_class, cabinClass_);
              DARABONBA_PTR_FROM_JSON(code_share, codeShare_);
              DARABONBA_PTR_FROM_JSON(departure_airport, departureAirport_);
              DARABONBA_PTR_FROM_JSON(departure_city, departureCity_);
              DARABONBA_PTR_FROM_JSON(departure_terminal, departureTerminal_);
              DARABONBA_PTR_FROM_JSON(departure_time, departureTime_);
              DARABONBA_PTR_FROM_JSON(equip_type, equipType_);
              DARABONBA_PTR_FROM_JSON(flight_duration, flightDuration_);
              DARABONBA_PTR_FROM_JSON(marketing_airline, marketingAirline_);
              DARABONBA_PTR_FROM_JSON(marketing_flight_no, marketingFlightNo_);
              DARABONBA_PTR_FROM_JSON(marketing_flight_no_int, marketingFlightNoInt_);
              DARABONBA_PTR_FROM_JSON(operating_airline, operatingAirline_);
              DARABONBA_PTR_FROM_JSON(operating_flight_no, operatingFlightNo_);
              DARABONBA_PTR_FROM_JSON(segment_id, segmentId_);
              DARABONBA_PTR_FROM_JSON(stop_city_list, stopCityList_);
              DARABONBA_PTR_FROM_JSON(stop_quantity, stopQuantity_);
            };
            SegmentList() = default ;
            SegmentList(const SegmentList &) = default ;
            SegmentList(SegmentList &&) = default ;
            SegmentList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~SegmentList() = default ;
            SegmentList& operator=(const SegmentList &) = default ;
            SegmentList& operator=(SegmentList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->arrivalAirport_ == nullptr
        && this->arrivalCity_ == nullptr && this->arrivalTerminal_ == nullptr && this->arrivalTime_ == nullptr && this->availability_ == nullptr && this->cabin_ == nullptr
        && this->cabinClass_ == nullptr && this->codeShare_ == nullptr && this->departureAirport_ == nullptr && this->departureCity_ == nullptr && this->departureTerminal_ == nullptr
        && this->departureTime_ == nullptr && this->equipType_ == nullptr && this->flightDuration_ == nullptr && this->marketingAirline_ == nullptr && this->marketingFlightNo_ == nullptr
        && this->marketingFlightNoInt_ == nullptr && this->operatingAirline_ == nullptr && this->operatingFlightNo_ == nullptr && this->segmentId_ == nullptr && this->stopCityList_ == nullptr
        && this->stopQuantity_ == nullptr; };
            // arrivalAirport Field Functions 
            bool hasArrivalAirport() const { return this->arrivalAirport_ != nullptr;};
            void deleteArrivalAirport() { this->arrivalAirport_ = nullptr;};
            inline string getArrivalAirport() const { DARABONBA_PTR_GET_DEFAULT(arrivalAirport_, "") };
            inline SegmentList& setArrivalAirport(string arrivalAirport) { DARABONBA_PTR_SET_VALUE(arrivalAirport_, arrivalAirport) };


            // arrivalCity Field Functions 
            bool hasArrivalCity() const { return this->arrivalCity_ != nullptr;};
            void deleteArrivalCity() { this->arrivalCity_ = nullptr;};
            inline string getArrivalCity() const { DARABONBA_PTR_GET_DEFAULT(arrivalCity_, "") };
            inline SegmentList& setArrivalCity(string arrivalCity) { DARABONBA_PTR_SET_VALUE(arrivalCity_, arrivalCity) };


            // arrivalTerminal Field Functions 
            bool hasArrivalTerminal() const { return this->arrivalTerminal_ != nullptr;};
            void deleteArrivalTerminal() { this->arrivalTerminal_ = nullptr;};
            inline string getArrivalTerminal() const { DARABONBA_PTR_GET_DEFAULT(arrivalTerminal_, "") };
            inline SegmentList& setArrivalTerminal(string arrivalTerminal) { DARABONBA_PTR_SET_VALUE(arrivalTerminal_, arrivalTerminal) };


            // arrivalTime Field Functions 
            bool hasArrivalTime() const { return this->arrivalTime_ != nullptr;};
            void deleteArrivalTime() { this->arrivalTime_ = nullptr;};
            inline string getArrivalTime() const { DARABONBA_PTR_GET_DEFAULT(arrivalTime_, "") };
            inline SegmentList& setArrivalTime(string arrivalTime) { DARABONBA_PTR_SET_VALUE(arrivalTime_, arrivalTime) };


            // availability Field Functions 
            bool hasAvailability() const { return this->availability_ != nullptr;};
            void deleteAvailability() { this->availability_ = nullptr;};
            inline string getAvailability() const { DARABONBA_PTR_GET_DEFAULT(availability_, "") };
            inline SegmentList& setAvailability(string availability) { DARABONBA_PTR_SET_VALUE(availability_, availability) };


            // cabin Field Functions 
            bool hasCabin() const { return this->cabin_ != nullptr;};
            void deleteCabin() { this->cabin_ = nullptr;};
            inline string getCabin() const { DARABONBA_PTR_GET_DEFAULT(cabin_, "") };
            inline SegmentList& setCabin(string cabin) { DARABONBA_PTR_SET_VALUE(cabin_, cabin) };


            // cabinClass Field Functions 
            bool hasCabinClass() const { return this->cabinClass_ != nullptr;};
            void deleteCabinClass() { this->cabinClass_ = nullptr;};
            inline string getCabinClass() const { DARABONBA_PTR_GET_DEFAULT(cabinClass_, "") };
            inline SegmentList& setCabinClass(string cabinClass) { DARABONBA_PTR_SET_VALUE(cabinClass_, cabinClass) };


            // codeShare Field Functions 
            bool hasCodeShare() const { return this->codeShare_ != nullptr;};
            void deleteCodeShare() { this->codeShare_ = nullptr;};
            inline bool getCodeShare() const { DARABONBA_PTR_GET_DEFAULT(codeShare_, false) };
            inline SegmentList& setCodeShare(bool codeShare) { DARABONBA_PTR_SET_VALUE(codeShare_, codeShare) };


            // departureAirport Field Functions 
            bool hasDepartureAirport() const { return this->departureAirport_ != nullptr;};
            void deleteDepartureAirport() { this->departureAirport_ = nullptr;};
            inline string getDepartureAirport() const { DARABONBA_PTR_GET_DEFAULT(departureAirport_, "") };
            inline SegmentList& setDepartureAirport(string departureAirport) { DARABONBA_PTR_SET_VALUE(departureAirport_, departureAirport) };


            // departureCity Field Functions 
            bool hasDepartureCity() const { return this->departureCity_ != nullptr;};
            void deleteDepartureCity() { this->departureCity_ = nullptr;};
            inline string getDepartureCity() const { DARABONBA_PTR_GET_DEFAULT(departureCity_, "") };
            inline SegmentList& setDepartureCity(string departureCity) { DARABONBA_PTR_SET_VALUE(departureCity_, departureCity) };


            // departureTerminal Field Functions 
            bool hasDepartureTerminal() const { return this->departureTerminal_ != nullptr;};
            void deleteDepartureTerminal() { this->departureTerminal_ = nullptr;};
            inline string getDepartureTerminal() const { DARABONBA_PTR_GET_DEFAULT(departureTerminal_, "") };
            inline SegmentList& setDepartureTerminal(string departureTerminal) { DARABONBA_PTR_SET_VALUE(departureTerminal_, departureTerminal) };


            // departureTime Field Functions 
            bool hasDepartureTime() const { return this->departureTime_ != nullptr;};
            void deleteDepartureTime() { this->departureTime_ = nullptr;};
            inline string getDepartureTime() const { DARABONBA_PTR_GET_DEFAULT(departureTime_, "") };
            inline SegmentList& setDepartureTime(string departureTime) { DARABONBA_PTR_SET_VALUE(departureTime_, departureTime) };


            // equipType Field Functions 
            bool hasEquipType() const { return this->equipType_ != nullptr;};
            void deleteEquipType() { this->equipType_ = nullptr;};
            inline string getEquipType() const { DARABONBA_PTR_GET_DEFAULT(equipType_, "") };
            inline SegmentList& setEquipType(string equipType) { DARABONBA_PTR_SET_VALUE(equipType_, equipType) };


            // flightDuration Field Functions 
            bool hasFlightDuration() const { return this->flightDuration_ != nullptr;};
            void deleteFlightDuration() { this->flightDuration_ = nullptr;};
            inline int32_t getFlightDuration() const { DARABONBA_PTR_GET_DEFAULT(flightDuration_, 0) };
            inline SegmentList& setFlightDuration(int32_t flightDuration) { DARABONBA_PTR_SET_VALUE(flightDuration_, flightDuration) };


            // marketingAirline Field Functions 
            bool hasMarketingAirline() const { return this->marketingAirline_ != nullptr;};
            void deleteMarketingAirline() { this->marketingAirline_ = nullptr;};
            inline string getMarketingAirline() const { DARABONBA_PTR_GET_DEFAULT(marketingAirline_, "") };
            inline SegmentList& setMarketingAirline(string marketingAirline) { DARABONBA_PTR_SET_VALUE(marketingAirline_, marketingAirline) };


            // marketingFlightNo Field Functions 
            bool hasMarketingFlightNo() const { return this->marketingFlightNo_ != nullptr;};
            void deleteMarketingFlightNo() { this->marketingFlightNo_ = nullptr;};
            inline string getMarketingFlightNo() const { DARABONBA_PTR_GET_DEFAULT(marketingFlightNo_, "") };
            inline SegmentList& setMarketingFlightNo(string marketingFlightNo) { DARABONBA_PTR_SET_VALUE(marketingFlightNo_, marketingFlightNo) };


            // marketingFlightNoInt Field Functions 
            bool hasMarketingFlightNoInt() const { return this->marketingFlightNoInt_ != nullptr;};
            void deleteMarketingFlightNoInt() { this->marketingFlightNoInt_ = nullptr;};
            inline int32_t getMarketingFlightNoInt() const { DARABONBA_PTR_GET_DEFAULT(marketingFlightNoInt_, 0) };
            inline SegmentList& setMarketingFlightNoInt(int32_t marketingFlightNoInt) { DARABONBA_PTR_SET_VALUE(marketingFlightNoInt_, marketingFlightNoInt) };


            // operatingAirline Field Functions 
            bool hasOperatingAirline() const { return this->operatingAirline_ != nullptr;};
            void deleteOperatingAirline() { this->operatingAirline_ = nullptr;};
            inline string getOperatingAirline() const { DARABONBA_PTR_GET_DEFAULT(operatingAirline_, "") };
            inline SegmentList& setOperatingAirline(string operatingAirline) { DARABONBA_PTR_SET_VALUE(operatingAirline_, operatingAirline) };


            // operatingFlightNo Field Functions 
            bool hasOperatingFlightNo() const { return this->operatingFlightNo_ != nullptr;};
            void deleteOperatingFlightNo() { this->operatingFlightNo_ = nullptr;};
            inline string getOperatingFlightNo() const { DARABONBA_PTR_GET_DEFAULT(operatingFlightNo_, "") };
            inline SegmentList& setOperatingFlightNo(string operatingFlightNo) { DARABONBA_PTR_SET_VALUE(operatingFlightNo_, operatingFlightNo) };


            // segmentId Field Functions 
            bool hasSegmentId() const { return this->segmentId_ != nullptr;};
            void deleteSegmentId() { this->segmentId_ = nullptr;};
            inline string getSegmentId() const { DARABONBA_PTR_GET_DEFAULT(segmentId_, "") };
            inline SegmentList& setSegmentId(string segmentId) { DARABONBA_PTR_SET_VALUE(segmentId_, segmentId) };


            // stopCityList Field Functions 
            bool hasStopCityList() const { return this->stopCityList_ != nullptr;};
            void deleteStopCityList() { this->stopCityList_ = nullptr;};
            inline string getStopCityList() const { DARABONBA_PTR_GET_DEFAULT(stopCityList_, "") };
            inline SegmentList& setStopCityList(string stopCityList) { DARABONBA_PTR_SET_VALUE(stopCityList_, stopCityList) };


            // stopQuantity Field Functions 
            bool hasStopQuantity() const { return this->stopQuantity_ != nullptr;};
            void deleteStopQuantity() { this->stopQuantity_ = nullptr;};
            inline int32_t getStopQuantity() const { DARABONBA_PTR_GET_DEFAULT(stopQuantity_, 0) };
            inline SegmentList& setStopQuantity(int32_t stopQuantity) { DARABONBA_PTR_SET_VALUE(stopQuantity_, stopQuantity) };


          protected:
            // The three-letter IATA code of the arrival airport (uppercase).
            shared_ptr<string> arrivalAirport_ {};
            // The three-letter IATA code of the arrival city (uppercase).
            shared_ptr<string> arrivalCity_ {};
            // The arrival terminal.
            shared_ptr<string> arrivalTerminal_ {};
            // The arrival date and time in string format (yyyy-MM-dd HH:mm:ss).
            shared_ptr<string> arrivalTime_ {};
            // The number of remaining seats.
            shared_ptr<string> availability_ {};
            // The cabin.
            shared_ptr<string> cabin_ {};
            // The cabin class.
            shared_ptr<string> cabinClass_ {};
            // Indicates whether the flight is a codeshare flight.
            shared_ptr<bool> codeShare_ {};
            // The three-letter IATA code of the departure airport (uppercase).
            shared_ptr<string> departureAirport_ {};
            // The three-letter IATA code of the departure city (uppercase).
            shared_ptr<string> departureCity_ {};
            // The departure terminal.
            shared_ptr<string> departureTerminal_ {};
            // The departure date and time in string format (yyyy-MM-dd HH:mm:ss).
            shared_ptr<string> departureTime_ {};
            // The aircraft type.
            shared_ptr<string> equipType_ {};
            // The flight duration. Unit: minutes.
            shared_ptr<int32_t> flightDuration_ {};
            // The marketing airline code (for example, HO).
            shared_ptr<string> marketingAirline_ {};
            // The marketing flight number (for example, HO1295).
            shared_ptr<string> marketingFlightNo_ {};
            // The numeric marketing flight number (for example, 1295).
            shared_ptr<int32_t> marketingFlightNoInt_ {};
            // The operating airline code (for example, CX).
            shared_ptr<string> operatingAirline_ {};
            // The operating flight number (for example, CX601).
            shared_ptr<string> operatingFlightNo_ {};
            // The segment ID. Format: flight number + departure airport + arrival airport + departure date (MMdd).
            shared_ptr<string> segmentId_ {};
            // The list of stopover cities. This parameter has a value when stopQuantity is greater than 0. Multiple cities are separated by commas.
            shared_ptr<string> stopCityList_ {};
            // The number of stopover cities.
            shared_ptr<int32_t> stopQuantity_ {};
          };

          virtual bool empty() const override { return this->segmentList_ == nullptr
        && this->transferCount_ == nullptr; };
          // segmentList Field Functions 
          bool hasSegmentList() const { return this->segmentList_ != nullptr;};
          void deleteSegmentList() { this->segmentList_ = nullptr;};
          inline const vector<JourneyList::SegmentList> & getSegmentList() const { DARABONBA_PTR_GET_CONST(segmentList_, vector<JourneyList::SegmentList>) };
          inline vector<JourneyList::SegmentList> getSegmentList() { DARABONBA_PTR_GET(segmentList_, vector<JourneyList::SegmentList>) };
          inline JourneyList& setSegmentList(const vector<JourneyList::SegmentList> & segmentList) { DARABONBA_PTR_SET_VALUE(segmentList_, segmentList) };
          inline JourneyList& setSegmentList(vector<JourneyList::SegmentList> && segmentList) { DARABONBA_PTR_SET_RVALUE(segmentList_, segmentList) };


          // transferCount Field Functions 
          bool hasTransferCount() const { return this->transferCount_ != nullptr;};
          void deleteTransferCount() { this->transferCount_ = nullptr;};
          inline int32_t getTransferCount() const { DARABONBA_PTR_GET_DEFAULT(transferCount_, 0) };
          inline JourneyList& setTransferCount(int32_t transferCount) { DARABONBA_PTR_SET_VALUE(transferCount_, transferCount) };


        protected:
          // The segment information.
          shared_ptr<vector<JourneyList::SegmentList>> segmentList_ {};
          // The number of transfers.
          shared_ptr<int32_t> transferCount_ {};
        };

        virtual bool empty() const override { return this->adultPrice_ == nullptr
        && this->adultTax_ == nullptr && this->childPrice_ == nullptr && this->childTax_ == nullptr && this->infantPrice_ == nullptr && this->infantTax_ == nullptr
        && this->journeyList_ == nullptr && this->segmentBaggageCheckInInfoList_ == nullptr && this->segmentBaggageMappingList_ == nullptr && this->segmentRefundChangeRuleMappingList_ == nullptr && this->solutionAttribute_ == nullptr
        && this->solutionId_ == nullptr; };
        // adultPrice Field Functions 
        bool hasAdultPrice() const { return this->adultPrice_ != nullptr;};
        void deleteAdultPrice() { this->adultPrice_ = nullptr;};
        inline double getAdultPrice() const { DARABONBA_PTR_GET_DEFAULT(adultPrice_, 0.0) };
        inline Solution& setAdultPrice(double adultPrice) { DARABONBA_PTR_SET_VALUE(adultPrice_, adultPrice) };


        // adultTax Field Functions 
        bool hasAdultTax() const { return this->adultTax_ != nullptr;};
        void deleteAdultTax() { this->adultTax_ = nullptr;};
        inline double getAdultTax() const { DARABONBA_PTR_GET_DEFAULT(adultTax_, 0.0) };
        inline Solution& setAdultTax(double adultTax) { DARABONBA_PTR_SET_VALUE(adultTax_, adultTax) };


        // childPrice Field Functions 
        bool hasChildPrice() const { return this->childPrice_ != nullptr;};
        void deleteChildPrice() { this->childPrice_ = nullptr;};
        inline double getChildPrice() const { DARABONBA_PTR_GET_DEFAULT(childPrice_, 0.0) };
        inline Solution& setChildPrice(double childPrice) { DARABONBA_PTR_SET_VALUE(childPrice_, childPrice) };


        // childTax Field Functions 
        bool hasChildTax() const { return this->childTax_ != nullptr;};
        void deleteChildTax() { this->childTax_ = nullptr;};
        inline double getChildTax() const { DARABONBA_PTR_GET_DEFAULT(childTax_, 0.0) };
        inline Solution& setChildTax(double childTax) { DARABONBA_PTR_SET_VALUE(childTax_, childTax) };


        // infantPrice Field Functions 
        bool hasInfantPrice() const { return this->infantPrice_ != nullptr;};
        void deleteInfantPrice() { this->infantPrice_ = nullptr;};
        inline double getInfantPrice() const { DARABONBA_PTR_GET_DEFAULT(infantPrice_, 0.0) };
        inline Solution& setInfantPrice(double infantPrice) { DARABONBA_PTR_SET_VALUE(infantPrice_, infantPrice) };


        // infantTax Field Functions 
        bool hasInfantTax() const { return this->infantTax_ != nullptr;};
        void deleteInfantTax() { this->infantTax_ = nullptr;};
        inline double getInfantTax() const { DARABONBA_PTR_GET_DEFAULT(infantTax_, 0.0) };
        inline Solution& setInfantTax(double infantTax) { DARABONBA_PTR_SET_VALUE(infantTax_, infantTax) };


        // journeyList Field Functions 
        bool hasJourneyList() const { return this->journeyList_ != nullptr;};
        void deleteJourneyList() { this->journeyList_ = nullptr;};
        inline const vector<Solution::JourneyList> & getJourneyList() const { DARABONBA_PTR_GET_CONST(journeyList_, vector<Solution::JourneyList>) };
        inline vector<Solution::JourneyList> getJourneyList() { DARABONBA_PTR_GET(journeyList_, vector<Solution::JourneyList>) };
        inline Solution& setJourneyList(const vector<Solution::JourneyList> & journeyList) { DARABONBA_PTR_SET_VALUE(journeyList_, journeyList) };
        inline Solution& setJourneyList(vector<Solution::JourneyList> && journeyList) { DARABONBA_PTR_SET_RVALUE(journeyList_, journeyList) };


        // segmentBaggageCheckInInfoList Field Functions 
        bool hasSegmentBaggageCheckInInfoList() const { return this->segmentBaggageCheckInInfoList_ != nullptr;};
        void deleteSegmentBaggageCheckInInfoList() { this->segmentBaggageCheckInInfoList_ = nullptr;};
        inline const vector<Solution::SegmentBaggageCheckInInfoList> & getSegmentBaggageCheckInInfoList() const { DARABONBA_PTR_GET_CONST(segmentBaggageCheckInInfoList_, vector<Solution::SegmentBaggageCheckInInfoList>) };
        inline vector<Solution::SegmentBaggageCheckInInfoList> getSegmentBaggageCheckInInfoList() { DARABONBA_PTR_GET(segmentBaggageCheckInInfoList_, vector<Solution::SegmentBaggageCheckInInfoList>) };
        inline Solution& setSegmentBaggageCheckInInfoList(const vector<Solution::SegmentBaggageCheckInInfoList> & segmentBaggageCheckInInfoList) { DARABONBA_PTR_SET_VALUE(segmentBaggageCheckInInfoList_, segmentBaggageCheckInInfoList) };
        inline Solution& setSegmentBaggageCheckInInfoList(vector<Solution::SegmentBaggageCheckInInfoList> && segmentBaggageCheckInInfoList) { DARABONBA_PTR_SET_RVALUE(segmentBaggageCheckInInfoList_, segmentBaggageCheckInInfoList) };


        // segmentBaggageMappingList Field Functions 
        bool hasSegmentBaggageMappingList() const { return this->segmentBaggageMappingList_ != nullptr;};
        void deleteSegmentBaggageMappingList() { this->segmentBaggageMappingList_ = nullptr;};
        inline const vector<Solution::SegmentBaggageMappingList> & getSegmentBaggageMappingList() const { DARABONBA_PTR_GET_CONST(segmentBaggageMappingList_, vector<Solution::SegmentBaggageMappingList>) };
        inline vector<Solution::SegmentBaggageMappingList> getSegmentBaggageMappingList() { DARABONBA_PTR_GET(segmentBaggageMappingList_, vector<Solution::SegmentBaggageMappingList>) };
        inline Solution& setSegmentBaggageMappingList(const vector<Solution::SegmentBaggageMappingList> & segmentBaggageMappingList) { DARABONBA_PTR_SET_VALUE(segmentBaggageMappingList_, segmentBaggageMappingList) };
        inline Solution& setSegmentBaggageMappingList(vector<Solution::SegmentBaggageMappingList> && segmentBaggageMappingList) { DARABONBA_PTR_SET_RVALUE(segmentBaggageMappingList_, segmentBaggageMappingList) };


        // segmentRefundChangeRuleMappingList Field Functions 
        bool hasSegmentRefundChangeRuleMappingList() const { return this->segmentRefundChangeRuleMappingList_ != nullptr;};
        void deleteSegmentRefundChangeRuleMappingList() { this->segmentRefundChangeRuleMappingList_ = nullptr;};
        inline const vector<Solution::SegmentRefundChangeRuleMappingList> & getSegmentRefundChangeRuleMappingList() const { DARABONBA_PTR_GET_CONST(segmentRefundChangeRuleMappingList_, vector<Solution::SegmentRefundChangeRuleMappingList>) };
        inline vector<Solution::SegmentRefundChangeRuleMappingList> getSegmentRefundChangeRuleMappingList() { DARABONBA_PTR_GET(segmentRefundChangeRuleMappingList_, vector<Solution::SegmentRefundChangeRuleMappingList>) };
        inline Solution& setSegmentRefundChangeRuleMappingList(const vector<Solution::SegmentRefundChangeRuleMappingList> & segmentRefundChangeRuleMappingList) { DARABONBA_PTR_SET_VALUE(segmentRefundChangeRuleMappingList_, segmentRefundChangeRuleMappingList) };
        inline Solution& setSegmentRefundChangeRuleMappingList(vector<Solution::SegmentRefundChangeRuleMappingList> && segmentRefundChangeRuleMappingList) { DARABONBA_PTR_SET_RVALUE(segmentRefundChangeRuleMappingList_, segmentRefundChangeRuleMappingList) };


        // solutionAttribute Field Functions 
        bool hasSolutionAttribute() const { return this->solutionAttribute_ != nullptr;};
        void deleteSolutionAttribute() { this->solutionAttribute_ = nullptr;};
        inline const Solution::SolutionAttribute & getSolutionAttribute() const { DARABONBA_PTR_GET_CONST(solutionAttribute_, Solution::SolutionAttribute) };
        inline Solution::SolutionAttribute getSolutionAttribute() { DARABONBA_PTR_GET(solutionAttribute_, Solution::SolutionAttribute) };
        inline Solution& setSolutionAttribute(const Solution::SolutionAttribute & solutionAttribute) { DARABONBA_PTR_SET_VALUE(solutionAttribute_, solutionAttribute) };
        inline Solution& setSolutionAttribute(Solution::SolutionAttribute && solutionAttribute) { DARABONBA_PTR_SET_RVALUE(solutionAttribute_, solutionAttribute) };


        // solutionId Field Functions 
        bool hasSolutionId() const { return this->solutionId_ != nullptr;};
        void deleteSolutionId() { this->solutionId_ = nullptr;};
        inline string getSolutionId() const { DARABONBA_PTR_GET_DEFAULT(solutionId_, "") };
        inline Solution& setSolutionId(string solutionId) { DARABONBA_PTR_SET_VALUE(solutionId_, solutionId) };


      protected:
        // The unit price for an adult.
        shared_ptr<double> adultPrice_ {};
        // The tax for an adult.
        shared_ptr<double> adultTax_ {};
        // The unit price for a child.
        shared_ptr<double> childPrice_ {};
        // The tax for a child.
        shared_ptr<double> childTax_ {};
        // The unit price for an infant.
        shared_ptr<double> infantPrice_ {};
        // The tax for an infant.
        shared_ptr<double> infantTax_ {};
        // The journey list.
        shared_ptr<vector<Solution::JourneyList>> journeyList_ {};
        // The baggage through-check rules.
        shared_ptr<vector<Solution::SegmentBaggageCheckInInfoList>> segmentBaggageCheckInInfoList_ {};
        // The complimentary baggage rules.
        shared_ptr<vector<Solution::SegmentBaggageMappingList>> segmentBaggageMappingList_ {};
        // The refund and change rules.
        shared_ptr<vector<Solution::SegmentRefundChangeRuleMappingList>> segmentRefundChangeRuleMappingList_ {};
        shared_ptr<Solution::SolutionAttribute> solutionAttribute_ {};
        // solution_id
        shared_ptr<string> solutionId_ {};
      };

      class PassengerList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PassengerList& obj) { 
          DARABONBA_PTR_TO_JSON(birthday, birthday_);
          DARABONBA_PTR_TO_JSON(credential, credential_);
          DARABONBA_PTR_TO_JSON(first_name, firstName_);
          DARABONBA_PTR_TO_JSON(gender, gender_);
          DARABONBA_PTR_TO_JSON(last_name, lastName_);
          DARABONBA_PTR_TO_JSON(mobile_country_code, mobileCountryCode_);
          DARABONBA_PTR_TO_JSON(mobile_phone_number, mobilePhoneNumber_);
          DARABONBA_PTR_TO_JSON(nationality, nationality_);
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, PassengerList& obj) { 
          DARABONBA_PTR_FROM_JSON(birthday, birthday_);
          DARABONBA_PTR_FROM_JSON(credential, credential_);
          DARABONBA_PTR_FROM_JSON(first_name, firstName_);
          DARABONBA_PTR_FROM_JSON(gender, gender_);
          DARABONBA_PTR_FROM_JSON(last_name, lastName_);
          DARABONBA_PTR_FROM_JSON(mobile_country_code, mobileCountryCode_);
          DARABONBA_PTR_FROM_JSON(mobile_phone_number, mobilePhoneNumber_);
          DARABONBA_PTR_FROM_JSON(nationality, nationality_);
          DARABONBA_PTR_FROM_JSON(type, type_);
        };
        PassengerList() = default ;
        PassengerList(const PassengerList &) = default ;
        PassengerList(PassengerList &&) = default ;
        PassengerList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PassengerList() = default ;
        PassengerList& operator=(const PassengerList &) = default ;
        PassengerList& operator=(PassengerList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Credential : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Credential& obj) { 
            DARABONBA_PTR_TO_JSON(cert_issue_place, certIssuePlace_);
            DARABONBA_PTR_TO_JSON(credential_num, credentialNum_);
            DARABONBA_PTR_TO_JSON(credential_type, credentialType_);
            DARABONBA_PTR_TO_JSON(expire_date, expireDate_);
          };
          friend void from_json(const Darabonba::Json& j, Credential& obj) { 
            DARABONBA_PTR_FROM_JSON(cert_issue_place, certIssuePlace_);
            DARABONBA_PTR_FROM_JSON(credential_num, credentialNum_);
            DARABONBA_PTR_FROM_JSON(credential_type, credentialType_);
            DARABONBA_PTR_FROM_JSON(expire_date, expireDate_);
          };
          Credential() = default ;
          Credential(const Credential &) = default ;
          Credential(Credential &&) = default ;
          Credential(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Credential() = default ;
          Credential& operator=(const Credential &) = default ;
          Credential& operator=(Credential &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->certIssuePlace_ == nullptr
        && this->credentialNum_ == nullptr && this->credentialType_ == nullptr && this->expireDate_ == nullptr; };
          // certIssuePlace Field Functions 
          bool hasCertIssuePlace() const { return this->certIssuePlace_ != nullptr;};
          void deleteCertIssuePlace() { this->certIssuePlace_ = nullptr;};
          inline string getCertIssuePlace() const { DARABONBA_PTR_GET_DEFAULT(certIssuePlace_, "") };
          inline Credential& setCertIssuePlace(string certIssuePlace) { DARABONBA_PTR_SET_VALUE(certIssuePlace_, certIssuePlace) };


          // credentialNum Field Functions 
          bool hasCredentialNum() const { return this->credentialNum_ != nullptr;};
          void deleteCredentialNum() { this->credentialNum_ = nullptr;};
          inline string getCredentialNum() const { DARABONBA_PTR_GET_DEFAULT(credentialNum_, "") };
          inline Credential& setCredentialNum(string credentialNum) { DARABONBA_PTR_SET_VALUE(credentialNum_, credentialNum) };


          // credentialType Field Functions 
          bool hasCredentialType() const { return this->credentialType_ != nullptr;};
          void deleteCredentialType() { this->credentialType_ = nullptr;};
          inline int32_t getCredentialType() const { DARABONBA_PTR_GET_DEFAULT(credentialType_, 0) };
          inline Credential& setCredentialType(int32_t credentialType) { DARABONBA_PTR_SET_VALUE(credentialType_, credentialType) };


          // expireDate Field Functions 
          bool hasExpireDate() const { return this->expireDate_ != nullptr;};
          void deleteExpireDate() { this->expireDate_ = nullptr;};
          inline string getExpireDate() const { DARABONBA_PTR_GET_DEFAULT(expireDate_, "") };
          inline Credential& setExpireDate(string expireDate) { DARABONBA_PTR_SET_VALUE(expireDate_, expireDate) };


        protected:
          // The place of issuance, represented as a two-letter code.
          shared_ptr<string> certIssuePlace_ {};
          // The credential number.
          shared_ptr<string> credentialNum_ {};
          // The credential type. Valid values:
          // - 0: ID card.
          // - 1: passport.
          // - 4: Home Return Permit.
          // - 5: Mainland Travel Permit for Taiwan Residents.
          // - 6: Exit-Entry Permit for Hong Kong and Macao Residents.
          // - 12: Taiwan Travel Permit.
          // - 19: no credential.
          shared_ptr<int32_t> credentialType_ {};
          // The credential expiration date.
          shared_ptr<string> expireDate_ {};
        };

        virtual bool empty() const override { return this->birthday_ == nullptr
        && this->credential_ == nullptr && this->firstName_ == nullptr && this->gender_ == nullptr && this->lastName_ == nullptr && this->mobileCountryCode_ == nullptr
        && this->mobilePhoneNumber_ == nullptr && this->nationality_ == nullptr && this->type_ == nullptr; };
        // birthday Field Functions 
        bool hasBirthday() const { return this->birthday_ != nullptr;};
        void deleteBirthday() { this->birthday_ = nullptr;};
        inline string getBirthday() const { DARABONBA_PTR_GET_DEFAULT(birthday_, "") };
        inline PassengerList& setBirthday(string birthday) { DARABONBA_PTR_SET_VALUE(birthday_, birthday) };


        // credential Field Functions 
        bool hasCredential() const { return this->credential_ != nullptr;};
        void deleteCredential() { this->credential_ = nullptr;};
        inline const PassengerList::Credential & getCredential() const { DARABONBA_PTR_GET_CONST(credential_, PassengerList::Credential) };
        inline PassengerList::Credential getCredential() { DARABONBA_PTR_GET(credential_, PassengerList::Credential) };
        inline PassengerList& setCredential(const PassengerList::Credential & credential) { DARABONBA_PTR_SET_VALUE(credential_, credential) };
        inline PassengerList& setCredential(PassengerList::Credential && credential) { DARABONBA_PTR_SET_RVALUE(credential_, credential) };


        // firstName Field Functions 
        bool hasFirstName() const { return this->firstName_ != nullptr;};
        void deleteFirstName() { this->firstName_ = nullptr;};
        inline string getFirstName() const { DARABONBA_PTR_GET_DEFAULT(firstName_, "") };
        inline PassengerList& setFirstName(string firstName) { DARABONBA_PTR_SET_VALUE(firstName_, firstName) };


        // gender Field Functions 
        bool hasGender() const { return this->gender_ != nullptr;};
        void deleteGender() { this->gender_ = nullptr;};
        inline int32_t getGender() const { DARABONBA_PTR_GET_DEFAULT(gender_, 0) };
        inline PassengerList& setGender(int32_t gender) { DARABONBA_PTR_SET_VALUE(gender_, gender) };


        // lastName Field Functions 
        bool hasLastName() const { return this->lastName_ != nullptr;};
        void deleteLastName() { this->lastName_ = nullptr;};
        inline string getLastName() const { DARABONBA_PTR_GET_DEFAULT(lastName_, "") };
        inline PassengerList& setLastName(string lastName) { DARABONBA_PTR_SET_VALUE(lastName_, lastName) };


        // mobileCountryCode Field Functions 
        bool hasMobileCountryCode() const { return this->mobileCountryCode_ != nullptr;};
        void deleteMobileCountryCode() { this->mobileCountryCode_ = nullptr;};
        inline string getMobileCountryCode() const { DARABONBA_PTR_GET_DEFAULT(mobileCountryCode_, "") };
        inline PassengerList& setMobileCountryCode(string mobileCountryCode) { DARABONBA_PTR_SET_VALUE(mobileCountryCode_, mobileCountryCode) };


        // mobilePhoneNumber Field Functions 
        bool hasMobilePhoneNumber() const { return this->mobilePhoneNumber_ != nullptr;};
        void deleteMobilePhoneNumber() { this->mobilePhoneNumber_ = nullptr;};
        inline string getMobilePhoneNumber() const { DARABONBA_PTR_GET_DEFAULT(mobilePhoneNumber_, "") };
        inline PassengerList& setMobilePhoneNumber(string mobilePhoneNumber) { DARABONBA_PTR_SET_VALUE(mobilePhoneNumber_, mobilePhoneNumber) };


        // nationality Field Functions 
        bool hasNationality() const { return this->nationality_ != nullptr;};
        void deleteNationality() { this->nationality_ = nullptr;};
        inline string getNationality() const { DARABONBA_PTR_GET_DEFAULT(nationality_, "") };
        inline PassengerList& setNationality(string nationality) { DARABONBA_PTR_SET_VALUE(nationality_, nationality) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
        inline PassengerList& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The date of birth in yyyyMMdd format.
        shared_ptr<string> birthday_ {};
        // The credential information.
        shared_ptr<PassengerList::Credential> credential_ {};
        // The first name.
        shared_ptr<string> firstName_ {};
        // The gender. Valid values:
        // - 0: MALE.
        // - 1: FEMALE.
        shared_ptr<int32_t> gender_ {};
        // The last name.
        shared_ptr<string> lastName_ {};
        // The country code of the mobile phone number.
        shared_ptr<string> mobileCountryCode_ {};
        // The mobile phone number.
        shared_ptr<string> mobilePhoneNumber_ {};
        // The two-letter nationality code.
        shared_ptr<string> nationality_ {};
        // The passenger type. Valid values:
        // - 0: adult.
        // - 1: child.
        // - 8: infant.
        shared_ptr<int32_t> type_ {};
      };

      class FlightItemDetailList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FlightItemDetailList& obj) { 
          DARABONBA_PTR_TO_JSON(b_pnr_list, bPnrList_);
          DARABONBA_PTR_TO_JSON(c_pnr_list, cPnrList_);
          DARABONBA_PTR_TO_JSON(flight_price, flightPrice_);
          DARABONBA_PTR_TO_JSON(flight_segment_cabin_relation, flightSegmentCabinRelation_);
          DARABONBA_PTR_TO_JSON(passenger, passenger_);
          DARABONBA_PTR_TO_JSON(ticket_air_line, ticketAirLine_);
          DARABONBA_PTR_TO_JSON(ticket_nos, ticketNos_);
        };
        friend void from_json(const Darabonba::Json& j, FlightItemDetailList& obj) { 
          DARABONBA_PTR_FROM_JSON(b_pnr_list, bPnrList_);
          DARABONBA_PTR_FROM_JSON(c_pnr_list, cPnrList_);
          DARABONBA_PTR_FROM_JSON(flight_price, flightPrice_);
          DARABONBA_PTR_FROM_JSON(flight_segment_cabin_relation, flightSegmentCabinRelation_);
          DARABONBA_PTR_FROM_JSON(passenger, passenger_);
          DARABONBA_PTR_FROM_JSON(ticket_air_line, ticketAirLine_);
          DARABONBA_PTR_FROM_JSON(ticket_nos, ticketNos_);
        };
        FlightItemDetailList() = default ;
        FlightItemDetailList(const FlightItemDetailList &) = default ;
        FlightItemDetailList(FlightItemDetailList &&) = default ;
        FlightItemDetailList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FlightItemDetailList() = default ;
        FlightItemDetailList& operator=(const FlightItemDetailList &) = default ;
        FlightItemDetailList& operator=(FlightItemDetailList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Passenger : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Passenger& obj) { 
            DARABONBA_PTR_TO_JSON(birthday, birthday_);
            DARABONBA_PTR_TO_JSON(credential, credential_);
            DARABONBA_PTR_TO_JSON(first_name, firstName_);
            DARABONBA_PTR_TO_JSON(gender, gender_);
            DARABONBA_PTR_TO_JSON(last_name, lastName_);
            DARABONBA_PTR_TO_JSON(mobile_country_code, mobileCountryCode_);
            DARABONBA_PTR_TO_JSON(mobile_phone_number, mobilePhoneNumber_);
            DARABONBA_PTR_TO_JSON(nationality, nationality_);
            DARABONBA_PTR_TO_JSON(type, type_);
          };
          friend void from_json(const Darabonba::Json& j, Passenger& obj) { 
            DARABONBA_PTR_FROM_JSON(birthday, birthday_);
            DARABONBA_PTR_FROM_JSON(credential, credential_);
            DARABONBA_PTR_FROM_JSON(first_name, firstName_);
            DARABONBA_PTR_FROM_JSON(gender, gender_);
            DARABONBA_PTR_FROM_JSON(last_name, lastName_);
            DARABONBA_PTR_FROM_JSON(mobile_country_code, mobileCountryCode_);
            DARABONBA_PTR_FROM_JSON(mobile_phone_number, mobilePhoneNumber_);
            DARABONBA_PTR_FROM_JSON(nationality, nationality_);
            DARABONBA_PTR_FROM_JSON(type, type_);
          };
          Passenger() = default ;
          Passenger(const Passenger &) = default ;
          Passenger(Passenger &&) = default ;
          Passenger(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Passenger() = default ;
          Passenger& operator=(const Passenger &) = default ;
          Passenger& operator=(Passenger &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Credential : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Credential& obj) { 
              DARABONBA_PTR_TO_JSON(cert_issue_place, certIssuePlace_);
              DARABONBA_PTR_TO_JSON(credential_num, credentialNum_);
              DARABONBA_PTR_TO_JSON(credential_type, credentialType_);
              DARABONBA_PTR_TO_JSON(expire_date, expireDate_);
            };
            friend void from_json(const Darabonba::Json& j, Credential& obj) { 
              DARABONBA_PTR_FROM_JSON(cert_issue_place, certIssuePlace_);
              DARABONBA_PTR_FROM_JSON(credential_num, credentialNum_);
              DARABONBA_PTR_FROM_JSON(credential_type, credentialType_);
              DARABONBA_PTR_FROM_JSON(expire_date, expireDate_);
            };
            Credential() = default ;
            Credential(const Credential &) = default ;
            Credential(Credential &&) = default ;
            Credential(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Credential() = default ;
            Credential& operator=(const Credential &) = default ;
            Credential& operator=(Credential &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->certIssuePlace_ == nullptr
        && this->credentialNum_ == nullptr && this->credentialType_ == nullptr && this->expireDate_ == nullptr; };
            // certIssuePlace Field Functions 
            bool hasCertIssuePlace() const { return this->certIssuePlace_ != nullptr;};
            void deleteCertIssuePlace() { this->certIssuePlace_ = nullptr;};
            inline string getCertIssuePlace() const { DARABONBA_PTR_GET_DEFAULT(certIssuePlace_, "") };
            inline Credential& setCertIssuePlace(string certIssuePlace) { DARABONBA_PTR_SET_VALUE(certIssuePlace_, certIssuePlace) };


            // credentialNum Field Functions 
            bool hasCredentialNum() const { return this->credentialNum_ != nullptr;};
            void deleteCredentialNum() { this->credentialNum_ = nullptr;};
            inline string getCredentialNum() const { DARABONBA_PTR_GET_DEFAULT(credentialNum_, "") };
            inline Credential& setCredentialNum(string credentialNum) { DARABONBA_PTR_SET_VALUE(credentialNum_, credentialNum) };


            // credentialType Field Functions 
            bool hasCredentialType() const { return this->credentialType_ != nullptr;};
            void deleteCredentialType() { this->credentialType_ = nullptr;};
            inline int32_t getCredentialType() const { DARABONBA_PTR_GET_DEFAULT(credentialType_, 0) };
            inline Credential& setCredentialType(int32_t credentialType) { DARABONBA_PTR_SET_VALUE(credentialType_, credentialType) };


            // expireDate Field Functions 
            bool hasExpireDate() const { return this->expireDate_ != nullptr;};
            void deleteExpireDate() { this->expireDate_ = nullptr;};
            inline string getExpireDate() const { DARABONBA_PTR_GET_DEFAULT(expireDate_, "") };
            inline Credential& setExpireDate(string expireDate) { DARABONBA_PTR_SET_VALUE(expireDate_, expireDate) };


          protected:
            // The place of issuance, represented as a two-letter code.
            shared_ptr<string> certIssuePlace_ {};
            // The credential number.
            shared_ptr<string> credentialNum_ {};
            // The credential type. Valid values:
            // - 0: ID card.
            // - 1: passport.
            // - 4: Home Return Permit.
            // - 5: Mainland Travel Permit for Taiwan Residents.
            // - 6: Exit-Entry Permit for Hong Kong and Macao Residents.
            // - 12: Taiwan Travel Permit.
            // - 19: no credential.
            shared_ptr<int32_t> credentialType_ {};
            // The credential expiration date.
            shared_ptr<string> expireDate_ {};
          };

          virtual bool empty() const override { return this->birthday_ == nullptr
        && this->credential_ == nullptr && this->firstName_ == nullptr && this->gender_ == nullptr && this->lastName_ == nullptr && this->mobileCountryCode_ == nullptr
        && this->mobilePhoneNumber_ == nullptr && this->nationality_ == nullptr && this->type_ == nullptr; };
          // birthday Field Functions 
          bool hasBirthday() const { return this->birthday_ != nullptr;};
          void deleteBirthday() { this->birthday_ = nullptr;};
          inline string getBirthday() const { DARABONBA_PTR_GET_DEFAULT(birthday_, "") };
          inline Passenger& setBirthday(string birthday) { DARABONBA_PTR_SET_VALUE(birthday_, birthday) };


          // credential Field Functions 
          bool hasCredential() const { return this->credential_ != nullptr;};
          void deleteCredential() { this->credential_ = nullptr;};
          inline const Passenger::Credential & getCredential() const { DARABONBA_PTR_GET_CONST(credential_, Passenger::Credential) };
          inline Passenger::Credential getCredential() { DARABONBA_PTR_GET(credential_, Passenger::Credential) };
          inline Passenger& setCredential(const Passenger::Credential & credential) { DARABONBA_PTR_SET_VALUE(credential_, credential) };
          inline Passenger& setCredential(Passenger::Credential && credential) { DARABONBA_PTR_SET_RVALUE(credential_, credential) };


          // firstName Field Functions 
          bool hasFirstName() const { return this->firstName_ != nullptr;};
          void deleteFirstName() { this->firstName_ = nullptr;};
          inline string getFirstName() const { DARABONBA_PTR_GET_DEFAULT(firstName_, "") };
          inline Passenger& setFirstName(string firstName) { DARABONBA_PTR_SET_VALUE(firstName_, firstName) };


          // gender Field Functions 
          bool hasGender() const { return this->gender_ != nullptr;};
          void deleteGender() { this->gender_ = nullptr;};
          inline int32_t getGender() const { DARABONBA_PTR_GET_DEFAULT(gender_, 0) };
          inline Passenger& setGender(int32_t gender) { DARABONBA_PTR_SET_VALUE(gender_, gender) };


          // lastName Field Functions 
          bool hasLastName() const { return this->lastName_ != nullptr;};
          void deleteLastName() { this->lastName_ = nullptr;};
          inline string getLastName() const { DARABONBA_PTR_GET_DEFAULT(lastName_, "") };
          inline Passenger& setLastName(string lastName) { DARABONBA_PTR_SET_VALUE(lastName_, lastName) };


          // mobileCountryCode Field Functions 
          bool hasMobileCountryCode() const { return this->mobileCountryCode_ != nullptr;};
          void deleteMobileCountryCode() { this->mobileCountryCode_ = nullptr;};
          inline string getMobileCountryCode() const { DARABONBA_PTR_GET_DEFAULT(mobileCountryCode_, "") };
          inline Passenger& setMobileCountryCode(string mobileCountryCode) { DARABONBA_PTR_SET_VALUE(mobileCountryCode_, mobileCountryCode) };


          // mobilePhoneNumber Field Functions 
          bool hasMobilePhoneNumber() const { return this->mobilePhoneNumber_ != nullptr;};
          void deleteMobilePhoneNumber() { this->mobilePhoneNumber_ = nullptr;};
          inline string getMobilePhoneNumber() const { DARABONBA_PTR_GET_DEFAULT(mobilePhoneNumber_, "") };
          inline Passenger& setMobilePhoneNumber(string mobilePhoneNumber) { DARABONBA_PTR_SET_VALUE(mobilePhoneNumber_, mobilePhoneNumber) };


          // nationality Field Functions 
          bool hasNationality() const { return this->nationality_ != nullptr;};
          void deleteNationality() { this->nationality_ = nullptr;};
          inline string getNationality() const { DARABONBA_PTR_GET_DEFAULT(nationality_, "") };
          inline Passenger& setNationality(string nationality) { DARABONBA_PTR_SET_VALUE(nationality_, nationality) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
          inline Passenger& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          // The date of birth in yyyyMMdd format.
          shared_ptr<string> birthday_ {};
          // The credential information.
          shared_ptr<Passenger::Credential> credential_ {};
          // The first name.
          shared_ptr<string> firstName_ {};
          // The gender. Valid values:
          // - 0: MALE.
          // - 1: FEMALE.
          shared_ptr<int32_t> gender_ {};
          // The last name.
          shared_ptr<string> lastName_ {};
          // The country code of the mobile phone number.
          shared_ptr<string> mobileCountryCode_ {};
          // The mobile phone number.
          shared_ptr<string> mobilePhoneNumber_ {};
          // The two-letter nationality code.
          shared_ptr<string> nationality_ {};
          // The passenger type. Valid values:
          // - 0: adult.
          // - 1: child.
          // - 8: infant.
          shared_ptr<int32_t> type_ {};
        };

        class FlightSegmentCabinRelation : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const FlightSegmentCabinRelation& obj) { 
            DARABONBA_PTR_TO_JSON(cabin, cabin_);
            DARABONBA_PTR_TO_JSON(cabin_class, cabinClass_);
            DARABONBA_PTR_TO_JSON(cabin_class_name, cabinClassName_);
            DARABONBA_PTR_TO_JSON(cabin_quantity, cabinQuantity_);
            DARABONBA_PTR_TO_JSON(segment_id, segmentId_);
          };
          friend void from_json(const Darabonba::Json& j, FlightSegmentCabinRelation& obj) { 
            DARABONBA_PTR_FROM_JSON(cabin, cabin_);
            DARABONBA_PTR_FROM_JSON(cabin_class, cabinClass_);
            DARABONBA_PTR_FROM_JSON(cabin_class_name, cabinClassName_);
            DARABONBA_PTR_FROM_JSON(cabin_quantity, cabinQuantity_);
            DARABONBA_PTR_FROM_JSON(segment_id, segmentId_);
          };
          FlightSegmentCabinRelation() = default ;
          FlightSegmentCabinRelation(const FlightSegmentCabinRelation &) = default ;
          FlightSegmentCabinRelation(FlightSegmentCabinRelation &&) = default ;
          FlightSegmentCabinRelation(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~FlightSegmentCabinRelation() = default ;
          FlightSegmentCabinRelation& operator=(const FlightSegmentCabinRelation &) = default ;
          FlightSegmentCabinRelation& operator=(FlightSegmentCabinRelation &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->cabin_ == nullptr
        && this->cabinClass_ == nullptr && this->cabinClassName_ == nullptr && this->cabinQuantity_ == nullptr && this->segmentId_ == nullptr; };
          // cabin Field Functions 
          bool hasCabin() const { return this->cabin_ != nullptr;};
          void deleteCabin() { this->cabin_ = nullptr;};
          inline string getCabin() const { DARABONBA_PTR_GET_DEFAULT(cabin_, "") };
          inline FlightSegmentCabinRelation& setCabin(string cabin) { DARABONBA_PTR_SET_VALUE(cabin_, cabin) };


          // cabinClass Field Functions 
          bool hasCabinClass() const { return this->cabinClass_ != nullptr;};
          void deleteCabinClass() { this->cabinClass_ = nullptr;};
          inline string getCabinClass() const { DARABONBA_PTR_GET_DEFAULT(cabinClass_, "") };
          inline FlightSegmentCabinRelation& setCabinClass(string cabinClass) { DARABONBA_PTR_SET_VALUE(cabinClass_, cabinClass) };


          // cabinClassName Field Functions 
          bool hasCabinClassName() const { return this->cabinClassName_ != nullptr;};
          void deleteCabinClassName() { this->cabinClassName_ = nullptr;};
          inline string getCabinClassName() const { DARABONBA_PTR_GET_DEFAULT(cabinClassName_, "") };
          inline FlightSegmentCabinRelation& setCabinClassName(string cabinClassName) { DARABONBA_PTR_SET_VALUE(cabinClassName_, cabinClassName) };


          // cabinQuantity Field Functions 
          bool hasCabinQuantity() const { return this->cabinQuantity_ != nullptr;};
          void deleteCabinQuantity() { this->cabinQuantity_ = nullptr;};
          inline string getCabinQuantity() const { DARABONBA_PTR_GET_DEFAULT(cabinQuantity_, "") };
          inline FlightSegmentCabinRelation& setCabinQuantity(string cabinQuantity) { DARABONBA_PTR_SET_VALUE(cabinQuantity_, cabinQuantity) };


          // segmentId Field Functions 
          bool hasSegmentId() const { return this->segmentId_ != nullptr;};
          void deleteSegmentId() { this->segmentId_ = nullptr;};
          inline string getSegmentId() const { DARABONBA_PTR_GET_DEFAULT(segmentId_, "") };
          inline FlightSegmentCabinRelation& setSegmentId(string segmentId) { DARABONBA_PTR_SET_VALUE(segmentId_, segmentId) };


        protected:
          // The cabin.
          shared_ptr<string> cabin_ {};
          // The cabin class.
          shared_ptr<string> cabinClass_ {};
          // The cabin class description.
          shared_ptr<string> cabinClassName_ {};
          // The number of available tickets.
          shared_ptr<string> cabinQuantity_ {};
          // The segment ID.
          shared_ptr<string> segmentId_ {};
        };

        class FlightPrice : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const FlightPrice& obj) { 
            DARABONBA_PTR_TO_JSON(sell_price, sellPrice_);
            DARABONBA_PTR_TO_JSON(tax, tax_);
          };
          friend void from_json(const Darabonba::Json& j, FlightPrice& obj) { 
            DARABONBA_PTR_FROM_JSON(sell_price, sellPrice_);
            DARABONBA_PTR_FROM_JSON(tax, tax_);
          };
          FlightPrice() = default ;
          FlightPrice(const FlightPrice &) = default ;
          FlightPrice(FlightPrice &&) = default ;
          FlightPrice(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~FlightPrice() = default ;
          FlightPrice& operator=(const FlightPrice &) = default ;
          FlightPrice& operator=(FlightPrice &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->sellPrice_ == nullptr
        && this->tax_ == nullptr; };
          // sellPrice Field Functions 
          bool hasSellPrice() const { return this->sellPrice_ != nullptr;};
          void deleteSellPrice() { this->sellPrice_ = nullptr;};
          inline double getSellPrice() const { DARABONBA_PTR_GET_DEFAULT(sellPrice_, 0.0) };
          inline FlightPrice& setSellPrice(double sellPrice) { DARABONBA_PTR_SET_VALUE(sellPrice_, sellPrice) };


          // tax Field Functions 
          bool hasTax() const { return this->tax_ != nullptr;};
          void deleteTax() { this->tax_ = nullptr;};
          inline double getTax() const { DARABONBA_PTR_GET_DEFAULT(tax_, 0.0) };
          inline FlightPrice& setTax(double tax) { DARABONBA_PTR_SET_VALUE(tax_, tax) };


        protected:
          // The selling price. Unit: CNY.
          shared_ptr<double> sellPrice_ {};
          // The tax.
          shared_ptr<double> tax_ {};
        };

        virtual bool empty() const override { return this->bPnrList_ == nullptr
        && this->cPnrList_ == nullptr && this->flightPrice_ == nullptr && this->flightSegmentCabinRelation_ == nullptr && this->passenger_ == nullptr && this->ticketAirLine_ == nullptr
        && this->ticketNos_ == nullptr; };
        // bPnrList Field Functions 
        bool hasBPnrList() const { return this->bPnrList_ != nullptr;};
        void deleteBPnrList() { this->bPnrList_ = nullptr;};
        inline const vector<string> & getBPnrList() const { DARABONBA_PTR_GET_CONST(bPnrList_, vector<string>) };
        inline vector<string> getBPnrList() { DARABONBA_PTR_GET(bPnrList_, vector<string>) };
        inline FlightItemDetailList& setBPnrList(const vector<string> & bPnrList) { DARABONBA_PTR_SET_VALUE(bPnrList_, bPnrList) };
        inline FlightItemDetailList& setBPnrList(vector<string> && bPnrList) { DARABONBA_PTR_SET_RVALUE(bPnrList_, bPnrList) };


        // cPnrList Field Functions 
        bool hasCPnrList() const { return this->cPnrList_ != nullptr;};
        void deleteCPnrList() { this->cPnrList_ = nullptr;};
        inline const vector<string> & getCPnrList() const { DARABONBA_PTR_GET_CONST(cPnrList_, vector<string>) };
        inline vector<string> getCPnrList() { DARABONBA_PTR_GET(cPnrList_, vector<string>) };
        inline FlightItemDetailList& setCPnrList(const vector<string> & cPnrList) { DARABONBA_PTR_SET_VALUE(cPnrList_, cPnrList) };
        inline FlightItemDetailList& setCPnrList(vector<string> && cPnrList) { DARABONBA_PTR_SET_RVALUE(cPnrList_, cPnrList) };


        // flightPrice Field Functions 
        bool hasFlightPrice() const { return this->flightPrice_ != nullptr;};
        void deleteFlightPrice() { this->flightPrice_ = nullptr;};
        inline const FlightItemDetailList::FlightPrice & getFlightPrice() const { DARABONBA_PTR_GET_CONST(flightPrice_, FlightItemDetailList::FlightPrice) };
        inline FlightItemDetailList::FlightPrice getFlightPrice() { DARABONBA_PTR_GET(flightPrice_, FlightItemDetailList::FlightPrice) };
        inline FlightItemDetailList& setFlightPrice(const FlightItemDetailList::FlightPrice & flightPrice) { DARABONBA_PTR_SET_VALUE(flightPrice_, flightPrice) };
        inline FlightItemDetailList& setFlightPrice(FlightItemDetailList::FlightPrice && flightPrice) { DARABONBA_PTR_SET_RVALUE(flightPrice_, flightPrice) };


        // flightSegmentCabinRelation Field Functions 
        bool hasFlightSegmentCabinRelation() const { return this->flightSegmentCabinRelation_ != nullptr;};
        void deleteFlightSegmentCabinRelation() { this->flightSegmentCabinRelation_ = nullptr;};
        inline const vector<FlightItemDetailList::FlightSegmentCabinRelation> & getFlightSegmentCabinRelation() const { DARABONBA_PTR_GET_CONST(flightSegmentCabinRelation_, vector<FlightItemDetailList::FlightSegmentCabinRelation>) };
        inline vector<FlightItemDetailList::FlightSegmentCabinRelation> getFlightSegmentCabinRelation() { DARABONBA_PTR_GET(flightSegmentCabinRelation_, vector<FlightItemDetailList::FlightSegmentCabinRelation>) };
        inline FlightItemDetailList& setFlightSegmentCabinRelation(const vector<FlightItemDetailList::FlightSegmentCabinRelation> & flightSegmentCabinRelation) { DARABONBA_PTR_SET_VALUE(flightSegmentCabinRelation_, flightSegmentCabinRelation) };
        inline FlightItemDetailList& setFlightSegmentCabinRelation(vector<FlightItemDetailList::FlightSegmentCabinRelation> && flightSegmentCabinRelation) { DARABONBA_PTR_SET_RVALUE(flightSegmentCabinRelation_, flightSegmentCabinRelation) };


        // passenger Field Functions 
        bool hasPassenger() const { return this->passenger_ != nullptr;};
        void deletePassenger() { this->passenger_ = nullptr;};
        inline const FlightItemDetailList::Passenger & getPassenger() const { DARABONBA_PTR_GET_CONST(passenger_, FlightItemDetailList::Passenger) };
        inline FlightItemDetailList::Passenger getPassenger() { DARABONBA_PTR_GET(passenger_, FlightItemDetailList::Passenger) };
        inline FlightItemDetailList& setPassenger(const FlightItemDetailList::Passenger & passenger) { DARABONBA_PTR_SET_VALUE(passenger_, passenger) };
        inline FlightItemDetailList& setPassenger(FlightItemDetailList::Passenger && passenger) { DARABONBA_PTR_SET_RVALUE(passenger_, passenger) };


        // ticketAirLine Field Functions 
        bool hasTicketAirLine() const { return this->ticketAirLine_ != nullptr;};
        void deleteTicketAirLine() { this->ticketAirLine_ = nullptr;};
        inline string getTicketAirLine() const { DARABONBA_PTR_GET_DEFAULT(ticketAirLine_, "") };
        inline FlightItemDetailList& setTicketAirLine(string ticketAirLine) { DARABONBA_PTR_SET_VALUE(ticketAirLine_, ticketAirLine) };


        // ticketNos Field Functions 
        bool hasTicketNos() const { return this->ticketNos_ != nullptr;};
        void deleteTicketNos() { this->ticketNos_ = nullptr;};
        inline const vector<string> & getTicketNos() const { DARABONBA_PTR_GET_CONST(ticketNos_, vector<string>) };
        inline vector<string> getTicketNos() { DARABONBA_PTR_GET(ticketNos_, vector<string>) };
        inline FlightItemDetailList& setTicketNos(const vector<string> & ticketNos) { DARABONBA_PTR_SET_VALUE(ticketNos_, ticketNos) };
        inline FlightItemDetailList& setTicketNos(vector<string> && ticketNos) { DARABONBA_PTR_SET_RVALUE(ticketNos_, ticketNos) };


      protected:
        // The list of bPnr values.
        shared_ptr<vector<string>> bPnrList_ {};
        // The list of cPnr values.
        shared_ptr<vector<string>> cPnrList_ {};
        // The passenger price information.
        shared_ptr<FlightItemDetailList::FlightPrice> flightPrice_ {};
        // The list of segment-cabin information.
        shared_ptr<vector<FlightItemDetailList::FlightSegmentCabinRelation>> flightSegmentCabinRelation_ {};
        // The passenger information.
        shared_ptr<FlightItemDetailList::Passenger> passenger_ {};
        // The ticketing airline. Multiple ticketing airlines may be concatenated.
        shared_ptr<string> ticketAirLine_ {};
        // The list of ticket numbers.
        shared_ptr<vector<string>> ticketNos_ {};
      };

      class AncillaryItemDetailList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AncillaryItemDetailList& obj) { 
          DARABONBA_PTR_TO_JSON(ancillary, ancillary_);
          DARABONBA_PTR_TO_JSON(passenger, passenger_);
          DARABONBA_PTR_TO_JSON(segment_id_list, segmentIdList_);
        };
        friend void from_json(const Darabonba::Json& j, AncillaryItemDetailList& obj) { 
          DARABONBA_PTR_FROM_JSON(ancillary, ancillary_);
          DARABONBA_PTR_FROM_JSON(passenger, passenger_);
          DARABONBA_PTR_FROM_JSON(segment_id_list, segmentIdList_);
        };
        AncillaryItemDetailList() = default ;
        AncillaryItemDetailList(const AncillaryItemDetailList &) = default ;
        AncillaryItemDetailList(AncillaryItemDetailList &&) = default ;
        AncillaryItemDetailList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AncillaryItemDetailList() = default ;
        AncillaryItemDetailList& operator=(const AncillaryItemDetailList &) = default ;
        AncillaryItemDetailList& operator=(AncillaryItemDetailList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Passenger : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Passenger& obj) { 
            DARABONBA_PTR_TO_JSON(birthday, birthday_);
            DARABONBA_PTR_TO_JSON(credential, credential_);
            DARABONBA_PTR_TO_JSON(first_name, firstName_);
            DARABONBA_PTR_TO_JSON(gender, gender_);
            DARABONBA_PTR_TO_JSON(last_name, lastName_);
            DARABONBA_PTR_TO_JSON(mobile_country_code, mobileCountryCode_);
            DARABONBA_PTR_TO_JSON(mobile_phone_number, mobilePhoneNumber_);
            DARABONBA_PTR_TO_JSON(nationality, nationality_);
            DARABONBA_PTR_TO_JSON(type, type_);
          };
          friend void from_json(const Darabonba::Json& j, Passenger& obj) { 
            DARABONBA_PTR_FROM_JSON(birthday, birthday_);
            DARABONBA_PTR_FROM_JSON(credential, credential_);
            DARABONBA_PTR_FROM_JSON(first_name, firstName_);
            DARABONBA_PTR_FROM_JSON(gender, gender_);
            DARABONBA_PTR_FROM_JSON(last_name, lastName_);
            DARABONBA_PTR_FROM_JSON(mobile_country_code, mobileCountryCode_);
            DARABONBA_PTR_FROM_JSON(mobile_phone_number, mobilePhoneNumber_);
            DARABONBA_PTR_FROM_JSON(nationality, nationality_);
            DARABONBA_PTR_FROM_JSON(type, type_);
          };
          Passenger() = default ;
          Passenger(const Passenger &) = default ;
          Passenger(Passenger &&) = default ;
          Passenger(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Passenger() = default ;
          Passenger& operator=(const Passenger &) = default ;
          Passenger& operator=(Passenger &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Credential : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Credential& obj) { 
              DARABONBA_PTR_TO_JSON(cert_issue_place, certIssuePlace_);
              DARABONBA_PTR_TO_JSON(credential_num, credentialNum_);
              DARABONBA_PTR_TO_JSON(credential_type, credentialType_);
              DARABONBA_PTR_TO_JSON(expire_date, expireDate_);
            };
            friend void from_json(const Darabonba::Json& j, Credential& obj) { 
              DARABONBA_PTR_FROM_JSON(cert_issue_place, certIssuePlace_);
              DARABONBA_PTR_FROM_JSON(credential_num, credentialNum_);
              DARABONBA_PTR_FROM_JSON(credential_type, credentialType_);
              DARABONBA_PTR_FROM_JSON(expire_date, expireDate_);
            };
            Credential() = default ;
            Credential(const Credential &) = default ;
            Credential(Credential &&) = default ;
            Credential(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Credential() = default ;
            Credential& operator=(const Credential &) = default ;
            Credential& operator=(Credential &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->certIssuePlace_ == nullptr
        && this->credentialNum_ == nullptr && this->credentialType_ == nullptr && this->expireDate_ == nullptr; };
            // certIssuePlace Field Functions 
            bool hasCertIssuePlace() const { return this->certIssuePlace_ != nullptr;};
            void deleteCertIssuePlace() { this->certIssuePlace_ = nullptr;};
            inline string getCertIssuePlace() const { DARABONBA_PTR_GET_DEFAULT(certIssuePlace_, "") };
            inline Credential& setCertIssuePlace(string certIssuePlace) { DARABONBA_PTR_SET_VALUE(certIssuePlace_, certIssuePlace) };


            // credentialNum Field Functions 
            bool hasCredentialNum() const { return this->credentialNum_ != nullptr;};
            void deleteCredentialNum() { this->credentialNum_ = nullptr;};
            inline string getCredentialNum() const { DARABONBA_PTR_GET_DEFAULT(credentialNum_, "") };
            inline Credential& setCredentialNum(string credentialNum) { DARABONBA_PTR_SET_VALUE(credentialNum_, credentialNum) };


            // credentialType Field Functions 
            bool hasCredentialType() const { return this->credentialType_ != nullptr;};
            void deleteCredentialType() { this->credentialType_ = nullptr;};
            inline int32_t getCredentialType() const { DARABONBA_PTR_GET_DEFAULT(credentialType_, 0) };
            inline Credential& setCredentialType(int32_t credentialType) { DARABONBA_PTR_SET_VALUE(credentialType_, credentialType) };


            // expireDate Field Functions 
            bool hasExpireDate() const { return this->expireDate_ != nullptr;};
            void deleteExpireDate() { this->expireDate_ = nullptr;};
            inline string getExpireDate() const { DARABONBA_PTR_GET_DEFAULT(expireDate_, "") };
            inline Credential& setExpireDate(string expireDate) { DARABONBA_PTR_SET_VALUE(expireDate_, expireDate) };


          protected:
            // The place of issuance, represented as a two-letter code.
            shared_ptr<string> certIssuePlace_ {};
            // The credential number.
            shared_ptr<string> credentialNum_ {};
            // The credential type. Valid values:
            // - 0: ID card.
            // - 1: passport.
            // - 4: Home Return Permit.
            // - 5: Mainland Travel Permit for Taiwan Residents.
            // - 6: Exit-Entry Permit for Hong Kong and Macao Residents.
            // - 12: Taiwan Travel Permit.
            // - 19: no credential.
            shared_ptr<int32_t> credentialType_ {};
            // The credential expiration date.
            shared_ptr<string> expireDate_ {};
          };

          virtual bool empty() const override { return this->birthday_ == nullptr
        && this->credential_ == nullptr && this->firstName_ == nullptr && this->gender_ == nullptr && this->lastName_ == nullptr && this->mobileCountryCode_ == nullptr
        && this->mobilePhoneNumber_ == nullptr && this->nationality_ == nullptr && this->type_ == nullptr; };
          // birthday Field Functions 
          bool hasBirthday() const { return this->birthday_ != nullptr;};
          void deleteBirthday() { this->birthday_ = nullptr;};
          inline string getBirthday() const { DARABONBA_PTR_GET_DEFAULT(birthday_, "") };
          inline Passenger& setBirthday(string birthday) { DARABONBA_PTR_SET_VALUE(birthday_, birthday) };


          // credential Field Functions 
          bool hasCredential() const { return this->credential_ != nullptr;};
          void deleteCredential() { this->credential_ = nullptr;};
          inline const Passenger::Credential & getCredential() const { DARABONBA_PTR_GET_CONST(credential_, Passenger::Credential) };
          inline Passenger::Credential getCredential() { DARABONBA_PTR_GET(credential_, Passenger::Credential) };
          inline Passenger& setCredential(const Passenger::Credential & credential) { DARABONBA_PTR_SET_VALUE(credential_, credential) };
          inline Passenger& setCredential(Passenger::Credential && credential) { DARABONBA_PTR_SET_RVALUE(credential_, credential) };


          // firstName Field Functions 
          bool hasFirstName() const { return this->firstName_ != nullptr;};
          void deleteFirstName() { this->firstName_ = nullptr;};
          inline string getFirstName() const { DARABONBA_PTR_GET_DEFAULT(firstName_, "") };
          inline Passenger& setFirstName(string firstName) { DARABONBA_PTR_SET_VALUE(firstName_, firstName) };


          // gender Field Functions 
          bool hasGender() const { return this->gender_ != nullptr;};
          void deleteGender() { this->gender_ = nullptr;};
          inline int32_t getGender() const { DARABONBA_PTR_GET_DEFAULT(gender_, 0) };
          inline Passenger& setGender(int32_t gender) { DARABONBA_PTR_SET_VALUE(gender_, gender) };


          // lastName Field Functions 
          bool hasLastName() const { return this->lastName_ != nullptr;};
          void deleteLastName() { this->lastName_ = nullptr;};
          inline string getLastName() const { DARABONBA_PTR_GET_DEFAULT(lastName_, "") };
          inline Passenger& setLastName(string lastName) { DARABONBA_PTR_SET_VALUE(lastName_, lastName) };


          // mobileCountryCode Field Functions 
          bool hasMobileCountryCode() const { return this->mobileCountryCode_ != nullptr;};
          void deleteMobileCountryCode() { this->mobileCountryCode_ = nullptr;};
          inline string getMobileCountryCode() const { DARABONBA_PTR_GET_DEFAULT(mobileCountryCode_, "") };
          inline Passenger& setMobileCountryCode(string mobileCountryCode) { DARABONBA_PTR_SET_VALUE(mobileCountryCode_, mobileCountryCode) };


          // mobilePhoneNumber Field Functions 
          bool hasMobilePhoneNumber() const { return this->mobilePhoneNumber_ != nullptr;};
          void deleteMobilePhoneNumber() { this->mobilePhoneNumber_ = nullptr;};
          inline string getMobilePhoneNumber() const { DARABONBA_PTR_GET_DEFAULT(mobilePhoneNumber_, "") };
          inline Passenger& setMobilePhoneNumber(string mobilePhoneNumber) { DARABONBA_PTR_SET_VALUE(mobilePhoneNumber_, mobilePhoneNumber) };


          // nationality Field Functions 
          bool hasNationality() const { return this->nationality_ != nullptr;};
          void deleteNationality() { this->nationality_ = nullptr;};
          inline string getNationality() const { DARABONBA_PTR_GET_DEFAULT(nationality_, "") };
          inline Passenger& setNationality(string nationality) { DARABONBA_PTR_SET_VALUE(nationality_, nationality) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
          inline Passenger& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          // The date of birth in yyyyMMdd format.
          shared_ptr<string> birthday_ {};
          // The credential information.
          shared_ptr<Passenger::Credential> credential_ {};
          // The first name.
          shared_ptr<string> firstName_ {};
          // The gender. Valid values:
          // - 0: MALE.
          // - 1: FEMALE.
          shared_ptr<int32_t> gender_ {};
          // The last name.
          shared_ptr<string> lastName_ {};
          // The country code of the mobile phone number.
          shared_ptr<string> mobileCountryCode_ {};
          // The mobile phone number.
          shared_ptr<string> mobilePhoneNumber_ {};
          // The two-letter nationality code.
          shared_ptr<string> nationality_ {};
          // The passenger type. Valid values:
          // - 0: adult.
          // - 1: child.
          // - 8: infant.
          shared_ptr<int32_t> type_ {};
        };

        class Ancillary : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Ancillary& obj) { 
            DARABONBA_PTR_TO_JSON(ancillary_id, ancillaryId_);
            DARABONBA_PTR_TO_JSON(ancillary_type, ancillaryType_);
            DARABONBA_PTR_TO_JSON(baggage_ancillary, baggageAncillary_);
          };
          friend void from_json(const Darabonba::Json& j, Ancillary& obj) { 
            DARABONBA_PTR_FROM_JSON(ancillary_id, ancillaryId_);
            DARABONBA_PTR_FROM_JSON(ancillary_type, ancillaryType_);
            DARABONBA_PTR_FROM_JSON(baggage_ancillary, baggageAncillary_);
          };
          Ancillary() = default ;
          Ancillary(const Ancillary &) = default ;
          Ancillary(Ancillary &&) = default ;
          Ancillary(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Ancillary() = default ;
          Ancillary& operator=(const Ancillary &) = default ;
          Ancillary& operator=(Ancillary &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class BaggageAncillary : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const BaggageAncillary& obj) { 
              DARABONBA_PTR_TO_JSON(baggage_amount, baggageAmount_);
              DARABONBA_PTR_TO_JSON(baggage_weight, baggageWeight_);
              DARABONBA_PTR_TO_JSON(baggage_weight_unit, baggageWeightUnit_);
              DARABONBA_PTR_TO_JSON(is_all_weight, isAllWeight_);
              DARABONBA_PTR_TO_JSON(price, price_);
            };
            friend void from_json(const Darabonba::Json& j, BaggageAncillary& obj) { 
              DARABONBA_PTR_FROM_JSON(baggage_amount, baggageAmount_);
              DARABONBA_PTR_FROM_JSON(baggage_weight, baggageWeight_);
              DARABONBA_PTR_FROM_JSON(baggage_weight_unit, baggageWeightUnit_);
              DARABONBA_PTR_FROM_JSON(is_all_weight, isAllWeight_);
              DARABONBA_PTR_FROM_JSON(price, price_);
            };
            BaggageAncillary() = default ;
            BaggageAncillary(const BaggageAncillary &) = default ;
            BaggageAncillary(BaggageAncillary &&) = default ;
            BaggageAncillary(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~BaggageAncillary() = default ;
            BaggageAncillary& operator=(const BaggageAncillary &) = default ;
            BaggageAncillary& operator=(BaggageAncillary &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->baggageAmount_ == nullptr
        && this->baggageWeight_ == nullptr && this->baggageWeightUnit_ == nullptr && this->isAllWeight_ == nullptr && this->price_ == nullptr; };
            // baggageAmount Field Functions 
            bool hasBaggageAmount() const { return this->baggageAmount_ != nullptr;};
            void deleteBaggageAmount() { this->baggageAmount_ = nullptr;};
            inline int32_t getBaggageAmount() const { DARABONBA_PTR_GET_DEFAULT(baggageAmount_, 0) };
            inline BaggageAncillary& setBaggageAmount(int32_t baggageAmount) { DARABONBA_PTR_SET_VALUE(baggageAmount_, baggageAmount) };


            // baggageWeight Field Functions 
            bool hasBaggageWeight() const { return this->baggageWeight_ != nullptr;};
            void deleteBaggageWeight() { this->baggageWeight_ = nullptr;};
            inline int32_t getBaggageWeight() const { DARABONBA_PTR_GET_DEFAULT(baggageWeight_, 0) };
            inline BaggageAncillary& setBaggageWeight(int32_t baggageWeight) { DARABONBA_PTR_SET_VALUE(baggageWeight_, baggageWeight) };


            // baggageWeightUnit Field Functions 
            bool hasBaggageWeightUnit() const { return this->baggageWeightUnit_ != nullptr;};
            void deleteBaggageWeightUnit() { this->baggageWeightUnit_ = nullptr;};
            inline string getBaggageWeightUnit() const { DARABONBA_PTR_GET_DEFAULT(baggageWeightUnit_, "") };
            inline BaggageAncillary& setBaggageWeightUnit(string baggageWeightUnit) { DARABONBA_PTR_SET_VALUE(baggageWeightUnit_, baggageWeightUnit) };


            // isAllWeight Field Functions 
            bool hasIsAllWeight() const { return this->isAllWeight_ != nullptr;};
            void deleteIsAllWeight() { this->isAllWeight_ = nullptr;};
            inline bool getIsAllWeight() const { DARABONBA_PTR_GET_DEFAULT(isAllWeight_, false) };
            inline BaggageAncillary& setIsAllWeight(bool isAllWeight) { DARABONBA_PTR_SET_VALUE(isAllWeight_, isAllWeight) };


            // price Field Functions 
            bool hasPrice() const { return this->price_ != nullptr;};
            void deletePrice() { this->price_ = nullptr;};
            inline double getPrice() const { DARABONBA_PTR_GET_DEFAULT(price_, 0.0) };
            inline BaggageAncillary& setPrice(double price) { DARABONBA_PTR_SET_VALUE(price_, price) };


          protected:
            // The number of baggage pieces. Valid values: 3, 2, 1, 0, and -2. A value of -2 indicates weight-based calculation.
            shared_ptr<int32_t> baggageAmount_ {};
            // The baggage weight, ranging from 0 to 50. When isAllWeight is set to true, this value represents the total weight of all pieces.
            shared_ptr<int32_t> baggageWeight_ {};
            // The baggage weight unit.
            shared_ptr<string> baggageWeightUnit_ {};
            // Indicates whether the weight represents the total weight of all baggage pieces.
            shared_ptr<bool> isAllWeight_ {};
            // The total price.
            shared_ptr<double> price_ {};
          };

          virtual bool empty() const override { return this->ancillaryId_ == nullptr
        && this->ancillaryType_ == nullptr && this->baggageAncillary_ == nullptr; };
          // ancillaryId Field Functions 
          bool hasAncillaryId() const { return this->ancillaryId_ != nullptr;};
          void deleteAncillaryId() { this->ancillaryId_ = nullptr;};
          inline string getAncillaryId() const { DARABONBA_PTR_GET_DEFAULT(ancillaryId_, "") };
          inline Ancillary& setAncillaryId(string ancillaryId) { DARABONBA_PTR_SET_VALUE(ancillaryId_, ancillaryId) };


          // ancillaryType Field Functions 
          bool hasAncillaryType() const { return this->ancillaryType_ != nullptr;};
          void deleteAncillaryType() { this->ancillaryType_ = nullptr;};
          inline int32_t getAncillaryType() const { DARABONBA_PTR_GET_DEFAULT(ancillaryType_, 0) };
          inline Ancillary& setAncillaryType(int32_t ancillaryType) { DARABONBA_PTR_SET_VALUE(ancillaryType_, ancillaryType) };


          // baggageAncillary Field Functions 
          bool hasBaggageAncillary() const { return this->baggageAncillary_ != nullptr;};
          void deleteBaggageAncillary() { this->baggageAncillary_ = nullptr;};
          inline const Ancillary::BaggageAncillary & getBaggageAncillary() const { DARABONBA_PTR_GET_CONST(baggageAncillary_, Ancillary::BaggageAncillary) };
          inline Ancillary::BaggageAncillary getBaggageAncillary() { DARABONBA_PTR_GET(baggageAncillary_, Ancillary::BaggageAncillary) };
          inline Ancillary& setBaggageAncillary(const Ancillary::BaggageAncillary & baggageAncillary) { DARABONBA_PTR_SET_VALUE(baggageAncillary_, baggageAncillary) };
          inline Ancillary& setBaggageAncillary(Ancillary::BaggageAncillary && baggageAncillary) { DARABONBA_PTR_SET_RVALUE(baggageAncillary_, baggageAncillary) };


        protected:
          // The ancillary product ID.
          shared_ptr<string> ancillaryId_ {};
          // The ancillary product type. Currently supported value: 4 (paid baggage).
          shared_ptr<int32_t> ancillaryType_ {};
          // The baggage ancillary details.
          shared_ptr<Ancillary::BaggageAncillary> baggageAncillary_ {};
        };

        virtual bool empty() const override { return this->ancillary_ == nullptr
        && this->passenger_ == nullptr && this->segmentIdList_ == nullptr; };
        // ancillary Field Functions 
        bool hasAncillary() const { return this->ancillary_ != nullptr;};
        void deleteAncillary() { this->ancillary_ = nullptr;};
        inline const AncillaryItemDetailList::Ancillary & getAncillary() const { DARABONBA_PTR_GET_CONST(ancillary_, AncillaryItemDetailList::Ancillary) };
        inline AncillaryItemDetailList::Ancillary getAncillary() { DARABONBA_PTR_GET(ancillary_, AncillaryItemDetailList::Ancillary) };
        inline AncillaryItemDetailList& setAncillary(const AncillaryItemDetailList::Ancillary & ancillary) { DARABONBA_PTR_SET_VALUE(ancillary_, ancillary) };
        inline AncillaryItemDetailList& setAncillary(AncillaryItemDetailList::Ancillary && ancillary) { DARABONBA_PTR_SET_RVALUE(ancillary_, ancillary) };


        // passenger Field Functions 
        bool hasPassenger() const { return this->passenger_ != nullptr;};
        void deletePassenger() { this->passenger_ = nullptr;};
        inline const AncillaryItemDetailList::Passenger & getPassenger() const { DARABONBA_PTR_GET_CONST(passenger_, AncillaryItemDetailList::Passenger) };
        inline AncillaryItemDetailList::Passenger getPassenger() { DARABONBA_PTR_GET(passenger_, AncillaryItemDetailList::Passenger) };
        inline AncillaryItemDetailList& setPassenger(const AncillaryItemDetailList::Passenger & passenger) { DARABONBA_PTR_SET_VALUE(passenger_, passenger) };
        inline AncillaryItemDetailList& setPassenger(AncillaryItemDetailList::Passenger && passenger) { DARABONBA_PTR_SET_RVALUE(passenger_, passenger) };


        // segmentIdList Field Functions 
        bool hasSegmentIdList() const { return this->segmentIdList_ != nullptr;};
        void deleteSegmentIdList() { this->segmentIdList_ = nullptr;};
        inline const vector<string> & getSegmentIdList() const { DARABONBA_PTR_GET_CONST(segmentIdList_, vector<string>) };
        inline vector<string> getSegmentIdList() { DARABONBA_PTR_GET(segmentIdList_, vector<string>) };
        inline AncillaryItemDetailList& setSegmentIdList(const vector<string> & segmentIdList) { DARABONBA_PTR_SET_VALUE(segmentIdList_, segmentIdList) };
        inline AncillaryItemDetailList& setSegmentIdList(vector<string> && segmentIdList) { DARABONBA_PTR_SET_RVALUE(segmentIdList_, segmentIdList) };


      protected:
        // The ancillary product details.
        shared_ptr<AncillaryItemDetailList::Ancillary> ancillary_ {};
        // The passenger information.
        shared_ptr<AncillaryItemDetailList::Passenger> passenger_ {};
        // The segment IDs to which the ancillary product applies.
        shared_ptr<vector<string>> segmentIdList_ {};
      };

      virtual bool empty() const override { return this->ancillaryItemDetailList_ == nullptr
        && this->baggageAllowanceMap_ == nullptr && this->bookTime_ == nullptr && this->flightItemDetailList_ == nullptr && this->orderNum_ == nullptr && this->orderStatus_ == nullptr
        && this->outOrderNum_ == nullptr && this->passengerList_ == nullptr && this->payStatus_ == nullptr && this->payTime_ == nullptr && this->promotionPrice_ == nullptr
        && this->realPayPrice_ == nullptr && this->refundChangeRuleMap_ == nullptr && this->sessionNick_ == nullptr && this->solution_ == nullptr && this->succeedTime_ == nullptr
        && this->totalPrice_ == nullptr && this->transactionNo_ == nullptr; };
      // ancillaryItemDetailList Field Functions 
      bool hasAncillaryItemDetailList() const { return this->ancillaryItemDetailList_ != nullptr;};
      void deleteAncillaryItemDetailList() { this->ancillaryItemDetailList_ = nullptr;};
      inline const vector<Data::AncillaryItemDetailList> & getAncillaryItemDetailList() const { DARABONBA_PTR_GET_CONST(ancillaryItemDetailList_, vector<Data::AncillaryItemDetailList>) };
      inline vector<Data::AncillaryItemDetailList> getAncillaryItemDetailList() { DARABONBA_PTR_GET(ancillaryItemDetailList_, vector<Data::AncillaryItemDetailList>) };
      inline Data& setAncillaryItemDetailList(const vector<Data::AncillaryItemDetailList> & ancillaryItemDetailList) { DARABONBA_PTR_SET_VALUE(ancillaryItemDetailList_, ancillaryItemDetailList) };
      inline Data& setAncillaryItemDetailList(vector<Data::AncillaryItemDetailList> && ancillaryItemDetailList) { DARABONBA_PTR_SET_RVALUE(ancillaryItemDetailList_, ancillaryItemDetailList) };


      // baggageAllowanceMap Field Functions 
      bool hasBaggageAllowanceMap() const { return this->baggageAllowanceMap_ != nullptr;};
      void deleteBaggageAllowanceMap() { this->baggageAllowanceMap_ = nullptr;};
      inline const map<string, DataBaggageAllowanceMapValue> & getBaggageAllowanceMap() const { DARABONBA_PTR_GET_CONST(baggageAllowanceMap_, map<string, DataBaggageAllowanceMapValue>) };
      inline map<string, DataBaggageAllowanceMapValue> getBaggageAllowanceMap() { DARABONBA_PTR_GET(baggageAllowanceMap_, map<string, DataBaggageAllowanceMapValue>) };
      inline Data& setBaggageAllowanceMap(const map<string, DataBaggageAllowanceMapValue> & baggageAllowanceMap) { DARABONBA_PTR_SET_VALUE(baggageAllowanceMap_, baggageAllowanceMap) };
      inline Data& setBaggageAllowanceMap(map<string, DataBaggageAllowanceMapValue> && baggageAllowanceMap) { DARABONBA_PTR_SET_RVALUE(baggageAllowanceMap_, baggageAllowanceMap) };


      // bookTime Field Functions 
      bool hasBookTime() const { return this->bookTime_ != nullptr;};
      void deleteBookTime() { this->bookTime_ = nullptr;};
      inline int64_t getBookTime() const { DARABONBA_PTR_GET_DEFAULT(bookTime_, 0L) };
      inline Data& setBookTime(int64_t bookTime) { DARABONBA_PTR_SET_VALUE(bookTime_, bookTime) };


      // flightItemDetailList Field Functions 
      bool hasFlightItemDetailList() const { return this->flightItemDetailList_ != nullptr;};
      void deleteFlightItemDetailList() { this->flightItemDetailList_ = nullptr;};
      inline const vector<Data::FlightItemDetailList> & getFlightItemDetailList() const { DARABONBA_PTR_GET_CONST(flightItemDetailList_, vector<Data::FlightItemDetailList>) };
      inline vector<Data::FlightItemDetailList> getFlightItemDetailList() { DARABONBA_PTR_GET(flightItemDetailList_, vector<Data::FlightItemDetailList>) };
      inline Data& setFlightItemDetailList(const vector<Data::FlightItemDetailList> & flightItemDetailList) { DARABONBA_PTR_SET_VALUE(flightItemDetailList_, flightItemDetailList) };
      inline Data& setFlightItemDetailList(vector<Data::FlightItemDetailList> && flightItemDetailList) { DARABONBA_PTR_SET_RVALUE(flightItemDetailList_, flightItemDetailList) };


      // orderNum Field Functions 
      bool hasOrderNum() const { return this->orderNum_ != nullptr;};
      void deleteOrderNum() { this->orderNum_ = nullptr;};
      inline int64_t getOrderNum() const { DARABONBA_PTR_GET_DEFAULT(orderNum_, 0L) };
      inline Data& setOrderNum(int64_t orderNum) { DARABONBA_PTR_SET_VALUE(orderNum_, orderNum) };


      // orderStatus Field Functions 
      bool hasOrderStatus() const { return this->orderStatus_ != nullptr;};
      void deleteOrderStatus() { this->orderStatus_ = nullptr;};
      inline int32_t getOrderStatus() const { DARABONBA_PTR_GET_DEFAULT(orderStatus_, 0) };
      inline Data& setOrderStatus(int32_t orderStatus) { DARABONBA_PTR_SET_VALUE(orderStatus_, orderStatus) };


      // outOrderNum Field Functions 
      bool hasOutOrderNum() const { return this->outOrderNum_ != nullptr;};
      void deleteOutOrderNum() { this->outOrderNum_ = nullptr;};
      inline string getOutOrderNum() const { DARABONBA_PTR_GET_DEFAULT(outOrderNum_, "") };
      inline Data& setOutOrderNum(string outOrderNum) { DARABONBA_PTR_SET_VALUE(outOrderNum_, outOrderNum) };


      // passengerList Field Functions 
      bool hasPassengerList() const { return this->passengerList_ != nullptr;};
      void deletePassengerList() { this->passengerList_ = nullptr;};
      inline const vector<Data::PassengerList> & getPassengerList() const { DARABONBA_PTR_GET_CONST(passengerList_, vector<Data::PassengerList>) };
      inline vector<Data::PassengerList> getPassengerList() { DARABONBA_PTR_GET(passengerList_, vector<Data::PassengerList>) };
      inline Data& setPassengerList(const vector<Data::PassengerList> & passengerList) { DARABONBA_PTR_SET_VALUE(passengerList_, passengerList) };
      inline Data& setPassengerList(vector<Data::PassengerList> && passengerList) { DARABONBA_PTR_SET_RVALUE(passengerList_, passengerList) };


      // payStatus Field Functions 
      bool hasPayStatus() const { return this->payStatus_ != nullptr;};
      void deletePayStatus() { this->payStatus_ = nullptr;};
      inline int32_t getPayStatus() const { DARABONBA_PTR_GET_DEFAULT(payStatus_, 0) };
      inline Data& setPayStatus(int32_t payStatus) { DARABONBA_PTR_SET_VALUE(payStatus_, payStatus) };


      // payTime Field Functions 
      bool hasPayTime() const { return this->payTime_ != nullptr;};
      void deletePayTime() { this->payTime_ = nullptr;};
      inline int64_t getPayTime() const { DARABONBA_PTR_GET_DEFAULT(payTime_, 0L) };
      inline Data& setPayTime(int64_t payTime) { DARABONBA_PTR_SET_VALUE(payTime_, payTime) };


      // promotionPrice Field Functions 
      bool hasPromotionPrice() const { return this->promotionPrice_ != nullptr;};
      void deletePromotionPrice() { this->promotionPrice_ = nullptr;};
      inline double getPromotionPrice() const { DARABONBA_PTR_GET_DEFAULT(promotionPrice_, 0.0) };
      inline Data& setPromotionPrice(double promotionPrice) { DARABONBA_PTR_SET_VALUE(promotionPrice_, promotionPrice) };


      // realPayPrice Field Functions 
      bool hasRealPayPrice() const { return this->realPayPrice_ != nullptr;};
      void deleteRealPayPrice() { this->realPayPrice_ = nullptr;};
      inline double getRealPayPrice() const { DARABONBA_PTR_GET_DEFAULT(realPayPrice_, 0.0) };
      inline Data& setRealPayPrice(double realPayPrice) { DARABONBA_PTR_SET_VALUE(realPayPrice_, realPayPrice) };


      // refundChangeRuleMap Field Functions 
      bool hasRefundChangeRuleMap() const { return this->refundChangeRuleMap_ != nullptr;};
      void deleteRefundChangeRuleMap() { this->refundChangeRuleMap_ = nullptr;};
      inline const map<string, DataRefundChangeRuleMapValue> & getRefundChangeRuleMap() const { DARABONBA_PTR_GET_CONST(refundChangeRuleMap_, map<string, DataRefundChangeRuleMapValue>) };
      inline map<string, DataRefundChangeRuleMapValue> getRefundChangeRuleMap() { DARABONBA_PTR_GET(refundChangeRuleMap_, map<string, DataRefundChangeRuleMapValue>) };
      inline Data& setRefundChangeRuleMap(const map<string, DataRefundChangeRuleMapValue> & refundChangeRuleMap) { DARABONBA_PTR_SET_VALUE(refundChangeRuleMap_, refundChangeRuleMap) };
      inline Data& setRefundChangeRuleMap(map<string, DataRefundChangeRuleMapValue> && refundChangeRuleMap) { DARABONBA_PTR_SET_RVALUE(refundChangeRuleMap_, refundChangeRuleMap) };


      // sessionNick Field Functions 
      bool hasSessionNick() const { return this->sessionNick_ != nullptr;};
      void deleteSessionNick() { this->sessionNick_ = nullptr;};
      inline string getSessionNick() const { DARABONBA_PTR_GET_DEFAULT(sessionNick_, "") };
      inline Data& setSessionNick(string sessionNick) { DARABONBA_PTR_SET_VALUE(sessionNick_, sessionNick) };


      // solution Field Functions 
      bool hasSolution() const { return this->solution_ != nullptr;};
      void deleteSolution() { this->solution_ = nullptr;};
      inline const Data::Solution & getSolution() const { DARABONBA_PTR_GET_CONST(solution_, Data::Solution) };
      inline Data::Solution getSolution() { DARABONBA_PTR_GET(solution_, Data::Solution) };
      inline Data& setSolution(const Data::Solution & solution) { DARABONBA_PTR_SET_VALUE(solution_, solution) };
      inline Data& setSolution(Data::Solution && solution) { DARABONBA_PTR_SET_RVALUE(solution_, solution) };


      // succeedTime Field Functions 
      bool hasSucceedTime() const { return this->succeedTime_ != nullptr;};
      void deleteSucceedTime() { this->succeedTime_ = nullptr;};
      inline int64_t getSucceedTime() const { DARABONBA_PTR_GET_DEFAULT(succeedTime_, 0L) };
      inline Data& setSucceedTime(int64_t succeedTime) { DARABONBA_PTR_SET_VALUE(succeedTime_, succeedTime) };


      // totalPrice Field Functions 
      bool hasTotalPrice() const { return this->totalPrice_ != nullptr;};
      void deleteTotalPrice() { this->totalPrice_ = nullptr;};
      inline double getTotalPrice() const { DARABONBA_PTR_GET_DEFAULT(totalPrice_, 0.0) };
      inline Data& setTotalPrice(double totalPrice) { DARABONBA_PTR_SET_VALUE(totalPrice_, totalPrice) };


      // transactionNo Field Functions 
      bool hasTransactionNo() const { return this->transactionNo_ != nullptr;};
      void deleteTransactionNo() { this->transactionNo_ = nullptr;};
      inline string getTransactionNo() const { DARABONBA_PTR_GET_DEFAULT(transactionNo_, "") };
      inline Data& setTransactionNo(string transactionNo) { DARABONBA_PTR_SET_VALUE(transactionNo_, transactionNo) };


    protected:
      // The ancillary product fulfillment details.
      shared_ptr<vector<Data::AncillaryItemDetailList>> ancillaryItemDetailList_ {};
      // The mapping of passenger types to baggage rules.
      shared_ptr<map<string, DataBaggageAllowanceMapValue>> baggageAllowanceMap_ {};
      // The booking time (order creation time). The value is a 13-digit timestamp.
      shared_ptr<int64_t> bookTime_ {};
      // The flight ticket fulfillment details.
      shared_ptr<vector<Data::FlightItemDetailList>> flightItemDetailList_ {};
      // The order number.
      shared_ptr<int64_t> orderNum_ {};
      // The order status. Valid values:
      // - 1: Booking in progress.
      // - 2: Booking succeeded.
      // - 3: Order paid.
      // - 4: Order succeeded.
      // - 5: Order closed.
      shared_ptr<int32_t> orderStatus_ {};
      // The external order number.
      shared_ptr<string> outOrderNum_ {};
      // The passenger list.
      shared_ptr<vector<Data::PassengerList>> passengerList_ {};
      // The payment status. Valid values:
      // - 0: Initialized.
      // - 1: Created.
      // - 2: Payment succeeded.
      // - 4: Transaction closed.
      shared_ptr<int32_t> payStatus_ {};
      // The payment time. The value is a 13-digit timestamp.
      shared_ptr<int64_t> payTime_ {};
      // The discount amount. Unit: CNY.
      shared_ptr<double> promotionPrice_ {};
      // The actual payment amount. Unit: CNY.
      shared_ptr<double> realPayPrice_ {};
      // The mapping of passenger types to refund and change rules.
      shared_ptr<map<string, DataRefundChangeRuleMapValue>> refundChangeRuleMap_ {};
      // The buyer nickname.
      shared_ptr<string> sessionNick_ {};
      // The flight information.
      shared_ptr<Data::Solution> solution_ {};
      // The ticketing time. The value is a 13-digit timestamp. This parameter has a value only after ticketing is complete.
      shared_ptr<int64_t> succeedTime_ {};
      // The total order price. Unit: CNY.
      shared_ptr<double> totalPrice_ {};
      // The transaction number.
      shared_ptr<string> transactionNo_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->data_ == nullptr && this->errorCode_ == nullptr && this->errorData_ == nullptr && this->errorMsg_ == nullptr && this->status_ == nullptr
        && this->success_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline OrderDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const OrderDetailResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, OrderDetailResponseBody::Data) };
    inline OrderDetailResponseBody::Data getData() { DARABONBA_PTR_GET(data_, OrderDetailResponseBody::Data) };
    inline OrderDetailResponseBody& setData(const OrderDetailResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline OrderDetailResponseBody& setData(OrderDetailResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline OrderDetailResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorData Field Functions 
    bool hasErrorData() const { return this->errorData_ != nullptr;};
    void deleteErrorData() { this->errorData_ = nullptr;};
    inline     const Darabonba::Json & getErrorData() const { DARABONBA_GET(errorData_) };
    Darabonba::Json & getErrorData() { DARABONBA_GET(errorData_) };
    inline OrderDetailResponseBody& setErrorData(const Darabonba::Json & errorData) { DARABONBA_SET_VALUE(errorData_, errorData) };
    inline OrderDetailResponseBody& setErrorData(Darabonba::Json && errorData) { DARABONBA_SET_RVALUE(errorData_, errorData) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline OrderDetailResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline OrderDetailResponseBody& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline OrderDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The data returned for a successful request.
    shared_ptr<OrderDetailResponseBody::Data> data_ {};
    // The business error code.
    shared_ptr<string> errorCode_ {};
    // The data returned with the error.
    Darabonba::Json errorData_ {};
    // The error message.
    shared_ptr<string> errorMsg_ {};
    // The HTTP status code. The value is always 200 for successful requests.
    shared_ptr<int32_t> status_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
