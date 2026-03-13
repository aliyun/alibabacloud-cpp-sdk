// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTOTAITEMDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTOTAITEMDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
#include <alibabacloud/models/ModuleGroupItemSubItemsRefundChangeRuleOfferPenaltyInfoMapValue.hpp>
#include <alibabacloud/models/ModuleGroupItemSubItemsBaggageRuleBaggageInfoMapValue.hpp>
#include <alibabacloud/models/ModuleGroupItemSubItemsShoppingItemMapValue.hpp>
#include <alibabacloud/models/ModuleGroupItemShoppingItemMapValue.hpp>
#include <alibabacloud/models/ModuleGroupItemSubItemPositionMapValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightOtaItemDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightOtaItemDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightOtaItemDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    IntlFlightOtaItemDetailResponseBody() = default ;
    IntlFlightOtaItemDetailResponseBody(const IntlFlightOtaItemDetailResponseBody &) = default ;
    IntlFlightOtaItemDetailResponseBody(IntlFlightOtaItemDetailResponseBody &&) = default ;
    IntlFlightOtaItemDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightOtaItemDetailResponseBody() = default ;
    IntlFlightOtaItemDetailResponseBody& operator=(const IntlFlightOtaItemDetailResponseBody &) = default ;
    IntlFlightOtaItemDetailResponseBody& operator=(IntlFlightOtaItemDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(flight_journey_infos, flightJourneyInfos_);
        DARABONBA_PTR_TO_JSON(group_item, groupItem_);
        DARABONBA_PTR_TO_JSON(shutter_docs, shutterDocs_);
        DARABONBA_PTR_TO_JSON(trip_type, tripType_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(flight_journey_infos, flightJourneyInfos_);
        DARABONBA_PTR_FROM_JSON(group_item, groupItem_);
        DARABONBA_PTR_FROM_JSON(shutter_docs, shutterDocs_);
        DARABONBA_PTR_FROM_JSON(trip_type, tripType_);
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
      class ShutterDocs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ShutterDocs& obj) { 
          DARABONBA_PTR_TO_JSON(contents, contents_);
          DARABONBA_PTR_TO_JSON(main_title, mainTitle_);
        };
        friend void from_json(const Darabonba::Json& j, ShutterDocs& obj) { 
          DARABONBA_PTR_FROM_JSON(contents, contents_);
          DARABONBA_PTR_FROM_JSON(main_title, mainTitle_);
        };
        ShutterDocs() = default ;
        ShutterDocs(const ShutterDocs &) = default ;
        ShutterDocs(ShutterDocs &&) = default ;
        ShutterDocs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ShutterDocs() = default ;
        ShutterDocs& operator=(const ShutterDocs &) = default ;
        ShutterDocs& operator=(ShutterDocs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->contents_ == nullptr
        && this->mainTitle_ == nullptr; };
        // contents Field Functions 
        bool hasContents() const { return this->contents_ != nullptr;};
        void deleteContents() { this->contents_ = nullptr;};
        inline const vector<string> & getContents() const { DARABONBA_PTR_GET_CONST(contents_, vector<string>) };
        inline vector<string> getContents() { DARABONBA_PTR_GET(contents_, vector<string>) };
        inline ShutterDocs& setContents(const vector<string> & contents) { DARABONBA_PTR_SET_VALUE(contents_, contents) };
        inline ShutterDocs& setContents(vector<string> && contents) { DARABONBA_PTR_SET_RVALUE(contents_, contents) };


        // mainTitle Field Functions 
        bool hasMainTitle() const { return this->mainTitle_ != nullptr;};
        void deleteMainTitle() { this->mainTitle_ = nullptr;};
        inline string getMainTitle() const { DARABONBA_PTR_GET_DEFAULT(mainTitle_, "") };
        inline ShutterDocs& setMainTitle(string mainTitle) { DARABONBA_PTR_SET_VALUE(mainTitle_, mainTitle) };


      protected:
        shared_ptr<vector<string>> contents_ {};
        shared_ptr<string> mainTitle_ {};
      };

      class GroupItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const GroupItem& obj) { 
          DARABONBA_PTR_TO_JSON(agreement_price_codes, agreementPriceCodes_);
          DARABONBA_PTR_TO_JSON(flight_rule_info_list, flightRuleInfoList_);
          DARABONBA_PTR_TO_JSON(item_id, itemId_);
          DARABONBA_PTR_TO_JSON(item_type, itemType_);
          DARABONBA_PTR_TO_JSON(shopping_item_map, shoppingItemMap_);
          DARABONBA_PTR_TO_JSON(sub_item_position_map, subItemPositionMap_);
          DARABONBA_PTR_TO_JSON(sub_items, subItems_);
        };
        friend void from_json(const Darabonba::Json& j, GroupItem& obj) { 
          DARABONBA_PTR_FROM_JSON(agreement_price_codes, agreementPriceCodes_);
          DARABONBA_PTR_FROM_JSON(flight_rule_info_list, flightRuleInfoList_);
          DARABONBA_PTR_FROM_JSON(item_id, itemId_);
          DARABONBA_PTR_FROM_JSON(item_type, itemType_);
          DARABONBA_PTR_FROM_JSON(shopping_item_map, shoppingItemMap_);
          DARABONBA_PTR_FROM_JSON(sub_item_position_map, subItemPositionMap_);
          DARABONBA_PTR_FROM_JSON(sub_items, subItems_);
        };
        GroupItem() = default ;
        GroupItem(const GroupItem &) = default ;
        GroupItem(GroupItem &&) = default ;
        GroupItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~GroupItem() = default ;
        GroupItem& operator=(const GroupItem &) = default ;
        GroupItem& operator=(GroupItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class SubItems : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SubItems& obj) { 
            DARABONBA_PTR_TO_JSON(baggage_rule, baggageRule_);
            DARABONBA_PTR_TO_JSON(refund_change_rule, refundChangeRule_);
            DARABONBA_PTR_TO_JSON(segment_keys, segmentKeys_);
            DARABONBA_PTR_TO_JSON(shopping_item_map, shoppingItemMap_);
            DARABONBA_PTR_TO_JSON(uniq_key, uniqKey_);
          };
          friend void from_json(const Darabonba::Json& j, SubItems& obj) { 
            DARABONBA_PTR_FROM_JSON(baggage_rule, baggageRule_);
            DARABONBA_PTR_FROM_JSON(refund_change_rule, refundChangeRule_);
            DARABONBA_PTR_FROM_JSON(segment_keys, segmentKeys_);
            DARABONBA_PTR_FROM_JSON(shopping_item_map, shoppingItemMap_);
            DARABONBA_PTR_FROM_JSON(uniq_key, uniqKey_);
          };
          SubItems() = default ;
          SubItems(const SubItems &) = default ;
          SubItems(SubItems &&) = default ;
          SubItems(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SubItems() = default ;
          SubItems& operator=(const SubItems &) = default ;
          SubItems& operator=(SubItems &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class RefundChangeRule : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const RefundChangeRule& obj) { 
              DARABONBA_PTR_TO_JSON(cancel_fee_ind, cancelFeeInd_);
              DARABONBA_PTR_TO_JSON(change_fee_ind, changeFeeInd_);
              DARABONBA_PTR_TO_JSON(offer_penalty_info_map, offerPenaltyInfoMap_);
              DARABONBA_PTR_TO_JSON(refund_change_digest, refundChangeDigest_);
              DARABONBA_PTR_TO_JSON(structured_refund, structuredRefund_);
            };
            friend void from_json(const Darabonba::Json& j, RefundChangeRule& obj) { 
              DARABONBA_PTR_FROM_JSON(cancel_fee_ind, cancelFeeInd_);
              DARABONBA_PTR_FROM_JSON(change_fee_ind, changeFeeInd_);
              DARABONBA_PTR_FROM_JSON(offer_penalty_info_map, offerPenaltyInfoMap_);
              DARABONBA_PTR_FROM_JSON(refund_change_digest, refundChangeDigest_);
              DARABONBA_PTR_FROM_JSON(structured_refund, structuredRefund_);
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
            virtual bool empty() const override { return this->cancelFeeInd_ == nullptr
        && this->changeFeeInd_ == nullptr && this->offerPenaltyInfoMap_ == nullptr && this->refundChangeDigest_ == nullptr && this->structuredRefund_ == nullptr; };
            // cancelFeeInd Field Functions 
            bool hasCancelFeeInd() const { return this->cancelFeeInd_ != nullptr;};
            void deleteCancelFeeInd() { this->cancelFeeInd_ = nullptr;};
            inline bool getCancelFeeInd() const { DARABONBA_PTR_GET_DEFAULT(cancelFeeInd_, false) };
            inline RefundChangeRule& setCancelFeeInd(bool cancelFeeInd) { DARABONBA_PTR_SET_VALUE(cancelFeeInd_, cancelFeeInd) };


            // changeFeeInd Field Functions 
            bool hasChangeFeeInd() const { return this->changeFeeInd_ != nullptr;};
            void deleteChangeFeeInd() { this->changeFeeInd_ = nullptr;};
            inline bool getChangeFeeInd() const { DARABONBA_PTR_GET_DEFAULT(changeFeeInd_, false) };
            inline RefundChangeRule& setChangeFeeInd(bool changeFeeInd) { DARABONBA_PTR_SET_VALUE(changeFeeInd_, changeFeeInd) };


            // offerPenaltyInfoMap Field Functions 
            bool hasOfferPenaltyInfoMap() const { return this->offerPenaltyInfoMap_ != nullptr;};
            void deleteOfferPenaltyInfoMap() { this->offerPenaltyInfoMap_ = nullptr;};
            inline const map<string, vector<ModuleGroupItemSubItemsRefundChangeRuleOfferPenaltyInfoMapValue>> & getOfferPenaltyInfoMap() const { DARABONBA_PTR_GET_CONST(offerPenaltyInfoMap_, map<string, vector<ModuleGroupItemSubItemsRefundChangeRuleOfferPenaltyInfoMapValue>>) };
            inline map<string, vector<ModuleGroupItemSubItemsRefundChangeRuleOfferPenaltyInfoMapValue>> getOfferPenaltyInfoMap() { DARABONBA_PTR_GET(offerPenaltyInfoMap_, map<string, vector<ModuleGroupItemSubItemsRefundChangeRuleOfferPenaltyInfoMapValue>>) };
            inline RefundChangeRule& setOfferPenaltyInfoMap(const map<string, vector<ModuleGroupItemSubItemsRefundChangeRuleOfferPenaltyInfoMapValue>> & offerPenaltyInfoMap) { DARABONBA_PTR_SET_VALUE(offerPenaltyInfoMap_, offerPenaltyInfoMap) };
            inline RefundChangeRule& setOfferPenaltyInfoMap(map<string, vector<ModuleGroupItemSubItemsRefundChangeRuleOfferPenaltyInfoMapValue>> && offerPenaltyInfoMap) { DARABONBA_PTR_SET_RVALUE(offerPenaltyInfoMap_, offerPenaltyInfoMap) };


            // refundChangeDigest Field Functions 
            bool hasRefundChangeDigest() const { return this->refundChangeDigest_ != nullptr;};
            void deleteRefundChangeDigest() { this->refundChangeDigest_ = nullptr;};
            inline string getRefundChangeDigest() const { DARABONBA_PTR_GET_DEFAULT(refundChangeDigest_, "") };
            inline RefundChangeRule& setRefundChangeDigest(string refundChangeDigest) { DARABONBA_PTR_SET_VALUE(refundChangeDigest_, refundChangeDigest) };


            // structuredRefund Field Functions 
            bool hasStructuredRefund() const { return this->structuredRefund_ != nullptr;};
            void deleteStructuredRefund() { this->structuredRefund_ = nullptr;};
            inline bool getStructuredRefund() const { DARABONBA_PTR_GET_DEFAULT(structuredRefund_, false) };
            inline RefundChangeRule& setStructuredRefund(bool structuredRefund) { DARABONBA_PTR_SET_VALUE(structuredRefund_, structuredRefund) };


          protected:
            shared_ptr<bool> cancelFeeInd_ {};
            shared_ptr<bool> changeFeeInd_ {};
            shared_ptr<map<string, vector<ModuleGroupItemSubItemsRefundChangeRuleOfferPenaltyInfoMapValue>>> offerPenaltyInfoMap_ {};
            shared_ptr<string> refundChangeDigest_ {};
            shared_ptr<bool> structuredRefund_ {};
          };

          class BaggageRule : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const BaggageRule& obj) { 
              DARABONBA_PTR_TO_JSON(baggage_digest, baggageDigest_);
              DARABONBA_PTR_TO_JSON(baggage_info_map, baggageInfoMap_);
              DARABONBA_PTR_TO_JSON(structured_baggage, structuredBaggage_);
            };
            friend void from_json(const Darabonba::Json& j, BaggageRule& obj) { 
              DARABONBA_PTR_FROM_JSON(baggage_digest, baggageDigest_);
              DARABONBA_PTR_FROM_JSON(baggage_info_map, baggageInfoMap_);
              DARABONBA_PTR_FROM_JSON(structured_baggage, structuredBaggage_);
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
            virtual bool empty() const override { return this->baggageDigest_ == nullptr
        && this->baggageInfoMap_ == nullptr && this->structuredBaggage_ == nullptr; };
            // baggageDigest Field Functions 
            bool hasBaggageDigest() const { return this->baggageDigest_ != nullptr;};
            void deleteBaggageDigest() { this->baggageDigest_ = nullptr;};
            inline string getBaggageDigest() const { DARABONBA_PTR_GET_DEFAULT(baggageDigest_, "") };
            inline BaggageRule& setBaggageDigest(string baggageDigest) { DARABONBA_PTR_SET_VALUE(baggageDigest_, baggageDigest) };


            // baggageInfoMap Field Functions 
            bool hasBaggageInfoMap() const { return this->baggageInfoMap_ != nullptr;};
            void deleteBaggageInfoMap() { this->baggageInfoMap_ = nullptr;};
            inline const map<string, vector<ModuleGroupItemSubItemsBaggageRuleBaggageInfoMapValue>> & getBaggageInfoMap() const { DARABONBA_PTR_GET_CONST(baggageInfoMap_, map<string, vector<ModuleGroupItemSubItemsBaggageRuleBaggageInfoMapValue>>) };
            inline map<string, vector<ModuleGroupItemSubItemsBaggageRuleBaggageInfoMapValue>> getBaggageInfoMap() { DARABONBA_PTR_GET(baggageInfoMap_, map<string, vector<ModuleGroupItemSubItemsBaggageRuleBaggageInfoMapValue>>) };
            inline BaggageRule& setBaggageInfoMap(const map<string, vector<ModuleGroupItemSubItemsBaggageRuleBaggageInfoMapValue>> & baggageInfoMap) { DARABONBA_PTR_SET_VALUE(baggageInfoMap_, baggageInfoMap) };
            inline BaggageRule& setBaggageInfoMap(map<string, vector<ModuleGroupItemSubItemsBaggageRuleBaggageInfoMapValue>> && baggageInfoMap) { DARABONBA_PTR_SET_RVALUE(baggageInfoMap_, baggageInfoMap) };


            // structuredBaggage Field Functions 
            bool hasStructuredBaggage() const { return this->structuredBaggage_ != nullptr;};
            void deleteStructuredBaggage() { this->structuredBaggage_ = nullptr;};
            inline bool getStructuredBaggage() const { DARABONBA_PTR_GET_DEFAULT(structuredBaggage_, false) };
            inline BaggageRule& setStructuredBaggage(bool structuredBaggage) { DARABONBA_PTR_SET_VALUE(structuredBaggage_, structuredBaggage) };


          protected:
            shared_ptr<string> baggageDigest_ {};
            shared_ptr<map<string, vector<ModuleGroupItemSubItemsBaggageRuleBaggageInfoMapValue>>> baggageInfoMap_ {};
            shared_ptr<bool> structuredBaggage_ {};
          };

          virtual bool empty() const override { return this->baggageRule_ == nullptr
        && this->refundChangeRule_ == nullptr && this->segmentKeys_ == nullptr && this->shoppingItemMap_ == nullptr && this->uniqKey_ == nullptr; };
          // baggageRule Field Functions 
          bool hasBaggageRule() const { return this->baggageRule_ != nullptr;};
          void deleteBaggageRule() { this->baggageRule_ = nullptr;};
          inline const SubItems::BaggageRule & getBaggageRule() const { DARABONBA_PTR_GET_CONST(baggageRule_, SubItems::BaggageRule) };
          inline SubItems::BaggageRule getBaggageRule() { DARABONBA_PTR_GET(baggageRule_, SubItems::BaggageRule) };
          inline SubItems& setBaggageRule(const SubItems::BaggageRule & baggageRule) { DARABONBA_PTR_SET_VALUE(baggageRule_, baggageRule) };
          inline SubItems& setBaggageRule(SubItems::BaggageRule && baggageRule) { DARABONBA_PTR_SET_RVALUE(baggageRule_, baggageRule) };


          // refundChangeRule Field Functions 
          bool hasRefundChangeRule() const { return this->refundChangeRule_ != nullptr;};
          void deleteRefundChangeRule() { this->refundChangeRule_ = nullptr;};
          inline const SubItems::RefundChangeRule & getRefundChangeRule() const { DARABONBA_PTR_GET_CONST(refundChangeRule_, SubItems::RefundChangeRule) };
          inline SubItems::RefundChangeRule getRefundChangeRule() { DARABONBA_PTR_GET(refundChangeRule_, SubItems::RefundChangeRule) };
          inline SubItems& setRefundChangeRule(const SubItems::RefundChangeRule & refundChangeRule) { DARABONBA_PTR_SET_VALUE(refundChangeRule_, refundChangeRule) };
          inline SubItems& setRefundChangeRule(SubItems::RefundChangeRule && refundChangeRule) { DARABONBA_PTR_SET_RVALUE(refundChangeRule_, refundChangeRule) };


          // segmentKeys Field Functions 
          bool hasSegmentKeys() const { return this->segmentKeys_ != nullptr;};
          void deleteSegmentKeys() { this->segmentKeys_ = nullptr;};
          inline const vector<string> & getSegmentKeys() const { DARABONBA_PTR_GET_CONST(segmentKeys_, vector<string>) };
          inline vector<string> getSegmentKeys() { DARABONBA_PTR_GET(segmentKeys_, vector<string>) };
          inline SubItems& setSegmentKeys(const vector<string> & segmentKeys) { DARABONBA_PTR_SET_VALUE(segmentKeys_, segmentKeys) };
          inline SubItems& setSegmentKeys(vector<string> && segmentKeys) { DARABONBA_PTR_SET_RVALUE(segmentKeys_, segmentKeys) };


          // shoppingItemMap Field Functions 
          bool hasShoppingItemMap() const { return this->shoppingItemMap_ != nullptr;};
          void deleteShoppingItemMap() { this->shoppingItemMap_ = nullptr;};
          inline const map<string, ModuleGroupItemSubItemsShoppingItemMapValue> & getShoppingItemMap() const { DARABONBA_PTR_GET_CONST(shoppingItemMap_, map<string, ModuleGroupItemSubItemsShoppingItemMapValue>) };
          inline map<string, ModuleGroupItemSubItemsShoppingItemMapValue> getShoppingItemMap() { DARABONBA_PTR_GET(shoppingItemMap_, map<string, ModuleGroupItemSubItemsShoppingItemMapValue>) };
          inline SubItems& setShoppingItemMap(const map<string, ModuleGroupItemSubItemsShoppingItemMapValue> & shoppingItemMap) { DARABONBA_PTR_SET_VALUE(shoppingItemMap_, shoppingItemMap) };
          inline SubItems& setShoppingItemMap(map<string, ModuleGroupItemSubItemsShoppingItemMapValue> && shoppingItemMap) { DARABONBA_PTR_SET_RVALUE(shoppingItemMap_, shoppingItemMap) };


          // uniqKey Field Functions 
          bool hasUniqKey() const { return this->uniqKey_ != nullptr;};
          void deleteUniqKey() { this->uniqKey_ = nullptr;};
          inline string getUniqKey() const { DARABONBA_PTR_GET_DEFAULT(uniqKey_, "") };
          inline SubItems& setUniqKey(string uniqKey) { DARABONBA_PTR_SET_VALUE(uniqKey_, uniqKey) };


        protected:
          shared_ptr<SubItems::BaggageRule> baggageRule_ {};
          shared_ptr<SubItems::RefundChangeRule> refundChangeRule_ {};
          shared_ptr<vector<string>> segmentKeys_ {};
          shared_ptr<map<string, ModuleGroupItemSubItemsShoppingItemMapValue>> shoppingItemMap_ {};
          shared_ptr<string> uniqKey_ {};
        };

        class FlightRuleInfoList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const FlightRuleInfoList& obj) { 
            DARABONBA_PTR_TO_JSON(flight_rule_info, flightRuleInfo_);
            DARABONBA_PTR_TO_JSON(segment_position, segmentPosition_);
          };
          friend void from_json(const Darabonba::Json& j, FlightRuleInfoList& obj) { 
            DARABONBA_PTR_FROM_JSON(flight_rule_info, flightRuleInfo_);
            DARABONBA_PTR_FROM_JSON(segment_position, segmentPosition_);
          };
          FlightRuleInfoList() = default ;
          FlightRuleInfoList(const FlightRuleInfoList &) = default ;
          FlightRuleInfoList(FlightRuleInfoList &&) = default ;
          FlightRuleInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~FlightRuleInfoList() = default ;
          FlightRuleInfoList& operator=(const FlightRuleInfoList &) = default ;
          FlightRuleInfoList& operator=(FlightRuleInfoList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class SegmentPosition : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const SegmentPosition& obj) { 
              DARABONBA_PTR_TO_JSON(journey_index, journeyIndex_);
              DARABONBA_PTR_TO_JSON(segment_index, segmentIndex_);
            };
            friend void from_json(const Darabonba::Json& j, SegmentPosition& obj) { 
              DARABONBA_PTR_FROM_JSON(journey_index, journeyIndex_);
              DARABONBA_PTR_FROM_JSON(segment_index, segmentIndex_);
            };
            SegmentPosition() = default ;
            SegmentPosition(const SegmentPosition &) = default ;
            SegmentPosition(SegmentPosition &&) = default ;
            SegmentPosition(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~SegmentPosition() = default ;
            SegmentPosition& operator=(const SegmentPosition &) = default ;
            SegmentPosition& operator=(SegmentPosition &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->journeyIndex_ == nullptr
        && this->segmentIndex_ == nullptr; };
            // journeyIndex Field Functions 
            bool hasJourneyIndex() const { return this->journeyIndex_ != nullptr;};
            void deleteJourneyIndex() { this->journeyIndex_ = nullptr;};
            inline int32_t getJourneyIndex() const { DARABONBA_PTR_GET_DEFAULT(journeyIndex_, 0) };
            inline SegmentPosition& setJourneyIndex(int32_t journeyIndex) { DARABONBA_PTR_SET_VALUE(journeyIndex_, journeyIndex) };


            // segmentIndex Field Functions 
            bool hasSegmentIndex() const { return this->segmentIndex_ != nullptr;};
            void deleteSegmentIndex() { this->segmentIndex_ = nullptr;};
            inline int32_t getSegmentIndex() const { DARABONBA_PTR_GET_DEFAULT(segmentIndex_, 0) };
            inline SegmentPosition& setSegmentIndex(int32_t segmentIndex) { DARABONBA_PTR_SET_VALUE(segmentIndex_, segmentIndex) };


          protected:
            shared_ptr<int32_t> journeyIndex_ {};
            shared_ptr<int32_t> segmentIndex_ {};
          };

          class FlightRuleInfo : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const FlightRuleInfo& obj) { 
              DARABONBA_PTR_TO_JSON(baggage_desc, baggageDesc_);
              DARABONBA_PTR_TO_JSON(refund_change_rule_desc, refundChangeRuleDesc_);
            };
            friend void from_json(const Darabonba::Json& j, FlightRuleInfo& obj) { 
              DARABONBA_PTR_FROM_JSON(baggage_desc, baggageDesc_);
              DARABONBA_PTR_FROM_JSON(refund_change_rule_desc, refundChangeRuleDesc_);
            };
            FlightRuleInfo() = default ;
            FlightRuleInfo(const FlightRuleInfo &) = default ;
            FlightRuleInfo(FlightRuleInfo &&) = default ;
            FlightRuleInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~FlightRuleInfo() = default ;
            FlightRuleInfo& operator=(const FlightRuleInfo &) = default ;
            FlightRuleInfo& operator=(FlightRuleInfo &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->baggageDesc_ == nullptr
        && this->refundChangeRuleDesc_ == nullptr; };
            // baggageDesc Field Functions 
            bool hasBaggageDesc() const { return this->baggageDesc_ != nullptr;};
            void deleteBaggageDesc() { this->baggageDesc_ = nullptr;};
            inline string getBaggageDesc() const { DARABONBA_PTR_GET_DEFAULT(baggageDesc_, "") };
            inline FlightRuleInfo& setBaggageDesc(string baggageDesc) { DARABONBA_PTR_SET_VALUE(baggageDesc_, baggageDesc) };


            // refundChangeRuleDesc Field Functions 
            bool hasRefundChangeRuleDesc() const { return this->refundChangeRuleDesc_ != nullptr;};
            void deleteRefundChangeRuleDesc() { this->refundChangeRuleDesc_ = nullptr;};
            inline string getRefundChangeRuleDesc() const { DARABONBA_PTR_GET_DEFAULT(refundChangeRuleDesc_, "") };
            inline FlightRuleInfo& setRefundChangeRuleDesc(string refundChangeRuleDesc) { DARABONBA_PTR_SET_VALUE(refundChangeRuleDesc_, refundChangeRuleDesc) };


          protected:
            shared_ptr<string> baggageDesc_ {};
            shared_ptr<string> refundChangeRuleDesc_ {};
          };

          virtual bool empty() const override { return this->flightRuleInfo_ == nullptr
        && this->segmentPosition_ == nullptr; };
          // flightRuleInfo Field Functions 
          bool hasFlightRuleInfo() const { return this->flightRuleInfo_ != nullptr;};
          void deleteFlightRuleInfo() { this->flightRuleInfo_ = nullptr;};
          inline const FlightRuleInfoList::FlightRuleInfo & getFlightRuleInfo() const { DARABONBA_PTR_GET_CONST(flightRuleInfo_, FlightRuleInfoList::FlightRuleInfo) };
          inline FlightRuleInfoList::FlightRuleInfo getFlightRuleInfo() { DARABONBA_PTR_GET(flightRuleInfo_, FlightRuleInfoList::FlightRuleInfo) };
          inline FlightRuleInfoList& setFlightRuleInfo(const FlightRuleInfoList::FlightRuleInfo & flightRuleInfo) { DARABONBA_PTR_SET_VALUE(flightRuleInfo_, flightRuleInfo) };
          inline FlightRuleInfoList& setFlightRuleInfo(FlightRuleInfoList::FlightRuleInfo && flightRuleInfo) { DARABONBA_PTR_SET_RVALUE(flightRuleInfo_, flightRuleInfo) };


          // segmentPosition Field Functions 
          bool hasSegmentPosition() const { return this->segmentPosition_ != nullptr;};
          void deleteSegmentPosition() { this->segmentPosition_ = nullptr;};
          inline const FlightRuleInfoList::SegmentPosition & getSegmentPosition() const { DARABONBA_PTR_GET_CONST(segmentPosition_, FlightRuleInfoList::SegmentPosition) };
          inline FlightRuleInfoList::SegmentPosition getSegmentPosition() { DARABONBA_PTR_GET(segmentPosition_, FlightRuleInfoList::SegmentPosition) };
          inline FlightRuleInfoList& setSegmentPosition(const FlightRuleInfoList::SegmentPosition & segmentPosition) { DARABONBA_PTR_SET_VALUE(segmentPosition_, segmentPosition) };
          inline FlightRuleInfoList& setSegmentPosition(FlightRuleInfoList::SegmentPosition && segmentPosition) { DARABONBA_PTR_SET_RVALUE(segmentPosition_, segmentPosition) };


        protected:
          shared_ptr<FlightRuleInfoList::FlightRuleInfo> flightRuleInfo_ {};
          shared_ptr<FlightRuleInfoList::SegmentPosition> segmentPosition_ {};
        };

        virtual bool empty() const override { return this->agreementPriceCodes_ == nullptr
        && this->flightRuleInfoList_ == nullptr && this->itemId_ == nullptr && this->itemType_ == nullptr && this->shoppingItemMap_ == nullptr && this->subItemPositionMap_ == nullptr
        && this->subItems_ == nullptr; };
        // agreementPriceCodes Field Functions 
        bool hasAgreementPriceCodes() const { return this->agreementPriceCodes_ != nullptr;};
        void deleteAgreementPriceCodes() { this->agreementPriceCodes_ = nullptr;};
        inline const vector<string> & getAgreementPriceCodes() const { DARABONBA_PTR_GET_CONST(agreementPriceCodes_, vector<string>) };
        inline vector<string> getAgreementPriceCodes() { DARABONBA_PTR_GET(agreementPriceCodes_, vector<string>) };
        inline GroupItem& setAgreementPriceCodes(const vector<string> & agreementPriceCodes) { DARABONBA_PTR_SET_VALUE(agreementPriceCodes_, agreementPriceCodes) };
        inline GroupItem& setAgreementPriceCodes(vector<string> && agreementPriceCodes) { DARABONBA_PTR_SET_RVALUE(agreementPriceCodes_, agreementPriceCodes) };


        // flightRuleInfoList Field Functions 
        bool hasFlightRuleInfoList() const { return this->flightRuleInfoList_ != nullptr;};
        void deleteFlightRuleInfoList() { this->flightRuleInfoList_ = nullptr;};
        inline const vector<GroupItem::FlightRuleInfoList> & getFlightRuleInfoList() const { DARABONBA_PTR_GET_CONST(flightRuleInfoList_, vector<GroupItem::FlightRuleInfoList>) };
        inline vector<GroupItem::FlightRuleInfoList> getFlightRuleInfoList() { DARABONBA_PTR_GET(flightRuleInfoList_, vector<GroupItem::FlightRuleInfoList>) };
        inline GroupItem& setFlightRuleInfoList(const vector<GroupItem::FlightRuleInfoList> & flightRuleInfoList) { DARABONBA_PTR_SET_VALUE(flightRuleInfoList_, flightRuleInfoList) };
        inline GroupItem& setFlightRuleInfoList(vector<GroupItem::FlightRuleInfoList> && flightRuleInfoList) { DARABONBA_PTR_SET_RVALUE(flightRuleInfoList_, flightRuleInfoList) };


        // itemId Field Functions 
        bool hasItemId() const { return this->itemId_ != nullptr;};
        void deleteItemId() { this->itemId_ = nullptr;};
        inline string getItemId() const { DARABONBA_PTR_GET_DEFAULT(itemId_, "") };
        inline GroupItem& setItemId(string itemId) { DARABONBA_PTR_SET_VALUE(itemId_, itemId) };


        // itemType Field Functions 
        bool hasItemType() const { return this->itemType_ != nullptr;};
        void deleteItemType() { this->itemType_ = nullptr;};
        inline string getItemType() const { DARABONBA_PTR_GET_DEFAULT(itemType_, "") };
        inline GroupItem& setItemType(string itemType) { DARABONBA_PTR_SET_VALUE(itemType_, itemType) };


        // shoppingItemMap Field Functions 
        bool hasShoppingItemMap() const { return this->shoppingItemMap_ != nullptr;};
        void deleteShoppingItemMap() { this->shoppingItemMap_ = nullptr;};
        inline const map<string, ModuleGroupItemShoppingItemMapValue> & getShoppingItemMap() const { DARABONBA_PTR_GET_CONST(shoppingItemMap_, map<string, ModuleGroupItemShoppingItemMapValue>) };
        inline map<string, ModuleGroupItemShoppingItemMapValue> getShoppingItemMap() { DARABONBA_PTR_GET(shoppingItemMap_, map<string, ModuleGroupItemShoppingItemMapValue>) };
        inline GroupItem& setShoppingItemMap(const map<string, ModuleGroupItemShoppingItemMapValue> & shoppingItemMap) { DARABONBA_PTR_SET_VALUE(shoppingItemMap_, shoppingItemMap) };
        inline GroupItem& setShoppingItemMap(map<string, ModuleGroupItemShoppingItemMapValue> && shoppingItemMap) { DARABONBA_PTR_SET_RVALUE(shoppingItemMap_, shoppingItemMap) };


        // subItemPositionMap Field Functions 
        bool hasSubItemPositionMap() const { return this->subItemPositionMap_ != nullptr;};
        void deleteSubItemPositionMap() { this->subItemPositionMap_ = nullptr;};
        inline const map<string, vector<ModuleGroupItemSubItemPositionMapValue>> & getSubItemPositionMap() const { DARABONBA_PTR_GET_CONST(subItemPositionMap_, map<string, vector<ModuleGroupItemSubItemPositionMapValue>>) };
        inline map<string, vector<ModuleGroupItemSubItemPositionMapValue>> getSubItemPositionMap() { DARABONBA_PTR_GET(subItemPositionMap_, map<string, vector<ModuleGroupItemSubItemPositionMapValue>>) };
        inline GroupItem& setSubItemPositionMap(const map<string, vector<ModuleGroupItemSubItemPositionMapValue>> & subItemPositionMap) { DARABONBA_PTR_SET_VALUE(subItemPositionMap_, subItemPositionMap) };
        inline GroupItem& setSubItemPositionMap(map<string, vector<ModuleGroupItemSubItemPositionMapValue>> && subItemPositionMap) { DARABONBA_PTR_SET_RVALUE(subItemPositionMap_, subItemPositionMap) };


        // subItems Field Functions 
        bool hasSubItems() const { return this->subItems_ != nullptr;};
        void deleteSubItems() { this->subItems_ = nullptr;};
        inline const vector<GroupItem::SubItems> & getSubItems() const { DARABONBA_PTR_GET_CONST(subItems_, vector<GroupItem::SubItems>) };
        inline vector<GroupItem::SubItems> getSubItems() { DARABONBA_PTR_GET(subItems_, vector<GroupItem::SubItems>) };
        inline GroupItem& setSubItems(const vector<GroupItem::SubItems> & subItems) { DARABONBA_PTR_SET_VALUE(subItems_, subItems) };
        inline GroupItem& setSubItems(vector<GroupItem::SubItems> && subItems) { DARABONBA_PTR_SET_RVALUE(subItems_, subItems) };


      protected:
        shared_ptr<vector<string>> agreementPriceCodes_ {};
        shared_ptr<vector<GroupItem::FlightRuleInfoList>> flightRuleInfoList_ {};
        shared_ptr<string> itemId_ {};
        shared_ptr<string> itemType_ {};
        shared_ptr<map<string, ModuleGroupItemShoppingItemMapValue>> shoppingItemMap_ {};
        shared_ptr<map<string, vector<ModuleGroupItemSubItemPositionMapValue>>> subItemPositionMap_ {};
        shared_ptr<vector<GroupItem::SubItems>> subItems_ {};
      };

      class FlightJourneyInfos : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FlightJourneyInfos& obj) { 
          DARABONBA_PTR_TO_JSON(arr_city_code, arrCityCode_);
          DARABONBA_PTR_TO_JSON(arr_city_name, arrCityName_);
          DARABONBA_PTR_TO_JSON(arr_time, arrTime_);
          DARABONBA_PTR_TO_JSON(dep_city_code, depCityCode_);
          DARABONBA_PTR_TO_JSON(dep_city_name, depCityName_);
          DARABONBA_PTR_TO_JSON(dep_time, depTime_);
          DARABONBA_PTR_TO_JSON(duration, duration_);
          DARABONBA_PTR_TO_JSON(extensions, extensions_);
          DARABONBA_PTR_TO_JSON(flight_segment_infos, flightSegmentInfos_);
          DARABONBA_PTR_TO_JSON(journey_index, journeyIndex_);
          DARABONBA_PTR_TO_JSON(transfer_time, transferTime_);
        };
        friend void from_json(const Darabonba::Json& j, FlightJourneyInfos& obj) { 
          DARABONBA_PTR_FROM_JSON(arr_city_code, arrCityCode_);
          DARABONBA_PTR_FROM_JSON(arr_city_name, arrCityName_);
          DARABONBA_PTR_FROM_JSON(arr_time, arrTime_);
          DARABONBA_PTR_FROM_JSON(dep_city_code, depCityCode_);
          DARABONBA_PTR_FROM_JSON(dep_city_name, depCityName_);
          DARABONBA_PTR_FROM_JSON(dep_time, depTime_);
          DARABONBA_PTR_FROM_JSON(duration, duration_);
          DARABONBA_PTR_FROM_JSON(extensions, extensions_);
          DARABONBA_PTR_FROM_JSON(flight_segment_infos, flightSegmentInfos_);
          DARABONBA_PTR_FROM_JSON(journey_index, journeyIndex_);
          DARABONBA_PTR_FROM_JSON(transfer_time, transferTime_);
        };
        FlightJourneyInfos() = default ;
        FlightJourneyInfos(const FlightJourneyInfos &) = default ;
        FlightJourneyInfos(FlightJourneyInfos &&) = default ;
        FlightJourneyInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FlightJourneyInfos() = default ;
        FlightJourneyInfos& operator=(const FlightJourneyInfos &) = default ;
        FlightJourneyInfos& operator=(FlightJourneyInfos &&) = default ;
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
            DARABONBA_PTR_TO_JSON(baggage_desc, baggageDesc_);
            DARABONBA_PTR_TO_JSON(dep_airport_info, depAirportInfo_);
            DARABONBA_PTR_TO_JSON(dep_city_code, depCityCode_);
            DARABONBA_PTR_TO_JSON(dep_city_name, depCityName_);
            DARABONBA_PTR_TO_JSON(dep_time, depTime_);
            DARABONBA_PTR_TO_JSON(duration, duration_);
            DARABONBA_PTR_TO_JSON(flight_no, flightNo_);
            DARABONBA_PTR_TO_JSON(flight_share_info, flightShareInfo_);
            DARABONBA_PTR_TO_JSON(flight_size, flightSize_);
            DARABONBA_PTR_TO_JSON(flight_stop_info, flightStopInfo_);
            DARABONBA_PTR_TO_JSON(flight_type, flightType_);
            DARABONBA_PTR_TO_JSON(luggage_direct_info, luggageDirectInfo_);
            DARABONBA_PTR_TO_JSON(manufacturer, manufacturer_);
            DARABONBA_PTR_TO_JSON(meal_desc, mealDesc_);
            DARABONBA_PTR_TO_JSON(on_time_rate, onTimeRate_);
            DARABONBA_PTR_TO_JSON(one_more, oneMore_);
            DARABONBA_PTR_TO_JSON(one_more_show, oneMoreShow_);
            DARABONBA_PTR_TO_JSON(segment_index, segmentIndex_);
            DARABONBA_PTR_TO_JSON(segment_key, segmentKey_);
            DARABONBA_PTR_TO_JSON(segment_visa_remark, segmentVisaRemark_);
            DARABONBA_PTR_TO_JSON(share, share_);
            DARABONBA_PTR_TO_JSON(short_flight_size, shortFlightSize_);
            DARABONBA_PTR_TO_JSON(stop, stop_);
            DARABONBA_PTR_TO_JSON(total_time, totalTime_);
            DARABONBA_PTR_TO_JSON(transfer_time, transferTime_);
            DARABONBA_PTR_TO_JSON(transfer_time_number, transferTimeNumber_);
          };
          friend void from_json(const Darabonba::Json& j, FlightSegmentInfos& obj) { 
            DARABONBA_PTR_FROM_JSON(airline_info, airlineInfo_);
            DARABONBA_PTR_FROM_JSON(arr_airport_info, arrAirportInfo_);
            DARABONBA_PTR_FROM_JSON(arr_city_code, arrCityCode_);
            DARABONBA_PTR_FROM_JSON(arr_city_name, arrCityName_);
            DARABONBA_PTR_FROM_JSON(arr_time, arrTime_);
            DARABONBA_PTR_FROM_JSON(baggage_desc, baggageDesc_);
            DARABONBA_PTR_FROM_JSON(dep_airport_info, depAirportInfo_);
            DARABONBA_PTR_FROM_JSON(dep_city_code, depCityCode_);
            DARABONBA_PTR_FROM_JSON(dep_city_name, depCityName_);
            DARABONBA_PTR_FROM_JSON(dep_time, depTime_);
            DARABONBA_PTR_FROM_JSON(duration, duration_);
            DARABONBA_PTR_FROM_JSON(flight_no, flightNo_);
            DARABONBA_PTR_FROM_JSON(flight_share_info, flightShareInfo_);
            DARABONBA_PTR_FROM_JSON(flight_size, flightSize_);
            DARABONBA_PTR_FROM_JSON(flight_stop_info, flightStopInfo_);
            DARABONBA_PTR_FROM_JSON(flight_type, flightType_);
            DARABONBA_PTR_FROM_JSON(luggage_direct_info, luggageDirectInfo_);
            DARABONBA_PTR_FROM_JSON(manufacturer, manufacturer_);
            DARABONBA_PTR_FROM_JSON(meal_desc, mealDesc_);
            DARABONBA_PTR_FROM_JSON(on_time_rate, onTimeRate_);
            DARABONBA_PTR_FROM_JSON(one_more, oneMore_);
            DARABONBA_PTR_FROM_JSON(one_more_show, oneMoreShow_);
            DARABONBA_PTR_FROM_JSON(segment_index, segmentIndex_);
            DARABONBA_PTR_FROM_JSON(segment_key, segmentKey_);
            DARABONBA_PTR_FROM_JSON(segment_visa_remark, segmentVisaRemark_);
            DARABONBA_PTR_FROM_JSON(share, share_);
            DARABONBA_PTR_FROM_JSON(short_flight_size, shortFlightSize_);
            DARABONBA_PTR_FROM_JSON(stop, stop_);
            DARABONBA_PTR_FROM_JSON(total_time, totalTime_);
            DARABONBA_PTR_FROM_JSON(transfer_time, transferTime_);
            DARABONBA_PTR_FROM_JSON(transfer_time_number, transferTimeNumber_);
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

          class FlightStopInfo : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const FlightStopInfo& obj) { 
              DARABONBA_PTR_TO_JSON(stop_airport, stopAirport_);
              DARABONBA_PTR_TO_JSON(stop_airport_name, stopAirportName_);
              DARABONBA_PTR_TO_JSON(stop_arr_term, stopArrTerm_);
              DARABONBA_PTR_TO_JSON(stop_arr_time, stopArrTime_);
              DARABONBA_PTR_TO_JSON(stop_city_code, stopCityCode_);
              DARABONBA_PTR_TO_JSON(stop_city_name, stopCityName_);
              DARABONBA_PTR_TO_JSON(stop_city_names, stopCityNames_);
              DARABONBA_PTR_TO_JSON(stop_dep_term, stopDepTerm_);
              DARABONBA_PTR_TO_JSON(stop_dep_time, stopDepTime_);
              DARABONBA_PTR_TO_JSON(stop_time, stopTime_);
            };
            friend void from_json(const Darabonba::Json& j, FlightStopInfo& obj) { 
              DARABONBA_PTR_FROM_JSON(stop_airport, stopAirport_);
              DARABONBA_PTR_FROM_JSON(stop_airport_name, stopAirportName_);
              DARABONBA_PTR_FROM_JSON(stop_arr_term, stopArrTerm_);
              DARABONBA_PTR_FROM_JSON(stop_arr_time, stopArrTime_);
              DARABONBA_PTR_FROM_JSON(stop_city_code, stopCityCode_);
              DARABONBA_PTR_FROM_JSON(stop_city_name, stopCityName_);
              DARABONBA_PTR_FROM_JSON(stop_city_names, stopCityNames_);
              DARABONBA_PTR_FROM_JSON(stop_dep_term, stopDepTerm_);
              DARABONBA_PTR_FROM_JSON(stop_dep_time, stopDepTime_);
              DARABONBA_PTR_FROM_JSON(stop_time, stopTime_);
            };
            FlightStopInfo() = default ;
            FlightStopInfo(const FlightStopInfo &) = default ;
            FlightStopInfo(FlightStopInfo &&) = default ;
            FlightStopInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~FlightStopInfo() = default ;
            FlightStopInfo& operator=(const FlightStopInfo &) = default ;
            FlightStopInfo& operator=(FlightStopInfo &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->stopAirport_ == nullptr
        && this->stopAirportName_ == nullptr && this->stopArrTerm_ == nullptr && this->stopArrTime_ == nullptr && this->stopCityCode_ == nullptr && this->stopCityName_ == nullptr
        && this->stopCityNames_ == nullptr && this->stopDepTerm_ == nullptr && this->stopDepTime_ == nullptr && this->stopTime_ == nullptr; };
            // stopAirport Field Functions 
            bool hasStopAirport() const { return this->stopAirport_ != nullptr;};
            void deleteStopAirport() { this->stopAirport_ = nullptr;};
            inline string getStopAirport() const { DARABONBA_PTR_GET_DEFAULT(stopAirport_, "") };
            inline FlightStopInfo& setStopAirport(string stopAirport) { DARABONBA_PTR_SET_VALUE(stopAirport_, stopAirport) };


            // stopAirportName Field Functions 
            bool hasStopAirportName() const { return this->stopAirportName_ != nullptr;};
            void deleteStopAirportName() { this->stopAirportName_ = nullptr;};
            inline string getStopAirportName() const { DARABONBA_PTR_GET_DEFAULT(stopAirportName_, "") };
            inline FlightStopInfo& setStopAirportName(string stopAirportName) { DARABONBA_PTR_SET_VALUE(stopAirportName_, stopAirportName) };


            // stopArrTerm Field Functions 
            bool hasStopArrTerm() const { return this->stopArrTerm_ != nullptr;};
            void deleteStopArrTerm() { this->stopArrTerm_ = nullptr;};
            inline string getStopArrTerm() const { DARABONBA_PTR_GET_DEFAULT(stopArrTerm_, "") };
            inline FlightStopInfo& setStopArrTerm(string stopArrTerm) { DARABONBA_PTR_SET_VALUE(stopArrTerm_, stopArrTerm) };


            // stopArrTime Field Functions 
            bool hasStopArrTime() const { return this->stopArrTime_ != nullptr;};
            void deleteStopArrTime() { this->stopArrTime_ = nullptr;};
            inline string getStopArrTime() const { DARABONBA_PTR_GET_DEFAULT(stopArrTime_, "") };
            inline FlightStopInfo& setStopArrTime(string stopArrTime) { DARABONBA_PTR_SET_VALUE(stopArrTime_, stopArrTime) };


            // stopCityCode Field Functions 
            bool hasStopCityCode() const { return this->stopCityCode_ != nullptr;};
            void deleteStopCityCode() { this->stopCityCode_ = nullptr;};
            inline string getStopCityCode() const { DARABONBA_PTR_GET_DEFAULT(stopCityCode_, "") };
            inline FlightStopInfo& setStopCityCode(string stopCityCode) { DARABONBA_PTR_SET_VALUE(stopCityCode_, stopCityCode) };


            // stopCityName Field Functions 
            bool hasStopCityName() const { return this->stopCityName_ != nullptr;};
            void deleteStopCityName() { this->stopCityName_ = nullptr;};
            inline string getStopCityName() const { DARABONBA_PTR_GET_DEFAULT(stopCityName_, "") };
            inline FlightStopInfo& setStopCityName(string stopCityName) { DARABONBA_PTR_SET_VALUE(stopCityName_, stopCityName) };


            // stopCityNames Field Functions 
            bool hasStopCityNames() const { return this->stopCityNames_ != nullptr;};
            void deleteStopCityNames() { this->stopCityNames_ = nullptr;};
            inline const vector<string> & getStopCityNames() const { DARABONBA_PTR_GET_CONST(stopCityNames_, vector<string>) };
            inline vector<string> getStopCityNames() { DARABONBA_PTR_GET(stopCityNames_, vector<string>) };
            inline FlightStopInfo& setStopCityNames(const vector<string> & stopCityNames) { DARABONBA_PTR_SET_VALUE(stopCityNames_, stopCityNames) };
            inline FlightStopInfo& setStopCityNames(vector<string> && stopCityNames) { DARABONBA_PTR_SET_RVALUE(stopCityNames_, stopCityNames) };


            // stopDepTerm Field Functions 
            bool hasStopDepTerm() const { return this->stopDepTerm_ != nullptr;};
            void deleteStopDepTerm() { this->stopDepTerm_ = nullptr;};
            inline string getStopDepTerm() const { DARABONBA_PTR_GET_DEFAULT(stopDepTerm_, "") };
            inline FlightStopInfo& setStopDepTerm(string stopDepTerm) { DARABONBA_PTR_SET_VALUE(stopDepTerm_, stopDepTerm) };


            // stopDepTime Field Functions 
            bool hasStopDepTime() const { return this->stopDepTime_ != nullptr;};
            void deleteStopDepTime() { this->stopDepTime_ = nullptr;};
            inline string getStopDepTime() const { DARABONBA_PTR_GET_DEFAULT(stopDepTime_, "") };
            inline FlightStopInfo& setStopDepTime(string stopDepTime) { DARABONBA_PTR_SET_VALUE(stopDepTime_, stopDepTime) };


            // stopTime Field Functions 
            bool hasStopTime() const { return this->stopTime_ != nullptr;};
            void deleteStopTime() { this->stopTime_ = nullptr;};
            inline string getStopTime() const { DARABONBA_PTR_GET_DEFAULT(stopTime_, "") };
            inline FlightStopInfo& setStopTime(string stopTime) { DARABONBA_PTR_SET_VALUE(stopTime_, stopTime) };


          protected:
            shared_ptr<string> stopAirport_ {};
            shared_ptr<string> stopAirportName_ {};
            shared_ptr<string> stopArrTerm_ {};
            shared_ptr<string> stopArrTime_ {};
            shared_ptr<string> stopCityCode_ {};
            shared_ptr<string> stopCityName_ {};
            shared_ptr<vector<string>> stopCityNames_ {};
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
                DARABONBA_PTR_TO_JSON(airline_chinese_name, airlineChineseName_);
                DARABONBA_PTR_TO_JSON(airline_chinese_short_name, airlineChineseShortName_);
                DARABONBA_PTR_TO_JSON(airline_code, airlineCode_);
                DARABONBA_PTR_TO_JSON(airline_icon, airlineIcon_);
                DARABONBA_PTR_TO_JSON(cheap_flight, cheapFlight_);
              };
              friend void from_json(const Darabonba::Json& j, OperatingAirlineInfo& obj) { 
                DARABONBA_PTR_FROM_JSON(airline_chinese_name, airlineChineseName_);
                DARABONBA_PTR_FROM_JSON(airline_chinese_short_name, airlineChineseShortName_);
                DARABONBA_PTR_FROM_JSON(airline_code, airlineCode_);
                DARABONBA_PTR_FROM_JSON(airline_icon, airlineIcon_);
                DARABONBA_PTR_FROM_JSON(cheap_flight, cheapFlight_);
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
              virtual bool empty() const override { return this->airlineChineseName_ == nullptr
        && this->airlineChineseShortName_ == nullptr && this->airlineCode_ == nullptr && this->airlineIcon_ == nullptr && this->cheapFlight_ == nullptr; };
              // airlineChineseName Field Functions 
              bool hasAirlineChineseName() const { return this->airlineChineseName_ != nullptr;};
              void deleteAirlineChineseName() { this->airlineChineseName_ = nullptr;};
              inline string getAirlineChineseName() const { DARABONBA_PTR_GET_DEFAULT(airlineChineseName_, "") };
              inline OperatingAirlineInfo& setAirlineChineseName(string airlineChineseName) { DARABONBA_PTR_SET_VALUE(airlineChineseName_, airlineChineseName) };


              // airlineChineseShortName Field Functions 
              bool hasAirlineChineseShortName() const { return this->airlineChineseShortName_ != nullptr;};
              void deleteAirlineChineseShortName() { this->airlineChineseShortName_ = nullptr;};
              inline string getAirlineChineseShortName() const { DARABONBA_PTR_GET_DEFAULT(airlineChineseShortName_, "") };
              inline OperatingAirlineInfo& setAirlineChineseShortName(string airlineChineseShortName) { DARABONBA_PTR_SET_VALUE(airlineChineseShortName_, airlineChineseShortName) };


              // airlineCode Field Functions 
              bool hasAirlineCode() const { return this->airlineCode_ != nullptr;};
              void deleteAirlineCode() { this->airlineCode_ = nullptr;};
              inline string getAirlineCode() const { DARABONBA_PTR_GET_DEFAULT(airlineCode_, "") };
              inline OperatingAirlineInfo& setAirlineCode(string airlineCode) { DARABONBA_PTR_SET_VALUE(airlineCode_, airlineCode) };


              // airlineIcon Field Functions 
              bool hasAirlineIcon() const { return this->airlineIcon_ != nullptr;};
              void deleteAirlineIcon() { this->airlineIcon_ = nullptr;};
              inline string getAirlineIcon() const { DARABONBA_PTR_GET_DEFAULT(airlineIcon_, "") };
              inline OperatingAirlineInfo& setAirlineIcon(string airlineIcon) { DARABONBA_PTR_SET_VALUE(airlineIcon_, airlineIcon) };


              // cheapFlight Field Functions 
              bool hasCheapFlight() const { return this->cheapFlight_ != nullptr;};
              void deleteCheapFlight() { this->cheapFlight_ = nullptr;};
              inline bool getCheapFlight() const { DARABONBA_PTR_GET_DEFAULT(cheapFlight_, false) };
              inline OperatingAirlineInfo& setCheapFlight(bool cheapFlight) { DARABONBA_PTR_SET_VALUE(cheapFlight_, cheapFlight) };


            protected:
              shared_ptr<string> airlineChineseName_ {};
              shared_ptr<string> airlineChineseShortName_ {};
              shared_ptr<string> airlineCode_ {};
              shared_ptr<string> airlineIcon_ {};
              shared_ptr<bool> cheapFlight_ {};
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
              DARABONBA_PTR_TO_JSON(airline_chinese_name, airlineChineseName_);
              DARABONBA_PTR_TO_JSON(airline_chinese_short_name, airlineChineseShortName_);
              DARABONBA_PTR_TO_JSON(airline_code, airlineCode_);
              DARABONBA_PTR_TO_JSON(airline_icon, airlineIcon_);
              DARABONBA_PTR_TO_JSON(cheap_flight, cheapFlight_);
            };
            friend void from_json(const Darabonba::Json& j, AirlineInfo& obj) { 
              DARABONBA_PTR_FROM_JSON(airline_chinese_name, airlineChineseName_);
              DARABONBA_PTR_FROM_JSON(airline_chinese_short_name, airlineChineseShortName_);
              DARABONBA_PTR_FROM_JSON(airline_code, airlineCode_);
              DARABONBA_PTR_FROM_JSON(airline_icon, airlineIcon_);
              DARABONBA_PTR_FROM_JSON(cheap_flight, cheapFlight_);
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
            virtual bool empty() const override { return this->airlineChineseName_ == nullptr
        && this->airlineChineseShortName_ == nullptr && this->airlineCode_ == nullptr && this->airlineIcon_ == nullptr && this->cheapFlight_ == nullptr; };
            // airlineChineseName Field Functions 
            bool hasAirlineChineseName() const { return this->airlineChineseName_ != nullptr;};
            void deleteAirlineChineseName() { this->airlineChineseName_ = nullptr;};
            inline string getAirlineChineseName() const { DARABONBA_PTR_GET_DEFAULT(airlineChineseName_, "") };
            inline AirlineInfo& setAirlineChineseName(string airlineChineseName) { DARABONBA_PTR_SET_VALUE(airlineChineseName_, airlineChineseName) };


            // airlineChineseShortName Field Functions 
            bool hasAirlineChineseShortName() const { return this->airlineChineseShortName_ != nullptr;};
            void deleteAirlineChineseShortName() { this->airlineChineseShortName_ = nullptr;};
            inline string getAirlineChineseShortName() const { DARABONBA_PTR_GET_DEFAULT(airlineChineseShortName_, "") };
            inline AirlineInfo& setAirlineChineseShortName(string airlineChineseShortName) { DARABONBA_PTR_SET_VALUE(airlineChineseShortName_, airlineChineseShortName) };


            // airlineCode Field Functions 
            bool hasAirlineCode() const { return this->airlineCode_ != nullptr;};
            void deleteAirlineCode() { this->airlineCode_ = nullptr;};
            inline string getAirlineCode() const { DARABONBA_PTR_GET_DEFAULT(airlineCode_, "") };
            inline AirlineInfo& setAirlineCode(string airlineCode) { DARABONBA_PTR_SET_VALUE(airlineCode_, airlineCode) };


            // airlineIcon Field Functions 
            bool hasAirlineIcon() const { return this->airlineIcon_ != nullptr;};
            void deleteAirlineIcon() { this->airlineIcon_ = nullptr;};
            inline string getAirlineIcon() const { DARABONBA_PTR_GET_DEFAULT(airlineIcon_, "") };
            inline AirlineInfo& setAirlineIcon(string airlineIcon) { DARABONBA_PTR_SET_VALUE(airlineIcon_, airlineIcon) };


            // cheapFlight Field Functions 
            bool hasCheapFlight() const { return this->cheapFlight_ != nullptr;};
            void deleteCheapFlight() { this->cheapFlight_ = nullptr;};
            inline bool getCheapFlight() const { DARABONBA_PTR_GET_DEFAULT(cheapFlight_, false) };
            inline AirlineInfo& setCheapFlight(bool cheapFlight) { DARABONBA_PTR_SET_VALUE(cheapFlight_, cheapFlight) };


          protected:
            shared_ptr<string> airlineChineseName_ {};
            shared_ptr<string> airlineChineseShortName_ {};
            shared_ptr<string> airlineCode_ {};
            shared_ptr<string> airlineIcon_ {};
            shared_ptr<bool> cheapFlight_ {};
          };

          virtual bool empty() const override { return this->airlineInfo_ == nullptr
        && this->arrAirportInfo_ == nullptr && this->arrCityCode_ == nullptr && this->arrCityName_ == nullptr && this->arrTime_ == nullptr && this->baggageDesc_ == nullptr
        && this->depAirportInfo_ == nullptr && this->depCityCode_ == nullptr && this->depCityName_ == nullptr && this->depTime_ == nullptr && this->duration_ == nullptr
        && this->flightNo_ == nullptr && this->flightShareInfo_ == nullptr && this->flightSize_ == nullptr && this->flightStopInfo_ == nullptr && this->flightType_ == nullptr
        && this->luggageDirectInfo_ == nullptr && this->manufacturer_ == nullptr && this->mealDesc_ == nullptr && this->onTimeRate_ == nullptr && this->oneMore_ == nullptr
        && this->oneMoreShow_ == nullptr && this->segmentIndex_ == nullptr && this->segmentKey_ == nullptr && this->segmentVisaRemark_ == nullptr && this->share_ == nullptr
        && this->shortFlightSize_ == nullptr && this->stop_ == nullptr && this->totalTime_ == nullptr && this->transferTime_ == nullptr && this->transferTimeNumber_ == nullptr; };
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


          // baggageDesc Field Functions 
          bool hasBaggageDesc() const { return this->baggageDesc_ != nullptr;};
          void deleteBaggageDesc() { this->baggageDesc_ = nullptr;};
          inline string getBaggageDesc() const { DARABONBA_PTR_GET_DEFAULT(baggageDesc_, "") };
          inline FlightSegmentInfos& setBaggageDesc(string baggageDesc) { DARABONBA_PTR_SET_VALUE(baggageDesc_, baggageDesc) };


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


          // flightStopInfo Field Functions 
          bool hasFlightStopInfo() const { return this->flightStopInfo_ != nullptr;};
          void deleteFlightStopInfo() { this->flightStopInfo_ = nullptr;};
          inline const FlightSegmentInfos::FlightStopInfo & getFlightStopInfo() const { DARABONBA_PTR_GET_CONST(flightStopInfo_, FlightSegmentInfos::FlightStopInfo) };
          inline FlightSegmentInfos::FlightStopInfo getFlightStopInfo() { DARABONBA_PTR_GET(flightStopInfo_, FlightSegmentInfos::FlightStopInfo) };
          inline FlightSegmentInfos& setFlightStopInfo(const FlightSegmentInfos::FlightStopInfo & flightStopInfo) { DARABONBA_PTR_SET_VALUE(flightStopInfo_, flightStopInfo) };
          inline FlightSegmentInfos& setFlightStopInfo(FlightSegmentInfos::FlightStopInfo && flightStopInfo) { DARABONBA_PTR_SET_RVALUE(flightStopInfo_, flightStopInfo) };


          // flightType Field Functions 
          bool hasFlightType() const { return this->flightType_ != nullptr;};
          void deleteFlightType() { this->flightType_ = nullptr;};
          inline string getFlightType() const { DARABONBA_PTR_GET_DEFAULT(flightType_, "") };
          inline FlightSegmentInfos& setFlightType(string flightType) { DARABONBA_PTR_SET_VALUE(flightType_, flightType) };


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


          // onTimeRate Field Functions 
          bool hasOnTimeRate() const { return this->onTimeRate_ != nullptr;};
          void deleteOnTimeRate() { this->onTimeRate_ = nullptr;};
          inline string getOnTimeRate() const { DARABONBA_PTR_GET_DEFAULT(onTimeRate_, "") };
          inline FlightSegmentInfos& setOnTimeRate(string onTimeRate) { DARABONBA_PTR_SET_VALUE(onTimeRate_, onTimeRate) };


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


          // transferTime Field Functions 
          bool hasTransferTime() const { return this->transferTime_ != nullptr;};
          void deleteTransferTime() { this->transferTime_ = nullptr;};
          inline string getTransferTime() const { DARABONBA_PTR_GET_DEFAULT(transferTime_, "") };
          inline FlightSegmentInfos& setTransferTime(string transferTime) { DARABONBA_PTR_SET_VALUE(transferTime_, transferTime) };


          // transferTimeNumber Field Functions 
          bool hasTransferTimeNumber() const { return this->transferTimeNumber_ != nullptr;};
          void deleteTransferTimeNumber() { this->transferTimeNumber_ = nullptr;};
          inline int32_t getTransferTimeNumber() const { DARABONBA_PTR_GET_DEFAULT(transferTimeNumber_, 0) };
          inline FlightSegmentInfos& setTransferTimeNumber(int32_t transferTimeNumber) { DARABONBA_PTR_SET_VALUE(transferTimeNumber_, transferTimeNumber) };


        protected:
          shared_ptr<FlightSegmentInfos::AirlineInfo> airlineInfo_ {};
          shared_ptr<FlightSegmentInfos::ArrAirportInfo> arrAirportInfo_ {};
          shared_ptr<string> arrCityCode_ {};
          shared_ptr<string> arrCityName_ {};
          shared_ptr<string> arrTime_ {};
          shared_ptr<string> baggageDesc_ {};
          shared_ptr<FlightSegmentInfos::DepAirportInfo> depAirportInfo_ {};
          shared_ptr<string> depCityCode_ {};
          shared_ptr<string> depCityName_ {};
          shared_ptr<string> depTime_ {};
          shared_ptr<int32_t> duration_ {};
          shared_ptr<string> flightNo_ {};
          shared_ptr<FlightSegmentInfos::FlightShareInfo> flightShareInfo_ {};
          shared_ptr<string> flightSize_ {};
          shared_ptr<FlightSegmentInfos::FlightStopInfo> flightStopInfo_ {};
          shared_ptr<string> flightType_ {};
          shared_ptr<FlightSegmentInfos::LuggageDirectInfo> luggageDirectInfo_ {};
          shared_ptr<string> manufacturer_ {};
          shared_ptr<string> mealDesc_ {};
          shared_ptr<string> onTimeRate_ {};
          shared_ptr<int32_t> oneMore_ {};
          shared_ptr<string> oneMoreShow_ {};
          shared_ptr<int32_t> segmentIndex_ {};
          shared_ptr<string> segmentKey_ {};
          shared_ptr<FlightSegmentInfos::SegmentVisaRemark> segmentVisaRemark_ {};
          shared_ptr<bool> share_ {};
          shared_ptr<string> shortFlightSize_ {};
          shared_ptr<bool> stop_ {};
          shared_ptr<string> totalTime_ {};
          shared_ptr<string> transferTime_ {};
          shared_ptr<int32_t> transferTimeNumber_ {};
        };

        virtual bool empty() const override { return this->arrCityCode_ == nullptr
        && this->arrCityName_ == nullptr && this->arrTime_ == nullptr && this->depCityCode_ == nullptr && this->depCityName_ == nullptr && this->depTime_ == nullptr
        && this->duration_ == nullptr && this->extensions_ == nullptr && this->flightSegmentInfos_ == nullptr && this->journeyIndex_ == nullptr && this->transferTime_ == nullptr; };
        // arrCityCode Field Functions 
        bool hasArrCityCode() const { return this->arrCityCode_ != nullptr;};
        void deleteArrCityCode() { this->arrCityCode_ = nullptr;};
        inline string getArrCityCode() const { DARABONBA_PTR_GET_DEFAULT(arrCityCode_, "") };
        inline FlightJourneyInfos& setArrCityCode(string arrCityCode) { DARABONBA_PTR_SET_VALUE(arrCityCode_, arrCityCode) };


        // arrCityName Field Functions 
        bool hasArrCityName() const { return this->arrCityName_ != nullptr;};
        void deleteArrCityName() { this->arrCityName_ = nullptr;};
        inline string getArrCityName() const { DARABONBA_PTR_GET_DEFAULT(arrCityName_, "") };
        inline FlightJourneyInfos& setArrCityName(string arrCityName) { DARABONBA_PTR_SET_VALUE(arrCityName_, arrCityName) };


        // arrTime Field Functions 
        bool hasArrTime() const { return this->arrTime_ != nullptr;};
        void deleteArrTime() { this->arrTime_ = nullptr;};
        inline string getArrTime() const { DARABONBA_PTR_GET_DEFAULT(arrTime_, "") };
        inline FlightJourneyInfos& setArrTime(string arrTime) { DARABONBA_PTR_SET_VALUE(arrTime_, arrTime) };


        // depCityCode Field Functions 
        bool hasDepCityCode() const { return this->depCityCode_ != nullptr;};
        void deleteDepCityCode() { this->depCityCode_ = nullptr;};
        inline string getDepCityCode() const { DARABONBA_PTR_GET_DEFAULT(depCityCode_, "") };
        inline FlightJourneyInfos& setDepCityCode(string depCityCode) { DARABONBA_PTR_SET_VALUE(depCityCode_, depCityCode) };


        // depCityName Field Functions 
        bool hasDepCityName() const { return this->depCityName_ != nullptr;};
        void deleteDepCityName() { this->depCityName_ = nullptr;};
        inline string getDepCityName() const { DARABONBA_PTR_GET_DEFAULT(depCityName_, "") };
        inline FlightJourneyInfos& setDepCityName(string depCityName) { DARABONBA_PTR_SET_VALUE(depCityName_, depCityName) };


        // depTime Field Functions 
        bool hasDepTime() const { return this->depTime_ != nullptr;};
        void deleteDepTime() { this->depTime_ = nullptr;};
        inline string getDepTime() const { DARABONBA_PTR_GET_DEFAULT(depTime_, "") };
        inline FlightJourneyInfos& setDepTime(string depTime) { DARABONBA_PTR_SET_VALUE(depTime_, depTime) };


        // duration Field Functions 
        bool hasDuration() const { return this->duration_ != nullptr;};
        void deleteDuration() { this->duration_ = nullptr;};
        inline int32_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
        inline FlightJourneyInfos& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


        // extensions Field Functions 
        bool hasExtensions() const { return this->extensions_ != nullptr;};
        void deleteExtensions() { this->extensions_ = nullptr;};
        inline const map<string, string> & getExtensions() const { DARABONBA_PTR_GET_CONST(extensions_, map<string, string>) };
        inline map<string, string> getExtensions() { DARABONBA_PTR_GET(extensions_, map<string, string>) };
        inline FlightJourneyInfos& setExtensions(const map<string, string> & extensions) { DARABONBA_PTR_SET_VALUE(extensions_, extensions) };
        inline FlightJourneyInfos& setExtensions(map<string, string> && extensions) { DARABONBA_PTR_SET_RVALUE(extensions_, extensions) };


        // flightSegmentInfos Field Functions 
        bool hasFlightSegmentInfos() const { return this->flightSegmentInfos_ != nullptr;};
        void deleteFlightSegmentInfos() { this->flightSegmentInfos_ = nullptr;};
        inline const vector<FlightJourneyInfos::FlightSegmentInfos> & getFlightSegmentInfos() const { DARABONBA_PTR_GET_CONST(flightSegmentInfos_, vector<FlightJourneyInfos::FlightSegmentInfos>) };
        inline vector<FlightJourneyInfos::FlightSegmentInfos> getFlightSegmentInfos() { DARABONBA_PTR_GET(flightSegmentInfos_, vector<FlightJourneyInfos::FlightSegmentInfos>) };
        inline FlightJourneyInfos& setFlightSegmentInfos(const vector<FlightJourneyInfos::FlightSegmentInfos> & flightSegmentInfos) { DARABONBA_PTR_SET_VALUE(flightSegmentInfos_, flightSegmentInfos) };
        inline FlightJourneyInfos& setFlightSegmentInfos(vector<FlightJourneyInfos::FlightSegmentInfos> && flightSegmentInfos) { DARABONBA_PTR_SET_RVALUE(flightSegmentInfos_, flightSegmentInfos) };


        // journeyIndex Field Functions 
        bool hasJourneyIndex() const { return this->journeyIndex_ != nullptr;};
        void deleteJourneyIndex() { this->journeyIndex_ = nullptr;};
        inline int32_t getJourneyIndex() const { DARABONBA_PTR_GET_DEFAULT(journeyIndex_, 0) };
        inline FlightJourneyInfos& setJourneyIndex(int32_t journeyIndex) { DARABONBA_PTR_SET_VALUE(journeyIndex_, journeyIndex) };


        // transferTime Field Functions 
        bool hasTransferTime() const { return this->transferTime_ != nullptr;};
        void deleteTransferTime() { this->transferTime_ = nullptr;};
        inline int32_t getTransferTime() const { DARABONBA_PTR_GET_DEFAULT(transferTime_, 0) };
        inline FlightJourneyInfos& setTransferTime(int32_t transferTime) { DARABONBA_PTR_SET_VALUE(transferTime_, transferTime) };


      protected:
        shared_ptr<string> arrCityCode_ {};
        shared_ptr<string> arrCityName_ {};
        shared_ptr<string> arrTime_ {};
        shared_ptr<string> depCityCode_ {};
        shared_ptr<string> depCityName_ {};
        shared_ptr<string> depTime_ {};
        shared_ptr<int32_t> duration_ {};
        shared_ptr<map<string, string>> extensions_ {};
        shared_ptr<vector<FlightJourneyInfos::FlightSegmentInfos>> flightSegmentInfos_ {};
        shared_ptr<int32_t> journeyIndex_ {};
        shared_ptr<int32_t> transferTime_ {};
      };

      virtual bool empty() const override { return this->flightJourneyInfos_ == nullptr
        && this->groupItem_ == nullptr && this->shutterDocs_ == nullptr && this->tripType_ == nullptr; };
      // flightJourneyInfos Field Functions 
      bool hasFlightJourneyInfos() const { return this->flightJourneyInfos_ != nullptr;};
      void deleteFlightJourneyInfos() { this->flightJourneyInfos_ = nullptr;};
      inline const vector<Module::FlightJourneyInfos> & getFlightJourneyInfos() const { DARABONBA_PTR_GET_CONST(flightJourneyInfos_, vector<Module::FlightJourneyInfos>) };
      inline vector<Module::FlightJourneyInfos> getFlightJourneyInfos() { DARABONBA_PTR_GET(flightJourneyInfos_, vector<Module::FlightJourneyInfos>) };
      inline Module& setFlightJourneyInfos(const vector<Module::FlightJourneyInfos> & flightJourneyInfos) { DARABONBA_PTR_SET_VALUE(flightJourneyInfos_, flightJourneyInfos) };
      inline Module& setFlightJourneyInfos(vector<Module::FlightJourneyInfos> && flightJourneyInfos) { DARABONBA_PTR_SET_RVALUE(flightJourneyInfos_, flightJourneyInfos) };


      // groupItem Field Functions 
      bool hasGroupItem() const { return this->groupItem_ != nullptr;};
      void deleteGroupItem() { this->groupItem_ = nullptr;};
      inline const Module::GroupItem & getGroupItem() const { DARABONBA_PTR_GET_CONST(groupItem_, Module::GroupItem) };
      inline Module::GroupItem getGroupItem() { DARABONBA_PTR_GET(groupItem_, Module::GroupItem) };
      inline Module& setGroupItem(const Module::GroupItem & groupItem) { DARABONBA_PTR_SET_VALUE(groupItem_, groupItem) };
      inline Module& setGroupItem(Module::GroupItem && groupItem) { DARABONBA_PTR_SET_RVALUE(groupItem_, groupItem) };


      // shutterDocs Field Functions 
      bool hasShutterDocs() const { return this->shutterDocs_ != nullptr;};
      void deleteShutterDocs() { this->shutterDocs_ = nullptr;};
      inline const vector<Module::ShutterDocs> & getShutterDocs() const { DARABONBA_PTR_GET_CONST(shutterDocs_, vector<Module::ShutterDocs>) };
      inline vector<Module::ShutterDocs> getShutterDocs() { DARABONBA_PTR_GET(shutterDocs_, vector<Module::ShutterDocs>) };
      inline Module& setShutterDocs(const vector<Module::ShutterDocs> & shutterDocs) { DARABONBA_PTR_SET_VALUE(shutterDocs_, shutterDocs) };
      inline Module& setShutterDocs(vector<Module::ShutterDocs> && shutterDocs) { DARABONBA_PTR_SET_RVALUE(shutterDocs_, shutterDocs) };


      // tripType Field Functions 
      bool hasTripType() const { return this->tripType_ != nullptr;};
      void deleteTripType() { this->tripType_ = nullptr;};
      inline int32_t getTripType() const { DARABONBA_PTR_GET_DEFAULT(tripType_, 0) };
      inline Module& setTripType(int32_t tripType) { DARABONBA_PTR_SET_VALUE(tripType_, tripType) };


    protected:
      shared_ptr<vector<Module::FlightJourneyInfos>> flightJourneyInfos_ {};
      shared_ptr<Module::GroupItem> groupItem_ {};
      shared_ptr<vector<Module::ShutterDocs>> shutterDocs_ {};
      shared_ptr<int32_t> tripType_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline IntlFlightOtaItemDetailResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline IntlFlightOtaItemDetailResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const IntlFlightOtaItemDetailResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, IntlFlightOtaItemDetailResponseBody::Module) };
    inline IntlFlightOtaItemDetailResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, IntlFlightOtaItemDetailResponseBody::Module) };
    inline IntlFlightOtaItemDetailResponseBody& setModule(const IntlFlightOtaItemDetailResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline IntlFlightOtaItemDetailResponseBody& setModule(IntlFlightOtaItemDetailResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline IntlFlightOtaItemDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline IntlFlightOtaItemDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline IntlFlightOtaItemDetailResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<IntlFlightOtaItemDetailResponseBody::Module> module_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
