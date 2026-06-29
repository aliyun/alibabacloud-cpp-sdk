// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSUBSCRIPTIONSTATSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSUBSCRIPTIONSTATSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ModelStudio20260210
{
namespace Models
{
  class GetSubscriptionStatsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSubscriptionStatsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetSubscriptionStatsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetSubscriptionStatsResponseBody() = default ;
    GetSubscriptionStatsResponseBody(const GetSubscriptionStatsResponseBody &) = default ;
    GetSubscriptionStatsResponseBody(GetSubscriptionStatsResponseBody &&) = default ;
    GetSubscriptionStatsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSubscriptionStatsResponseBody() = default ;
    GetSubscriptionStatsResponseBody& operator=(const GetSubscriptionStatsResponseBody &) = default ;
    GetSubscriptionStatsResponseBody& operator=(GetSubscriptionStatsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Items, items_);
        DARABONBA_PTR_TO_JSON(SubscriptionEndTime, subscriptionEndTime_);
        DARABONBA_PTR_TO_JSON(SubscriptionStartTime, subscriptionStartTime_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Items, items_);
        DARABONBA_PTR_FROM_JSON(SubscriptionEndTime, subscriptionEndTime_);
        DARABONBA_PTR_FROM_JSON(SubscriptionStartTime, subscriptionStartTime_);
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
      class Items : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Items& obj) { 
          DARABONBA_PTR_TO_JSON(AssignedSeats, assignedSeats_);
          DARABONBA_PTR_TO_JSON(SeatCredits, seatCredits_);
          DARABONBA_PTR_TO_JSON(SeatRefreshTime, seatRefreshTime_);
          DARABONBA_PTR_TO_JSON(SeatRemainingCredits, seatRemainingCredits_);
          DARABONBA_PTR_TO_JSON(SeatType, seatType_);
          DARABONBA_PTR_TO_JSON(TotalSeats, totalSeats_);
        };
        friend void from_json(const Darabonba::Json& j, Items& obj) { 
          DARABONBA_PTR_FROM_JSON(AssignedSeats, assignedSeats_);
          DARABONBA_PTR_FROM_JSON(SeatCredits, seatCredits_);
          DARABONBA_PTR_FROM_JSON(SeatRefreshTime, seatRefreshTime_);
          DARABONBA_PTR_FROM_JSON(SeatRemainingCredits, seatRemainingCredits_);
          DARABONBA_PTR_FROM_JSON(SeatType, seatType_);
          DARABONBA_PTR_FROM_JSON(TotalSeats, totalSeats_);
        };
        Items() = default ;
        Items(const Items &) = default ;
        Items(Items &&) = default ;
        Items(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Items() = default ;
        Items& operator=(const Items &) = default ;
        Items& operator=(Items &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->assignedSeats_ == nullptr
        && this->seatCredits_ == nullptr && this->seatRefreshTime_ == nullptr && this->seatRemainingCredits_ == nullptr && this->seatType_ == nullptr && this->totalSeats_ == nullptr; };
        // assignedSeats Field Functions 
        bool hasAssignedSeats() const { return this->assignedSeats_ != nullptr;};
        void deleteAssignedSeats() { this->assignedSeats_ = nullptr;};
        inline int64_t getAssignedSeats() const { DARABONBA_PTR_GET_DEFAULT(assignedSeats_, 0L) };
        inline Items& setAssignedSeats(int64_t assignedSeats) { DARABONBA_PTR_SET_VALUE(assignedSeats_, assignedSeats) };


        // seatCredits Field Functions 
        bool hasSeatCredits() const { return this->seatCredits_ != nullptr;};
        void deleteSeatCredits() { this->seatCredits_ = nullptr;};
        inline double getSeatCredits() const { DARABONBA_PTR_GET_DEFAULT(seatCredits_, 0.0) };
        inline Items& setSeatCredits(double seatCredits) { DARABONBA_PTR_SET_VALUE(seatCredits_, seatCredits) };


        // seatRefreshTime Field Functions 
        bool hasSeatRefreshTime() const { return this->seatRefreshTime_ != nullptr;};
        void deleteSeatRefreshTime() { this->seatRefreshTime_ = nullptr;};
        inline int64_t getSeatRefreshTime() const { DARABONBA_PTR_GET_DEFAULT(seatRefreshTime_, 0L) };
        inline Items& setSeatRefreshTime(int64_t seatRefreshTime) { DARABONBA_PTR_SET_VALUE(seatRefreshTime_, seatRefreshTime) };


        // seatRemainingCredits Field Functions 
        bool hasSeatRemainingCredits() const { return this->seatRemainingCredits_ != nullptr;};
        void deleteSeatRemainingCredits() { this->seatRemainingCredits_ = nullptr;};
        inline double getSeatRemainingCredits() const { DARABONBA_PTR_GET_DEFAULT(seatRemainingCredits_, 0.0) };
        inline Items& setSeatRemainingCredits(double seatRemainingCredits) { DARABONBA_PTR_SET_VALUE(seatRemainingCredits_, seatRemainingCredits) };


        // seatType Field Functions 
        bool hasSeatType() const { return this->seatType_ != nullptr;};
        void deleteSeatType() { this->seatType_ = nullptr;};
        inline string getSeatType() const { DARABONBA_PTR_GET_DEFAULT(seatType_, "") };
        inline Items& setSeatType(string seatType) { DARABONBA_PTR_SET_VALUE(seatType_, seatType) };


        // totalSeats Field Functions 
        bool hasTotalSeats() const { return this->totalSeats_ != nullptr;};
        void deleteTotalSeats() { this->totalSeats_ = nullptr;};
        inline int64_t getTotalSeats() const { DARABONBA_PTR_GET_DEFAULT(totalSeats_, 0L) };
        inline Items& setTotalSeats(int64_t totalSeats) { DARABONBA_PTR_SET_VALUE(totalSeats_, totalSeats) };


      protected:
        // The number of assigned seats.
        shared_ptr<int64_t> assignedSeats_ {};
        // The total credits quota for the seat.
        shared_ptr<double> seatCredits_ {};
        // The refresh time of the current cycle, in milliseconds.
        shared_ptr<int64_t> seatRefreshTime_ {};
        // The remaining credits for the current cycle.
        shared_ptr<double> seatRemainingCredits_ {};
        // The seat type (specType). Valid values:
        // - standard: Standard seat.
        // - pro: Pro seat.
        // - max: Premium seat.
        shared_ptr<string> seatType_ {};
        // The total number of seats.
        shared_ptr<int64_t> totalSeats_ {};
      };

      virtual bool empty() const override { return this->items_ == nullptr
        && this->subscriptionEndTime_ == nullptr && this->subscriptionStartTime_ == nullptr; };
      // items Field Functions 
      bool hasItems() const { return this->items_ != nullptr;};
      void deleteItems() { this->items_ = nullptr;};
      inline const vector<Data::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<Data::Items>) };
      inline vector<Data::Items> getItems() { DARABONBA_PTR_GET(items_, vector<Data::Items>) };
      inline Data& setItems(const vector<Data::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
      inline Data& setItems(vector<Data::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


      // subscriptionEndTime Field Functions 
      bool hasSubscriptionEndTime() const { return this->subscriptionEndTime_ != nullptr;};
      void deleteSubscriptionEndTime() { this->subscriptionEndTime_ = nullptr;};
      inline int64_t getSubscriptionEndTime() const { DARABONBA_PTR_GET_DEFAULT(subscriptionEndTime_, 0L) };
      inline Data& setSubscriptionEndTime(int64_t subscriptionEndTime) { DARABONBA_PTR_SET_VALUE(subscriptionEndTime_, subscriptionEndTime) };


      // subscriptionStartTime Field Functions 
      bool hasSubscriptionStartTime() const { return this->subscriptionStartTime_ != nullptr;};
      void deleteSubscriptionStartTime() { this->subscriptionStartTime_ = nullptr;};
      inline int64_t getSubscriptionStartTime() const { DARABONBA_PTR_GET_DEFAULT(subscriptionStartTime_, 0L) };
      inline Data& setSubscriptionStartTime(int64_t subscriptionStartTime) { DARABONBA_PTR_SET_VALUE(subscriptionStartTime_, subscriptionStartTime) };


    protected:
      // The list of seat information, grouped by specType.
      shared_ptr<vector<Data::Items>> items_ {};
      // The subscription end time, in milliseconds.
      shared_ptr<int64_t> subscriptionEndTime_ {};
      // The subscription start time, in milliseconds.
      shared_ptr<int64_t> subscriptionStartTime_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetSubscriptionStatsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetSubscriptionStatsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetSubscriptionStatsResponseBody::Data) };
    inline GetSubscriptionStatsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetSubscriptionStatsResponseBody::Data) };
    inline GetSubscriptionStatsResponseBody& setData(const GetSubscriptionStatsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetSubscriptionStatsResponseBody& setData(GetSubscriptionStatsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetSubscriptionStatsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetSubscriptionStatsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response status code.
    shared_ptr<string> code_ {};
    // The business data.
    shared_ptr<GetSubscriptionStatsResponseBody::Data> data_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // Indicates whether the API call is successful. Valid values:
    // 
    // - true: Successful.
    // - false: Failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ModelStudio20260210
#endif
