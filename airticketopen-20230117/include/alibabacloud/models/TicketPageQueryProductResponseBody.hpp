// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TICKETPAGEQUERYPRODUCTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_TICKETPAGEQUERYPRODUCTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class TicketPageQueryProductResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TicketPageQueryProductResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, TicketPageQueryProductResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    TicketPageQueryProductResponseBody() = default ;
    TicketPageQueryProductResponseBody(const TicketPageQueryProductResponseBody &) = default ;
    TicketPageQueryProductResponseBody(TicketPageQueryProductResponseBody &&) = default ;
    TicketPageQueryProductResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TicketPageQueryProductResponseBody() = default ;
    TicketPageQueryProductResponseBody& operator=(const TicketPageQueryProductResponseBody &) = default ;
    TicketPageQueryProductResponseBody& operator=(TicketPageQueryProductResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Products, products_);
        DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Products, products_);
        DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
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
      class Products : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Products& obj) { 
          DARABONBA_PTR_TO_JSON(BookingType, bookingType_);
          DARABONBA_PTR_TO_JSON(BuyRule, buyRule_);
          DARABONBA_PTR_TO_JSON(CostIncludeRemark, costIncludeRemark_);
          DARABONBA_PTR_TO_JSON(DeliverGuaranteeMinutes, deliverGuaranteeMinutes_);
          DARABONBA_PTR_TO_JSON(Images, images_);
          DARABONBA_PTR_TO_JSON(InvoiceIssuerType, invoiceIssuerType_);
          DARABONBA_PTR_TO_JSON(PaymentLimitMinutes, paymentLimitMinutes_);
          DARABONBA_PTR_TO_JSON(ProductId, productId_);
          DARABONBA_PTR_TO_JSON(ProductName, productName_);
          DARABONBA_PTR_TO_JSON(RefundRule, refundRule_);
          DARABONBA_PTR_TO_JSON(Region, region_);
          DARABONBA_PTR_TO_JSON(ScenicId, scenicId_);
          DARABONBA_PTR_TO_JSON(Session, session_);
          DARABONBA_PTR_TO_JSON(SettlePriceCalculateType, settlePriceCalculateType_);
          DARABONBA_PTR_TO_JSON(Spu, spu_);
          DARABONBA_PTR_TO_JSON(SupplierName, supplierName_);
          DARABONBA_PTR_TO_JSON(TicketKind, ticketKind_);
          DARABONBA_PTR_TO_JSON(UseRule, useRule_);
        };
        friend void from_json(const Darabonba::Json& j, Products& obj) { 
          DARABONBA_PTR_FROM_JSON(BookingType, bookingType_);
          DARABONBA_PTR_FROM_JSON(BuyRule, buyRule_);
          DARABONBA_PTR_FROM_JSON(CostIncludeRemark, costIncludeRemark_);
          DARABONBA_PTR_FROM_JSON(DeliverGuaranteeMinutes, deliverGuaranteeMinutes_);
          DARABONBA_PTR_FROM_JSON(Images, images_);
          DARABONBA_PTR_FROM_JSON(InvoiceIssuerType, invoiceIssuerType_);
          DARABONBA_PTR_FROM_JSON(PaymentLimitMinutes, paymentLimitMinutes_);
          DARABONBA_PTR_FROM_JSON(ProductId, productId_);
          DARABONBA_PTR_FROM_JSON(ProductName, productName_);
          DARABONBA_PTR_FROM_JSON(RefundRule, refundRule_);
          DARABONBA_PTR_FROM_JSON(Region, region_);
          DARABONBA_PTR_FROM_JSON(ScenicId, scenicId_);
          DARABONBA_PTR_FROM_JSON(Session, session_);
          DARABONBA_PTR_FROM_JSON(SettlePriceCalculateType, settlePriceCalculateType_);
          DARABONBA_PTR_FROM_JSON(Spu, spu_);
          DARABONBA_PTR_FROM_JSON(SupplierName, supplierName_);
          DARABONBA_PTR_FROM_JSON(TicketKind, ticketKind_);
          DARABONBA_PTR_FROM_JSON(UseRule, useRule_);
        };
        Products() = default ;
        Products(const Products &) = default ;
        Products(Products &&) = default ;
        Products(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Products() = default ;
        Products& operator=(const Products &) = default ;
        Products& operator=(Products &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class UseRule : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const UseRule& obj) { 
            DARABONBA_PTR_TO_JSON(EffectTimePointRule, effectTimePointRule_);
            DARABONBA_PTR_TO_JSON(EntryAddress, entryAddress_);
            DARABONBA_PTR_TO_JSON(EntryRemark, entryRemark_);
            DARABONBA_PTR_TO_JSON(EntryTimePeriods, entryTimePeriods_);
            DARABONBA_PTR_TO_JSON(EntryType, entryType_);
            DARABONBA_PTR_TO_JSON(EntryWithVoucherRule, entryWithVoucherRule_);
            DARABONBA_PTR_TO_JSON(NeedAssemble, needAssemble_);
            DARABONBA_PTR_TO_JSON(NeedPrebook, needPrebook_);
            DARABONBA_PTR_TO_JSON(OtherNote, otherNote_);
            DARABONBA_PTR_TO_JSON(PickupsRule, pickupsRule_);
            DARABONBA_PTR_TO_JSON(ValidityPeriodRule, validityPeriodRule_);
          };
          friend void from_json(const Darabonba::Json& j, UseRule& obj) { 
            DARABONBA_PTR_FROM_JSON(EffectTimePointRule, effectTimePointRule_);
            DARABONBA_PTR_FROM_JSON(EntryAddress, entryAddress_);
            DARABONBA_PTR_FROM_JSON(EntryRemark, entryRemark_);
            DARABONBA_PTR_FROM_JSON(EntryTimePeriods, entryTimePeriods_);
            DARABONBA_PTR_FROM_JSON(EntryType, entryType_);
            DARABONBA_PTR_FROM_JSON(EntryWithVoucherRule, entryWithVoucherRule_);
            DARABONBA_PTR_FROM_JSON(NeedAssemble, needAssemble_);
            DARABONBA_PTR_FROM_JSON(NeedPrebook, needPrebook_);
            DARABONBA_PTR_FROM_JSON(OtherNote, otherNote_);
            DARABONBA_PTR_FROM_JSON(PickupsRule, pickupsRule_);
            DARABONBA_PTR_FROM_JSON(ValidityPeriodRule, validityPeriodRule_);
          };
          UseRule() = default ;
          UseRule(const UseRule &) = default ;
          UseRule(UseRule &&) = default ;
          UseRule(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~UseRule() = default ;
          UseRule& operator=(const UseRule &) = default ;
          UseRule& operator=(UseRule &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ValidityPeriodRule : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ValidityPeriodRule& obj) { 
              DARABONBA_PTR_TO_JSON(AvailableWeeks, availableWeeks_);
              DARABONBA_PTR_TO_JSON(From, from_);
              DARABONBA_PTR_TO_JSON(To, to_);
              DARABONBA_PTR_TO_JSON(UnavailableDates, unavailableDates_);
            };
            friend void from_json(const Darabonba::Json& j, ValidityPeriodRule& obj) { 
              DARABONBA_PTR_FROM_JSON(AvailableWeeks, availableWeeks_);
              DARABONBA_PTR_FROM_JSON(From, from_);
              DARABONBA_PTR_FROM_JSON(To, to_);
              DARABONBA_PTR_FROM_JSON(UnavailableDates, unavailableDates_);
            };
            ValidityPeriodRule() = default ;
            ValidityPeriodRule(const ValidityPeriodRule &) = default ;
            ValidityPeriodRule(ValidityPeriodRule &&) = default ;
            ValidityPeriodRule(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ValidityPeriodRule() = default ;
            ValidityPeriodRule& operator=(const ValidityPeriodRule &) = default ;
            ValidityPeriodRule& operator=(ValidityPeriodRule &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class To : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const To& obj) { 
                DARABONBA_PTR_TO_JSON(Anchor, anchor_);
                DARABONBA_PTR_TO_JSON(FixedTime, fixedTime_);
                DARABONBA_PTR_TO_JSON(OffsetDayOfTime, offsetDayOfTime_);
                DARABONBA_PTR_TO_JSON(OffsetUnit, offsetUnit_);
                DARABONBA_PTR_TO_JSON(OffsetValue, offsetValue_);
              };
              friend void from_json(const Darabonba::Json& j, To& obj) { 
                DARABONBA_PTR_FROM_JSON(Anchor, anchor_);
                DARABONBA_PTR_FROM_JSON(FixedTime, fixedTime_);
                DARABONBA_PTR_FROM_JSON(OffsetDayOfTime, offsetDayOfTime_);
                DARABONBA_PTR_FROM_JSON(OffsetUnit, offsetUnit_);
                DARABONBA_PTR_FROM_JSON(OffsetValue, offsetValue_);
              };
              To() = default ;
              To(const To &) = default ;
              To(To &&) = default ;
              To(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~To() = default ;
              To& operator=(const To &) = default ;
              To& operator=(To &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->anchor_ == nullptr
        && this->fixedTime_ == nullptr && this->offsetDayOfTime_ == nullptr && this->offsetUnit_ == nullptr && this->offsetValue_ == nullptr; };
              // anchor Field Functions 
              bool hasAnchor() const { return this->anchor_ != nullptr;};
              void deleteAnchor() { this->anchor_ = nullptr;};
              inline int32_t getAnchor() const { DARABONBA_PTR_GET_DEFAULT(anchor_, 0) };
              inline To& setAnchor(int32_t anchor) { DARABONBA_PTR_SET_VALUE(anchor_, anchor) };


              // fixedTime Field Functions 
              bool hasFixedTime() const { return this->fixedTime_ != nullptr;};
              void deleteFixedTime() { this->fixedTime_ = nullptr;};
              inline string getFixedTime() const { DARABONBA_PTR_GET_DEFAULT(fixedTime_, "") };
              inline To& setFixedTime(string fixedTime) { DARABONBA_PTR_SET_VALUE(fixedTime_, fixedTime) };


              // offsetDayOfTime Field Functions 
              bool hasOffsetDayOfTime() const { return this->offsetDayOfTime_ != nullptr;};
              void deleteOffsetDayOfTime() { this->offsetDayOfTime_ = nullptr;};
              inline string getOffsetDayOfTime() const { DARABONBA_PTR_GET_DEFAULT(offsetDayOfTime_, "") };
              inline To& setOffsetDayOfTime(string offsetDayOfTime) { DARABONBA_PTR_SET_VALUE(offsetDayOfTime_, offsetDayOfTime) };


              // offsetUnit Field Functions 
              bool hasOffsetUnit() const { return this->offsetUnit_ != nullptr;};
              void deleteOffsetUnit() { this->offsetUnit_ = nullptr;};
              inline int32_t getOffsetUnit() const { DARABONBA_PTR_GET_DEFAULT(offsetUnit_, 0) };
              inline To& setOffsetUnit(int32_t offsetUnit) { DARABONBA_PTR_SET_VALUE(offsetUnit_, offsetUnit) };


              // offsetValue Field Functions 
              bool hasOffsetValue() const { return this->offsetValue_ != nullptr;};
              void deleteOffsetValue() { this->offsetValue_ = nullptr;};
              inline int32_t getOffsetValue() const { DARABONBA_PTR_GET_DEFAULT(offsetValue_, 0) };
              inline To& setOffsetValue(int32_t offsetValue) { DARABONBA_PTR_SET_VALUE(offsetValue_, offsetValue) };


            protected:
              shared_ptr<int32_t> anchor_ {};
              shared_ptr<string> fixedTime_ {};
              shared_ptr<string> offsetDayOfTime_ {};
              shared_ptr<int32_t> offsetUnit_ {};
              shared_ptr<int32_t> offsetValue_ {};
            };

            class From : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const From& obj) { 
                DARABONBA_PTR_TO_JSON(Anchor, anchor_);
                DARABONBA_PTR_TO_JSON(FixedTime, fixedTime_);
                DARABONBA_PTR_TO_JSON(OffsetDayOfTime, offsetDayOfTime_);
                DARABONBA_PTR_TO_JSON(OffsetUnit, offsetUnit_);
                DARABONBA_PTR_TO_JSON(OffsetValue, offsetValue_);
              };
              friend void from_json(const Darabonba::Json& j, From& obj) { 
                DARABONBA_PTR_FROM_JSON(Anchor, anchor_);
                DARABONBA_PTR_FROM_JSON(FixedTime, fixedTime_);
                DARABONBA_PTR_FROM_JSON(OffsetDayOfTime, offsetDayOfTime_);
                DARABONBA_PTR_FROM_JSON(OffsetUnit, offsetUnit_);
                DARABONBA_PTR_FROM_JSON(OffsetValue, offsetValue_);
              };
              From() = default ;
              From(const From &) = default ;
              From(From &&) = default ;
              From(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~From() = default ;
              From& operator=(const From &) = default ;
              From& operator=(From &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->anchor_ == nullptr
        && this->fixedTime_ == nullptr && this->offsetDayOfTime_ == nullptr && this->offsetUnit_ == nullptr && this->offsetValue_ == nullptr; };
              // anchor Field Functions 
              bool hasAnchor() const { return this->anchor_ != nullptr;};
              void deleteAnchor() { this->anchor_ = nullptr;};
              inline int32_t getAnchor() const { DARABONBA_PTR_GET_DEFAULT(anchor_, 0) };
              inline From& setAnchor(int32_t anchor) { DARABONBA_PTR_SET_VALUE(anchor_, anchor) };


              // fixedTime Field Functions 
              bool hasFixedTime() const { return this->fixedTime_ != nullptr;};
              void deleteFixedTime() { this->fixedTime_ = nullptr;};
              inline string getFixedTime() const { DARABONBA_PTR_GET_DEFAULT(fixedTime_, "") };
              inline From& setFixedTime(string fixedTime) { DARABONBA_PTR_SET_VALUE(fixedTime_, fixedTime) };


              // offsetDayOfTime Field Functions 
              bool hasOffsetDayOfTime() const { return this->offsetDayOfTime_ != nullptr;};
              void deleteOffsetDayOfTime() { this->offsetDayOfTime_ = nullptr;};
              inline string getOffsetDayOfTime() const { DARABONBA_PTR_GET_DEFAULT(offsetDayOfTime_, "") };
              inline From& setOffsetDayOfTime(string offsetDayOfTime) { DARABONBA_PTR_SET_VALUE(offsetDayOfTime_, offsetDayOfTime) };


              // offsetUnit Field Functions 
              bool hasOffsetUnit() const { return this->offsetUnit_ != nullptr;};
              void deleteOffsetUnit() { this->offsetUnit_ = nullptr;};
              inline int32_t getOffsetUnit() const { DARABONBA_PTR_GET_DEFAULT(offsetUnit_, 0) };
              inline From& setOffsetUnit(int32_t offsetUnit) { DARABONBA_PTR_SET_VALUE(offsetUnit_, offsetUnit) };


              // offsetValue Field Functions 
              bool hasOffsetValue() const { return this->offsetValue_ != nullptr;};
              void deleteOffsetValue() { this->offsetValue_ = nullptr;};
              inline int32_t getOffsetValue() const { DARABONBA_PTR_GET_DEFAULT(offsetValue_, 0) };
              inline From& setOffsetValue(int32_t offsetValue) { DARABONBA_PTR_SET_VALUE(offsetValue_, offsetValue) };


            protected:
              shared_ptr<int32_t> anchor_ {};
              shared_ptr<string> fixedTime_ {};
              shared_ptr<string> offsetDayOfTime_ {};
              shared_ptr<int32_t> offsetUnit_ {};
              shared_ptr<int32_t> offsetValue_ {};
            };

            virtual bool empty() const override { return this->availableWeeks_ == nullptr
        && this->from_ == nullptr && this->to_ == nullptr && this->unavailableDates_ == nullptr; };
            // availableWeeks Field Functions 
            bool hasAvailableWeeks() const { return this->availableWeeks_ != nullptr;};
            void deleteAvailableWeeks() { this->availableWeeks_ = nullptr;};
            inline const vector<int32_t> & getAvailableWeeks() const { DARABONBA_PTR_GET_CONST(availableWeeks_, vector<int32_t>) };
            inline vector<int32_t> getAvailableWeeks() { DARABONBA_PTR_GET(availableWeeks_, vector<int32_t>) };
            inline ValidityPeriodRule& setAvailableWeeks(const vector<int32_t> & availableWeeks) { DARABONBA_PTR_SET_VALUE(availableWeeks_, availableWeeks) };
            inline ValidityPeriodRule& setAvailableWeeks(vector<int32_t> && availableWeeks) { DARABONBA_PTR_SET_RVALUE(availableWeeks_, availableWeeks) };


            // from Field Functions 
            bool hasFrom() const { return this->from_ != nullptr;};
            void deleteFrom() { this->from_ = nullptr;};
            inline const ValidityPeriodRule::From & getFrom() const { DARABONBA_PTR_GET_CONST(from_, ValidityPeriodRule::From) };
            inline ValidityPeriodRule::From getFrom() { DARABONBA_PTR_GET(from_, ValidityPeriodRule::From) };
            inline ValidityPeriodRule& setFrom(const ValidityPeriodRule::From & from) { DARABONBA_PTR_SET_VALUE(from_, from) };
            inline ValidityPeriodRule& setFrom(ValidityPeriodRule::From && from) { DARABONBA_PTR_SET_RVALUE(from_, from) };


            // to Field Functions 
            bool hasTo() const { return this->to_ != nullptr;};
            void deleteTo() { this->to_ = nullptr;};
            inline const ValidityPeriodRule::To & getTo() const { DARABONBA_PTR_GET_CONST(to_, ValidityPeriodRule::To) };
            inline ValidityPeriodRule::To getTo() { DARABONBA_PTR_GET(to_, ValidityPeriodRule::To) };
            inline ValidityPeriodRule& setTo(const ValidityPeriodRule::To & to) { DARABONBA_PTR_SET_VALUE(to_, to) };
            inline ValidityPeriodRule& setTo(ValidityPeriodRule::To && to) { DARABONBA_PTR_SET_RVALUE(to_, to) };


            // unavailableDates Field Functions 
            bool hasUnavailableDates() const { return this->unavailableDates_ != nullptr;};
            void deleteUnavailableDates() { this->unavailableDates_ = nullptr;};
            inline const vector<string> & getUnavailableDates() const { DARABONBA_PTR_GET_CONST(unavailableDates_, vector<string>) };
            inline vector<string> getUnavailableDates() { DARABONBA_PTR_GET(unavailableDates_, vector<string>) };
            inline ValidityPeriodRule& setUnavailableDates(const vector<string> & unavailableDates) { DARABONBA_PTR_SET_VALUE(unavailableDates_, unavailableDates) };
            inline ValidityPeriodRule& setUnavailableDates(vector<string> && unavailableDates) { DARABONBA_PTR_SET_RVALUE(unavailableDates_, unavailableDates) };


          protected:
            shared_ptr<vector<int32_t>> availableWeeks_ {};
            shared_ptr<ValidityPeriodRule::From> from_ {};
            shared_ptr<ValidityPeriodRule::To> to_ {};
            shared_ptr<vector<string>> unavailableDates_ {};
          };

          class PickupsRule : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const PickupsRule& obj) { 
              DARABONBA_PTR_TO_JSON(PickupsAddress, pickupsAddress_);
              DARABONBA_PTR_TO_JSON(VoucherRemark, voucherRemark_);
              DARABONBA_PTR_TO_JSON(VoucherTypes, voucherTypes_);
            };
            friend void from_json(const Darabonba::Json& j, PickupsRule& obj) { 
              DARABONBA_PTR_FROM_JSON(PickupsAddress, pickupsAddress_);
              DARABONBA_PTR_FROM_JSON(VoucherRemark, voucherRemark_);
              DARABONBA_PTR_FROM_JSON(VoucherTypes, voucherTypes_);
            };
            PickupsRule() = default ;
            PickupsRule(const PickupsRule &) = default ;
            PickupsRule(PickupsRule &&) = default ;
            PickupsRule(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~PickupsRule() = default ;
            PickupsRule& operator=(const PickupsRule &) = default ;
            PickupsRule& operator=(PickupsRule &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->pickupsAddress_ == nullptr
        && this->voucherRemark_ == nullptr && this->voucherTypes_ == nullptr; };
            // pickupsAddress Field Functions 
            bool hasPickupsAddress() const { return this->pickupsAddress_ != nullptr;};
            void deletePickupsAddress() { this->pickupsAddress_ = nullptr;};
            inline string getPickupsAddress() const { DARABONBA_PTR_GET_DEFAULT(pickupsAddress_, "") };
            inline PickupsRule& setPickupsAddress(string pickupsAddress) { DARABONBA_PTR_SET_VALUE(pickupsAddress_, pickupsAddress) };


            // voucherRemark Field Functions 
            bool hasVoucherRemark() const { return this->voucherRemark_ != nullptr;};
            void deleteVoucherRemark() { this->voucherRemark_ = nullptr;};
            inline string getVoucherRemark() const { DARABONBA_PTR_GET_DEFAULT(voucherRemark_, "") };
            inline PickupsRule& setVoucherRemark(string voucherRemark) { DARABONBA_PTR_SET_VALUE(voucherRemark_, voucherRemark) };


            // voucherTypes Field Functions 
            bool hasVoucherTypes() const { return this->voucherTypes_ != nullptr;};
            void deleteVoucherTypes() { this->voucherTypes_ = nullptr;};
            inline const vector<int32_t> & getVoucherTypes() const { DARABONBA_PTR_GET_CONST(voucherTypes_, vector<int32_t>) };
            inline vector<int32_t> getVoucherTypes() { DARABONBA_PTR_GET(voucherTypes_, vector<int32_t>) };
            inline PickupsRule& setVoucherTypes(const vector<int32_t> & voucherTypes) { DARABONBA_PTR_SET_VALUE(voucherTypes_, voucherTypes) };
            inline PickupsRule& setVoucherTypes(vector<int32_t> && voucherTypes) { DARABONBA_PTR_SET_RVALUE(voucherTypes_, voucherTypes) };


          protected:
            shared_ptr<string> pickupsAddress_ {};
            shared_ptr<string> voucherRemark_ {};
            shared_ptr<vector<int32_t>> voucherTypes_ {};
          };

          class EntryWithVoucherRule : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const EntryWithVoucherRule& obj) { 
              DARABONBA_PTR_TO_JSON(VoucherRemark, voucherRemark_);
              DARABONBA_PTR_TO_JSON(VoucherTypes, voucherTypes_);
            };
            friend void from_json(const Darabonba::Json& j, EntryWithVoucherRule& obj) { 
              DARABONBA_PTR_FROM_JSON(VoucherRemark, voucherRemark_);
              DARABONBA_PTR_FROM_JSON(VoucherTypes, voucherTypes_);
            };
            EntryWithVoucherRule() = default ;
            EntryWithVoucherRule(const EntryWithVoucherRule &) = default ;
            EntryWithVoucherRule(EntryWithVoucherRule &&) = default ;
            EntryWithVoucherRule(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~EntryWithVoucherRule() = default ;
            EntryWithVoucherRule& operator=(const EntryWithVoucherRule &) = default ;
            EntryWithVoucherRule& operator=(EntryWithVoucherRule &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->voucherRemark_ == nullptr
        && this->voucherTypes_ == nullptr; };
            // voucherRemark Field Functions 
            bool hasVoucherRemark() const { return this->voucherRemark_ != nullptr;};
            void deleteVoucherRemark() { this->voucherRemark_ = nullptr;};
            inline string getVoucherRemark() const { DARABONBA_PTR_GET_DEFAULT(voucherRemark_, "") };
            inline EntryWithVoucherRule& setVoucherRemark(string voucherRemark) { DARABONBA_PTR_SET_VALUE(voucherRemark_, voucherRemark) };


            // voucherTypes Field Functions 
            bool hasVoucherTypes() const { return this->voucherTypes_ != nullptr;};
            void deleteVoucherTypes() { this->voucherTypes_ = nullptr;};
            inline const vector<int32_t> & getVoucherTypes() const { DARABONBA_PTR_GET_CONST(voucherTypes_, vector<int32_t>) };
            inline vector<int32_t> getVoucherTypes() { DARABONBA_PTR_GET(voucherTypes_, vector<int32_t>) };
            inline EntryWithVoucherRule& setVoucherTypes(const vector<int32_t> & voucherTypes) { DARABONBA_PTR_SET_VALUE(voucherTypes_, voucherTypes) };
            inline EntryWithVoucherRule& setVoucherTypes(vector<int32_t> && voucherTypes) { DARABONBA_PTR_SET_RVALUE(voucherTypes_, voucherTypes) };


          protected:
            shared_ptr<string> voucherRemark_ {};
            shared_ptr<vector<int32_t>> voucherTypes_ {};
          };

          class EntryTimePeriods : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const EntryTimePeriods& obj) { 
              DARABONBA_PTR_TO_JSON(BeginTime, beginTime_);
              DARABONBA_PTR_TO_JSON(EndTime, endTime_);
            };
            friend void from_json(const Darabonba::Json& j, EntryTimePeriods& obj) { 
              DARABONBA_PTR_FROM_JSON(BeginTime, beginTime_);
              DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
            };
            EntryTimePeriods() = default ;
            EntryTimePeriods(const EntryTimePeriods &) = default ;
            EntryTimePeriods(EntryTimePeriods &&) = default ;
            EntryTimePeriods(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~EntryTimePeriods() = default ;
            EntryTimePeriods& operator=(const EntryTimePeriods &) = default ;
            EntryTimePeriods& operator=(EntryTimePeriods &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->beginTime_ == nullptr
        && this->endTime_ == nullptr; };
            // beginTime Field Functions 
            bool hasBeginTime() const { return this->beginTime_ != nullptr;};
            void deleteBeginTime() { this->beginTime_ = nullptr;};
            inline string getBeginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, "") };
            inline EntryTimePeriods& setBeginTime(string beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


            // endTime Field Functions 
            bool hasEndTime() const { return this->endTime_ != nullptr;};
            void deleteEndTime() { this->endTime_ = nullptr;};
            inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
            inline EntryTimePeriods& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


          protected:
            shared_ptr<string> beginTime_ {};
            shared_ptr<string> endTime_ {};
          };

          class EffectTimePointRule : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const EffectTimePointRule& obj) { 
              DARABONBA_PTR_TO_JSON(Anchor, anchor_);
              DARABONBA_PTR_TO_JSON(FixedTime, fixedTime_);
              DARABONBA_PTR_TO_JSON(OffsetDayOfTime, offsetDayOfTime_);
              DARABONBA_PTR_TO_JSON(OffsetUnit, offsetUnit_);
              DARABONBA_PTR_TO_JSON(OffsetValue, offsetValue_);
            };
            friend void from_json(const Darabonba::Json& j, EffectTimePointRule& obj) { 
              DARABONBA_PTR_FROM_JSON(Anchor, anchor_);
              DARABONBA_PTR_FROM_JSON(FixedTime, fixedTime_);
              DARABONBA_PTR_FROM_JSON(OffsetDayOfTime, offsetDayOfTime_);
              DARABONBA_PTR_FROM_JSON(OffsetUnit, offsetUnit_);
              DARABONBA_PTR_FROM_JSON(OffsetValue, offsetValue_);
            };
            EffectTimePointRule() = default ;
            EffectTimePointRule(const EffectTimePointRule &) = default ;
            EffectTimePointRule(EffectTimePointRule &&) = default ;
            EffectTimePointRule(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~EffectTimePointRule() = default ;
            EffectTimePointRule& operator=(const EffectTimePointRule &) = default ;
            EffectTimePointRule& operator=(EffectTimePointRule &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->anchor_ == nullptr
        && this->fixedTime_ == nullptr && this->offsetDayOfTime_ == nullptr && this->offsetUnit_ == nullptr && this->offsetValue_ == nullptr; };
            // anchor Field Functions 
            bool hasAnchor() const { return this->anchor_ != nullptr;};
            void deleteAnchor() { this->anchor_ = nullptr;};
            inline int32_t getAnchor() const { DARABONBA_PTR_GET_DEFAULT(anchor_, 0) };
            inline EffectTimePointRule& setAnchor(int32_t anchor) { DARABONBA_PTR_SET_VALUE(anchor_, anchor) };


            // fixedTime Field Functions 
            bool hasFixedTime() const { return this->fixedTime_ != nullptr;};
            void deleteFixedTime() { this->fixedTime_ = nullptr;};
            inline string getFixedTime() const { DARABONBA_PTR_GET_DEFAULT(fixedTime_, "") };
            inline EffectTimePointRule& setFixedTime(string fixedTime) { DARABONBA_PTR_SET_VALUE(fixedTime_, fixedTime) };


            // offsetDayOfTime Field Functions 
            bool hasOffsetDayOfTime() const { return this->offsetDayOfTime_ != nullptr;};
            void deleteOffsetDayOfTime() { this->offsetDayOfTime_ = nullptr;};
            inline string getOffsetDayOfTime() const { DARABONBA_PTR_GET_DEFAULT(offsetDayOfTime_, "") };
            inline EffectTimePointRule& setOffsetDayOfTime(string offsetDayOfTime) { DARABONBA_PTR_SET_VALUE(offsetDayOfTime_, offsetDayOfTime) };


            // offsetUnit Field Functions 
            bool hasOffsetUnit() const { return this->offsetUnit_ != nullptr;};
            void deleteOffsetUnit() { this->offsetUnit_ = nullptr;};
            inline int32_t getOffsetUnit() const { DARABONBA_PTR_GET_DEFAULT(offsetUnit_, 0) };
            inline EffectTimePointRule& setOffsetUnit(int32_t offsetUnit) { DARABONBA_PTR_SET_VALUE(offsetUnit_, offsetUnit) };


            // offsetValue Field Functions 
            bool hasOffsetValue() const { return this->offsetValue_ != nullptr;};
            void deleteOffsetValue() { this->offsetValue_ = nullptr;};
            inline int32_t getOffsetValue() const { DARABONBA_PTR_GET_DEFAULT(offsetValue_, 0) };
            inline EffectTimePointRule& setOffsetValue(int32_t offsetValue) { DARABONBA_PTR_SET_VALUE(offsetValue_, offsetValue) };


          protected:
            shared_ptr<int32_t> anchor_ {};
            shared_ptr<string> fixedTime_ {};
            shared_ptr<string> offsetDayOfTime_ {};
            shared_ptr<int32_t> offsetUnit_ {};
            shared_ptr<int32_t> offsetValue_ {};
          };

          virtual bool empty() const override { return this->effectTimePointRule_ == nullptr
        && this->entryAddress_ == nullptr && this->entryRemark_ == nullptr && this->entryTimePeriods_ == nullptr && this->entryType_ == nullptr && this->entryWithVoucherRule_ == nullptr
        && this->needAssemble_ == nullptr && this->needPrebook_ == nullptr && this->otherNote_ == nullptr && this->pickupsRule_ == nullptr && this->validityPeriodRule_ == nullptr; };
          // effectTimePointRule Field Functions 
          bool hasEffectTimePointRule() const { return this->effectTimePointRule_ != nullptr;};
          void deleteEffectTimePointRule() { this->effectTimePointRule_ = nullptr;};
          inline const UseRule::EffectTimePointRule & getEffectTimePointRule() const { DARABONBA_PTR_GET_CONST(effectTimePointRule_, UseRule::EffectTimePointRule) };
          inline UseRule::EffectTimePointRule getEffectTimePointRule() { DARABONBA_PTR_GET(effectTimePointRule_, UseRule::EffectTimePointRule) };
          inline UseRule& setEffectTimePointRule(const UseRule::EffectTimePointRule & effectTimePointRule) { DARABONBA_PTR_SET_VALUE(effectTimePointRule_, effectTimePointRule) };
          inline UseRule& setEffectTimePointRule(UseRule::EffectTimePointRule && effectTimePointRule) { DARABONBA_PTR_SET_RVALUE(effectTimePointRule_, effectTimePointRule) };


          // entryAddress Field Functions 
          bool hasEntryAddress() const { return this->entryAddress_ != nullptr;};
          void deleteEntryAddress() { this->entryAddress_ = nullptr;};
          inline string getEntryAddress() const { DARABONBA_PTR_GET_DEFAULT(entryAddress_, "") };
          inline UseRule& setEntryAddress(string entryAddress) { DARABONBA_PTR_SET_VALUE(entryAddress_, entryAddress) };


          // entryRemark Field Functions 
          bool hasEntryRemark() const { return this->entryRemark_ != nullptr;};
          void deleteEntryRemark() { this->entryRemark_ = nullptr;};
          inline string getEntryRemark() const { DARABONBA_PTR_GET_DEFAULT(entryRemark_, "") };
          inline UseRule& setEntryRemark(string entryRemark) { DARABONBA_PTR_SET_VALUE(entryRemark_, entryRemark) };


          // entryTimePeriods Field Functions 
          bool hasEntryTimePeriods() const { return this->entryTimePeriods_ != nullptr;};
          void deleteEntryTimePeriods() { this->entryTimePeriods_ = nullptr;};
          inline const vector<UseRule::EntryTimePeriods> & getEntryTimePeriods() const { DARABONBA_PTR_GET_CONST(entryTimePeriods_, vector<UseRule::EntryTimePeriods>) };
          inline vector<UseRule::EntryTimePeriods> getEntryTimePeriods() { DARABONBA_PTR_GET(entryTimePeriods_, vector<UseRule::EntryTimePeriods>) };
          inline UseRule& setEntryTimePeriods(const vector<UseRule::EntryTimePeriods> & entryTimePeriods) { DARABONBA_PTR_SET_VALUE(entryTimePeriods_, entryTimePeriods) };
          inline UseRule& setEntryTimePeriods(vector<UseRule::EntryTimePeriods> && entryTimePeriods) { DARABONBA_PTR_SET_RVALUE(entryTimePeriods_, entryTimePeriods) };


          // entryType Field Functions 
          bool hasEntryType() const { return this->entryType_ != nullptr;};
          void deleteEntryType() { this->entryType_ = nullptr;};
          inline int32_t getEntryType() const { DARABONBA_PTR_GET_DEFAULT(entryType_, 0) };
          inline UseRule& setEntryType(int32_t entryType) { DARABONBA_PTR_SET_VALUE(entryType_, entryType) };


          // entryWithVoucherRule Field Functions 
          bool hasEntryWithVoucherRule() const { return this->entryWithVoucherRule_ != nullptr;};
          void deleteEntryWithVoucherRule() { this->entryWithVoucherRule_ = nullptr;};
          inline const UseRule::EntryWithVoucherRule & getEntryWithVoucherRule() const { DARABONBA_PTR_GET_CONST(entryWithVoucherRule_, UseRule::EntryWithVoucherRule) };
          inline UseRule::EntryWithVoucherRule getEntryWithVoucherRule() { DARABONBA_PTR_GET(entryWithVoucherRule_, UseRule::EntryWithVoucherRule) };
          inline UseRule& setEntryWithVoucherRule(const UseRule::EntryWithVoucherRule & entryWithVoucherRule) { DARABONBA_PTR_SET_VALUE(entryWithVoucherRule_, entryWithVoucherRule) };
          inline UseRule& setEntryWithVoucherRule(UseRule::EntryWithVoucherRule && entryWithVoucherRule) { DARABONBA_PTR_SET_RVALUE(entryWithVoucherRule_, entryWithVoucherRule) };


          // needAssemble Field Functions 
          bool hasNeedAssemble() const { return this->needAssemble_ != nullptr;};
          void deleteNeedAssemble() { this->needAssemble_ = nullptr;};
          inline bool getNeedAssemble() const { DARABONBA_PTR_GET_DEFAULT(needAssemble_, false) };
          inline UseRule& setNeedAssemble(bool needAssemble) { DARABONBA_PTR_SET_VALUE(needAssemble_, needAssemble) };


          // needPrebook Field Functions 
          bool hasNeedPrebook() const { return this->needPrebook_ != nullptr;};
          void deleteNeedPrebook() { this->needPrebook_ = nullptr;};
          inline bool getNeedPrebook() const { DARABONBA_PTR_GET_DEFAULT(needPrebook_, false) };
          inline UseRule& setNeedPrebook(bool needPrebook) { DARABONBA_PTR_SET_VALUE(needPrebook_, needPrebook) };


          // otherNote Field Functions 
          bool hasOtherNote() const { return this->otherNote_ != nullptr;};
          void deleteOtherNote() { this->otherNote_ = nullptr;};
          inline string getOtherNote() const { DARABONBA_PTR_GET_DEFAULT(otherNote_, "") };
          inline UseRule& setOtherNote(string otherNote) { DARABONBA_PTR_SET_VALUE(otherNote_, otherNote) };


          // pickupsRule Field Functions 
          bool hasPickupsRule() const { return this->pickupsRule_ != nullptr;};
          void deletePickupsRule() { this->pickupsRule_ = nullptr;};
          inline const UseRule::PickupsRule & getPickupsRule() const { DARABONBA_PTR_GET_CONST(pickupsRule_, UseRule::PickupsRule) };
          inline UseRule::PickupsRule getPickupsRule() { DARABONBA_PTR_GET(pickupsRule_, UseRule::PickupsRule) };
          inline UseRule& setPickupsRule(const UseRule::PickupsRule & pickupsRule) { DARABONBA_PTR_SET_VALUE(pickupsRule_, pickupsRule) };
          inline UseRule& setPickupsRule(UseRule::PickupsRule && pickupsRule) { DARABONBA_PTR_SET_RVALUE(pickupsRule_, pickupsRule) };


          // validityPeriodRule Field Functions 
          bool hasValidityPeriodRule() const { return this->validityPeriodRule_ != nullptr;};
          void deleteValidityPeriodRule() { this->validityPeriodRule_ = nullptr;};
          inline const UseRule::ValidityPeriodRule & getValidityPeriodRule() const { DARABONBA_PTR_GET_CONST(validityPeriodRule_, UseRule::ValidityPeriodRule) };
          inline UseRule::ValidityPeriodRule getValidityPeriodRule() { DARABONBA_PTR_GET(validityPeriodRule_, UseRule::ValidityPeriodRule) };
          inline UseRule& setValidityPeriodRule(const UseRule::ValidityPeriodRule & validityPeriodRule) { DARABONBA_PTR_SET_VALUE(validityPeriodRule_, validityPeriodRule) };
          inline UseRule& setValidityPeriodRule(UseRule::ValidityPeriodRule && validityPeriodRule) { DARABONBA_PTR_SET_RVALUE(validityPeriodRule_, validityPeriodRule) };


        protected:
          shared_ptr<UseRule::EffectTimePointRule> effectTimePointRule_ {};
          shared_ptr<string> entryAddress_ {};
          shared_ptr<string> entryRemark_ {};
          shared_ptr<vector<UseRule::EntryTimePeriods>> entryTimePeriods_ {};
          shared_ptr<int32_t> entryType_ {};
          shared_ptr<UseRule::EntryWithVoucherRule> entryWithVoucherRule_ {};
          shared_ptr<bool> needAssemble_ {};
          shared_ptr<bool> needPrebook_ {};
          shared_ptr<string> otherNote_ {};
          shared_ptr<UseRule::PickupsRule> pickupsRule_ {};
          shared_ptr<UseRule::ValidityPeriodRule> validityPeriodRule_ {};
        };

        class TicketKind : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TicketKind& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(Name, name_);
          };
          friend void from_json(const Darabonba::Json& j, TicketKind& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
          };
          TicketKind() = default ;
          TicketKind(const TicketKind &) = default ;
          TicketKind(TicketKind &&) = default ;
          TicketKind(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TicketKind() = default ;
          TicketKind& operator=(const TicketKind &) = default ;
          TicketKind& operator=(TicketKind &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->description_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr; };
          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline TicketKind& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
          inline TicketKind& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline TicketKind& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        protected:
          shared_ptr<string> description_ {};
          shared_ptr<int64_t> id_ {};
          shared_ptr<string> name_ {};
        };

        class Spu : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Spu& obj) { 
            DARABONBA_PTR_TO_JSON(PrimaryTypeName, primaryTypeName_);
            DARABONBA_PTR_TO_JSON(ReserveDetail, reserveDetail_);
            DARABONBA_PTR_TO_JSON(ReserveTitle, reserveTitle_);
            DARABONBA_PTR_TO_JSON(SecondaryTypeName, secondaryTypeName_);
            DARABONBA_PTR_TO_JSON(SpuId, spuId_);
            DARABONBA_PTR_TO_JSON(SpuName, spuName_);
          };
          friend void from_json(const Darabonba::Json& j, Spu& obj) { 
            DARABONBA_PTR_FROM_JSON(PrimaryTypeName, primaryTypeName_);
            DARABONBA_PTR_FROM_JSON(ReserveDetail, reserveDetail_);
            DARABONBA_PTR_FROM_JSON(ReserveTitle, reserveTitle_);
            DARABONBA_PTR_FROM_JSON(SecondaryTypeName, secondaryTypeName_);
            DARABONBA_PTR_FROM_JSON(SpuId, spuId_);
            DARABONBA_PTR_FROM_JSON(SpuName, spuName_);
          };
          Spu() = default ;
          Spu(const Spu &) = default ;
          Spu(Spu &&) = default ;
          Spu(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Spu() = default ;
          Spu& operator=(const Spu &) = default ;
          Spu& operator=(Spu &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->primaryTypeName_ == nullptr
        && this->reserveDetail_ == nullptr && this->reserveTitle_ == nullptr && this->secondaryTypeName_ == nullptr && this->spuId_ == nullptr && this->spuName_ == nullptr; };
          // primaryTypeName Field Functions 
          bool hasPrimaryTypeName() const { return this->primaryTypeName_ != nullptr;};
          void deletePrimaryTypeName() { this->primaryTypeName_ = nullptr;};
          inline string getPrimaryTypeName() const { DARABONBA_PTR_GET_DEFAULT(primaryTypeName_, "") };
          inline Spu& setPrimaryTypeName(string primaryTypeName) { DARABONBA_PTR_SET_VALUE(primaryTypeName_, primaryTypeName) };


          // reserveDetail Field Functions 
          bool hasReserveDetail() const { return this->reserveDetail_ != nullptr;};
          void deleteReserveDetail() { this->reserveDetail_ = nullptr;};
          inline string getReserveDetail() const { DARABONBA_PTR_GET_DEFAULT(reserveDetail_, "") };
          inline Spu& setReserveDetail(string reserveDetail) { DARABONBA_PTR_SET_VALUE(reserveDetail_, reserveDetail) };


          // reserveTitle Field Functions 
          bool hasReserveTitle() const { return this->reserveTitle_ != nullptr;};
          void deleteReserveTitle() { this->reserveTitle_ = nullptr;};
          inline string getReserveTitle() const { DARABONBA_PTR_GET_DEFAULT(reserveTitle_, "") };
          inline Spu& setReserveTitle(string reserveTitle) { DARABONBA_PTR_SET_VALUE(reserveTitle_, reserveTitle) };


          // secondaryTypeName Field Functions 
          bool hasSecondaryTypeName() const { return this->secondaryTypeName_ != nullptr;};
          void deleteSecondaryTypeName() { this->secondaryTypeName_ = nullptr;};
          inline string getSecondaryTypeName() const { DARABONBA_PTR_GET_DEFAULT(secondaryTypeName_, "") };
          inline Spu& setSecondaryTypeName(string secondaryTypeName) { DARABONBA_PTR_SET_VALUE(secondaryTypeName_, secondaryTypeName) };


          // spuId Field Functions 
          bool hasSpuId() const { return this->spuId_ != nullptr;};
          void deleteSpuId() { this->spuId_ = nullptr;};
          inline int64_t getSpuId() const { DARABONBA_PTR_GET_DEFAULT(spuId_, 0L) };
          inline Spu& setSpuId(int64_t spuId) { DARABONBA_PTR_SET_VALUE(spuId_, spuId) };


          // spuName Field Functions 
          bool hasSpuName() const { return this->spuName_ != nullptr;};
          void deleteSpuName() { this->spuName_ = nullptr;};
          inline string getSpuName() const { DARABONBA_PTR_GET_DEFAULT(spuName_, "") };
          inline Spu& setSpuName(string spuName) { DARABONBA_PTR_SET_VALUE(spuName_, spuName) };


        protected:
          shared_ptr<string> primaryTypeName_ {};
          shared_ptr<string> reserveDetail_ {};
          shared_ptr<string> reserveTitle_ {};
          shared_ptr<string> secondaryTypeName_ {};
          shared_ptr<int64_t> spuId_ {};
          shared_ptr<string> spuName_ {};
        };

        class Session : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Session& obj) { 
            DARABONBA_PTR_TO_JSON(SessionEndTime, sessionEndTime_);
            DARABONBA_PTR_TO_JSON(SessionName, sessionName_);
            DARABONBA_PTR_TO_JSON(SessionStartTime, sessionStartTime_);
          };
          friend void from_json(const Darabonba::Json& j, Session& obj) { 
            DARABONBA_PTR_FROM_JSON(SessionEndTime, sessionEndTime_);
            DARABONBA_PTR_FROM_JSON(SessionName, sessionName_);
            DARABONBA_PTR_FROM_JSON(SessionStartTime, sessionStartTime_);
          };
          Session() = default ;
          Session(const Session &) = default ;
          Session(Session &&) = default ;
          Session(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Session() = default ;
          Session& operator=(const Session &) = default ;
          Session& operator=(Session &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->sessionEndTime_ == nullptr
        && this->sessionName_ == nullptr && this->sessionStartTime_ == nullptr; };
          // sessionEndTime Field Functions 
          bool hasSessionEndTime() const { return this->sessionEndTime_ != nullptr;};
          void deleteSessionEndTime() { this->sessionEndTime_ = nullptr;};
          inline string getSessionEndTime() const { DARABONBA_PTR_GET_DEFAULT(sessionEndTime_, "") };
          inline Session& setSessionEndTime(string sessionEndTime) { DARABONBA_PTR_SET_VALUE(sessionEndTime_, sessionEndTime) };


          // sessionName Field Functions 
          bool hasSessionName() const { return this->sessionName_ != nullptr;};
          void deleteSessionName() { this->sessionName_ = nullptr;};
          inline string getSessionName() const { DARABONBA_PTR_GET_DEFAULT(sessionName_, "") };
          inline Session& setSessionName(string sessionName) { DARABONBA_PTR_SET_VALUE(sessionName_, sessionName) };


          // sessionStartTime Field Functions 
          bool hasSessionStartTime() const { return this->sessionStartTime_ != nullptr;};
          void deleteSessionStartTime() { this->sessionStartTime_ = nullptr;};
          inline string getSessionStartTime() const { DARABONBA_PTR_GET_DEFAULT(sessionStartTime_, "") };
          inline Session& setSessionStartTime(string sessionStartTime) { DARABONBA_PTR_SET_VALUE(sessionStartTime_, sessionStartTime) };


        protected:
          shared_ptr<string> sessionEndTime_ {};
          shared_ptr<string> sessionName_ {};
          shared_ptr<string> sessionStartTime_ {};
        };

        class Region : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Region& obj) { 
            DARABONBA_PTR_TO_JSON(Name, name_);
          };
          friend void from_json(const Darabonba::Json& j, Region& obj) { 
            DARABONBA_PTR_FROM_JSON(Name, name_);
          };
          Region() = default ;
          Region(const Region &) = default ;
          Region(Region &&) = default ;
          Region(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Region() = default ;
          Region& operator=(const Region &) = default ;
          Region& operator=(Region &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->name_ == nullptr; };
          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Region& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        protected:
          shared_ptr<string> name_ {};
        };

        class RefundRule : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RefundRule& obj) { 
            DARABONBA_PTR_TO_JSON(RefundStageRules, refundStageRules_);
            DARABONBA_PTR_TO_JSON(RefundType, refundType_);
          };
          friend void from_json(const Darabonba::Json& j, RefundRule& obj) { 
            DARABONBA_PTR_FROM_JSON(RefundStageRules, refundStageRules_);
            DARABONBA_PTR_FROM_JSON(RefundType, refundType_);
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
          class RefundStageRules : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const RefundStageRules& obj) { 
              DARABONBA_PTR_TO_JSON(Fee, fee_);
              DARABONBA_PTR_TO_JSON(FeeBase, feeBase_);
              DARABONBA_PTR_TO_JSON(FeeType, feeType_);
              DARABONBA_PTR_TO_JSON(From, from_);
              DARABONBA_PTR_TO_JSON(To, to_);
            };
            friend void from_json(const Darabonba::Json& j, RefundStageRules& obj) { 
              DARABONBA_PTR_FROM_JSON(Fee, fee_);
              DARABONBA_PTR_FROM_JSON(FeeBase, feeBase_);
              DARABONBA_PTR_FROM_JSON(FeeType, feeType_);
              DARABONBA_PTR_FROM_JSON(From, from_);
              DARABONBA_PTR_FROM_JSON(To, to_);
            };
            RefundStageRules() = default ;
            RefundStageRules(const RefundStageRules &) = default ;
            RefundStageRules(RefundStageRules &&) = default ;
            RefundStageRules(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~RefundStageRules() = default ;
            RefundStageRules& operator=(const RefundStageRules &) = default ;
            RefundStageRules& operator=(RefundStageRules &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class To : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const To& obj) { 
                DARABONBA_PTR_TO_JSON(Anchor, anchor_);
                DARABONBA_PTR_TO_JSON(FixedTime, fixedTime_);
                DARABONBA_PTR_TO_JSON(OffsetDayOfTime, offsetDayOfTime_);
                DARABONBA_PTR_TO_JSON(OffsetUnit, offsetUnit_);
                DARABONBA_PTR_TO_JSON(OffsetValue, offsetValue_);
              };
              friend void from_json(const Darabonba::Json& j, To& obj) { 
                DARABONBA_PTR_FROM_JSON(Anchor, anchor_);
                DARABONBA_PTR_FROM_JSON(FixedTime, fixedTime_);
                DARABONBA_PTR_FROM_JSON(OffsetDayOfTime, offsetDayOfTime_);
                DARABONBA_PTR_FROM_JSON(OffsetUnit, offsetUnit_);
                DARABONBA_PTR_FROM_JSON(OffsetValue, offsetValue_);
              };
              To() = default ;
              To(const To &) = default ;
              To(To &&) = default ;
              To(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~To() = default ;
              To& operator=(const To &) = default ;
              To& operator=(To &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->anchor_ == nullptr
        && this->fixedTime_ == nullptr && this->offsetDayOfTime_ == nullptr && this->offsetUnit_ == nullptr && this->offsetValue_ == nullptr; };
              // anchor Field Functions 
              bool hasAnchor() const { return this->anchor_ != nullptr;};
              void deleteAnchor() { this->anchor_ = nullptr;};
              inline int32_t getAnchor() const { DARABONBA_PTR_GET_DEFAULT(anchor_, 0) };
              inline To& setAnchor(int32_t anchor) { DARABONBA_PTR_SET_VALUE(anchor_, anchor) };


              // fixedTime Field Functions 
              bool hasFixedTime() const { return this->fixedTime_ != nullptr;};
              void deleteFixedTime() { this->fixedTime_ = nullptr;};
              inline string getFixedTime() const { DARABONBA_PTR_GET_DEFAULT(fixedTime_, "") };
              inline To& setFixedTime(string fixedTime) { DARABONBA_PTR_SET_VALUE(fixedTime_, fixedTime) };


              // offsetDayOfTime Field Functions 
              bool hasOffsetDayOfTime() const { return this->offsetDayOfTime_ != nullptr;};
              void deleteOffsetDayOfTime() { this->offsetDayOfTime_ = nullptr;};
              inline string getOffsetDayOfTime() const { DARABONBA_PTR_GET_DEFAULT(offsetDayOfTime_, "") };
              inline To& setOffsetDayOfTime(string offsetDayOfTime) { DARABONBA_PTR_SET_VALUE(offsetDayOfTime_, offsetDayOfTime) };


              // offsetUnit Field Functions 
              bool hasOffsetUnit() const { return this->offsetUnit_ != nullptr;};
              void deleteOffsetUnit() { this->offsetUnit_ = nullptr;};
              inline int32_t getOffsetUnit() const { DARABONBA_PTR_GET_DEFAULT(offsetUnit_, 0) };
              inline To& setOffsetUnit(int32_t offsetUnit) { DARABONBA_PTR_SET_VALUE(offsetUnit_, offsetUnit) };


              // offsetValue Field Functions 
              bool hasOffsetValue() const { return this->offsetValue_ != nullptr;};
              void deleteOffsetValue() { this->offsetValue_ = nullptr;};
              inline int32_t getOffsetValue() const { DARABONBA_PTR_GET_DEFAULT(offsetValue_, 0) };
              inline To& setOffsetValue(int32_t offsetValue) { DARABONBA_PTR_SET_VALUE(offsetValue_, offsetValue) };


            protected:
              shared_ptr<int32_t> anchor_ {};
              shared_ptr<string> fixedTime_ {};
              shared_ptr<string> offsetDayOfTime_ {};
              shared_ptr<int32_t> offsetUnit_ {};
              shared_ptr<int32_t> offsetValue_ {};
            };

            class From : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const From& obj) { 
                DARABONBA_PTR_TO_JSON(Anchor, anchor_);
                DARABONBA_PTR_TO_JSON(FixedTime, fixedTime_);
                DARABONBA_PTR_TO_JSON(OffsetDayOfTime, offsetDayOfTime_);
                DARABONBA_PTR_TO_JSON(OffsetUnit, offsetUnit_);
                DARABONBA_PTR_TO_JSON(OffsetValue, offsetValue_);
              };
              friend void from_json(const Darabonba::Json& j, From& obj) { 
                DARABONBA_PTR_FROM_JSON(Anchor, anchor_);
                DARABONBA_PTR_FROM_JSON(FixedTime, fixedTime_);
                DARABONBA_PTR_FROM_JSON(OffsetDayOfTime, offsetDayOfTime_);
                DARABONBA_PTR_FROM_JSON(OffsetUnit, offsetUnit_);
                DARABONBA_PTR_FROM_JSON(OffsetValue, offsetValue_);
              };
              From() = default ;
              From(const From &) = default ;
              From(From &&) = default ;
              From(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~From() = default ;
              From& operator=(const From &) = default ;
              From& operator=(From &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->anchor_ == nullptr
        && this->fixedTime_ == nullptr && this->offsetDayOfTime_ == nullptr && this->offsetUnit_ == nullptr && this->offsetValue_ == nullptr; };
              // anchor Field Functions 
              bool hasAnchor() const { return this->anchor_ != nullptr;};
              void deleteAnchor() { this->anchor_ = nullptr;};
              inline int32_t getAnchor() const { DARABONBA_PTR_GET_DEFAULT(anchor_, 0) };
              inline From& setAnchor(int32_t anchor) { DARABONBA_PTR_SET_VALUE(anchor_, anchor) };


              // fixedTime Field Functions 
              bool hasFixedTime() const { return this->fixedTime_ != nullptr;};
              void deleteFixedTime() { this->fixedTime_ = nullptr;};
              inline string getFixedTime() const { DARABONBA_PTR_GET_DEFAULT(fixedTime_, "") };
              inline From& setFixedTime(string fixedTime) { DARABONBA_PTR_SET_VALUE(fixedTime_, fixedTime) };


              // offsetDayOfTime Field Functions 
              bool hasOffsetDayOfTime() const { return this->offsetDayOfTime_ != nullptr;};
              void deleteOffsetDayOfTime() { this->offsetDayOfTime_ = nullptr;};
              inline string getOffsetDayOfTime() const { DARABONBA_PTR_GET_DEFAULT(offsetDayOfTime_, "") };
              inline From& setOffsetDayOfTime(string offsetDayOfTime) { DARABONBA_PTR_SET_VALUE(offsetDayOfTime_, offsetDayOfTime) };


              // offsetUnit Field Functions 
              bool hasOffsetUnit() const { return this->offsetUnit_ != nullptr;};
              void deleteOffsetUnit() { this->offsetUnit_ = nullptr;};
              inline int32_t getOffsetUnit() const { DARABONBA_PTR_GET_DEFAULT(offsetUnit_, 0) };
              inline From& setOffsetUnit(int32_t offsetUnit) { DARABONBA_PTR_SET_VALUE(offsetUnit_, offsetUnit) };


              // offsetValue Field Functions 
              bool hasOffsetValue() const { return this->offsetValue_ != nullptr;};
              void deleteOffsetValue() { this->offsetValue_ = nullptr;};
              inline int32_t getOffsetValue() const { DARABONBA_PTR_GET_DEFAULT(offsetValue_, 0) };
              inline From& setOffsetValue(int32_t offsetValue) { DARABONBA_PTR_SET_VALUE(offsetValue_, offsetValue) };


            protected:
              shared_ptr<int32_t> anchor_ {};
              shared_ptr<string> fixedTime_ {};
              shared_ptr<string> offsetDayOfTime_ {};
              shared_ptr<int32_t> offsetUnit_ {};
              shared_ptr<int32_t> offsetValue_ {};
            };

            virtual bool empty() const override { return this->fee_ == nullptr
        && this->feeBase_ == nullptr && this->feeType_ == nullptr && this->from_ == nullptr && this->to_ == nullptr; };
            // fee Field Functions 
            bool hasFee() const { return this->fee_ != nullptr;};
            void deleteFee() { this->fee_ = nullptr;};
            inline double getFee() const { DARABONBA_PTR_GET_DEFAULT(fee_, 0.0) };
            inline RefundStageRules& setFee(double fee) { DARABONBA_PTR_SET_VALUE(fee_, fee) };


            // feeBase Field Functions 
            bool hasFeeBase() const { return this->feeBase_ != nullptr;};
            void deleteFeeBase() { this->feeBase_ = nullptr;};
            inline int32_t getFeeBase() const { DARABONBA_PTR_GET_DEFAULT(feeBase_, 0) };
            inline RefundStageRules& setFeeBase(int32_t feeBase) { DARABONBA_PTR_SET_VALUE(feeBase_, feeBase) };


            // feeType Field Functions 
            bool hasFeeType() const { return this->feeType_ != nullptr;};
            void deleteFeeType() { this->feeType_ = nullptr;};
            inline int32_t getFeeType() const { DARABONBA_PTR_GET_DEFAULT(feeType_, 0) };
            inline RefundStageRules& setFeeType(int32_t feeType) { DARABONBA_PTR_SET_VALUE(feeType_, feeType) };


            // from Field Functions 
            bool hasFrom() const { return this->from_ != nullptr;};
            void deleteFrom() { this->from_ = nullptr;};
            inline const RefundStageRules::From & getFrom() const { DARABONBA_PTR_GET_CONST(from_, RefundStageRules::From) };
            inline RefundStageRules::From getFrom() { DARABONBA_PTR_GET(from_, RefundStageRules::From) };
            inline RefundStageRules& setFrom(const RefundStageRules::From & from) { DARABONBA_PTR_SET_VALUE(from_, from) };
            inline RefundStageRules& setFrom(RefundStageRules::From && from) { DARABONBA_PTR_SET_RVALUE(from_, from) };


            // to Field Functions 
            bool hasTo() const { return this->to_ != nullptr;};
            void deleteTo() { this->to_ = nullptr;};
            inline const RefundStageRules::To & getTo() const { DARABONBA_PTR_GET_CONST(to_, RefundStageRules::To) };
            inline RefundStageRules::To getTo() { DARABONBA_PTR_GET(to_, RefundStageRules::To) };
            inline RefundStageRules& setTo(const RefundStageRules::To & to) { DARABONBA_PTR_SET_VALUE(to_, to) };
            inline RefundStageRules& setTo(RefundStageRules::To && to) { DARABONBA_PTR_SET_RVALUE(to_, to) };


          protected:
            shared_ptr<double> fee_ {};
            shared_ptr<int32_t> feeBase_ {};
            shared_ptr<int32_t> feeType_ {};
            shared_ptr<RefundStageRules::From> from_ {};
            shared_ptr<RefundStageRules::To> to_ {};
          };

          virtual bool empty() const override { return this->refundStageRules_ == nullptr
        && this->refundType_ == nullptr; };
          // refundStageRules Field Functions 
          bool hasRefundStageRules() const { return this->refundStageRules_ != nullptr;};
          void deleteRefundStageRules() { this->refundStageRules_ = nullptr;};
          inline const vector<RefundRule::RefundStageRules> & getRefundStageRules() const { DARABONBA_PTR_GET_CONST(refundStageRules_, vector<RefundRule::RefundStageRules>) };
          inline vector<RefundRule::RefundStageRules> getRefundStageRules() { DARABONBA_PTR_GET(refundStageRules_, vector<RefundRule::RefundStageRules>) };
          inline RefundRule& setRefundStageRules(const vector<RefundRule::RefundStageRules> & refundStageRules) { DARABONBA_PTR_SET_VALUE(refundStageRules_, refundStageRules) };
          inline RefundRule& setRefundStageRules(vector<RefundRule::RefundStageRules> && refundStageRules) { DARABONBA_PTR_SET_RVALUE(refundStageRules_, refundStageRules) };


          // refundType Field Functions 
          bool hasRefundType() const { return this->refundType_ != nullptr;};
          void deleteRefundType() { this->refundType_ = nullptr;};
          inline int32_t getRefundType() const { DARABONBA_PTR_GET_DEFAULT(refundType_, 0) };
          inline RefundRule& setRefundType(int32_t refundType) { DARABONBA_PTR_SET_VALUE(refundType_, refundType) };


        protected:
          shared_ptr<vector<RefundRule::RefundStageRules>> refundStageRules_ {};
          shared_ptr<int32_t> refundType_ {};
        };

        class BuyRule : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const BuyRule& obj) { 
            DARABONBA_PTR_TO_JSON(AheadBuyTimePointRule, aheadBuyTimePointRule_);
            DARABONBA_PTR_TO_JSON(ContactRule, contactRule_);
            DARABONBA_PTR_TO_JSON(CrossOrderBuyQuantityLimitRules, crossOrderBuyQuantityLimitRules_);
            DARABONBA_PTR_TO_JSON(PerOrderBuyQuantityLimitRule, perOrderBuyQuantityLimitRule_);
            DARABONBA_PTR_TO_JSON(TravelerRule, travelerRule_);
          };
          friend void from_json(const Darabonba::Json& j, BuyRule& obj) { 
            DARABONBA_PTR_FROM_JSON(AheadBuyTimePointRule, aheadBuyTimePointRule_);
            DARABONBA_PTR_FROM_JSON(ContactRule, contactRule_);
            DARABONBA_PTR_FROM_JSON(CrossOrderBuyQuantityLimitRules, crossOrderBuyQuantityLimitRules_);
            DARABONBA_PTR_FROM_JSON(PerOrderBuyQuantityLimitRule, perOrderBuyQuantityLimitRule_);
            DARABONBA_PTR_FROM_JSON(TravelerRule, travelerRule_);
          };
          BuyRule() = default ;
          BuyRule(const BuyRule &) = default ;
          BuyRule(BuyRule &&) = default ;
          BuyRule(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~BuyRule() = default ;
          BuyRule& operator=(const BuyRule &) = default ;
          BuyRule& operator=(BuyRule &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class TravelerRule : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const TravelerRule& obj) { 
              DARABONBA_PTR_TO_JSON(CrowdLimitRules, crowdLimitRules_);
              DARABONBA_PTR_TO_JSON(CrowdQuantityLimits, crowdQuantityLimits_);
              DARABONBA_PTR_TO_JSON(NeedFillTraveler, needFillTraveler_);
              DARABONBA_PTR_TO_JSON(TravelerFieldRule, travelerFieldRule_);
              DARABONBA_PTR_TO_JSON(TravelerFillDimension, travelerFillDimension_);
              DARABONBA_PTR_TO_JSON(TravelerQuantity, travelerQuantity_);
            };
            friend void from_json(const Darabonba::Json& j, TravelerRule& obj) { 
              DARABONBA_PTR_FROM_JSON(CrowdLimitRules, crowdLimitRules_);
              DARABONBA_PTR_FROM_JSON(CrowdQuantityLimits, crowdQuantityLimits_);
              DARABONBA_PTR_FROM_JSON(NeedFillTraveler, needFillTraveler_);
              DARABONBA_PTR_FROM_JSON(TravelerFieldRule, travelerFieldRule_);
              DARABONBA_PTR_FROM_JSON(TravelerFillDimension, travelerFillDimension_);
              DARABONBA_PTR_FROM_JSON(TravelerQuantity, travelerQuantity_);
            };
            TravelerRule() = default ;
            TravelerRule(const TravelerRule &) = default ;
            TravelerRule(TravelerRule &&) = default ;
            TravelerRule(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~TravelerRule() = default ;
            TravelerRule& operator=(const TravelerRule &) = default ;
            TravelerRule& operator=(TravelerRule &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class TravelerFieldRule : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const TravelerFieldRule& obj) { 
                DARABONBA_PTR_TO_JSON(Birthday, birthday_);
                DARABONBA_PTR_TO_JSON(Certificate, certificate_);
                DARABONBA_PTR_TO_JSON(CertificateTypes, certificateTypes_);
                DARABONBA_PTR_TO_JSON(DialingCode, dialingCode_);
                DARABONBA_PTR_TO_JSON(Email, email_);
                DARABONBA_PTR_TO_JSON(FirstName, firstName_);
                DARABONBA_PTR_TO_JSON(Gender, gender_);
                DARABONBA_PTR_TO_JSON(LastName, lastName_);
                DARABONBA_PTR_TO_JSON(Mobile, mobile_);
                DARABONBA_PTR_TO_JSON(Name, name_);
                DARABONBA_PTR_TO_JSON(Nationality, nationality_);
              };
              friend void from_json(const Darabonba::Json& j, TravelerFieldRule& obj) { 
                DARABONBA_PTR_FROM_JSON(Birthday, birthday_);
                DARABONBA_PTR_FROM_JSON(Certificate, certificate_);
                DARABONBA_PTR_FROM_JSON(CertificateTypes, certificateTypes_);
                DARABONBA_PTR_FROM_JSON(DialingCode, dialingCode_);
                DARABONBA_PTR_FROM_JSON(Email, email_);
                DARABONBA_PTR_FROM_JSON(FirstName, firstName_);
                DARABONBA_PTR_FROM_JSON(Gender, gender_);
                DARABONBA_PTR_FROM_JSON(LastName, lastName_);
                DARABONBA_PTR_FROM_JSON(Mobile, mobile_);
                DARABONBA_PTR_FROM_JSON(Name, name_);
                DARABONBA_PTR_FROM_JSON(Nationality, nationality_);
              };
              TravelerFieldRule() = default ;
              TravelerFieldRule(const TravelerFieldRule &) = default ;
              TravelerFieldRule(TravelerFieldRule &&) = default ;
              TravelerFieldRule(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~TravelerFieldRule() = default ;
              TravelerFieldRule& operator=(const TravelerFieldRule &) = default ;
              TravelerFieldRule& operator=(TravelerFieldRule &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->birthday_ == nullptr
        && this->certificate_ == nullptr && this->certificateTypes_ == nullptr && this->dialingCode_ == nullptr && this->email_ == nullptr && this->firstName_ == nullptr
        && this->gender_ == nullptr && this->lastName_ == nullptr && this->mobile_ == nullptr && this->name_ == nullptr && this->nationality_ == nullptr; };
              // birthday Field Functions 
              bool hasBirthday() const { return this->birthday_ != nullptr;};
              void deleteBirthday() { this->birthday_ = nullptr;};
              inline bool getBirthday() const { DARABONBA_PTR_GET_DEFAULT(birthday_, false) };
              inline TravelerFieldRule& setBirthday(bool birthday) { DARABONBA_PTR_SET_VALUE(birthday_, birthday) };


              // certificate Field Functions 
              bool hasCertificate() const { return this->certificate_ != nullptr;};
              void deleteCertificate() { this->certificate_ = nullptr;};
              inline bool getCertificate() const { DARABONBA_PTR_GET_DEFAULT(certificate_, false) };
              inline TravelerFieldRule& setCertificate(bool certificate) { DARABONBA_PTR_SET_VALUE(certificate_, certificate) };


              // certificateTypes Field Functions 
              bool hasCertificateTypes() const { return this->certificateTypes_ != nullptr;};
              void deleteCertificateTypes() { this->certificateTypes_ = nullptr;};
              inline const vector<int32_t> & getCertificateTypes() const { DARABONBA_PTR_GET_CONST(certificateTypes_, vector<int32_t>) };
              inline vector<int32_t> getCertificateTypes() { DARABONBA_PTR_GET(certificateTypes_, vector<int32_t>) };
              inline TravelerFieldRule& setCertificateTypes(const vector<int32_t> & certificateTypes) { DARABONBA_PTR_SET_VALUE(certificateTypes_, certificateTypes) };
              inline TravelerFieldRule& setCertificateTypes(vector<int32_t> && certificateTypes) { DARABONBA_PTR_SET_RVALUE(certificateTypes_, certificateTypes) };


              // dialingCode Field Functions 
              bool hasDialingCode() const { return this->dialingCode_ != nullptr;};
              void deleteDialingCode() { this->dialingCode_ = nullptr;};
              inline bool getDialingCode() const { DARABONBA_PTR_GET_DEFAULT(dialingCode_, false) };
              inline TravelerFieldRule& setDialingCode(bool dialingCode) { DARABONBA_PTR_SET_VALUE(dialingCode_, dialingCode) };


              // email Field Functions 
              bool hasEmail() const { return this->email_ != nullptr;};
              void deleteEmail() { this->email_ = nullptr;};
              inline bool getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, false) };
              inline TravelerFieldRule& setEmail(bool email) { DARABONBA_PTR_SET_VALUE(email_, email) };


              // firstName Field Functions 
              bool hasFirstName() const { return this->firstName_ != nullptr;};
              void deleteFirstName() { this->firstName_ = nullptr;};
              inline bool getFirstName() const { DARABONBA_PTR_GET_DEFAULT(firstName_, false) };
              inline TravelerFieldRule& setFirstName(bool firstName) { DARABONBA_PTR_SET_VALUE(firstName_, firstName) };


              // gender Field Functions 
              bool hasGender() const { return this->gender_ != nullptr;};
              void deleteGender() { this->gender_ = nullptr;};
              inline bool getGender() const { DARABONBA_PTR_GET_DEFAULT(gender_, false) };
              inline TravelerFieldRule& setGender(bool gender) { DARABONBA_PTR_SET_VALUE(gender_, gender) };


              // lastName Field Functions 
              bool hasLastName() const { return this->lastName_ != nullptr;};
              void deleteLastName() { this->lastName_ = nullptr;};
              inline bool getLastName() const { DARABONBA_PTR_GET_DEFAULT(lastName_, false) };
              inline TravelerFieldRule& setLastName(bool lastName) { DARABONBA_PTR_SET_VALUE(lastName_, lastName) };


              // mobile Field Functions 
              bool hasMobile() const { return this->mobile_ != nullptr;};
              void deleteMobile() { this->mobile_ = nullptr;};
              inline bool getMobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, false) };
              inline TravelerFieldRule& setMobile(bool mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


              // name Field Functions 
              bool hasName() const { return this->name_ != nullptr;};
              void deleteName() { this->name_ = nullptr;};
              inline bool getName() const { DARABONBA_PTR_GET_DEFAULT(name_, false) };
              inline TravelerFieldRule& setName(bool name) { DARABONBA_PTR_SET_VALUE(name_, name) };


              // nationality Field Functions 
              bool hasNationality() const { return this->nationality_ != nullptr;};
              void deleteNationality() { this->nationality_ = nullptr;};
              inline bool getNationality() const { DARABONBA_PTR_GET_DEFAULT(nationality_, false) };
              inline TravelerFieldRule& setNationality(bool nationality) { DARABONBA_PTR_SET_VALUE(nationality_, nationality) };


            protected:
              shared_ptr<bool> birthday_ {};
              shared_ptr<bool> certificate_ {};
              shared_ptr<vector<int32_t>> certificateTypes_ {};
              shared_ptr<bool> dialingCode_ {};
              shared_ptr<bool> email_ {};
              shared_ptr<bool> firstName_ {};
              shared_ptr<bool> gender_ {};
              shared_ptr<bool> lastName_ {};
              shared_ptr<bool> mobile_ {};
              shared_ptr<bool> name_ {};
              shared_ptr<bool> nationality_ {};
            };

            class CrowdQuantityLimits : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const CrowdQuantityLimits& obj) { 
                DARABONBA_PTR_TO_JSON(Name, name_);
                DARABONBA_PTR_TO_JSON(Quantity, quantity_);
              };
              friend void from_json(const Darabonba::Json& j, CrowdQuantityLimits& obj) { 
                DARABONBA_PTR_FROM_JSON(Name, name_);
                DARABONBA_PTR_FROM_JSON(Quantity, quantity_);
              };
              CrowdQuantityLimits() = default ;
              CrowdQuantityLimits(const CrowdQuantityLimits &) = default ;
              CrowdQuantityLimits(CrowdQuantityLimits &&) = default ;
              CrowdQuantityLimits(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~CrowdQuantityLimits() = default ;
              CrowdQuantityLimits& operator=(const CrowdQuantityLimits &) = default ;
              CrowdQuantityLimits& operator=(CrowdQuantityLimits &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->name_ == nullptr
        && this->quantity_ == nullptr; };
              // name Field Functions 
              bool hasName() const { return this->name_ != nullptr;};
              void deleteName() { this->name_ = nullptr;};
              inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
              inline CrowdQuantityLimits& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


              // quantity Field Functions 
              bool hasQuantity() const { return this->quantity_ != nullptr;};
              void deleteQuantity() { this->quantity_ = nullptr;};
              inline int32_t getQuantity() const { DARABONBA_PTR_GET_DEFAULT(quantity_, 0) };
              inline CrowdQuantityLimits& setQuantity(int32_t quantity) { DARABONBA_PTR_SET_VALUE(quantity_, quantity) };


            protected:
              shared_ptr<string> name_ {};
              shared_ptr<int32_t> quantity_ {};
            };

            class CrowdLimitRules : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const CrowdLimitRules& obj) { 
                DARABONBA_PTR_TO_JSON(AgeBaseTimeType, ageBaseTimeType_);
                DARABONBA_PTR_TO_JSON(AgeCalculateType, ageCalculateType_);
                DARABONBA_PTR_TO_JSON(AgeMax, ageMax_);
                DARABONBA_PTR_TO_JSON(AgeMin, ageMin_);
                DARABONBA_PTR_TO_JSON(Name, name_);
              };
              friend void from_json(const Darabonba::Json& j, CrowdLimitRules& obj) { 
                DARABONBA_PTR_FROM_JSON(AgeBaseTimeType, ageBaseTimeType_);
                DARABONBA_PTR_FROM_JSON(AgeCalculateType, ageCalculateType_);
                DARABONBA_PTR_FROM_JSON(AgeMax, ageMax_);
                DARABONBA_PTR_FROM_JSON(AgeMin, ageMin_);
                DARABONBA_PTR_FROM_JSON(Name, name_);
              };
              CrowdLimitRules() = default ;
              CrowdLimitRules(const CrowdLimitRules &) = default ;
              CrowdLimitRules(CrowdLimitRules &&) = default ;
              CrowdLimitRules(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~CrowdLimitRules() = default ;
              CrowdLimitRules& operator=(const CrowdLimitRules &) = default ;
              CrowdLimitRules& operator=(CrowdLimitRules &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->ageBaseTimeType_ == nullptr
        && this->ageCalculateType_ == nullptr && this->ageMax_ == nullptr && this->ageMin_ == nullptr && this->name_ == nullptr; };
              // ageBaseTimeType Field Functions 
              bool hasAgeBaseTimeType() const { return this->ageBaseTimeType_ != nullptr;};
              void deleteAgeBaseTimeType() { this->ageBaseTimeType_ = nullptr;};
              inline int32_t getAgeBaseTimeType() const { DARABONBA_PTR_GET_DEFAULT(ageBaseTimeType_, 0) };
              inline CrowdLimitRules& setAgeBaseTimeType(int32_t ageBaseTimeType) { DARABONBA_PTR_SET_VALUE(ageBaseTimeType_, ageBaseTimeType) };


              // ageCalculateType Field Functions 
              bool hasAgeCalculateType() const { return this->ageCalculateType_ != nullptr;};
              void deleteAgeCalculateType() { this->ageCalculateType_ = nullptr;};
              inline int32_t getAgeCalculateType() const { DARABONBA_PTR_GET_DEFAULT(ageCalculateType_, 0) };
              inline CrowdLimitRules& setAgeCalculateType(int32_t ageCalculateType) { DARABONBA_PTR_SET_VALUE(ageCalculateType_, ageCalculateType) };


              // ageMax Field Functions 
              bool hasAgeMax() const { return this->ageMax_ != nullptr;};
              void deleteAgeMax() { this->ageMax_ = nullptr;};
              inline int32_t getAgeMax() const { DARABONBA_PTR_GET_DEFAULT(ageMax_, 0) };
              inline CrowdLimitRules& setAgeMax(int32_t ageMax) { DARABONBA_PTR_SET_VALUE(ageMax_, ageMax) };


              // ageMin Field Functions 
              bool hasAgeMin() const { return this->ageMin_ != nullptr;};
              void deleteAgeMin() { this->ageMin_ = nullptr;};
              inline int32_t getAgeMin() const { DARABONBA_PTR_GET_DEFAULT(ageMin_, 0) };
              inline CrowdLimitRules& setAgeMin(int32_t ageMin) { DARABONBA_PTR_SET_VALUE(ageMin_, ageMin) };


              // name Field Functions 
              bool hasName() const { return this->name_ != nullptr;};
              void deleteName() { this->name_ = nullptr;};
              inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
              inline CrowdLimitRules& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


            protected:
              shared_ptr<int32_t> ageBaseTimeType_ {};
              shared_ptr<int32_t> ageCalculateType_ {};
              shared_ptr<int32_t> ageMax_ {};
              shared_ptr<int32_t> ageMin_ {};
              shared_ptr<string> name_ {};
            };

            virtual bool empty() const override { return this->crowdLimitRules_ == nullptr
        && this->crowdQuantityLimits_ == nullptr && this->needFillTraveler_ == nullptr && this->travelerFieldRule_ == nullptr && this->travelerFillDimension_ == nullptr && this->travelerQuantity_ == nullptr; };
            // crowdLimitRules Field Functions 
            bool hasCrowdLimitRules() const { return this->crowdLimitRules_ != nullptr;};
            void deleteCrowdLimitRules() { this->crowdLimitRules_ = nullptr;};
            inline const vector<TravelerRule::CrowdLimitRules> & getCrowdLimitRules() const { DARABONBA_PTR_GET_CONST(crowdLimitRules_, vector<TravelerRule::CrowdLimitRules>) };
            inline vector<TravelerRule::CrowdLimitRules> getCrowdLimitRules() { DARABONBA_PTR_GET(crowdLimitRules_, vector<TravelerRule::CrowdLimitRules>) };
            inline TravelerRule& setCrowdLimitRules(const vector<TravelerRule::CrowdLimitRules> & crowdLimitRules) { DARABONBA_PTR_SET_VALUE(crowdLimitRules_, crowdLimitRules) };
            inline TravelerRule& setCrowdLimitRules(vector<TravelerRule::CrowdLimitRules> && crowdLimitRules) { DARABONBA_PTR_SET_RVALUE(crowdLimitRules_, crowdLimitRules) };


            // crowdQuantityLimits Field Functions 
            bool hasCrowdQuantityLimits() const { return this->crowdQuantityLimits_ != nullptr;};
            void deleteCrowdQuantityLimits() { this->crowdQuantityLimits_ = nullptr;};
            inline const vector<TravelerRule::CrowdQuantityLimits> & getCrowdQuantityLimits() const { DARABONBA_PTR_GET_CONST(crowdQuantityLimits_, vector<TravelerRule::CrowdQuantityLimits>) };
            inline vector<TravelerRule::CrowdQuantityLimits> getCrowdQuantityLimits() { DARABONBA_PTR_GET(crowdQuantityLimits_, vector<TravelerRule::CrowdQuantityLimits>) };
            inline TravelerRule& setCrowdQuantityLimits(const vector<TravelerRule::CrowdQuantityLimits> & crowdQuantityLimits) { DARABONBA_PTR_SET_VALUE(crowdQuantityLimits_, crowdQuantityLimits) };
            inline TravelerRule& setCrowdQuantityLimits(vector<TravelerRule::CrowdQuantityLimits> && crowdQuantityLimits) { DARABONBA_PTR_SET_RVALUE(crowdQuantityLimits_, crowdQuantityLimits) };


            // needFillTraveler Field Functions 
            bool hasNeedFillTraveler() const { return this->needFillTraveler_ != nullptr;};
            void deleteNeedFillTraveler() { this->needFillTraveler_ = nullptr;};
            inline bool getNeedFillTraveler() const { DARABONBA_PTR_GET_DEFAULT(needFillTraveler_, false) };
            inline TravelerRule& setNeedFillTraveler(bool needFillTraveler) { DARABONBA_PTR_SET_VALUE(needFillTraveler_, needFillTraveler) };


            // travelerFieldRule Field Functions 
            bool hasTravelerFieldRule() const { return this->travelerFieldRule_ != nullptr;};
            void deleteTravelerFieldRule() { this->travelerFieldRule_ = nullptr;};
            inline const TravelerRule::TravelerFieldRule & getTravelerFieldRule() const { DARABONBA_PTR_GET_CONST(travelerFieldRule_, TravelerRule::TravelerFieldRule) };
            inline TravelerRule::TravelerFieldRule getTravelerFieldRule() { DARABONBA_PTR_GET(travelerFieldRule_, TravelerRule::TravelerFieldRule) };
            inline TravelerRule& setTravelerFieldRule(const TravelerRule::TravelerFieldRule & travelerFieldRule) { DARABONBA_PTR_SET_VALUE(travelerFieldRule_, travelerFieldRule) };
            inline TravelerRule& setTravelerFieldRule(TravelerRule::TravelerFieldRule && travelerFieldRule) { DARABONBA_PTR_SET_RVALUE(travelerFieldRule_, travelerFieldRule) };


            // travelerFillDimension Field Functions 
            bool hasTravelerFillDimension() const { return this->travelerFillDimension_ != nullptr;};
            void deleteTravelerFillDimension() { this->travelerFillDimension_ = nullptr;};
            inline int32_t getTravelerFillDimension() const { DARABONBA_PTR_GET_DEFAULT(travelerFillDimension_, 0) };
            inline TravelerRule& setTravelerFillDimension(int32_t travelerFillDimension) { DARABONBA_PTR_SET_VALUE(travelerFillDimension_, travelerFillDimension) };


            // travelerQuantity Field Functions 
            bool hasTravelerQuantity() const { return this->travelerQuantity_ != nullptr;};
            void deleteTravelerQuantity() { this->travelerQuantity_ = nullptr;};
            inline int32_t getTravelerQuantity() const { DARABONBA_PTR_GET_DEFAULT(travelerQuantity_, 0) };
            inline TravelerRule& setTravelerQuantity(int32_t travelerQuantity) { DARABONBA_PTR_SET_VALUE(travelerQuantity_, travelerQuantity) };


          protected:
            shared_ptr<vector<TravelerRule::CrowdLimitRules>> crowdLimitRules_ {};
            shared_ptr<vector<TravelerRule::CrowdQuantityLimits>> crowdQuantityLimits_ {};
            shared_ptr<bool> needFillTraveler_ {};
            shared_ptr<TravelerRule::TravelerFieldRule> travelerFieldRule_ {};
            shared_ptr<int32_t> travelerFillDimension_ {};
            shared_ptr<int32_t> travelerQuantity_ {};
          };

          class PerOrderBuyQuantityLimitRule : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const PerOrderBuyQuantityLimitRule& obj) { 
              DARABONBA_PTR_TO_JSON(MaxBuyQuantity, maxBuyQuantity_);
              DARABONBA_PTR_TO_JSON(MinBuyQuantity, minBuyQuantity_);
            };
            friend void from_json(const Darabonba::Json& j, PerOrderBuyQuantityLimitRule& obj) { 
              DARABONBA_PTR_FROM_JSON(MaxBuyQuantity, maxBuyQuantity_);
              DARABONBA_PTR_FROM_JSON(MinBuyQuantity, minBuyQuantity_);
            };
            PerOrderBuyQuantityLimitRule() = default ;
            PerOrderBuyQuantityLimitRule(const PerOrderBuyQuantityLimitRule &) = default ;
            PerOrderBuyQuantityLimitRule(PerOrderBuyQuantityLimitRule &&) = default ;
            PerOrderBuyQuantityLimitRule(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~PerOrderBuyQuantityLimitRule() = default ;
            PerOrderBuyQuantityLimitRule& operator=(const PerOrderBuyQuantityLimitRule &) = default ;
            PerOrderBuyQuantityLimitRule& operator=(PerOrderBuyQuantityLimitRule &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->maxBuyQuantity_ == nullptr
        && this->minBuyQuantity_ == nullptr; };
            // maxBuyQuantity Field Functions 
            bool hasMaxBuyQuantity() const { return this->maxBuyQuantity_ != nullptr;};
            void deleteMaxBuyQuantity() { this->maxBuyQuantity_ = nullptr;};
            inline int32_t getMaxBuyQuantity() const { DARABONBA_PTR_GET_DEFAULT(maxBuyQuantity_, 0) };
            inline PerOrderBuyQuantityLimitRule& setMaxBuyQuantity(int32_t maxBuyQuantity) { DARABONBA_PTR_SET_VALUE(maxBuyQuantity_, maxBuyQuantity) };


            // minBuyQuantity Field Functions 
            bool hasMinBuyQuantity() const { return this->minBuyQuantity_ != nullptr;};
            void deleteMinBuyQuantity() { this->minBuyQuantity_ = nullptr;};
            inline int32_t getMinBuyQuantity() const { DARABONBA_PTR_GET_DEFAULT(minBuyQuantity_, 0) };
            inline PerOrderBuyQuantityLimitRule& setMinBuyQuantity(int32_t minBuyQuantity) { DARABONBA_PTR_SET_VALUE(minBuyQuantity_, minBuyQuantity) };


          protected:
            shared_ptr<int32_t> maxBuyQuantity_ {};
            shared_ptr<int32_t> minBuyQuantity_ {};
          };

          class CrossOrderBuyQuantityLimitRules : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const CrossOrderBuyQuantityLimitRules& obj) { 
              DARABONBA_PTR_TO_JSON(LimitDayType, limitDayType_);
              DARABONBA_PTR_TO_JSON(LimitDays, limitDays_);
              DARABONBA_PTR_TO_JSON(LimitPeriod, limitPeriod_);
              DARABONBA_PTR_TO_JSON(LimitQuantityType, limitQuantityType_);
              DARABONBA_PTR_TO_JSON(LimitType, limitType_);
              DARABONBA_PTR_TO_JSON(MaxBuyQuantity, maxBuyQuantity_);
            };
            friend void from_json(const Darabonba::Json& j, CrossOrderBuyQuantityLimitRules& obj) { 
              DARABONBA_PTR_FROM_JSON(LimitDayType, limitDayType_);
              DARABONBA_PTR_FROM_JSON(LimitDays, limitDays_);
              DARABONBA_PTR_FROM_JSON(LimitPeriod, limitPeriod_);
              DARABONBA_PTR_FROM_JSON(LimitQuantityType, limitQuantityType_);
              DARABONBA_PTR_FROM_JSON(LimitType, limitType_);
              DARABONBA_PTR_FROM_JSON(MaxBuyQuantity, maxBuyQuantity_);
            };
            CrossOrderBuyQuantityLimitRules() = default ;
            CrossOrderBuyQuantityLimitRules(const CrossOrderBuyQuantityLimitRules &) = default ;
            CrossOrderBuyQuantityLimitRules(CrossOrderBuyQuantityLimitRules &&) = default ;
            CrossOrderBuyQuantityLimitRules(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~CrossOrderBuyQuantityLimitRules() = default ;
            CrossOrderBuyQuantityLimitRules& operator=(const CrossOrderBuyQuantityLimitRules &) = default ;
            CrossOrderBuyQuantityLimitRules& operator=(CrossOrderBuyQuantityLimitRules &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->limitDayType_ == nullptr
        && this->limitDays_ == nullptr && this->limitPeriod_ == nullptr && this->limitQuantityType_ == nullptr && this->limitType_ == nullptr && this->maxBuyQuantity_ == nullptr; };
            // limitDayType Field Functions 
            bool hasLimitDayType() const { return this->limitDayType_ != nullptr;};
            void deleteLimitDayType() { this->limitDayType_ = nullptr;};
            inline int32_t getLimitDayType() const { DARABONBA_PTR_GET_DEFAULT(limitDayType_, 0) };
            inline CrossOrderBuyQuantityLimitRules& setLimitDayType(int32_t limitDayType) { DARABONBA_PTR_SET_VALUE(limitDayType_, limitDayType) };


            // limitDays Field Functions 
            bool hasLimitDays() const { return this->limitDays_ != nullptr;};
            void deleteLimitDays() { this->limitDays_ = nullptr;};
            inline int32_t getLimitDays() const { DARABONBA_PTR_GET_DEFAULT(limitDays_, 0) };
            inline CrossOrderBuyQuantityLimitRules& setLimitDays(int32_t limitDays) { DARABONBA_PTR_SET_VALUE(limitDays_, limitDays) };


            // limitPeriod Field Functions 
            bool hasLimitPeriod() const { return this->limitPeriod_ != nullptr;};
            void deleteLimitPeriod() { this->limitPeriod_ = nullptr;};
            inline int32_t getLimitPeriod() const { DARABONBA_PTR_GET_DEFAULT(limitPeriod_, 0) };
            inline CrossOrderBuyQuantityLimitRules& setLimitPeriod(int32_t limitPeriod) { DARABONBA_PTR_SET_VALUE(limitPeriod_, limitPeriod) };


            // limitQuantityType Field Functions 
            bool hasLimitQuantityType() const { return this->limitQuantityType_ != nullptr;};
            void deleteLimitQuantityType() { this->limitQuantityType_ = nullptr;};
            inline int32_t getLimitQuantityType() const { DARABONBA_PTR_GET_DEFAULT(limitQuantityType_, 0) };
            inline CrossOrderBuyQuantityLimitRules& setLimitQuantityType(int32_t limitQuantityType) { DARABONBA_PTR_SET_VALUE(limitQuantityType_, limitQuantityType) };


            // limitType Field Functions 
            bool hasLimitType() const { return this->limitType_ != nullptr;};
            void deleteLimitType() { this->limitType_ = nullptr;};
            inline int32_t getLimitType() const { DARABONBA_PTR_GET_DEFAULT(limitType_, 0) };
            inline CrossOrderBuyQuantityLimitRules& setLimitType(int32_t limitType) { DARABONBA_PTR_SET_VALUE(limitType_, limitType) };


            // maxBuyQuantity Field Functions 
            bool hasMaxBuyQuantity() const { return this->maxBuyQuantity_ != nullptr;};
            void deleteMaxBuyQuantity() { this->maxBuyQuantity_ = nullptr;};
            inline int32_t getMaxBuyQuantity() const { DARABONBA_PTR_GET_DEFAULT(maxBuyQuantity_, 0) };
            inline CrossOrderBuyQuantityLimitRules& setMaxBuyQuantity(int32_t maxBuyQuantity) { DARABONBA_PTR_SET_VALUE(maxBuyQuantity_, maxBuyQuantity) };


          protected:
            shared_ptr<int32_t> limitDayType_ {};
            shared_ptr<int32_t> limitDays_ {};
            shared_ptr<int32_t> limitPeriod_ {};
            shared_ptr<int32_t> limitQuantityType_ {};
            shared_ptr<int32_t> limitType_ {};
            shared_ptr<int32_t> maxBuyQuantity_ {};
          };

          class ContactRule : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ContactRule& obj) { 
              DARABONBA_PTR_TO_JSON(ContactFieldRule, contactFieldRule_);
            };
            friend void from_json(const Darabonba::Json& j, ContactRule& obj) { 
              DARABONBA_PTR_FROM_JSON(ContactFieldRule, contactFieldRule_);
            };
            ContactRule() = default ;
            ContactRule(const ContactRule &) = default ;
            ContactRule(ContactRule &&) = default ;
            ContactRule(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ContactRule() = default ;
            ContactRule& operator=(const ContactRule &) = default ;
            ContactRule& operator=(ContactRule &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class ContactFieldRule : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const ContactFieldRule& obj) { 
                DARABONBA_PTR_TO_JSON(Certificate, certificate_);
                DARABONBA_PTR_TO_JSON(CertificateTypes, certificateTypes_);
                DARABONBA_PTR_TO_JSON(DialingCode, dialingCode_);
                DARABONBA_PTR_TO_JSON(Email, email_);
                DARABONBA_PTR_TO_JSON(FirstName, firstName_);
                DARABONBA_PTR_TO_JSON(LastName, lastName_);
                DARABONBA_PTR_TO_JSON(Mobile, mobile_);
                DARABONBA_PTR_TO_JSON(Name, name_);
              };
              friend void from_json(const Darabonba::Json& j, ContactFieldRule& obj) { 
                DARABONBA_PTR_FROM_JSON(Certificate, certificate_);
                DARABONBA_PTR_FROM_JSON(CertificateTypes, certificateTypes_);
                DARABONBA_PTR_FROM_JSON(DialingCode, dialingCode_);
                DARABONBA_PTR_FROM_JSON(Email, email_);
                DARABONBA_PTR_FROM_JSON(FirstName, firstName_);
                DARABONBA_PTR_FROM_JSON(LastName, lastName_);
                DARABONBA_PTR_FROM_JSON(Mobile, mobile_);
                DARABONBA_PTR_FROM_JSON(Name, name_);
              };
              ContactFieldRule() = default ;
              ContactFieldRule(const ContactFieldRule &) = default ;
              ContactFieldRule(ContactFieldRule &&) = default ;
              ContactFieldRule(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~ContactFieldRule() = default ;
              ContactFieldRule& operator=(const ContactFieldRule &) = default ;
              ContactFieldRule& operator=(ContactFieldRule &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->certificate_ == nullptr
        && this->certificateTypes_ == nullptr && this->dialingCode_ == nullptr && this->email_ == nullptr && this->firstName_ == nullptr && this->lastName_ == nullptr
        && this->mobile_ == nullptr && this->name_ == nullptr; };
              // certificate Field Functions 
              bool hasCertificate() const { return this->certificate_ != nullptr;};
              void deleteCertificate() { this->certificate_ = nullptr;};
              inline bool getCertificate() const { DARABONBA_PTR_GET_DEFAULT(certificate_, false) };
              inline ContactFieldRule& setCertificate(bool certificate) { DARABONBA_PTR_SET_VALUE(certificate_, certificate) };


              // certificateTypes Field Functions 
              bool hasCertificateTypes() const { return this->certificateTypes_ != nullptr;};
              void deleteCertificateTypes() { this->certificateTypes_ = nullptr;};
              inline const vector<int32_t> & getCertificateTypes() const { DARABONBA_PTR_GET_CONST(certificateTypes_, vector<int32_t>) };
              inline vector<int32_t> getCertificateTypes() { DARABONBA_PTR_GET(certificateTypes_, vector<int32_t>) };
              inline ContactFieldRule& setCertificateTypes(const vector<int32_t> & certificateTypes) { DARABONBA_PTR_SET_VALUE(certificateTypes_, certificateTypes) };
              inline ContactFieldRule& setCertificateTypes(vector<int32_t> && certificateTypes) { DARABONBA_PTR_SET_RVALUE(certificateTypes_, certificateTypes) };


              // dialingCode Field Functions 
              bool hasDialingCode() const { return this->dialingCode_ != nullptr;};
              void deleteDialingCode() { this->dialingCode_ = nullptr;};
              inline bool getDialingCode() const { DARABONBA_PTR_GET_DEFAULT(dialingCode_, false) };
              inline ContactFieldRule& setDialingCode(bool dialingCode) { DARABONBA_PTR_SET_VALUE(dialingCode_, dialingCode) };


              // email Field Functions 
              bool hasEmail() const { return this->email_ != nullptr;};
              void deleteEmail() { this->email_ = nullptr;};
              inline bool getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, false) };
              inline ContactFieldRule& setEmail(bool email) { DARABONBA_PTR_SET_VALUE(email_, email) };


              // firstName Field Functions 
              bool hasFirstName() const { return this->firstName_ != nullptr;};
              void deleteFirstName() { this->firstName_ = nullptr;};
              inline bool getFirstName() const { DARABONBA_PTR_GET_DEFAULT(firstName_, false) };
              inline ContactFieldRule& setFirstName(bool firstName) { DARABONBA_PTR_SET_VALUE(firstName_, firstName) };


              // lastName Field Functions 
              bool hasLastName() const { return this->lastName_ != nullptr;};
              void deleteLastName() { this->lastName_ = nullptr;};
              inline bool getLastName() const { DARABONBA_PTR_GET_DEFAULT(lastName_, false) };
              inline ContactFieldRule& setLastName(bool lastName) { DARABONBA_PTR_SET_VALUE(lastName_, lastName) };


              // mobile Field Functions 
              bool hasMobile() const { return this->mobile_ != nullptr;};
              void deleteMobile() { this->mobile_ = nullptr;};
              inline bool getMobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, false) };
              inline ContactFieldRule& setMobile(bool mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


              // name Field Functions 
              bool hasName() const { return this->name_ != nullptr;};
              void deleteName() { this->name_ = nullptr;};
              inline bool getName() const { DARABONBA_PTR_GET_DEFAULT(name_, false) };
              inline ContactFieldRule& setName(bool name) { DARABONBA_PTR_SET_VALUE(name_, name) };


            protected:
              shared_ptr<bool> certificate_ {};
              shared_ptr<vector<int32_t>> certificateTypes_ {};
              shared_ptr<bool> dialingCode_ {};
              shared_ptr<bool> email_ {};
              shared_ptr<bool> firstName_ {};
              shared_ptr<bool> lastName_ {};
              shared_ptr<bool> mobile_ {};
              shared_ptr<bool> name_ {};
            };

            virtual bool empty() const override { return this->contactFieldRule_ == nullptr; };
            // contactFieldRule Field Functions 
            bool hasContactFieldRule() const { return this->contactFieldRule_ != nullptr;};
            void deleteContactFieldRule() { this->contactFieldRule_ = nullptr;};
            inline const ContactRule::ContactFieldRule & getContactFieldRule() const { DARABONBA_PTR_GET_CONST(contactFieldRule_, ContactRule::ContactFieldRule) };
            inline ContactRule::ContactFieldRule getContactFieldRule() { DARABONBA_PTR_GET(contactFieldRule_, ContactRule::ContactFieldRule) };
            inline ContactRule& setContactFieldRule(const ContactRule::ContactFieldRule & contactFieldRule) { DARABONBA_PTR_SET_VALUE(contactFieldRule_, contactFieldRule) };
            inline ContactRule& setContactFieldRule(ContactRule::ContactFieldRule && contactFieldRule) { DARABONBA_PTR_SET_RVALUE(contactFieldRule_, contactFieldRule) };


          protected:
            shared_ptr<ContactRule::ContactFieldRule> contactFieldRule_ {};
          };

          class AheadBuyTimePointRule : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const AheadBuyTimePointRule& obj) { 
              DARABONBA_PTR_TO_JSON(Anchor, anchor_);
              DARABONBA_PTR_TO_JSON(FixedTime, fixedTime_);
              DARABONBA_PTR_TO_JSON(OffsetDayOfTime, offsetDayOfTime_);
              DARABONBA_PTR_TO_JSON(OffsetUnit, offsetUnit_);
              DARABONBA_PTR_TO_JSON(OffsetValue, offsetValue_);
            };
            friend void from_json(const Darabonba::Json& j, AheadBuyTimePointRule& obj) { 
              DARABONBA_PTR_FROM_JSON(Anchor, anchor_);
              DARABONBA_PTR_FROM_JSON(FixedTime, fixedTime_);
              DARABONBA_PTR_FROM_JSON(OffsetDayOfTime, offsetDayOfTime_);
              DARABONBA_PTR_FROM_JSON(OffsetUnit, offsetUnit_);
              DARABONBA_PTR_FROM_JSON(OffsetValue, offsetValue_);
            };
            AheadBuyTimePointRule() = default ;
            AheadBuyTimePointRule(const AheadBuyTimePointRule &) = default ;
            AheadBuyTimePointRule(AheadBuyTimePointRule &&) = default ;
            AheadBuyTimePointRule(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~AheadBuyTimePointRule() = default ;
            AheadBuyTimePointRule& operator=(const AheadBuyTimePointRule &) = default ;
            AheadBuyTimePointRule& operator=(AheadBuyTimePointRule &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->anchor_ == nullptr
        && this->fixedTime_ == nullptr && this->offsetDayOfTime_ == nullptr && this->offsetUnit_ == nullptr && this->offsetValue_ == nullptr; };
            // anchor Field Functions 
            bool hasAnchor() const { return this->anchor_ != nullptr;};
            void deleteAnchor() { this->anchor_ = nullptr;};
            inline int32_t getAnchor() const { DARABONBA_PTR_GET_DEFAULT(anchor_, 0) };
            inline AheadBuyTimePointRule& setAnchor(int32_t anchor) { DARABONBA_PTR_SET_VALUE(anchor_, anchor) };


            // fixedTime Field Functions 
            bool hasFixedTime() const { return this->fixedTime_ != nullptr;};
            void deleteFixedTime() { this->fixedTime_ = nullptr;};
            inline string getFixedTime() const { DARABONBA_PTR_GET_DEFAULT(fixedTime_, "") };
            inline AheadBuyTimePointRule& setFixedTime(string fixedTime) { DARABONBA_PTR_SET_VALUE(fixedTime_, fixedTime) };


            // offsetDayOfTime Field Functions 
            bool hasOffsetDayOfTime() const { return this->offsetDayOfTime_ != nullptr;};
            void deleteOffsetDayOfTime() { this->offsetDayOfTime_ = nullptr;};
            inline string getOffsetDayOfTime() const { DARABONBA_PTR_GET_DEFAULT(offsetDayOfTime_, "") };
            inline AheadBuyTimePointRule& setOffsetDayOfTime(string offsetDayOfTime) { DARABONBA_PTR_SET_VALUE(offsetDayOfTime_, offsetDayOfTime) };


            // offsetUnit Field Functions 
            bool hasOffsetUnit() const { return this->offsetUnit_ != nullptr;};
            void deleteOffsetUnit() { this->offsetUnit_ = nullptr;};
            inline int32_t getOffsetUnit() const { DARABONBA_PTR_GET_DEFAULT(offsetUnit_, 0) };
            inline AheadBuyTimePointRule& setOffsetUnit(int32_t offsetUnit) { DARABONBA_PTR_SET_VALUE(offsetUnit_, offsetUnit) };


            // offsetValue Field Functions 
            bool hasOffsetValue() const { return this->offsetValue_ != nullptr;};
            void deleteOffsetValue() { this->offsetValue_ = nullptr;};
            inline int32_t getOffsetValue() const { DARABONBA_PTR_GET_DEFAULT(offsetValue_, 0) };
            inline AheadBuyTimePointRule& setOffsetValue(int32_t offsetValue) { DARABONBA_PTR_SET_VALUE(offsetValue_, offsetValue) };


          protected:
            shared_ptr<int32_t> anchor_ {};
            shared_ptr<string> fixedTime_ {};
            shared_ptr<string> offsetDayOfTime_ {};
            shared_ptr<int32_t> offsetUnit_ {};
            shared_ptr<int32_t> offsetValue_ {};
          };

          virtual bool empty() const override { return this->aheadBuyTimePointRule_ == nullptr
        && this->contactRule_ == nullptr && this->crossOrderBuyQuantityLimitRules_ == nullptr && this->perOrderBuyQuantityLimitRule_ == nullptr && this->travelerRule_ == nullptr; };
          // aheadBuyTimePointRule Field Functions 
          bool hasAheadBuyTimePointRule() const { return this->aheadBuyTimePointRule_ != nullptr;};
          void deleteAheadBuyTimePointRule() { this->aheadBuyTimePointRule_ = nullptr;};
          inline const BuyRule::AheadBuyTimePointRule & getAheadBuyTimePointRule() const { DARABONBA_PTR_GET_CONST(aheadBuyTimePointRule_, BuyRule::AheadBuyTimePointRule) };
          inline BuyRule::AheadBuyTimePointRule getAheadBuyTimePointRule() { DARABONBA_PTR_GET(aheadBuyTimePointRule_, BuyRule::AheadBuyTimePointRule) };
          inline BuyRule& setAheadBuyTimePointRule(const BuyRule::AheadBuyTimePointRule & aheadBuyTimePointRule) { DARABONBA_PTR_SET_VALUE(aheadBuyTimePointRule_, aheadBuyTimePointRule) };
          inline BuyRule& setAheadBuyTimePointRule(BuyRule::AheadBuyTimePointRule && aheadBuyTimePointRule) { DARABONBA_PTR_SET_RVALUE(aheadBuyTimePointRule_, aheadBuyTimePointRule) };


          // contactRule Field Functions 
          bool hasContactRule() const { return this->contactRule_ != nullptr;};
          void deleteContactRule() { this->contactRule_ = nullptr;};
          inline const BuyRule::ContactRule & getContactRule() const { DARABONBA_PTR_GET_CONST(contactRule_, BuyRule::ContactRule) };
          inline BuyRule::ContactRule getContactRule() { DARABONBA_PTR_GET(contactRule_, BuyRule::ContactRule) };
          inline BuyRule& setContactRule(const BuyRule::ContactRule & contactRule) { DARABONBA_PTR_SET_VALUE(contactRule_, contactRule) };
          inline BuyRule& setContactRule(BuyRule::ContactRule && contactRule) { DARABONBA_PTR_SET_RVALUE(contactRule_, contactRule) };


          // crossOrderBuyQuantityLimitRules Field Functions 
          bool hasCrossOrderBuyQuantityLimitRules() const { return this->crossOrderBuyQuantityLimitRules_ != nullptr;};
          void deleteCrossOrderBuyQuantityLimitRules() { this->crossOrderBuyQuantityLimitRules_ = nullptr;};
          inline const vector<BuyRule::CrossOrderBuyQuantityLimitRules> & getCrossOrderBuyQuantityLimitRules() const { DARABONBA_PTR_GET_CONST(crossOrderBuyQuantityLimitRules_, vector<BuyRule::CrossOrderBuyQuantityLimitRules>) };
          inline vector<BuyRule::CrossOrderBuyQuantityLimitRules> getCrossOrderBuyQuantityLimitRules() { DARABONBA_PTR_GET(crossOrderBuyQuantityLimitRules_, vector<BuyRule::CrossOrderBuyQuantityLimitRules>) };
          inline BuyRule& setCrossOrderBuyQuantityLimitRules(const vector<BuyRule::CrossOrderBuyQuantityLimitRules> & crossOrderBuyQuantityLimitRules) { DARABONBA_PTR_SET_VALUE(crossOrderBuyQuantityLimitRules_, crossOrderBuyQuantityLimitRules) };
          inline BuyRule& setCrossOrderBuyQuantityLimitRules(vector<BuyRule::CrossOrderBuyQuantityLimitRules> && crossOrderBuyQuantityLimitRules) { DARABONBA_PTR_SET_RVALUE(crossOrderBuyQuantityLimitRules_, crossOrderBuyQuantityLimitRules) };


          // perOrderBuyQuantityLimitRule Field Functions 
          bool hasPerOrderBuyQuantityLimitRule() const { return this->perOrderBuyQuantityLimitRule_ != nullptr;};
          void deletePerOrderBuyQuantityLimitRule() { this->perOrderBuyQuantityLimitRule_ = nullptr;};
          inline const BuyRule::PerOrderBuyQuantityLimitRule & getPerOrderBuyQuantityLimitRule() const { DARABONBA_PTR_GET_CONST(perOrderBuyQuantityLimitRule_, BuyRule::PerOrderBuyQuantityLimitRule) };
          inline BuyRule::PerOrderBuyQuantityLimitRule getPerOrderBuyQuantityLimitRule() { DARABONBA_PTR_GET(perOrderBuyQuantityLimitRule_, BuyRule::PerOrderBuyQuantityLimitRule) };
          inline BuyRule& setPerOrderBuyQuantityLimitRule(const BuyRule::PerOrderBuyQuantityLimitRule & perOrderBuyQuantityLimitRule) { DARABONBA_PTR_SET_VALUE(perOrderBuyQuantityLimitRule_, perOrderBuyQuantityLimitRule) };
          inline BuyRule& setPerOrderBuyQuantityLimitRule(BuyRule::PerOrderBuyQuantityLimitRule && perOrderBuyQuantityLimitRule) { DARABONBA_PTR_SET_RVALUE(perOrderBuyQuantityLimitRule_, perOrderBuyQuantityLimitRule) };


          // travelerRule Field Functions 
          bool hasTravelerRule() const { return this->travelerRule_ != nullptr;};
          void deleteTravelerRule() { this->travelerRule_ = nullptr;};
          inline const BuyRule::TravelerRule & getTravelerRule() const { DARABONBA_PTR_GET_CONST(travelerRule_, BuyRule::TravelerRule) };
          inline BuyRule::TravelerRule getTravelerRule() { DARABONBA_PTR_GET(travelerRule_, BuyRule::TravelerRule) };
          inline BuyRule& setTravelerRule(const BuyRule::TravelerRule & travelerRule) { DARABONBA_PTR_SET_VALUE(travelerRule_, travelerRule) };
          inline BuyRule& setTravelerRule(BuyRule::TravelerRule && travelerRule) { DARABONBA_PTR_SET_RVALUE(travelerRule_, travelerRule) };


        protected:
          shared_ptr<BuyRule::AheadBuyTimePointRule> aheadBuyTimePointRule_ {};
          shared_ptr<BuyRule::ContactRule> contactRule_ {};
          shared_ptr<vector<BuyRule::CrossOrderBuyQuantityLimitRules>> crossOrderBuyQuantityLimitRules_ {};
          shared_ptr<BuyRule::PerOrderBuyQuantityLimitRule> perOrderBuyQuantityLimitRule_ {};
          shared_ptr<BuyRule::TravelerRule> travelerRule_ {};
        };

        virtual bool empty() const override { return this->bookingType_ == nullptr
        && this->buyRule_ == nullptr && this->costIncludeRemark_ == nullptr && this->deliverGuaranteeMinutes_ == nullptr && this->images_ == nullptr && this->invoiceIssuerType_ == nullptr
        && this->paymentLimitMinutes_ == nullptr && this->productId_ == nullptr && this->productName_ == nullptr && this->refundRule_ == nullptr && this->region_ == nullptr
        && this->scenicId_ == nullptr && this->session_ == nullptr && this->settlePriceCalculateType_ == nullptr && this->spu_ == nullptr && this->supplierName_ == nullptr
        && this->ticketKind_ == nullptr && this->useRule_ == nullptr; };
        // bookingType Field Functions 
        bool hasBookingType() const { return this->bookingType_ != nullptr;};
        void deleteBookingType() { this->bookingType_ = nullptr;};
        inline int32_t getBookingType() const { DARABONBA_PTR_GET_DEFAULT(bookingType_, 0) };
        inline Products& setBookingType(int32_t bookingType) { DARABONBA_PTR_SET_VALUE(bookingType_, bookingType) };


        // buyRule Field Functions 
        bool hasBuyRule() const { return this->buyRule_ != nullptr;};
        void deleteBuyRule() { this->buyRule_ = nullptr;};
        inline const Products::BuyRule & getBuyRule() const { DARABONBA_PTR_GET_CONST(buyRule_, Products::BuyRule) };
        inline Products::BuyRule getBuyRule() { DARABONBA_PTR_GET(buyRule_, Products::BuyRule) };
        inline Products& setBuyRule(const Products::BuyRule & buyRule) { DARABONBA_PTR_SET_VALUE(buyRule_, buyRule) };
        inline Products& setBuyRule(Products::BuyRule && buyRule) { DARABONBA_PTR_SET_RVALUE(buyRule_, buyRule) };


        // costIncludeRemark Field Functions 
        bool hasCostIncludeRemark() const { return this->costIncludeRemark_ != nullptr;};
        void deleteCostIncludeRemark() { this->costIncludeRemark_ = nullptr;};
        inline string getCostIncludeRemark() const { DARABONBA_PTR_GET_DEFAULT(costIncludeRemark_, "") };
        inline Products& setCostIncludeRemark(string costIncludeRemark) { DARABONBA_PTR_SET_VALUE(costIncludeRemark_, costIncludeRemark) };


        // deliverGuaranteeMinutes Field Functions 
        bool hasDeliverGuaranteeMinutes() const { return this->deliverGuaranteeMinutes_ != nullptr;};
        void deleteDeliverGuaranteeMinutes() { this->deliverGuaranteeMinutes_ = nullptr;};
        inline int32_t getDeliverGuaranteeMinutes() const { DARABONBA_PTR_GET_DEFAULT(deliverGuaranteeMinutes_, 0) };
        inline Products& setDeliverGuaranteeMinutes(int32_t deliverGuaranteeMinutes) { DARABONBA_PTR_SET_VALUE(deliverGuaranteeMinutes_, deliverGuaranteeMinutes) };


        // images Field Functions 
        bool hasImages() const { return this->images_ != nullptr;};
        void deleteImages() { this->images_ = nullptr;};
        inline const vector<string> & getImages() const { DARABONBA_PTR_GET_CONST(images_, vector<string>) };
        inline vector<string> getImages() { DARABONBA_PTR_GET(images_, vector<string>) };
        inline Products& setImages(const vector<string> & images) { DARABONBA_PTR_SET_VALUE(images_, images) };
        inline Products& setImages(vector<string> && images) { DARABONBA_PTR_SET_RVALUE(images_, images) };


        // invoiceIssuerType Field Functions 
        bool hasInvoiceIssuerType() const { return this->invoiceIssuerType_ != nullptr;};
        void deleteInvoiceIssuerType() { this->invoiceIssuerType_ = nullptr;};
        inline int32_t getInvoiceIssuerType() const { DARABONBA_PTR_GET_DEFAULT(invoiceIssuerType_, 0) };
        inline Products& setInvoiceIssuerType(int32_t invoiceIssuerType) { DARABONBA_PTR_SET_VALUE(invoiceIssuerType_, invoiceIssuerType) };


        // paymentLimitMinutes Field Functions 
        bool hasPaymentLimitMinutes() const { return this->paymentLimitMinutes_ != nullptr;};
        void deletePaymentLimitMinutes() { this->paymentLimitMinutes_ = nullptr;};
        inline int32_t getPaymentLimitMinutes() const { DARABONBA_PTR_GET_DEFAULT(paymentLimitMinutes_, 0) };
        inline Products& setPaymentLimitMinutes(int32_t paymentLimitMinutes) { DARABONBA_PTR_SET_VALUE(paymentLimitMinutes_, paymentLimitMinutes) };


        // productId Field Functions 
        bool hasProductId() const { return this->productId_ != nullptr;};
        void deleteProductId() { this->productId_ = nullptr;};
        inline string getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
        inline Products& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


        // productName Field Functions 
        bool hasProductName() const { return this->productName_ != nullptr;};
        void deleteProductName() { this->productName_ = nullptr;};
        inline string getProductName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
        inline Products& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


        // refundRule Field Functions 
        bool hasRefundRule() const { return this->refundRule_ != nullptr;};
        void deleteRefundRule() { this->refundRule_ = nullptr;};
        inline const Products::RefundRule & getRefundRule() const { DARABONBA_PTR_GET_CONST(refundRule_, Products::RefundRule) };
        inline Products::RefundRule getRefundRule() { DARABONBA_PTR_GET(refundRule_, Products::RefundRule) };
        inline Products& setRefundRule(const Products::RefundRule & refundRule) { DARABONBA_PTR_SET_VALUE(refundRule_, refundRule) };
        inline Products& setRefundRule(Products::RefundRule && refundRule) { DARABONBA_PTR_SET_RVALUE(refundRule_, refundRule) };


        // region Field Functions 
        bool hasRegion() const { return this->region_ != nullptr;};
        void deleteRegion() { this->region_ = nullptr;};
        inline const Products::Region & getRegion() const { DARABONBA_PTR_GET_CONST(region_, Products::Region) };
        inline Products::Region getRegion() { DARABONBA_PTR_GET(region_, Products::Region) };
        inline Products& setRegion(const Products::Region & region) { DARABONBA_PTR_SET_VALUE(region_, region) };
        inline Products& setRegion(Products::Region && region) { DARABONBA_PTR_SET_RVALUE(region_, region) };


        // scenicId Field Functions 
        bool hasScenicId() const { return this->scenicId_ != nullptr;};
        void deleteScenicId() { this->scenicId_ = nullptr;};
        inline int64_t getScenicId() const { DARABONBA_PTR_GET_DEFAULT(scenicId_, 0L) };
        inline Products& setScenicId(int64_t scenicId) { DARABONBA_PTR_SET_VALUE(scenicId_, scenicId) };


        // session Field Functions 
        bool hasSession() const { return this->session_ != nullptr;};
        void deleteSession() { this->session_ = nullptr;};
        inline const Products::Session & getSession() const { DARABONBA_PTR_GET_CONST(session_, Products::Session) };
        inline Products::Session getSession() { DARABONBA_PTR_GET(session_, Products::Session) };
        inline Products& setSession(const Products::Session & session) { DARABONBA_PTR_SET_VALUE(session_, session) };
        inline Products& setSession(Products::Session && session) { DARABONBA_PTR_SET_RVALUE(session_, session) };


        // settlePriceCalculateType Field Functions 
        bool hasSettlePriceCalculateType() const { return this->settlePriceCalculateType_ != nullptr;};
        void deleteSettlePriceCalculateType() { this->settlePriceCalculateType_ = nullptr;};
        inline int32_t getSettlePriceCalculateType() const { DARABONBA_PTR_GET_DEFAULT(settlePriceCalculateType_, 0) };
        inline Products& setSettlePriceCalculateType(int32_t settlePriceCalculateType) { DARABONBA_PTR_SET_VALUE(settlePriceCalculateType_, settlePriceCalculateType) };


        // spu Field Functions 
        bool hasSpu() const { return this->spu_ != nullptr;};
        void deleteSpu() { this->spu_ = nullptr;};
        inline const Products::Spu & getSpu() const { DARABONBA_PTR_GET_CONST(spu_, Products::Spu) };
        inline Products::Spu getSpu() { DARABONBA_PTR_GET(spu_, Products::Spu) };
        inline Products& setSpu(const Products::Spu & spu) { DARABONBA_PTR_SET_VALUE(spu_, spu) };
        inline Products& setSpu(Products::Spu && spu) { DARABONBA_PTR_SET_RVALUE(spu_, spu) };


        // supplierName Field Functions 
        bool hasSupplierName() const { return this->supplierName_ != nullptr;};
        void deleteSupplierName() { this->supplierName_ = nullptr;};
        inline string getSupplierName() const { DARABONBA_PTR_GET_DEFAULT(supplierName_, "") };
        inline Products& setSupplierName(string supplierName) { DARABONBA_PTR_SET_VALUE(supplierName_, supplierName) };


        // ticketKind Field Functions 
        bool hasTicketKind() const { return this->ticketKind_ != nullptr;};
        void deleteTicketKind() { this->ticketKind_ = nullptr;};
        inline const Products::TicketKind & getTicketKind() const { DARABONBA_PTR_GET_CONST(ticketKind_, Products::TicketKind) };
        inline Products::TicketKind getTicketKind() { DARABONBA_PTR_GET(ticketKind_, Products::TicketKind) };
        inline Products& setTicketKind(const Products::TicketKind & ticketKind) { DARABONBA_PTR_SET_VALUE(ticketKind_, ticketKind) };
        inline Products& setTicketKind(Products::TicketKind && ticketKind) { DARABONBA_PTR_SET_RVALUE(ticketKind_, ticketKind) };


        // useRule Field Functions 
        bool hasUseRule() const { return this->useRule_ != nullptr;};
        void deleteUseRule() { this->useRule_ = nullptr;};
        inline const Products::UseRule & getUseRule() const { DARABONBA_PTR_GET_CONST(useRule_, Products::UseRule) };
        inline Products::UseRule getUseRule() { DARABONBA_PTR_GET(useRule_, Products::UseRule) };
        inline Products& setUseRule(const Products::UseRule & useRule) { DARABONBA_PTR_SET_VALUE(useRule_, useRule) };
        inline Products& setUseRule(Products::UseRule && useRule) { DARABONBA_PTR_SET_RVALUE(useRule_, useRule) };


      protected:
        shared_ptr<int32_t> bookingType_ {};
        shared_ptr<Products::BuyRule> buyRule_ {};
        shared_ptr<string> costIncludeRemark_ {};
        shared_ptr<int32_t> deliverGuaranteeMinutes_ {};
        shared_ptr<vector<string>> images_ {};
        shared_ptr<int32_t> invoiceIssuerType_ {};
        shared_ptr<int32_t> paymentLimitMinutes_ {};
        shared_ptr<string> productId_ {};
        shared_ptr<string> productName_ {};
        shared_ptr<Products::RefundRule> refundRule_ {};
        shared_ptr<Products::Region> region_ {};
        shared_ptr<int64_t> scenicId_ {};
        shared_ptr<Products::Session> session_ {};
        shared_ptr<int32_t> settlePriceCalculateType_ {};
        shared_ptr<Products::Spu> spu_ {};
        shared_ptr<string> supplierName_ {};
        shared_ptr<Products::TicketKind> ticketKind_ {};
        shared_ptr<Products::UseRule> useRule_ {};
      };

      virtual bool empty() const override { return this->products_ == nullptr
        && this->totalSize_ == nullptr; };
      // products Field Functions 
      bool hasProducts() const { return this->products_ != nullptr;};
      void deleteProducts() { this->products_ = nullptr;};
      inline const vector<Data::Products> & getProducts() const { DARABONBA_PTR_GET_CONST(products_, vector<Data::Products>) };
      inline vector<Data::Products> getProducts() { DARABONBA_PTR_GET(products_, vector<Data::Products>) };
      inline Data& setProducts(const vector<Data::Products> & products) { DARABONBA_PTR_SET_VALUE(products_, products) };
      inline Data& setProducts(vector<Data::Products> && products) { DARABONBA_PTR_SET_RVALUE(products_, products) };


      // totalSize Field Functions 
      bool hasTotalSize() const { return this->totalSize_ != nullptr;};
      void deleteTotalSize() { this->totalSize_ = nullptr;};
      inline int64_t getTotalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0L) };
      inline Data& setTotalSize(int64_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


    protected:
      shared_ptr<vector<Data::Products>> products_ {};
      shared_ptr<int64_t> totalSize_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMsg_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const TicketPageQueryProductResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, TicketPageQueryProductResponseBody::Data) };
    inline TicketPageQueryProductResponseBody::Data getData() { DARABONBA_PTR_GET(data_, TicketPageQueryProductResponseBody::Data) };
    inline TicketPageQueryProductResponseBody& setData(const TicketPageQueryProductResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline TicketPageQueryProductResponseBody& setData(TicketPageQueryProductResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline TicketPageQueryProductResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline TicketPageQueryProductResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline TicketPageQueryProductResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline TicketPageQueryProductResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<TicketPageQueryProductResponseBody::Data> data_ {};
    shared_ptr<string> errorCode_ {};
    shared_ptr<string> errorMsg_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
