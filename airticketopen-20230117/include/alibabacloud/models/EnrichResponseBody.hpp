// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENRICHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ENRICHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue.hpp>
#include <vector>
#include <alibabacloud/models/DataSolutionListSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class EnrichResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnrichResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(error_code, errorCode_);
      DARABONBA_ANY_TO_JSON(error_data, errorData_);
      DARABONBA_PTR_TO_JSON(error_msg, errorMsg_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, EnrichResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(error_code, errorCode_);
      DARABONBA_ANY_FROM_JSON(error_data, errorData_);
      DARABONBA_PTR_FROM_JSON(error_msg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    EnrichResponseBody() = default ;
    EnrichResponseBody(const EnrichResponseBody &) = default ;
    EnrichResponseBody(EnrichResponseBody &&) = default ;
    EnrichResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnrichResponseBody() = default ;
    EnrichResponseBody& operator=(const EnrichResponseBody &) = default ;
    EnrichResponseBody& operator=(EnrichResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(solution_list, solutionList_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(solution_list, solutionList_);
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
      class SolutionList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SolutionList& obj) { 
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
        friend void from_json(const Darabonba::Json& j, SolutionList& obj) { 
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
        SolutionList() = default ;
        SolutionList(const SolutionList &) = default ;
        SolutionList(SolutionList &&) = default ;
        SolutionList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SolutionList() = default ;
        SolutionList& operator=(const SolutionList &) = default ;
        SolutionList& operator=(SolutionList &&) = default ;
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
          // Supply source type 1: self-operated; 2: agent; 3: flagship store
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
          inline const map<string, DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue> & getRefundChangeRuleMap() const { DARABONBA_PTR_GET_CONST(refundChangeRuleMap_, map<string, DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue>) };
          inline map<string, DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue> getRefundChangeRuleMap() { DARABONBA_PTR_GET(refundChangeRuleMap_, map<string, DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue>) };
          inline SegmentRefundChangeRuleMappingList& setRefundChangeRuleMap(const map<string, DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue> & refundChangeRuleMap) { DARABONBA_PTR_SET_VALUE(refundChangeRuleMap_, refundChangeRuleMap) };
          inline SegmentRefundChangeRuleMappingList& setRefundChangeRuleMap(map<string, DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue> && refundChangeRuleMap) { DARABONBA_PTR_SET_RVALUE(refundChangeRuleMap_, refundChangeRuleMap) };


          // segmentIdList Field Functions 
          bool hasSegmentIdList() const { return this->segmentIdList_ != nullptr;};
          void deleteSegmentIdList() { this->segmentIdList_ = nullptr;};
          inline const vector<string> & getSegmentIdList() const { DARABONBA_PTR_GET_CONST(segmentIdList_, vector<string>) };
          inline vector<string> getSegmentIdList() { DARABONBA_PTR_GET(segmentIdList_, vector<string>) };
          inline SegmentRefundChangeRuleMappingList& setSegmentIdList(const vector<string> & segmentIdList) { DARABONBA_PTR_SET_VALUE(segmentIdList_, segmentIdList) };
          inline SegmentRefundChangeRuleMappingList& setSegmentIdList(vector<string> && segmentIdList) { DARABONBA_PTR_SET_RVALUE(segmentIdList_, segmentIdList) };


        protected:
          // Passenger type to refund and change rules mapping
          shared_ptr<map<string, DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue>> refundChangeRuleMap_ {};
          // Segment ID list. These segment IDs share the same refund and change rules
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
          inline const map<string, DataSolutionListSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue> & getPassengerBaggageAllowanceMapping() const { DARABONBA_PTR_GET_CONST(passengerBaggageAllowanceMapping_, map<string, DataSolutionListSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue>) };
          inline map<string, DataSolutionListSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue> getPassengerBaggageAllowanceMapping() { DARABONBA_PTR_GET(passengerBaggageAllowanceMapping_, map<string, DataSolutionListSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue>) };
          inline SegmentBaggageMappingList& setPassengerBaggageAllowanceMapping(const map<string, DataSolutionListSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue> & passengerBaggageAllowanceMapping) { DARABONBA_PTR_SET_VALUE(passengerBaggageAllowanceMapping_, passengerBaggageAllowanceMapping) };
          inline SegmentBaggageMappingList& setPassengerBaggageAllowanceMapping(map<string, DataSolutionListSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue> && passengerBaggageAllowanceMapping) { DARABONBA_PTR_SET_RVALUE(passengerBaggageAllowanceMapping_, passengerBaggageAllowanceMapping) };


          // segmentIdList Field Functions 
          bool hasSegmentIdList() const { return this->segmentIdList_ != nullptr;};
          void deleteSegmentIdList() { this->segmentIdList_ = nullptr;};
          inline const vector<string> & getSegmentIdList() const { DARABONBA_PTR_GET_CONST(segmentIdList_, vector<string>) };
          inline vector<string> getSegmentIdList() { DARABONBA_PTR_GET(segmentIdList_, vector<string>) };
          inline SegmentBaggageMappingList& setSegmentIdList(const vector<string> & segmentIdList) { DARABONBA_PTR_SET_VALUE(segmentIdList_, segmentIdList) };
          inline SegmentBaggageMappingList& setSegmentIdList(vector<string> && segmentIdList) { DARABONBA_PTR_SET_RVALUE(segmentIdList_, segmentIdList) };


        protected:
          // Passenger type to free baggage allowance mapping
          shared_ptr<map<string, DataSolutionListSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue>> passengerBaggageAllowanceMapping_ {};
          // Segment ID list. These segment IDs share the same free baggage allowance rules
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
          // Baggage through-check rule type 1: baggage through-checked between segments; 2: baggage re-checked between segments; 3: baggage through-checked at stopover city; 4: baggage re-checked at stopover city
          shared_ptr<int32_t> luggageDirectInfoType_ {};
          // Segment ID list. These segment IDs share the same baggage through-check rules
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
            // Flight arrival airport code (3-letter uppercase)
            shared_ptr<string> arrivalAirport_ {};
            // Flight arrival city code (3-letter uppercase)
            shared_ptr<string> arrivalCity_ {};
            // Flight arrival terminal
            shared_ptr<string> arrivalTerminal_ {};
            // Flight arrival date and time, string format (yyyy-MM-dd HH:mm:ss)
            shared_ptr<string> arrivalTime_ {};
            // Remaining seats. Value range: 1,2,3,4,5,6,7,8,9,A; A indicates more than 9 remaining seats.
            shared_ptr<string> availability_ {};
            // Booking class
            shared_ptr<string> cabin_ {};
            // Cabin class
            shared_ptr<string> cabinClass_ {};
            // Whether it is a codeshare flight
            shared_ptr<bool> codeShare_ {};
            // Flight departure airport code (3-letter uppercase)
            shared_ptr<string> departureAirport_ {};
            // Flight departure city code (3-letter uppercase)
            shared_ptr<string> departureCity_ {};
            // Flight departure terminal
            shared_ptr<string> departureTerminal_ {};
            // Flight departure date and time, string format (yyyy-MM-dd HH:mm:ss)
            shared_ptr<string> departureTime_ {};
            // Aircraft type
            shared_ptr<string> equipType_ {};
            // Flight duration, unit: minutes
            shared_ptr<int32_t> flightDuration_ {};
            // Marketing carrier airline (e.g., KA)
            shared_ptr<string> marketingAirline_ {};
            // Marketing carrier flight number (e.g., KA5809)
            shared_ptr<string> marketingFlightNo_ {};
            // Marketing carrier numeric flight number (e.g., 5809)
            shared_ptr<int32_t> marketingFlightNoInt_ {};
            // Operating carrier airline (e.g., CX)
            shared_ptr<string> operatingAirline_ {};
            // Operating carrier flight number (e.g., CX601)
            shared_ptr<string> operatingFlightNo_ {};
            // Segment ID format: flight number + departure airport + arrival airport + departure date (MMdd)
            shared_ptr<string> segmentId_ {};
            // Stopover city list, has value when stopQuantity > 0, multiple values separated by commas
            shared_ptr<string> stopCityList_ {};
            // Number of stopover cities
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
          // Segment information
          shared_ptr<vector<JourneyList::SegmentList>> segmentList_ {};
          // Number of transfers
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
        inline SolutionList& setAdultPrice(double adultPrice) { DARABONBA_PTR_SET_VALUE(adultPrice_, adultPrice) };


        // adultTax Field Functions 
        bool hasAdultTax() const { return this->adultTax_ != nullptr;};
        void deleteAdultTax() { this->adultTax_ = nullptr;};
        inline double getAdultTax() const { DARABONBA_PTR_GET_DEFAULT(adultTax_, 0.0) };
        inline SolutionList& setAdultTax(double adultTax) { DARABONBA_PTR_SET_VALUE(adultTax_, adultTax) };


        // childPrice Field Functions 
        bool hasChildPrice() const { return this->childPrice_ != nullptr;};
        void deleteChildPrice() { this->childPrice_ = nullptr;};
        inline double getChildPrice() const { DARABONBA_PTR_GET_DEFAULT(childPrice_, 0.0) };
        inline SolutionList& setChildPrice(double childPrice) { DARABONBA_PTR_SET_VALUE(childPrice_, childPrice) };


        // childTax Field Functions 
        bool hasChildTax() const { return this->childTax_ != nullptr;};
        void deleteChildTax() { this->childTax_ = nullptr;};
        inline double getChildTax() const { DARABONBA_PTR_GET_DEFAULT(childTax_, 0.0) };
        inline SolutionList& setChildTax(double childTax) { DARABONBA_PTR_SET_VALUE(childTax_, childTax) };


        // infantPrice Field Functions 
        bool hasInfantPrice() const { return this->infantPrice_ != nullptr;};
        void deleteInfantPrice() { this->infantPrice_ = nullptr;};
        inline double getInfantPrice() const { DARABONBA_PTR_GET_DEFAULT(infantPrice_, 0.0) };
        inline SolutionList& setInfantPrice(double infantPrice) { DARABONBA_PTR_SET_VALUE(infantPrice_, infantPrice) };


        // infantTax Field Functions 
        bool hasInfantTax() const { return this->infantTax_ != nullptr;};
        void deleteInfantTax() { this->infantTax_ = nullptr;};
        inline double getInfantTax() const { DARABONBA_PTR_GET_DEFAULT(infantTax_, 0.0) };
        inline SolutionList& setInfantTax(double infantTax) { DARABONBA_PTR_SET_VALUE(infantTax_, infantTax) };


        // journeyList Field Functions 
        bool hasJourneyList() const { return this->journeyList_ != nullptr;};
        void deleteJourneyList() { this->journeyList_ = nullptr;};
        inline const vector<SolutionList::JourneyList> & getJourneyList() const { DARABONBA_PTR_GET_CONST(journeyList_, vector<SolutionList::JourneyList>) };
        inline vector<SolutionList::JourneyList> getJourneyList() { DARABONBA_PTR_GET(journeyList_, vector<SolutionList::JourneyList>) };
        inline SolutionList& setJourneyList(const vector<SolutionList::JourneyList> & journeyList) { DARABONBA_PTR_SET_VALUE(journeyList_, journeyList) };
        inline SolutionList& setJourneyList(vector<SolutionList::JourneyList> && journeyList) { DARABONBA_PTR_SET_RVALUE(journeyList_, journeyList) };


        // segmentBaggageCheckInInfoList Field Functions 
        bool hasSegmentBaggageCheckInInfoList() const { return this->segmentBaggageCheckInInfoList_ != nullptr;};
        void deleteSegmentBaggageCheckInInfoList() { this->segmentBaggageCheckInInfoList_ = nullptr;};
        inline const vector<SolutionList::SegmentBaggageCheckInInfoList> & getSegmentBaggageCheckInInfoList() const { DARABONBA_PTR_GET_CONST(segmentBaggageCheckInInfoList_, vector<SolutionList::SegmentBaggageCheckInInfoList>) };
        inline vector<SolutionList::SegmentBaggageCheckInInfoList> getSegmentBaggageCheckInInfoList() { DARABONBA_PTR_GET(segmentBaggageCheckInInfoList_, vector<SolutionList::SegmentBaggageCheckInInfoList>) };
        inline SolutionList& setSegmentBaggageCheckInInfoList(const vector<SolutionList::SegmentBaggageCheckInInfoList> & segmentBaggageCheckInInfoList) { DARABONBA_PTR_SET_VALUE(segmentBaggageCheckInInfoList_, segmentBaggageCheckInInfoList) };
        inline SolutionList& setSegmentBaggageCheckInInfoList(vector<SolutionList::SegmentBaggageCheckInInfoList> && segmentBaggageCheckInInfoList) { DARABONBA_PTR_SET_RVALUE(segmentBaggageCheckInInfoList_, segmentBaggageCheckInInfoList) };


        // segmentBaggageMappingList Field Functions 
        bool hasSegmentBaggageMappingList() const { return this->segmentBaggageMappingList_ != nullptr;};
        void deleteSegmentBaggageMappingList() { this->segmentBaggageMappingList_ = nullptr;};
        inline const vector<SolutionList::SegmentBaggageMappingList> & getSegmentBaggageMappingList() const { DARABONBA_PTR_GET_CONST(segmentBaggageMappingList_, vector<SolutionList::SegmentBaggageMappingList>) };
        inline vector<SolutionList::SegmentBaggageMappingList> getSegmentBaggageMappingList() { DARABONBA_PTR_GET(segmentBaggageMappingList_, vector<SolutionList::SegmentBaggageMappingList>) };
        inline SolutionList& setSegmentBaggageMappingList(const vector<SolutionList::SegmentBaggageMappingList> & segmentBaggageMappingList) { DARABONBA_PTR_SET_VALUE(segmentBaggageMappingList_, segmentBaggageMappingList) };
        inline SolutionList& setSegmentBaggageMappingList(vector<SolutionList::SegmentBaggageMappingList> && segmentBaggageMappingList) { DARABONBA_PTR_SET_RVALUE(segmentBaggageMappingList_, segmentBaggageMappingList) };


        // segmentRefundChangeRuleMappingList Field Functions 
        bool hasSegmentRefundChangeRuleMappingList() const { return this->segmentRefundChangeRuleMappingList_ != nullptr;};
        void deleteSegmentRefundChangeRuleMappingList() { this->segmentRefundChangeRuleMappingList_ = nullptr;};
        inline const vector<SolutionList::SegmentRefundChangeRuleMappingList> & getSegmentRefundChangeRuleMappingList() const { DARABONBA_PTR_GET_CONST(segmentRefundChangeRuleMappingList_, vector<SolutionList::SegmentRefundChangeRuleMappingList>) };
        inline vector<SolutionList::SegmentRefundChangeRuleMappingList> getSegmentRefundChangeRuleMappingList() { DARABONBA_PTR_GET(segmentRefundChangeRuleMappingList_, vector<SolutionList::SegmentRefundChangeRuleMappingList>) };
        inline SolutionList& setSegmentRefundChangeRuleMappingList(const vector<SolutionList::SegmentRefundChangeRuleMappingList> & segmentRefundChangeRuleMappingList) { DARABONBA_PTR_SET_VALUE(segmentRefundChangeRuleMappingList_, segmentRefundChangeRuleMappingList) };
        inline SolutionList& setSegmentRefundChangeRuleMappingList(vector<SolutionList::SegmentRefundChangeRuleMappingList> && segmentRefundChangeRuleMappingList) { DARABONBA_PTR_SET_RVALUE(segmentRefundChangeRuleMappingList_, segmentRefundChangeRuleMappingList) };


        // solutionAttribute Field Functions 
        bool hasSolutionAttribute() const { return this->solutionAttribute_ != nullptr;};
        void deleteSolutionAttribute() { this->solutionAttribute_ = nullptr;};
        inline const SolutionList::SolutionAttribute & getSolutionAttribute() const { DARABONBA_PTR_GET_CONST(solutionAttribute_, SolutionList::SolutionAttribute) };
        inline SolutionList::SolutionAttribute getSolutionAttribute() { DARABONBA_PTR_GET(solutionAttribute_, SolutionList::SolutionAttribute) };
        inline SolutionList& setSolutionAttribute(const SolutionList::SolutionAttribute & solutionAttribute) { DARABONBA_PTR_SET_VALUE(solutionAttribute_, solutionAttribute) };
        inline SolutionList& setSolutionAttribute(SolutionList::SolutionAttribute && solutionAttribute) { DARABONBA_PTR_SET_RVALUE(solutionAttribute_, solutionAttribute) };


        // solutionId Field Functions 
        bool hasSolutionId() const { return this->solutionId_ != nullptr;};
        void deleteSolutionId() { this->solutionId_ = nullptr;};
        inline string getSolutionId() const { DARABONBA_PTR_GET_DEFAULT(solutionId_, "") };
        inline SolutionList& setSolutionId(string solutionId) { DARABONBA_PTR_SET_VALUE(solutionId_, solutionId) };


      protected:
        // Adult unit price
        shared_ptr<double> adultPrice_ {};
        // Adult tax
        shared_ptr<double> adultTax_ {};
        // Child unit price
        shared_ptr<double> childPrice_ {};
        // Child tax
        shared_ptr<double> childTax_ {};
        // Infant unit price
        shared_ptr<double> infantPrice_ {};
        // Infant tax
        shared_ptr<double> infantTax_ {};
        // Journey
        shared_ptr<vector<SolutionList::JourneyList>> journeyList_ {};
        // Baggage through-check rules
        shared_ptr<vector<SolutionList::SegmentBaggageCheckInInfoList>> segmentBaggageCheckInInfoList_ {};
        // Free baggage allowance rules
        shared_ptr<vector<SolutionList::SegmentBaggageMappingList>> segmentBaggageMappingList_ {};
        // Refund and change rules
        shared_ptr<vector<SolutionList::SegmentRefundChangeRuleMappingList>> segmentRefundChangeRuleMappingList_ {};
        // Quote attributes
        shared_ptr<SolutionList::SolutionAttribute> solutionAttribute_ {};
        // solution_id
        shared_ptr<string> solutionId_ {};
      };

      virtual bool empty() const override { return this->solutionList_ == nullptr; };
      // solutionList Field Functions 
      bool hasSolutionList() const { return this->solutionList_ != nullptr;};
      void deleteSolutionList() { this->solutionList_ = nullptr;};
      inline const vector<Data::SolutionList> & getSolutionList() const { DARABONBA_PTR_GET_CONST(solutionList_, vector<Data::SolutionList>) };
      inline vector<Data::SolutionList> getSolutionList() { DARABONBA_PTR_GET(solutionList_, vector<Data::SolutionList>) };
      inline Data& setSolutionList(const vector<Data::SolutionList> & solutionList) { DARABONBA_PTR_SET_VALUE(solutionList_, solutionList) };
      inline Data& setSolutionList(vector<Data::SolutionList> && solutionList) { DARABONBA_PTR_SET_RVALUE(solutionList_, solutionList) };


    protected:
      // Search and inquiry results
      shared_ptr<vector<Data::SolutionList>> solutionList_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->data_ == nullptr && this->errorCode_ == nullptr && this->errorData_ == nullptr && this->errorMsg_ == nullptr && this->status_ == nullptr
        && this->success_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline EnrichResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const EnrichResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, EnrichResponseBody::Data) };
    inline EnrichResponseBody::Data getData() { DARABONBA_PTR_GET(data_, EnrichResponseBody::Data) };
    inline EnrichResponseBody& setData(const EnrichResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline EnrichResponseBody& setData(EnrichResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline EnrichResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorData Field Functions 
    bool hasErrorData() const { return this->errorData_ != nullptr;};
    void deleteErrorData() { this->errorData_ = nullptr;};
    inline     const Darabonba::Json & getErrorData() const { DARABONBA_GET(errorData_) };
    Darabonba::Json & getErrorData() { DARABONBA_GET(errorData_) };
    inline EnrichResponseBody& setErrorData(const Darabonba::Json & errorData) { DARABONBA_SET_VALUE(errorData_, errorData) };
    inline EnrichResponseBody& setErrorData(Darabonba::Json && errorData) { DARABONBA_SET_RVALUE(errorData_, errorData) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline EnrichResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline EnrichResponseBody& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline EnrichResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Request RequestId
    shared_ptr<string> requestId_ {};
    // Data returned on successful processing
    shared_ptr<EnrichResponseBody::Data> data_ {};
    // Business error code
    shared_ptr<string> errorCode_ {};
    // Data carried on error processing
    Darabonba::Json errorData_ {};
    // Error message
    shared_ptr<string> errorMsg_ {};
    // When HTTP request succeeds, status value is always 200
    shared_ptr<int32_t> status_ {};
    // Whether successful
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
