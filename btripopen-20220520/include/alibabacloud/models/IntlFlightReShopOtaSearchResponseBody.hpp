// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTRESHOPOTASEARCHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTRESHOPOTASEARCHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
#include <alibabacloud/models/ModuleReShopItemListSubItemsRefundChangeRuleOfferPenaltyInfoMapValue.hpp>
#include <alibabacloud/models/ModuleReShopItemListSubItemsBaggageRuleOfferBaggageInfoMapValue.hpp>
#include <alibabacloud/models/ModuleReShopItemListSubItemsShoppingItemMapValue.hpp>
#include <alibabacloud/models/ModuleReShopItemListShoppingItemMapValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightReShopOtaSearchResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightReShopOtaSearchResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightReShopOtaSearchResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    IntlFlightReShopOtaSearchResponseBody() = default ;
    IntlFlightReShopOtaSearchResponseBody(const IntlFlightReShopOtaSearchResponseBody &) = default ;
    IntlFlightReShopOtaSearchResponseBody(IntlFlightReShopOtaSearchResponseBody &&) = default ;
    IntlFlightReShopOtaSearchResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightReShopOtaSearchResponseBody() = default ;
    IntlFlightReShopOtaSearchResponseBody& operator=(const IntlFlightReShopOtaSearchResponseBody &) = default ;
    IntlFlightReShopOtaSearchResponseBody& operator=(IntlFlightReShopOtaSearchResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(flight_journey_infos, flightJourneyInfos_);
        DARABONBA_PTR_TO_JSON(need_continue, needContinue_);
        DARABONBA_PTR_TO_JSON(next_req_wait_time, nextReqWaitTime_);
        DARABONBA_PTR_TO_JSON(re_shop_item_list, reShopItemList_);
        DARABONBA_PTR_TO_JSON(token, token_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(flight_journey_infos, flightJourneyInfos_);
        DARABONBA_PTR_FROM_JSON(need_continue, needContinue_);
        DARABONBA_PTR_FROM_JSON(next_req_wait_time, nextReqWaitTime_);
        DARABONBA_PTR_FROM_JSON(re_shop_item_list, reShopItemList_);
        DARABONBA_PTR_FROM_JSON(token, token_);
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
      class ReShopItemList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ReShopItemList& obj) { 
          DARABONBA_PTR_TO_JSON(item_id, itemId_);
          DARABONBA_PTR_TO_JSON(item_type, itemType_);
          DARABONBA_PTR_TO_JSON(shopping_item_map, shoppingItemMap_);
          DARABONBA_PTR_TO_JSON(sub_items, subItems_);
        };
        friend void from_json(const Darabonba::Json& j, ReShopItemList& obj) { 
          DARABONBA_PTR_FROM_JSON(item_id, itemId_);
          DARABONBA_PTR_FROM_JSON(item_type, itemType_);
          DARABONBA_PTR_FROM_JSON(shopping_item_map, shoppingItemMap_);
          DARABONBA_PTR_FROM_JSON(sub_items, subItems_);
        };
        ReShopItemList() = default ;
        ReShopItemList(const ReShopItemList &) = default ;
        ReShopItemList(ReShopItemList &&) = default ;
        ReShopItemList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ReShopItemList() = default ;
        ReShopItemList& operator=(const ReShopItemList &) = default ;
        ReShopItemList& operator=(ReShopItemList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class SubItems : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SubItems& obj) { 
            DARABONBA_PTR_TO_JSON(baggage_rule, baggageRule_);
            DARABONBA_PTR_TO_JSON(discount_num, discountNum_);
            DARABONBA_PTR_TO_JSON(refund_change_rule, refundChangeRule_);
            DARABONBA_PTR_TO_JSON(segment_keys, segmentKeys_);
            DARABONBA_PTR_TO_JSON(segment_position_list, segmentPositionList_);
            DARABONBA_PTR_TO_JSON(shopping_item_map, shoppingItemMap_);
            DARABONBA_PTR_TO_JSON(uniq_key, uniqKey_);
          };
          friend void from_json(const Darabonba::Json& j, SubItems& obj) { 
            DARABONBA_PTR_FROM_JSON(baggage_rule, baggageRule_);
            DARABONBA_PTR_FROM_JSON(discount_num, discountNum_);
            DARABONBA_PTR_FROM_JSON(refund_change_rule, refundChangeRule_);
            DARABONBA_PTR_FROM_JSON(segment_keys, segmentKeys_);
            DARABONBA_PTR_FROM_JSON(segment_position_list, segmentPositionList_);
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
          class SegmentPositionList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const SegmentPositionList& obj) { 
              DARABONBA_PTR_TO_JSON(journey_index, journeyIndex_);
              DARABONBA_PTR_TO_JSON(segment_index, segmentIndex_);
            };
            friend void from_json(const Darabonba::Json& j, SegmentPositionList& obj) { 
              DARABONBA_PTR_FROM_JSON(journey_index, journeyIndex_);
              DARABONBA_PTR_FROM_JSON(segment_index, segmentIndex_);
            };
            SegmentPositionList() = default ;
            SegmentPositionList(const SegmentPositionList &) = default ;
            SegmentPositionList(SegmentPositionList &&) = default ;
            SegmentPositionList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~SegmentPositionList() = default ;
            SegmentPositionList& operator=(const SegmentPositionList &) = default ;
            SegmentPositionList& operator=(SegmentPositionList &&) = default ;
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
            inline SegmentPositionList& setJourneyIndex(int32_t journeyIndex) { DARABONBA_PTR_SET_VALUE(journeyIndex_, journeyIndex) };


            // segmentIndex Field Functions 
            bool hasSegmentIndex() const { return this->segmentIndex_ != nullptr;};
            void deleteSegmentIndex() { this->segmentIndex_ = nullptr;};
            inline int32_t getSegmentIndex() const { DARABONBA_PTR_GET_DEFAULT(segmentIndex_, 0) };
            inline SegmentPositionList& setSegmentIndex(int32_t segmentIndex) { DARABONBA_PTR_SET_VALUE(segmentIndex_, segmentIndex) };


          protected:
            shared_ptr<int32_t> journeyIndex_ {};
            shared_ptr<int32_t> segmentIndex_ {};
          };

          class RefundChangeRule : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const RefundChangeRule& obj) { 
              DARABONBA_PTR_TO_JSON(cancel_fee_ind, cancelFeeInd_);
              DARABONBA_PTR_TO_JSON(change_fee_ind, changeFeeInd_);
              DARABONBA_PTR_TO_JSON(change_rule_desc, changeRuleDesc_);
              DARABONBA_PTR_TO_JSON(change_rule_show_color, changeRuleShowColor_);
              DARABONBA_PTR_TO_JSON(offer_penalty_info_map, offerPenaltyInfoMap_);
              DARABONBA_PTR_TO_JSON(refund_change_digest, refundChangeDigest_);
              DARABONBA_PTR_TO_JSON(refund_change_rule_desc, refundChangeRuleDesc_);
              DARABONBA_PTR_TO_JSON(refund_rule_desc, refundRuleDesc_);
              DARABONBA_PTR_TO_JSON(refund_rule_show_color, refundRuleShowColor_);
              DARABONBA_PTR_TO_JSON(structured_refund, structuredRefund_);
            };
            friend void from_json(const Darabonba::Json& j, RefundChangeRule& obj) { 
              DARABONBA_PTR_FROM_JSON(cancel_fee_ind, cancelFeeInd_);
              DARABONBA_PTR_FROM_JSON(change_fee_ind, changeFeeInd_);
              DARABONBA_PTR_FROM_JSON(change_rule_desc, changeRuleDesc_);
              DARABONBA_PTR_FROM_JSON(change_rule_show_color, changeRuleShowColor_);
              DARABONBA_PTR_FROM_JSON(offer_penalty_info_map, offerPenaltyInfoMap_);
              DARABONBA_PTR_FROM_JSON(refund_change_digest, refundChangeDigest_);
              DARABONBA_PTR_FROM_JSON(refund_change_rule_desc, refundChangeRuleDesc_);
              DARABONBA_PTR_FROM_JSON(refund_rule_desc, refundRuleDesc_);
              DARABONBA_PTR_FROM_JSON(refund_rule_show_color, refundRuleShowColor_);
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
        && this->changeFeeInd_ == nullptr && this->changeRuleDesc_ == nullptr && this->changeRuleShowColor_ == nullptr && this->offerPenaltyInfoMap_ == nullptr && this->refundChangeDigest_ == nullptr
        && this->refundChangeRuleDesc_ == nullptr && this->refundRuleDesc_ == nullptr && this->refundRuleShowColor_ == nullptr && this->structuredRefund_ == nullptr; };
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


            // changeRuleDesc Field Functions 
            bool hasChangeRuleDesc() const { return this->changeRuleDesc_ != nullptr;};
            void deleteChangeRuleDesc() { this->changeRuleDesc_ = nullptr;};
            inline string getChangeRuleDesc() const { DARABONBA_PTR_GET_DEFAULT(changeRuleDesc_, "") };
            inline RefundChangeRule& setChangeRuleDesc(string changeRuleDesc) { DARABONBA_PTR_SET_VALUE(changeRuleDesc_, changeRuleDesc) };


            // changeRuleShowColor Field Functions 
            bool hasChangeRuleShowColor() const { return this->changeRuleShowColor_ != nullptr;};
            void deleteChangeRuleShowColor() { this->changeRuleShowColor_ = nullptr;};
            inline string getChangeRuleShowColor() const { DARABONBA_PTR_GET_DEFAULT(changeRuleShowColor_, "") };
            inline RefundChangeRule& setChangeRuleShowColor(string changeRuleShowColor) { DARABONBA_PTR_SET_VALUE(changeRuleShowColor_, changeRuleShowColor) };


            // offerPenaltyInfoMap Field Functions 
            bool hasOfferPenaltyInfoMap() const { return this->offerPenaltyInfoMap_ != nullptr;};
            void deleteOfferPenaltyInfoMap() { this->offerPenaltyInfoMap_ = nullptr;};
            inline const map<string, vector<ModuleReShopItemListSubItemsRefundChangeRuleOfferPenaltyInfoMapValue>> & getOfferPenaltyInfoMap() const { DARABONBA_PTR_GET_CONST(offerPenaltyInfoMap_, map<string, vector<ModuleReShopItemListSubItemsRefundChangeRuleOfferPenaltyInfoMapValue>>) };
            inline map<string, vector<ModuleReShopItemListSubItemsRefundChangeRuleOfferPenaltyInfoMapValue>> getOfferPenaltyInfoMap() { DARABONBA_PTR_GET(offerPenaltyInfoMap_, map<string, vector<ModuleReShopItemListSubItemsRefundChangeRuleOfferPenaltyInfoMapValue>>) };
            inline RefundChangeRule& setOfferPenaltyInfoMap(const map<string, vector<ModuleReShopItemListSubItemsRefundChangeRuleOfferPenaltyInfoMapValue>> & offerPenaltyInfoMap) { DARABONBA_PTR_SET_VALUE(offerPenaltyInfoMap_, offerPenaltyInfoMap) };
            inline RefundChangeRule& setOfferPenaltyInfoMap(map<string, vector<ModuleReShopItemListSubItemsRefundChangeRuleOfferPenaltyInfoMapValue>> && offerPenaltyInfoMap) { DARABONBA_PTR_SET_RVALUE(offerPenaltyInfoMap_, offerPenaltyInfoMap) };


            // refundChangeDigest Field Functions 
            bool hasRefundChangeDigest() const { return this->refundChangeDigest_ != nullptr;};
            void deleteRefundChangeDigest() { this->refundChangeDigest_ = nullptr;};
            inline string getRefundChangeDigest() const { DARABONBA_PTR_GET_DEFAULT(refundChangeDigest_, "") };
            inline RefundChangeRule& setRefundChangeDigest(string refundChangeDigest) { DARABONBA_PTR_SET_VALUE(refundChangeDigest_, refundChangeDigest) };


            // refundChangeRuleDesc Field Functions 
            bool hasRefundChangeRuleDesc() const { return this->refundChangeRuleDesc_ != nullptr;};
            void deleteRefundChangeRuleDesc() { this->refundChangeRuleDesc_ = nullptr;};
            inline string getRefundChangeRuleDesc() const { DARABONBA_PTR_GET_DEFAULT(refundChangeRuleDesc_, "") };
            inline RefundChangeRule& setRefundChangeRuleDesc(string refundChangeRuleDesc) { DARABONBA_PTR_SET_VALUE(refundChangeRuleDesc_, refundChangeRuleDesc) };


            // refundRuleDesc Field Functions 
            bool hasRefundRuleDesc() const { return this->refundRuleDesc_ != nullptr;};
            void deleteRefundRuleDesc() { this->refundRuleDesc_ = nullptr;};
            inline string getRefundRuleDesc() const { DARABONBA_PTR_GET_DEFAULT(refundRuleDesc_, "") };
            inline RefundChangeRule& setRefundRuleDesc(string refundRuleDesc) { DARABONBA_PTR_SET_VALUE(refundRuleDesc_, refundRuleDesc) };


            // refundRuleShowColor Field Functions 
            bool hasRefundRuleShowColor() const { return this->refundRuleShowColor_ != nullptr;};
            void deleteRefundRuleShowColor() { this->refundRuleShowColor_ = nullptr;};
            inline string getRefundRuleShowColor() const { DARABONBA_PTR_GET_DEFAULT(refundRuleShowColor_, "") };
            inline RefundChangeRule& setRefundRuleShowColor(string refundRuleShowColor) { DARABONBA_PTR_SET_VALUE(refundRuleShowColor_, refundRuleShowColor) };


            // structuredRefund Field Functions 
            bool hasStructuredRefund() const { return this->structuredRefund_ != nullptr;};
            void deleteStructuredRefund() { this->structuredRefund_ = nullptr;};
            inline bool getStructuredRefund() const { DARABONBA_PTR_GET_DEFAULT(structuredRefund_, false) };
            inline RefundChangeRule& setStructuredRefund(bool structuredRefund) { DARABONBA_PTR_SET_VALUE(structuredRefund_, structuredRefund) };


          protected:
            shared_ptr<bool> cancelFeeInd_ {};
            shared_ptr<bool> changeFeeInd_ {};
            shared_ptr<string> changeRuleDesc_ {};
            shared_ptr<string> changeRuleShowColor_ {};
            shared_ptr<map<string, vector<ModuleReShopItemListSubItemsRefundChangeRuleOfferPenaltyInfoMapValue>>> offerPenaltyInfoMap_ {};
            shared_ptr<string> refundChangeDigest_ {};
            shared_ptr<string> refundChangeRuleDesc_ {};
            shared_ptr<string> refundRuleDesc_ {};
            shared_ptr<string> refundRuleShowColor_ {};
            shared_ptr<bool> structuredRefund_ {};
          };

          class BaggageRule : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const BaggageRule& obj) { 
              DARABONBA_PTR_TO_JSON(baggage_desc_show_color, baggageDescShowColor_);
              DARABONBA_PTR_TO_JSON(baggage_digest, baggageDigest_);
              DARABONBA_PTR_TO_JSON(baggage_rule_desc, baggageRuleDesc_);
              DARABONBA_PTR_TO_JSON(offer_baggage_info_map, offerBaggageInfoMap_);
              DARABONBA_PTR_TO_JSON(structured_baggage, structuredBaggage_);
            };
            friend void from_json(const Darabonba::Json& j, BaggageRule& obj) { 
              DARABONBA_PTR_FROM_JSON(baggage_desc_show_color, baggageDescShowColor_);
              DARABONBA_PTR_FROM_JSON(baggage_digest, baggageDigest_);
              DARABONBA_PTR_FROM_JSON(baggage_rule_desc, baggageRuleDesc_);
              DARABONBA_PTR_FROM_JSON(offer_baggage_info_map, offerBaggageInfoMap_);
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
            virtual bool empty() const override { return this->baggageDescShowColor_ == nullptr
        && this->baggageDigest_ == nullptr && this->baggageRuleDesc_ == nullptr && this->offerBaggageInfoMap_ == nullptr && this->structuredBaggage_ == nullptr; };
            // baggageDescShowColor Field Functions 
            bool hasBaggageDescShowColor() const { return this->baggageDescShowColor_ != nullptr;};
            void deleteBaggageDescShowColor() { this->baggageDescShowColor_ = nullptr;};
            inline string getBaggageDescShowColor() const { DARABONBA_PTR_GET_DEFAULT(baggageDescShowColor_, "") };
            inline BaggageRule& setBaggageDescShowColor(string baggageDescShowColor) { DARABONBA_PTR_SET_VALUE(baggageDescShowColor_, baggageDescShowColor) };


            // baggageDigest Field Functions 
            bool hasBaggageDigest() const { return this->baggageDigest_ != nullptr;};
            void deleteBaggageDigest() { this->baggageDigest_ = nullptr;};
            inline string getBaggageDigest() const { DARABONBA_PTR_GET_DEFAULT(baggageDigest_, "") };
            inline BaggageRule& setBaggageDigest(string baggageDigest) { DARABONBA_PTR_SET_VALUE(baggageDigest_, baggageDigest) };


            // baggageRuleDesc Field Functions 
            bool hasBaggageRuleDesc() const { return this->baggageRuleDesc_ != nullptr;};
            void deleteBaggageRuleDesc() { this->baggageRuleDesc_ = nullptr;};
            inline string getBaggageRuleDesc() const { DARABONBA_PTR_GET_DEFAULT(baggageRuleDesc_, "") };
            inline BaggageRule& setBaggageRuleDesc(string baggageRuleDesc) { DARABONBA_PTR_SET_VALUE(baggageRuleDesc_, baggageRuleDesc) };


            // offerBaggageInfoMap Field Functions 
            bool hasOfferBaggageInfoMap() const { return this->offerBaggageInfoMap_ != nullptr;};
            void deleteOfferBaggageInfoMap() { this->offerBaggageInfoMap_ = nullptr;};
            inline const map<string, vector<ModuleReShopItemListSubItemsBaggageRuleOfferBaggageInfoMapValue>> & getOfferBaggageInfoMap() const { DARABONBA_PTR_GET_CONST(offerBaggageInfoMap_, map<string, vector<ModuleReShopItemListSubItemsBaggageRuleOfferBaggageInfoMapValue>>) };
            inline map<string, vector<ModuleReShopItemListSubItemsBaggageRuleOfferBaggageInfoMapValue>> getOfferBaggageInfoMap() { DARABONBA_PTR_GET(offerBaggageInfoMap_, map<string, vector<ModuleReShopItemListSubItemsBaggageRuleOfferBaggageInfoMapValue>>) };
            inline BaggageRule& setOfferBaggageInfoMap(const map<string, vector<ModuleReShopItemListSubItemsBaggageRuleOfferBaggageInfoMapValue>> & offerBaggageInfoMap) { DARABONBA_PTR_SET_VALUE(offerBaggageInfoMap_, offerBaggageInfoMap) };
            inline BaggageRule& setOfferBaggageInfoMap(map<string, vector<ModuleReShopItemListSubItemsBaggageRuleOfferBaggageInfoMapValue>> && offerBaggageInfoMap) { DARABONBA_PTR_SET_RVALUE(offerBaggageInfoMap_, offerBaggageInfoMap) };


            // structuredBaggage Field Functions 
            bool hasStructuredBaggage() const { return this->structuredBaggage_ != nullptr;};
            void deleteStructuredBaggage() { this->structuredBaggage_ = nullptr;};
            inline bool getStructuredBaggage() const { DARABONBA_PTR_GET_DEFAULT(structuredBaggage_, false) };
            inline BaggageRule& setStructuredBaggage(bool structuredBaggage) { DARABONBA_PTR_SET_VALUE(structuredBaggage_, structuredBaggage) };


          protected:
            shared_ptr<string> baggageDescShowColor_ {};
            shared_ptr<string> baggageDigest_ {};
            shared_ptr<string> baggageRuleDesc_ {};
            shared_ptr<map<string, vector<ModuleReShopItemListSubItemsBaggageRuleOfferBaggageInfoMapValue>>> offerBaggageInfoMap_ {};
            shared_ptr<bool> structuredBaggage_ {};
          };

          virtual bool empty() const override { return this->baggageRule_ == nullptr
        && this->discountNum_ == nullptr && this->refundChangeRule_ == nullptr && this->segmentKeys_ == nullptr && this->segmentPositionList_ == nullptr && this->shoppingItemMap_ == nullptr
        && this->uniqKey_ == nullptr; };
          // baggageRule Field Functions 
          bool hasBaggageRule() const { return this->baggageRule_ != nullptr;};
          void deleteBaggageRule() { this->baggageRule_ = nullptr;};
          inline const SubItems::BaggageRule & getBaggageRule() const { DARABONBA_PTR_GET_CONST(baggageRule_, SubItems::BaggageRule) };
          inline SubItems::BaggageRule getBaggageRule() { DARABONBA_PTR_GET(baggageRule_, SubItems::BaggageRule) };
          inline SubItems& setBaggageRule(const SubItems::BaggageRule & baggageRule) { DARABONBA_PTR_SET_VALUE(baggageRule_, baggageRule) };
          inline SubItems& setBaggageRule(SubItems::BaggageRule && baggageRule) { DARABONBA_PTR_SET_RVALUE(baggageRule_, baggageRule) };


          // discountNum Field Functions 
          bool hasDiscountNum() const { return this->discountNum_ != nullptr;};
          void deleteDiscountNum() { this->discountNum_ = nullptr;};
          inline double getDiscountNum() const { DARABONBA_PTR_GET_DEFAULT(discountNum_, 0.0) };
          inline SubItems& setDiscountNum(double discountNum) { DARABONBA_PTR_SET_VALUE(discountNum_, discountNum) };


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


          // segmentPositionList Field Functions 
          bool hasSegmentPositionList() const { return this->segmentPositionList_ != nullptr;};
          void deleteSegmentPositionList() { this->segmentPositionList_ = nullptr;};
          inline const vector<SubItems::SegmentPositionList> & getSegmentPositionList() const { DARABONBA_PTR_GET_CONST(segmentPositionList_, vector<SubItems::SegmentPositionList>) };
          inline vector<SubItems::SegmentPositionList> getSegmentPositionList() { DARABONBA_PTR_GET(segmentPositionList_, vector<SubItems::SegmentPositionList>) };
          inline SubItems& setSegmentPositionList(const vector<SubItems::SegmentPositionList> & segmentPositionList) { DARABONBA_PTR_SET_VALUE(segmentPositionList_, segmentPositionList) };
          inline SubItems& setSegmentPositionList(vector<SubItems::SegmentPositionList> && segmentPositionList) { DARABONBA_PTR_SET_RVALUE(segmentPositionList_, segmentPositionList) };


          // shoppingItemMap Field Functions 
          bool hasShoppingItemMap() const { return this->shoppingItemMap_ != nullptr;};
          void deleteShoppingItemMap() { this->shoppingItemMap_ = nullptr;};
          inline const map<string, ModuleReShopItemListSubItemsShoppingItemMapValue> & getShoppingItemMap() const { DARABONBA_PTR_GET_CONST(shoppingItemMap_, map<string, ModuleReShopItemListSubItemsShoppingItemMapValue>) };
          inline map<string, ModuleReShopItemListSubItemsShoppingItemMapValue> getShoppingItemMap() { DARABONBA_PTR_GET(shoppingItemMap_, map<string, ModuleReShopItemListSubItemsShoppingItemMapValue>) };
          inline SubItems& setShoppingItemMap(const map<string, ModuleReShopItemListSubItemsShoppingItemMapValue> & shoppingItemMap) { DARABONBA_PTR_SET_VALUE(shoppingItemMap_, shoppingItemMap) };
          inline SubItems& setShoppingItemMap(map<string, ModuleReShopItemListSubItemsShoppingItemMapValue> && shoppingItemMap) { DARABONBA_PTR_SET_RVALUE(shoppingItemMap_, shoppingItemMap) };


          // uniqKey Field Functions 
          bool hasUniqKey() const { return this->uniqKey_ != nullptr;};
          void deleteUniqKey() { this->uniqKey_ = nullptr;};
          inline string getUniqKey() const { DARABONBA_PTR_GET_DEFAULT(uniqKey_, "") };
          inline SubItems& setUniqKey(string uniqKey) { DARABONBA_PTR_SET_VALUE(uniqKey_, uniqKey) };


        protected:
          shared_ptr<SubItems::BaggageRule> baggageRule_ {};
          shared_ptr<double> discountNum_ {};
          shared_ptr<SubItems::RefundChangeRule> refundChangeRule_ {};
          shared_ptr<vector<string>> segmentKeys_ {};
          shared_ptr<vector<SubItems::SegmentPositionList>> segmentPositionList_ {};
          shared_ptr<map<string, ModuleReShopItemListSubItemsShoppingItemMapValue>> shoppingItemMap_ {};
          shared_ptr<string> uniqKey_ {};
        };

        virtual bool empty() const override { return this->itemId_ == nullptr
        && this->itemType_ == nullptr && this->shoppingItemMap_ == nullptr && this->subItems_ == nullptr; };
        // itemId Field Functions 
        bool hasItemId() const { return this->itemId_ != nullptr;};
        void deleteItemId() { this->itemId_ = nullptr;};
        inline string getItemId() const { DARABONBA_PTR_GET_DEFAULT(itemId_, "") };
        inline ReShopItemList& setItemId(string itemId) { DARABONBA_PTR_SET_VALUE(itemId_, itemId) };


        // itemType Field Functions 
        bool hasItemType() const { return this->itemType_ != nullptr;};
        void deleteItemType() { this->itemType_ = nullptr;};
        inline string getItemType() const { DARABONBA_PTR_GET_DEFAULT(itemType_, "") };
        inline ReShopItemList& setItemType(string itemType) { DARABONBA_PTR_SET_VALUE(itemType_, itemType) };


        // shoppingItemMap Field Functions 
        bool hasShoppingItemMap() const { return this->shoppingItemMap_ != nullptr;};
        void deleteShoppingItemMap() { this->shoppingItemMap_ = nullptr;};
        inline const map<string, ModuleReShopItemListShoppingItemMapValue> & getShoppingItemMap() const { DARABONBA_PTR_GET_CONST(shoppingItemMap_, map<string, ModuleReShopItemListShoppingItemMapValue>) };
        inline map<string, ModuleReShopItemListShoppingItemMapValue> getShoppingItemMap() { DARABONBA_PTR_GET(shoppingItemMap_, map<string, ModuleReShopItemListShoppingItemMapValue>) };
        inline ReShopItemList& setShoppingItemMap(const map<string, ModuleReShopItemListShoppingItemMapValue> & shoppingItemMap) { DARABONBA_PTR_SET_VALUE(shoppingItemMap_, shoppingItemMap) };
        inline ReShopItemList& setShoppingItemMap(map<string, ModuleReShopItemListShoppingItemMapValue> && shoppingItemMap) { DARABONBA_PTR_SET_RVALUE(shoppingItemMap_, shoppingItemMap) };


        // subItems Field Functions 
        bool hasSubItems() const { return this->subItems_ != nullptr;};
        void deleteSubItems() { this->subItems_ = nullptr;};
        inline const vector<ReShopItemList::SubItems> & getSubItems() const { DARABONBA_PTR_GET_CONST(subItems_, vector<ReShopItemList::SubItems>) };
        inline vector<ReShopItemList::SubItems> getSubItems() { DARABONBA_PTR_GET(subItems_, vector<ReShopItemList::SubItems>) };
        inline ReShopItemList& setSubItems(const vector<ReShopItemList::SubItems> & subItems) { DARABONBA_PTR_SET_VALUE(subItems_, subItems) };
        inline ReShopItemList& setSubItems(vector<ReShopItemList::SubItems> && subItems) { DARABONBA_PTR_SET_RVALUE(subItems_, subItems) };


      protected:
        shared_ptr<string> itemId_ {};
        shared_ptr<string> itemType_ {};
        shared_ptr<map<string, ModuleReShopItemListShoppingItemMapValue>> shoppingItemMap_ {};
        shared_ptr<vector<ReShopItemList::SubItems>> subItems_ {};
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
            DARABONBA_PTR_TO_JSON(arr_time_u_t_c, arrTimeUTC_);
            DARABONBA_PTR_TO_JSON(dep_airport_info, depAirportInfo_);
            DARABONBA_PTR_TO_JSON(dep_city_code, depCityCode_);
            DARABONBA_PTR_TO_JSON(dep_city_name, depCityName_);
            DARABONBA_PTR_TO_JSON(dep_time, depTime_);
            DARABONBA_PTR_TO_JSON(dep_time_u_t_c, depTimeUTC_);
            DARABONBA_PTR_TO_JSON(duration, duration_);
            DARABONBA_PTR_TO_JSON(flight_no, flightNo_);
            DARABONBA_PTR_TO_JSON(flight_share_info, flightShareInfo_);
            DARABONBA_PTR_TO_JSON(flight_size, flightSize_);
            DARABONBA_PTR_TO_JSON(flight_stop_info_list, flightStopInfoList_);
            DARABONBA_PTR_TO_JSON(flight_type, flightType_);
            DARABONBA_PTR_TO_JSON(journey_index, journeyIndex_);
            DARABONBA_PTR_TO_JSON(luggage_direct_info, luggageDirectInfo_);
            DARABONBA_PTR_TO_JSON(manufacturer, manufacturer_);
            DARABONBA_PTR_TO_JSON(meal, meal_);
            DARABONBA_PTR_TO_JSON(meal_desc, mealDesc_);
            DARABONBA_PTR_TO_JSON(miles, miles_);
            DARABONBA_PTR_TO_JSON(on_time_rate, onTimeRate_);
            DARABONBA_PTR_TO_JSON(one_more, oneMore_);
            DARABONBA_PTR_TO_JSON(one_more_show, oneMoreShow_);
            DARABONBA_PTR_TO_JSON(other_info, otherInfo_);
            DARABONBA_PTR_TO_JSON(segment_index, segmentIndex_);
            DARABONBA_PTR_TO_JSON(segment_key, segmentKey_);
            DARABONBA_PTR_TO_JSON(segment_visa_remark, segmentVisaRemark_);
            DARABONBA_PTR_TO_JSON(share, share_);
            DARABONBA_PTR_TO_JSON(short_flight_size, shortFlightSize_);
            DARABONBA_PTR_TO_JSON(stop, stop_);
            DARABONBA_PTR_TO_JSON(ticketing_airline_info, ticketingAirlineInfo_);
            DARABONBA_PTR_TO_JSON(total_time, totalTime_);
          };
          friend void from_json(const Darabonba::Json& j, FlightSegmentInfos& obj) { 
            DARABONBA_PTR_FROM_JSON(airline_info, airlineInfo_);
            DARABONBA_PTR_FROM_JSON(arr_airport_info, arrAirportInfo_);
            DARABONBA_PTR_FROM_JSON(arr_city_code, arrCityCode_);
            DARABONBA_PTR_FROM_JSON(arr_city_name, arrCityName_);
            DARABONBA_PTR_FROM_JSON(arr_time, arrTime_);
            DARABONBA_PTR_FROM_JSON(arr_time_u_t_c, arrTimeUTC_);
            DARABONBA_PTR_FROM_JSON(dep_airport_info, depAirportInfo_);
            DARABONBA_PTR_FROM_JSON(dep_city_code, depCityCode_);
            DARABONBA_PTR_FROM_JSON(dep_city_name, depCityName_);
            DARABONBA_PTR_FROM_JSON(dep_time, depTime_);
            DARABONBA_PTR_FROM_JSON(dep_time_u_t_c, depTimeUTC_);
            DARABONBA_PTR_FROM_JSON(duration, duration_);
            DARABONBA_PTR_FROM_JSON(flight_no, flightNo_);
            DARABONBA_PTR_FROM_JSON(flight_share_info, flightShareInfo_);
            DARABONBA_PTR_FROM_JSON(flight_size, flightSize_);
            DARABONBA_PTR_FROM_JSON(flight_stop_info_list, flightStopInfoList_);
            DARABONBA_PTR_FROM_JSON(flight_type, flightType_);
            DARABONBA_PTR_FROM_JSON(journey_index, journeyIndex_);
            DARABONBA_PTR_FROM_JSON(luggage_direct_info, luggageDirectInfo_);
            DARABONBA_PTR_FROM_JSON(manufacturer, manufacturer_);
            DARABONBA_PTR_FROM_JSON(meal, meal_);
            DARABONBA_PTR_FROM_JSON(meal_desc, mealDesc_);
            DARABONBA_PTR_FROM_JSON(miles, miles_);
            DARABONBA_PTR_FROM_JSON(on_time_rate, onTimeRate_);
            DARABONBA_PTR_FROM_JSON(one_more, oneMore_);
            DARABONBA_PTR_FROM_JSON(one_more_show, oneMoreShow_);
            DARABONBA_PTR_FROM_JSON(other_info, otherInfo_);
            DARABONBA_PTR_FROM_JSON(segment_index, segmentIndex_);
            DARABONBA_PTR_FROM_JSON(segment_key, segmentKey_);
            DARABONBA_PTR_FROM_JSON(segment_visa_remark, segmentVisaRemark_);
            DARABONBA_PTR_FROM_JSON(share, share_);
            DARABONBA_PTR_FROM_JSON(short_flight_size, shortFlightSize_);
            DARABONBA_PTR_FROM_JSON(stop, stop_);
            DARABONBA_PTR_FROM_JSON(ticketing_airline_info, ticketingAirlineInfo_);
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
          class TicketingAirlineInfo : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const TicketingAirlineInfo& obj) { 
              DARABONBA_PTR_TO_JSON(airline_code, airlineCode_);
              DARABONBA_PTR_TO_JSON(airline_name, airlineName_);
              DARABONBA_PTR_TO_JSON(cheap_airline, cheapAirline_);
              DARABONBA_PTR_TO_JSON(icon_url, iconUrl_);
              DARABONBA_PTR_TO_JSON(short_name, shortName_);
            };
            friend void from_json(const Darabonba::Json& j, TicketingAirlineInfo& obj) { 
              DARABONBA_PTR_FROM_JSON(airline_code, airlineCode_);
              DARABONBA_PTR_FROM_JSON(airline_name, airlineName_);
              DARABONBA_PTR_FROM_JSON(cheap_airline, cheapAirline_);
              DARABONBA_PTR_FROM_JSON(icon_url, iconUrl_);
              DARABONBA_PTR_FROM_JSON(short_name, shortName_);
            };
            TicketingAirlineInfo() = default ;
            TicketingAirlineInfo(const TicketingAirlineInfo &) = default ;
            TicketingAirlineInfo(TicketingAirlineInfo &&) = default ;
            TicketingAirlineInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~TicketingAirlineInfo() = default ;
            TicketingAirlineInfo& operator=(const TicketingAirlineInfo &) = default ;
            TicketingAirlineInfo& operator=(TicketingAirlineInfo &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->airlineCode_ == nullptr
        && this->airlineName_ == nullptr && this->cheapAirline_ == nullptr && this->iconUrl_ == nullptr && this->shortName_ == nullptr; };
            // airlineCode Field Functions 
            bool hasAirlineCode() const { return this->airlineCode_ != nullptr;};
            void deleteAirlineCode() { this->airlineCode_ = nullptr;};
            inline string getAirlineCode() const { DARABONBA_PTR_GET_DEFAULT(airlineCode_, "") };
            inline TicketingAirlineInfo& setAirlineCode(string airlineCode) { DARABONBA_PTR_SET_VALUE(airlineCode_, airlineCode) };


            // airlineName Field Functions 
            bool hasAirlineName() const { return this->airlineName_ != nullptr;};
            void deleteAirlineName() { this->airlineName_ = nullptr;};
            inline string getAirlineName() const { DARABONBA_PTR_GET_DEFAULT(airlineName_, "") };
            inline TicketingAirlineInfo& setAirlineName(string airlineName) { DARABONBA_PTR_SET_VALUE(airlineName_, airlineName) };


            // cheapAirline Field Functions 
            bool hasCheapAirline() const { return this->cheapAirline_ != nullptr;};
            void deleteCheapAirline() { this->cheapAirline_ = nullptr;};
            inline bool getCheapAirline() const { DARABONBA_PTR_GET_DEFAULT(cheapAirline_, false) };
            inline TicketingAirlineInfo& setCheapAirline(bool cheapAirline) { DARABONBA_PTR_SET_VALUE(cheapAirline_, cheapAirline) };


            // iconUrl Field Functions 
            bool hasIconUrl() const { return this->iconUrl_ != nullptr;};
            void deleteIconUrl() { this->iconUrl_ = nullptr;};
            inline string getIconUrl() const { DARABONBA_PTR_GET_DEFAULT(iconUrl_, "") };
            inline TicketingAirlineInfo& setIconUrl(string iconUrl) { DARABONBA_PTR_SET_VALUE(iconUrl_, iconUrl) };


            // shortName Field Functions 
            bool hasShortName() const { return this->shortName_ != nullptr;};
            void deleteShortName() { this->shortName_ = nullptr;};
            inline string getShortName() const { DARABONBA_PTR_GET_DEFAULT(shortName_, "") };
            inline TicketingAirlineInfo& setShortName(string shortName) { DARABONBA_PTR_SET_VALUE(shortName_, shortName) };


          protected:
            shared_ptr<string> airlineCode_ {};
            shared_ptr<string> airlineName_ {};
            shared_ptr<bool> cheapAirline_ {};
            shared_ptr<string> iconUrl_ {};
            shared_ptr<string> shortName_ {};
          };

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

          class OtherInfo : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const OtherInfo& obj) { 
              DARABONBA_PTR_TO_JSON(aircraft_age, aircraftAge_);
              DARABONBA_PTR_TO_JSON(avg_delay_time, avgDelayTime_);
              DARABONBA_PTR_TO_JSON(flight_cancel_rate, flightCancelRate_);
              DARABONBA_PTR_TO_JSON(jet_bridge_rate, jetBridgeRate_);
              DARABONBA_PTR_TO_JSON(on_time_rate, onTimeRate_);
              DARABONBA_PTR_TO_JSON(wifi, wifi_);
            };
            friend void from_json(const Darabonba::Json& j, OtherInfo& obj) { 
              DARABONBA_PTR_FROM_JSON(aircraft_age, aircraftAge_);
              DARABONBA_PTR_FROM_JSON(avg_delay_time, avgDelayTime_);
              DARABONBA_PTR_FROM_JSON(flight_cancel_rate, flightCancelRate_);
              DARABONBA_PTR_FROM_JSON(jet_bridge_rate, jetBridgeRate_);
              DARABONBA_PTR_FROM_JSON(on_time_rate, onTimeRate_);
              DARABONBA_PTR_FROM_JSON(wifi, wifi_);
            };
            OtherInfo() = default ;
            OtherInfo(const OtherInfo &) = default ;
            OtherInfo(OtherInfo &&) = default ;
            OtherInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~OtherInfo() = default ;
            OtherInfo& operator=(const OtherInfo &) = default ;
            OtherInfo& operator=(OtherInfo &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->aircraftAge_ == nullptr
        && this->avgDelayTime_ == nullptr && this->flightCancelRate_ == nullptr && this->jetBridgeRate_ == nullptr && this->onTimeRate_ == nullptr && this->wifi_ == nullptr; };
            // aircraftAge Field Functions 
            bool hasAircraftAge() const { return this->aircraftAge_ != nullptr;};
            void deleteAircraftAge() { this->aircraftAge_ = nullptr;};
            inline string getAircraftAge() const { DARABONBA_PTR_GET_DEFAULT(aircraftAge_, "") };
            inline OtherInfo& setAircraftAge(string aircraftAge) { DARABONBA_PTR_SET_VALUE(aircraftAge_, aircraftAge) };


            // avgDelayTime Field Functions 
            bool hasAvgDelayTime() const { return this->avgDelayTime_ != nullptr;};
            void deleteAvgDelayTime() { this->avgDelayTime_ = nullptr;};
            inline string getAvgDelayTime() const { DARABONBA_PTR_GET_DEFAULT(avgDelayTime_, "") };
            inline OtherInfo& setAvgDelayTime(string avgDelayTime) { DARABONBA_PTR_SET_VALUE(avgDelayTime_, avgDelayTime) };


            // flightCancelRate Field Functions 
            bool hasFlightCancelRate() const { return this->flightCancelRate_ != nullptr;};
            void deleteFlightCancelRate() { this->flightCancelRate_ = nullptr;};
            inline string getFlightCancelRate() const { DARABONBA_PTR_GET_DEFAULT(flightCancelRate_, "") };
            inline OtherInfo& setFlightCancelRate(string flightCancelRate) { DARABONBA_PTR_SET_VALUE(flightCancelRate_, flightCancelRate) };


            // jetBridgeRate Field Functions 
            bool hasJetBridgeRate() const { return this->jetBridgeRate_ != nullptr;};
            void deleteJetBridgeRate() { this->jetBridgeRate_ = nullptr;};
            inline string getJetBridgeRate() const { DARABONBA_PTR_GET_DEFAULT(jetBridgeRate_, "") };
            inline OtherInfo& setJetBridgeRate(string jetBridgeRate) { DARABONBA_PTR_SET_VALUE(jetBridgeRate_, jetBridgeRate) };


            // onTimeRate Field Functions 
            bool hasOnTimeRate() const { return this->onTimeRate_ != nullptr;};
            void deleteOnTimeRate() { this->onTimeRate_ = nullptr;};
            inline string getOnTimeRate() const { DARABONBA_PTR_GET_DEFAULT(onTimeRate_, "") };
            inline OtherInfo& setOnTimeRate(string onTimeRate) { DARABONBA_PTR_SET_VALUE(onTimeRate_, onTimeRate) };


            // wifi Field Functions 
            bool hasWifi() const { return this->wifi_ != nullptr;};
            void deleteWifi() { this->wifi_ = nullptr;};
            inline bool getWifi() const { DARABONBA_PTR_GET_DEFAULT(wifi_, false) };
            inline OtherInfo& setWifi(bool wifi) { DARABONBA_PTR_SET_VALUE(wifi_, wifi) };


          protected:
            shared_ptr<string> aircraftAge_ {};
            shared_ptr<string> avgDelayTime_ {};
            shared_ptr<string> flightCancelRate_ {};
            shared_ptr<string> jetBridgeRate_ {};
            shared_ptr<string> onTimeRate_ {};
            shared_ptr<bool> wifi_ {};
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
              DARABONBA_PTR_TO_JSON(stop_airport_county_info, stopAirportCountyInfo_);
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
              DARABONBA_PTR_FROM_JSON(stop_airport_county_info, stopAirportCountyInfo_);
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
            class StopAirportCountyInfo : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const StopAirportCountyInfo& obj) { 
                DARABONBA_PTR_TO_JSON(adcode, adcode_);
                DARABONBA_PTR_TO_JSON(airport_city_code, airportCityCode_);
                DARABONBA_PTR_TO_JSON(airport_city_name, airportCityName_);
                DARABONBA_PTR_TO_JSON(airport_code, airportCode_);
                DARABONBA_PTR_TO_JSON(airport_name, airportName_);
                DARABONBA_PTR_TO_JSON(airport_parent_city_name, airportParentCityName_);
                DARABONBA_PTR_TO_JSON(county_city_adcode, countyCityAdcode_);
                DARABONBA_PTR_TO_JSON(county_city_name, countyCityName_);
                DARABONBA_PTR_TO_JSON(prefecture_city_adcode, prefectureCityAdcode_);
                DARABONBA_PTR_TO_JSON(prefecture_city_name, prefectureCityName_);
              };
              friend void from_json(const Darabonba::Json& j, StopAirportCountyInfo& obj) { 
                DARABONBA_PTR_FROM_JSON(adcode, adcode_);
                DARABONBA_PTR_FROM_JSON(airport_city_code, airportCityCode_);
                DARABONBA_PTR_FROM_JSON(airport_city_name, airportCityName_);
                DARABONBA_PTR_FROM_JSON(airport_code, airportCode_);
                DARABONBA_PTR_FROM_JSON(airport_name, airportName_);
                DARABONBA_PTR_FROM_JSON(airport_parent_city_name, airportParentCityName_);
                DARABONBA_PTR_FROM_JSON(county_city_adcode, countyCityAdcode_);
                DARABONBA_PTR_FROM_JSON(county_city_name, countyCityName_);
                DARABONBA_PTR_FROM_JSON(prefecture_city_adcode, prefectureCityAdcode_);
                DARABONBA_PTR_FROM_JSON(prefecture_city_name, prefectureCityName_);
              };
              StopAirportCountyInfo() = default ;
              StopAirportCountyInfo(const StopAirportCountyInfo &) = default ;
              StopAirportCountyInfo(StopAirportCountyInfo &&) = default ;
              StopAirportCountyInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~StopAirportCountyInfo() = default ;
              StopAirportCountyInfo& operator=(const StopAirportCountyInfo &) = default ;
              StopAirportCountyInfo& operator=(StopAirportCountyInfo &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->adcode_ == nullptr
        && this->airportCityCode_ == nullptr && this->airportCityName_ == nullptr && this->airportCode_ == nullptr && this->airportName_ == nullptr && this->airportParentCityName_ == nullptr
        && this->countyCityAdcode_ == nullptr && this->countyCityName_ == nullptr && this->prefectureCityAdcode_ == nullptr && this->prefectureCityName_ == nullptr; };
              // adcode Field Functions 
              bool hasAdcode() const { return this->adcode_ != nullptr;};
              void deleteAdcode() { this->adcode_ = nullptr;};
              inline string getAdcode() const { DARABONBA_PTR_GET_DEFAULT(adcode_, "") };
              inline StopAirportCountyInfo& setAdcode(string adcode) { DARABONBA_PTR_SET_VALUE(adcode_, adcode) };


              // airportCityCode Field Functions 
              bool hasAirportCityCode() const { return this->airportCityCode_ != nullptr;};
              void deleteAirportCityCode() { this->airportCityCode_ = nullptr;};
              inline string getAirportCityCode() const { DARABONBA_PTR_GET_DEFAULT(airportCityCode_, "") };
              inline StopAirportCountyInfo& setAirportCityCode(string airportCityCode) { DARABONBA_PTR_SET_VALUE(airportCityCode_, airportCityCode) };


              // airportCityName Field Functions 
              bool hasAirportCityName() const { return this->airportCityName_ != nullptr;};
              void deleteAirportCityName() { this->airportCityName_ = nullptr;};
              inline string getAirportCityName() const { DARABONBA_PTR_GET_DEFAULT(airportCityName_, "") };
              inline StopAirportCountyInfo& setAirportCityName(string airportCityName) { DARABONBA_PTR_SET_VALUE(airportCityName_, airportCityName) };


              // airportCode Field Functions 
              bool hasAirportCode() const { return this->airportCode_ != nullptr;};
              void deleteAirportCode() { this->airportCode_ = nullptr;};
              inline string getAirportCode() const { DARABONBA_PTR_GET_DEFAULT(airportCode_, "") };
              inline StopAirportCountyInfo& setAirportCode(string airportCode) { DARABONBA_PTR_SET_VALUE(airportCode_, airportCode) };


              // airportName Field Functions 
              bool hasAirportName() const { return this->airportName_ != nullptr;};
              void deleteAirportName() { this->airportName_ = nullptr;};
              inline string getAirportName() const { DARABONBA_PTR_GET_DEFAULT(airportName_, "") };
              inline StopAirportCountyInfo& setAirportName(string airportName) { DARABONBA_PTR_SET_VALUE(airportName_, airportName) };


              // airportParentCityName Field Functions 
              bool hasAirportParentCityName() const { return this->airportParentCityName_ != nullptr;};
              void deleteAirportParentCityName() { this->airportParentCityName_ = nullptr;};
              inline string getAirportParentCityName() const { DARABONBA_PTR_GET_DEFAULT(airportParentCityName_, "") };
              inline StopAirportCountyInfo& setAirportParentCityName(string airportParentCityName) { DARABONBA_PTR_SET_VALUE(airportParentCityName_, airportParentCityName) };


              // countyCityAdcode Field Functions 
              bool hasCountyCityAdcode() const { return this->countyCityAdcode_ != nullptr;};
              void deleteCountyCityAdcode() { this->countyCityAdcode_ = nullptr;};
              inline string getCountyCityAdcode() const { DARABONBA_PTR_GET_DEFAULT(countyCityAdcode_, "") };
              inline StopAirportCountyInfo& setCountyCityAdcode(string countyCityAdcode) { DARABONBA_PTR_SET_VALUE(countyCityAdcode_, countyCityAdcode) };


              // countyCityName Field Functions 
              bool hasCountyCityName() const { return this->countyCityName_ != nullptr;};
              void deleteCountyCityName() { this->countyCityName_ = nullptr;};
              inline string getCountyCityName() const { DARABONBA_PTR_GET_DEFAULT(countyCityName_, "") };
              inline StopAirportCountyInfo& setCountyCityName(string countyCityName) { DARABONBA_PTR_SET_VALUE(countyCityName_, countyCityName) };


              // prefectureCityAdcode Field Functions 
              bool hasPrefectureCityAdcode() const { return this->prefectureCityAdcode_ != nullptr;};
              void deletePrefectureCityAdcode() { this->prefectureCityAdcode_ = nullptr;};
              inline string getPrefectureCityAdcode() const { DARABONBA_PTR_GET_DEFAULT(prefectureCityAdcode_, "") };
              inline StopAirportCountyInfo& setPrefectureCityAdcode(string prefectureCityAdcode) { DARABONBA_PTR_SET_VALUE(prefectureCityAdcode_, prefectureCityAdcode) };


              // prefectureCityName Field Functions 
              bool hasPrefectureCityName() const { return this->prefectureCityName_ != nullptr;};
              void deletePrefectureCityName() { this->prefectureCityName_ = nullptr;};
              inline string getPrefectureCityName() const { DARABONBA_PTR_GET_DEFAULT(prefectureCityName_, "") };
              inline StopAirportCountyInfo& setPrefectureCityName(string prefectureCityName) { DARABONBA_PTR_SET_VALUE(prefectureCityName_, prefectureCityName) };


            protected:
              shared_ptr<string> adcode_ {};
              shared_ptr<string> airportCityCode_ {};
              shared_ptr<string> airportCityName_ {};
              shared_ptr<string> airportCode_ {};
              shared_ptr<string> airportName_ {};
              shared_ptr<string> airportParentCityName_ {};
              shared_ptr<string> countyCityAdcode_ {};
              shared_ptr<string> countyCityName_ {};
              shared_ptr<string> prefectureCityAdcode_ {};
              shared_ptr<string> prefectureCityName_ {};
            };

            virtual bool empty() const override { return this->stopAirport_ == nullptr
        && this->stopAirportCountyInfo_ == nullptr && this->stopAirportName_ == nullptr && this->stopArrTerm_ == nullptr && this->stopArrTime_ == nullptr && this->stopCityCode_ == nullptr
        && this->stopCityName_ == nullptr && this->stopDepTerm_ == nullptr && this->stopDepTime_ == nullptr && this->stopTime_ == nullptr; };
            // stopAirport Field Functions 
            bool hasStopAirport() const { return this->stopAirport_ != nullptr;};
            void deleteStopAirport() { this->stopAirport_ = nullptr;};
            inline string getStopAirport() const { DARABONBA_PTR_GET_DEFAULT(stopAirport_, "") };
            inline FlightStopInfoList& setStopAirport(string stopAirport) { DARABONBA_PTR_SET_VALUE(stopAirport_, stopAirport) };


            // stopAirportCountyInfo Field Functions 
            bool hasStopAirportCountyInfo() const { return this->stopAirportCountyInfo_ != nullptr;};
            void deleteStopAirportCountyInfo() { this->stopAirportCountyInfo_ = nullptr;};
            inline const FlightStopInfoList::StopAirportCountyInfo & getStopAirportCountyInfo() const { DARABONBA_PTR_GET_CONST(stopAirportCountyInfo_, FlightStopInfoList::StopAirportCountyInfo) };
            inline FlightStopInfoList::StopAirportCountyInfo getStopAirportCountyInfo() { DARABONBA_PTR_GET(stopAirportCountyInfo_, FlightStopInfoList::StopAirportCountyInfo) };
            inline FlightStopInfoList& setStopAirportCountyInfo(const FlightStopInfoList::StopAirportCountyInfo & stopAirportCountyInfo) { DARABONBA_PTR_SET_VALUE(stopAirportCountyInfo_, stopAirportCountyInfo) };
            inline FlightStopInfoList& setStopAirportCountyInfo(FlightStopInfoList::StopAirportCountyInfo && stopAirportCountyInfo) { DARABONBA_PTR_SET_RVALUE(stopAirportCountyInfo_, stopAirportCountyInfo) };


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
            shared_ptr<FlightStopInfoList::StopAirportCountyInfo> stopAirportCountyInfo_ {};
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
                DARABONBA_PTR_TO_JSON(cheap_airline, cheapAirline_);
                DARABONBA_PTR_TO_JSON(icon_url, iconUrl_);
                DARABONBA_PTR_TO_JSON(short_name, shortName_);
              };
              friend void from_json(const Darabonba::Json& j, OperatingAirlineInfo& obj) { 
                DARABONBA_PTR_FROM_JSON(airline_code, airlineCode_);
                DARABONBA_PTR_FROM_JSON(airline_name, airlineName_);
                DARABONBA_PTR_FROM_JSON(cheap_airline, cheapAirline_);
                DARABONBA_PTR_FROM_JSON(icon_url, iconUrl_);
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
        && this->airlineName_ == nullptr && this->cheapAirline_ == nullptr && this->iconUrl_ == nullptr && this->shortName_ == nullptr; };
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


              // cheapAirline Field Functions 
              bool hasCheapAirline() const { return this->cheapAirline_ != nullptr;};
              void deleteCheapAirline() { this->cheapAirline_ = nullptr;};
              inline bool getCheapAirline() const { DARABONBA_PTR_GET_DEFAULT(cheapAirline_, false) };
              inline OperatingAirlineInfo& setCheapAirline(bool cheapAirline) { DARABONBA_PTR_SET_VALUE(cheapAirline_, cheapAirline) };


              // iconUrl Field Functions 
              bool hasIconUrl() const { return this->iconUrl_ != nullptr;};
              void deleteIconUrl() { this->iconUrl_ = nullptr;};
              inline string getIconUrl() const { DARABONBA_PTR_GET_DEFAULT(iconUrl_, "") };
              inline OperatingAirlineInfo& setIconUrl(string iconUrl) { DARABONBA_PTR_SET_VALUE(iconUrl_, iconUrl) };


              // shortName Field Functions 
              bool hasShortName() const { return this->shortName_ != nullptr;};
              void deleteShortName() { this->shortName_ = nullptr;};
              inline string getShortName() const { DARABONBA_PTR_GET_DEFAULT(shortName_, "") };
              inline OperatingAirlineInfo& setShortName(string shortName) { DARABONBA_PTR_SET_VALUE(shortName_, shortName) };


            protected:
              shared_ptr<string> airlineCode_ {};
              shared_ptr<string> airlineName_ {};
              shared_ptr<bool> cheapAirline_ {};
              shared_ptr<string> iconUrl_ {};
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
              DARABONBA_PTR_TO_JSON(cheap_airline, cheapAirline_);
              DARABONBA_PTR_TO_JSON(icon_url, iconUrl_);
              DARABONBA_PTR_TO_JSON(short_name, shortName_);
            };
            friend void from_json(const Darabonba::Json& j, AirlineInfo& obj) { 
              DARABONBA_PTR_FROM_JSON(airline_code, airlineCode_);
              DARABONBA_PTR_FROM_JSON(airline_name, airlineName_);
              DARABONBA_PTR_FROM_JSON(cheap_airline, cheapAirline_);
              DARABONBA_PTR_FROM_JSON(icon_url, iconUrl_);
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
        && this->airlineName_ == nullptr && this->cheapAirline_ == nullptr && this->iconUrl_ == nullptr && this->shortName_ == nullptr; };
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


            // cheapAirline Field Functions 
            bool hasCheapAirline() const { return this->cheapAirline_ != nullptr;};
            void deleteCheapAirline() { this->cheapAirline_ = nullptr;};
            inline bool getCheapAirline() const { DARABONBA_PTR_GET_DEFAULT(cheapAirline_, false) };
            inline AirlineInfo& setCheapAirline(bool cheapAirline) { DARABONBA_PTR_SET_VALUE(cheapAirline_, cheapAirline) };


            // iconUrl Field Functions 
            bool hasIconUrl() const { return this->iconUrl_ != nullptr;};
            void deleteIconUrl() { this->iconUrl_ = nullptr;};
            inline string getIconUrl() const { DARABONBA_PTR_GET_DEFAULT(iconUrl_, "") };
            inline AirlineInfo& setIconUrl(string iconUrl) { DARABONBA_PTR_SET_VALUE(iconUrl_, iconUrl) };


            // shortName Field Functions 
            bool hasShortName() const { return this->shortName_ != nullptr;};
            void deleteShortName() { this->shortName_ = nullptr;};
            inline string getShortName() const { DARABONBA_PTR_GET_DEFAULT(shortName_, "") };
            inline AirlineInfo& setShortName(string shortName) { DARABONBA_PTR_SET_VALUE(shortName_, shortName) };


          protected:
            shared_ptr<string> airlineCode_ {};
            shared_ptr<string> airlineName_ {};
            shared_ptr<bool> cheapAirline_ {};
            shared_ptr<string> iconUrl_ {};
            shared_ptr<string> shortName_ {};
          };

          virtual bool empty() const override { return this->airlineInfo_ == nullptr
        && this->arrAirportInfo_ == nullptr && this->arrCityCode_ == nullptr && this->arrCityName_ == nullptr && this->arrTime_ == nullptr && this->arrTimeUTC_ == nullptr
        && this->depAirportInfo_ == nullptr && this->depCityCode_ == nullptr && this->depCityName_ == nullptr && this->depTime_ == nullptr && this->depTimeUTC_ == nullptr
        && this->duration_ == nullptr && this->flightNo_ == nullptr && this->flightShareInfo_ == nullptr && this->flightSize_ == nullptr && this->flightStopInfoList_ == nullptr
        && this->flightType_ == nullptr && this->journeyIndex_ == nullptr && this->luggageDirectInfo_ == nullptr && this->manufacturer_ == nullptr && this->meal_ == nullptr
        && this->mealDesc_ == nullptr && this->miles_ == nullptr && this->onTimeRate_ == nullptr && this->oneMore_ == nullptr && this->oneMoreShow_ == nullptr
        && this->otherInfo_ == nullptr && this->segmentIndex_ == nullptr && this->segmentKey_ == nullptr && this->segmentVisaRemark_ == nullptr && this->share_ == nullptr
        && this->shortFlightSize_ == nullptr && this->stop_ == nullptr && this->ticketingAirlineInfo_ == nullptr && this->totalTime_ == nullptr; };
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


          // arrTimeUTC Field Functions 
          bool hasArrTimeUTC() const { return this->arrTimeUTC_ != nullptr;};
          void deleteArrTimeUTC() { this->arrTimeUTC_ = nullptr;};
          inline string getArrTimeUTC() const { DARABONBA_PTR_GET_DEFAULT(arrTimeUTC_, "") };
          inline FlightSegmentInfos& setArrTimeUTC(string arrTimeUTC) { DARABONBA_PTR_SET_VALUE(arrTimeUTC_, arrTimeUTC) };


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


          // depTimeUTC Field Functions 
          bool hasDepTimeUTC() const { return this->depTimeUTC_ != nullptr;};
          void deleteDepTimeUTC() { this->depTimeUTC_ = nullptr;};
          inline string getDepTimeUTC() const { DARABONBA_PTR_GET_DEFAULT(depTimeUTC_, "") };
          inline FlightSegmentInfos& setDepTimeUTC(string depTimeUTC) { DARABONBA_PTR_SET_VALUE(depTimeUTC_, depTimeUTC) };


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


          // meal Field Functions 
          bool hasMeal() const { return this->meal_ != nullptr;};
          void deleteMeal() { this->meal_ = nullptr;};
          inline int32_t getMeal() const { DARABONBA_PTR_GET_DEFAULT(meal_, 0) };
          inline FlightSegmentInfos& setMeal(int32_t meal) { DARABONBA_PTR_SET_VALUE(meal_, meal) };


          // mealDesc Field Functions 
          bool hasMealDesc() const { return this->mealDesc_ != nullptr;};
          void deleteMealDesc() { this->mealDesc_ = nullptr;};
          inline string getMealDesc() const { DARABONBA_PTR_GET_DEFAULT(mealDesc_, "") };
          inline FlightSegmentInfos& setMealDesc(string mealDesc) { DARABONBA_PTR_SET_VALUE(mealDesc_, mealDesc) };


          // miles Field Functions 
          bool hasMiles() const { return this->miles_ != nullptr;};
          void deleteMiles() { this->miles_ = nullptr;};
          inline int32_t getMiles() const { DARABONBA_PTR_GET_DEFAULT(miles_, 0) };
          inline FlightSegmentInfos& setMiles(int32_t miles) { DARABONBA_PTR_SET_VALUE(miles_, miles) };


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


          // otherInfo Field Functions 
          bool hasOtherInfo() const { return this->otherInfo_ != nullptr;};
          void deleteOtherInfo() { this->otherInfo_ = nullptr;};
          inline const FlightSegmentInfos::OtherInfo & getOtherInfo() const { DARABONBA_PTR_GET_CONST(otherInfo_, FlightSegmentInfos::OtherInfo) };
          inline FlightSegmentInfos::OtherInfo getOtherInfo() { DARABONBA_PTR_GET(otherInfo_, FlightSegmentInfos::OtherInfo) };
          inline FlightSegmentInfos& setOtherInfo(const FlightSegmentInfos::OtherInfo & otherInfo) { DARABONBA_PTR_SET_VALUE(otherInfo_, otherInfo) };
          inline FlightSegmentInfos& setOtherInfo(FlightSegmentInfos::OtherInfo && otherInfo) { DARABONBA_PTR_SET_RVALUE(otherInfo_, otherInfo) };


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


          // ticketingAirlineInfo Field Functions 
          bool hasTicketingAirlineInfo() const { return this->ticketingAirlineInfo_ != nullptr;};
          void deleteTicketingAirlineInfo() { this->ticketingAirlineInfo_ = nullptr;};
          inline const FlightSegmentInfos::TicketingAirlineInfo & getTicketingAirlineInfo() const { DARABONBA_PTR_GET_CONST(ticketingAirlineInfo_, FlightSegmentInfos::TicketingAirlineInfo) };
          inline FlightSegmentInfos::TicketingAirlineInfo getTicketingAirlineInfo() { DARABONBA_PTR_GET(ticketingAirlineInfo_, FlightSegmentInfos::TicketingAirlineInfo) };
          inline FlightSegmentInfos& setTicketingAirlineInfo(const FlightSegmentInfos::TicketingAirlineInfo & ticketingAirlineInfo) { DARABONBA_PTR_SET_VALUE(ticketingAirlineInfo_, ticketingAirlineInfo) };
          inline FlightSegmentInfos& setTicketingAirlineInfo(FlightSegmentInfos::TicketingAirlineInfo && ticketingAirlineInfo) { DARABONBA_PTR_SET_RVALUE(ticketingAirlineInfo_, ticketingAirlineInfo) };


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
          shared_ptr<string> arrTimeUTC_ {};
          shared_ptr<FlightSegmentInfos::DepAirportInfo> depAirportInfo_ {};
          shared_ptr<string> depCityCode_ {};
          shared_ptr<string> depCityName_ {};
          shared_ptr<string> depTime_ {};
          shared_ptr<string> depTimeUTC_ {};
          shared_ptr<int32_t> duration_ {};
          shared_ptr<string> flightNo_ {};
          shared_ptr<FlightSegmentInfos::FlightShareInfo> flightShareInfo_ {};
          shared_ptr<string> flightSize_ {};
          shared_ptr<vector<FlightSegmentInfos::FlightStopInfoList>> flightStopInfoList_ {};
          shared_ptr<string> flightType_ {};
          shared_ptr<int32_t> journeyIndex_ {};
          shared_ptr<FlightSegmentInfos::LuggageDirectInfo> luggageDirectInfo_ {};
          shared_ptr<string> manufacturer_ {};
          shared_ptr<int32_t> meal_ {};
          shared_ptr<string> mealDesc_ {};
          shared_ptr<int32_t> miles_ {};
          shared_ptr<string> onTimeRate_ {};
          shared_ptr<int32_t> oneMore_ {};
          shared_ptr<string> oneMoreShow_ {};
          shared_ptr<FlightSegmentInfos::OtherInfo> otherInfo_ {};
          shared_ptr<int32_t> segmentIndex_ {};
          shared_ptr<string> segmentKey_ {};
          shared_ptr<FlightSegmentInfos::SegmentVisaRemark> segmentVisaRemark_ {};
          shared_ptr<bool> share_ {};
          shared_ptr<string> shortFlightSize_ {};
          shared_ptr<bool> stop_ {};
          shared_ptr<FlightSegmentInfos::TicketingAirlineInfo> ticketingAirlineInfo_ {};
          shared_ptr<string> totalTime_ {};
        };

        virtual bool empty() const override { return this->arrCityCode_ == nullptr
        && this->arrCityName_ == nullptr && this->arrTime_ == nullptr && this->depCityCode_ == nullptr && this->depCityName_ == nullptr && this->depTime_ == nullptr
        && this->duration_ == nullptr && this->flightSegmentInfos_ == nullptr && this->journeyIndex_ == nullptr && this->transferTime_ == nullptr; };
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
        shared_ptr<vector<FlightJourneyInfos::FlightSegmentInfos>> flightSegmentInfos_ {};
        shared_ptr<int32_t> journeyIndex_ {};
        shared_ptr<int32_t> transferTime_ {};
      };

      virtual bool empty() const override { return this->flightJourneyInfos_ == nullptr
        && this->needContinue_ == nullptr && this->nextReqWaitTime_ == nullptr && this->reShopItemList_ == nullptr && this->token_ == nullptr; };
      // flightJourneyInfos Field Functions 
      bool hasFlightJourneyInfos() const { return this->flightJourneyInfos_ != nullptr;};
      void deleteFlightJourneyInfos() { this->flightJourneyInfos_ = nullptr;};
      inline const vector<Module::FlightJourneyInfos> & getFlightJourneyInfos() const { DARABONBA_PTR_GET_CONST(flightJourneyInfos_, vector<Module::FlightJourneyInfos>) };
      inline vector<Module::FlightJourneyInfos> getFlightJourneyInfos() { DARABONBA_PTR_GET(flightJourneyInfos_, vector<Module::FlightJourneyInfos>) };
      inline Module& setFlightJourneyInfos(const vector<Module::FlightJourneyInfos> & flightJourneyInfos) { DARABONBA_PTR_SET_VALUE(flightJourneyInfos_, flightJourneyInfos) };
      inline Module& setFlightJourneyInfos(vector<Module::FlightJourneyInfos> && flightJourneyInfos) { DARABONBA_PTR_SET_RVALUE(flightJourneyInfos_, flightJourneyInfos) };


      // needContinue Field Functions 
      bool hasNeedContinue() const { return this->needContinue_ != nullptr;};
      void deleteNeedContinue() { this->needContinue_ = nullptr;};
      inline bool getNeedContinue() const { DARABONBA_PTR_GET_DEFAULT(needContinue_, false) };
      inline Module& setNeedContinue(bool needContinue) { DARABONBA_PTR_SET_VALUE(needContinue_, needContinue) };


      // nextReqWaitTime Field Functions 
      bool hasNextReqWaitTime() const { return this->nextReqWaitTime_ != nullptr;};
      void deleteNextReqWaitTime() { this->nextReqWaitTime_ = nullptr;};
      inline int32_t getNextReqWaitTime() const { DARABONBA_PTR_GET_DEFAULT(nextReqWaitTime_, 0) };
      inline Module& setNextReqWaitTime(int32_t nextReqWaitTime) { DARABONBA_PTR_SET_VALUE(nextReqWaitTime_, nextReqWaitTime) };


      // reShopItemList Field Functions 
      bool hasReShopItemList() const { return this->reShopItemList_ != nullptr;};
      void deleteReShopItemList() { this->reShopItemList_ = nullptr;};
      inline const vector<Module::ReShopItemList> & getReShopItemList() const { DARABONBA_PTR_GET_CONST(reShopItemList_, vector<Module::ReShopItemList>) };
      inline vector<Module::ReShopItemList> getReShopItemList() { DARABONBA_PTR_GET(reShopItemList_, vector<Module::ReShopItemList>) };
      inline Module& setReShopItemList(const vector<Module::ReShopItemList> & reShopItemList) { DARABONBA_PTR_SET_VALUE(reShopItemList_, reShopItemList) };
      inline Module& setReShopItemList(vector<Module::ReShopItemList> && reShopItemList) { DARABONBA_PTR_SET_RVALUE(reShopItemList_, reShopItemList) };


      // token Field Functions 
      bool hasToken() const { return this->token_ != nullptr;};
      void deleteToken() { this->token_ = nullptr;};
      inline string getToken() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
      inline Module& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


    protected:
      shared_ptr<vector<Module::FlightJourneyInfos>> flightJourneyInfos_ {};
      shared_ptr<bool> needContinue_ {};
      shared_ptr<int32_t> nextReqWaitTime_ {};
      shared_ptr<vector<Module::ReShopItemList>> reShopItemList_ {};
      shared_ptr<string> token_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline IntlFlightReShopOtaSearchResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline IntlFlightReShopOtaSearchResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const IntlFlightReShopOtaSearchResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, IntlFlightReShopOtaSearchResponseBody::Module) };
    inline IntlFlightReShopOtaSearchResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, IntlFlightReShopOtaSearchResponseBody::Module) };
    inline IntlFlightReShopOtaSearchResponseBody& setModule(const IntlFlightReShopOtaSearchResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline IntlFlightReShopOtaSearchResponseBody& setModule(IntlFlightReShopOtaSearchResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline IntlFlightReShopOtaSearchResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline IntlFlightReShopOtaSearchResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline IntlFlightReShopOtaSearchResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<IntlFlightReShopOtaSearchResponseBody::Module> module_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
