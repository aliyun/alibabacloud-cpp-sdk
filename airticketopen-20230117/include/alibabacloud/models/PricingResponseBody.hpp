// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PRICINGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PRICINGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue.hpp>
#include <vector>
#include <alibabacloud/models/DataSolutionSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class PricingResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PricingResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(error_code, errorCode_);
      DARABONBA_ANY_TO_JSON(error_data, errorData_);
      DARABONBA_PTR_TO_JSON(error_msg, errorMsg_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, PricingResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(error_code, errorCode_);
      DARABONBA_ANY_FROM_JSON(error_data, errorData_);
      DARABONBA_PTR_FROM_JSON(error_msg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    PricingResponseBody() = default ;
    PricingResponseBody(const PricingResponseBody &) = default ;
    PricingResponseBody(PricingResponseBody &&) = default ;
    PricingResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PricingResponseBody() = default ;
    PricingResponseBody& operator=(const PricingResponseBody &) = default ;
    PricingResponseBody& operator=(PricingResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(changed_price_info, changedPriceInfo_);
        DARABONBA_PTR_TO_JSON(is_changed, isChanged_);
        DARABONBA_PTR_TO_JSON(original_price_info, originalPriceInfo_);
        DARABONBA_PTR_TO_JSON(remain_seats, remainSeats_);
        DARABONBA_PTR_TO_JSON(solution, solution_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(changed_price_info, changedPriceInfo_);
        DARABONBA_PTR_FROM_JSON(is_changed, isChanged_);
        DARABONBA_PTR_FROM_JSON(original_price_info, originalPriceInfo_);
        DARABONBA_PTR_FROM_JSON(remain_seats, remainSeats_);
        DARABONBA_PTR_FROM_JSON(solution, solution_);
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
          // The mapping between passenger types and refund and change rules.
          shared_ptr<map<string, DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue>> refundChangeRuleMap_ {};
          // The list of segment IDs that share the same refund and change rule.
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
          // The mapping between passenger types and free baggage allowances.
          shared_ptr<map<string, DataSolutionSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue>> passengerBaggageAllowanceMapping_ {};
          // The list of segment IDs that share the same free baggage allowance rule.
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
          // The baggage through-check rule type. Valid values: 1: baggage is checked through between segments. 2: baggage must be rechecked between segments. 3: baggage is checked through at stopover cities. 4: baggage must be rechecked at stopover cities.
          shared_ptr<int32_t> luggageDirectInfoType_ {};
          // The list of segment IDs that share the same baggage through-check rule.
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
            // The cabin code.
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
            // The flight duration in minutes.
            shared_ptr<int32_t> flightDuration_ {};
            // The marketing airline code (for example, KA).
            shared_ptr<string> marketingAirline_ {};
            // The marketing flight number (for example, KA5809).
            shared_ptr<string> marketingFlightNo_ {};
            // The numeric marketing flight number (for example, 5809).
            shared_ptr<int32_t> marketingFlightNoInt_ {};
            // The operating airline code (for example, CX).
            shared_ptr<string> operatingAirline_ {};
            // The operating flight number (for example, CX601).
            shared_ptr<string> operatingFlightNo_ {};
            // The segment ID in the format: flight number + departure airport + arrival airport + departure date (MMdd).
            shared_ptr<string> segmentId_ {};
            // The list of stopover cities. This field has a value when stopQuantity is greater than 0. Multiple cities are separated by commas.
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
        // The unit price per adult.
        shared_ptr<double> adultPrice_ {};
        // The tax per adult.
        shared_ptr<double> adultTax_ {};
        // The unit price per child.
        shared_ptr<double> childPrice_ {};
        // The tax per child.
        shared_ptr<double> childTax_ {};
        // The unit price per infant.
        shared_ptr<double> infantPrice_ {};
        // The tax per infant.
        shared_ptr<double> infantTax_ {};
        // The journey list.
        shared_ptr<vector<Solution::JourneyList>> journeyList_ {};
        // The baggage through-check rules.
        shared_ptr<vector<Solution::SegmentBaggageCheckInInfoList>> segmentBaggageCheckInInfoList_ {};
        // The free baggage allowance rules.
        shared_ptr<vector<Solution::SegmentBaggageMappingList>> segmentBaggageMappingList_ {};
        // The refund and change rules.
        shared_ptr<vector<Solution::SegmentRefundChangeRuleMappingList>> segmentRefundChangeRuleMappingList_ {};
        shared_ptr<Solution::SolutionAttribute> solutionAttribute_ {};
        // solution_id
        shared_ptr<string> solutionId_ {};
      };

      class OriginalPriceInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OriginalPriceInfo& obj) { 
          DARABONBA_PTR_TO_JSON(adult_price, adultPrice_);
          DARABONBA_PTR_TO_JSON(adult_tax, adultTax_);
          DARABONBA_PTR_TO_JSON(child_price, childPrice_);
          DARABONBA_PTR_TO_JSON(child_tax, childTax_);
          DARABONBA_PTR_TO_JSON(infant_price, infantPrice_);
          DARABONBA_PTR_TO_JSON(infant_tax, infantTax_);
        };
        friend void from_json(const Darabonba::Json& j, OriginalPriceInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(adult_price, adultPrice_);
          DARABONBA_PTR_FROM_JSON(adult_tax, adultTax_);
          DARABONBA_PTR_FROM_JSON(child_price, childPrice_);
          DARABONBA_PTR_FROM_JSON(child_tax, childTax_);
          DARABONBA_PTR_FROM_JSON(infant_price, infantPrice_);
          DARABONBA_PTR_FROM_JSON(infant_tax, infantTax_);
        };
        OriginalPriceInfo() = default ;
        OriginalPriceInfo(const OriginalPriceInfo &) = default ;
        OriginalPriceInfo(OriginalPriceInfo &&) = default ;
        OriginalPriceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OriginalPriceInfo() = default ;
        OriginalPriceInfo& operator=(const OriginalPriceInfo &) = default ;
        OriginalPriceInfo& operator=(OriginalPriceInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->adultPrice_ == nullptr
        && this->adultTax_ == nullptr && this->childPrice_ == nullptr && this->childTax_ == nullptr && this->infantPrice_ == nullptr && this->infantTax_ == nullptr; };
        // adultPrice Field Functions 
        bool hasAdultPrice() const { return this->adultPrice_ != nullptr;};
        void deleteAdultPrice() { this->adultPrice_ = nullptr;};
        inline double getAdultPrice() const { DARABONBA_PTR_GET_DEFAULT(adultPrice_, 0.0) };
        inline OriginalPriceInfo& setAdultPrice(double adultPrice) { DARABONBA_PTR_SET_VALUE(adultPrice_, adultPrice) };


        // adultTax Field Functions 
        bool hasAdultTax() const { return this->adultTax_ != nullptr;};
        void deleteAdultTax() { this->adultTax_ = nullptr;};
        inline double getAdultTax() const { DARABONBA_PTR_GET_DEFAULT(adultTax_, 0.0) };
        inline OriginalPriceInfo& setAdultTax(double adultTax) { DARABONBA_PTR_SET_VALUE(adultTax_, adultTax) };


        // childPrice Field Functions 
        bool hasChildPrice() const { return this->childPrice_ != nullptr;};
        void deleteChildPrice() { this->childPrice_ = nullptr;};
        inline double getChildPrice() const { DARABONBA_PTR_GET_DEFAULT(childPrice_, 0.0) };
        inline OriginalPriceInfo& setChildPrice(double childPrice) { DARABONBA_PTR_SET_VALUE(childPrice_, childPrice) };


        // childTax Field Functions 
        bool hasChildTax() const { return this->childTax_ != nullptr;};
        void deleteChildTax() { this->childTax_ = nullptr;};
        inline double getChildTax() const { DARABONBA_PTR_GET_DEFAULT(childTax_, 0.0) };
        inline OriginalPriceInfo& setChildTax(double childTax) { DARABONBA_PTR_SET_VALUE(childTax_, childTax) };


        // infantPrice Field Functions 
        bool hasInfantPrice() const { return this->infantPrice_ != nullptr;};
        void deleteInfantPrice() { this->infantPrice_ = nullptr;};
        inline double getInfantPrice() const { DARABONBA_PTR_GET_DEFAULT(infantPrice_, 0.0) };
        inline OriginalPriceInfo& setInfantPrice(double infantPrice) { DARABONBA_PTR_SET_VALUE(infantPrice_, infantPrice) };


        // infantTax Field Functions 
        bool hasInfantTax() const { return this->infantTax_ != nullptr;};
        void deleteInfantTax() { this->infantTax_ = nullptr;};
        inline double getInfantTax() const { DARABONBA_PTR_GET_DEFAULT(infantTax_, 0.0) };
        inline OriginalPriceInfo& setInfantTax(double infantTax) { DARABONBA_PTR_SET_VALUE(infantTax_, infantTax) };


      protected:
        // The unit price per adult.
        shared_ptr<double> adultPrice_ {};
        // The tax per adult.
        shared_ptr<double> adultTax_ {};
        // The unit price per child.
        shared_ptr<double> childPrice_ {};
        // The tax per child.
        shared_ptr<double> childTax_ {};
        // The unit price per infant.
        shared_ptr<double> infantPrice_ {};
        // The tax per infant.
        shared_ptr<double> infantTax_ {};
      };

      class ChangedPriceInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ChangedPriceInfo& obj) { 
          DARABONBA_PTR_TO_JSON(adult_price, adultPrice_);
          DARABONBA_PTR_TO_JSON(adult_tax, adultTax_);
          DARABONBA_PTR_TO_JSON(child_price, childPrice_);
          DARABONBA_PTR_TO_JSON(child_tax, childTax_);
          DARABONBA_PTR_TO_JSON(infant_price, infantPrice_);
          DARABONBA_PTR_TO_JSON(infant_tax, infantTax_);
        };
        friend void from_json(const Darabonba::Json& j, ChangedPriceInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(adult_price, adultPrice_);
          DARABONBA_PTR_FROM_JSON(adult_tax, adultTax_);
          DARABONBA_PTR_FROM_JSON(child_price, childPrice_);
          DARABONBA_PTR_FROM_JSON(child_tax, childTax_);
          DARABONBA_PTR_FROM_JSON(infant_price, infantPrice_);
          DARABONBA_PTR_FROM_JSON(infant_tax, infantTax_);
        };
        ChangedPriceInfo() = default ;
        ChangedPriceInfo(const ChangedPriceInfo &) = default ;
        ChangedPriceInfo(ChangedPriceInfo &&) = default ;
        ChangedPriceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ChangedPriceInfo() = default ;
        ChangedPriceInfo& operator=(const ChangedPriceInfo &) = default ;
        ChangedPriceInfo& operator=(ChangedPriceInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->adultPrice_ == nullptr
        && this->adultTax_ == nullptr && this->childPrice_ == nullptr && this->childTax_ == nullptr && this->infantPrice_ == nullptr && this->infantTax_ == nullptr; };
        // adultPrice Field Functions 
        bool hasAdultPrice() const { return this->adultPrice_ != nullptr;};
        void deleteAdultPrice() { this->adultPrice_ = nullptr;};
        inline double getAdultPrice() const { DARABONBA_PTR_GET_DEFAULT(adultPrice_, 0.0) };
        inline ChangedPriceInfo& setAdultPrice(double adultPrice) { DARABONBA_PTR_SET_VALUE(adultPrice_, adultPrice) };


        // adultTax Field Functions 
        bool hasAdultTax() const { return this->adultTax_ != nullptr;};
        void deleteAdultTax() { this->adultTax_ = nullptr;};
        inline double getAdultTax() const { DARABONBA_PTR_GET_DEFAULT(adultTax_, 0.0) };
        inline ChangedPriceInfo& setAdultTax(double adultTax) { DARABONBA_PTR_SET_VALUE(adultTax_, adultTax) };


        // childPrice Field Functions 
        bool hasChildPrice() const { return this->childPrice_ != nullptr;};
        void deleteChildPrice() { this->childPrice_ = nullptr;};
        inline double getChildPrice() const { DARABONBA_PTR_GET_DEFAULT(childPrice_, 0.0) };
        inline ChangedPriceInfo& setChildPrice(double childPrice) { DARABONBA_PTR_SET_VALUE(childPrice_, childPrice) };


        // childTax Field Functions 
        bool hasChildTax() const { return this->childTax_ != nullptr;};
        void deleteChildTax() { this->childTax_ = nullptr;};
        inline double getChildTax() const { DARABONBA_PTR_GET_DEFAULT(childTax_, 0.0) };
        inline ChangedPriceInfo& setChildTax(double childTax) { DARABONBA_PTR_SET_VALUE(childTax_, childTax) };


        // infantPrice Field Functions 
        bool hasInfantPrice() const { return this->infantPrice_ != nullptr;};
        void deleteInfantPrice() { this->infantPrice_ = nullptr;};
        inline double getInfantPrice() const { DARABONBA_PTR_GET_DEFAULT(infantPrice_, 0.0) };
        inline ChangedPriceInfo& setInfantPrice(double infantPrice) { DARABONBA_PTR_SET_VALUE(infantPrice_, infantPrice) };


        // infantTax Field Functions 
        bool hasInfantTax() const { return this->infantTax_ != nullptr;};
        void deleteInfantTax() { this->infantTax_ = nullptr;};
        inline double getInfantTax() const { DARABONBA_PTR_GET_DEFAULT(infantTax_, 0.0) };
        inline ChangedPriceInfo& setInfantTax(double infantTax) { DARABONBA_PTR_SET_VALUE(infantTax_, infantTax) };


      protected:
        // The unit price per adult.
        shared_ptr<double> adultPrice_ {};
        // The tax per adult.
        shared_ptr<double> adultTax_ {};
        // The unit price per child.
        shared_ptr<double> childPrice_ {};
        // The tax per child.
        shared_ptr<double> childTax_ {};
        // The unit price per infant.
        shared_ptr<double> infantPrice_ {};
        // The tax per infant.
        shared_ptr<double> infantTax_ {};
      };

      virtual bool empty() const override { return this->changedPriceInfo_ == nullptr
        && this->isChanged_ == nullptr && this->originalPriceInfo_ == nullptr && this->remainSeats_ == nullptr && this->solution_ == nullptr; };
      // changedPriceInfo Field Functions 
      bool hasChangedPriceInfo() const { return this->changedPriceInfo_ != nullptr;};
      void deleteChangedPriceInfo() { this->changedPriceInfo_ = nullptr;};
      inline const Data::ChangedPriceInfo & getChangedPriceInfo() const { DARABONBA_PTR_GET_CONST(changedPriceInfo_, Data::ChangedPriceInfo) };
      inline Data::ChangedPriceInfo getChangedPriceInfo() { DARABONBA_PTR_GET(changedPriceInfo_, Data::ChangedPriceInfo) };
      inline Data& setChangedPriceInfo(const Data::ChangedPriceInfo & changedPriceInfo) { DARABONBA_PTR_SET_VALUE(changedPriceInfo_, changedPriceInfo) };
      inline Data& setChangedPriceInfo(Data::ChangedPriceInfo && changedPriceInfo) { DARABONBA_PTR_SET_RVALUE(changedPriceInfo_, changedPriceInfo) };


      // isChanged Field Functions 
      bool hasIsChanged() const { return this->isChanged_ != nullptr;};
      void deleteIsChanged() { this->isChanged_ = nullptr;};
      inline bool getIsChanged() const { DARABONBA_PTR_GET_DEFAULT(isChanged_, false) };
      inline Data& setIsChanged(bool isChanged) { DARABONBA_PTR_SET_VALUE(isChanged_, isChanged) };


      // originalPriceInfo Field Functions 
      bool hasOriginalPriceInfo() const { return this->originalPriceInfo_ != nullptr;};
      void deleteOriginalPriceInfo() { this->originalPriceInfo_ = nullptr;};
      inline const Data::OriginalPriceInfo & getOriginalPriceInfo() const { DARABONBA_PTR_GET_CONST(originalPriceInfo_, Data::OriginalPriceInfo) };
      inline Data::OriginalPriceInfo getOriginalPriceInfo() { DARABONBA_PTR_GET(originalPriceInfo_, Data::OriginalPriceInfo) };
      inline Data& setOriginalPriceInfo(const Data::OriginalPriceInfo & originalPriceInfo) { DARABONBA_PTR_SET_VALUE(originalPriceInfo_, originalPriceInfo) };
      inline Data& setOriginalPriceInfo(Data::OriginalPriceInfo && originalPriceInfo) { DARABONBA_PTR_SET_RVALUE(originalPriceInfo_, originalPriceInfo) };


      // remainSeats Field Functions 
      bool hasRemainSeats() const { return this->remainSeats_ != nullptr;};
      void deleteRemainSeats() { this->remainSeats_ = nullptr;};
      inline string getRemainSeats() const { DARABONBA_PTR_GET_DEFAULT(remainSeats_, "") };
      inline Data& setRemainSeats(string remainSeats) { DARABONBA_PTR_SET_VALUE(remainSeats_, remainSeats) };


      // solution Field Functions 
      bool hasSolution() const { return this->solution_ != nullptr;};
      void deleteSolution() { this->solution_ = nullptr;};
      inline const Data::Solution & getSolution() const { DARABONBA_PTR_GET_CONST(solution_, Data::Solution) };
      inline Data::Solution getSolution() { DARABONBA_PTR_GET(solution_, Data::Solution) };
      inline Data& setSolution(const Data::Solution & solution) { DARABONBA_PTR_SET_VALUE(solution_, solution) };
      inline Data& setSolution(Data::Solution && solution) { DARABONBA_PTR_SET_RVALUE(solution_, solution) };


    protected:
      // The price information after the price change.
      shared_ptr<Data::ChangedPriceInfo> changedPriceInfo_ {};
      // Indicates whether the price has changed.
      shared_ptr<bool> isChanged_ {};
      // The price information before the price change. This field has a value only when isChanged is true.
      shared_ptr<Data::OriginalPriceInfo> originalPriceInfo_ {};
      // The number of remaining seats. A indicates more than 9. Values 0 through 9 represent the exact number.
      shared_ptr<string> remainSeats_ {};
      // solution
      shared_ptr<Data::Solution> solution_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->data_ == nullptr && this->errorCode_ == nullptr && this->errorData_ == nullptr && this->errorMsg_ == nullptr && this->status_ == nullptr
        && this->success_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PricingResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const PricingResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, PricingResponseBody::Data) };
    inline PricingResponseBody::Data getData() { DARABONBA_PTR_GET(data_, PricingResponseBody::Data) };
    inline PricingResponseBody& setData(const PricingResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline PricingResponseBody& setData(PricingResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline PricingResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorData Field Functions 
    bool hasErrorData() const { return this->errorData_ != nullptr;};
    void deleteErrorData() { this->errorData_ = nullptr;};
    inline     const Darabonba::Json & getErrorData() const { DARABONBA_GET(errorData_) };
    Darabonba::Json & getErrorData() { DARABONBA_GET(errorData_) };
    inline PricingResponseBody& setErrorData(const Darabonba::Json & errorData) { DARABONBA_SET_VALUE(errorData_, errorData) };
    inline PricingResponseBody& setErrorData(Darabonba::Json && errorData) { DARABONBA_SET_RVALUE(errorData_, errorData) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline PricingResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline PricingResponseBody& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline PricingResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The data returned for a successful request.
    shared_ptr<PricingResponseBody::Data> data_ {};
    // The business error code.
    shared_ptr<string> errorCode_ {};
    // The data returned with the error.
    Darabonba::Json errorData_ {};
    // The error message.
    shared_ptr<string> errorMsg_ {};
    // The HTTP status code. The value is always 200 for successful HTTP requests.
    shared_ptr<int32_t> status_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
