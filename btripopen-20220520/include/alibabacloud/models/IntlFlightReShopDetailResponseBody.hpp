// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTRESHOPDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTRESHOPDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightReShopDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightReShopDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightReShopDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    IntlFlightReShopDetailResponseBody() = default ;
    IntlFlightReShopDetailResponseBody(const IntlFlightReShopDetailResponseBody &) = default ;
    IntlFlightReShopDetailResponseBody(IntlFlightReShopDetailResponseBody &&) = default ;
    IntlFlightReShopDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightReShopDetailResponseBody() = default ;
    IntlFlightReShopDetailResponseBody& operator=(const IntlFlightReShopDetailResponseBody &) = default ;
    IntlFlightReShopDetailResponseBody& operator=(IntlFlightReShopDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(baggage_rule, baggageRule_);
        DARABONBA_PTR_TO_JSON(close_reason, closeReason_);
        DARABONBA_PTR_TO_JSON(close_time, closeTime_);
        DARABONBA_PTR_TO_JSON(close_type, closeType_);
        DARABONBA_PTR_TO_JSON(journey_list, journeyList_);
        DARABONBA_PTR_TO_JSON(order_id, orderId_);
        DARABONBA_PTR_TO_JSON(origin_journey_list, originJourneyList_);
        DARABONBA_PTR_TO_JSON(out_order_id, outOrderId_);
        DARABONBA_PTR_TO_JSON(out_re_shop_apply_id, outReShopApplyId_);
        DARABONBA_PTR_TO_JSON(passenger_list, passengerList_);
        DARABONBA_PTR_TO_JSON(passenger_price_info_list, passengerPriceInfoList_);
        DARABONBA_PTR_TO_JSON(passenger_ticket_list, passengerTicketList_);
        DARABONBA_PTR_TO_JSON(pay_latest_time, payLatestTime_);
        DARABONBA_PTR_TO_JSON(pay_status, payStatus_);
        DARABONBA_PTR_TO_JSON(price_info, priceInfo_);
        DARABONBA_PTR_TO_JSON(re_shop_apply_id, reShopApplyId_);
        DARABONBA_PTR_TO_JSON(re_shop_reason_code, reShopReasonCode_);
        DARABONBA_PTR_TO_JSON(re_shop_reason_desc, reShopReasonDesc_);
        DARABONBA_PTR_TO_JSON(refund_change_rule, refundChangeRule_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(success_time, successTime_);
        DARABONBA_PTR_TO_JSON(user_intention_memo, userIntentionMemo_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(baggage_rule, baggageRule_);
        DARABONBA_PTR_FROM_JSON(close_reason, closeReason_);
        DARABONBA_PTR_FROM_JSON(close_time, closeTime_);
        DARABONBA_PTR_FROM_JSON(close_type, closeType_);
        DARABONBA_PTR_FROM_JSON(journey_list, journeyList_);
        DARABONBA_PTR_FROM_JSON(order_id, orderId_);
        DARABONBA_PTR_FROM_JSON(origin_journey_list, originJourneyList_);
        DARABONBA_PTR_FROM_JSON(out_order_id, outOrderId_);
        DARABONBA_PTR_FROM_JSON(out_re_shop_apply_id, outReShopApplyId_);
        DARABONBA_PTR_FROM_JSON(passenger_list, passengerList_);
        DARABONBA_PTR_FROM_JSON(passenger_price_info_list, passengerPriceInfoList_);
        DARABONBA_PTR_FROM_JSON(passenger_ticket_list, passengerTicketList_);
        DARABONBA_PTR_FROM_JSON(pay_latest_time, payLatestTime_);
        DARABONBA_PTR_FROM_JSON(pay_status, payStatus_);
        DARABONBA_PTR_FROM_JSON(price_info, priceInfo_);
        DARABONBA_PTR_FROM_JSON(re_shop_apply_id, reShopApplyId_);
        DARABONBA_PTR_FROM_JSON(re_shop_reason_code, reShopReasonCode_);
        DARABONBA_PTR_FROM_JSON(re_shop_reason_desc, reShopReasonDesc_);
        DARABONBA_PTR_FROM_JSON(refund_change_rule, refundChangeRule_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(success_time, successTime_);
        DARABONBA_PTR_FROM_JSON(user_intention_memo, userIntentionMemo_);
      };
      Module() = default ;
      Module(const Module &) = default ;
      Module(Module &&) = default ;
      Module(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Module() = default ;
      Module& operator=(const Module &) = default ;
      Module& operator=(Module &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RefundChangeRule : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RefundChangeRule& obj) { 
          DARABONBA_PTR_TO_JSON(refund_change_rule_desc, refundChangeRuleDesc_);
        };
        friend void from_json(const Darabonba::Json& j, RefundChangeRule& obj) { 
          DARABONBA_PTR_FROM_JSON(refund_change_rule_desc, refundChangeRuleDesc_);
        };
        RefundChangeRule() = default ;
        RefundChangeRule(const RefundChangeRule &) = default ;
        RefundChangeRule(RefundChangeRule &&) = default ;
        RefundChangeRule(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RefundChangeRule() = default ;
        RefundChangeRule& operator=(const RefundChangeRule &) = default ;
        RefundChangeRule& operator=(RefundChangeRule &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->refundChangeRuleDesc_ == nullptr; };
        // refundChangeRuleDesc Field Functions 
        bool hasRefundChangeRuleDesc() const { return this->refundChangeRuleDesc_ != nullptr;};
        void deleteRefundChangeRuleDesc() { this->refundChangeRuleDesc_ = nullptr;};
        inline string getRefundChangeRuleDesc() const { DARABONBA_PTR_GET_DEFAULT(refundChangeRuleDesc_, "") };
        inline RefundChangeRule& setRefundChangeRuleDesc(string refundChangeRuleDesc) { DARABONBA_PTR_SET_VALUE(refundChangeRuleDesc_, refundChangeRuleDesc) };


      protected:
        shared_ptr<string> refundChangeRuleDesc_ {};
      };

      class PriceInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PriceInfo& obj) { 
          DARABONBA_PTR_TO_JSON(handling_amount, handlingAmount_);
          DARABONBA_PTR_TO_JSON(tax_diff_amount, taxDiffAmount_);
          DARABONBA_PTR_TO_JSON(total_amount, totalAmount_);
          DARABONBA_PTR_TO_JSON(upgrade_amount, upgradeAmount_);
        };
        friend void from_json(const Darabonba::Json& j, PriceInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(handling_amount, handlingAmount_);
          DARABONBA_PTR_FROM_JSON(tax_diff_amount, taxDiffAmount_);
          DARABONBA_PTR_FROM_JSON(total_amount, totalAmount_);
          DARABONBA_PTR_FROM_JSON(upgrade_amount, upgradeAmount_);
        };
        PriceInfo() = default ;
        PriceInfo(const PriceInfo &) = default ;
        PriceInfo(PriceInfo &&) = default ;
        PriceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PriceInfo() = default ;
        PriceInfo& operator=(const PriceInfo &) = default ;
        PriceInfo& operator=(PriceInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->handlingAmount_ == nullptr
        && this->taxDiffAmount_ == nullptr && this->totalAmount_ == nullptr && this->upgradeAmount_ == nullptr; };
        // handlingAmount Field Functions 
        bool hasHandlingAmount() const { return this->handlingAmount_ != nullptr;};
        void deleteHandlingAmount() { this->handlingAmount_ = nullptr;};
        inline int64_t getHandlingAmount() const { DARABONBA_PTR_GET_DEFAULT(handlingAmount_, 0L) };
        inline PriceInfo& setHandlingAmount(int64_t handlingAmount) { DARABONBA_PTR_SET_VALUE(handlingAmount_, handlingAmount) };


        // taxDiffAmount Field Functions 
        bool hasTaxDiffAmount() const { return this->taxDiffAmount_ != nullptr;};
        void deleteTaxDiffAmount() { this->taxDiffAmount_ = nullptr;};
        inline int64_t getTaxDiffAmount() const { DARABONBA_PTR_GET_DEFAULT(taxDiffAmount_, 0L) };
        inline PriceInfo& setTaxDiffAmount(int64_t taxDiffAmount) { DARABONBA_PTR_SET_VALUE(taxDiffAmount_, taxDiffAmount) };


        // totalAmount Field Functions 
        bool hasTotalAmount() const { return this->totalAmount_ != nullptr;};
        void deleteTotalAmount() { this->totalAmount_ = nullptr;};
        inline int64_t getTotalAmount() const { DARABONBA_PTR_GET_DEFAULT(totalAmount_, 0L) };
        inline PriceInfo& setTotalAmount(int64_t totalAmount) { DARABONBA_PTR_SET_VALUE(totalAmount_, totalAmount) };


        // upgradeAmount Field Functions 
        bool hasUpgradeAmount() const { return this->upgradeAmount_ != nullptr;};
        void deleteUpgradeAmount() { this->upgradeAmount_ = nullptr;};
        inline int64_t getUpgradeAmount() const { DARABONBA_PTR_GET_DEFAULT(upgradeAmount_, 0L) };
        inline PriceInfo& setUpgradeAmount(int64_t upgradeAmount) { DARABONBA_PTR_SET_VALUE(upgradeAmount_, upgradeAmount) };


      protected:
        shared_ptr<int64_t> handlingAmount_ {};
        shared_ptr<int64_t> taxDiffAmount_ {};
        shared_ptr<int64_t> totalAmount_ {};
        shared_ptr<int64_t> upgradeAmount_ {};
      };

      class PassengerTicketList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PassengerTicketList& obj) { 
          DARABONBA_PTR_TO_JSON(passenger_id, passengerId_);
          DARABONBA_PTR_TO_JSON(ticket_list, ticketList_);
        };
        friend void from_json(const Darabonba::Json& j, PassengerTicketList& obj) { 
          DARABONBA_PTR_FROM_JSON(passenger_id, passengerId_);
          DARABONBA_PTR_FROM_JSON(ticket_list, ticketList_);
        };
        PassengerTicketList() = default ;
        PassengerTicketList(const PassengerTicketList &) = default ;
        PassengerTicketList(PassengerTicketList &&) = default ;
        PassengerTicketList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PassengerTicketList() = default ;
        PassengerTicketList& operator=(const PassengerTicketList &) = default ;
        PassengerTicketList& operator=(PassengerTicketList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class TicketList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TicketList& obj) { 
            DARABONBA_PTR_TO_JSON(issue_time, issueTime_);
            DARABONBA_PTR_TO_JSON(pnr_no, pnrNo_);
            DARABONBA_PTR_TO_JSON(segment_key_list, segmentKeyList_);
            DARABONBA_PTR_TO_JSON(ticket_no, ticketNo_);
            DARABONBA_PTR_TO_JSON(ticket_segment_list, ticketSegmentList_);
          };
          friend void from_json(const Darabonba::Json& j, TicketList& obj) { 
            DARABONBA_PTR_FROM_JSON(issue_time, issueTime_);
            DARABONBA_PTR_FROM_JSON(pnr_no, pnrNo_);
            DARABONBA_PTR_FROM_JSON(segment_key_list, segmentKeyList_);
            DARABONBA_PTR_FROM_JSON(ticket_no, ticketNo_);
            DARABONBA_PTR_FROM_JSON(ticket_segment_list, ticketSegmentList_);
          };
          TicketList() = default ;
          TicketList(const TicketList &) = default ;
          TicketList(TicketList &&) = default ;
          TicketList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TicketList() = default ;
          TicketList& operator=(const TicketList &) = default ;
          TicketList& operator=(TicketList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class TicketSegmentList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const TicketSegmentList& obj) { 
              DARABONBA_PTR_TO_JSON(cabin, cabin_);
              DARABONBA_PTR_TO_JSON(cabin_class, cabinClass_);
              DARABONBA_PTR_TO_JSON(modified, modified_);
              DARABONBA_PTR_TO_JSON(open_ticket_status, openTicketStatus_);
              DARABONBA_PTR_TO_JSON(refunded, refunded_);
              DARABONBA_PTR_TO_JSON(segment_key, segmentKey_);
            };
            friend void from_json(const Darabonba::Json& j, TicketSegmentList& obj) { 
              DARABONBA_PTR_FROM_JSON(cabin, cabin_);
              DARABONBA_PTR_FROM_JSON(cabin_class, cabinClass_);
              DARABONBA_PTR_FROM_JSON(modified, modified_);
              DARABONBA_PTR_FROM_JSON(open_ticket_status, openTicketStatus_);
              DARABONBA_PTR_FROM_JSON(refunded, refunded_);
              DARABONBA_PTR_FROM_JSON(segment_key, segmentKey_);
            };
            TicketSegmentList() = default ;
            TicketSegmentList(const TicketSegmentList &) = default ;
            TicketSegmentList(TicketSegmentList &&) = default ;
            TicketSegmentList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~TicketSegmentList() = default ;
            TicketSegmentList& operator=(const TicketSegmentList &) = default ;
            TicketSegmentList& operator=(TicketSegmentList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->cabin_ == nullptr
        && this->cabinClass_ == nullptr && this->modified_ == nullptr && this->openTicketStatus_ == nullptr && this->refunded_ == nullptr && this->segmentKey_ == nullptr; };
            // cabin Field Functions 
            bool hasCabin() const { return this->cabin_ != nullptr;};
            void deleteCabin() { this->cabin_ = nullptr;};
            inline string getCabin() const { DARABONBA_PTR_GET_DEFAULT(cabin_, "") };
            inline TicketSegmentList& setCabin(string cabin) { DARABONBA_PTR_SET_VALUE(cabin_, cabin) };


            // cabinClass Field Functions 
            bool hasCabinClass() const { return this->cabinClass_ != nullptr;};
            void deleteCabinClass() { this->cabinClass_ = nullptr;};
            inline string getCabinClass() const { DARABONBA_PTR_GET_DEFAULT(cabinClass_, "") };
            inline TicketSegmentList& setCabinClass(string cabinClass) { DARABONBA_PTR_SET_VALUE(cabinClass_, cabinClass) };


            // modified Field Functions 
            bool hasModified() const { return this->modified_ != nullptr;};
            void deleteModified() { this->modified_ = nullptr;};
            inline bool getModified() const { DARABONBA_PTR_GET_DEFAULT(modified_, false) };
            inline TicketSegmentList& setModified(bool modified) { DARABONBA_PTR_SET_VALUE(modified_, modified) };


            // openTicketStatus Field Functions 
            bool hasOpenTicketStatus() const { return this->openTicketStatus_ != nullptr;};
            void deleteOpenTicketStatus() { this->openTicketStatus_ = nullptr;};
            inline string getOpenTicketStatus() const { DARABONBA_PTR_GET_DEFAULT(openTicketStatus_, "") };
            inline TicketSegmentList& setOpenTicketStatus(string openTicketStatus) { DARABONBA_PTR_SET_VALUE(openTicketStatus_, openTicketStatus) };


            // refunded Field Functions 
            bool hasRefunded() const { return this->refunded_ != nullptr;};
            void deleteRefunded() { this->refunded_ = nullptr;};
            inline bool getRefunded() const { DARABONBA_PTR_GET_DEFAULT(refunded_, false) };
            inline TicketSegmentList& setRefunded(bool refunded) { DARABONBA_PTR_SET_VALUE(refunded_, refunded) };


            // segmentKey Field Functions 
            bool hasSegmentKey() const { return this->segmentKey_ != nullptr;};
            void deleteSegmentKey() { this->segmentKey_ = nullptr;};
            inline string getSegmentKey() const { DARABONBA_PTR_GET_DEFAULT(segmentKey_, "") };
            inline TicketSegmentList& setSegmentKey(string segmentKey) { DARABONBA_PTR_SET_VALUE(segmentKey_, segmentKey) };


          protected:
            shared_ptr<string> cabin_ {};
            shared_ptr<string> cabinClass_ {};
            shared_ptr<bool> modified_ {};
            shared_ptr<string> openTicketStatus_ {};
            shared_ptr<bool> refunded_ {};
            shared_ptr<string> segmentKey_ {};
          };

          virtual bool empty() const override { return this->issueTime_ == nullptr
        && this->pnrNo_ == nullptr && this->segmentKeyList_ == nullptr && this->ticketNo_ == nullptr && this->ticketSegmentList_ == nullptr; };
          // issueTime Field Functions 
          bool hasIssueTime() const { return this->issueTime_ != nullptr;};
          void deleteIssueTime() { this->issueTime_ = nullptr;};
          inline string getIssueTime() const { DARABONBA_PTR_GET_DEFAULT(issueTime_, "") };
          inline TicketList& setIssueTime(string issueTime) { DARABONBA_PTR_SET_VALUE(issueTime_, issueTime) };


          // pnrNo Field Functions 
          bool hasPnrNo() const { return this->pnrNo_ != nullptr;};
          void deletePnrNo() { this->pnrNo_ = nullptr;};
          inline string getPnrNo() const { DARABONBA_PTR_GET_DEFAULT(pnrNo_, "") };
          inline TicketList& setPnrNo(string pnrNo) { DARABONBA_PTR_SET_VALUE(pnrNo_, pnrNo) };


          // segmentKeyList Field Functions 
          bool hasSegmentKeyList() const { return this->segmentKeyList_ != nullptr;};
          void deleteSegmentKeyList() { this->segmentKeyList_ = nullptr;};
          inline const vector<string> & getSegmentKeyList() const { DARABONBA_PTR_GET_CONST(segmentKeyList_, vector<string>) };
          inline vector<string> getSegmentKeyList() { DARABONBA_PTR_GET(segmentKeyList_, vector<string>) };
          inline TicketList& setSegmentKeyList(const vector<string> & segmentKeyList) { DARABONBA_PTR_SET_VALUE(segmentKeyList_, segmentKeyList) };
          inline TicketList& setSegmentKeyList(vector<string> && segmentKeyList) { DARABONBA_PTR_SET_RVALUE(segmentKeyList_, segmentKeyList) };


          // ticketNo Field Functions 
          bool hasTicketNo() const { return this->ticketNo_ != nullptr;};
          void deleteTicketNo() { this->ticketNo_ = nullptr;};
          inline string getTicketNo() const { DARABONBA_PTR_GET_DEFAULT(ticketNo_, "") };
          inline TicketList& setTicketNo(string ticketNo) { DARABONBA_PTR_SET_VALUE(ticketNo_, ticketNo) };


          // ticketSegmentList Field Functions 
          bool hasTicketSegmentList() const { return this->ticketSegmentList_ != nullptr;};
          void deleteTicketSegmentList() { this->ticketSegmentList_ = nullptr;};
          inline const vector<TicketList::TicketSegmentList> & getTicketSegmentList() const { DARABONBA_PTR_GET_CONST(ticketSegmentList_, vector<TicketList::TicketSegmentList>) };
          inline vector<TicketList::TicketSegmentList> getTicketSegmentList() { DARABONBA_PTR_GET(ticketSegmentList_, vector<TicketList::TicketSegmentList>) };
          inline TicketList& setTicketSegmentList(const vector<TicketList::TicketSegmentList> & ticketSegmentList) { DARABONBA_PTR_SET_VALUE(ticketSegmentList_, ticketSegmentList) };
          inline TicketList& setTicketSegmentList(vector<TicketList::TicketSegmentList> && ticketSegmentList) { DARABONBA_PTR_SET_RVALUE(ticketSegmentList_, ticketSegmentList) };


        protected:
          shared_ptr<string> issueTime_ {};
          shared_ptr<string> pnrNo_ {};
          shared_ptr<vector<string>> segmentKeyList_ {};
          shared_ptr<string> ticketNo_ {};
          shared_ptr<vector<TicketList::TicketSegmentList>> ticketSegmentList_ {};
        };

        virtual bool empty() const override { return this->passengerId_ == nullptr
        && this->ticketList_ == nullptr; };
        // passengerId Field Functions 
        bool hasPassengerId() const { return this->passengerId_ != nullptr;};
        void deletePassengerId() { this->passengerId_ = nullptr;};
        inline int64_t getPassengerId() const { DARABONBA_PTR_GET_DEFAULT(passengerId_, 0L) };
        inline PassengerTicketList& setPassengerId(int64_t passengerId) { DARABONBA_PTR_SET_VALUE(passengerId_, passengerId) };


        // ticketList Field Functions 
        bool hasTicketList() const { return this->ticketList_ != nullptr;};
        void deleteTicketList() { this->ticketList_ = nullptr;};
        inline const vector<PassengerTicketList::TicketList> & getTicketList() const { DARABONBA_PTR_GET_CONST(ticketList_, vector<PassengerTicketList::TicketList>) };
        inline vector<PassengerTicketList::TicketList> getTicketList() { DARABONBA_PTR_GET(ticketList_, vector<PassengerTicketList::TicketList>) };
        inline PassengerTicketList& setTicketList(const vector<PassengerTicketList::TicketList> & ticketList) { DARABONBA_PTR_SET_VALUE(ticketList_, ticketList) };
        inline PassengerTicketList& setTicketList(vector<PassengerTicketList::TicketList> && ticketList) { DARABONBA_PTR_SET_RVALUE(ticketList_, ticketList) };


      protected:
        shared_ptr<int64_t> passengerId_ {};
        shared_ptr<vector<PassengerTicketList::TicketList>> ticketList_ {};
      };

      class PassengerPriceInfoList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PassengerPriceInfoList& obj) { 
          DARABONBA_PTR_TO_JSON(passenger_id, passengerId_);
          DARABONBA_PTR_TO_JSON(price_info, priceInfo_);
        };
        friend void from_json(const Darabonba::Json& j, PassengerPriceInfoList& obj) { 
          DARABONBA_PTR_FROM_JSON(passenger_id, passengerId_);
          DARABONBA_PTR_FROM_JSON(price_info, priceInfo_);
        };
        PassengerPriceInfoList() = default ;
        PassengerPriceInfoList(const PassengerPriceInfoList &) = default ;
        PassengerPriceInfoList(PassengerPriceInfoList &&) = default ;
        PassengerPriceInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PassengerPriceInfoList() = default ;
        PassengerPriceInfoList& operator=(const PassengerPriceInfoList &) = default ;
        PassengerPriceInfoList& operator=(PassengerPriceInfoList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class PriceInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PriceInfo& obj) { 
            DARABONBA_PTR_TO_JSON(handling_amount, handlingAmount_);
            DARABONBA_PTR_TO_JSON(tax_diff_amount, taxDiffAmount_);
            DARABONBA_PTR_TO_JSON(total_amount, totalAmount_);
            DARABONBA_PTR_TO_JSON(upgrade_amount, upgradeAmount_);
          };
          friend void from_json(const Darabonba::Json& j, PriceInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(handling_amount, handlingAmount_);
            DARABONBA_PTR_FROM_JSON(tax_diff_amount, taxDiffAmount_);
            DARABONBA_PTR_FROM_JSON(total_amount, totalAmount_);
            DARABONBA_PTR_FROM_JSON(upgrade_amount, upgradeAmount_);
          };
          PriceInfo() = default ;
          PriceInfo(const PriceInfo &) = default ;
          PriceInfo(PriceInfo &&) = default ;
          PriceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PriceInfo() = default ;
          PriceInfo& operator=(const PriceInfo &) = default ;
          PriceInfo& operator=(PriceInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->handlingAmount_ == nullptr
        && this->taxDiffAmount_ == nullptr && this->totalAmount_ == nullptr && this->upgradeAmount_ == nullptr; };
          // handlingAmount Field Functions 
          bool hasHandlingAmount() const { return this->handlingAmount_ != nullptr;};
          void deleteHandlingAmount() { this->handlingAmount_ = nullptr;};
          inline int64_t getHandlingAmount() const { DARABONBA_PTR_GET_DEFAULT(handlingAmount_, 0L) };
          inline PriceInfo& setHandlingAmount(int64_t handlingAmount) { DARABONBA_PTR_SET_VALUE(handlingAmount_, handlingAmount) };


          // taxDiffAmount Field Functions 
          bool hasTaxDiffAmount() const { return this->taxDiffAmount_ != nullptr;};
          void deleteTaxDiffAmount() { this->taxDiffAmount_ = nullptr;};
          inline int64_t getTaxDiffAmount() const { DARABONBA_PTR_GET_DEFAULT(taxDiffAmount_, 0L) };
          inline PriceInfo& setTaxDiffAmount(int64_t taxDiffAmount) { DARABONBA_PTR_SET_VALUE(taxDiffAmount_, taxDiffAmount) };


          // totalAmount Field Functions 
          bool hasTotalAmount() const { return this->totalAmount_ != nullptr;};
          void deleteTotalAmount() { this->totalAmount_ = nullptr;};
          inline int64_t getTotalAmount() const { DARABONBA_PTR_GET_DEFAULT(totalAmount_, 0L) };
          inline PriceInfo& setTotalAmount(int64_t totalAmount) { DARABONBA_PTR_SET_VALUE(totalAmount_, totalAmount) };


          // upgradeAmount Field Functions 
          bool hasUpgradeAmount() const { return this->upgradeAmount_ != nullptr;};
          void deleteUpgradeAmount() { this->upgradeAmount_ = nullptr;};
          inline int64_t getUpgradeAmount() const { DARABONBA_PTR_GET_DEFAULT(upgradeAmount_, 0L) };
          inline PriceInfo& setUpgradeAmount(int64_t upgradeAmount) { DARABONBA_PTR_SET_VALUE(upgradeAmount_, upgradeAmount) };


        protected:
          shared_ptr<int64_t> handlingAmount_ {};
          shared_ptr<int64_t> taxDiffAmount_ {};
          shared_ptr<int64_t> totalAmount_ {};
          shared_ptr<int64_t> upgradeAmount_ {};
        };

        virtual bool empty() const override { return this->passengerId_ == nullptr
        && this->priceInfo_ == nullptr; };
        // passengerId Field Functions 
        bool hasPassengerId() const { return this->passengerId_ != nullptr;};
        void deletePassengerId() { this->passengerId_ = nullptr;};
        inline int64_t getPassengerId() const { DARABONBA_PTR_GET_DEFAULT(passengerId_, 0L) };
        inline PassengerPriceInfoList& setPassengerId(int64_t passengerId) { DARABONBA_PTR_SET_VALUE(passengerId_, passengerId) };


        // priceInfo Field Functions 
        bool hasPriceInfo() const { return this->priceInfo_ != nullptr;};
        void deletePriceInfo() { this->priceInfo_ = nullptr;};
        inline const PassengerPriceInfoList::PriceInfo & getPriceInfo() const { DARABONBA_PTR_GET_CONST(priceInfo_, PassengerPriceInfoList::PriceInfo) };
        inline PassengerPriceInfoList::PriceInfo getPriceInfo() { DARABONBA_PTR_GET(priceInfo_, PassengerPriceInfoList::PriceInfo) };
        inline PassengerPriceInfoList& setPriceInfo(const PassengerPriceInfoList::PriceInfo & priceInfo) { DARABONBA_PTR_SET_VALUE(priceInfo_, priceInfo) };
        inline PassengerPriceInfoList& setPriceInfo(PassengerPriceInfoList::PriceInfo && priceInfo) { DARABONBA_PTR_SET_RVALUE(priceInfo_, priceInfo) };


      protected:
        shared_ptr<int64_t> passengerId_ {};
        shared_ptr<PassengerPriceInfoList::PriceInfo> priceInfo_ {};
      };

      class PassengerList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PassengerList& obj) { 
          DARABONBA_PTR_TO_JSON(full_name, fullName_);
          DARABONBA_PTR_TO_JSON(gender, gender_);
          DARABONBA_PTR_TO_JSON(job_no, jobNo_);
          DARABONBA_PTR_TO_JSON(nationality, nationality_);
          DARABONBA_PTR_TO_JSON(nationality_code, nationalityCode_);
          DARABONBA_PTR_TO_JSON(passenger_id, passengerId_);
          DARABONBA_PTR_TO_JSON(type, type_);
          DARABONBA_PTR_TO_JSON(user_id, userId_);
          DARABONBA_PTR_TO_JSON(user_type, userType_);
        };
        friend void from_json(const Darabonba::Json& j, PassengerList& obj) { 
          DARABONBA_PTR_FROM_JSON(full_name, fullName_);
          DARABONBA_PTR_FROM_JSON(gender, gender_);
          DARABONBA_PTR_FROM_JSON(job_no, jobNo_);
          DARABONBA_PTR_FROM_JSON(nationality, nationality_);
          DARABONBA_PTR_FROM_JSON(nationality_code, nationalityCode_);
          DARABONBA_PTR_FROM_JSON(passenger_id, passengerId_);
          DARABONBA_PTR_FROM_JSON(type, type_);
          DARABONBA_PTR_FROM_JSON(user_id, userId_);
          DARABONBA_PTR_FROM_JSON(user_type, userType_);
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
        virtual bool empty() const override { return this->fullName_ == nullptr
        && this->gender_ == nullptr && this->jobNo_ == nullptr && this->nationality_ == nullptr && this->nationalityCode_ == nullptr && this->passengerId_ == nullptr
        && this->type_ == nullptr && this->userId_ == nullptr && this->userType_ == nullptr; };
        // fullName Field Functions 
        bool hasFullName() const { return this->fullName_ != nullptr;};
        void deleteFullName() { this->fullName_ = nullptr;};
        inline string getFullName() const { DARABONBA_PTR_GET_DEFAULT(fullName_, "") };
        inline PassengerList& setFullName(string fullName) { DARABONBA_PTR_SET_VALUE(fullName_, fullName) };


        // gender Field Functions 
        bool hasGender() const { return this->gender_ != nullptr;};
        void deleteGender() { this->gender_ = nullptr;};
        inline int32_t getGender() const { DARABONBA_PTR_GET_DEFAULT(gender_, 0) };
        inline PassengerList& setGender(int32_t gender) { DARABONBA_PTR_SET_VALUE(gender_, gender) };


        // jobNo Field Functions 
        bool hasJobNo() const { return this->jobNo_ != nullptr;};
        void deleteJobNo() { this->jobNo_ = nullptr;};
        inline string getJobNo() const { DARABONBA_PTR_GET_DEFAULT(jobNo_, "") };
        inline PassengerList& setJobNo(string jobNo) { DARABONBA_PTR_SET_VALUE(jobNo_, jobNo) };


        // nationality Field Functions 
        bool hasNationality() const { return this->nationality_ != nullptr;};
        void deleteNationality() { this->nationality_ = nullptr;};
        inline string getNationality() const { DARABONBA_PTR_GET_DEFAULT(nationality_, "") };
        inline PassengerList& setNationality(string nationality) { DARABONBA_PTR_SET_VALUE(nationality_, nationality) };


        // nationalityCode Field Functions 
        bool hasNationalityCode() const { return this->nationalityCode_ != nullptr;};
        void deleteNationalityCode() { this->nationalityCode_ = nullptr;};
        inline string getNationalityCode() const { DARABONBA_PTR_GET_DEFAULT(nationalityCode_, "") };
        inline PassengerList& setNationalityCode(string nationalityCode) { DARABONBA_PTR_SET_VALUE(nationalityCode_, nationalityCode) };


        // passengerId Field Functions 
        bool hasPassengerId() const { return this->passengerId_ != nullptr;};
        void deletePassengerId() { this->passengerId_ = nullptr;};
        inline int64_t getPassengerId() const { DARABONBA_PTR_GET_DEFAULT(passengerId_, 0L) };
        inline PassengerList& setPassengerId(int64_t passengerId) { DARABONBA_PTR_SET_VALUE(passengerId_, passengerId) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
        inline PassengerList& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline PassengerList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


        // userType Field Functions 
        bool hasUserType() const { return this->userType_ != nullptr;};
        void deleteUserType() { this->userType_ = nullptr;};
        inline int32_t getUserType() const { DARABONBA_PTR_GET_DEFAULT(userType_, 0) };
        inline PassengerList& setUserType(int32_t userType) { DARABONBA_PTR_SET_VALUE(userType_, userType) };


      protected:
        shared_ptr<string> fullName_ {};
        shared_ptr<int32_t> gender_ {};
        shared_ptr<string> jobNo_ {};
        shared_ptr<string> nationality_ {};
        shared_ptr<string> nationalityCode_ {};
        shared_ptr<int64_t> passengerId_ {};
        shared_ptr<int32_t> type_ {};
        shared_ptr<string> userId_ {};
        shared_ptr<int32_t> userType_ {};
      };

      class OriginJourneyList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OriginJourneyList& obj) { 
          DARABONBA_PTR_TO_JSON(arr_city_code, arrCityCode_);
          DARABONBA_PTR_TO_JSON(arr_city_name, arrCityName_);
          DARABONBA_PTR_TO_JSON(arr_time, arrTime_);
          DARABONBA_PTR_TO_JSON(dep_city_code, depCityCode_);
          DARABONBA_PTR_TO_JSON(dep_city_name, depCityName_);
          DARABONBA_PTR_TO_JSON(dep_time, depTime_);
          DARABONBA_PTR_TO_JSON(duration, duration_);
          DARABONBA_PTR_TO_JSON(flight_segment_infos, flightSegmentInfos_);
          DARABONBA_PTR_TO_JSON(journey_index, journeyIndex_);
          DARABONBA_PTR_TO_JSON(transfer_time, transferTime_);
        };
        friend void from_json(const Darabonba::Json& j, OriginJourneyList& obj) { 
          DARABONBA_PTR_FROM_JSON(arr_city_code, arrCityCode_);
          DARABONBA_PTR_FROM_JSON(arr_city_name, arrCityName_);
          DARABONBA_PTR_FROM_JSON(arr_time, arrTime_);
          DARABONBA_PTR_FROM_JSON(dep_city_code, depCityCode_);
          DARABONBA_PTR_FROM_JSON(dep_city_name, depCityName_);
          DARABONBA_PTR_FROM_JSON(dep_time, depTime_);
          DARABONBA_PTR_FROM_JSON(duration, duration_);
          DARABONBA_PTR_FROM_JSON(flight_segment_infos, flightSegmentInfos_);
          DARABONBA_PTR_FROM_JSON(journey_index, journeyIndex_);
          DARABONBA_PTR_FROM_JSON(transfer_time, transferTime_);
        };
        OriginJourneyList() = default ;
        OriginJourneyList(const OriginJourneyList &) = default ;
        OriginJourneyList(OriginJourneyList &&) = default ;
        OriginJourneyList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OriginJourneyList() = default ;
        OriginJourneyList& operator=(const OriginJourneyList &) = default ;
        OriginJourneyList& operator=(OriginJourneyList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class FlightSegmentInfos : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const FlightSegmentInfos& obj) { 
            DARABONBA_PTR_TO_JSON(airline_info, airlineInfo_);
            DARABONBA_PTR_TO_JSON(arr_airport_info, arrAirportInfo_);
            DARABONBA_PTR_TO_JSON(arr_city_code, arrCityCode_);
            DARABONBA_PTR_TO_JSON(arr_city_name, arrCityName_);
            DARABONBA_PTR_TO_JSON(arr_time, arrTime_);
            DARABONBA_PTR_TO_JSON(dep_airport_info, depAirportInfo_);
            DARABONBA_PTR_TO_JSON(dep_city_code, depCityCode_);
            DARABONBA_PTR_TO_JSON(dep_city_name, depCityName_);
            DARABONBA_PTR_TO_JSON(dep_time, depTime_);
            DARABONBA_PTR_TO_JSON(duration, duration_);
            DARABONBA_PTR_TO_JSON(flight_no, flightNo_);
            DARABONBA_PTR_TO_JSON(flight_share_info, flightShareInfo_);
            DARABONBA_PTR_TO_JSON(flight_size, flightSize_);
            DARABONBA_PTR_TO_JSON(flight_stop_info_list, flightStopInfoList_);
            DARABONBA_PTR_TO_JSON(flight_type, flightType_);
            DARABONBA_PTR_TO_JSON(journey_index, journeyIndex_);
            DARABONBA_PTR_TO_JSON(luggage_direct_info, luggageDirectInfo_);
            DARABONBA_PTR_TO_JSON(manufacturer, manufacturer_);
            DARABONBA_PTR_TO_JSON(meal_desc, mealDesc_);
            DARABONBA_PTR_TO_JSON(one_more, oneMore_);
            DARABONBA_PTR_TO_JSON(one_more_show, oneMoreShow_);
            DARABONBA_PTR_TO_JSON(segment_index, segmentIndex_);
            DARABONBA_PTR_TO_JSON(segment_key, segmentKey_);
            DARABONBA_PTR_TO_JSON(segment_visa_remark, segmentVisaRemark_);
            DARABONBA_PTR_TO_JSON(share, share_);
            DARABONBA_PTR_TO_JSON(short_flight_size, shortFlightSize_);
            DARABONBA_PTR_TO_JSON(stop, stop_);
            DARABONBA_PTR_TO_JSON(total_time, totalTime_);
          };
          friend void from_json(const Darabonba::Json& j, FlightSegmentInfos& obj) { 
            DARABONBA_PTR_FROM_JSON(airline_info, airlineInfo_);
            DARABONBA_PTR_FROM_JSON(arr_airport_info, arrAirportInfo_);
            DARABONBA_PTR_FROM_JSON(arr_city_code, arrCityCode_);
            DARABONBA_PTR_FROM_JSON(arr_city_name, arrCityName_);
            DARABONBA_PTR_FROM_JSON(arr_time, arrTime_);
            DARABONBA_PTR_FROM_JSON(dep_airport_info, depAirportInfo_);
            DARABONBA_PTR_FROM_JSON(dep_city_code, depCityCode_);
            DARABONBA_PTR_FROM_JSON(dep_city_name, depCityName_);
            DARABONBA_PTR_FROM_JSON(dep_time, depTime_);
            DARABONBA_PTR_FROM_JSON(duration, duration_);
            DARABONBA_PTR_FROM_JSON(flight_no, flightNo_);
            DARABONBA_PTR_FROM_JSON(flight_share_info, flightShareInfo_);
            DARABONBA_PTR_FROM_JSON(flight_size, flightSize_);
            DARABONBA_PTR_FROM_JSON(flight_stop_info_list, flightStopInfoList_);
            DARABONBA_PTR_FROM_JSON(flight_type, flightType_);
            DARABONBA_PTR_FROM_JSON(journey_index, journeyIndex_);
            DARABONBA_PTR_FROM_JSON(luggage_direct_info, luggageDirectInfo_);
            DARABONBA_PTR_FROM_JSON(manufacturer, manufacturer_);
            DARABONBA_PTR_FROM_JSON(meal_desc, mealDesc_);
            DARABONBA_PTR_FROM_JSON(one_more, oneMore_);
            DARABONBA_PTR_FROM_JSON(one_more_show, oneMoreShow_);
            DARABONBA_PTR_FROM_JSON(segment_index, segmentIndex_);
            DARABONBA_PTR_FROM_JSON(segment_key, segmentKey_);
            DARABONBA_PTR_FROM_JSON(segment_visa_remark, segmentVisaRemark_);
            DARABONBA_PTR_FROM_JSON(share, share_);
            DARABONBA_PTR_FROM_JSON(short_flight_size, shortFlightSize_);
            DARABONBA_PTR_FROM_JSON(stop, stop_);
            DARABONBA_PTR_FROM_JSON(total_time, totalTime_);
          };
          FlightSegmentInfos() = default ;
          FlightSegmentInfos(const FlightSegmentInfos &) = default ;
          FlightSegmentInfos(FlightSegmentInfos &&) = default ;
          FlightSegmentInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~FlightSegmentInfos() = default ;
          FlightSegmentInfos& operator=(const FlightSegmentInfos &) = default ;
          FlightSegmentInfos& operator=(FlightSegmentInfos &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class SegmentVisaRemark : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const SegmentVisaRemark& obj) { 
              DARABONBA_PTR_TO_JSON(dep_city_visa_remark, depCityVisaRemark_);
              DARABONBA_PTR_TO_JSON(dep_city_visa_type, depCityVisaType_);
              DARABONBA_PTR_TO_JSON(stop_city_visa_remarks, stopCityVisaRemarks_);
              DARABONBA_PTR_TO_JSON(stop_city_visa_types, stopCityVisaTypes_);
            };
            friend void from_json(const Darabonba::Json& j, SegmentVisaRemark& obj) { 
              DARABONBA_PTR_FROM_JSON(dep_city_visa_remark, depCityVisaRemark_);
              DARABONBA_PTR_FROM_JSON(dep_city_visa_type, depCityVisaType_);
              DARABONBA_PTR_FROM_JSON(stop_city_visa_remarks, stopCityVisaRemarks_);
              DARABONBA_PTR_FROM_JSON(stop_city_visa_types, stopCityVisaTypes_);
            };
            SegmentVisaRemark() = default ;
            SegmentVisaRemark(const SegmentVisaRemark &) = default ;
            SegmentVisaRemark(SegmentVisaRemark &&) = default ;
            SegmentVisaRemark(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~SegmentVisaRemark() = default ;
            SegmentVisaRemark& operator=(const SegmentVisaRemark &) = default ;
            SegmentVisaRemark& operator=(SegmentVisaRemark &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->depCityVisaRemark_ == nullptr
        && this->depCityVisaType_ == nullptr && this->stopCityVisaRemarks_ == nullptr && this->stopCityVisaTypes_ == nullptr; };
            // depCityVisaRemark Field Functions 
            bool hasDepCityVisaRemark() const { return this->depCityVisaRemark_ != nullptr;};
            void deleteDepCityVisaRemark() { this->depCityVisaRemark_ = nullptr;};
            inline string getDepCityVisaRemark() const { DARABONBA_PTR_GET_DEFAULT(depCityVisaRemark_, "") };
            inline SegmentVisaRemark& setDepCityVisaRemark(string depCityVisaRemark) { DARABONBA_PTR_SET_VALUE(depCityVisaRemark_, depCityVisaRemark) };


            // depCityVisaType Field Functions 
            bool hasDepCityVisaType() const { return this->depCityVisaType_ != nullptr;};
            void deleteDepCityVisaType() { this->depCityVisaType_ = nullptr;};
            inline int32_t getDepCityVisaType() const { DARABONBA_PTR_GET_DEFAULT(depCityVisaType_, 0) };
            inline SegmentVisaRemark& setDepCityVisaType(int32_t depCityVisaType) { DARABONBA_PTR_SET_VALUE(depCityVisaType_, depCityVisaType) };


            // stopCityVisaRemarks Field Functions 
            bool hasStopCityVisaRemarks() const { return this->stopCityVisaRemarks_ != nullptr;};
            void deleteStopCityVisaRemarks() { this->stopCityVisaRemarks_ = nullptr;};
            inline const vector<string> & getStopCityVisaRemarks() const { DARABONBA_PTR_GET_CONST(stopCityVisaRemarks_, vector<string>) };
            inline vector<string> getStopCityVisaRemarks() { DARABONBA_PTR_GET(stopCityVisaRemarks_, vector<string>) };
            inline SegmentVisaRemark& setStopCityVisaRemarks(const vector<string> & stopCityVisaRemarks) { DARABONBA_PTR_SET_VALUE(stopCityVisaRemarks_, stopCityVisaRemarks) };
            inline SegmentVisaRemark& setStopCityVisaRemarks(vector<string> && stopCityVisaRemarks) { DARABONBA_PTR_SET_RVALUE(stopCityVisaRemarks_, stopCityVisaRemarks) };


            // stopCityVisaTypes Field Functions 
            bool hasStopCityVisaTypes() const { return this->stopCityVisaTypes_ != nullptr;};
            void deleteStopCityVisaTypes() { this->stopCityVisaTypes_ = nullptr;};
            inline const vector<int32_t> & getStopCityVisaTypes() const { DARABONBA_PTR_GET_CONST(stopCityVisaTypes_, vector<int32_t>) };
            inline vector<int32_t> getStopCityVisaTypes() { DARABONBA_PTR_GET(stopCityVisaTypes_, vector<int32_t>) };
            inline SegmentVisaRemark& setStopCityVisaTypes(const vector<int32_t> & stopCityVisaTypes) { DARABONBA_PTR_SET_VALUE(stopCityVisaTypes_, stopCityVisaTypes) };
            inline SegmentVisaRemark& setStopCityVisaTypes(vector<int32_t> && stopCityVisaTypes) { DARABONBA_PTR_SET_RVALUE(stopCityVisaTypes_, stopCityVisaTypes) };


          protected:
            shared_ptr<string> depCityVisaRemark_ {};
            shared_ptr<int32_t> depCityVisaType_ {};
            shared_ptr<vector<string>> stopCityVisaRemarks_ {};
            shared_ptr<vector<int32_t>> stopCityVisaTypes_ {};
          };

          class LuggageDirectInfo : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const LuggageDirectInfo& obj) { 
              DARABONBA_PTR_TO_JSON(dep_city_luggage_direct, depCityLuggageDirect_);
              DARABONBA_PTR_TO_JSON(stop_city_luggage_direct, stopCityLuggageDirect_);
            };
            friend void from_json(const Darabonba::Json& j, LuggageDirectInfo& obj) { 
              DARABONBA_PTR_FROM_JSON(dep_city_luggage_direct, depCityLuggageDirect_);
              DARABONBA_PTR_FROM_JSON(stop_city_luggage_direct, stopCityLuggageDirect_);
            };
            LuggageDirectInfo() = default ;
            LuggageDirectInfo(const LuggageDirectInfo &) = default ;
            LuggageDirectInfo(LuggageDirectInfo &&) = default ;
            LuggageDirectInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~LuggageDirectInfo() = default ;
            LuggageDirectInfo& operator=(const LuggageDirectInfo &) = default ;
            LuggageDirectInfo& operator=(LuggageDirectInfo &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->depCityLuggageDirect_ == nullptr
        && this->stopCityLuggageDirect_ == nullptr; };
            // depCityLuggageDirect Field Functions 
            bool hasDepCityLuggageDirect() const { return this->depCityLuggageDirect_ != nullptr;};
            void deleteDepCityLuggageDirect() { this->depCityLuggageDirect_ = nullptr;};
            inline int32_t getDepCityLuggageDirect() const { DARABONBA_PTR_GET_DEFAULT(depCityLuggageDirect_, 0) };
            inline LuggageDirectInfo& setDepCityLuggageDirect(int32_t depCityLuggageDirect) { DARABONBA_PTR_SET_VALUE(depCityLuggageDirect_, depCityLuggageDirect) };


            // stopCityLuggageDirect Field Functions 
            bool hasStopCityLuggageDirect() const { return this->stopCityLuggageDirect_ != nullptr;};
            void deleteStopCityLuggageDirect() { this->stopCityLuggageDirect_ = nullptr;};
            inline int32_t getStopCityLuggageDirect() const { DARABONBA_PTR_GET_DEFAULT(stopCityLuggageDirect_, 0) };
            inline LuggageDirectInfo& setStopCityLuggageDirect(int32_t stopCityLuggageDirect) { DARABONBA_PTR_SET_VALUE(stopCityLuggageDirect_, stopCityLuggageDirect) };


          protected:
            shared_ptr<int32_t> depCityLuggageDirect_ {};
            shared_ptr<int32_t> stopCityLuggageDirect_ {};
          };

          class FlightStopInfoList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const FlightStopInfoList& obj) { 
              DARABONBA_PTR_TO_JSON(stop_airport, stopAirport_);
              DARABONBA_PTR_TO_JSON(stop_airport_name, stopAirportName_);
              DARABONBA_PTR_TO_JSON(stop_arr_term, stopArrTerm_);
              DARABONBA_PTR_TO_JSON(stop_arr_time, stopArrTime_);
              DARABONBA_PTR_TO_JSON(stop_city_code, stopCityCode_);
              DARABONBA_PTR_TO_JSON(stop_city_name, stopCityName_);
              DARABONBA_PTR_TO_JSON(stop_dep_term, stopDepTerm_);
              DARABONBA_PTR_TO_JSON(stop_dep_time, stopDepTime_);
              DARABONBA_PTR_TO_JSON(stop_time, stopTime_);
            };
            friend void from_json(const Darabonba::Json& j, FlightStopInfoList& obj) { 
              DARABONBA_PTR_FROM_JSON(stop_airport, stopAirport_);
              DARABONBA_PTR_FROM_JSON(stop_airport_name, stopAirportName_);
              DARABONBA_PTR_FROM_JSON(stop_arr_term, stopArrTerm_);
              DARABONBA_PTR_FROM_JSON(stop_arr_time, stopArrTime_);
              DARABONBA_PTR_FROM_JSON(stop_city_code, stopCityCode_);
              DARABONBA_PTR_FROM_JSON(stop_city_name, stopCityName_);
              DARABONBA_PTR_FROM_JSON(stop_dep_term, stopDepTerm_);
              DARABONBA_PTR_FROM_JSON(stop_dep_time, stopDepTime_);
              DARABONBA_PTR_FROM_JSON(stop_time, stopTime_);
            };
            FlightStopInfoList() = default ;
            FlightStopInfoList(const FlightStopInfoList &) = default ;
            FlightStopInfoList(FlightStopInfoList &&) = default ;
            FlightStopInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~FlightStopInfoList() = default ;
            FlightStopInfoList& operator=(const FlightStopInfoList &) = default ;
            FlightStopInfoList& operator=(FlightStopInfoList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->stopAirport_ == nullptr
        && this->stopAirportName_ == nullptr && this->stopArrTerm_ == nullptr && this->stopArrTime_ == nullptr && this->stopCityCode_ == nullptr && this->stopCityName_ == nullptr
        && this->stopDepTerm_ == nullptr && this->stopDepTime_ == nullptr && this->stopTime_ == nullptr; };
            // stopAirport Field Functions 
            bool hasStopAirport() const { return this->stopAirport_ != nullptr;};
            void deleteStopAirport() { this->stopAirport_ = nullptr;};
            inline string getStopAirport() const { DARABONBA_PTR_GET_DEFAULT(stopAirport_, "") };
            inline FlightStopInfoList& setStopAirport(string stopAirport) { DARABONBA_PTR_SET_VALUE(stopAirport_, stopAirport) };


            // stopAirportName Field Functions 
            bool hasStopAirportName() const { return this->stopAirportName_ != nullptr;};
            void deleteStopAirportName() { this->stopAirportName_ = nullptr;};
            inline string getStopAirportName() const { DARABONBA_PTR_GET_DEFAULT(stopAirportName_, "") };
            inline FlightStopInfoList& setStopAirportName(string stopAirportName) { DARABONBA_PTR_SET_VALUE(stopAirportName_, stopAirportName) };


            // stopArrTerm Field Functions 
            bool hasStopArrTerm() const { return this->stopArrTerm_ != nullptr;};
            void deleteStopArrTerm() { this->stopArrTerm_ = nullptr;};
            inline string getStopArrTerm() const { DARABONBA_PTR_GET_DEFAULT(stopArrTerm_, "") };
            inline FlightStopInfoList& setStopArrTerm(string stopArrTerm) { DARABONBA_PTR_SET_VALUE(stopArrTerm_, stopArrTerm) };


            // stopArrTime Field Functions 
            bool hasStopArrTime() const { return this->stopArrTime_ != nullptr;};
            void deleteStopArrTime() { this->stopArrTime_ = nullptr;};
            inline string getStopArrTime() const { DARABONBA_PTR_GET_DEFAULT(stopArrTime_, "") };
            inline FlightStopInfoList& setStopArrTime(string stopArrTime) { DARABONBA_PTR_SET_VALUE(stopArrTime_, stopArrTime) };


            // stopCityCode Field Functions 
            bool hasStopCityCode() const { return this->stopCityCode_ != nullptr;};
            void deleteStopCityCode() { this->stopCityCode_ = nullptr;};
            inline string getStopCityCode() const { DARABONBA_PTR_GET_DEFAULT(stopCityCode_, "") };
            inline FlightStopInfoList& setStopCityCode(string stopCityCode) { DARABONBA_PTR_SET_VALUE(stopCityCode_, stopCityCode) };


            // stopCityName Field Functions 
            bool hasStopCityName() const { return this->stopCityName_ != nullptr;};
            void deleteStopCityName() { this->stopCityName_ = nullptr;};
            inline string getStopCityName() const { DARABONBA_PTR_GET_DEFAULT(stopCityName_, "") };
            inline FlightStopInfoList& setStopCityName(string stopCityName) { DARABONBA_PTR_SET_VALUE(stopCityName_, stopCityName) };


            // stopDepTerm Field Functions 
            bool hasStopDepTerm() const { return this->stopDepTerm_ != nullptr;};
            void deleteStopDepTerm() { this->stopDepTerm_ = nullptr;};
            inline string getStopDepTerm() const { DARABONBA_PTR_GET_DEFAULT(stopDepTerm_, "") };
            inline FlightStopInfoList& setStopDepTerm(string stopDepTerm) { DARABONBA_PTR_SET_VALUE(stopDepTerm_, stopDepTerm) };


            // stopDepTime Field Functions 
            bool hasStopDepTime() const { return this->stopDepTime_ != nullptr;};
            void deleteStopDepTime() { this->stopDepTime_ = nullptr;};
            inline string getStopDepTime() const { DARABONBA_PTR_GET_DEFAULT(stopDepTime_, "") };
            inline FlightStopInfoList& setStopDepTime(string stopDepTime) { DARABONBA_PTR_SET_VALUE(stopDepTime_, stopDepTime) };


            // stopTime Field Functions 
            bool hasStopTime() const { return this->stopTime_ != nullptr;};
            void deleteStopTime() { this->stopTime_ = nullptr;};
            inline string getStopTime() const { DARABONBA_PTR_GET_DEFAULT(stopTime_, "") };
            inline FlightStopInfoList& setStopTime(string stopTime) { DARABONBA_PTR_SET_VALUE(stopTime_, stopTime) };


          protected:
            shared_ptr<string> stopAirport_ {};
            shared_ptr<string> stopAirportName_ {};
            shared_ptr<string> stopArrTerm_ {};
            shared_ptr<string> stopArrTime_ {};
            shared_ptr<string> stopCityCode_ {};
            shared_ptr<string> stopCityName_ {};
            shared_ptr<string> stopDepTerm_ {};
            shared_ptr<string> stopDepTime_ {};
            shared_ptr<string> stopTime_ {};
          };

          class FlightShareInfo : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const FlightShareInfo& obj) { 
              DARABONBA_PTR_TO_JSON(operating_airline_info, operatingAirlineInfo_);
              DARABONBA_PTR_TO_JSON(operating_flight_no, operatingFlightNo_);
            };
            friend void from_json(const Darabonba::Json& j, FlightShareInfo& obj) { 
              DARABONBA_PTR_FROM_JSON(operating_airline_info, operatingAirlineInfo_);
              DARABONBA_PTR_FROM_JSON(operating_flight_no, operatingFlightNo_);
            };
            FlightShareInfo() = default ;
            FlightShareInfo(const FlightShareInfo &) = default ;
            FlightShareInfo(FlightShareInfo &&) = default ;
            FlightShareInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~FlightShareInfo() = default ;
            FlightShareInfo& operator=(const FlightShareInfo &) = default ;
            FlightShareInfo& operator=(FlightShareInfo &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class OperatingAirlineInfo : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const OperatingAirlineInfo& obj) { 
                DARABONBA_PTR_TO_JSON(airline_code, airlineCode_);
                DARABONBA_PTR_TO_JSON(airline_name, airlineName_);
                DARABONBA_PTR_TO_JSON(short_name, shortName_);
              };
              friend void from_json(const Darabonba::Json& j, OperatingAirlineInfo& obj) { 
                DARABONBA_PTR_FROM_JSON(airline_code, airlineCode_);
                DARABONBA_PTR_FROM_JSON(airline_name, airlineName_);
                DARABONBA_PTR_FROM_JSON(short_name, shortName_);
              };
              OperatingAirlineInfo() = default ;
              OperatingAirlineInfo(const OperatingAirlineInfo &) = default ;
              OperatingAirlineInfo(OperatingAirlineInfo &&) = default ;
              OperatingAirlineInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~OperatingAirlineInfo() = default ;
              OperatingAirlineInfo& operator=(const OperatingAirlineInfo &) = default ;
              OperatingAirlineInfo& operator=(OperatingAirlineInfo &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->airlineCode_ == nullptr
        && this->airlineName_ == nullptr && this->shortName_ == nullptr; };
              // airlineCode Field Functions 
              bool hasAirlineCode() const { return this->airlineCode_ != nullptr;};
              void deleteAirlineCode() { this->airlineCode_ = nullptr;};
              inline string getAirlineCode() const { DARABONBA_PTR_GET_DEFAULT(airlineCode_, "") };
              inline OperatingAirlineInfo& setAirlineCode(string airlineCode) { DARABONBA_PTR_SET_VALUE(airlineCode_, airlineCode) };


              // airlineName Field Functions 
              bool hasAirlineName() const { return this->airlineName_ != nullptr;};
              void deleteAirlineName() { this->airlineName_ = nullptr;};
              inline string getAirlineName() const { DARABONBA_PTR_GET_DEFAULT(airlineName_, "") };
              inline OperatingAirlineInfo& setAirlineName(string airlineName) { DARABONBA_PTR_SET_VALUE(airlineName_, airlineName) };


              // shortName Field Functions 
              bool hasShortName() const { return this->shortName_ != nullptr;};
              void deleteShortName() { this->shortName_ = nullptr;};
              inline string getShortName() const { DARABONBA_PTR_GET_DEFAULT(shortName_, "") };
              inline OperatingAirlineInfo& setShortName(string shortName) { DARABONBA_PTR_SET_VALUE(shortName_, shortName) };


            protected:
              shared_ptr<string> airlineCode_ {};
              shared_ptr<string> airlineName_ {};
              shared_ptr<string> shortName_ {};
            };

            virtual bool empty() const override { return this->operatingAirlineInfo_ == nullptr
        && this->operatingFlightNo_ == nullptr; };
            // operatingAirlineInfo Field Functions 
            bool hasOperatingAirlineInfo() const { return this->operatingAirlineInfo_ != nullptr;};
            void deleteOperatingAirlineInfo() { this->operatingAirlineInfo_ = nullptr;};
            inline const FlightShareInfo::OperatingAirlineInfo & getOperatingAirlineInfo() const { DARABONBA_PTR_GET_CONST(operatingAirlineInfo_, FlightShareInfo::OperatingAirlineInfo) };
            inline FlightShareInfo::OperatingAirlineInfo getOperatingAirlineInfo() { DARABONBA_PTR_GET(operatingAirlineInfo_, FlightShareInfo::OperatingAirlineInfo) };
            inline FlightShareInfo& setOperatingAirlineInfo(const FlightShareInfo::OperatingAirlineInfo & operatingAirlineInfo) { DARABONBA_PTR_SET_VALUE(operatingAirlineInfo_, operatingAirlineInfo) };
            inline FlightShareInfo& setOperatingAirlineInfo(FlightShareInfo::OperatingAirlineInfo && operatingAirlineInfo) { DARABONBA_PTR_SET_RVALUE(operatingAirlineInfo_, operatingAirlineInfo) };


            // operatingFlightNo Field Functions 
            bool hasOperatingFlightNo() const { return this->operatingFlightNo_ != nullptr;};
            void deleteOperatingFlightNo() { this->operatingFlightNo_ = nullptr;};
            inline string getOperatingFlightNo() const { DARABONBA_PTR_GET_DEFAULT(operatingFlightNo_, "") };
            inline FlightShareInfo& setOperatingFlightNo(string operatingFlightNo) { DARABONBA_PTR_SET_VALUE(operatingFlightNo_, operatingFlightNo) };


          protected:
            shared_ptr<FlightShareInfo::OperatingAirlineInfo> operatingAirlineInfo_ {};
            shared_ptr<string> operatingFlightNo_ {};
          };

          class DepAirportInfo : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const DepAirportInfo& obj) { 
              DARABONBA_PTR_TO_JSON(airport_code, airportCode_);
              DARABONBA_PTR_TO_JSON(airport_name, airportName_);
              DARABONBA_PTR_TO_JSON(airport_short_name, airportShortName_);
              DARABONBA_PTR_TO_JSON(terminal, terminal_);
            };
            friend void from_json(const Darabonba::Json& j, DepAirportInfo& obj) { 
              DARABONBA_PTR_FROM_JSON(airport_code, airportCode_);
              DARABONBA_PTR_FROM_JSON(airport_name, airportName_);
              DARABONBA_PTR_FROM_JSON(airport_short_name, airportShortName_);
              DARABONBA_PTR_FROM_JSON(terminal, terminal_);
            };
            DepAirportInfo() = default ;
            DepAirportInfo(const DepAirportInfo &) = default ;
            DepAirportInfo(DepAirportInfo &&) = default ;
            DepAirportInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~DepAirportInfo() = default ;
            DepAirportInfo& operator=(const DepAirportInfo &) = default ;
            DepAirportInfo& operator=(DepAirportInfo &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->airportCode_ == nullptr
        && this->airportName_ == nullptr && this->airportShortName_ == nullptr && this->terminal_ == nullptr; };
            // airportCode Field Functions 
            bool hasAirportCode() const { return this->airportCode_ != nullptr;};
            void deleteAirportCode() { this->airportCode_ = nullptr;};
            inline string getAirportCode() const { DARABONBA_PTR_GET_DEFAULT(airportCode_, "") };
            inline DepAirportInfo& setAirportCode(string airportCode) { DARABONBA_PTR_SET_VALUE(airportCode_, airportCode) };


            // airportName Field Functions 
            bool hasAirportName() const { return this->airportName_ != nullptr;};
            void deleteAirportName() { this->airportName_ = nullptr;};
            inline string getAirportName() const { DARABONBA_PTR_GET_DEFAULT(airportName_, "") };
            inline DepAirportInfo& setAirportName(string airportName) { DARABONBA_PTR_SET_VALUE(airportName_, airportName) };


            // airportShortName Field Functions 
            bool hasAirportShortName() const { return this->airportShortName_ != nullptr;};
            void deleteAirportShortName() { this->airportShortName_ = nullptr;};
            inline string getAirportShortName() const { DARABONBA_PTR_GET_DEFAULT(airportShortName_, "") };
            inline DepAirportInfo& setAirportShortName(string airportShortName) { DARABONBA_PTR_SET_VALUE(airportShortName_, airportShortName) };


            // terminal Field Functions 
            bool hasTerminal() const { return this->terminal_ != nullptr;};
            void deleteTerminal() { this->terminal_ = nullptr;};
            inline string getTerminal() const { DARABONBA_PTR_GET_DEFAULT(terminal_, "") };
            inline DepAirportInfo& setTerminal(string terminal) { DARABONBA_PTR_SET_VALUE(terminal_, terminal) };


          protected:
            shared_ptr<string> airportCode_ {};
            shared_ptr<string> airportName_ {};
            shared_ptr<string> airportShortName_ {};
            shared_ptr<string> terminal_ {};
          };

          class ArrAirportInfo : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ArrAirportInfo& obj) { 
              DARABONBA_PTR_TO_JSON(airport_code, airportCode_);
              DARABONBA_PTR_TO_JSON(airport_name, airportName_);
              DARABONBA_PTR_TO_JSON(airport_short_name, airportShortName_);
              DARABONBA_PTR_TO_JSON(terminal, terminal_);
            };
            friend void from_json(const Darabonba::Json& j, ArrAirportInfo& obj) { 
              DARABONBA_PTR_FROM_JSON(airport_code, airportCode_);
              DARABONBA_PTR_FROM_JSON(airport_name, airportName_);
              DARABONBA_PTR_FROM_JSON(airport_short_name, airportShortName_);
              DARABONBA_PTR_FROM_JSON(terminal, terminal_);
            };
            ArrAirportInfo() = default ;
            ArrAirportInfo(const ArrAirportInfo &) = default ;
            ArrAirportInfo(ArrAirportInfo &&) = default ;
            ArrAirportInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ArrAirportInfo() = default ;
            ArrAirportInfo& operator=(const ArrAirportInfo &) = default ;
            ArrAirportInfo& operator=(ArrAirportInfo &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->airportCode_ == nullptr
        && this->airportName_ == nullptr && this->airportShortName_ == nullptr && this->terminal_ == nullptr; };
            // airportCode Field Functions 
            bool hasAirportCode() const { return this->airportCode_ != nullptr;};
            void deleteAirportCode() { this->airportCode_ = nullptr;};
            inline string getAirportCode() const { DARABONBA_PTR_GET_DEFAULT(airportCode_, "") };
            inline ArrAirportInfo& setAirportCode(string airportCode) { DARABONBA_PTR_SET_VALUE(airportCode_, airportCode) };


            // airportName Field Functions 
            bool hasAirportName() const { return this->airportName_ != nullptr;};
            void deleteAirportName() { this->airportName_ = nullptr;};
            inline string getAirportName() const { DARABONBA_PTR_GET_DEFAULT(airportName_, "") };
            inline ArrAirportInfo& setAirportName(string airportName) { DARABONBA_PTR_SET_VALUE(airportName_, airportName) };


            // airportShortName Field Functions 
            bool hasAirportShortName() const { return this->airportShortName_ != nullptr;};
            void deleteAirportShortName() { this->airportShortName_ = nullptr;};
            inline string getAirportShortName() const { DARABONBA_PTR_GET_DEFAULT(airportShortName_, "") };
            inline ArrAirportInfo& setAirportShortName(string airportShortName) { DARABONBA_PTR_SET_VALUE(airportShortName_, airportShortName) };


            // terminal Field Functions 
            bool hasTerminal() const { return this->terminal_ != nullptr;};
            void deleteTerminal() { this->terminal_ = nullptr;};
            inline string getTerminal() const { DARABONBA_PTR_GET_DEFAULT(terminal_, "") };
            inline ArrAirportInfo& setTerminal(string terminal) { DARABONBA_PTR_SET_VALUE(terminal_, terminal) };


          protected:
            shared_ptr<string> airportCode_ {};
            shared_ptr<string> airportName_ {};
            shared_ptr<string> airportShortName_ {};
            shared_ptr<string> terminal_ {};
          };

          class AirlineInfo : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const AirlineInfo& obj) { 
              DARABONBA_PTR_TO_JSON(airline_code, airlineCode_);
              DARABONBA_PTR_TO_JSON(airline_name, airlineName_);
              DARABONBA_PTR_TO_JSON(short_name, shortName_);
            };
            friend void from_json(const Darabonba::Json& j, AirlineInfo& obj) { 
              DARABONBA_PTR_FROM_JSON(airline_code, airlineCode_);
              DARABONBA_PTR_FROM_JSON(airline_name, airlineName_);
              DARABONBA_PTR_FROM_JSON(short_name, shortName_);
            };
            AirlineInfo() = default ;
            AirlineInfo(const AirlineInfo &) = default ;
            AirlineInfo(AirlineInfo &&) = default ;
            AirlineInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~AirlineInfo() = default ;
            AirlineInfo& operator=(const AirlineInfo &) = default ;
            AirlineInfo& operator=(AirlineInfo &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->airlineCode_ == nullptr
        && this->airlineName_ == nullptr && this->shortName_ == nullptr; };
            // airlineCode Field Functions 
            bool hasAirlineCode() const { return this->airlineCode_ != nullptr;};
            void deleteAirlineCode() { this->airlineCode_ = nullptr;};
            inline string getAirlineCode() const { DARABONBA_PTR_GET_DEFAULT(airlineCode_, "") };
            inline AirlineInfo& setAirlineCode(string airlineCode) { DARABONBA_PTR_SET_VALUE(airlineCode_, airlineCode) };


            // airlineName Field Functions 
            bool hasAirlineName() const { return this->airlineName_ != nullptr;};
            void deleteAirlineName() { this->airlineName_ = nullptr;};
            inline string getAirlineName() const { DARABONBA_PTR_GET_DEFAULT(airlineName_, "") };
            inline AirlineInfo& setAirlineName(string airlineName) { DARABONBA_PTR_SET_VALUE(airlineName_, airlineName) };


            // shortName Field Functions 
            bool hasShortName() const { return this->shortName_ != nullptr;};
            void deleteShortName() { this->shortName_ = nullptr;};
            inline string getShortName() const { DARABONBA_PTR_GET_DEFAULT(shortName_, "") };
            inline AirlineInfo& setShortName(string shortName) { DARABONBA_PTR_SET_VALUE(shortName_, shortName) };


          protected:
            shared_ptr<string> airlineCode_ {};
            shared_ptr<string> airlineName_ {};
            shared_ptr<string> shortName_ {};
          };

          virtual bool empty() const override { return this->airlineInfo_ == nullptr
        && this->arrAirportInfo_ == nullptr && this->arrCityCode_ == nullptr && this->arrCityName_ == nullptr && this->arrTime_ == nullptr && this->depAirportInfo_ == nullptr
        && this->depCityCode_ == nullptr && this->depCityName_ == nullptr && this->depTime_ == nullptr && this->duration_ == nullptr && this->flightNo_ == nullptr
        && this->flightShareInfo_ == nullptr && this->flightSize_ == nullptr && this->flightStopInfoList_ == nullptr && this->flightType_ == nullptr && this->journeyIndex_ == nullptr
        && this->luggageDirectInfo_ == nullptr && this->manufacturer_ == nullptr && this->mealDesc_ == nullptr && this->oneMore_ == nullptr && this->oneMoreShow_ == nullptr
        && this->segmentIndex_ == nullptr && this->segmentKey_ == nullptr && this->segmentVisaRemark_ == nullptr && this->share_ == nullptr && this->shortFlightSize_ == nullptr
        && this->stop_ == nullptr && this->totalTime_ == nullptr; };
          // airlineInfo Field Functions 
          bool hasAirlineInfo() const { return this->airlineInfo_ != nullptr;};
          void deleteAirlineInfo() { this->airlineInfo_ = nullptr;};
          inline const FlightSegmentInfos::AirlineInfo & getAirlineInfo() const { DARABONBA_PTR_GET_CONST(airlineInfo_, FlightSegmentInfos::AirlineInfo) };
          inline FlightSegmentInfos::AirlineInfo getAirlineInfo() { DARABONBA_PTR_GET(airlineInfo_, FlightSegmentInfos::AirlineInfo) };
          inline FlightSegmentInfos& setAirlineInfo(const FlightSegmentInfos::AirlineInfo & airlineInfo) { DARABONBA_PTR_SET_VALUE(airlineInfo_, airlineInfo) };
          inline FlightSegmentInfos& setAirlineInfo(FlightSegmentInfos::AirlineInfo && airlineInfo) { DARABONBA_PTR_SET_RVALUE(airlineInfo_, airlineInfo) };


          // arrAirportInfo Field Functions 
          bool hasArrAirportInfo() const { return this->arrAirportInfo_ != nullptr;};
          void deleteArrAirportInfo() { this->arrAirportInfo_ = nullptr;};
          inline const FlightSegmentInfos::ArrAirportInfo & getArrAirportInfo() const { DARABONBA_PTR_GET_CONST(arrAirportInfo_, FlightSegmentInfos::ArrAirportInfo) };
          inline FlightSegmentInfos::ArrAirportInfo getArrAirportInfo() { DARABONBA_PTR_GET(arrAirportInfo_, FlightSegmentInfos::ArrAirportInfo) };
          inline FlightSegmentInfos& setArrAirportInfo(const FlightSegmentInfos::ArrAirportInfo & arrAirportInfo) { DARABONBA_PTR_SET_VALUE(arrAirportInfo_, arrAirportInfo) };
          inline FlightSegmentInfos& setArrAirportInfo(FlightSegmentInfos::ArrAirportInfo && arrAirportInfo) { DARABONBA_PTR_SET_RVALUE(arrAirportInfo_, arrAirportInfo) };


          // arrCityCode Field Functions 
          bool hasArrCityCode() const { return this->arrCityCode_ != nullptr;};
          void deleteArrCityCode() { this->arrCityCode_ = nullptr;};
          inline string getArrCityCode() const { DARABONBA_PTR_GET_DEFAULT(arrCityCode_, "") };
          inline FlightSegmentInfos& setArrCityCode(string arrCityCode) { DARABONBA_PTR_SET_VALUE(arrCityCode_, arrCityCode) };


          // arrCityName Field Functions 
          bool hasArrCityName() const { return this->arrCityName_ != nullptr;};
          void deleteArrCityName() { this->arrCityName_ = nullptr;};
          inline string getArrCityName() const { DARABONBA_PTR_GET_DEFAULT(arrCityName_, "") };
          inline FlightSegmentInfos& setArrCityName(string arrCityName) { DARABONBA_PTR_SET_VALUE(arrCityName_, arrCityName) };


          // arrTime Field Functions 
          bool hasArrTime() const { return this->arrTime_ != nullptr;};
          void deleteArrTime() { this->arrTime_ = nullptr;};
          inline string getArrTime() const { DARABONBA_PTR_GET_DEFAULT(arrTime_, "") };
          inline FlightSegmentInfos& setArrTime(string arrTime) { DARABONBA_PTR_SET_VALUE(arrTime_, arrTime) };


          // depAirportInfo Field Functions 
          bool hasDepAirportInfo() const { return this->depAirportInfo_ != nullptr;};
          void deleteDepAirportInfo() { this->depAirportInfo_ = nullptr;};
          inline const FlightSegmentInfos::DepAirportInfo & getDepAirportInfo() const { DARABONBA_PTR_GET_CONST(depAirportInfo_, FlightSegmentInfos::DepAirportInfo) };
          inline FlightSegmentInfos::DepAirportInfo getDepAirportInfo() { DARABONBA_PTR_GET(depAirportInfo_, FlightSegmentInfos::DepAirportInfo) };
          inline FlightSegmentInfos& setDepAirportInfo(const FlightSegmentInfos::DepAirportInfo & depAirportInfo) { DARABONBA_PTR_SET_VALUE(depAirportInfo_, depAirportInfo) };
          inline FlightSegmentInfos& setDepAirportInfo(FlightSegmentInfos::DepAirportInfo && depAirportInfo) { DARABONBA_PTR_SET_RVALUE(depAirportInfo_, depAirportInfo) };


          // depCityCode Field Functions 
          bool hasDepCityCode() const { return this->depCityCode_ != nullptr;};
          void deleteDepCityCode() { this->depCityCode_ = nullptr;};
          inline string getDepCityCode() const { DARABONBA_PTR_GET_DEFAULT(depCityCode_, "") };
          inline FlightSegmentInfos& setDepCityCode(string depCityCode) { DARABONBA_PTR_SET_VALUE(depCityCode_, depCityCode) };


          // depCityName Field Functions 
          bool hasDepCityName() const { return this->depCityName_ != nullptr;};
          void deleteDepCityName() { this->depCityName_ = nullptr;};
          inline string getDepCityName() const { DARABONBA_PTR_GET_DEFAULT(depCityName_, "") };
          inline FlightSegmentInfos& setDepCityName(string depCityName) { DARABONBA_PTR_SET_VALUE(depCityName_, depCityName) };


          // depTime Field Functions 
          bool hasDepTime() const { return this->depTime_ != nullptr;};
          void deleteDepTime() { this->depTime_ = nullptr;};
          inline string getDepTime() const { DARABONBA_PTR_GET_DEFAULT(depTime_, "") };
          inline FlightSegmentInfos& setDepTime(string depTime) { DARABONBA_PTR_SET_VALUE(depTime_, depTime) };


          // duration Field Functions 
          bool hasDuration() const { return this->duration_ != nullptr;};
          void deleteDuration() { this->duration_ = nullptr;};
          inline int32_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
          inline FlightSegmentInfos& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


          // flightNo Field Functions 
          bool hasFlightNo() const { return this->flightNo_ != nullptr;};
          void deleteFlightNo() { this->flightNo_ = nullptr;};
          inline string getFlightNo() const { DARABONBA_PTR_GET_DEFAULT(flightNo_, "") };
          inline FlightSegmentInfos& setFlightNo(string flightNo) { DARABONBA_PTR_SET_VALUE(flightNo_, flightNo) };


          // flightShareInfo Field Functions 
          bool hasFlightShareInfo() const { return this->flightShareInfo_ != nullptr;};
          void deleteFlightShareInfo() { this->flightShareInfo_ = nullptr;};
          inline const FlightSegmentInfos::FlightShareInfo & getFlightShareInfo() const { DARABONBA_PTR_GET_CONST(flightShareInfo_, FlightSegmentInfos::FlightShareInfo) };
          inline FlightSegmentInfos::FlightShareInfo getFlightShareInfo() { DARABONBA_PTR_GET(flightShareInfo_, FlightSegmentInfos::FlightShareInfo) };
          inline FlightSegmentInfos& setFlightShareInfo(const FlightSegmentInfos::FlightShareInfo & flightShareInfo) { DARABONBA_PTR_SET_VALUE(flightShareInfo_, flightShareInfo) };
          inline FlightSegmentInfos& setFlightShareInfo(FlightSegmentInfos::FlightShareInfo && flightShareInfo) { DARABONBA_PTR_SET_RVALUE(flightShareInfo_, flightShareInfo) };


          // flightSize Field Functions 
          bool hasFlightSize() const { return this->flightSize_ != nullptr;};
          void deleteFlightSize() { this->flightSize_ = nullptr;};
          inline string getFlightSize() const { DARABONBA_PTR_GET_DEFAULT(flightSize_, "") };
          inline FlightSegmentInfos& setFlightSize(string flightSize) { DARABONBA_PTR_SET_VALUE(flightSize_, flightSize) };


          // flightStopInfoList Field Functions 
          bool hasFlightStopInfoList() const { return this->flightStopInfoList_ != nullptr;};
          void deleteFlightStopInfoList() { this->flightStopInfoList_ = nullptr;};
          inline const vector<FlightSegmentInfos::FlightStopInfoList> & getFlightStopInfoList() const { DARABONBA_PTR_GET_CONST(flightStopInfoList_, vector<FlightSegmentInfos::FlightStopInfoList>) };
          inline vector<FlightSegmentInfos::FlightStopInfoList> getFlightStopInfoList() { DARABONBA_PTR_GET(flightStopInfoList_, vector<FlightSegmentInfos::FlightStopInfoList>) };
          inline FlightSegmentInfos& setFlightStopInfoList(const vector<FlightSegmentInfos::FlightStopInfoList> & flightStopInfoList) { DARABONBA_PTR_SET_VALUE(flightStopInfoList_, flightStopInfoList) };
          inline FlightSegmentInfos& setFlightStopInfoList(vector<FlightSegmentInfos::FlightStopInfoList> && flightStopInfoList) { DARABONBA_PTR_SET_RVALUE(flightStopInfoList_, flightStopInfoList) };


          // flightType Field Functions 
          bool hasFlightType() const { return this->flightType_ != nullptr;};
          void deleteFlightType() { this->flightType_ = nullptr;};
          inline string getFlightType() const { DARABONBA_PTR_GET_DEFAULT(flightType_, "") };
          inline FlightSegmentInfos& setFlightType(string flightType) { DARABONBA_PTR_SET_VALUE(flightType_, flightType) };


          // journeyIndex Field Functions 
          bool hasJourneyIndex() const { return this->journeyIndex_ != nullptr;};
          void deleteJourneyIndex() { this->journeyIndex_ = nullptr;};
          inline int32_t getJourneyIndex() const { DARABONBA_PTR_GET_DEFAULT(journeyIndex_, 0) };
          inline FlightSegmentInfos& setJourneyIndex(int32_t journeyIndex) { DARABONBA_PTR_SET_VALUE(journeyIndex_, journeyIndex) };


          // luggageDirectInfo Field Functions 
          bool hasLuggageDirectInfo() const { return this->luggageDirectInfo_ != nullptr;};
          void deleteLuggageDirectInfo() { this->luggageDirectInfo_ = nullptr;};
          inline const FlightSegmentInfos::LuggageDirectInfo & getLuggageDirectInfo() const { DARABONBA_PTR_GET_CONST(luggageDirectInfo_, FlightSegmentInfos::LuggageDirectInfo) };
          inline FlightSegmentInfos::LuggageDirectInfo getLuggageDirectInfo() { DARABONBA_PTR_GET(luggageDirectInfo_, FlightSegmentInfos::LuggageDirectInfo) };
          inline FlightSegmentInfos& setLuggageDirectInfo(const FlightSegmentInfos::LuggageDirectInfo & luggageDirectInfo) { DARABONBA_PTR_SET_VALUE(luggageDirectInfo_, luggageDirectInfo) };
          inline FlightSegmentInfos& setLuggageDirectInfo(FlightSegmentInfos::LuggageDirectInfo && luggageDirectInfo) { DARABONBA_PTR_SET_RVALUE(luggageDirectInfo_, luggageDirectInfo) };


          // manufacturer Field Functions 
          bool hasManufacturer() const { return this->manufacturer_ != nullptr;};
          void deleteManufacturer() { this->manufacturer_ = nullptr;};
          inline string getManufacturer() const { DARABONBA_PTR_GET_DEFAULT(manufacturer_, "") };
          inline FlightSegmentInfos& setManufacturer(string manufacturer) { DARABONBA_PTR_SET_VALUE(manufacturer_, manufacturer) };


          // mealDesc Field Functions 
          bool hasMealDesc() const { return this->mealDesc_ != nullptr;};
          void deleteMealDesc() { this->mealDesc_ = nullptr;};
          inline string getMealDesc() const { DARABONBA_PTR_GET_DEFAULT(mealDesc_, "") };
          inline FlightSegmentInfos& setMealDesc(string mealDesc) { DARABONBA_PTR_SET_VALUE(mealDesc_, mealDesc) };


          // oneMore Field Functions 
          bool hasOneMore() const { return this->oneMore_ != nullptr;};
          void deleteOneMore() { this->oneMore_ = nullptr;};
          inline int32_t getOneMore() const { DARABONBA_PTR_GET_DEFAULT(oneMore_, 0) };
          inline FlightSegmentInfos& setOneMore(int32_t oneMore) { DARABONBA_PTR_SET_VALUE(oneMore_, oneMore) };


          // oneMoreShow Field Functions 
          bool hasOneMoreShow() const { return this->oneMoreShow_ != nullptr;};
          void deleteOneMoreShow() { this->oneMoreShow_ = nullptr;};
          inline string getOneMoreShow() const { DARABONBA_PTR_GET_DEFAULT(oneMoreShow_, "") };
          inline FlightSegmentInfos& setOneMoreShow(string oneMoreShow) { DARABONBA_PTR_SET_VALUE(oneMoreShow_, oneMoreShow) };


          // segmentIndex Field Functions 
          bool hasSegmentIndex() const { return this->segmentIndex_ != nullptr;};
          void deleteSegmentIndex() { this->segmentIndex_ = nullptr;};
          inline int32_t getSegmentIndex() const { DARABONBA_PTR_GET_DEFAULT(segmentIndex_, 0) };
          inline FlightSegmentInfos& setSegmentIndex(int32_t segmentIndex) { DARABONBA_PTR_SET_VALUE(segmentIndex_, segmentIndex) };


          // segmentKey Field Functions 
          bool hasSegmentKey() const { return this->segmentKey_ != nullptr;};
          void deleteSegmentKey() { this->segmentKey_ = nullptr;};
          inline string getSegmentKey() const { DARABONBA_PTR_GET_DEFAULT(segmentKey_, "") };
          inline FlightSegmentInfos& setSegmentKey(string segmentKey) { DARABONBA_PTR_SET_VALUE(segmentKey_, segmentKey) };


          // segmentVisaRemark Field Functions 
          bool hasSegmentVisaRemark() const { return this->segmentVisaRemark_ != nullptr;};
          void deleteSegmentVisaRemark() { this->segmentVisaRemark_ = nullptr;};
          inline const FlightSegmentInfos::SegmentVisaRemark & getSegmentVisaRemark() const { DARABONBA_PTR_GET_CONST(segmentVisaRemark_, FlightSegmentInfos::SegmentVisaRemark) };
          inline FlightSegmentInfos::SegmentVisaRemark getSegmentVisaRemark() { DARABONBA_PTR_GET(segmentVisaRemark_, FlightSegmentInfos::SegmentVisaRemark) };
          inline FlightSegmentInfos& setSegmentVisaRemark(const FlightSegmentInfos::SegmentVisaRemark & segmentVisaRemark) { DARABONBA_PTR_SET_VALUE(segmentVisaRemark_, segmentVisaRemark) };
          inline FlightSegmentInfos& setSegmentVisaRemark(FlightSegmentInfos::SegmentVisaRemark && segmentVisaRemark) { DARABONBA_PTR_SET_RVALUE(segmentVisaRemark_, segmentVisaRemark) };


          // share Field Functions 
          bool hasShare() const { return this->share_ != nullptr;};
          void deleteShare() { this->share_ = nullptr;};
          inline bool getShare() const { DARABONBA_PTR_GET_DEFAULT(share_, false) };
          inline FlightSegmentInfos& setShare(bool share) { DARABONBA_PTR_SET_VALUE(share_, share) };


          // shortFlightSize Field Functions 
          bool hasShortFlightSize() const { return this->shortFlightSize_ != nullptr;};
          void deleteShortFlightSize() { this->shortFlightSize_ = nullptr;};
          inline string getShortFlightSize() const { DARABONBA_PTR_GET_DEFAULT(shortFlightSize_, "") };
          inline FlightSegmentInfos& setShortFlightSize(string shortFlightSize) { DARABONBA_PTR_SET_VALUE(shortFlightSize_, shortFlightSize) };


          // stop Field Functions 
          bool hasStop() const { return this->stop_ != nullptr;};
          void deleteStop() { this->stop_ = nullptr;};
          inline bool getStop() const { DARABONBA_PTR_GET_DEFAULT(stop_, false) };
          inline FlightSegmentInfos& setStop(bool stop) { DARABONBA_PTR_SET_VALUE(stop_, stop) };


          // totalTime Field Functions 
          bool hasTotalTime() const { return this->totalTime_ != nullptr;};
          void deleteTotalTime() { this->totalTime_ = nullptr;};
          inline string getTotalTime() const { DARABONBA_PTR_GET_DEFAULT(totalTime_, "") };
          inline FlightSegmentInfos& setTotalTime(string totalTime) { DARABONBA_PTR_SET_VALUE(totalTime_, totalTime) };


        protected:
          shared_ptr<FlightSegmentInfos::AirlineInfo> airlineInfo_ {};
          shared_ptr<FlightSegmentInfos::ArrAirportInfo> arrAirportInfo_ {};
          shared_ptr<string> arrCityCode_ {};
          shared_ptr<string> arrCityName_ {};
          shared_ptr<string> arrTime_ {};
          shared_ptr<FlightSegmentInfos::DepAirportInfo> depAirportInfo_ {};
          shared_ptr<string> depCityCode_ {};
          shared_ptr<string> depCityName_ {};
          shared_ptr<string> depTime_ {};
          shared_ptr<int32_t> duration_ {};
          shared_ptr<string> flightNo_ {};
          shared_ptr<FlightSegmentInfos::FlightShareInfo> flightShareInfo_ {};
          shared_ptr<string> flightSize_ {};
          shared_ptr<vector<FlightSegmentInfos::FlightStopInfoList>> flightStopInfoList_ {};
          shared_ptr<string> flightType_ {};
          shared_ptr<int32_t> journeyIndex_ {};
          shared_ptr<FlightSegmentInfos::LuggageDirectInfo> luggageDirectInfo_ {};
          shared_ptr<string> manufacturer_ {};
          shared_ptr<string> mealDesc_ {};
          shared_ptr<int32_t> oneMore_ {};
          shared_ptr<string> oneMoreShow_ {};
          shared_ptr<int32_t> segmentIndex_ {};
          shared_ptr<string> segmentKey_ {};
          shared_ptr<FlightSegmentInfos::SegmentVisaRemark> segmentVisaRemark_ {};
          shared_ptr<bool> share_ {};
          shared_ptr<string> shortFlightSize_ {};
          shared_ptr<bool> stop_ {};
          shared_ptr<string> totalTime_ {};
        };

        virtual bool empty() const override { return this->arrCityCode_ == nullptr
        && this->arrCityName_ == nullptr && this->arrTime_ == nullptr && this->depCityCode_ == nullptr && this->depCityName_ == nullptr && this->depTime_ == nullptr
        && this->duration_ == nullptr && this->flightSegmentInfos_ == nullptr && this->journeyIndex_ == nullptr && this->transferTime_ == nullptr; };
        // arrCityCode Field Functions 
        bool hasArrCityCode() const { return this->arrCityCode_ != nullptr;};
        void deleteArrCityCode() { this->arrCityCode_ = nullptr;};
        inline string getArrCityCode() const { DARABONBA_PTR_GET_DEFAULT(arrCityCode_, "") };
        inline OriginJourneyList& setArrCityCode(string arrCityCode) { DARABONBA_PTR_SET_VALUE(arrCityCode_, arrCityCode) };


        // arrCityName Field Functions 
        bool hasArrCityName() const { return this->arrCityName_ != nullptr;};
        void deleteArrCityName() { this->arrCityName_ = nullptr;};
        inline string getArrCityName() const { DARABONBA_PTR_GET_DEFAULT(arrCityName_, "") };
        inline OriginJourneyList& setArrCityName(string arrCityName) { DARABONBA_PTR_SET_VALUE(arrCityName_, arrCityName) };


        // arrTime Field Functions 
        bool hasArrTime() const { return this->arrTime_ != nullptr;};
        void deleteArrTime() { this->arrTime_ = nullptr;};
        inline string getArrTime() const { DARABONBA_PTR_GET_DEFAULT(arrTime_, "") };
        inline OriginJourneyList& setArrTime(string arrTime) { DARABONBA_PTR_SET_VALUE(arrTime_, arrTime) };


        // depCityCode Field Functions 
        bool hasDepCityCode() const { return this->depCityCode_ != nullptr;};
        void deleteDepCityCode() { this->depCityCode_ = nullptr;};
        inline string getDepCityCode() const { DARABONBA_PTR_GET_DEFAULT(depCityCode_, "") };
        inline OriginJourneyList& setDepCityCode(string depCityCode) { DARABONBA_PTR_SET_VALUE(depCityCode_, depCityCode) };


        // depCityName Field Functions 
        bool hasDepCityName() const { return this->depCityName_ != nullptr;};
        void deleteDepCityName() { this->depCityName_ = nullptr;};
        inline string getDepCityName() const { DARABONBA_PTR_GET_DEFAULT(depCityName_, "") };
        inline OriginJourneyList& setDepCityName(string depCityName) { DARABONBA_PTR_SET_VALUE(depCityName_, depCityName) };


        // depTime Field Functions 
        bool hasDepTime() const { return this->depTime_ != nullptr;};
        void deleteDepTime() { this->depTime_ = nullptr;};
        inline string getDepTime() const { DARABONBA_PTR_GET_DEFAULT(depTime_, "") };
        inline OriginJourneyList& setDepTime(string depTime) { DARABONBA_PTR_SET_VALUE(depTime_, depTime) };


        // duration Field Functions 
        bool hasDuration() const { return this->duration_ != nullptr;};
        void deleteDuration() { this->duration_ = nullptr;};
        inline int32_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
        inline OriginJourneyList& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


        // flightSegmentInfos Field Functions 
        bool hasFlightSegmentInfos() const { return this->flightSegmentInfos_ != nullptr;};
        void deleteFlightSegmentInfos() { this->flightSegmentInfos_ = nullptr;};
        inline const vector<OriginJourneyList::FlightSegmentInfos> & getFlightSegmentInfos() const { DARABONBA_PTR_GET_CONST(flightSegmentInfos_, vector<OriginJourneyList::FlightSegmentInfos>) };
        inline vector<OriginJourneyList::FlightSegmentInfos> getFlightSegmentInfos() { DARABONBA_PTR_GET(flightSegmentInfos_, vector<OriginJourneyList::FlightSegmentInfos>) };
        inline OriginJourneyList& setFlightSegmentInfos(const vector<OriginJourneyList::FlightSegmentInfos> & flightSegmentInfos) { DARABONBA_PTR_SET_VALUE(flightSegmentInfos_, flightSegmentInfos) };
        inline OriginJourneyList& setFlightSegmentInfos(vector<OriginJourneyList::FlightSegmentInfos> && flightSegmentInfos) { DARABONBA_PTR_SET_RVALUE(flightSegmentInfos_, flightSegmentInfos) };


        // journeyIndex Field Functions 
        bool hasJourneyIndex() const { return this->journeyIndex_ != nullptr;};
        void deleteJourneyIndex() { this->journeyIndex_ = nullptr;};
        inline int32_t getJourneyIndex() const { DARABONBA_PTR_GET_DEFAULT(journeyIndex_, 0) };
        inline OriginJourneyList& setJourneyIndex(int32_t journeyIndex) { DARABONBA_PTR_SET_VALUE(journeyIndex_, journeyIndex) };


        // transferTime Field Functions 
        bool hasTransferTime() const { return this->transferTime_ != nullptr;};
        void deleteTransferTime() { this->transferTime_ = nullptr;};
        inline int32_t getTransferTime() const { DARABONBA_PTR_GET_DEFAULT(transferTime_, 0) };
        inline OriginJourneyList& setTransferTime(int32_t transferTime) { DARABONBA_PTR_SET_VALUE(transferTime_, transferTime) };


      protected:
        shared_ptr<string> arrCityCode_ {};
        shared_ptr<string> arrCityName_ {};
        shared_ptr<string> arrTime_ {};
        shared_ptr<string> depCityCode_ {};
        shared_ptr<string> depCityName_ {};
        shared_ptr<string> depTime_ {};
        shared_ptr<int32_t> duration_ {};
        shared_ptr<vector<OriginJourneyList::FlightSegmentInfos>> flightSegmentInfos_ {};
        shared_ptr<int32_t> journeyIndex_ {};
        shared_ptr<int32_t> transferTime_ {};
      };

      class JourneyList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const JourneyList& obj) { 
          DARABONBA_PTR_TO_JSON(arr_city_code, arrCityCode_);
          DARABONBA_PTR_TO_JSON(arr_city_name, arrCityName_);
          DARABONBA_PTR_TO_JSON(arr_time, arrTime_);
          DARABONBA_PTR_TO_JSON(dep_city_code, depCityCode_);
          DARABONBA_PTR_TO_JSON(dep_city_name, depCityName_);
          DARABONBA_PTR_TO_JSON(dep_time, depTime_);
          DARABONBA_PTR_TO_JSON(duration, duration_);
          DARABONBA_PTR_TO_JSON(flight_segment_infos, flightSegmentInfos_);
          DARABONBA_PTR_TO_JSON(journey_index, journeyIndex_);
          DARABONBA_PTR_TO_JSON(transfer_time, transferTime_);
        };
        friend void from_json(const Darabonba::Json& j, JourneyList& obj) { 
          DARABONBA_PTR_FROM_JSON(arr_city_code, arrCityCode_);
          DARABONBA_PTR_FROM_JSON(arr_city_name, arrCityName_);
          DARABONBA_PTR_FROM_JSON(arr_time, arrTime_);
          DARABONBA_PTR_FROM_JSON(dep_city_code, depCityCode_);
          DARABONBA_PTR_FROM_JSON(dep_city_name, depCityName_);
          DARABONBA_PTR_FROM_JSON(dep_time, depTime_);
          DARABONBA_PTR_FROM_JSON(duration, duration_);
          DARABONBA_PTR_FROM_JSON(flight_segment_infos, flightSegmentInfos_);
          DARABONBA_PTR_FROM_JSON(journey_index, journeyIndex_);
          DARABONBA_PTR_FROM_JSON(transfer_time, transferTime_);
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
        class FlightSegmentInfos : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const FlightSegmentInfos& obj) { 
            DARABONBA_PTR_TO_JSON(airline_info, airlineInfo_);
            DARABONBA_PTR_TO_JSON(arr_airport_info, arrAirportInfo_);
            DARABONBA_PTR_TO_JSON(arr_city_code, arrCityCode_);
            DARABONBA_PTR_TO_JSON(arr_city_name, arrCityName_);
            DARABONBA_PTR_TO_JSON(arr_time, arrTime_);
            DARABONBA_PTR_TO_JSON(dep_airport_info, depAirportInfo_);
            DARABONBA_PTR_TO_JSON(dep_city_code, depCityCode_);
            DARABONBA_PTR_TO_JSON(dep_city_name, depCityName_);
            DARABONBA_PTR_TO_JSON(dep_time, depTime_);
            DARABONBA_PTR_TO_JSON(duration, duration_);
            DARABONBA_PTR_TO_JSON(flight_no, flightNo_);
            DARABONBA_PTR_TO_JSON(flight_share_info, flightShareInfo_);
            DARABONBA_PTR_TO_JSON(flight_size, flightSize_);
            DARABONBA_PTR_TO_JSON(flight_stop_info_list, flightStopInfoList_);
            DARABONBA_PTR_TO_JSON(flight_type, flightType_);
            DARABONBA_PTR_TO_JSON(journey_index, journeyIndex_);
            DARABONBA_PTR_TO_JSON(luggage_direct_info, luggageDirectInfo_);
            DARABONBA_PTR_TO_JSON(manufacturer, manufacturer_);
            DARABONBA_PTR_TO_JSON(meal_desc, mealDesc_);
            DARABONBA_PTR_TO_JSON(one_more, oneMore_);
            DARABONBA_PTR_TO_JSON(one_more_show, oneMoreShow_);
            DARABONBA_PTR_TO_JSON(segment_index, segmentIndex_);
            DARABONBA_PTR_TO_JSON(segment_key, segmentKey_);
            DARABONBA_PTR_TO_JSON(segment_visa_remark, segmentVisaRemark_);
            DARABONBA_PTR_TO_JSON(share, share_);
            DARABONBA_PTR_TO_JSON(short_flight_size, shortFlightSize_);
            DARABONBA_PTR_TO_JSON(stop, stop_);
            DARABONBA_PTR_TO_JSON(total_time, totalTime_);
          };
          friend void from_json(const Darabonba::Json& j, FlightSegmentInfos& obj) { 
            DARABONBA_PTR_FROM_JSON(airline_info, airlineInfo_);
            DARABONBA_PTR_FROM_JSON(arr_airport_info, arrAirportInfo_);
            DARABONBA_PTR_FROM_JSON(arr_city_code, arrCityCode_);
            DARABONBA_PTR_FROM_JSON(arr_city_name, arrCityName_);
            DARABONBA_PTR_FROM_JSON(arr_time, arrTime_);
            DARABONBA_PTR_FROM_JSON(dep_airport_info, depAirportInfo_);
            DARABONBA_PTR_FROM_JSON(dep_city_code, depCityCode_);
            DARABONBA_PTR_FROM_JSON(dep_city_name, depCityName_);
            DARABONBA_PTR_FROM_JSON(dep_time, depTime_);
            DARABONBA_PTR_FROM_JSON(duration, duration_);
            DARABONBA_PTR_FROM_JSON(flight_no, flightNo_);
            DARABONBA_PTR_FROM_JSON(flight_share_info, flightShareInfo_);
            DARABONBA_PTR_FROM_JSON(flight_size, flightSize_);
            DARABONBA_PTR_FROM_JSON(flight_stop_info_list, flightStopInfoList_);
            DARABONBA_PTR_FROM_JSON(flight_type, flightType_);
            DARABONBA_PTR_FROM_JSON(journey_index, journeyIndex_);
            DARABONBA_PTR_FROM_JSON(luggage_direct_info, luggageDirectInfo_);
            DARABONBA_PTR_FROM_JSON(manufacturer, manufacturer_);
            DARABONBA_PTR_FROM_JSON(meal_desc, mealDesc_);
            DARABONBA_PTR_FROM_JSON(one_more, oneMore_);
            DARABONBA_PTR_FROM_JSON(one_more_show, oneMoreShow_);
            DARABONBA_PTR_FROM_JSON(segment_index, segmentIndex_);
            DARABONBA_PTR_FROM_JSON(segment_key, segmentKey_);
            DARABONBA_PTR_FROM_JSON(segment_visa_remark, segmentVisaRemark_);
            DARABONBA_PTR_FROM_JSON(share, share_);
            DARABONBA_PTR_FROM_JSON(short_flight_size, shortFlightSize_);
            DARABONBA_PTR_FROM_JSON(stop, stop_);
            DARABONBA_PTR_FROM_JSON(total_time, totalTime_);
          };
          FlightSegmentInfos() = default ;
          FlightSegmentInfos(const FlightSegmentInfos &) = default ;
          FlightSegmentInfos(FlightSegmentInfos &&) = default ;
          FlightSegmentInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~FlightSegmentInfos() = default ;
          FlightSegmentInfos& operator=(const FlightSegmentInfos &) = default ;
          FlightSegmentInfos& operator=(FlightSegmentInfos &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class SegmentVisaRemark : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const SegmentVisaRemark& obj) { 
              DARABONBA_PTR_TO_JSON(dep_city_visa_remark, depCityVisaRemark_);
              DARABONBA_PTR_TO_JSON(dep_city_visa_type, depCityVisaType_);
              DARABONBA_PTR_TO_JSON(stop_city_visa_remarks, stopCityVisaRemarks_);
              DARABONBA_PTR_TO_JSON(stop_city_visa_types, stopCityVisaTypes_);
            };
            friend void from_json(const Darabonba::Json& j, SegmentVisaRemark& obj) { 
              DARABONBA_PTR_FROM_JSON(dep_city_visa_remark, depCityVisaRemark_);
              DARABONBA_PTR_FROM_JSON(dep_city_visa_type, depCityVisaType_);
              DARABONBA_PTR_FROM_JSON(stop_city_visa_remarks, stopCityVisaRemarks_);
              DARABONBA_PTR_FROM_JSON(stop_city_visa_types, stopCityVisaTypes_);
            };
            SegmentVisaRemark() = default ;
            SegmentVisaRemark(const SegmentVisaRemark &) = default ;
            SegmentVisaRemark(SegmentVisaRemark &&) = default ;
            SegmentVisaRemark(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~SegmentVisaRemark() = default ;
            SegmentVisaRemark& operator=(const SegmentVisaRemark &) = default ;
            SegmentVisaRemark& operator=(SegmentVisaRemark &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->depCityVisaRemark_ == nullptr
        && this->depCityVisaType_ == nullptr && this->stopCityVisaRemarks_ == nullptr && this->stopCityVisaTypes_ == nullptr; };
            // depCityVisaRemark Field Functions 
            bool hasDepCityVisaRemark() const { return this->depCityVisaRemark_ != nullptr;};
            void deleteDepCityVisaRemark() { this->depCityVisaRemark_ = nullptr;};
            inline string getDepCityVisaRemark() const { DARABONBA_PTR_GET_DEFAULT(depCityVisaRemark_, "") };
            inline SegmentVisaRemark& setDepCityVisaRemark(string depCityVisaRemark) { DARABONBA_PTR_SET_VALUE(depCityVisaRemark_, depCityVisaRemark) };


            // depCityVisaType Field Functions 
            bool hasDepCityVisaType() const { return this->depCityVisaType_ != nullptr;};
            void deleteDepCityVisaType() { this->depCityVisaType_ = nullptr;};
            inline int32_t getDepCityVisaType() const { DARABONBA_PTR_GET_DEFAULT(depCityVisaType_, 0) };
            inline SegmentVisaRemark& setDepCityVisaType(int32_t depCityVisaType) { DARABONBA_PTR_SET_VALUE(depCityVisaType_, depCityVisaType) };


            // stopCityVisaRemarks Field Functions 
            bool hasStopCityVisaRemarks() const { return this->stopCityVisaRemarks_ != nullptr;};
            void deleteStopCityVisaRemarks() { this->stopCityVisaRemarks_ = nullptr;};
            inline const vector<string> & getStopCityVisaRemarks() const { DARABONBA_PTR_GET_CONST(stopCityVisaRemarks_, vector<string>) };
            inline vector<string> getStopCityVisaRemarks() { DARABONBA_PTR_GET(stopCityVisaRemarks_, vector<string>) };
            inline SegmentVisaRemark& setStopCityVisaRemarks(const vector<string> & stopCityVisaRemarks) { DARABONBA_PTR_SET_VALUE(stopCityVisaRemarks_, stopCityVisaRemarks) };
            inline SegmentVisaRemark& setStopCityVisaRemarks(vector<string> && stopCityVisaRemarks) { DARABONBA_PTR_SET_RVALUE(stopCityVisaRemarks_, stopCityVisaRemarks) };


            // stopCityVisaTypes Field Functions 
            bool hasStopCityVisaTypes() const { return this->stopCityVisaTypes_ != nullptr;};
            void deleteStopCityVisaTypes() { this->stopCityVisaTypes_ = nullptr;};
            inline const vector<int32_t> & getStopCityVisaTypes() const { DARABONBA_PTR_GET_CONST(stopCityVisaTypes_, vector<int32_t>) };
            inline vector<int32_t> getStopCityVisaTypes() { DARABONBA_PTR_GET(stopCityVisaTypes_, vector<int32_t>) };
            inline SegmentVisaRemark& setStopCityVisaTypes(const vector<int32_t> & stopCityVisaTypes) { DARABONBA_PTR_SET_VALUE(stopCityVisaTypes_, stopCityVisaTypes) };
            inline SegmentVisaRemark& setStopCityVisaTypes(vector<int32_t> && stopCityVisaTypes) { DARABONBA_PTR_SET_RVALUE(stopCityVisaTypes_, stopCityVisaTypes) };


          protected:
            shared_ptr<string> depCityVisaRemark_ {};
            shared_ptr<int32_t> depCityVisaType_ {};
            shared_ptr<vector<string>> stopCityVisaRemarks_ {};
            shared_ptr<vector<int32_t>> stopCityVisaTypes_ {};
          };

          class LuggageDirectInfo : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const LuggageDirectInfo& obj) { 
              DARABONBA_PTR_TO_JSON(dep_city_luggage_direct, depCityLuggageDirect_);
              DARABONBA_PTR_TO_JSON(stop_city_luggage_direct, stopCityLuggageDirect_);
            };
            friend void from_json(const Darabonba::Json& j, LuggageDirectInfo& obj) { 
              DARABONBA_PTR_FROM_JSON(dep_city_luggage_direct, depCityLuggageDirect_);
              DARABONBA_PTR_FROM_JSON(stop_city_luggage_direct, stopCityLuggageDirect_);
            };
            LuggageDirectInfo() = default ;
            LuggageDirectInfo(const LuggageDirectInfo &) = default ;
            LuggageDirectInfo(LuggageDirectInfo &&) = default ;
            LuggageDirectInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~LuggageDirectInfo() = default ;
            LuggageDirectInfo& operator=(const LuggageDirectInfo &) = default ;
            LuggageDirectInfo& operator=(LuggageDirectInfo &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->depCityLuggageDirect_ == nullptr
        && this->stopCityLuggageDirect_ == nullptr; };
            // depCityLuggageDirect Field Functions 
            bool hasDepCityLuggageDirect() const { return this->depCityLuggageDirect_ != nullptr;};
            void deleteDepCityLuggageDirect() { this->depCityLuggageDirect_ = nullptr;};
            inline int32_t getDepCityLuggageDirect() const { DARABONBA_PTR_GET_DEFAULT(depCityLuggageDirect_, 0) };
            inline LuggageDirectInfo& setDepCityLuggageDirect(int32_t depCityLuggageDirect) { DARABONBA_PTR_SET_VALUE(depCityLuggageDirect_, depCityLuggageDirect) };


            // stopCityLuggageDirect Field Functions 
            bool hasStopCityLuggageDirect() const { return this->stopCityLuggageDirect_ != nullptr;};
            void deleteStopCityLuggageDirect() { this->stopCityLuggageDirect_ = nullptr;};
            inline int32_t getStopCityLuggageDirect() const { DARABONBA_PTR_GET_DEFAULT(stopCityLuggageDirect_, 0) };
            inline LuggageDirectInfo& setStopCityLuggageDirect(int32_t stopCityLuggageDirect) { DARABONBA_PTR_SET_VALUE(stopCityLuggageDirect_, stopCityLuggageDirect) };


          protected:
            shared_ptr<int32_t> depCityLuggageDirect_ {};
            shared_ptr<int32_t> stopCityLuggageDirect_ {};
          };

          class FlightStopInfoList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const FlightStopInfoList& obj) { 
              DARABONBA_PTR_TO_JSON(stop_airport, stopAirport_);
              DARABONBA_PTR_TO_JSON(stop_airport_name, stopAirportName_);
              DARABONBA_PTR_TO_JSON(stop_arr_term, stopArrTerm_);
              DARABONBA_PTR_TO_JSON(stop_arr_time, stopArrTime_);
              DARABONBA_PTR_TO_JSON(stop_city_code, stopCityCode_);
              DARABONBA_PTR_TO_JSON(stop_city_name, stopCityName_);
              DARABONBA_PTR_TO_JSON(stop_dep_term, stopDepTerm_);
              DARABONBA_PTR_TO_JSON(stop_dep_time, stopDepTime_);
              DARABONBA_PTR_TO_JSON(stop_time, stopTime_);
            };
            friend void from_json(const Darabonba::Json& j, FlightStopInfoList& obj) { 
              DARABONBA_PTR_FROM_JSON(stop_airport, stopAirport_);
              DARABONBA_PTR_FROM_JSON(stop_airport_name, stopAirportName_);
              DARABONBA_PTR_FROM_JSON(stop_arr_term, stopArrTerm_);
              DARABONBA_PTR_FROM_JSON(stop_arr_time, stopArrTime_);
              DARABONBA_PTR_FROM_JSON(stop_city_code, stopCityCode_);
              DARABONBA_PTR_FROM_JSON(stop_city_name, stopCityName_);
              DARABONBA_PTR_FROM_JSON(stop_dep_term, stopDepTerm_);
              DARABONBA_PTR_FROM_JSON(stop_dep_time, stopDepTime_);
              DARABONBA_PTR_FROM_JSON(stop_time, stopTime_);
            };
            FlightStopInfoList() = default ;
            FlightStopInfoList(const FlightStopInfoList &) = default ;
            FlightStopInfoList(FlightStopInfoList &&) = default ;
            FlightStopInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~FlightStopInfoList() = default ;
            FlightStopInfoList& operator=(const FlightStopInfoList &) = default ;
            FlightStopInfoList& operator=(FlightStopInfoList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->stopAirport_ == nullptr
        && this->stopAirportName_ == nullptr && this->stopArrTerm_ == nullptr && this->stopArrTime_ == nullptr && this->stopCityCode_ == nullptr && this->stopCityName_ == nullptr
        && this->stopDepTerm_ == nullptr && this->stopDepTime_ == nullptr && this->stopTime_ == nullptr; };
            // stopAirport Field Functions 
            bool hasStopAirport() const { return this->stopAirport_ != nullptr;};
            void deleteStopAirport() { this->stopAirport_ = nullptr;};
            inline string getStopAirport() const { DARABONBA_PTR_GET_DEFAULT(stopAirport_, "") };
            inline FlightStopInfoList& setStopAirport(string stopAirport) { DARABONBA_PTR_SET_VALUE(stopAirport_, stopAirport) };


            // stopAirportName Field Functions 
            bool hasStopAirportName() const { return this->stopAirportName_ != nullptr;};
            void deleteStopAirportName() { this->stopAirportName_ = nullptr;};
            inline string getStopAirportName() const { DARABONBA_PTR_GET_DEFAULT(stopAirportName_, "") };
            inline FlightStopInfoList& setStopAirportName(string stopAirportName) { DARABONBA_PTR_SET_VALUE(stopAirportName_, stopAirportName) };


            // stopArrTerm Field Functions 
            bool hasStopArrTerm() const { return this->stopArrTerm_ != nullptr;};
            void deleteStopArrTerm() { this->stopArrTerm_ = nullptr;};
            inline string getStopArrTerm() const { DARABONBA_PTR_GET_DEFAULT(stopArrTerm_, "") };
            inline FlightStopInfoList& setStopArrTerm(string stopArrTerm) { DARABONBA_PTR_SET_VALUE(stopArrTerm_, stopArrTerm) };


            // stopArrTime Field Functions 
            bool hasStopArrTime() const { return this->stopArrTime_ != nullptr;};
            void deleteStopArrTime() { this->stopArrTime_ = nullptr;};
            inline string getStopArrTime() const { DARABONBA_PTR_GET_DEFAULT(stopArrTime_, "") };
            inline FlightStopInfoList& setStopArrTime(string stopArrTime) { DARABONBA_PTR_SET_VALUE(stopArrTime_, stopArrTime) };


            // stopCityCode Field Functions 
            bool hasStopCityCode() const { return this->stopCityCode_ != nullptr;};
            void deleteStopCityCode() { this->stopCityCode_ = nullptr;};
            inline string getStopCityCode() const { DARABONBA_PTR_GET_DEFAULT(stopCityCode_, "") };
            inline FlightStopInfoList& setStopCityCode(string stopCityCode) { DARABONBA_PTR_SET_VALUE(stopCityCode_, stopCityCode) };


            // stopCityName Field Functions 
            bool hasStopCityName() const { return this->stopCityName_ != nullptr;};
            void deleteStopCityName() { this->stopCityName_ = nullptr;};
            inline string getStopCityName() const { DARABONBA_PTR_GET_DEFAULT(stopCityName_, "") };
            inline FlightStopInfoList& setStopCityName(string stopCityName) { DARABONBA_PTR_SET_VALUE(stopCityName_, stopCityName) };


            // stopDepTerm Field Functions 
            bool hasStopDepTerm() const { return this->stopDepTerm_ != nullptr;};
            void deleteStopDepTerm() { this->stopDepTerm_ = nullptr;};
            inline string getStopDepTerm() const { DARABONBA_PTR_GET_DEFAULT(stopDepTerm_, "") };
            inline FlightStopInfoList& setStopDepTerm(string stopDepTerm) { DARABONBA_PTR_SET_VALUE(stopDepTerm_, stopDepTerm) };


            // stopDepTime Field Functions 
            bool hasStopDepTime() const { return this->stopDepTime_ != nullptr;};
            void deleteStopDepTime() { this->stopDepTime_ = nullptr;};
            inline string getStopDepTime() const { DARABONBA_PTR_GET_DEFAULT(stopDepTime_, "") };
            inline FlightStopInfoList& setStopDepTime(string stopDepTime) { DARABONBA_PTR_SET_VALUE(stopDepTime_, stopDepTime) };


            // stopTime Field Functions 
            bool hasStopTime() const { return this->stopTime_ != nullptr;};
            void deleteStopTime() { this->stopTime_ = nullptr;};
            inline string getStopTime() const { DARABONBA_PTR_GET_DEFAULT(stopTime_, "") };
            inline FlightStopInfoList& setStopTime(string stopTime) { DARABONBA_PTR_SET_VALUE(stopTime_, stopTime) };


          protected:
            shared_ptr<string> stopAirport_ {};
            shared_ptr<string> stopAirportName_ {};
            shared_ptr<string> stopArrTerm_ {};
            shared_ptr<string> stopArrTime_ {};
            shared_ptr<string> stopCityCode_ {};
            shared_ptr<string> stopCityName_ {};
            shared_ptr<string> stopDepTerm_ {};
            shared_ptr<string> stopDepTime_ {};
            shared_ptr<string> stopTime_ {};
          };

          class FlightShareInfo : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const FlightShareInfo& obj) { 
              DARABONBA_PTR_TO_JSON(operating_airline_info, operatingAirlineInfo_);
              DARABONBA_PTR_TO_JSON(operating_flight_no, operatingFlightNo_);
            };
            friend void from_json(const Darabonba::Json& j, FlightShareInfo& obj) { 
              DARABONBA_PTR_FROM_JSON(operating_airline_info, operatingAirlineInfo_);
              DARABONBA_PTR_FROM_JSON(operating_flight_no, operatingFlightNo_);
            };
            FlightShareInfo() = default ;
            FlightShareInfo(const FlightShareInfo &) = default ;
            FlightShareInfo(FlightShareInfo &&) = default ;
            FlightShareInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~FlightShareInfo() = default ;
            FlightShareInfo& operator=(const FlightShareInfo &) = default ;
            FlightShareInfo& operator=(FlightShareInfo &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class OperatingAirlineInfo : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const OperatingAirlineInfo& obj) { 
                DARABONBA_PTR_TO_JSON(airline_code, airlineCode_);
                DARABONBA_PTR_TO_JSON(airline_name, airlineName_);
                DARABONBA_PTR_TO_JSON(short_name, shortName_);
              };
              friend void from_json(const Darabonba::Json& j, OperatingAirlineInfo& obj) { 
                DARABONBA_PTR_FROM_JSON(airline_code, airlineCode_);
                DARABONBA_PTR_FROM_JSON(airline_name, airlineName_);
                DARABONBA_PTR_FROM_JSON(short_name, shortName_);
              };
              OperatingAirlineInfo() = default ;
              OperatingAirlineInfo(const OperatingAirlineInfo &) = default ;
              OperatingAirlineInfo(OperatingAirlineInfo &&) = default ;
              OperatingAirlineInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~OperatingAirlineInfo() = default ;
              OperatingAirlineInfo& operator=(const OperatingAirlineInfo &) = default ;
              OperatingAirlineInfo& operator=(OperatingAirlineInfo &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->airlineCode_ == nullptr
        && this->airlineName_ == nullptr && this->shortName_ == nullptr; };
              // airlineCode Field Functions 
              bool hasAirlineCode() const { return this->airlineCode_ != nullptr;};
              void deleteAirlineCode() { this->airlineCode_ = nullptr;};
              inline string getAirlineCode() const { DARABONBA_PTR_GET_DEFAULT(airlineCode_, "") };
              inline OperatingAirlineInfo& setAirlineCode(string airlineCode) { DARABONBA_PTR_SET_VALUE(airlineCode_, airlineCode) };


              // airlineName Field Functions 
              bool hasAirlineName() const { return this->airlineName_ != nullptr;};
              void deleteAirlineName() { this->airlineName_ = nullptr;};
              inline string getAirlineName() const { DARABONBA_PTR_GET_DEFAULT(airlineName_, "") };
              inline OperatingAirlineInfo& setAirlineName(string airlineName) { DARABONBA_PTR_SET_VALUE(airlineName_, airlineName) };


              // shortName Field Functions 
              bool hasShortName() const { return this->shortName_ != nullptr;};
              void deleteShortName() { this->shortName_ = nullptr;};
              inline string getShortName() const { DARABONBA_PTR_GET_DEFAULT(shortName_, "") };
              inline OperatingAirlineInfo& setShortName(string shortName) { DARABONBA_PTR_SET_VALUE(shortName_, shortName) };


            protected:
              shared_ptr<string> airlineCode_ {};
              shared_ptr<string> airlineName_ {};
              shared_ptr<string> shortName_ {};
            };

            virtual bool empty() const override { return this->operatingAirlineInfo_ == nullptr
        && this->operatingFlightNo_ == nullptr; };
            // operatingAirlineInfo Field Functions 
            bool hasOperatingAirlineInfo() const { return this->operatingAirlineInfo_ != nullptr;};
            void deleteOperatingAirlineInfo() { this->operatingAirlineInfo_ = nullptr;};
            inline const FlightShareInfo::OperatingAirlineInfo & getOperatingAirlineInfo() const { DARABONBA_PTR_GET_CONST(operatingAirlineInfo_, FlightShareInfo::OperatingAirlineInfo) };
            inline FlightShareInfo::OperatingAirlineInfo getOperatingAirlineInfo() { DARABONBA_PTR_GET(operatingAirlineInfo_, FlightShareInfo::OperatingAirlineInfo) };
            inline FlightShareInfo& setOperatingAirlineInfo(const FlightShareInfo::OperatingAirlineInfo & operatingAirlineInfo) { DARABONBA_PTR_SET_VALUE(operatingAirlineInfo_, operatingAirlineInfo) };
            inline FlightShareInfo& setOperatingAirlineInfo(FlightShareInfo::OperatingAirlineInfo && operatingAirlineInfo) { DARABONBA_PTR_SET_RVALUE(operatingAirlineInfo_, operatingAirlineInfo) };


            // operatingFlightNo Field Functions 
            bool hasOperatingFlightNo() const { return this->operatingFlightNo_ != nullptr;};
            void deleteOperatingFlightNo() { this->operatingFlightNo_ = nullptr;};
            inline string getOperatingFlightNo() const { DARABONBA_PTR_GET_DEFAULT(operatingFlightNo_, "") };
            inline FlightShareInfo& setOperatingFlightNo(string operatingFlightNo) { DARABONBA_PTR_SET_VALUE(operatingFlightNo_, operatingFlightNo) };


          protected:
            shared_ptr<FlightShareInfo::OperatingAirlineInfo> operatingAirlineInfo_ {};
            shared_ptr<string> operatingFlightNo_ {};
          };

          class DepAirportInfo : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const DepAirportInfo& obj) { 
              DARABONBA_PTR_TO_JSON(airport_code, airportCode_);
              DARABONBA_PTR_TO_JSON(airport_name, airportName_);
              DARABONBA_PTR_TO_JSON(airport_short_name, airportShortName_);
              DARABONBA_PTR_TO_JSON(terminal, terminal_);
            };
            friend void from_json(const Darabonba::Json& j, DepAirportInfo& obj) { 
              DARABONBA_PTR_FROM_JSON(airport_code, airportCode_);
              DARABONBA_PTR_FROM_JSON(airport_name, airportName_);
              DARABONBA_PTR_FROM_JSON(airport_short_name, airportShortName_);
              DARABONBA_PTR_FROM_JSON(terminal, terminal_);
            };
            DepAirportInfo() = default ;
            DepAirportInfo(const DepAirportInfo &) = default ;
            DepAirportInfo(DepAirportInfo &&) = default ;
            DepAirportInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~DepAirportInfo() = default ;
            DepAirportInfo& operator=(const DepAirportInfo &) = default ;
            DepAirportInfo& operator=(DepAirportInfo &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->airportCode_ == nullptr
        && this->airportName_ == nullptr && this->airportShortName_ == nullptr && this->terminal_ == nullptr; };
            // airportCode Field Functions 
            bool hasAirportCode() const { return this->airportCode_ != nullptr;};
            void deleteAirportCode() { this->airportCode_ = nullptr;};
            inline string getAirportCode() const { DARABONBA_PTR_GET_DEFAULT(airportCode_, "") };
            inline DepAirportInfo& setAirportCode(string airportCode) { DARABONBA_PTR_SET_VALUE(airportCode_, airportCode) };


            // airportName Field Functions 
            bool hasAirportName() const { return this->airportName_ != nullptr;};
            void deleteAirportName() { this->airportName_ = nullptr;};
            inline string getAirportName() const { DARABONBA_PTR_GET_DEFAULT(airportName_, "") };
            inline DepAirportInfo& setAirportName(string airportName) { DARABONBA_PTR_SET_VALUE(airportName_, airportName) };


            // airportShortName Field Functions 
            bool hasAirportShortName() const { return this->airportShortName_ != nullptr;};
            void deleteAirportShortName() { this->airportShortName_ = nullptr;};
            inline string getAirportShortName() const { DARABONBA_PTR_GET_DEFAULT(airportShortName_, "") };
            inline DepAirportInfo& setAirportShortName(string airportShortName) { DARABONBA_PTR_SET_VALUE(airportShortName_, airportShortName) };


            // terminal Field Functions 
            bool hasTerminal() const { return this->terminal_ != nullptr;};
            void deleteTerminal() { this->terminal_ = nullptr;};
            inline string getTerminal() const { DARABONBA_PTR_GET_DEFAULT(terminal_, "") };
            inline DepAirportInfo& setTerminal(string terminal) { DARABONBA_PTR_SET_VALUE(terminal_, terminal) };


          protected:
            shared_ptr<string> airportCode_ {};
            shared_ptr<string> airportName_ {};
            shared_ptr<string> airportShortName_ {};
            shared_ptr<string> terminal_ {};
          };

          class ArrAirportInfo : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ArrAirportInfo& obj) { 
              DARABONBA_PTR_TO_JSON(airport_code, airportCode_);
              DARABONBA_PTR_TO_JSON(airport_name, airportName_);
              DARABONBA_PTR_TO_JSON(airport_short_name, airportShortName_);
              DARABONBA_PTR_TO_JSON(terminal, terminal_);
            };
            friend void from_json(const Darabonba::Json& j, ArrAirportInfo& obj) { 
              DARABONBA_PTR_FROM_JSON(airport_code, airportCode_);
              DARABONBA_PTR_FROM_JSON(airport_name, airportName_);
              DARABONBA_PTR_FROM_JSON(airport_short_name, airportShortName_);
              DARABONBA_PTR_FROM_JSON(terminal, terminal_);
            };
            ArrAirportInfo() = default ;
            ArrAirportInfo(const ArrAirportInfo &) = default ;
            ArrAirportInfo(ArrAirportInfo &&) = default ;
            ArrAirportInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ArrAirportInfo() = default ;
            ArrAirportInfo& operator=(const ArrAirportInfo &) = default ;
            ArrAirportInfo& operator=(ArrAirportInfo &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->airportCode_ == nullptr
        && this->airportName_ == nullptr && this->airportShortName_ == nullptr && this->terminal_ == nullptr; };
            // airportCode Field Functions 
            bool hasAirportCode() const { return this->airportCode_ != nullptr;};
            void deleteAirportCode() { this->airportCode_ = nullptr;};
            inline string getAirportCode() const { DARABONBA_PTR_GET_DEFAULT(airportCode_, "") };
            inline ArrAirportInfo& setAirportCode(string airportCode) { DARABONBA_PTR_SET_VALUE(airportCode_, airportCode) };


            // airportName Field Functions 
            bool hasAirportName() const { return this->airportName_ != nullptr;};
            void deleteAirportName() { this->airportName_ = nullptr;};
            inline string getAirportName() const { DARABONBA_PTR_GET_DEFAULT(airportName_, "") };
            inline ArrAirportInfo& setAirportName(string airportName) { DARABONBA_PTR_SET_VALUE(airportName_, airportName) };


            // airportShortName Field Functions 
            bool hasAirportShortName() const { return this->airportShortName_ != nullptr;};
            void deleteAirportShortName() { this->airportShortName_ = nullptr;};
            inline string getAirportShortName() const { DARABONBA_PTR_GET_DEFAULT(airportShortName_, "") };
            inline ArrAirportInfo& setAirportShortName(string airportShortName) { DARABONBA_PTR_SET_VALUE(airportShortName_, airportShortName) };


            // terminal Field Functions 
            bool hasTerminal() const { return this->terminal_ != nullptr;};
            void deleteTerminal() { this->terminal_ = nullptr;};
            inline string getTerminal() const { DARABONBA_PTR_GET_DEFAULT(terminal_, "") };
            inline ArrAirportInfo& setTerminal(string terminal) { DARABONBA_PTR_SET_VALUE(terminal_, terminal) };


          protected:
            shared_ptr<string> airportCode_ {};
            shared_ptr<string> airportName_ {};
            shared_ptr<string> airportShortName_ {};
            shared_ptr<string> terminal_ {};
          };

          class AirlineInfo : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const AirlineInfo& obj) { 
              DARABONBA_PTR_TO_JSON(airline_code, airlineCode_);
              DARABONBA_PTR_TO_JSON(airline_name, airlineName_);
              DARABONBA_PTR_TO_JSON(short_name, shortName_);
            };
            friend void from_json(const Darabonba::Json& j, AirlineInfo& obj) { 
              DARABONBA_PTR_FROM_JSON(airline_code, airlineCode_);
              DARABONBA_PTR_FROM_JSON(airline_name, airlineName_);
              DARABONBA_PTR_FROM_JSON(short_name, shortName_);
            };
            AirlineInfo() = default ;
            AirlineInfo(const AirlineInfo &) = default ;
            AirlineInfo(AirlineInfo &&) = default ;
            AirlineInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~AirlineInfo() = default ;
            AirlineInfo& operator=(const AirlineInfo &) = default ;
            AirlineInfo& operator=(AirlineInfo &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->airlineCode_ == nullptr
        && this->airlineName_ == nullptr && this->shortName_ == nullptr; };
            // airlineCode Field Functions 
            bool hasAirlineCode() const { return this->airlineCode_ != nullptr;};
            void deleteAirlineCode() { this->airlineCode_ = nullptr;};
            inline string getAirlineCode() const { DARABONBA_PTR_GET_DEFAULT(airlineCode_, "") };
            inline AirlineInfo& setAirlineCode(string airlineCode) { DARABONBA_PTR_SET_VALUE(airlineCode_, airlineCode) };


            // airlineName Field Functions 
            bool hasAirlineName() const { return this->airlineName_ != nullptr;};
            void deleteAirlineName() { this->airlineName_ = nullptr;};
            inline string getAirlineName() const { DARABONBA_PTR_GET_DEFAULT(airlineName_, "") };
            inline AirlineInfo& setAirlineName(string airlineName) { DARABONBA_PTR_SET_VALUE(airlineName_, airlineName) };


            // shortName Field Functions 
            bool hasShortName() const { return this->shortName_ != nullptr;};
            void deleteShortName() { this->shortName_ = nullptr;};
            inline string getShortName() const { DARABONBA_PTR_GET_DEFAULT(shortName_, "") };
            inline AirlineInfo& setShortName(string shortName) { DARABONBA_PTR_SET_VALUE(shortName_, shortName) };


          protected:
            shared_ptr<string> airlineCode_ {};
            shared_ptr<string> airlineName_ {};
            shared_ptr<string> shortName_ {};
          };

          virtual bool empty() const override { return this->airlineInfo_ == nullptr
        && this->arrAirportInfo_ == nullptr && this->arrCityCode_ == nullptr && this->arrCityName_ == nullptr && this->arrTime_ == nullptr && this->depAirportInfo_ == nullptr
        && this->depCityCode_ == nullptr && this->depCityName_ == nullptr && this->depTime_ == nullptr && this->duration_ == nullptr && this->flightNo_ == nullptr
        && this->flightShareInfo_ == nullptr && this->flightSize_ == nullptr && this->flightStopInfoList_ == nullptr && this->flightType_ == nullptr && this->journeyIndex_ == nullptr
        && this->luggageDirectInfo_ == nullptr && this->manufacturer_ == nullptr && this->mealDesc_ == nullptr && this->oneMore_ == nullptr && this->oneMoreShow_ == nullptr
        && this->segmentIndex_ == nullptr && this->segmentKey_ == nullptr && this->segmentVisaRemark_ == nullptr && this->share_ == nullptr && this->shortFlightSize_ == nullptr
        && this->stop_ == nullptr && this->totalTime_ == nullptr; };
          // airlineInfo Field Functions 
          bool hasAirlineInfo() const { return this->airlineInfo_ != nullptr;};
          void deleteAirlineInfo() { this->airlineInfo_ = nullptr;};
          inline const FlightSegmentInfos::AirlineInfo & getAirlineInfo() const { DARABONBA_PTR_GET_CONST(airlineInfo_, FlightSegmentInfos::AirlineInfo) };
          inline FlightSegmentInfos::AirlineInfo getAirlineInfo() { DARABONBA_PTR_GET(airlineInfo_, FlightSegmentInfos::AirlineInfo) };
          inline FlightSegmentInfos& setAirlineInfo(const FlightSegmentInfos::AirlineInfo & airlineInfo) { DARABONBA_PTR_SET_VALUE(airlineInfo_, airlineInfo) };
          inline FlightSegmentInfos& setAirlineInfo(FlightSegmentInfos::AirlineInfo && airlineInfo) { DARABONBA_PTR_SET_RVALUE(airlineInfo_, airlineInfo) };


          // arrAirportInfo Field Functions 
          bool hasArrAirportInfo() const { return this->arrAirportInfo_ != nullptr;};
          void deleteArrAirportInfo() { this->arrAirportInfo_ = nullptr;};
          inline const FlightSegmentInfos::ArrAirportInfo & getArrAirportInfo() const { DARABONBA_PTR_GET_CONST(arrAirportInfo_, FlightSegmentInfos::ArrAirportInfo) };
          inline FlightSegmentInfos::ArrAirportInfo getArrAirportInfo() { DARABONBA_PTR_GET(arrAirportInfo_, FlightSegmentInfos::ArrAirportInfo) };
          inline FlightSegmentInfos& setArrAirportInfo(const FlightSegmentInfos::ArrAirportInfo & arrAirportInfo) { DARABONBA_PTR_SET_VALUE(arrAirportInfo_, arrAirportInfo) };
          inline FlightSegmentInfos& setArrAirportInfo(FlightSegmentInfos::ArrAirportInfo && arrAirportInfo) { DARABONBA_PTR_SET_RVALUE(arrAirportInfo_, arrAirportInfo) };


          // arrCityCode Field Functions 
          bool hasArrCityCode() const { return this->arrCityCode_ != nullptr;};
          void deleteArrCityCode() { this->arrCityCode_ = nullptr;};
          inline string getArrCityCode() const { DARABONBA_PTR_GET_DEFAULT(arrCityCode_, "") };
          inline FlightSegmentInfos& setArrCityCode(string arrCityCode) { DARABONBA_PTR_SET_VALUE(arrCityCode_, arrCityCode) };


          // arrCityName Field Functions 
          bool hasArrCityName() const { return this->arrCityName_ != nullptr;};
          void deleteArrCityName() { this->arrCityName_ = nullptr;};
          inline string getArrCityName() const { DARABONBA_PTR_GET_DEFAULT(arrCityName_, "") };
          inline FlightSegmentInfos& setArrCityName(string arrCityName) { DARABONBA_PTR_SET_VALUE(arrCityName_, arrCityName) };


          // arrTime Field Functions 
          bool hasArrTime() const { return this->arrTime_ != nullptr;};
          void deleteArrTime() { this->arrTime_ = nullptr;};
          inline string getArrTime() const { DARABONBA_PTR_GET_DEFAULT(arrTime_, "") };
          inline FlightSegmentInfos& setArrTime(string arrTime) { DARABONBA_PTR_SET_VALUE(arrTime_, arrTime) };


          // depAirportInfo Field Functions 
          bool hasDepAirportInfo() const { return this->depAirportInfo_ != nullptr;};
          void deleteDepAirportInfo() { this->depAirportInfo_ = nullptr;};
          inline const FlightSegmentInfos::DepAirportInfo & getDepAirportInfo() const { DARABONBA_PTR_GET_CONST(depAirportInfo_, FlightSegmentInfos::DepAirportInfo) };
          inline FlightSegmentInfos::DepAirportInfo getDepAirportInfo() { DARABONBA_PTR_GET(depAirportInfo_, FlightSegmentInfos::DepAirportInfo) };
          inline FlightSegmentInfos& setDepAirportInfo(const FlightSegmentInfos::DepAirportInfo & depAirportInfo) { DARABONBA_PTR_SET_VALUE(depAirportInfo_, depAirportInfo) };
          inline FlightSegmentInfos& setDepAirportInfo(FlightSegmentInfos::DepAirportInfo && depAirportInfo) { DARABONBA_PTR_SET_RVALUE(depAirportInfo_, depAirportInfo) };


          // depCityCode Field Functions 
          bool hasDepCityCode() const { return this->depCityCode_ != nullptr;};
          void deleteDepCityCode() { this->depCityCode_ = nullptr;};
          inline string getDepCityCode() const { DARABONBA_PTR_GET_DEFAULT(depCityCode_, "") };
          inline FlightSegmentInfos& setDepCityCode(string depCityCode) { DARABONBA_PTR_SET_VALUE(depCityCode_, depCityCode) };


          // depCityName Field Functions 
          bool hasDepCityName() const { return this->depCityName_ != nullptr;};
          void deleteDepCityName() { this->depCityName_ = nullptr;};
          inline string getDepCityName() const { DARABONBA_PTR_GET_DEFAULT(depCityName_, "") };
          inline FlightSegmentInfos& setDepCityName(string depCityName) { DARABONBA_PTR_SET_VALUE(depCityName_, depCityName) };


          // depTime Field Functions 
          bool hasDepTime() const { return this->depTime_ != nullptr;};
          void deleteDepTime() { this->depTime_ = nullptr;};
          inline string getDepTime() const { DARABONBA_PTR_GET_DEFAULT(depTime_, "") };
          inline FlightSegmentInfos& setDepTime(string depTime) { DARABONBA_PTR_SET_VALUE(depTime_, depTime) };


          // duration Field Functions 
          bool hasDuration() const { return this->duration_ != nullptr;};
          void deleteDuration() { this->duration_ = nullptr;};
          inline int32_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
          inline FlightSegmentInfos& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


          // flightNo Field Functions 
          bool hasFlightNo() const { return this->flightNo_ != nullptr;};
          void deleteFlightNo() { this->flightNo_ = nullptr;};
          inline string getFlightNo() const { DARABONBA_PTR_GET_DEFAULT(flightNo_, "") };
          inline FlightSegmentInfos& setFlightNo(string flightNo) { DARABONBA_PTR_SET_VALUE(flightNo_, flightNo) };


          // flightShareInfo Field Functions 
          bool hasFlightShareInfo() const { return this->flightShareInfo_ != nullptr;};
          void deleteFlightShareInfo() { this->flightShareInfo_ = nullptr;};
          inline const FlightSegmentInfos::FlightShareInfo & getFlightShareInfo() const { DARABONBA_PTR_GET_CONST(flightShareInfo_, FlightSegmentInfos::FlightShareInfo) };
          inline FlightSegmentInfos::FlightShareInfo getFlightShareInfo() { DARABONBA_PTR_GET(flightShareInfo_, FlightSegmentInfos::FlightShareInfo) };
          inline FlightSegmentInfos& setFlightShareInfo(const FlightSegmentInfos::FlightShareInfo & flightShareInfo) { DARABONBA_PTR_SET_VALUE(flightShareInfo_, flightShareInfo) };
          inline FlightSegmentInfos& setFlightShareInfo(FlightSegmentInfos::FlightShareInfo && flightShareInfo) { DARABONBA_PTR_SET_RVALUE(flightShareInfo_, flightShareInfo) };


          // flightSize Field Functions 
          bool hasFlightSize() const { return this->flightSize_ != nullptr;};
          void deleteFlightSize() { this->flightSize_ = nullptr;};
          inline string getFlightSize() const { DARABONBA_PTR_GET_DEFAULT(flightSize_, "") };
          inline FlightSegmentInfos& setFlightSize(string flightSize) { DARABONBA_PTR_SET_VALUE(flightSize_, flightSize) };


          // flightStopInfoList Field Functions 
          bool hasFlightStopInfoList() const { return this->flightStopInfoList_ != nullptr;};
          void deleteFlightStopInfoList() { this->flightStopInfoList_ = nullptr;};
          inline const vector<FlightSegmentInfos::FlightStopInfoList> & getFlightStopInfoList() const { DARABONBA_PTR_GET_CONST(flightStopInfoList_, vector<FlightSegmentInfos::FlightStopInfoList>) };
          inline vector<FlightSegmentInfos::FlightStopInfoList> getFlightStopInfoList() { DARABONBA_PTR_GET(flightStopInfoList_, vector<FlightSegmentInfos::FlightStopInfoList>) };
          inline FlightSegmentInfos& setFlightStopInfoList(const vector<FlightSegmentInfos::FlightStopInfoList> & flightStopInfoList) { DARABONBA_PTR_SET_VALUE(flightStopInfoList_, flightStopInfoList) };
          inline FlightSegmentInfos& setFlightStopInfoList(vector<FlightSegmentInfos::FlightStopInfoList> && flightStopInfoList) { DARABONBA_PTR_SET_RVALUE(flightStopInfoList_, flightStopInfoList) };


          // flightType Field Functions 
          bool hasFlightType() const { return this->flightType_ != nullptr;};
          void deleteFlightType() { this->flightType_ = nullptr;};
          inline string getFlightType() const { DARABONBA_PTR_GET_DEFAULT(flightType_, "") };
          inline FlightSegmentInfos& setFlightType(string flightType) { DARABONBA_PTR_SET_VALUE(flightType_, flightType) };


          // journeyIndex Field Functions 
          bool hasJourneyIndex() const { return this->journeyIndex_ != nullptr;};
          void deleteJourneyIndex() { this->journeyIndex_ = nullptr;};
          inline int32_t getJourneyIndex() const { DARABONBA_PTR_GET_DEFAULT(journeyIndex_, 0) };
          inline FlightSegmentInfos& setJourneyIndex(int32_t journeyIndex) { DARABONBA_PTR_SET_VALUE(journeyIndex_, journeyIndex) };


          // luggageDirectInfo Field Functions 
          bool hasLuggageDirectInfo() const { return this->luggageDirectInfo_ != nullptr;};
          void deleteLuggageDirectInfo() { this->luggageDirectInfo_ = nullptr;};
          inline const FlightSegmentInfos::LuggageDirectInfo & getLuggageDirectInfo() const { DARABONBA_PTR_GET_CONST(luggageDirectInfo_, FlightSegmentInfos::LuggageDirectInfo) };
          inline FlightSegmentInfos::LuggageDirectInfo getLuggageDirectInfo() { DARABONBA_PTR_GET(luggageDirectInfo_, FlightSegmentInfos::LuggageDirectInfo) };
          inline FlightSegmentInfos& setLuggageDirectInfo(const FlightSegmentInfos::LuggageDirectInfo & luggageDirectInfo) { DARABONBA_PTR_SET_VALUE(luggageDirectInfo_, luggageDirectInfo) };
          inline FlightSegmentInfos& setLuggageDirectInfo(FlightSegmentInfos::LuggageDirectInfo && luggageDirectInfo) { DARABONBA_PTR_SET_RVALUE(luggageDirectInfo_, luggageDirectInfo) };


          // manufacturer Field Functions 
          bool hasManufacturer() const { return this->manufacturer_ != nullptr;};
          void deleteManufacturer() { this->manufacturer_ = nullptr;};
          inline string getManufacturer() const { DARABONBA_PTR_GET_DEFAULT(manufacturer_, "") };
          inline FlightSegmentInfos& setManufacturer(string manufacturer) { DARABONBA_PTR_SET_VALUE(manufacturer_, manufacturer) };


          // mealDesc Field Functions 
          bool hasMealDesc() const { return this->mealDesc_ != nullptr;};
          void deleteMealDesc() { this->mealDesc_ = nullptr;};
          inline string getMealDesc() const { DARABONBA_PTR_GET_DEFAULT(mealDesc_, "") };
          inline FlightSegmentInfos& setMealDesc(string mealDesc) { DARABONBA_PTR_SET_VALUE(mealDesc_, mealDesc) };


          // oneMore Field Functions 
          bool hasOneMore() const { return this->oneMore_ != nullptr;};
          void deleteOneMore() { this->oneMore_ = nullptr;};
          inline int32_t getOneMore() const { DARABONBA_PTR_GET_DEFAULT(oneMore_, 0) };
          inline FlightSegmentInfos& setOneMore(int32_t oneMore) { DARABONBA_PTR_SET_VALUE(oneMore_, oneMore) };


          // oneMoreShow Field Functions 
          bool hasOneMoreShow() const { return this->oneMoreShow_ != nullptr;};
          void deleteOneMoreShow() { this->oneMoreShow_ = nullptr;};
          inline string getOneMoreShow() const { DARABONBA_PTR_GET_DEFAULT(oneMoreShow_, "") };
          inline FlightSegmentInfos& setOneMoreShow(string oneMoreShow) { DARABONBA_PTR_SET_VALUE(oneMoreShow_, oneMoreShow) };


          // segmentIndex Field Functions 
          bool hasSegmentIndex() const { return this->segmentIndex_ != nullptr;};
          void deleteSegmentIndex() { this->segmentIndex_ = nullptr;};
          inline int32_t getSegmentIndex() const { DARABONBA_PTR_GET_DEFAULT(segmentIndex_, 0) };
          inline FlightSegmentInfos& setSegmentIndex(int32_t segmentIndex) { DARABONBA_PTR_SET_VALUE(segmentIndex_, segmentIndex) };


          // segmentKey Field Functions 
          bool hasSegmentKey() const { return this->segmentKey_ != nullptr;};
          void deleteSegmentKey() { this->segmentKey_ = nullptr;};
          inline string getSegmentKey() const { DARABONBA_PTR_GET_DEFAULT(segmentKey_, "") };
          inline FlightSegmentInfos& setSegmentKey(string segmentKey) { DARABONBA_PTR_SET_VALUE(segmentKey_, segmentKey) };


          // segmentVisaRemark Field Functions 
          bool hasSegmentVisaRemark() const { return this->segmentVisaRemark_ != nullptr;};
          void deleteSegmentVisaRemark() { this->segmentVisaRemark_ = nullptr;};
          inline const FlightSegmentInfos::SegmentVisaRemark & getSegmentVisaRemark() const { DARABONBA_PTR_GET_CONST(segmentVisaRemark_, FlightSegmentInfos::SegmentVisaRemark) };
          inline FlightSegmentInfos::SegmentVisaRemark getSegmentVisaRemark() { DARABONBA_PTR_GET(segmentVisaRemark_, FlightSegmentInfos::SegmentVisaRemark) };
          inline FlightSegmentInfos& setSegmentVisaRemark(const FlightSegmentInfos::SegmentVisaRemark & segmentVisaRemark) { DARABONBA_PTR_SET_VALUE(segmentVisaRemark_, segmentVisaRemark) };
          inline FlightSegmentInfos& setSegmentVisaRemark(FlightSegmentInfos::SegmentVisaRemark && segmentVisaRemark) { DARABONBA_PTR_SET_RVALUE(segmentVisaRemark_, segmentVisaRemark) };


          // share Field Functions 
          bool hasShare() const { return this->share_ != nullptr;};
          void deleteShare() { this->share_ = nullptr;};
          inline bool getShare() const { DARABONBA_PTR_GET_DEFAULT(share_, false) };
          inline FlightSegmentInfos& setShare(bool share) { DARABONBA_PTR_SET_VALUE(share_, share) };


          // shortFlightSize Field Functions 
          bool hasShortFlightSize() const { return this->shortFlightSize_ != nullptr;};
          void deleteShortFlightSize() { this->shortFlightSize_ = nullptr;};
          inline string getShortFlightSize() const { DARABONBA_PTR_GET_DEFAULT(shortFlightSize_, "") };
          inline FlightSegmentInfos& setShortFlightSize(string shortFlightSize) { DARABONBA_PTR_SET_VALUE(shortFlightSize_, shortFlightSize) };


          // stop Field Functions 
          bool hasStop() const { return this->stop_ != nullptr;};
          void deleteStop() { this->stop_ = nullptr;};
          inline bool getStop() const { DARABONBA_PTR_GET_DEFAULT(stop_, false) };
          inline FlightSegmentInfos& setStop(bool stop) { DARABONBA_PTR_SET_VALUE(stop_, stop) };


          // totalTime Field Functions 
          bool hasTotalTime() const { return this->totalTime_ != nullptr;};
          void deleteTotalTime() { this->totalTime_ = nullptr;};
          inline string getTotalTime() const { DARABONBA_PTR_GET_DEFAULT(totalTime_, "") };
          inline FlightSegmentInfos& setTotalTime(string totalTime) { DARABONBA_PTR_SET_VALUE(totalTime_, totalTime) };


        protected:
          shared_ptr<FlightSegmentInfos::AirlineInfo> airlineInfo_ {};
          shared_ptr<FlightSegmentInfos::ArrAirportInfo> arrAirportInfo_ {};
          shared_ptr<string> arrCityCode_ {};
          shared_ptr<string> arrCityName_ {};
          shared_ptr<string> arrTime_ {};
          shared_ptr<FlightSegmentInfos::DepAirportInfo> depAirportInfo_ {};
          shared_ptr<string> depCityCode_ {};
          shared_ptr<string> depCityName_ {};
          shared_ptr<string> depTime_ {};
          shared_ptr<int32_t> duration_ {};
          shared_ptr<string> flightNo_ {};
          shared_ptr<FlightSegmentInfos::FlightShareInfo> flightShareInfo_ {};
          shared_ptr<string> flightSize_ {};
          shared_ptr<vector<FlightSegmentInfos::FlightStopInfoList>> flightStopInfoList_ {};
          shared_ptr<string> flightType_ {};
          shared_ptr<int32_t> journeyIndex_ {};
          shared_ptr<FlightSegmentInfos::LuggageDirectInfo> luggageDirectInfo_ {};
          shared_ptr<string> manufacturer_ {};
          shared_ptr<string> mealDesc_ {};
          shared_ptr<int32_t> oneMore_ {};
          shared_ptr<string> oneMoreShow_ {};
          shared_ptr<int32_t> segmentIndex_ {};
          shared_ptr<string> segmentKey_ {};
          shared_ptr<FlightSegmentInfos::SegmentVisaRemark> segmentVisaRemark_ {};
          shared_ptr<bool> share_ {};
          shared_ptr<string> shortFlightSize_ {};
          shared_ptr<bool> stop_ {};
          shared_ptr<string> totalTime_ {};
        };

        virtual bool empty() const override { return this->arrCityCode_ == nullptr
        && this->arrCityName_ == nullptr && this->arrTime_ == nullptr && this->depCityCode_ == nullptr && this->depCityName_ == nullptr && this->depTime_ == nullptr
        && this->duration_ == nullptr && this->flightSegmentInfos_ == nullptr && this->journeyIndex_ == nullptr && this->transferTime_ == nullptr; };
        // arrCityCode Field Functions 
        bool hasArrCityCode() const { return this->arrCityCode_ != nullptr;};
        void deleteArrCityCode() { this->arrCityCode_ = nullptr;};
        inline string getArrCityCode() const { DARABONBA_PTR_GET_DEFAULT(arrCityCode_, "") };
        inline JourneyList& setArrCityCode(string arrCityCode) { DARABONBA_PTR_SET_VALUE(arrCityCode_, arrCityCode) };


        // arrCityName Field Functions 
        bool hasArrCityName() const { return this->arrCityName_ != nullptr;};
        void deleteArrCityName() { this->arrCityName_ = nullptr;};
        inline string getArrCityName() const { DARABONBA_PTR_GET_DEFAULT(arrCityName_, "") };
        inline JourneyList& setArrCityName(string arrCityName) { DARABONBA_PTR_SET_VALUE(arrCityName_, arrCityName) };


        // arrTime Field Functions 
        bool hasArrTime() const { return this->arrTime_ != nullptr;};
        void deleteArrTime() { this->arrTime_ = nullptr;};
        inline string getArrTime() const { DARABONBA_PTR_GET_DEFAULT(arrTime_, "") };
        inline JourneyList& setArrTime(string arrTime) { DARABONBA_PTR_SET_VALUE(arrTime_, arrTime) };


        // depCityCode Field Functions 
        bool hasDepCityCode() const { return this->depCityCode_ != nullptr;};
        void deleteDepCityCode() { this->depCityCode_ = nullptr;};
        inline string getDepCityCode() const { DARABONBA_PTR_GET_DEFAULT(depCityCode_, "") };
        inline JourneyList& setDepCityCode(string depCityCode) { DARABONBA_PTR_SET_VALUE(depCityCode_, depCityCode) };


        // depCityName Field Functions 
        bool hasDepCityName() const { return this->depCityName_ != nullptr;};
        void deleteDepCityName() { this->depCityName_ = nullptr;};
        inline string getDepCityName() const { DARABONBA_PTR_GET_DEFAULT(depCityName_, "") };
        inline JourneyList& setDepCityName(string depCityName) { DARABONBA_PTR_SET_VALUE(depCityName_, depCityName) };


        // depTime Field Functions 
        bool hasDepTime() const { return this->depTime_ != nullptr;};
        void deleteDepTime() { this->depTime_ = nullptr;};
        inline string getDepTime() const { DARABONBA_PTR_GET_DEFAULT(depTime_, "") };
        inline JourneyList& setDepTime(string depTime) { DARABONBA_PTR_SET_VALUE(depTime_, depTime) };


        // duration Field Functions 
        bool hasDuration() const { return this->duration_ != nullptr;};
        void deleteDuration() { this->duration_ = nullptr;};
        inline int32_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
        inline JourneyList& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


        // flightSegmentInfos Field Functions 
        bool hasFlightSegmentInfos() const { return this->flightSegmentInfos_ != nullptr;};
        void deleteFlightSegmentInfos() { this->flightSegmentInfos_ = nullptr;};
        inline const vector<JourneyList::FlightSegmentInfos> & getFlightSegmentInfos() const { DARABONBA_PTR_GET_CONST(flightSegmentInfos_, vector<JourneyList::FlightSegmentInfos>) };
        inline vector<JourneyList::FlightSegmentInfos> getFlightSegmentInfos() { DARABONBA_PTR_GET(flightSegmentInfos_, vector<JourneyList::FlightSegmentInfos>) };
        inline JourneyList& setFlightSegmentInfos(const vector<JourneyList::FlightSegmentInfos> & flightSegmentInfos) { DARABONBA_PTR_SET_VALUE(flightSegmentInfos_, flightSegmentInfos) };
        inline JourneyList& setFlightSegmentInfos(vector<JourneyList::FlightSegmentInfos> && flightSegmentInfos) { DARABONBA_PTR_SET_RVALUE(flightSegmentInfos_, flightSegmentInfos) };


        // journeyIndex Field Functions 
        bool hasJourneyIndex() const { return this->journeyIndex_ != nullptr;};
        void deleteJourneyIndex() { this->journeyIndex_ = nullptr;};
        inline int32_t getJourneyIndex() const { DARABONBA_PTR_GET_DEFAULT(journeyIndex_, 0) };
        inline JourneyList& setJourneyIndex(int32_t journeyIndex) { DARABONBA_PTR_SET_VALUE(journeyIndex_, journeyIndex) };


        // transferTime Field Functions 
        bool hasTransferTime() const { return this->transferTime_ != nullptr;};
        void deleteTransferTime() { this->transferTime_ = nullptr;};
        inline int32_t getTransferTime() const { DARABONBA_PTR_GET_DEFAULT(transferTime_, 0) };
        inline JourneyList& setTransferTime(int32_t transferTime) { DARABONBA_PTR_SET_VALUE(transferTime_, transferTime) };


      protected:
        shared_ptr<string> arrCityCode_ {};
        shared_ptr<string> arrCityName_ {};
        shared_ptr<string> arrTime_ {};
        shared_ptr<string> depCityCode_ {};
        shared_ptr<string> depCityName_ {};
        shared_ptr<string> depTime_ {};
        shared_ptr<int32_t> duration_ {};
        shared_ptr<vector<JourneyList::FlightSegmentInfos>> flightSegmentInfos_ {};
        shared_ptr<int32_t> journeyIndex_ {};
        shared_ptr<int32_t> transferTime_ {};
      };

      class BaggageRule : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BaggageRule& obj) { 
          DARABONBA_PTR_TO_JSON(baggage_rule_desc, baggageRuleDesc_);
        };
        friend void from_json(const Darabonba::Json& j, BaggageRule& obj) { 
          DARABONBA_PTR_FROM_JSON(baggage_rule_desc, baggageRuleDesc_);
        };
        BaggageRule() = default ;
        BaggageRule(const BaggageRule &) = default ;
        BaggageRule(BaggageRule &&) = default ;
        BaggageRule(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BaggageRule() = default ;
        BaggageRule& operator=(const BaggageRule &) = default ;
        BaggageRule& operator=(BaggageRule &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->baggageRuleDesc_ == nullptr; };
        // baggageRuleDesc Field Functions 
        bool hasBaggageRuleDesc() const { return this->baggageRuleDesc_ != nullptr;};
        void deleteBaggageRuleDesc() { this->baggageRuleDesc_ = nullptr;};
        inline string getBaggageRuleDesc() const { DARABONBA_PTR_GET_DEFAULT(baggageRuleDesc_, "") };
        inline BaggageRule& setBaggageRuleDesc(string baggageRuleDesc) { DARABONBA_PTR_SET_VALUE(baggageRuleDesc_, baggageRuleDesc) };


      protected:
        shared_ptr<string> baggageRuleDesc_ {};
      };

      virtual bool empty() const override { return this->baggageRule_ == nullptr
        && this->closeReason_ == nullptr && this->closeTime_ == nullptr && this->closeType_ == nullptr && this->journeyList_ == nullptr && this->orderId_ == nullptr
        && this->originJourneyList_ == nullptr && this->outOrderId_ == nullptr && this->outReShopApplyId_ == nullptr && this->passengerList_ == nullptr && this->passengerPriceInfoList_ == nullptr
        && this->passengerTicketList_ == nullptr && this->payLatestTime_ == nullptr && this->payStatus_ == nullptr && this->priceInfo_ == nullptr && this->reShopApplyId_ == nullptr
        && this->reShopReasonCode_ == nullptr && this->reShopReasonDesc_ == nullptr && this->refundChangeRule_ == nullptr && this->status_ == nullptr && this->successTime_ == nullptr
        && this->userIntentionMemo_ == nullptr; };
      // baggageRule Field Functions 
      bool hasBaggageRule() const { return this->baggageRule_ != nullptr;};
      void deleteBaggageRule() { this->baggageRule_ = nullptr;};
      inline const Module::BaggageRule & getBaggageRule() const { DARABONBA_PTR_GET_CONST(baggageRule_, Module::BaggageRule) };
      inline Module::BaggageRule getBaggageRule() { DARABONBA_PTR_GET(baggageRule_, Module::BaggageRule) };
      inline Module& setBaggageRule(const Module::BaggageRule & baggageRule) { DARABONBA_PTR_SET_VALUE(baggageRule_, baggageRule) };
      inline Module& setBaggageRule(Module::BaggageRule && baggageRule) { DARABONBA_PTR_SET_RVALUE(baggageRule_, baggageRule) };


      // closeReason Field Functions 
      bool hasCloseReason() const { return this->closeReason_ != nullptr;};
      void deleteCloseReason() { this->closeReason_ = nullptr;};
      inline string getCloseReason() const { DARABONBA_PTR_GET_DEFAULT(closeReason_, "") };
      inline Module& setCloseReason(string closeReason) { DARABONBA_PTR_SET_VALUE(closeReason_, closeReason) };


      // closeTime Field Functions 
      bool hasCloseTime() const { return this->closeTime_ != nullptr;};
      void deleteCloseTime() { this->closeTime_ = nullptr;};
      inline string getCloseTime() const { DARABONBA_PTR_GET_DEFAULT(closeTime_, "") };
      inline Module& setCloseTime(string closeTime) { DARABONBA_PTR_SET_VALUE(closeTime_, closeTime) };


      // closeType Field Functions 
      bool hasCloseType() const { return this->closeType_ != nullptr;};
      void deleteCloseType() { this->closeType_ = nullptr;};
      inline int32_t getCloseType() const { DARABONBA_PTR_GET_DEFAULT(closeType_, 0) };
      inline Module& setCloseType(int32_t closeType) { DARABONBA_PTR_SET_VALUE(closeType_, closeType) };


      // journeyList Field Functions 
      bool hasJourneyList() const { return this->journeyList_ != nullptr;};
      void deleteJourneyList() { this->journeyList_ = nullptr;};
      inline const vector<Module::JourneyList> & getJourneyList() const { DARABONBA_PTR_GET_CONST(journeyList_, vector<Module::JourneyList>) };
      inline vector<Module::JourneyList> getJourneyList() { DARABONBA_PTR_GET(journeyList_, vector<Module::JourneyList>) };
      inline Module& setJourneyList(const vector<Module::JourneyList> & journeyList) { DARABONBA_PTR_SET_VALUE(journeyList_, journeyList) };
      inline Module& setJourneyList(vector<Module::JourneyList> && journeyList) { DARABONBA_PTR_SET_RVALUE(journeyList_, journeyList) };


      // orderId Field Functions 
      bool hasOrderId() const { return this->orderId_ != nullptr;};
      void deleteOrderId() { this->orderId_ = nullptr;};
      inline int64_t getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
      inline Module& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


      // originJourneyList Field Functions 
      bool hasOriginJourneyList() const { return this->originJourneyList_ != nullptr;};
      void deleteOriginJourneyList() { this->originJourneyList_ = nullptr;};
      inline const vector<Module::OriginJourneyList> & getOriginJourneyList() const { DARABONBA_PTR_GET_CONST(originJourneyList_, vector<Module::OriginJourneyList>) };
      inline vector<Module::OriginJourneyList> getOriginJourneyList() { DARABONBA_PTR_GET(originJourneyList_, vector<Module::OriginJourneyList>) };
      inline Module& setOriginJourneyList(const vector<Module::OriginJourneyList> & originJourneyList) { DARABONBA_PTR_SET_VALUE(originJourneyList_, originJourneyList) };
      inline Module& setOriginJourneyList(vector<Module::OriginJourneyList> && originJourneyList) { DARABONBA_PTR_SET_RVALUE(originJourneyList_, originJourneyList) };


      // outOrderId Field Functions 
      bool hasOutOrderId() const { return this->outOrderId_ != nullptr;};
      void deleteOutOrderId() { this->outOrderId_ = nullptr;};
      inline string getOutOrderId() const { DARABONBA_PTR_GET_DEFAULT(outOrderId_, "") };
      inline Module& setOutOrderId(string outOrderId) { DARABONBA_PTR_SET_VALUE(outOrderId_, outOrderId) };


      // outReShopApplyId Field Functions 
      bool hasOutReShopApplyId() const { return this->outReShopApplyId_ != nullptr;};
      void deleteOutReShopApplyId() { this->outReShopApplyId_ = nullptr;};
      inline string getOutReShopApplyId() const { DARABONBA_PTR_GET_DEFAULT(outReShopApplyId_, "") };
      inline Module& setOutReShopApplyId(string outReShopApplyId) { DARABONBA_PTR_SET_VALUE(outReShopApplyId_, outReShopApplyId) };


      // passengerList Field Functions 
      bool hasPassengerList() const { return this->passengerList_ != nullptr;};
      void deletePassengerList() { this->passengerList_ = nullptr;};
      inline const vector<Module::PassengerList> & getPassengerList() const { DARABONBA_PTR_GET_CONST(passengerList_, vector<Module::PassengerList>) };
      inline vector<Module::PassengerList> getPassengerList() { DARABONBA_PTR_GET(passengerList_, vector<Module::PassengerList>) };
      inline Module& setPassengerList(const vector<Module::PassengerList> & passengerList) { DARABONBA_PTR_SET_VALUE(passengerList_, passengerList) };
      inline Module& setPassengerList(vector<Module::PassengerList> && passengerList) { DARABONBA_PTR_SET_RVALUE(passengerList_, passengerList) };


      // passengerPriceInfoList Field Functions 
      bool hasPassengerPriceInfoList() const { return this->passengerPriceInfoList_ != nullptr;};
      void deletePassengerPriceInfoList() { this->passengerPriceInfoList_ = nullptr;};
      inline const vector<Module::PassengerPriceInfoList> & getPassengerPriceInfoList() const { DARABONBA_PTR_GET_CONST(passengerPriceInfoList_, vector<Module::PassengerPriceInfoList>) };
      inline vector<Module::PassengerPriceInfoList> getPassengerPriceInfoList() { DARABONBA_PTR_GET(passengerPriceInfoList_, vector<Module::PassengerPriceInfoList>) };
      inline Module& setPassengerPriceInfoList(const vector<Module::PassengerPriceInfoList> & passengerPriceInfoList) { DARABONBA_PTR_SET_VALUE(passengerPriceInfoList_, passengerPriceInfoList) };
      inline Module& setPassengerPriceInfoList(vector<Module::PassengerPriceInfoList> && passengerPriceInfoList) { DARABONBA_PTR_SET_RVALUE(passengerPriceInfoList_, passengerPriceInfoList) };


      // passengerTicketList Field Functions 
      bool hasPassengerTicketList() const { return this->passengerTicketList_ != nullptr;};
      void deletePassengerTicketList() { this->passengerTicketList_ = nullptr;};
      inline const vector<Module::PassengerTicketList> & getPassengerTicketList() const { DARABONBA_PTR_GET_CONST(passengerTicketList_, vector<Module::PassengerTicketList>) };
      inline vector<Module::PassengerTicketList> getPassengerTicketList() { DARABONBA_PTR_GET(passengerTicketList_, vector<Module::PassengerTicketList>) };
      inline Module& setPassengerTicketList(const vector<Module::PassengerTicketList> & passengerTicketList) { DARABONBA_PTR_SET_VALUE(passengerTicketList_, passengerTicketList) };
      inline Module& setPassengerTicketList(vector<Module::PassengerTicketList> && passengerTicketList) { DARABONBA_PTR_SET_RVALUE(passengerTicketList_, passengerTicketList) };


      // payLatestTime Field Functions 
      bool hasPayLatestTime() const { return this->payLatestTime_ != nullptr;};
      void deletePayLatestTime() { this->payLatestTime_ = nullptr;};
      inline string getPayLatestTime() const { DARABONBA_PTR_GET_DEFAULT(payLatestTime_, "") };
      inline Module& setPayLatestTime(string payLatestTime) { DARABONBA_PTR_SET_VALUE(payLatestTime_, payLatestTime) };


      // payStatus Field Functions 
      bool hasPayStatus() const { return this->payStatus_ != nullptr;};
      void deletePayStatus() { this->payStatus_ = nullptr;};
      inline int32_t getPayStatus() const { DARABONBA_PTR_GET_DEFAULT(payStatus_, 0) };
      inline Module& setPayStatus(int32_t payStatus) { DARABONBA_PTR_SET_VALUE(payStatus_, payStatus) };


      // priceInfo Field Functions 
      bool hasPriceInfo() const { return this->priceInfo_ != nullptr;};
      void deletePriceInfo() { this->priceInfo_ = nullptr;};
      inline const Module::PriceInfo & getPriceInfo() const { DARABONBA_PTR_GET_CONST(priceInfo_, Module::PriceInfo) };
      inline Module::PriceInfo getPriceInfo() { DARABONBA_PTR_GET(priceInfo_, Module::PriceInfo) };
      inline Module& setPriceInfo(const Module::PriceInfo & priceInfo) { DARABONBA_PTR_SET_VALUE(priceInfo_, priceInfo) };
      inline Module& setPriceInfo(Module::PriceInfo && priceInfo) { DARABONBA_PTR_SET_RVALUE(priceInfo_, priceInfo) };


      // reShopApplyId Field Functions 
      bool hasReShopApplyId() const { return this->reShopApplyId_ != nullptr;};
      void deleteReShopApplyId() { this->reShopApplyId_ = nullptr;};
      inline int64_t getReShopApplyId() const { DARABONBA_PTR_GET_DEFAULT(reShopApplyId_, 0L) };
      inline Module& setReShopApplyId(int64_t reShopApplyId) { DARABONBA_PTR_SET_VALUE(reShopApplyId_, reShopApplyId) };


      // reShopReasonCode Field Functions 
      bool hasReShopReasonCode() const { return this->reShopReasonCode_ != nullptr;};
      void deleteReShopReasonCode() { this->reShopReasonCode_ = nullptr;};
      inline string getReShopReasonCode() const { DARABONBA_PTR_GET_DEFAULT(reShopReasonCode_, "") };
      inline Module& setReShopReasonCode(string reShopReasonCode) { DARABONBA_PTR_SET_VALUE(reShopReasonCode_, reShopReasonCode) };


      // reShopReasonDesc Field Functions 
      bool hasReShopReasonDesc() const { return this->reShopReasonDesc_ != nullptr;};
      void deleteReShopReasonDesc() { this->reShopReasonDesc_ = nullptr;};
      inline string getReShopReasonDesc() const { DARABONBA_PTR_GET_DEFAULT(reShopReasonDesc_, "") };
      inline Module& setReShopReasonDesc(string reShopReasonDesc) { DARABONBA_PTR_SET_VALUE(reShopReasonDesc_, reShopReasonDesc) };


      // refundChangeRule Field Functions 
      bool hasRefundChangeRule() const { return this->refundChangeRule_ != nullptr;};
      void deleteRefundChangeRule() { this->refundChangeRule_ = nullptr;};
      inline const Module::RefundChangeRule & getRefundChangeRule() const { DARABONBA_PTR_GET_CONST(refundChangeRule_, Module::RefundChangeRule) };
      inline Module::RefundChangeRule getRefundChangeRule() { DARABONBA_PTR_GET(refundChangeRule_, Module::RefundChangeRule) };
      inline Module& setRefundChangeRule(const Module::RefundChangeRule & refundChangeRule) { DARABONBA_PTR_SET_VALUE(refundChangeRule_, refundChangeRule) };
      inline Module& setRefundChangeRule(Module::RefundChangeRule && refundChangeRule) { DARABONBA_PTR_SET_RVALUE(refundChangeRule_, refundChangeRule) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Module& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // successTime Field Functions 
      bool hasSuccessTime() const { return this->successTime_ != nullptr;};
      void deleteSuccessTime() { this->successTime_ = nullptr;};
      inline string getSuccessTime() const { DARABONBA_PTR_GET_DEFAULT(successTime_, "") };
      inline Module& setSuccessTime(string successTime) { DARABONBA_PTR_SET_VALUE(successTime_, successTime) };


      // userIntentionMemo Field Functions 
      bool hasUserIntentionMemo() const { return this->userIntentionMemo_ != nullptr;};
      void deleteUserIntentionMemo() { this->userIntentionMemo_ = nullptr;};
      inline string getUserIntentionMemo() const { DARABONBA_PTR_GET_DEFAULT(userIntentionMemo_, "") };
      inline Module& setUserIntentionMemo(string userIntentionMemo) { DARABONBA_PTR_SET_VALUE(userIntentionMemo_, userIntentionMemo) };


    protected:
      shared_ptr<Module::BaggageRule> baggageRule_ {};
      shared_ptr<string> closeReason_ {};
      shared_ptr<string> closeTime_ {};
      shared_ptr<int32_t> closeType_ {};
      shared_ptr<vector<Module::JourneyList>> journeyList_ {};
      shared_ptr<int64_t> orderId_ {};
      shared_ptr<vector<Module::OriginJourneyList>> originJourneyList_ {};
      shared_ptr<string> outOrderId_ {};
      shared_ptr<string> outReShopApplyId_ {};
      shared_ptr<vector<Module::PassengerList>> passengerList_ {};
      shared_ptr<vector<Module::PassengerPriceInfoList>> passengerPriceInfoList_ {};
      shared_ptr<vector<Module::PassengerTicketList>> passengerTicketList_ {};
      shared_ptr<string> payLatestTime_ {};
      shared_ptr<int32_t> payStatus_ {};
      shared_ptr<Module::PriceInfo> priceInfo_ {};
      shared_ptr<int64_t> reShopApplyId_ {};
      shared_ptr<string> reShopReasonCode_ {};
      shared_ptr<string> reShopReasonDesc_ {};
      shared_ptr<Module::RefundChangeRule> refundChangeRule_ {};
      shared_ptr<int32_t> status_ {};
      shared_ptr<string> successTime_ {};
      shared_ptr<string> userIntentionMemo_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline IntlFlightReShopDetailResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline IntlFlightReShopDetailResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const IntlFlightReShopDetailResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, IntlFlightReShopDetailResponseBody::Module) };
    inline IntlFlightReShopDetailResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, IntlFlightReShopDetailResponseBody::Module) };
    inline IntlFlightReShopDetailResponseBody& setModule(const IntlFlightReShopDetailResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline IntlFlightReShopDetailResponseBody& setModule(IntlFlightReShopDetailResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline IntlFlightReShopDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline IntlFlightReShopDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline IntlFlightReShopDetailResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<IntlFlightReShopDetailResponseBody::Module> module_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
