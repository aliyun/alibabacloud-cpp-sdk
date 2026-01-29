// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESOURCEUSAGETOTALRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESOURCEUSAGETOTALRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class DescribeResourceUsageTotalResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeResourceUsageTotalResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeResourceUsageTotalResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeResourceUsageTotalResponseBody() = default ;
    DescribeResourceUsageTotalResponseBody(const DescribeResourceUsageTotalResponseBody &) = default ;
    DescribeResourceUsageTotalResponseBody(DescribeResourceUsageTotalResponseBody &&) = default ;
    DescribeResourceUsageTotalResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeResourceUsageTotalResponseBody() = default ;
    DescribeResourceUsageTotalResponseBody& operator=(const DescribeResourceUsageTotalResponseBody &) = default ;
    DescribeResourceUsageTotalResponseBody& operator=(DescribeResourceUsageTotalResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(PeriodCoverage, periodCoverage_);
        DARABONBA_PTR_TO_JSON(TotalUsage, totalUsage_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(PeriodCoverage, periodCoverage_);
        DARABONBA_PTR_FROM_JSON(TotalUsage, totalUsage_);
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
      class TotalUsage : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TotalUsage& obj) { 
          DARABONBA_PTR_TO_JSON(PostpaidCost, postpaidCost_);
          DARABONBA_PTR_TO_JSON(PotentialSavedCost, potentialSavedCost_);
          DARABONBA_PTR_TO_JSON(ReservationCost, reservationCost_);
          DARABONBA_PTR_TO_JSON(SavedCost, savedCost_);
          DARABONBA_PTR_TO_JSON(UsagePercentage, usagePercentage_);
        };
        friend void from_json(const Darabonba::Json& j, TotalUsage& obj) { 
          DARABONBA_PTR_FROM_JSON(PostpaidCost, postpaidCost_);
          DARABONBA_PTR_FROM_JSON(PotentialSavedCost, potentialSavedCost_);
          DARABONBA_PTR_FROM_JSON(ReservationCost, reservationCost_);
          DARABONBA_PTR_FROM_JSON(SavedCost, savedCost_);
          DARABONBA_PTR_FROM_JSON(UsagePercentage, usagePercentage_);
        };
        TotalUsage() = default ;
        TotalUsage(const TotalUsage &) = default ;
        TotalUsage(TotalUsage &&) = default ;
        TotalUsage(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TotalUsage() = default ;
        TotalUsage& operator=(const TotalUsage &) = default ;
        TotalUsage& operator=(TotalUsage &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->postpaidCost_ == nullptr
        && this->potentialSavedCost_ == nullptr && this->reservationCost_ == nullptr && this->savedCost_ == nullptr && this->usagePercentage_ == nullptr; };
        // postpaidCost Field Functions 
        bool hasPostpaidCost() const { return this->postpaidCost_ != nullptr;};
        void deletePostpaidCost() { this->postpaidCost_ = nullptr;};
        inline float getPostpaidCost() const { DARABONBA_PTR_GET_DEFAULT(postpaidCost_, 0.0) };
        inline TotalUsage& setPostpaidCost(float postpaidCost) { DARABONBA_PTR_SET_VALUE(postpaidCost_, postpaidCost) };


        // potentialSavedCost Field Functions 
        bool hasPotentialSavedCost() const { return this->potentialSavedCost_ != nullptr;};
        void deletePotentialSavedCost() { this->potentialSavedCost_ = nullptr;};
        inline float getPotentialSavedCost() const { DARABONBA_PTR_GET_DEFAULT(potentialSavedCost_, 0.0) };
        inline TotalUsage& setPotentialSavedCost(float potentialSavedCost) { DARABONBA_PTR_SET_VALUE(potentialSavedCost_, potentialSavedCost) };


        // reservationCost Field Functions 
        bool hasReservationCost() const { return this->reservationCost_ != nullptr;};
        void deleteReservationCost() { this->reservationCost_ = nullptr;};
        inline float getReservationCost() const { DARABONBA_PTR_GET_DEFAULT(reservationCost_, 0.0) };
        inline TotalUsage& setReservationCost(float reservationCost) { DARABONBA_PTR_SET_VALUE(reservationCost_, reservationCost) };


        // savedCost Field Functions 
        bool hasSavedCost() const { return this->savedCost_ != nullptr;};
        void deleteSavedCost() { this->savedCost_ = nullptr;};
        inline float getSavedCost() const { DARABONBA_PTR_GET_DEFAULT(savedCost_, 0.0) };
        inline TotalUsage& setSavedCost(float savedCost) { DARABONBA_PTR_SET_VALUE(savedCost_, savedCost) };


        // usagePercentage Field Functions 
        bool hasUsagePercentage() const { return this->usagePercentage_ != nullptr;};
        void deleteUsagePercentage() { this->usagePercentage_ = nullptr;};
        inline float getUsagePercentage() const { DARABONBA_PTR_GET_DEFAULT(usagePercentage_, 0.0) };
        inline TotalUsage& setUsagePercentage(float usagePercentage) { DARABONBA_PTR_SET_VALUE(usagePercentage_, usagePercentage) };


      protected:
        // The total costs of pay-as-you-go instances.
        shared_ptr<float> postpaidCost_ {};
        // The total potential savings.
        shared_ptr<float> potentialSavedCost_ {};
        // The fee of purchased resource plans.
        shared_ptr<float> reservationCost_ {};
        // The total savings.
        shared_ptr<float> savedCost_ {};
        // The total usage of resource plans.
        shared_ptr<float> usagePercentage_ {};
      };

      class PeriodCoverage : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PeriodCoverage& obj) { 
          DARABONBA_PTR_TO_JSON(Period, period_);
          DARABONBA_PTR_TO_JSON(UsagePercentage, usagePercentage_);
        };
        friend void from_json(const Darabonba::Json& j, PeriodCoverage& obj) { 
          DARABONBA_PTR_FROM_JSON(Period, period_);
          DARABONBA_PTR_FROM_JSON(UsagePercentage, usagePercentage_);
        };
        PeriodCoverage() = default ;
        PeriodCoverage(const PeriodCoverage &) = default ;
        PeriodCoverage(PeriodCoverage &&) = default ;
        PeriodCoverage(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PeriodCoverage() = default ;
        PeriodCoverage& operator=(const PeriodCoverage &) = default ;
        PeriodCoverage& operator=(PeriodCoverage &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->period_ == nullptr
        && this->usagePercentage_ == nullptr; };
        // period Field Functions 
        bool hasPeriod() const { return this->period_ != nullptr;};
        void deletePeriod() { this->period_ = nullptr;};
        inline string getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
        inline PeriodCoverage& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


        // usagePercentage Field Functions 
        bool hasUsagePercentage() const { return this->usagePercentage_ != nullptr;};
        void deleteUsagePercentage() { this->usagePercentage_ = nullptr;};
        inline float getUsagePercentage() const { DARABONBA_PTR_GET_DEFAULT(usagePercentage_, 0.0) };
        inline PeriodCoverage& setUsagePercentage(float usagePercentage) { DARABONBA_PTR_SET_VALUE(usagePercentage_, usagePercentage) };


      protected:
        // The period.
        shared_ptr<string> period_ {};
        // The usage of resource plans.
        shared_ptr<float> usagePercentage_ {};
      };

      virtual bool empty() const override { return this->periodCoverage_ == nullptr
        && this->totalUsage_ == nullptr; };
      // periodCoverage Field Functions 
      bool hasPeriodCoverage() const { return this->periodCoverage_ != nullptr;};
      void deletePeriodCoverage() { this->periodCoverage_ = nullptr;};
      inline const vector<Data::PeriodCoverage> & getPeriodCoverage() const { DARABONBA_PTR_GET_CONST(periodCoverage_, vector<Data::PeriodCoverage>) };
      inline vector<Data::PeriodCoverage> getPeriodCoverage() { DARABONBA_PTR_GET(periodCoverage_, vector<Data::PeriodCoverage>) };
      inline Data& setPeriodCoverage(const vector<Data::PeriodCoverage> & periodCoverage) { DARABONBA_PTR_SET_VALUE(periodCoverage_, periodCoverage) };
      inline Data& setPeriodCoverage(vector<Data::PeriodCoverage> && periodCoverage) { DARABONBA_PTR_SET_RVALUE(periodCoverage_, periodCoverage) };


      // totalUsage Field Functions 
      bool hasTotalUsage() const { return this->totalUsage_ != nullptr;};
      void deleteTotalUsage() { this->totalUsage_ = nullptr;};
      inline const Data::TotalUsage & getTotalUsage() const { DARABONBA_PTR_GET_CONST(totalUsage_, Data::TotalUsage) };
      inline Data::TotalUsage getTotalUsage() { DARABONBA_PTR_GET(totalUsage_, Data::TotalUsage) };
      inline Data& setTotalUsage(const Data::TotalUsage & totalUsage) { DARABONBA_PTR_SET_VALUE(totalUsage_, totalUsage) };
      inline Data& setTotalUsage(Data::TotalUsage && totalUsage) { DARABONBA_PTR_SET_RVALUE(totalUsage_, totalUsage) };


    protected:
      // The usage of resource plans in the specified period.
      shared_ptr<vector<Data::PeriodCoverage>> periodCoverage_ {};
      // The total usage of resource plans.
      shared_ptr<Data::TotalUsage> totalUsage_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeResourceUsageTotalResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeResourceUsageTotalResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeResourceUsageTotalResponseBody::Data) };
    inline DescribeResourceUsageTotalResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeResourceUsageTotalResponseBody::Data) };
    inline DescribeResourceUsageTotalResponseBody& setData(const DescribeResourceUsageTotalResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeResourceUsageTotalResponseBody& setData(DescribeResourceUsageTotalResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeResourceUsageTotalResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeResourceUsageTotalResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeResourceUsageTotalResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code.
    shared_ptr<string> code_ {};
    // The queried data.
    shared_ptr<DescribeResourceUsageTotalResponseBody::Data> data_ {};
    // The returned message. If the request was successful, a success message is returned. If the request failed, an error message is returned.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
