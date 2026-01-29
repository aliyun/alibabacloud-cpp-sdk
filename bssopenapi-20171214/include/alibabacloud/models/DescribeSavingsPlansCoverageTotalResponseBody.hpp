// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESAVINGSPLANSCOVERAGETOTALRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESAVINGSPLANSCOVERAGETOTALRESPONSEBODY_HPP_
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
  class DescribeSavingsPlansCoverageTotalResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSavingsPlansCoverageTotalResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSavingsPlansCoverageTotalResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeSavingsPlansCoverageTotalResponseBody() = default ;
    DescribeSavingsPlansCoverageTotalResponseBody(const DescribeSavingsPlansCoverageTotalResponseBody &) = default ;
    DescribeSavingsPlansCoverageTotalResponseBody(DescribeSavingsPlansCoverageTotalResponseBody &&) = default ;
    DescribeSavingsPlansCoverageTotalResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSavingsPlansCoverageTotalResponseBody() = default ;
    DescribeSavingsPlansCoverageTotalResponseBody& operator=(const DescribeSavingsPlansCoverageTotalResponseBody &) = default ;
    DescribeSavingsPlansCoverageTotalResponseBody& operator=(DescribeSavingsPlansCoverageTotalResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(PeriodCoverage, periodCoverage_);
        DARABONBA_PTR_TO_JSON(TotalCoverage, totalCoverage_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(PeriodCoverage, periodCoverage_);
        DARABONBA_PTR_FROM_JSON(TotalCoverage, totalCoverage_);
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
      class TotalCoverage : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TotalCoverage& obj) { 
          DARABONBA_PTR_TO_JSON(CoveragePercentage, coveragePercentage_);
          DARABONBA_PTR_TO_JSON(DeductAmount, deductAmount_);
        };
        friend void from_json(const Darabonba::Json& j, TotalCoverage& obj) { 
          DARABONBA_PTR_FROM_JSON(CoveragePercentage, coveragePercentage_);
          DARABONBA_PTR_FROM_JSON(DeductAmount, deductAmount_);
        };
        TotalCoverage() = default ;
        TotalCoverage(const TotalCoverage &) = default ;
        TotalCoverage(TotalCoverage &&) = default ;
        TotalCoverage(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TotalCoverage() = default ;
        TotalCoverage& operator=(const TotalCoverage &) = default ;
        TotalCoverage& operator=(TotalCoverage &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->coveragePercentage_ == nullptr
        && this->deductAmount_ == nullptr; };
        // coveragePercentage Field Functions 
        bool hasCoveragePercentage() const { return this->coveragePercentage_ != nullptr;};
        void deleteCoveragePercentage() { this->coveragePercentage_ = nullptr;};
        inline float getCoveragePercentage() const { DARABONBA_PTR_GET_DEFAULT(coveragePercentage_, 0.0) };
        inline TotalCoverage& setCoveragePercentage(float coveragePercentage) { DARABONBA_PTR_SET_VALUE(coveragePercentage_, coveragePercentage) };


        // deductAmount Field Functions 
        bool hasDeductAmount() const { return this->deductAmount_ != nullptr;};
        void deleteDeductAmount() { this->deductAmount_ = nullptr;};
        inline float getDeductAmount() const { DARABONBA_PTR_GET_DEFAULT(deductAmount_, 0.0) };
        inline TotalCoverage& setDeductAmount(float deductAmount) { DARABONBA_PTR_SET_VALUE(deductAmount_, deductAmount) };


      protected:
        // The total coverage.
        shared_ptr<float> coveragePercentage_ {};
        // The total deducted amount.
        shared_ptr<float> deductAmount_ {};
      };

      class PeriodCoverage : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PeriodCoverage& obj) { 
          DARABONBA_PTR_TO_JSON(Percentage, percentage_);
          DARABONBA_PTR_TO_JSON(Period, period_);
        };
        friend void from_json(const Darabonba::Json& j, PeriodCoverage& obj) { 
          DARABONBA_PTR_FROM_JSON(Percentage, percentage_);
          DARABONBA_PTR_FROM_JSON(Period, period_);
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
        virtual bool empty() const override { return this->percentage_ == nullptr
        && this->period_ == nullptr; };
        // percentage Field Functions 
        bool hasPercentage() const { return this->percentage_ != nullptr;};
        void deletePercentage() { this->percentage_ = nullptr;};
        inline float getPercentage() const { DARABONBA_PTR_GET_DEFAULT(percentage_, 0.0) };
        inline PeriodCoverage& setPercentage(float percentage) { DARABONBA_PTR_SET_VALUE(percentage_, percentage) };


        // period Field Functions 
        bool hasPeriod() const { return this->period_ != nullptr;};
        void deletePeriod() { this->period_ = nullptr;};
        inline string getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
        inline PeriodCoverage& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


      protected:
        // The coverage.
        shared_ptr<float> percentage_ {};
        // The period.
        // 
        // The value is in the format of yyyyMMddHH.
        shared_ptr<string> period_ {};
      };

      virtual bool empty() const override { return this->periodCoverage_ == nullptr
        && this->totalCoverage_ == nullptr; };
      // periodCoverage Field Functions 
      bool hasPeriodCoverage() const { return this->periodCoverage_ != nullptr;};
      void deletePeriodCoverage() { this->periodCoverage_ = nullptr;};
      inline const vector<Data::PeriodCoverage> & getPeriodCoverage() const { DARABONBA_PTR_GET_CONST(periodCoverage_, vector<Data::PeriodCoverage>) };
      inline vector<Data::PeriodCoverage> getPeriodCoverage() { DARABONBA_PTR_GET(periodCoverage_, vector<Data::PeriodCoverage>) };
      inline Data& setPeriodCoverage(const vector<Data::PeriodCoverage> & periodCoverage) { DARABONBA_PTR_SET_VALUE(periodCoverage_, periodCoverage) };
      inline Data& setPeriodCoverage(vector<Data::PeriodCoverage> && periodCoverage) { DARABONBA_PTR_SET_RVALUE(periodCoverage_, periodCoverage) };


      // totalCoverage Field Functions 
      bool hasTotalCoverage() const { return this->totalCoverage_ != nullptr;};
      void deleteTotalCoverage() { this->totalCoverage_ = nullptr;};
      inline const Data::TotalCoverage & getTotalCoverage() const { DARABONBA_PTR_GET_CONST(totalCoverage_, Data::TotalCoverage) };
      inline Data::TotalCoverage getTotalCoverage() { DARABONBA_PTR_GET(totalCoverage_, Data::TotalCoverage) };
      inline Data& setTotalCoverage(const Data::TotalCoverage & totalCoverage) { DARABONBA_PTR_SET_VALUE(totalCoverage_, totalCoverage) };
      inline Data& setTotalCoverage(Data::TotalCoverage && totalCoverage) { DARABONBA_PTR_SET_RVALUE(totalCoverage_, totalCoverage) };


    protected:
      // The coverage in different periods.
      shared_ptr<vector<Data::PeriodCoverage>> periodCoverage_ {};
      // The coverage summary.
      shared_ptr<Data::TotalCoverage> totalCoverage_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeSavingsPlansCoverageTotalResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeSavingsPlansCoverageTotalResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeSavingsPlansCoverageTotalResponseBody::Data) };
    inline DescribeSavingsPlansCoverageTotalResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeSavingsPlansCoverageTotalResponseBody::Data) };
    inline DescribeSavingsPlansCoverageTotalResponseBody& setData(const DescribeSavingsPlansCoverageTotalResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeSavingsPlansCoverageTotalResponseBody& setData(DescribeSavingsPlansCoverageTotalResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeSavingsPlansCoverageTotalResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSavingsPlansCoverageTotalResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeSavingsPlansCoverageTotalResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code.
    shared_ptr<string> code_ {};
    // The return data.
    shared_ptr<DescribeSavingsPlansCoverageTotalResponseBody::Data> data_ {};
    // The message returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the operation was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
