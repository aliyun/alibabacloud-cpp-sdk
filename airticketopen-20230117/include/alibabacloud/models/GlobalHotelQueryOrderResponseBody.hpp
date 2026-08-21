// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GLOBALHOTELQUERYORDERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GLOBALHOTELQUERYORDERRESPONSEBODY_HPP_
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
  class GlobalHotelQueryOrderResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GlobalHotelQueryOrderResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TracerId, tracerId_);
    };
    friend void from_json(const Darabonba::Json& j, GlobalHotelQueryOrderResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TracerId, tracerId_);
    };
    GlobalHotelQueryOrderResponseBody() = default ;
    GlobalHotelQueryOrderResponseBody(const GlobalHotelQueryOrderResponseBody &) = default ;
    GlobalHotelQueryOrderResponseBody(GlobalHotelQueryOrderResponseBody &&) = default ;
    GlobalHotelQueryOrderResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GlobalHotelQueryOrderResponseBody() = default ;
    GlobalHotelQueryOrderResponseBody& operator=(const GlobalHotelQueryOrderResponseBody &) = default ;
    GlobalHotelQueryOrderResponseBody& operator=(GlobalHotelQueryOrderResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(BuyerId, buyerId_);
        DARABONBA_PTR_TO_JSON(ExternalOrderNo, externalOrderNo_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(ItemInfo, itemInfo_);
        DARABONBA_PTR_TO_JSON(OrderNo, orderNo_);
        DARABONBA_PTR_TO_JSON(Payment, payment_);
        DARABONBA_PTR_TO_JSON(RefundOrders, refundOrders_);
        DARABONBA_PTR_TO_JSON(RoomStays, roomStays_);
        DARABONBA_PTR_TO_JSON(SalesChannel, salesChannel_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TracerId, tracerId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(BuyerId, buyerId_);
        DARABONBA_PTR_FROM_JSON(ExternalOrderNo, externalOrderNo_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(ItemInfo, itemInfo_);
        DARABONBA_PTR_FROM_JSON(OrderNo, orderNo_);
        DARABONBA_PTR_FROM_JSON(Payment, payment_);
        DARABONBA_PTR_FROM_JSON(RefundOrders, refundOrders_);
        DARABONBA_PTR_FROM_JSON(RoomStays, roomStays_);
        DARABONBA_PTR_FROM_JSON(SalesChannel, salesChannel_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TracerId, tracerId_);
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
      class RoomStays : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RoomStays& obj) { 
          DARABONBA_PTR_TO_JSON(ConfirmationId, confirmationId_);
          DARABONBA_PTR_TO_JSON(Guests, guests_);
          DARABONBA_PTR_TO_JSON(RoomIndex, roomIndex_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, RoomStays& obj) { 
          DARABONBA_PTR_FROM_JSON(ConfirmationId, confirmationId_);
          DARABONBA_PTR_FROM_JSON(Guests, guests_);
          DARABONBA_PTR_FROM_JSON(RoomIndex, roomIndex_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        RoomStays() = default ;
        RoomStays(const RoomStays &) = default ;
        RoomStays(RoomStays &&) = default ;
        RoomStays(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RoomStays() = default ;
        RoomStays& operator=(const RoomStays &) = default ;
        RoomStays& operator=(RoomStays &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Guests : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Guests& obj) { 
            DARABONBA_PTR_TO_JSON(FirstName, firstName_);
            DARABONBA_PTR_TO_JSON(LastName, lastName_);
            DARABONBA_PTR_TO_JSON(TracerId, tracerId_);
          };
          friend void from_json(const Darabonba::Json& j, Guests& obj) { 
            DARABONBA_PTR_FROM_JSON(FirstName, firstName_);
            DARABONBA_PTR_FROM_JSON(LastName, lastName_);
            DARABONBA_PTR_FROM_JSON(TracerId, tracerId_);
          };
          Guests() = default ;
          Guests(const Guests &) = default ;
          Guests(Guests &&) = default ;
          Guests(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Guests() = default ;
          Guests& operator=(const Guests &) = default ;
          Guests& operator=(Guests &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->firstName_ == nullptr
        && this->lastName_ == nullptr && this->tracerId_ == nullptr; };
          // firstName Field Functions 
          bool hasFirstName() const { return this->firstName_ != nullptr;};
          void deleteFirstName() { this->firstName_ = nullptr;};
          inline string getFirstName() const { DARABONBA_PTR_GET_DEFAULT(firstName_, "") };
          inline Guests& setFirstName(string firstName) { DARABONBA_PTR_SET_VALUE(firstName_, firstName) };


          // lastName Field Functions 
          bool hasLastName() const { return this->lastName_ != nullptr;};
          void deleteLastName() { this->lastName_ = nullptr;};
          inline string getLastName() const { DARABONBA_PTR_GET_DEFAULT(lastName_, "") };
          inline Guests& setLastName(string lastName) { DARABONBA_PTR_SET_VALUE(lastName_, lastName) };


          // tracerId Field Functions 
          bool hasTracerId() const { return this->tracerId_ != nullptr;};
          void deleteTracerId() { this->tracerId_ = nullptr;};
          inline string getTracerId() const { DARABONBA_PTR_GET_DEFAULT(tracerId_, "") };
          inline Guests& setTracerId(string tracerId) { DARABONBA_PTR_SET_VALUE(tracerId_, tracerId) };


        protected:
          // The first name of the guest.
          shared_ptr<string> firstName_ {};
          // The last name of the guest.
          shared_ptr<string> lastName_ {};
          // TraceId
          shared_ptr<string> tracerId_ {};
        };

        virtual bool empty() const override { return this->confirmationId_ == nullptr
        && this->guests_ == nullptr && this->roomIndex_ == nullptr && this->status_ == nullptr; };
        // confirmationId Field Functions 
        bool hasConfirmationId() const { return this->confirmationId_ != nullptr;};
        void deleteConfirmationId() { this->confirmationId_ = nullptr;};
        inline string getConfirmationId() const { DARABONBA_PTR_GET_DEFAULT(confirmationId_, "") };
        inline RoomStays& setConfirmationId(string confirmationId) { DARABONBA_PTR_SET_VALUE(confirmationId_, confirmationId) };


        // guests Field Functions 
        bool hasGuests() const { return this->guests_ != nullptr;};
        void deleteGuests() { this->guests_ = nullptr;};
        inline const vector<RoomStays::Guests> & getGuests() const { DARABONBA_PTR_GET_CONST(guests_, vector<RoomStays::Guests>) };
        inline vector<RoomStays::Guests> getGuests() { DARABONBA_PTR_GET(guests_, vector<RoomStays::Guests>) };
        inline RoomStays& setGuests(const vector<RoomStays::Guests> & guests) { DARABONBA_PTR_SET_VALUE(guests_, guests) };
        inline RoomStays& setGuests(vector<RoomStays::Guests> && guests) { DARABONBA_PTR_SET_RVALUE(guests_, guests) };


        // roomIndex Field Functions 
        bool hasRoomIndex() const { return this->roomIndex_ != nullptr;};
        void deleteRoomIndex() { this->roomIndex_ = nullptr;};
        inline int32_t getRoomIndex() const { DARABONBA_PTR_GET_DEFAULT(roomIndex_, 0) };
        inline RoomStays& setRoomIndex(int32_t roomIndex) { DARABONBA_PTR_SET_VALUE(roomIndex_, roomIndex) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline RoomStays& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The room confirmation ID.
        shared_ptr<string> confirmationId_ {};
        // The list of guests.
        shared_ptr<vector<RoomStays::Guests>> guests_ {};
        // The room index, starting from 1.
        shared_ptr<int32_t> roomIndex_ {};
        // The fulfillment status (PENDING_CHECKIN/CHECKED_IN/CHECKED_OUT/CANCELLED). The value is null before the fulfillment is created.
        shared_ptr<string> status_ {};
      };

      class RefundOrders : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RefundOrders& obj) { 
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(RefundOrderNo, refundOrderNo_);
          DARABONBA_PTR_TO_JSON(RefundTransactionId, refundTransactionId_);
          DARABONBA_PTR_TO_JSON(RejectReason, rejectReason_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(TotalPenaltyAmount, totalPenaltyAmount_);
          DARABONBA_PTR_TO_JSON(TotalRefundAmount, totalRefundAmount_);
        };
        friend void from_json(const Darabonba::Json& j, RefundOrders& obj) { 
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(RefundOrderNo, refundOrderNo_);
          DARABONBA_PTR_FROM_JSON(RefundTransactionId, refundTransactionId_);
          DARABONBA_PTR_FROM_JSON(RejectReason, rejectReason_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(TotalPenaltyAmount, totalPenaltyAmount_);
          DARABONBA_PTR_FROM_JSON(TotalRefundAmount, totalRefundAmount_);
        };
        RefundOrders() = default ;
        RefundOrders(const RefundOrders &) = default ;
        RefundOrders(RefundOrders &&) = default ;
        RefundOrders(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RefundOrders() = default ;
        RefundOrders& operator=(const RefundOrders &) = default ;
        RefundOrders& operator=(RefundOrders &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class TotalRefundAmount : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TotalRefundAmount& obj) { 
            DARABONBA_PTR_TO_JSON(Amount, amount_);
            DARABONBA_PTR_TO_JSON(Currency, currency_);
            DARABONBA_PTR_TO_JSON(TracerId, tracerId_);
          };
          friend void from_json(const Darabonba::Json& j, TotalRefundAmount& obj) { 
            DARABONBA_PTR_FROM_JSON(Amount, amount_);
            DARABONBA_PTR_FROM_JSON(Currency, currency_);
            DARABONBA_PTR_FROM_JSON(TracerId, tracerId_);
          };
          TotalRefundAmount() = default ;
          TotalRefundAmount(const TotalRefundAmount &) = default ;
          TotalRefundAmount(TotalRefundAmount &&) = default ;
          TotalRefundAmount(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TotalRefundAmount() = default ;
          TotalRefundAmount& operator=(const TotalRefundAmount &) = default ;
          TotalRefundAmount& operator=(TotalRefundAmount &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->amount_ == nullptr
        && this->currency_ == nullptr && this->tracerId_ == nullptr; };
          // amount Field Functions 
          bool hasAmount() const { return this->amount_ != nullptr;};
          void deleteAmount() { this->amount_ = nullptr;};
          inline string getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, "") };
          inline TotalRefundAmount& setAmount(string amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


          // currency Field Functions 
          bool hasCurrency() const { return this->currency_ != nullptr;};
          void deleteCurrency() { this->currency_ = nullptr;};
          inline string getCurrency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
          inline TotalRefundAmount& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


          // tracerId Field Functions 
          bool hasTracerId() const { return this->tracerId_ != nullptr;};
          void deleteTracerId() { this->tracerId_ = nullptr;};
          inline string getTracerId() const { DARABONBA_PTR_GET_DEFAULT(tracerId_, "") };
          inline TotalRefundAmount& setTracerId(string tracerId) { DARABONBA_PTR_SET_VALUE(tracerId_, tracerId) };


        protected:
          // The amount in the smallest currency unit.
          shared_ptr<string> amount_ {};
          // The currency code (ISO 4217).
          shared_ptr<string> currency_ {};
          // TraceId
          shared_ptr<string> tracerId_ {};
        };

        class TotalPenaltyAmount : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TotalPenaltyAmount& obj) { 
            DARABONBA_PTR_TO_JSON(Amount, amount_);
            DARABONBA_PTR_TO_JSON(Currency, currency_);
            DARABONBA_PTR_TO_JSON(TracerId, tracerId_);
          };
          friend void from_json(const Darabonba::Json& j, TotalPenaltyAmount& obj) { 
            DARABONBA_PTR_FROM_JSON(Amount, amount_);
            DARABONBA_PTR_FROM_JSON(Currency, currency_);
            DARABONBA_PTR_FROM_JSON(TracerId, tracerId_);
          };
          TotalPenaltyAmount() = default ;
          TotalPenaltyAmount(const TotalPenaltyAmount &) = default ;
          TotalPenaltyAmount(TotalPenaltyAmount &&) = default ;
          TotalPenaltyAmount(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TotalPenaltyAmount() = default ;
          TotalPenaltyAmount& operator=(const TotalPenaltyAmount &) = default ;
          TotalPenaltyAmount& operator=(TotalPenaltyAmount &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->amount_ == nullptr
        && this->currency_ == nullptr && this->tracerId_ == nullptr; };
          // amount Field Functions 
          bool hasAmount() const { return this->amount_ != nullptr;};
          void deleteAmount() { this->amount_ = nullptr;};
          inline string getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, "") };
          inline TotalPenaltyAmount& setAmount(string amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


          // currency Field Functions 
          bool hasCurrency() const { return this->currency_ != nullptr;};
          void deleteCurrency() { this->currency_ = nullptr;};
          inline string getCurrency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
          inline TotalPenaltyAmount& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


          // tracerId Field Functions 
          bool hasTracerId() const { return this->tracerId_ != nullptr;};
          void deleteTracerId() { this->tracerId_ = nullptr;};
          inline string getTracerId() const { DARABONBA_PTR_GET_DEFAULT(tracerId_, "") };
          inline TotalPenaltyAmount& setTracerId(string tracerId) { DARABONBA_PTR_SET_VALUE(tracerId_, tracerId) };


        protected:
          // The amount in the smallest currency unit.
          shared_ptr<string> amount_ {};
          // The currency code (ISO 4217).
          shared_ptr<string> currency_ {};
          // TraceId
          shared_ptr<string> tracerId_ {};
        };

        virtual bool empty() const override { return this->gmtCreate_ == nullptr
        && this->refundOrderNo_ == nullptr && this->refundTransactionId_ == nullptr && this->rejectReason_ == nullptr && this->status_ == nullptr && this->totalPenaltyAmount_ == nullptr
        && this->totalRefundAmount_ == nullptr; };
        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline RefundOrders& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // refundOrderNo Field Functions 
        bool hasRefundOrderNo() const { return this->refundOrderNo_ != nullptr;};
        void deleteRefundOrderNo() { this->refundOrderNo_ = nullptr;};
        inline string getRefundOrderNo() const { DARABONBA_PTR_GET_DEFAULT(refundOrderNo_, "") };
        inline RefundOrders& setRefundOrderNo(string refundOrderNo) { DARABONBA_PTR_SET_VALUE(refundOrderNo_, refundOrderNo) };


        // refundTransactionId Field Functions 
        bool hasRefundTransactionId() const { return this->refundTransactionId_ != nullptr;};
        void deleteRefundTransactionId() { this->refundTransactionId_ = nullptr;};
        inline string getRefundTransactionId() const { DARABONBA_PTR_GET_DEFAULT(refundTransactionId_, "") };
        inline RefundOrders& setRefundTransactionId(string refundTransactionId) { DARABONBA_PTR_SET_VALUE(refundTransactionId_, refundTransactionId) };


        // rejectReason Field Functions 
        bool hasRejectReason() const { return this->rejectReason_ != nullptr;};
        void deleteRejectReason() { this->rejectReason_ = nullptr;};
        inline string getRejectReason() const { DARABONBA_PTR_GET_DEFAULT(rejectReason_, "") };
        inline RefundOrders& setRejectReason(string rejectReason) { DARABONBA_PTR_SET_VALUE(rejectReason_, rejectReason) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline RefundOrders& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // totalPenaltyAmount Field Functions 
        bool hasTotalPenaltyAmount() const { return this->totalPenaltyAmount_ != nullptr;};
        void deleteTotalPenaltyAmount() { this->totalPenaltyAmount_ = nullptr;};
        inline const RefundOrders::TotalPenaltyAmount & getTotalPenaltyAmount() const { DARABONBA_PTR_GET_CONST(totalPenaltyAmount_, RefundOrders::TotalPenaltyAmount) };
        inline RefundOrders::TotalPenaltyAmount getTotalPenaltyAmount() { DARABONBA_PTR_GET(totalPenaltyAmount_, RefundOrders::TotalPenaltyAmount) };
        inline RefundOrders& setTotalPenaltyAmount(const RefundOrders::TotalPenaltyAmount & totalPenaltyAmount) { DARABONBA_PTR_SET_VALUE(totalPenaltyAmount_, totalPenaltyAmount) };
        inline RefundOrders& setTotalPenaltyAmount(RefundOrders::TotalPenaltyAmount && totalPenaltyAmount) { DARABONBA_PTR_SET_RVALUE(totalPenaltyAmount_, totalPenaltyAmount) };


        // totalRefundAmount Field Functions 
        bool hasTotalRefundAmount() const { return this->totalRefundAmount_ != nullptr;};
        void deleteTotalRefundAmount() { this->totalRefundAmount_ = nullptr;};
        inline const RefundOrders::TotalRefundAmount & getTotalRefundAmount() const { DARABONBA_PTR_GET_CONST(totalRefundAmount_, RefundOrders::TotalRefundAmount) };
        inline RefundOrders::TotalRefundAmount getTotalRefundAmount() { DARABONBA_PTR_GET(totalRefundAmount_, RefundOrders::TotalRefundAmount) };
        inline RefundOrders& setTotalRefundAmount(const RefundOrders::TotalRefundAmount & totalRefundAmount) { DARABONBA_PTR_SET_VALUE(totalRefundAmount_, totalRefundAmount) };
        inline RefundOrders& setTotalRefundAmount(RefundOrders::TotalRefundAmount && totalRefundAmount) { DARABONBA_PTR_SET_RVALUE(totalRefundAmount_, totalRefundAmount) };


      protected:
        // The refund order creation time (UTC millisecond timestamp).
        shared_ptr<string> gmtCreate_ {};
        // The external refund order number.
        shared_ptr<string> refundOrderNo_ {};
        // The refund transaction ID.
        shared_ptr<string> refundTransactionId_ {};
        // The rejection reason.
        shared_ptr<string> rejectReason_ {};
        // The unified refund status.
        shared_ptr<string> status_ {};
        // The penalty amount on the sales side.
        shared_ptr<RefundOrders::TotalPenaltyAmount> totalPenaltyAmount_ {};
        // The actual refund amount.
        shared_ptr<RefundOrders::TotalRefundAmount> totalRefundAmount_ {};
      };

      class Payment : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Payment& obj) { 
          DARABONBA_PTR_TO_JSON(Amount, amount_);
          DARABONBA_PTR_TO_JSON(GmtPaid, gmtPaid_);
          DARABONBA_PTR_TO_JSON(PaymentMethod, paymentMethod_);
          DARABONBA_PTR_TO_JSON(PaymentTransactionId, paymentTransactionId_);
        };
        friend void from_json(const Darabonba::Json& j, Payment& obj) { 
          DARABONBA_PTR_FROM_JSON(Amount, amount_);
          DARABONBA_PTR_FROM_JSON(GmtPaid, gmtPaid_);
          DARABONBA_PTR_FROM_JSON(PaymentMethod, paymentMethod_);
          DARABONBA_PTR_FROM_JSON(PaymentTransactionId, paymentTransactionId_);
        };
        Payment() = default ;
        Payment(const Payment &) = default ;
        Payment(Payment &&) = default ;
        Payment(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Payment() = default ;
        Payment& operator=(const Payment &) = default ;
        Payment& operator=(Payment &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Amount : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Amount& obj) { 
            DARABONBA_PTR_TO_JSON(Amount, amount_);
            DARABONBA_PTR_TO_JSON(Currency, currency_);
            DARABONBA_PTR_TO_JSON(TracerId, tracerId_);
          };
          friend void from_json(const Darabonba::Json& j, Amount& obj) { 
            DARABONBA_PTR_FROM_JSON(Amount, amount_);
            DARABONBA_PTR_FROM_JSON(Currency, currency_);
            DARABONBA_PTR_FROM_JSON(TracerId, tracerId_);
          };
          Amount() = default ;
          Amount(const Amount &) = default ;
          Amount(Amount &&) = default ;
          Amount(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Amount() = default ;
          Amount& operator=(const Amount &) = default ;
          Amount& operator=(Amount &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->amount_ == nullptr
        && this->currency_ == nullptr && this->tracerId_ == nullptr; };
          // amount Field Functions 
          bool hasAmount() const { return this->amount_ != nullptr;};
          void deleteAmount() { this->amount_ = nullptr;};
          inline string getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, "") };
          inline Amount& setAmount(string amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


          // currency Field Functions 
          bool hasCurrency() const { return this->currency_ != nullptr;};
          void deleteCurrency() { this->currency_ = nullptr;};
          inline string getCurrency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
          inline Amount& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


          // tracerId Field Functions 
          bool hasTracerId() const { return this->tracerId_ != nullptr;};
          void deleteTracerId() { this->tracerId_ = nullptr;};
          inline string getTracerId() const { DARABONBA_PTR_GET_DEFAULT(tracerId_, "") };
          inline Amount& setTracerId(string tracerId) { DARABONBA_PTR_SET_VALUE(tracerId_, tracerId) };


        protected:
          // The amount in the smallest currency unit.
          shared_ptr<string> amount_ {};
          // The currency code (ISO 4217).
          shared_ptr<string> currency_ {};
          // TracerId
          shared_ptr<string> tracerId_ {};
        };

        virtual bool empty() const override { return this->amount_ == nullptr
        && this->gmtPaid_ == nullptr && this->paymentMethod_ == nullptr && this->paymentTransactionId_ == nullptr; };
        // amount Field Functions 
        bool hasAmount() const { return this->amount_ != nullptr;};
        void deleteAmount() { this->amount_ = nullptr;};
        inline const Payment::Amount & getAmount() const { DARABONBA_PTR_GET_CONST(amount_, Payment::Amount) };
        inline Payment::Amount getAmount() { DARABONBA_PTR_GET(amount_, Payment::Amount) };
        inline Payment& setAmount(const Payment::Amount & amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };
        inline Payment& setAmount(Payment::Amount && amount) { DARABONBA_PTR_SET_RVALUE(amount_, amount) };


        // gmtPaid Field Functions 
        bool hasGmtPaid() const { return this->gmtPaid_ != nullptr;};
        void deleteGmtPaid() { this->gmtPaid_ = nullptr;};
        inline string getGmtPaid() const { DARABONBA_PTR_GET_DEFAULT(gmtPaid_, "") };
        inline Payment& setGmtPaid(string gmtPaid) { DARABONBA_PTR_SET_VALUE(gmtPaid_, gmtPaid) };


        // paymentMethod Field Functions 
        bool hasPaymentMethod() const { return this->paymentMethod_ != nullptr;};
        void deletePaymentMethod() { this->paymentMethod_ = nullptr;};
        inline string getPaymentMethod() const { DARABONBA_PTR_GET_DEFAULT(paymentMethod_, "") };
        inline Payment& setPaymentMethod(string paymentMethod) { DARABONBA_PTR_SET_VALUE(paymentMethod_, paymentMethod) };


        // paymentTransactionId Field Functions 
        bool hasPaymentTransactionId() const { return this->paymentTransactionId_ != nullptr;};
        void deletePaymentTransactionId() { this->paymentTransactionId_ = nullptr;};
        inline string getPaymentTransactionId() const { DARABONBA_PTR_GET_DEFAULT(paymentTransactionId_, "") };
        inline Payment& setPaymentTransactionId(string paymentTransactionId) { DARABONBA_PTR_SET_VALUE(paymentTransactionId_, paymentTransactionId) };


      protected:
        // The payment amount.
        shared_ptr<Payment::Amount> amount_ {};
        // The payment completion time (UTC millisecond timestamp).
        shared_ptr<string> gmtPaid_ {};
        // The payment method.
        shared_ptr<string> paymentMethod_ {};
        // The payment transaction ID.
        shared_ptr<string> paymentTransactionId_ {};
      };

      class ItemInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ItemInfo& obj) { 
          DARABONBA_PTR_TO_JSON(CancelPolicy, cancelPolicy_);
          DARABONBA_PTR_TO_JSON(CheckIn, checkIn_);
          DARABONBA_PTR_TO_JSON(CheckInNumber, checkInNumber_);
          DARABONBA_PTR_TO_JSON(CheckOut, checkOut_);
          DARABONBA_PTR_TO_JSON(DailyPrices, dailyPrices_);
          DARABONBA_PTR_TO_JSON(Meal, meal_);
          DARABONBA_PTR_TO_JSON(RoomCount, roomCount_);
          DARABONBA_PTR_TO_JSON(TotalPrice, totalPrice_);
        };
        friend void from_json(const Darabonba::Json& j, ItemInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(CancelPolicy, cancelPolicy_);
          DARABONBA_PTR_FROM_JSON(CheckIn, checkIn_);
          DARABONBA_PTR_FROM_JSON(CheckInNumber, checkInNumber_);
          DARABONBA_PTR_FROM_JSON(CheckOut, checkOut_);
          DARABONBA_PTR_FROM_JSON(DailyPrices, dailyPrices_);
          DARABONBA_PTR_FROM_JSON(Meal, meal_);
          DARABONBA_PTR_FROM_JSON(RoomCount, roomCount_);
          DARABONBA_PTR_FROM_JSON(TotalPrice, totalPrice_);
        };
        ItemInfo() = default ;
        ItemInfo(const ItemInfo &) = default ;
        ItemInfo(ItemInfo &&) = default ;
        ItemInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ItemInfo() = default ;
        ItemInfo& operator=(const ItemInfo &) = default ;
        ItemInfo& operator=(ItemInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class TotalPrice : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TotalPrice& obj) { 
            DARABONBA_PTR_TO_JSON(Amount, amount_);
            DARABONBA_PTR_TO_JSON(Currency, currency_);
            DARABONBA_PTR_TO_JSON(TracerId, tracerId_);
          };
          friend void from_json(const Darabonba::Json& j, TotalPrice& obj) { 
            DARABONBA_PTR_FROM_JSON(Amount, amount_);
            DARABONBA_PTR_FROM_JSON(Currency, currency_);
            DARABONBA_PTR_FROM_JSON(TracerId, tracerId_);
          };
          TotalPrice() = default ;
          TotalPrice(const TotalPrice &) = default ;
          TotalPrice(TotalPrice &&) = default ;
          TotalPrice(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TotalPrice() = default ;
          TotalPrice& operator=(const TotalPrice &) = default ;
          TotalPrice& operator=(TotalPrice &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->amount_ == nullptr
        && this->currency_ == nullptr && this->tracerId_ == nullptr; };
          // amount Field Functions 
          bool hasAmount() const { return this->amount_ != nullptr;};
          void deleteAmount() { this->amount_ = nullptr;};
          inline string getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, "") };
          inline TotalPrice& setAmount(string amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


          // currency Field Functions 
          bool hasCurrency() const { return this->currency_ != nullptr;};
          void deleteCurrency() { this->currency_ = nullptr;};
          inline string getCurrency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
          inline TotalPrice& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


          // tracerId Field Functions 
          bool hasTracerId() const { return this->tracerId_ != nullptr;};
          void deleteTracerId() { this->tracerId_ = nullptr;};
          inline string getTracerId() const { DARABONBA_PTR_GET_DEFAULT(tracerId_, "") };
          inline TotalPrice& setTracerId(string tracerId) { DARABONBA_PTR_SET_VALUE(tracerId_, tracerId) };


        protected:
          // The amount in the smallest currency unit.
          shared_ptr<string> amount_ {};
          // The currency code (ISO 4217).
          shared_ptr<string> currency_ {};
          // null
          shared_ptr<string> tracerId_ {};
        };

        class Meal : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Meal& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(MealType, mealType_);
            DARABONBA_PTR_TO_JSON(TracerId, tracerId_);
          };
          friend void from_json(const Darabonba::Json& j, Meal& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(MealType, mealType_);
            DARABONBA_PTR_FROM_JSON(TracerId, tracerId_);
          };
          Meal() = default ;
          Meal(const Meal &) = default ;
          Meal(Meal &&) = default ;
          Meal(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Meal() = default ;
          Meal& operator=(const Meal &) = default ;
          Meal& operator=(Meal &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->description_ == nullptr
        && this->mealType_ == nullptr && this->tracerId_ == nullptr; };
          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline Meal& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // mealType Field Functions 
          bool hasMealType() const { return this->mealType_ != nullptr;};
          void deleteMealType() { this->mealType_ = nullptr;};
          inline string getMealType() const { DARABONBA_PTR_GET_DEFAULT(mealType_, "") };
          inline Meal& setMealType(string mealType) { DARABONBA_PTR_SET_VALUE(mealType_, mealType) };


          // tracerId Field Functions 
          bool hasTracerId() const { return this->tracerId_ != nullptr;};
          void deleteTracerId() { this->tracerId_ = nullptr;};
          inline string getTracerId() const { DARABONBA_PTR_GET_DEFAULT(tracerId_, "") };
          inline Meal& setTracerId(string tracerId) { DARABONBA_PTR_SET_VALUE(tracerId_, tracerId) };


        protected:
          // The description.
          shared_ptr<string> description_ {};
          // The meal type.
          shared_ptr<string> mealType_ {};
          // TracerId
          shared_ptr<string> tracerId_ {};
        };

        class DailyPrices : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DailyPrices& obj) { 
            DARABONBA_PTR_TO_JSON(Date, date_);
            DARABONBA_PTR_TO_JSON(Price, price_);
            DARABONBA_PTR_TO_JSON(TracerId, tracerId_);
          };
          friend void from_json(const Darabonba::Json& j, DailyPrices& obj) { 
            DARABONBA_PTR_FROM_JSON(Date, date_);
            DARABONBA_PTR_FROM_JSON(Price, price_);
            DARABONBA_PTR_FROM_JSON(TracerId, tracerId_);
          };
          DailyPrices() = default ;
          DailyPrices(const DailyPrices &) = default ;
          DailyPrices(DailyPrices &&) = default ;
          DailyPrices(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DailyPrices() = default ;
          DailyPrices& operator=(const DailyPrices &) = default ;
          DailyPrices& operator=(DailyPrices &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Price : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Price& obj) { 
              DARABONBA_PTR_TO_JSON(Amount, amount_);
              DARABONBA_PTR_TO_JSON(Currency, currency_);
              DARABONBA_PTR_TO_JSON(TracerId, tracerId_);
            };
            friend void from_json(const Darabonba::Json& j, Price& obj) { 
              DARABONBA_PTR_FROM_JSON(Amount, amount_);
              DARABONBA_PTR_FROM_JSON(Currency, currency_);
              DARABONBA_PTR_FROM_JSON(TracerId, tracerId_);
            };
            Price() = default ;
            Price(const Price &) = default ;
            Price(Price &&) = default ;
            Price(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Price() = default ;
            Price& operator=(const Price &) = default ;
            Price& operator=(Price &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->amount_ == nullptr
        && this->currency_ == nullptr && this->tracerId_ == nullptr; };
            // amount Field Functions 
            bool hasAmount() const { return this->amount_ != nullptr;};
            void deleteAmount() { this->amount_ = nullptr;};
            inline string getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, "") };
            inline Price& setAmount(string amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


            // currency Field Functions 
            bool hasCurrency() const { return this->currency_ != nullptr;};
            void deleteCurrency() { this->currency_ = nullptr;};
            inline string getCurrency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
            inline Price& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


            // tracerId Field Functions 
            bool hasTracerId() const { return this->tracerId_ != nullptr;};
            void deleteTracerId() { this->tracerId_ = nullptr;};
            inline string getTracerId() const { DARABONBA_PTR_GET_DEFAULT(tracerId_, "") };
            inline Price& setTracerId(string tracerId) { DARABONBA_PTR_SET_VALUE(tracerId_, tracerId) };


          protected:
            // The amount in the smallest currency unit.
            shared_ptr<string> amount_ {};
            // The currency.
            shared_ptr<string> currency_ {};
            // null
            shared_ptr<string> tracerId_ {};
          };

          virtual bool empty() const override { return this->date_ == nullptr
        && this->price_ == nullptr && this->tracerId_ == nullptr; };
          // date Field Functions 
          bool hasDate() const { return this->date_ != nullptr;};
          void deleteDate() { this->date_ = nullptr;};
          inline string getDate() const { DARABONBA_PTR_GET_DEFAULT(date_, "") };
          inline DailyPrices& setDate(string date) { DARABONBA_PTR_SET_VALUE(date_, date) };


          // price Field Functions 
          bool hasPrice() const { return this->price_ != nullptr;};
          void deletePrice() { this->price_ = nullptr;};
          inline const DailyPrices::Price & getPrice() const { DARABONBA_PTR_GET_CONST(price_, DailyPrices::Price) };
          inline DailyPrices::Price getPrice() { DARABONBA_PTR_GET(price_, DailyPrices::Price) };
          inline DailyPrices& setPrice(const DailyPrices::Price & price) { DARABONBA_PTR_SET_VALUE(price_, price) };
          inline DailyPrices& setPrice(DailyPrices::Price && price) { DARABONBA_PTR_SET_RVALUE(price_, price) };


          // tracerId Field Functions 
          bool hasTracerId() const { return this->tracerId_ != nullptr;};
          void deleteTracerId() { this->tracerId_ = nullptr;};
          inline string getTracerId() const { DARABONBA_PTR_GET_DEFAULT(tracerId_, "") };
          inline DailyPrices& setTracerId(string tracerId) { DARABONBA_PTR_SET_VALUE(tracerId_, tracerId) };


        protected:
          // LocalDate
          shared_ptr<string> date_ {};
          // The price.
          shared_ptr<DailyPrices::Price> price_ {};
          // null
          shared_ptr<string> tracerId_ {};
        };

        class CancelPolicy : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const CancelPolicy& obj) { 
            DARABONBA_PTR_TO_JSON(Penalties, penalties_);
            DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
            DARABONBA_PTR_TO_JSON(TracerId, tracerId_);
          };
          friend void from_json(const Darabonba::Json& j, CancelPolicy& obj) { 
            DARABONBA_PTR_FROM_JSON(Penalties, penalties_);
            DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
            DARABONBA_PTR_FROM_JSON(TracerId, tracerId_);
          };
          CancelPolicy() = default ;
          CancelPolicy(const CancelPolicy &) = default ;
          CancelPolicy(CancelPolicy &&) = default ;
          CancelPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~CancelPolicy() = default ;
          CancelPolicy& operator=(const CancelPolicy &) = default ;
          CancelPolicy& operator=(CancelPolicy &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Penalties : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Penalties& obj) { 
              DARABONBA_PTR_TO_JSON(Currency, currency_);
              DARABONBA_PTR_TO_JSON(End, end_);
              DARABONBA_PTR_TO_JSON(PenaltyType, penaltyType_);
              DARABONBA_PTR_TO_JSON(PenaltyValue, penaltyValue_);
              DARABONBA_PTR_TO_JSON(Start, start_);
              DARABONBA_PTR_TO_JSON(TracerId, tracerId_);
            };
            friend void from_json(const Darabonba::Json& j, Penalties& obj) { 
              DARABONBA_PTR_FROM_JSON(Currency, currency_);
              DARABONBA_PTR_FROM_JSON(End, end_);
              DARABONBA_PTR_FROM_JSON(PenaltyType, penaltyType_);
              DARABONBA_PTR_FROM_JSON(PenaltyValue, penaltyValue_);
              DARABONBA_PTR_FROM_JSON(Start, start_);
              DARABONBA_PTR_FROM_JSON(TracerId, tracerId_);
            };
            Penalties() = default ;
            Penalties(const Penalties &) = default ;
            Penalties(Penalties &&) = default ;
            Penalties(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Penalties() = default ;
            Penalties& operator=(const Penalties &) = default ;
            Penalties& operator=(Penalties &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->currency_ == nullptr
        && this->end_ == nullptr && this->penaltyType_ == nullptr && this->penaltyValue_ == nullptr && this->start_ == nullptr && this->tracerId_ == nullptr; };
            // currency Field Functions 
            bool hasCurrency() const { return this->currency_ != nullptr;};
            void deleteCurrency() { this->currency_ = nullptr;};
            inline string getCurrency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
            inline Penalties& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


            // end Field Functions 
            bool hasEnd() const { return this->end_ != nullptr;};
            void deleteEnd() { this->end_ = nullptr;};
            inline string getEnd() const { DARABONBA_PTR_GET_DEFAULT(end_, "") };
            inline Penalties& setEnd(string end) { DARABONBA_PTR_SET_VALUE(end_, end) };


            // penaltyType Field Functions 
            bool hasPenaltyType() const { return this->penaltyType_ != nullptr;};
            void deletePenaltyType() { this->penaltyType_ = nullptr;};
            inline string getPenaltyType() const { DARABONBA_PTR_GET_DEFAULT(penaltyType_, "") };
            inline Penalties& setPenaltyType(string penaltyType) { DARABONBA_PTR_SET_VALUE(penaltyType_, penaltyType) };


            // penaltyValue Field Functions 
            bool hasPenaltyValue() const { return this->penaltyValue_ != nullptr;};
            void deletePenaltyValue() { this->penaltyValue_ = nullptr;};
            inline string getPenaltyValue() const { DARABONBA_PTR_GET_DEFAULT(penaltyValue_, "") };
            inline Penalties& setPenaltyValue(string penaltyValue) { DARABONBA_PTR_SET_VALUE(penaltyValue_, penaltyValue) };


            // start Field Functions 
            bool hasStart() const { return this->start_ != nullptr;};
            void deleteStart() { this->start_ = nullptr;};
            inline string getStart() const { DARABONBA_PTR_GET_DEFAULT(start_, "") };
            inline Penalties& setStart(string start) { DARABONBA_PTR_SET_VALUE(start_, start) };


            // tracerId Field Functions 
            bool hasTracerId() const { return this->tracerId_ != nullptr;};
            void deleteTracerId() { this->tracerId_ = nullptr;};
            inline string getTracerId() const { DARABONBA_PTR_GET_DEFAULT(tracerId_, "") };
            inline Penalties& setTracerId(string tracerId) { DARABONBA_PTR_SET_VALUE(tracerId_, tracerId) };


          protected:
            // The currency code (present only for AMOUNT type).
            shared_ptr<string> currency_ {};
            // The effective end time (UTC millisecond timestamp).
            shared_ptr<string> end_ {};
            // The penalty type.
            shared_ptr<string> penaltyType_ {};
            // The penalty value (percentage/amount/number of nights).
            shared_ptr<string> penaltyValue_ {};
            // The effective start time (UTC millisecond timestamp).
            shared_ptr<string> start_ {};
            // TracerId
            shared_ptr<string> tracerId_ {};
          };

          virtual bool empty() const override { return this->penalties_ == nullptr
        && this->policyType_ == nullptr && this->tracerId_ == nullptr; };
          // penalties Field Functions 
          bool hasPenalties() const { return this->penalties_ != nullptr;};
          void deletePenalties() { this->penalties_ = nullptr;};
          inline const vector<CancelPolicy::Penalties> & getPenalties() const { DARABONBA_PTR_GET_CONST(penalties_, vector<CancelPolicy::Penalties>) };
          inline vector<CancelPolicy::Penalties> getPenalties() { DARABONBA_PTR_GET(penalties_, vector<CancelPolicy::Penalties>) };
          inline CancelPolicy& setPenalties(const vector<CancelPolicy::Penalties> & penalties) { DARABONBA_PTR_SET_VALUE(penalties_, penalties) };
          inline CancelPolicy& setPenalties(vector<CancelPolicy::Penalties> && penalties) { DARABONBA_PTR_SET_RVALUE(penalties_, penalties) };


          // policyType Field Functions 
          bool hasPolicyType() const { return this->policyType_ != nullptr;};
          void deletePolicyType() { this->policyType_ = nullptr;};
          inline string getPolicyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
          inline CancelPolicy& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


          // tracerId Field Functions 
          bool hasTracerId() const { return this->tracerId_ != nullptr;};
          void deleteTracerId() { this->tracerId_ = nullptr;};
          inline string getTracerId() const { DARABONBA_PTR_GET_DEFAULT(tracerId_, "") };
          inline CancelPolicy& setTracerId(string tracerId) { DARABONBA_PTR_SET_VALUE(tracerId_, tracerId) };


        protected:
          // The list of cancellation penalty details.
          shared_ptr<vector<CancelPolicy::Penalties>> penalties_ {};
          // The cancellation policy type.
          shared_ptr<string> policyType_ {};
          // TracerId
          shared_ptr<string> tracerId_ {};
        };

        virtual bool empty() const override { return this->cancelPolicy_ == nullptr
        && this->checkIn_ == nullptr && this->checkInNumber_ == nullptr && this->checkOut_ == nullptr && this->dailyPrices_ == nullptr && this->meal_ == nullptr
        && this->roomCount_ == nullptr && this->totalPrice_ == nullptr; };
        // cancelPolicy Field Functions 
        bool hasCancelPolicy() const { return this->cancelPolicy_ != nullptr;};
        void deleteCancelPolicy() { this->cancelPolicy_ = nullptr;};
        inline const ItemInfo::CancelPolicy & getCancelPolicy() const { DARABONBA_PTR_GET_CONST(cancelPolicy_, ItemInfo::CancelPolicy) };
        inline ItemInfo::CancelPolicy getCancelPolicy() { DARABONBA_PTR_GET(cancelPolicy_, ItemInfo::CancelPolicy) };
        inline ItemInfo& setCancelPolicy(const ItemInfo::CancelPolicy & cancelPolicy) { DARABONBA_PTR_SET_VALUE(cancelPolicy_, cancelPolicy) };
        inline ItemInfo& setCancelPolicy(ItemInfo::CancelPolicy && cancelPolicy) { DARABONBA_PTR_SET_RVALUE(cancelPolicy_, cancelPolicy) };


        // checkIn Field Functions 
        bool hasCheckIn() const { return this->checkIn_ != nullptr;};
        void deleteCheckIn() { this->checkIn_ = nullptr;};
        inline string getCheckIn() const { DARABONBA_PTR_GET_DEFAULT(checkIn_, "") };
        inline ItemInfo& setCheckIn(string checkIn) { DARABONBA_PTR_SET_VALUE(checkIn_, checkIn) };


        // checkInNumber Field Functions 
        bool hasCheckInNumber() const { return this->checkInNumber_ != nullptr;};
        void deleteCheckInNumber() { this->checkInNumber_ = nullptr;};
        inline int32_t getCheckInNumber() const { DARABONBA_PTR_GET_DEFAULT(checkInNumber_, 0) };
        inline ItemInfo& setCheckInNumber(int32_t checkInNumber) { DARABONBA_PTR_SET_VALUE(checkInNumber_, checkInNumber) };


        // checkOut Field Functions 
        bool hasCheckOut() const { return this->checkOut_ != nullptr;};
        void deleteCheckOut() { this->checkOut_ = nullptr;};
        inline string getCheckOut() const { DARABONBA_PTR_GET_DEFAULT(checkOut_, "") };
        inline ItemInfo& setCheckOut(string checkOut) { DARABONBA_PTR_SET_VALUE(checkOut_, checkOut) };


        // dailyPrices Field Functions 
        bool hasDailyPrices() const { return this->dailyPrices_ != nullptr;};
        void deleteDailyPrices() { this->dailyPrices_ = nullptr;};
        inline const vector<ItemInfo::DailyPrices> & getDailyPrices() const { DARABONBA_PTR_GET_CONST(dailyPrices_, vector<ItemInfo::DailyPrices>) };
        inline vector<ItemInfo::DailyPrices> getDailyPrices() { DARABONBA_PTR_GET(dailyPrices_, vector<ItemInfo::DailyPrices>) };
        inline ItemInfo& setDailyPrices(const vector<ItemInfo::DailyPrices> & dailyPrices) { DARABONBA_PTR_SET_VALUE(dailyPrices_, dailyPrices) };
        inline ItemInfo& setDailyPrices(vector<ItemInfo::DailyPrices> && dailyPrices) { DARABONBA_PTR_SET_RVALUE(dailyPrices_, dailyPrices) };


        // meal Field Functions 
        bool hasMeal() const { return this->meal_ != nullptr;};
        void deleteMeal() { this->meal_ = nullptr;};
        inline const ItemInfo::Meal & getMeal() const { DARABONBA_PTR_GET_CONST(meal_, ItemInfo::Meal) };
        inline ItemInfo::Meal getMeal() { DARABONBA_PTR_GET(meal_, ItemInfo::Meal) };
        inline ItemInfo& setMeal(const ItemInfo::Meal & meal) { DARABONBA_PTR_SET_VALUE(meal_, meal) };
        inline ItemInfo& setMeal(ItemInfo::Meal && meal) { DARABONBA_PTR_SET_RVALUE(meal_, meal) };


        // roomCount Field Functions 
        bool hasRoomCount() const { return this->roomCount_ != nullptr;};
        void deleteRoomCount() { this->roomCount_ = nullptr;};
        inline int32_t getRoomCount() const { DARABONBA_PTR_GET_DEFAULT(roomCount_, 0) };
        inline ItemInfo& setRoomCount(int32_t roomCount) { DARABONBA_PTR_SET_VALUE(roomCount_, roomCount) };


        // totalPrice Field Functions 
        bool hasTotalPrice() const { return this->totalPrice_ != nullptr;};
        void deleteTotalPrice() { this->totalPrice_ = nullptr;};
        inline const ItemInfo::TotalPrice & getTotalPrice() const { DARABONBA_PTR_GET_CONST(totalPrice_, ItemInfo::TotalPrice) };
        inline ItemInfo::TotalPrice getTotalPrice() { DARABONBA_PTR_GET(totalPrice_, ItemInfo::TotalPrice) };
        inline ItemInfo& setTotalPrice(const ItemInfo::TotalPrice & totalPrice) { DARABONBA_PTR_SET_VALUE(totalPrice_, totalPrice) };
        inline ItemInfo& setTotalPrice(ItemInfo::TotalPrice && totalPrice) { DARABONBA_PTR_SET_RVALUE(totalPrice_, totalPrice) };


      protected:
        // The cancellation policy.
        shared_ptr<ItemInfo::CancelPolicy> cancelPolicy_ {};
        // The check-in date (yyyy-MM-dd).
        shared_ptr<string> checkIn_ {};
        // The number of guests checking in.
        shared_ptr<int32_t> checkInNumber_ {};
        // The check-out date (yyyy-MM-dd).
        shared_ptr<string> checkOut_ {};
        // The list of nightly rates.
        shared_ptr<vector<ItemInfo::DailyPrices>> dailyPrices_ {};
        // The meal information.
        shared_ptr<ItemInfo::Meal> meal_ {};
        // The number of rooms.
        shared_ptr<int32_t> roomCount_ {};
        // The total selling price.
        shared_ptr<ItemInfo::TotalPrice> totalPrice_ {};
      };

      virtual bool empty() const override { return this->buyerId_ == nullptr
        && this->externalOrderNo_ == nullptr && this->gmtCreate_ == nullptr && this->itemInfo_ == nullptr && this->orderNo_ == nullptr && this->payment_ == nullptr
        && this->refundOrders_ == nullptr && this->roomStays_ == nullptr && this->salesChannel_ == nullptr && this->status_ == nullptr && this->tracerId_ == nullptr; };
      // buyerId Field Functions 
      bool hasBuyerId() const { return this->buyerId_ != nullptr;};
      void deleteBuyerId() { this->buyerId_ = nullptr;};
      inline string getBuyerId() const { DARABONBA_PTR_GET_DEFAULT(buyerId_, "") };
      inline Data& setBuyerId(string buyerId) { DARABONBA_PTR_SET_VALUE(buyerId_, buyerId) };


      // externalOrderNo Field Functions 
      bool hasExternalOrderNo() const { return this->externalOrderNo_ != nullptr;};
      void deleteExternalOrderNo() { this->externalOrderNo_ = nullptr;};
      inline string getExternalOrderNo() const { DARABONBA_PTR_GET_DEFAULT(externalOrderNo_, "") };
      inline Data& setExternalOrderNo(string externalOrderNo) { DARABONBA_PTR_SET_VALUE(externalOrderNo_, externalOrderNo) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Data& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // itemInfo Field Functions 
      bool hasItemInfo() const { return this->itemInfo_ != nullptr;};
      void deleteItemInfo() { this->itemInfo_ = nullptr;};
      inline const Data::ItemInfo & getItemInfo() const { DARABONBA_PTR_GET_CONST(itemInfo_, Data::ItemInfo) };
      inline Data::ItemInfo getItemInfo() { DARABONBA_PTR_GET(itemInfo_, Data::ItemInfo) };
      inline Data& setItemInfo(const Data::ItemInfo & itemInfo) { DARABONBA_PTR_SET_VALUE(itemInfo_, itemInfo) };
      inline Data& setItemInfo(Data::ItemInfo && itemInfo) { DARABONBA_PTR_SET_RVALUE(itemInfo_, itemInfo) };


      // orderNo Field Functions 
      bool hasOrderNo() const { return this->orderNo_ != nullptr;};
      void deleteOrderNo() { this->orderNo_ = nullptr;};
      inline string getOrderNo() const { DARABONBA_PTR_GET_DEFAULT(orderNo_, "") };
      inline Data& setOrderNo(string orderNo) { DARABONBA_PTR_SET_VALUE(orderNo_, orderNo) };


      // payment Field Functions 
      bool hasPayment() const { return this->payment_ != nullptr;};
      void deletePayment() { this->payment_ = nullptr;};
      inline const Data::Payment & getPayment() const { DARABONBA_PTR_GET_CONST(payment_, Data::Payment) };
      inline Data::Payment getPayment() { DARABONBA_PTR_GET(payment_, Data::Payment) };
      inline Data& setPayment(const Data::Payment & payment) { DARABONBA_PTR_SET_VALUE(payment_, payment) };
      inline Data& setPayment(Data::Payment && payment) { DARABONBA_PTR_SET_RVALUE(payment_, payment) };


      // refundOrders Field Functions 
      bool hasRefundOrders() const { return this->refundOrders_ != nullptr;};
      void deleteRefundOrders() { this->refundOrders_ = nullptr;};
      inline const vector<Data::RefundOrders> & getRefundOrders() const { DARABONBA_PTR_GET_CONST(refundOrders_, vector<Data::RefundOrders>) };
      inline vector<Data::RefundOrders> getRefundOrders() { DARABONBA_PTR_GET(refundOrders_, vector<Data::RefundOrders>) };
      inline Data& setRefundOrders(const vector<Data::RefundOrders> & refundOrders) { DARABONBA_PTR_SET_VALUE(refundOrders_, refundOrders) };
      inline Data& setRefundOrders(vector<Data::RefundOrders> && refundOrders) { DARABONBA_PTR_SET_RVALUE(refundOrders_, refundOrders) };


      // roomStays Field Functions 
      bool hasRoomStays() const { return this->roomStays_ != nullptr;};
      void deleteRoomStays() { this->roomStays_ = nullptr;};
      inline const vector<Data::RoomStays> & getRoomStays() const { DARABONBA_PTR_GET_CONST(roomStays_, vector<Data::RoomStays>) };
      inline vector<Data::RoomStays> getRoomStays() { DARABONBA_PTR_GET(roomStays_, vector<Data::RoomStays>) };
      inline Data& setRoomStays(const vector<Data::RoomStays> & roomStays) { DARABONBA_PTR_SET_VALUE(roomStays_, roomStays) };
      inline Data& setRoomStays(vector<Data::RoomStays> && roomStays) { DARABONBA_PTR_SET_RVALUE(roomStays_, roomStays) };


      // salesChannel Field Functions 
      bool hasSalesChannel() const { return this->salesChannel_ != nullptr;};
      void deleteSalesChannel() { this->salesChannel_ = nullptr;};
      inline string getSalesChannel() const { DARABONBA_PTR_GET_DEFAULT(salesChannel_, "") };
      inline Data& setSalesChannel(string salesChannel) { DARABONBA_PTR_SET_VALUE(salesChannel_, salesChannel) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tracerId Field Functions 
      bool hasTracerId() const { return this->tracerId_ != nullptr;};
      void deleteTracerId() { this->tracerId_ = nullptr;};
      inline string getTracerId() const { DARABONBA_PTR_GET_DEFAULT(tracerId_, "") };
      inline Data& setTracerId(string tracerId) { DARABONBA_PTR_SET_VALUE(tracerId_, tracerId) };


    protected:
      // The buyer ID.
      shared_ptr<string> buyerId_ {};
      // The external order number of the buyer.
      shared_ptr<string> externalOrderNo_ {};
      // The creation time (UTC millisecond timestamp).
      shared_ptr<string> gmtCreate_ {};
      // The item information.
      shared_ptr<Data::ItemInfo> itemInfo_ {};
      // The order number.
      shared_ptr<string> orderNo_ {};
      // The payment information.
      shared_ptr<Data::Payment> payment_ {};
      // The list of refund orders.
      shared_ptr<vector<Data::RefundOrders>> refundOrders_ {};
      // The list of room stays.
      shared_ptr<vector<Data::RoomStays>> roomStays_ {};
      // The sales channel.
      shared_ptr<string> salesChannel_ {};
      // The unified order status.
      shared_ptr<string> status_ {};
      // TracerId
      shared_ptr<string> tracerId_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMsg_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->tracerId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GlobalHotelQueryOrderResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GlobalHotelQueryOrderResponseBody::Data) };
    inline GlobalHotelQueryOrderResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GlobalHotelQueryOrderResponseBody::Data) };
    inline GlobalHotelQueryOrderResponseBody& setData(const GlobalHotelQueryOrderResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GlobalHotelQueryOrderResponseBody& setData(GlobalHotelQueryOrderResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GlobalHotelQueryOrderResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline GlobalHotelQueryOrderResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GlobalHotelQueryOrderResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GlobalHotelQueryOrderResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // tracerId Field Functions 
    bool hasTracerId() const { return this->tracerId_ != nullptr;};
    void deleteTracerId() { this->tracerId_ = nullptr;};
    inline string getTracerId() const { DARABONBA_PTR_GET_DEFAULT(tracerId_, "") };
    inline GlobalHotelQueryOrderResponseBody& setTracerId(string tracerId) { DARABONBA_PTR_SET_VALUE(tracerId_, tracerId) };


  protected:
    // The business data.
    shared_ptr<GlobalHotelQueryOrderResponseBody::Data> data_ {};
    // The error code.
    shared_ptr<string> errorCode_ {};
    // The error message.
    shared_ptr<string> errorMsg_ {};
    // The unique identifier of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
    // TracerId
    shared_ptr<string> tracerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
