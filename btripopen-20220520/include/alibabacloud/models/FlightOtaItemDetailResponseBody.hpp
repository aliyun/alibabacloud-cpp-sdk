// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTOTAITEMDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTOTAITEMDETAILRESPONSEBODY_HPP_
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
  class FlightOtaItemDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightOtaItemDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, FlightOtaItemDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    FlightOtaItemDetailResponseBody() = default ;
    FlightOtaItemDetailResponseBody(const FlightOtaItemDetailResponseBody &) = default ;
    FlightOtaItemDetailResponseBody(FlightOtaItemDetailResponseBody &&) = default ;
    FlightOtaItemDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightOtaItemDetailResponseBody() = default ;
    FlightOtaItemDetailResponseBody& operator=(const FlightOtaItemDetailResponseBody &) = default ;
    FlightOtaItemDetailResponseBody& operator=(FlightOtaItemDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(baggage_rule, baggageRule_);
        DARABONBA_PTR_TO_JSON(change_rule, changeRule_);
        DARABONBA_PTR_TO_JSON(refund_rule, refundRule_);
        DARABONBA_PTR_TO_JSON(sell_price, sellPrice_);
        DARABONBA_PTR_TO_JSON(sell_price_list, sellPriceList_);
        DARABONBA_PTR_TO_JSON(trip_type, tripType_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(baggage_rule, baggageRule_);
        DARABONBA_PTR_FROM_JSON(change_rule, changeRule_);
        DARABONBA_PTR_FROM_JSON(refund_rule, refundRule_);
        DARABONBA_PTR_FROM_JSON(sell_price, sellPrice_);
        DARABONBA_PTR_FROM_JSON(sell_price_list, sellPriceList_);
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
      class RefundRule : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RefundRule& obj) { 
          DARABONBA_PTR_TO_JSON(extra_contents, extraContents_);
          DARABONBA_PTR_TO_JSON(flight_no, flightNo_);
          DARABONBA_PTR_TO_JSON(free_baggage, freeBaggage_);
          DARABONBA_PTR_TO_JSON(index, index_);
          DARABONBA_PTR_TO_JSON(level, level_);
          DARABONBA_PTR_TO_JSON(refund_sub_items, refundSubItems_);
          DARABONBA_PTR_TO_JSON(sub_table_head, subTableHead_);
          DARABONBA_PTR_TO_JSON(table_head, tableHead_);
          DARABONBA_PTR_TO_JSON(title, title_);
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, RefundRule& obj) { 
          DARABONBA_PTR_FROM_JSON(extra_contents, extraContents_);
          DARABONBA_PTR_FROM_JSON(flight_no, flightNo_);
          DARABONBA_PTR_FROM_JSON(free_baggage, freeBaggage_);
          DARABONBA_PTR_FROM_JSON(index, index_);
          DARABONBA_PTR_FROM_JSON(level, level_);
          DARABONBA_PTR_FROM_JSON(refund_sub_items, refundSubItems_);
          DARABONBA_PTR_FROM_JSON(sub_table_head, subTableHead_);
          DARABONBA_PTR_FROM_JSON(table_head, tableHead_);
          DARABONBA_PTR_FROM_JSON(title, title_);
          DARABONBA_PTR_FROM_JSON(type, type_);
        };
        RefundRule() = default ;
        RefundRule(const RefundRule &) = default ;
        RefundRule(RefundRule &&) = default ;
        RefundRule(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RefundRule() = default ;
        RefundRule& operator=(const RefundRule &) = default ;
        RefundRule& operator=(RefundRule &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class RefundSubItems : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RefundSubItems& obj) { 
            DARABONBA_PTR_TO_JSON(is_struct, isStruct_);
            DARABONBA_PTR_TO_JSON(ptc, ptc_);
            DARABONBA_PTR_TO_JSON(refund_sub_contents, refundSubContents_);
            DARABONBA_PTR_TO_JSON(title, title_);
          };
          friend void from_json(const Darabonba::Json& j, RefundSubItems& obj) { 
            DARABONBA_PTR_FROM_JSON(is_struct, isStruct_);
            DARABONBA_PTR_FROM_JSON(ptc, ptc_);
            DARABONBA_PTR_FROM_JSON(refund_sub_contents, refundSubContents_);
            DARABONBA_PTR_FROM_JSON(title, title_);
          };
          RefundSubItems() = default ;
          RefundSubItems(const RefundSubItems &) = default ;
          RefundSubItems(RefundSubItems &&) = default ;
          RefundSubItems(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RefundSubItems() = default ;
          RefundSubItems& operator=(const RefundSubItems &) = default ;
          RefundSubItems& operator=(RefundSubItems &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class RefundSubContents : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const RefundSubContents& obj) { 
              DARABONBA_PTR_TO_JSON(fee_desc, feeDesc_);
              DARABONBA_PTR_TO_JSON(fee_range, feeRange_);
              DARABONBA_PTR_TO_JSON(style, style_);
            };
            friend void from_json(const Darabonba::Json& j, RefundSubContents& obj) { 
              DARABONBA_PTR_FROM_JSON(fee_desc, feeDesc_);
              DARABONBA_PTR_FROM_JSON(fee_range, feeRange_);
              DARABONBA_PTR_FROM_JSON(style, style_);
            };
            RefundSubContents() = default ;
            RefundSubContents(const RefundSubContents &) = default ;
            RefundSubContents(RefundSubContents &&) = default ;
            RefundSubContents(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~RefundSubContents() = default ;
            RefundSubContents& operator=(const RefundSubContents &) = default ;
            RefundSubContents& operator=(RefundSubContents &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->feeDesc_ == nullptr
        && this->feeRange_ == nullptr && this->style_ == nullptr; };
            // feeDesc Field Functions 
            bool hasFeeDesc() const { return this->feeDesc_ != nullptr;};
            void deleteFeeDesc() { this->feeDesc_ = nullptr;};
            inline string getFeeDesc() const { DARABONBA_PTR_GET_DEFAULT(feeDesc_, "") };
            inline RefundSubContents& setFeeDesc(string feeDesc) { DARABONBA_PTR_SET_VALUE(feeDesc_, feeDesc) };


            // feeRange Field Functions 
            bool hasFeeRange() const { return this->feeRange_ != nullptr;};
            void deleteFeeRange() { this->feeRange_ = nullptr;};
            inline string getFeeRange() const { DARABONBA_PTR_GET_DEFAULT(feeRange_, "") };
            inline RefundSubContents& setFeeRange(string feeRange) { DARABONBA_PTR_SET_VALUE(feeRange_, feeRange) };


            // style Field Functions 
            bool hasStyle() const { return this->style_ != nullptr;};
            void deleteStyle() { this->style_ = nullptr;};
            inline int32_t getStyle() const { DARABONBA_PTR_GET_DEFAULT(style_, 0) };
            inline RefundSubContents& setStyle(int32_t style) { DARABONBA_PTR_SET_VALUE(style_, style) };


          protected:
            shared_ptr<string> feeDesc_ {};
            shared_ptr<string> feeRange_ {};
            shared_ptr<int32_t> style_ {};
          };

          virtual bool empty() const override { return this->isStruct_ == nullptr
        && this->ptc_ == nullptr && this->refundSubContents_ == nullptr && this->title_ == nullptr; };
          // isStruct Field Functions 
          bool hasIsStruct() const { return this->isStruct_ != nullptr;};
          void deleteIsStruct() { this->isStruct_ = nullptr;};
          inline bool getIsStruct() const { DARABONBA_PTR_GET_DEFAULT(isStruct_, false) };
          inline RefundSubItems& setIsStruct(bool isStruct) { DARABONBA_PTR_SET_VALUE(isStruct_, isStruct) };


          // ptc Field Functions 
          bool hasPtc() const { return this->ptc_ != nullptr;};
          void deletePtc() { this->ptc_ = nullptr;};
          inline string getPtc() const { DARABONBA_PTR_GET_DEFAULT(ptc_, "") };
          inline RefundSubItems& setPtc(string ptc) { DARABONBA_PTR_SET_VALUE(ptc_, ptc) };


          // refundSubContents Field Functions 
          bool hasRefundSubContents() const { return this->refundSubContents_ != nullptr;};
          void deleteRefundSubContents() { this->refundSubContents_ = nullptr;};
          inline const vector<RefundSubItems::RefundSubContents> & getRefundSubContents() const { DARABONBA_PTR_GET_CONST(refundSubContents_, vector<RefundSubItems::RefundSubContents>) };
          inline vector<RefundSubItems::RefundSubContents> getRefundSubContents() { DARABONBA_PTR_GET(refundSubContents_, vector<RefundSubItems::RefundSubContents>) };
          inline RefundSubItems& setRefundSubContents(const vector<RefundSubItems::RefundSubContents> & refundSubContents) { DARABONBA_PTR_SET_VALUE(refundSubContents_, refundSubContents) };
          inline RefundSubItems& setRefundSubContents(vector<RefundSubItems::RefundSubContents> && refundSubContents) { DARABONBA_PTR_SET_RVALUE(refundSubContents_, refundSubContents) };


          // title Field Functions 
          bool hasTitle() const { return this->title_ != nullptr;};
          void deleteTitle() { this->title_ = nullptr;};
          inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
          inline RefundSubItems& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


        protected:
          shared_ptr<bool> isStruct_ {};
          shared_ptr<string> ptc_ {};
          shared_ptr<vector<RefundSubItems::RefundSubContents>> refundSubContents_ {};
          shared_ptr<string> title_ {};
        };

        class ExtraContents : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ExtraContents& obj) { 
            DARABONBA_PTR_TO_JSON(content, content_);
            DARABONBA_PTR_TO_JSON(title, title_);
          };
          friend void from_json(const Darabonba::Json& j, ExtraContents& obj) { 
            DARABONBA_PTR_FROM_JSON(content, content_);
            DARABONBA_PTR_FROM_JSON(title, title_);
          };
          ExtraContents() = default ;
          ExtraContents(const ExtraContents &) = default ;
          ExtraContents(ExtraContents &&) = default ;
          ExtraContents(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ExtraContents() = default ;
          ExtraContents& operator=(const ExtraContents &) = default ;
          ExtraContents& operator=(ExtraContents &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->content_ == nullptr
        && this->title_ == nullptr; };
          // content Field Functions 
          bool hasContent() const { return this->content_ != nullptr;};
          void deleteContent() { this->content_ = nullptr;};
          inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
          inline ExtraContents& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


          // title Field Functions 
          bool hasTitle() const { return this->title_ != nullptr;};
          void deleteTitle() { this->title_ = nullptr;};
          inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
          inline ExtraContents& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


        protected:
          shared_ptr<string> content_ {};
          shared_ptr<string> title_ {};
        };

        virtual bool empty() const override { return this->extraContents_ == nullptr
        && this->flightNo_ == nullptr && this->freeBaggage_ == nullptr && this->index_ == nullptr && this->level_ == nullptr && this->refundSubItems_ == nullptr
        && this->subTableHead_ == nullptr && this->tableHead_ == nullptr && this->title_ == nullptr && this->type_ == nullptr; };
        // extraContents Field Functions 
        bool hasExtraContents() const { return this->extraContents_ != nullptr;};
        void deleteExtraContents() { this->extraContents_ = nullptr;};
        inline const vector<RefundRule::ExtraContents> & getExtraContents() const { DARABONBA_PTR_GET_CONST(extraContents_, vector<RefundRule::ExtraContents>) };
        inline vector<RefundRule::ExtraContents> getExtraContents() { DARABONBA_PTR_GET(extraContents_, vector<RefundRule::ExtraContents>) };
        inline RefundRule& setExtraContents(const vector<RefundRule::ExtraContents> & extraContents) { DARABONBA_PTR_SET_VALUE(extraContents_, extraContents) };
        inline RefundRule& setExtraContents(vector<RefundRule::ExtraContents> && extraContents) { DARABONBA_PTR_SET_RVALUE(extraContents_, extraContents) };


        // flightNo Field Functions 
        bool hasFlightNo() const { return this->flightNo_ != nullptr;};
        void deleteFlightNo() { this->flightNo_ = nullptr;};
        inline string getFlightNo() const { DARABONBA_PTR_GET_DEFAULT(flightNo_, "") };
        inline RefundRule& setFlightNo(string flightNo) { DARABONBA_PTR_SET_VALUE(flightNo_, flightNo) };


        // freeBaggage Field Functions 
        bool hasFreeBaggage() const { return this->freeBaggage_ != nullptr;};
        void deleteFreeBaggage() { this->freeBaggage_ = nullptr;};
        inline int32_t getFreeBaggage() const { DARABONBA_PTR_GET_DEFAULT(freeBaggage_, 0) };
        inline RefundRule& setFreeBaggage(int32_t freeBaggage) { DARABONBA_PTR_SET_VALUE(freeBaggage_, freeBaggage) };


        // index Field Functions 
        bool hasIndex() const { return this->index_ != nullptr;};
        void deleteIndex() { this->index_ = nullptr;};
        inline int32_t getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
        inline RefundRule& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


        // level Field Functions 
        bool hasLevel() const { return this->level_ != nullptr;};
        void deleteLevel() { this->level_ = nullptr;};
        inline int32_t getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, 0) };
        inline RefundRule& setLevel(int32_t level) { DARABONBA_PTR_SET_VALUE(level_, level) };


        // refundSubItems Field Functions 
        bool hasRefundSubItems() const { return this->refundSubItems_ != nullptr;};
        void deleteRefundSubItems() { this->refundSubItems_ = nullptr;};
        inline const vector<RefundRule::RefundSubItems> & getRefundSubItems() const { DARABONBA_PTR_GET_CONST(refundSubItems_, vector<RefundRule::RefundSubItems>) };
        inline vector<RefundRule::RefundSubItems> getRefundSubItems() { DARABONBA_PTR_GET(refundSubItems_, vector<RefundRule::RefundSubItems>) };
        inline RefundRule& setRefundSubItems(const vector<RefundRule::RefundSubItems> & refundSubItems) { DARABONBA_PTR_SET_VALUE(refundSubItems_, refundSubItems) };
        inline RefundRule& setRefundSubItems(vector<RefundRule::RefundSubItems> && refundSubItems) { DARABONBA_PTR_SET_RVALUE(refundSubItems_, refundSubItems) };


        // subTableHead Field Functions 
        bool hasSubTableHead() const { return this->subTableHead_ != nullptr;};
        void deleteSubTableHead() { this->subTableHead_ = nullptr;};
        inline const vector<string> & getSubTableHead() const { DARABONBA_PTR_GET_CONST(subTableHead_, vector<string>) };
        inline vector<string> getSubTableHead() { DARABONBA_PTR_GET(subTableHead_, vector<string>) };
        inline RefundRule& setSubTableHead(const vector<string> & subTableHead) { DARABONBA_PTR_SET_VALUE(subTableHead_, subTableHead) };
        inline RefundRule& setSubTableHead(vector<string> && subTableHead) { DARABONBA_PTR_SET_RVALUE(subTableHead_, subTableHead) };


        // tableHead Field Functions 
        bool hasTableHead() const { return this->tableHead_ != nullptr;};
        void deleteTableHead() { this->tableHead_ = nullptr;};
        inline string getTableHead() const { DARABONBA_PTR_GET_DEFAULT(tableHead_, "") };
        inline RefundRule& setTableHead(string tableHead) { DARABONBA_PTR_SET_VALUE(tableHead_, tableHead) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline RefundRule& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
        inline RefundRule& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<vector<RefundRule::ExtraContents>> extraContents_ {};
        shared_ptr<string> flightNo_ {};
        shared_ptr<int32_t> freeBaggage_ {};
        shared_ptr<int32_t> index_ {};
        shared_ptr<int32_t> level_ {};
        shared_ptr<vector<RefundRule::RefundSubItems>> refundSubItems_ {};
        // subTableHead
        shared_ptr<vector<string>> subTableHead_ {};
        shared_ptr<string> tableHead_ {};
        shared_ptr<string> title_ {};
        shared_ptr<int32_t> type_ {};
      };

      class ChangeRule : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ChangeRule& obj) { 
          DARABONBA_PTR_TO_JSON(extra_contents, extraContents_);
          DARABONBA_PTR_TO_JSON(flight_no, flightNo_);
          DARABONBA_PTR_TO_JSON(free_baggage, freeBaggage_);
          DARABONBA_PTR_TO_JSON(index, index_);
          DARABONBA_PTR_TO_JSON(level, level_);
          DARABONBA_PTR_TO_JSON(refund_sub_items, refundSubItems_);
          DARABONBA_PTR_TO_JSON(sub_table_head, subTableHead_);
          DARABONBA_PTR_TO_JSON(table_head, tableHead_);
          DARABONBA_PTR_TO_JSON(title, title_);
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, ChangeRule& obj) { 
          DARABONBA_PTR_FROM_JSON(extra_contents, extraContents_);
          DARABONBA_PTR_FROM_JSON(flight_no, flightNo_);
          DARABONBA_PTR_FROM_JSON(free_baggage, freeBaggage_);
          DARABONBA_PTR_FROM_JSON(index, index_);
          DARABONBA_PTR_FROM_JSON(level, level_);
          DARABONBA_PTR_FROM_JSON(refund_sub_items, refundSubItems_);
          DARABONBA_PTR_FROM_JSON(sub_table_head, subTableHead_);
          DARABONBA_PTR_FROM_JSON(table_head, tableHead_);
          DARABONBA_PTR_FROM_JSON(title, title_);
          DARABONBA_PTR_FROM_JSON(type, type_);
        };
        ChangeRule() = default ;
        ChangeRule(const ChangeRule &) = default ;
        ChangeRule(ChangeRule &&) = default ;
        ChangeRule(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ChangeRule() = default ;
        ChangeRule& operator=(const ChangeRule &) = default ;
        ChangeRule& operator=(ChangeRule &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class RefundSubItems : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RefundSubItems& obj) { 
            DARABONBA_PTR_TO_JSON(is_struct, isStruct_);
            DARABONBA_PTR_TO_JSON(ptc, ptc_);
            DARABONBA_PTR_TO_JSON(refund_sub_contents, refundSubContents_);
            DARABONBA_PTR_TO_JSON(title, title_);
          };
          friend void from_json(const Darabonba::Json& j, RefundSubItems& obj) { 
            DARABONBA_PTR_FROM_JSON(is_struct, isStruct_);
            DARABONBA_PTR_FROM_JSON(ptc, ptc_);
            DARABONBA_PTR_FROM_JSON(refund_sub_contents, refundSubContents_);
            DARABONBA_PTR_FROM_JSON(title, title_);
          };
          RefundSubItems() = default ;
          RefundSubItems(const RefundSubItems &) = default ;
          RefundSubItems(RefundSubItems &&) = default ;
          RefundSubItems(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RefundSubItems() = default ;
          RefundSubItems& operator=(const RefundSubItems &) = default ;
          RefundSubItems& operator=(RefundSubItems &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class RefundSubContents : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const RefundSubContents& obj) { 
              DARABONBA_PTR_TO_JSON(fee_desc, feeDesc_);
              DARABONBA_PTR_TO_JSON(fee_range, feeRange_);
              DARABONBA_PTR_TO_JSON(style, style_);
            };
            friend void from_json(const Darabonba::Json& j, RefundSubContents& obj) { 
              DARABONBA_PTR_FROM_JSON(fee_desc, feeDesc_);
              DARABONBA_PTR_FROM_JSON(fee_range, feeRange_);
              DARABONBA_PTR_FROM_JSON(style, style_);
            };
            RefundSubContents() = default ;
            RefundSubContents(const RefundSubContents &) = default ;
            RefundSubContents(RefundSubContents &&) = default ;
            RefundSubContents(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~RefundSubContents() = default ;
            RefundSubContents& operator=(const RefundSubContents &) = default ;
            RefundSubContents& operator=(RefundSubContents &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->feeDesc_ == nullptr
        && this->feeRange_ == nullptr && this->style_ == nullptr; };
            // feeDesc Field Functions 
            bool hasFeeDesc() const { return this->feeDesc_ != nullptr;};
            void deleteFeeDesc() { this->feeDesc_ = nullptr;};
            inline string getFeeDesc() const { DARABONBA_PTR_GET_DEFAULT(feeDesc_, "") };
            inline RefundSubContents& setFeeDesc(string feeDesc) { DARABONBA_PTR_SET_VALUE(feeDesc_, feeDesc) };


            // feeRange Field Functions 
            bool hasFeeRange() const { return this->feeRange_ != nullptr;};
            void deleteFeeRange() { this->feeRange_ = nullptr;};
            inline string getFeeRange() const { DARABONBA_PTR_GET_DEFAULT(feeRange_, "") };
            inline RefundSubContents& setFeeRange(string feeRange) { DARABONBA_PTR_SET_VALUE(feeRange_, feeRange) };


            // style Field Functions 
            bool hasStyle() const { return this->style_ != nullptr;};
            void deleteStyle() { this->style_ = nullptr;};
            inline int32_t getStyle() const { DARABONBA_PTR_GET_DEFAULT(style_, 0) };
            inline RefundSubContents& setStyle(int32_t style) { DARABONBA_PTR_SET_VALUE(style_, style) };


          protected:
            shared_ptr<string> feeDesc_ {};
            shared_ptr<string> feeRange_ {};
            shared_ptr<int32_t> style_ {};
          };

          virtual bool empty() const override { return this->isStruct_ == nullptr
        && this->ptc_ == nullptr && this->refundSubContents_ == nullptr && this->title_ == nullptr; };
          // isStruct Field Functions 
          bool hasIsStruct() const { return this->isStruct_ != nullptr;};
          void deleteIsStruct() { this->isStruct_ = nullptr;};
          inline bool getIsStruct() const { DARABONBA_PTR_GET_DEFAULT(isStruct_, false) };
          inline RefundSubItems& setIsStruct(bool isStruct) { DARABONBA_PTR_SET_VALUE(isStruct_, isStruct) };


          // ptc Field Functions 
          bool hasPtc() const { return this->ptc_ != nullptr;};
          void deletePtc() { this->ptc_ = nullptr;};
          inline string getPtc() const { DARABONBA_PTR_GET_DEFAULT(ptc_, "") };
          inline RefundSubItems& setPtc(string ptc) { DARABONBA_PTR_SET_VALUE(ptc_, ptc) };


          // refundSubContents Field Functions 
          bool hasRefundSubContents() const { return this->refundSubContents_ != nullptr;};
          void deleteRefundSubContents() { this->refundSubContents_ = nullptr;};
          inline const vector<RefundSubItems::RefundSubContents> & getRefundSubContents() const { DARABONBA_PTR_GET_CONST(refundSubContents_, vector<RefundSubItems::RefundSubContents>) };
          inline vector<RefundSubItems::RefundSubContents> getRefundSubContents() { DARABONBA_PTR_GET(refundSubContents_, vector<RefundSubItems::RefundSubContents>) };
          inline RefundSubItems& setRefundSubContents(const vector<RefundSubItems::RefundSubContents> & refundSubContents) { DARABONBA_PTR_SET_VALUE(refundSubContents_, refundSubContents) };
          inline RefundSubItems& setRefundSubContents(vector<RefundSubItems::RefundSubContents> && refundSubContents) { DARABONBA_PTR_SET_RVALUE(refundSubContents_, refundSubContents) };


          // title Field Functions 
          bool hasTitle() const { return this->title_ != nullptr;};
          void deleteTitle() { this->title_ = nullptr;};
          inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
          inline RefundSubItems& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


        protected:
          shared_ptr<bool> isStruct_ {};
          shared_ptr<string> ptc_ {};
          shared_ptr<vector<RefundSubItems::RefundSubContents>> refundSubContents_ {};
          shared_ptr<string> title_ {};
        };

        class ExtraContents : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ExtraContents& obj) { 
            DARABONBA_PTR_TO_JSON(content, content_);
            DARABONBA_PTR_TO_JSON(title, title_);
          };
          friend void from_json(const Darabonba::Json& j, ExtraContents& obj) { 
            DARABONBA_PTR_FROM_JSON(content, content_);
            DARABONBA_PTR_FROM_JSON(title, title_);
          };
          ExtraContents() = default ;
          ExtraContents(const ExtraContents &) = default ;
          ExtraContents(ExtraContents &&) = default ;
          ExtraContents(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ExtraContents() = default ;
          ExtraContents& operator=(const ExtraContents &) = default ;
          ExtraContents& operator=(ExtraContents &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->content_ == nullptr
        && this->title_ == nullptr; };
          // content Field Functions 
          bool hasContent() const { return this->content_ != nullptr;};
          void deleteContent() { this->content_ = nullptr;};
          inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
          inline ExtraContents& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


          // title Field Functions 
          bool hasTitle() const { return this->title_ != nullptr;};
          void deleteTitle() { this->title_ = nullptr;};
          inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
          inline ExtraContents& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


        protected:
          shared_ptr<string> content_ {};
          shared_ptr<string> title_ {};
        };

        virtual bool empty() const override { return this->extraContents_ == nullptr
        && this->flightNo_ == nullptr && this->freeBaggage_ == nullptr && this->index_ == nullptr && this->level_ == nullptr && this->refundSubItems_ == nullptr
        && this->subTableHead_ == nullptr && this->tableHead_ == nullptr && this->title_ == nullptr && this->type_ == nullptr; };
        // extraContents Field Functions 
        bool hasExtraContents() const { return this->extraContents_ != nullptr;};
        void deleteExtraContents() { this->extraContents_ = nullptr;};
        inline const vector<ChangeRule::ExtraContents> & getExtraContents() const { DARABONBA_PTR_GET_CONST(extraContents_, vector<ChangeRule::ExtraContents>) };
        inline vector<ChangeRule::ExtraContents> getExtraContents() { DARABONBA_PTR_GET(extraContents_, vector<ChangeRule::ExtraContents>) };
        inline ChangeRule& setExtraContents(const vector<ChangeRule::ExtraContents> & extraContents) { DARABONBA_PTR_SET_VALUE(extraContents_, extraContents) };
        inline ChangeRule& setExtraContents(vector<ChangeRule::ExtraContents> && extraContents) { DARABONBA_PTR_SET_RVALUE(extraContents_, extraContents) };


        // flightNo Field Functions 
        bool hasFlightNo() const { return this->flightNo_ != nullptr;};
        void deleteFlightNo() { this->flightNo_ = nullptr;};
        inline string getFlightNo() const { DARABONBA_PTR_GET_DEFAULT(flightNo_, "") };
        inline ChangeRule& setFlightNo(string flightNo) { DARABONBA_PTR_SET_VALUE(flightNo_, flightNo) };


        // freeBaggage Field Functions 
        bool hasFreeBaggage() const { return this->freeBaggage_ != nullptr;};
        void deleteFreeBaggage() { this->freeBaggage_ = nullptr;};
        inline int32_t getFreeBaggage() const { DARABONBA_PTR_GET_DEFAULT(freeBaggage_, 0) };
        inline ChangeRule& setFreeBaggage(int32_t freeBaggage) { DARABONBA_PTR_SET_VALUE(freeBaggage_, freeBaggage) };


        // index Field Functions 
        bool hasIndex() const { return this->index_ != nullptr;};
        void deleteIndex() { this->index_ = nullptr;};
        inline int32_t getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
        inline ChangeRule& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


        // level Field Functions 
        bool hasLevel() const { return this->level_ != nullptr;};
        void deleteLevel() { this->level_ = nullptr;};
        inline int32_t getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, 0) };
        inline ChangeRule& setLevel(int32_t level) { DARABONBA_PTR_SET_VALUE(level_, level) };


        // refundSubItems Field Functions 
        bool hasRefundSubItems() const { return this->refundSubItems_ != nullptr;};
        void deleteRefundSubItems() { this->refundSubItems_ = nullptr;};
        inline const vector<ChangeRule::RefundSubItems> & getRefundSubItems() const { DARABONBA_PTR_GET_CONST(refundSubItems_, vector<ChangeRule::RefundSubItems>) };
        inline vector<ChangeRule::RefundSubItems> getRefundSubItems() { DARABONBA_PTR_GET(refundSubItems_, vector<ChangeRule::RefundSubItems>) };
        inline ChangeRule& setRefundSubItems(const vector<ChangeRule::RefundSubItems> & refundSubItems) { DARABONBA_PTR_SET_VALUE(refundSubItems_, refundSubItems) };
        inline ChangeRule& setRefundSubItems(vector<ChangeRule::RefundSubItems> && refundSubItems) { DARABONBA_PTR_SET_RVALUE(refundSubItems_, refundSubItems) };


        // subTableHead Field Functions 
        bool hasSubTableHead() const { return this->subTableHead_ != nullptr;};
        void deleteSubTableHead() { this->subTableHead_ = nullptr;};
        inline const vector<string> & getSubTableHead() const { DARABONBA_PTR_GET_CONST(subTableHead_, vector<string>) };
        inline vector<string> getSubTableHead() { DARABONBA_PTR_GET(subTableHead_, vector<string>) };
        inline ChangeRule& setSubTableHead(const vector<string> & subTableHead) { DARABONBA_PTR_SET_VALUE(subTableHead_, subTableHead) };
        inline ChangeRule& setSubTableHead(vector<string> && subTableHead) { DARABONBA_PTR_SET_RVALUE(subTableHead_, subTableHead) };


        // tableHead Field Functions 
        bool hasTableHead() const { return this->tableHead_ != nullptr;};
        void deleteTableHead() { this->tableHead_ = nullptr;};
        inline string getTableHead() const { DARABONBA_PTR_GET_DEFAULT(tableHead_, "") };
        inline ChangeRule& setTableHead(string tableHead) { DARABONBA_PTR_SET_VALUE(tableHead_, tableHead) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline ChangeRule& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
        inline ChangeRule& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<vector<ChangeRule::ExtraContents>> extraContents_ {};
        shared_ptr<string> flightNo_ {};
        shared_ptr<int32_t> freeBaggage_ {};
        shared_ptr<int32_t> index_ {};
        shared_ptr<int32_t> level_ {};
        shared_ptr<vector<ChangeRule::RefundSubItems>> refundSubItems_ {};
        // subTableHead
        shared_ptr<vector<string>> subTableHead_ {};
        shared_ptr<string> tableHead_ {};
        shared_ptr<string> title_ {};
        shared_ptr<int32_t> type_ {};
      };

      class BaggageRule : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BaggageRule& obj) { 
          DARABONBA_PTR_TO_JSON(baggage_sub_items, baggageSubItems_);
          DARABONBA_PTR_TO_JSON(index, index_);
          DARABONBA_PTR_TO_JSON(table_head, tableHead_);
          DARABONBA_PTR_TO_JSON(tips, tips_);
          DARABONBA_PTR_TO_JSON(title, title_);
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, BaggageRule& obj) { 
          DARABONBA_PTR_FROM_JSON(baggage_sub_items, baggageSubItems_);
          DARABONBA_PTR_FROM_JSON(index, index_);
          DARABONBA_PTR_FROM_JSON(table_head, tableHead_);
          DARABONBA_PTR_FROM_JSON(tips, tips_);
          DARABONBA_PTR_FROM_JSON(title, title_);
          DARABONBA_PTR_FROM_JSON(type, type_);
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
        class Tips : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Tips& obj) { 
            DARABONBA_PTR_TO_JSON(logo, logo_);
            DARABONBA_PTR_TO_JSON(tips_desc, tipsDesc_);
            DARABONBA_PTR_TO_JSON(tips_image, tipsImage_);
          };
          friend void from_json(const Darabonba::Json& j, Tips& obj) { 
            DARABONBA_PTR_FROM_JSON(logo, logo_);
            DARABONBA_PTR_FROM_JSON(tips_desc, tipsDesc_);
            DARABONBA_PTR_FROM_JSON(tips_image, tipsImage_);
          };
          Tips() = default ;
          Tips(const Tips &) = default ;
          Tips(Tips &&) = default ;
          Tips(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Tips() = default ;
          Tips& operator=(const Tips &) = default ;
          Tips& operator=(Tips &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->logo_ == nullptr
        && this->tipsDesc_ == nullptr && this->tipsImage_ == nullptr; };
          // logo Field Functions 
          bool hasLogo() const { return this->logo_ != nullptr;};
          void deleteLogo() { this->logo_ = nullptr;};
          inline string getLogo() const { DARABONBA_PTR_GET_DEFAULT(logo_, "") };
          inline Tips& setLogo(string logo) { DARABONBA_PTR_SET_VALUE(logo_, logo) };


          // tipsDesc Field Functions 
          bool hasTipsDesc() const { return this->tipsDesc_ != nullptr;};
          void deleteTipsDesc() { this->tipsDesc_ = nullptr;};
          inline string getTipsDesc() const { DARABONBA_PTR_GET_DEFAULT(tipsDesc_, "") };
          inline Tips& setTipsDesc(string tipsDesc) { DARABONBA_PTR_SET_VALUE(tipsDesc_, tipsDesc) };


          // tipsImage Field Functions 
          bool hasTipsImage() const { return this->tipsImage_ != nullptr;};
          void deleteTipsImage() { this->tipsImage_ = nullptr;};
          inline string getTipsImage() const { DARABONBA_PTR_GET_DEFAULT(tipsImage_, "") };
          inline Tips& setTipsImage(string tipsImage) { DARABONBA_PTR_SET_VALUE(tipsImage_, tipsImage) };


        protected:
          shared_ptr<string> logo_ {};
          shared_ptr<string> tipsDesc_ {};
          shared_ptr<string> tipsImage_ {};
        };

        class BaggageSubItems : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const BaggageSubItems& obj) { 
            DARABONBA_PTR_TO_JSON(baggage_sub_content_visualizes, baggageSubContentVisualizes_);
            DARABONBA_PTR_TO_JSON(extra_content_visualizes, extraContentVisualizes_);
            DARABONBA_PTR_TO_JSON(is_struct, isStruct_);
            DARABONBA_PTR_TO_JSON(ptc, ptc_);
            DARABONBA_PTR_TO_JSON(title, title_);
          };
          friend void from_json(const Darabonba::Json& j, BaggageSubItems& obj) { 
            DARABONBA_PTR_FROM_JSON(baggage_sub_content_visualizes, baggageSubContentVisualizes_);
            DARABONBA_PTR_FROM_JSON(extra_content_visualizes, extraContentVisualizes_);
            DARABONBA_PTR_FROM_JSON(is_struct, isStruct_);
            DARABONBA_PTR_FROM_JSON(ptc, ptc_);
            DARABONBA_PTR_FROM_JSON(title, title_);
          };
          BaggageSubItems() = default ;
          BaggageSubItems(const BaggageSubItems &) = default ;
          BaggageSubItems(BaggageSubItems &&) = default ;
          BaggageSubItems(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~BaggageSubItems() = default ;
          BaggageSubItems& operator=(const BaggageSubItems &) = default ;
          BaggageSubItems& operator=(BaggageSubItems &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class BaggageSubContentVisualizes : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const BaggageSubContentVisualizes& obj) { 
              DARABONBA_PTR_TO_JSON(baggage_desc, baggageDesc_);
              DARABONBA_PTR_TO_JSON(baggage_sub_content_type, baggageSubContentType_);
              DARABONBA_PTR_TO_JSON(description, description_);
              DARABONBA_PTR_TO_JSON(image_d_o, imageDO_);
              DARABONBA_PTR_TO_JSON(is_highlight, isHighlight_);
              DARABONBA_PTR_TO_JSON(sub_title, subTitle_);
            };
            friend void from_json(const Darabonba::Json& j, BaggageSubContentVisualizes& obj) { 
              DARABONBA_PTR_FROM_JSON(baggage_desc, baggageDesc_);
              DARABONBA_PTR_FROM_JSON(baggage_sub_content_type, baggageSubContentType_);
              DARABONBA_PTR_FROM_JSON(description, description_);
              DARABONBA_PTR_FROM_JSON(image_d_o, imageDO_);
              DARABONBA_PTR_FROM_JSON(is_highlight, isHighlight_);
              DARABONBA_PTR_FROM_JSON(sub_title, subTitle_);
            };
            BaggageSubContentVisualizes() = default ;
            BaggageSubContentVisualizes(const BaggageSubContentVisualizes &) = default ;
            BaggageSubContentVisualizes(BaggageSubContentVisualizes &&) = default ;
            BaggageSubContentVisualizes(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~BaggageSubContentVisualizes() = default ;
            BaggageSubContentVisualizes& operator=(const BaggageSubContentVisualizes &) = default ;
            BaggageSubContentVisualizes& operator=(BaggageSubContentVisualizes &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class ImageDO : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const ImageDO& obj) { 
                DARABONBA_PTR_TO_JSON(image, image_);
                DARABONBA_PTR_TO_JSON(largest, largest_);
                DARABONBA_PTR_TO_JSON(middle, middle_);
                DARABONBA_PTR_TO_JSON(smallest, smallest_);
              };
              friend void from_json(const Darabonba::Json& j, ImageDO& obj) { 
                DARABONBA_PTR_FROM_JSON(image, image_);
                DARABONBA_PTR_FROM_JSON(largest, largest_);
                DARABONBA_PTR_FROM_JSON(middle, middle_);
                DARABONBA_PTR_FROM_JSON(smallest, smallest_);
              };
              ImageDO() = default ;
              ImageDO(const ImageDO &) = default ;
              ImageDO(ImageDO &&) = default ;
              ImageDO(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~ImageDO() = default ;
              ImageDO& operator=(const ImageDO &) = default ;
              ImageDO& operator=(ImageDO &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->image_ == nullptr
        && this->largest_ == nullptr && this->middle_ == nullptr && this->smallest_ == nullptr; };
              // image Field Functions 
              bool hasImage() const { return this->image_ != nullptr;};
              void deleteImage() { this->image_ = nullptr;};
              inline string getImage() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
              inline ImageDO& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


              // largest Field Functions 
              bool hasLargest() const { return this->largest_ != nullptr;};
              void deleteLargest() { this->largest_ = nullptr;};
              inline string getLargest() const { DARABONBA_PTR_GET_DEFAULT(largest_, "") };
              inline ImageDO& setLargest(string largest) { DARABONBA_PTR_SET_VALUE(largest_, largest) };


              // middle Field Functions 
              bool hasMiddle() const { return this->middle_ != nullptr;};
              void deleteMiddle() { this->middle_ = nullptr;};
              inline string getMiddle() const { DARABONBA_PTR_GET_DEFAULT(middle_, "") };
              inline ImageDO& setMiddle(string middle) { DARABONBA_PTR_SET_VALUE(middle_, middle) };


              // smallest Field Functions 
              bool hasSmallest() const { return this->smallest_ != nullptr;};
              void deleteSmallest() { this->smallest_ = nullptr;};
              inline string getSmallest() const { DARABONBA_PTR_GET_DEFAULT(smallest_, "") };
              inline ImageDO& setSmallest(string smallest) { DARABONBA_PTR_SET_VALUE(smallest_, smallest) };


            protected:
              shared_ptr<string> image_ {};
              shared_ptr<string> largest_ {};
              shared_ptr<string> middle_ {};
              shared_ptr<string> smallest_ {};
            };

            class Description : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Description& obj) { 
                DARABONBA_PTR_TO_JSON(desc, desc_);
                DARABONBA_PTR_TO_JSON(icon, icon_);
                DARABONBA_PTR_TO_JSON(image, image_);
                DARABONBA_PTR_TO_JSON(title, title_);
              };
              friend void from_json(const Darabonba::Json& j, Description& obj) { 
                DARABONBA_PTR_FROM_JSON(desc, desc_);
                DARABONBA_PTR_FROM_JSON(icon, icon_);
                DARABONBA_PTR_FROM_JSON(image, image_);
                DARABONBA_PTR_FROM_JSON(title, title_);
              };
              Description() = default ;
              Description(const Description &) = default ;
              Description(Description &&) = default ;
              Description(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~Description() = default ;
              Description& operator=(const Description &) = default ;
              Description& operator=(Description &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->desc_ == nullptr
        && this->icon_ == nullptr && this->image_ == nullptr && this->title_ == nullptr; };
              // desc Field Functions 
              bool hasDesc() const { return this->desc_ != nullptr;};
              void deleteDesc() { this->desc_ = nullptr;};
              inline string getDesc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
              inline Description& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


              // icon Field Functions 
              bool hasIcon() const { return this->icon_ != nullptr;};
              void deleteIcon() { this->icon_ = nullptr;};
              inline string getIcon() const { DARABONBA_PTR_GET_DEFAULT(icon_, "") };
              inline Description& setIcon(string icon) { DARABONBA_PTR_SET_VALUE(icon_, icon) };


              // image Field Functions 
              bool hasImage() const { return this->image_ != nullptr;};
              void deleteImage() { this->image_ = nullptr;};
              inline string getImage() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
              inline Description& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


              // title Field Functions 
              bool hasTitle() const { return this->title_ != nullptr;};
              void deleteTitle() { this->title_ = nullptr;};
              inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
              inline Description& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


            protected:
              shared_ptr<string> desc_ {};
              shared_ptr<string> icon_ {};
              shared_ptr<string> image_ {};
              shared_ptr<string> title_ {};
            };

            virtual bool empty() const override { return this->baggageDesc_ == nullptr
        && this->baggageSubContentType_ == nullptr && this->description_ == nullptr && this->imageDO_ == nullptr && this->isHighlight_ == nullptr && this->subTitle_ == nullptr; };
            // baggageDesc Field Functions 
            bool hasBaggageDesc() const { return this->baggageDesc_ != nullptr;};
            void deleteBaggageDesc() { this->baggageDesc_ = nullptr;};
            inline const vector<string> & getBaggageDesc() const { DARABONBA_PTR_GET_CONST(baggageDesc_, vector<string>) };
            inline vector<string> getBaggageDesc() { DARABONBA_PTR_GET(baggageDesc_, vector<string>) };
            inline BaggageSubContentVisualizes& setBaggageDesc(const vector<string> & baggageDesc) { DARABONBA_PTR_SET_VALUE(baggageDesc_, baggageDesc) };
            inline BaggageSubContentVisualizes& setBaggageDesc(vector<string> && baggageDesc) { DARABONBA_PTR_SET_RVALUE(baggageDesc_, baggageDesc) };


            // baggageSubContentType Field Functions 
            bool hasBaggageSubContentType() const { return this->baggageSubContentType_ != nullptr;};
            void deleteBaggageSubContentType() { this->baggageSubContentType_ = nullptr;};
            inline int32_t getBaggageSubContentType() const { DARABONBA_PTR_GET_DEFAULT(baggageSubContentType_, 0) };
            inline BaggageSubContentVisualizes& setBaggageSubContentType(int32_t baggageSubContentType) { DARABONBA_PTR_SET_VALUE(baggageSubContentType_, baggageSubContentType) };


            // description Field Functions 
            bool hasDescription() const { return this->description_ != nullptr;};
            void deleteDescription() { this->description_ = nullptr;};
            inline const BaggageSubContentVisualizes::Description & getDescription() const { DARABONBA_PTR_GET_CONST(description_, BaggageSubContentVisualizes::Description) };
            inline BaggageSubContentVisualizes::Description getDescription() { DARABONBA_PTR_GET(description_, BaggageSubContentVisualizes::Description) };
            inline BaggageSubContentVisualizes& setDescription(const BaggageSubContentVisualizes::Description & description) { DARABONBA_PTR_SET_VALUE(description_, description) };
            inline BaggageSubContentVisualizes& setDescription(BaggageSubContentVisualizes::Description && description) { DARABONBA_PTR_SET_RVALUE(description_, description) };


            // imageDO Field Functions 
            bool hasImageDO() const { return this->imageDO_ != nullptr;};
            void deleteImageDO() { this->imageDO_ = nullptr;};
            inline const BaggageSubContentVisualizes::ImageDO & getImageDO() const { DARABONBA_PTR_GET_CONST(imageDO_, BaggageSubContentVisualizes::ImageDO) };
            inline BaggageSubContentVisualizes::ImageDO getImageDO() { DARABONBA_PTR_GET(imageDO_, BaggageSubContentVisualizes::ImageDO) };
            inline BaggageSubContentVisualizes& setImageDO(const BaggageSubContentVisualizes::ImageDO & imageDO) { DARABONBA_PTR_SET_VALUE(imageDO_, imageDO) };
            inline BaggageSubContentVisualizes& setImageDO(BaggageSubContentVisualizes::ImageDO && imageDO) { DARABONBA_PTR_SET_RVALUE(imageDO_, imageDO) };


            // isHighlight Field Functions 
            bool hasIsHighlight() const { return this->isHighlight_ != nullptr;};
            void deleteIsHighlight() { this->isHighlight_ = nullptr;};
            inline bool getIsHighlight() const { DARABONBA_PTR_GET_DEFAULT(isHighlight_, false) };
            inline BaggageSubContentVisualizes& setIsHighlight(bool isHighlight) { DARABONBA_PTR_SET_VALUE(isHighlight_, isHighlight) };


            // subTitle Field Functions 
            bool hasSubTitle() const { return this->subTitle_ != nullptr;};
            void deleteSubTitle() { this->subTitle_ = nullptr;};
            inline string getSubTitle() const { DARABONBA_PTR_GET_DEFAULT(subTitle_, "") };
            inline BaggageSubContentVisualizes& setSubTitle(string subTitle) { DARABONBA_PTR_SET_VALUE(subTitle_, subTitle) };


          protected:
            // baggage_desc
            shared_ptr<vector<string>> baggageDesc_ {};
            shared_ptr<int32_t> baggageSubContentType_ {};
            shared_ptr<BaggageSubContentVisualizes::Description> description_ {};
            shared_ptr<BaggageSubContentVisualizes::ImageDO> imageDO_ {};
            shared_ptr<bool> isHighlight_ {};
            shared_ptr<string> subTitle_ {};
          };

          virtual bool empty() const override { return this->baggageSubContentVisualizes_ == nullptr
        && this->extraContentVisualizes_ == nullptr && this->isStruct_ == nullptr && this->ptc_ == nullptr && this->title_ == nullptr; };
          // baggageSubContentVisualizes Field Functions 
          bool hasBaggageSubContentVisualizes() const { return this->baggageSubContentVisualizes_ != nullptr;};
          void deleteBaggageSubContentVisualizes() { this->baggageSubContentVisualizes_ = nullptr;};
          inline const vector<BaggageSubItems::BaggageSubContentVisualizes> & getBaggageSubContentVisualizes() const { DARABONBA_PTR_GET_CONST(baggageSubContentVisualizes_, vector<BaggageSubItems::BaggageSubContentVisualizes>) };
          inline vector<BaggageSubItems::BaggageSubContentVisualizes> getBaggageSubContentVisualizes() { DARABONBA_PTR_GET(baggageSubContentVisualizes_, vector<BaggageSubItems::BaggageSubContentVisualizes>) };
          inline BaggageSubItems& setBaggageSubContentVisualizes(const vector<BaggageSubItems::BaggageSubContentVisualizes> & baggageSubContentVisualizes) { DARABONBA_PTR_SET_VALUE(baggageSubContentVisualizes_, baggageSubContentVisualizes) };
          inline BaggageSubItems& setBaggageSubContentVisualizes(vector<BaggageSubItems::BaggageSubContentVisualizes> && baggageSubContentVisualizes) { DARABONBA_PTR_SET_RVALUE(baggageSubContentVisualizes_, baggageSubContentVisualizes) };


          // extraContentVisualizes Field Functions 
          bool hasExtraContentVisualizes() const { return this->extraContentVisualizes_ != nullptr;};
          void deleteExtraContentVisualizes() { this->extraContentVisualizes_ = nullptr;};
          inline const vector<Darabonba::Json> & getExtraContentVisualizes() const { DARABONBA_PTR_GET_CONST(extraContentVisualizes_, vector<Darabonba::Json>) };
          inline vector<Darabonba::Json> getExtraContentVisualizes() { DARABONBA_PTR_GET(extraContentVisualizes_, vector<Darabonba::Json>) };
          inline BaggageSubItems& setExtraContentVisualizes(const vector<Darabonba::Json> & extraContentVisualizes) { DARABONBA_PTR_SET_VALUE(extraContentVisualizes_, extraContentVisualizes) };
          inline BaggageSubItems& setExtraContentVisualizes(vector<Darabonba::Json> && extraContentVisualizes) { DARABONBA_PTR_SET_RVALUE(extraContentVisualizes_, extraContentVisualizes) };


          // isStruct Field Functions 
          bool hasIsStruct() const { return this->isStruct_ != nullptr;};
          void deleteIsStruct() { this->isStruct_ = nullptr;};
          inline bool getIsStruct() const { DARABONBA_PTR_GET_DEFAULT(isStruct_, false) };
          inline BaggageSubItems& setIsStruct(bool isStruct) { DARABONBA_PTR_SET_VALUE(isStruct_, isStruct) };


          // ptc Field Functions 
          bool hasPtc() const { return this->ptc_ != nullptr;};
          void deletePtc() { this->ptc_ = nullptr;};
          inline string getPtc() const { DARABONBA_PTR_GET_DEFAULT(ptc_, "") };
          inline BaggageSubItems& setPtc(string ptc) { DARABONBA_PTR_SET_VALUE(ptc_, ptc) };


          // title Field Functions 
          bool hasTitle() const { return this->title_ != nullptr;};
          void deleteTitle() { this->title_ = nullptr;};
          inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
          inline BaggageSubItems& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


        protected:
          shared_ptr<vector<BaggageSubItems::BaggageSubContentVisualizes>> baggageSubContentVisualizes_ {};
          shared_ptr<vector<Darabonba::Json>> extraContentVisualizes_ {};
          shared_ptr<bool> isStruct_ {};
          shared_ptr<string> ptc_ {};
          shared_ptr<string> title_ {};
        };

        virtual bool empty() const override { return this->baggageSubItems_ == nullptr
        && this->index_ == nullptr && this->tableHead_ == nullptr && this->tips_ == nullptr && this->title_ == nullptr && this->type_ == nullptr; };
        // baggageSubItems Field Functions 
        bool hasBaggageSubItems() const { return this->baggageSubItems_ != nullptr;};
        void deleteBaggageSubItems() { this->baggageSubItems_ = nullptr;};
        inline const vector<BaggageRule::BaggageSubItems> & getBaggageSubItems() const { DARABONBA_PTR_GET_CONST(baggageSubItems_, vector<BaggageRule::BaggageSubItems>) };
        inline vector<BaggageRule::BaggageSubItems> getBaggageSubItems() { DARABONBA_PTR_GET(baggageSubItems_, vector<BaggageRule::BaggageSubItems>) };
        inline BaggageRule& setBaggageSubItems(const vector<BaggageRule::BaggageSubItems> & baggageSubItems) { DARABONBA_PTR_SET_VALUE(baggageSubItems_, baggageSubItems) };
        inline BaggageRule& setBaggageSubItems(vector<BaggageRule::BaggageSubItems> && baggageSubItems) { DARABONBA_PTR_SET_RVALUE(baggageSubItems_, baggageSubItems) };


        // index Field Functions 
        bool hasIndex() const { return this->index_ != nullptr;};
        void deleteIndex() { this->index_ = nullptr;};
        inline int32_t getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
        inline BaggageRule& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


        // tableHead Field Functions 
        bool hasTableHead() const { return this->tableHead_ != nullptr;};
        void deleteTableHead() { this->tableHead_ = nullptr;};
        inline string getTableHead() const { DARABONBA_PTR_GET_DEFAULT(tableHead_, "") };
        inline BaggageRule& setTableHead(string tableHead) { DARABONBA_PTR_SET_VALUE(tableHead_, tableHead) };


        // tips Field Functions 
        bool hasTips() const { return this->tips_ != nullptr;};
        void deleteTips() { this->tips_ = nullptr;};
        inline const BaggageRule::Tips & getTips() const { DARABONBA_PTR_GET_CONST(tips_, BaggageRule::Tips) };
        inline BaggageRule::Tips getTips() { DARABONBA_PTR_GET(tips_, BaggageRule::Tips) };
        inline BaggageRule& setTips(const BaggageRule::Tips & tips) { DARABONBA_PTR_SET_VALUE(tips_, tips) };
        inline BaggageRule& setTips(BaggageRule::Tips && tips) { DARABONBA_PTR_SET_RVALUE(tips_, tips) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline BaggageRule& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
        inline BaggageRule& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<vector<BaggageRule::BaggageSubItems>> baggageSubItems_ {};
        shared_ptr<int32_t> index_ {};
        shared_ptr<string> tableHead_ {};
        shared_ptr<BaggageRule::Tips> tips_ {};
        shared_ptr<string> title_ {};
        shared_ptr<int32_t> type_ {};
      };

      virtual bool empty() const override { return this->baggageRule_ == nullptr
        && this->changeRule_ == nullptr && this->refundRule_ == nullptr && this->sellPrice_ == nullptr && this->sellPriceList_ == nullptr && this->tripType_ == nullptr; };
      // baggageRule Field Functions 
      bool hasBaggageRule() const { return this->baggageRule_ != nullptr;};
      void deleteBaggageRule() { this->baggageRule_ = nullptr;};
      inline const vector<Module::BaggageRule> & getBaggageRule() const { DARABONBA_PTR_GET_CONST(baggageRule_, vector<Module::BaggageRule>) };
      inline vector<Module::BaggageRule> getBaggageRule() { DARABONBA_PTR_GET(baggageRule_, vector<Module::BaggageRule>) };
      inline Module& setBaggageRule(const vector<Module::BaggageRule> & baggageRule) { DARABONBA_PTR_SET_VALUE(baggageRule_, baggageRule) };
      inline Module& setBaggageRule(vector<Module::BaggageRule> && baggageRule) { DARABONBA_PTR_SET_RVALUE(baggageRule_, baggageRule) };


      // changeRule Field Functions 
      bool hasChangeRule() const { return this->changeRule_ != nullptr;};
      void deleteChangeRule() { this->changeRule_ = nullptr;};
      inline const vector<Module::ChangeRule> & getChangeRule() const { DARABONBA_PTR_GET_CONST(changeRule_, vector<Module::ChangeRule>) };
      inline vector<Module::ChangeRule> getChangeRule() { DARABONBA_PTR_GET(changeRule_, vector<Module::ChangeRule>) };
      inline Module& setChangeRule(const vector<Module::ChangeRule> & changeRule) { DARABONBA_PTR_SET_VALUE(changeRule_, changeRule) };
      inline Module& setChangeRule(vector<Module::ChangeRule> && changeRule) { DARABONBA_PTR_SET_RVALUE(changeRule_, changeRule) };


      // refundRule Field Functions 
      bool hasRefundRule() const { return this->refundRule_ != nullptr;};
      void deleteRefundRule() { this->refundRule_ = nullptr;};
      inline const vector<Module::RefundRule> & getRefundRule() const { DARABONBA_PTR_GET_CONST(refundRule_, vector<Module::RefundRule>) };
      inline vector<Module::RefundRule> getRefundRule() { DARABONBA_PTR_GET(refundRule_, vector<Module::RefundRule>) };
      inline Module& setRefundRule(const vector<Module::RefundRule> & refundRule) { DARABONBA_PTR_SET_VALUE(refundRule_, refundRule) };
      inline Module& setRefundRule(vector<Module::RefundRule> && refundRule) { DARABONBA_PTR_SET_RVALUE(refundRule_, refundRule) };


      // sellPrice Field Functions 
      bool hasSellPrice() const { return this->sellPrice_ != nullptr;};
      void deleteSellPrice() { this->sellPrice_ = nullptr;};
      inline int32_t getSellPrice() const { DARABONBA_PTR_GET_DEFAULT(sellPrice_, 0) };
      inline Module& setSellPrice(int32_t sellPrice) { DARABONBA_PTR_SET_VALUE(sellPrice_, sellPrice) };


      // sellPriceList Field Functions 
      bool hasSellPriceList() const { return this->sellPriceList_ != nullptr;};
      void deleteSellPriceList() { this->sellPriceList_ = nullptr;};
      inline const vector<int32_t> & getSellPriceList() const { DARABONBA_PTR_GET_CONST(sellPriceList_, vector<int32_t>) };
      inline vector<int32_t> getSellPriceList() { DARABONBA_PTR_GET(sellPriceList_, vector<int32_t>) };
      inline Module& setSellPriceList(const vector<int32_t> & sellPriceList) { DARABONBA_PTR_SET_VALUE(sellPriceList_, sellPriceList) };
      inline Module& setSellPriceList(vector<int32_t> && sellPriceList) { DARABONBA_PTR_SET_RVALUE(sellPriceList_, sellPriceList) };


      // tripType Field Functions 
      bool hasTripType() const { return this->tripType_ != nullptr;};
      void deleteTripType() { this->tripType_ = nullptr;};
      inline int32_t getTripType() const { DARABONBA_PTR_GET_DEFAULT(tripType_, 0) };
      inline Module& setTripType(int32_t tripType) { DARABONBA_PTR_SET_VALUE(tripType_, tripType) };


    protected:
      shared_ptr<vector<Module::BaggageRule>> baggageRule_ {};
      shared_ptr<vector<Module::ChangeRule>> changeRule_ {};
      shared_ptr<vector<Module::RefundRule>> refundRule_ {};
      shared_ptr<int32_t> sellPrice_ {};
      shared_ptr<vector<int32_t>> sellPriceList_ {};
      shared_ptr<int32_t> tripType_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline FlightOtaItemDetailResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline FlightOtaItemDetailResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const FlightOtaItemDetailResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, FlightOtaItemDetailResponseBody::Module) };
    inline FlightOtaItemDetailResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, FlightOtaItemDetailResponseBody::Module) };
    inline FlightOtaItemDetailResponseBody& setModule(const FlightOtaItemDetailResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline FlightOtaItemDetailResponseBody& setModule(FlightOtaItemDetailResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline FlightOtaItemDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline FlightOtaItemDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline FlightOtaItemDetailResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    // module
    shared_ptr<FlightOtaItemDetailResponseBody::Module> module_ {};
    // requestId
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    // traceId
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
