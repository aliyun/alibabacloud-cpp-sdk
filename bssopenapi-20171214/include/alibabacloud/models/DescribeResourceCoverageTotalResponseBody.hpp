// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESOURCECOVERAGETOTALRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESOURCECOVERAGETOTALRESPONSEBODY_HPP_
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
  class DescribeResourceCoverageTotalResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeResourceCoverageTotalResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeResourceCoverageTotalResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeResourceCoverageTotalResponseBody() = default ;
    DescribeResourceCoverageTotalResponseBody(const DescribeResourceCoverageTotalResponseBody &) = default ;
    DescribeResourceCoverageTotalResponseBody(DescribeResourceCoverageTotalResponseBody &&) = default ;
    DescribeResourceCoverageTotalResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeResourceCoverageTotalResponseBody() = default ;
    DescribeResourceCoverageTotalResponseBody& operator=(const DescribeResourceCoverageTotalResponseBody &) = default ;
    DescribeResourceCoverageTotalResponseBody& operator=(DescribeResourceCoverageTotalResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(CapacityUnit, capacityUnit_);
          DARABONBA_PTR_TO_JSON(CoveragePercentage, coveragePercentage_);
          DARABONBA_PTR_TO_JSON(DeductQuantity, deductQuantity_);
          DARABONBA_PTR_TO_JSON(TotalQuantity, totalQuantity_);
        };
        friend void from_json(const Darabonba::Json& j, TotalCoverage& obj) { 
          DARABONBA_PTR_FROM_JSON(CapacityUnit, capacityUnit_);
          DARABONBA_PTR_FROM_JSON(CoveragePercentage, coveragePercentage_);
          DARABONBA_PTR_FROM_JSON(DeductQuantity, deductQuantity_);
          DARABONBA_PTR_FROM_JSON(TotalQuantity, totalQuantity_);
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
        virtual bool empty() const override { return this->capacityUnit_ == nullptr
        && this->coveragePercentage_ == nullptr && this->deductQuantity_ == nullptr && this->totalQuantity_ == nullptr; };
        // capacityUnit Field Functions 
        bool hasCapacityUnit() const { return this->capacityUnit_ != nullptr;};
        void deleteCapacityUnit() { this->capacityUnit_ = nullptr;};
        inline string getCapacityUnit() const { DARABONBA_PTR_GET_DEFAULT(capacityUnit_, "") };
        inline TotalCoverage& setCapacityUnit(string capacityUnit) { DARABONBA_PTR_SET_VALUE(capacityUnit_, capacityUnit) };


        // coveragePercentage Field Functions 
        bool hasCoveragePercentage() const { return this->coveragePercentage_ != nullptr;};
        void deleteCoveragePercentage() { this->coveragePercentage_ = nullptr;};
        inline float getCoveragePercentage() const { DARABONBA_PTR_GET_DEFAULT(coveragePercentage_, 0.0) };
        inline TotalCoverage& setCoveragePercentage(float coveragePercentage) { DARABONBA_PTR_SET_VALUE(coveragePercentage_, coveragePercentage) };


        // deductQuantity Field Functions 
        bool hasDeductQuantity() const { return this->deductQuantity_ != nullptr;};
        void deleteDeductQuantity() { this->deductQuantity_ = nullptr;};
        inline float getDeductQuantity() const { DARABONBA_PTR_GET_DEFAULT(deductQuantity_, 0.0) };
        inline TotalCoverage& setDeductQuantity(float deductQuantity) { DARABONBA_PTR_SET_VALUE(deductQuantity_, deductQuantity) };


        // totalQuantity Field Functions 
        bool hasTotalQuantity() const { return this->totalQuantity_ != nullptr;};
        void deleteTotalQuantity() { this->totalQuantity_ = nullptr;};
        inline float getTotalQuantity() const { DARABONBA_PTR_GET_DEFAULT(totalQuantity_, 0.0) };
        inline TotalCoverage& setTotalQuantity(float totalQuantity) { DARABONBA_PTR_SET_VALUE(totalQuantity_, totalQuantity) };


      protected:
        // The unit that is used to measure the resources deducted from deduction plans.
        shared_ptr<string> capacityUnit_ {};
        // The total coverage rate of deduction plans.
        shared_ptr<float> coveragePercentage_ {};
        // The total amount of the resources deducted from deduction plans.
        shared_ptr<float> deductQuantity_ {};
        // The total amount of resources consumed.
        shared_ptr<float> totalQuantity_ {};
      };

      class PeriodCoverage : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PeriodCoverage& obj) { 
          DARABONBA_PTR_TO_JSON(CoveragePercentage, coveragePercentage_);
          DARABONBA_PTR_TO_JSON(Period, period_);
        };
        friend void from_json(const Darabonba::Json& j, PeriodCoverage& obj) { 
          DARABONBA_PTR_FROM_JSON(CoveragePercentage, coveragePercentage_);
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
        virtual bool empty() const override { return this->coveragePercentage_ == nullptr
        && this->period_ == nullptr; };
        // coveragePercentage Field Functions 
        bool hasCoveragePercentage() const { return this->coveragePercentage_ != nullptr;};
        void deleteCoveragePercentage() { this->coveragePercentage_ = nullptr;};
        inline float getCoveragePercentage() const { DARABONBA_PTR_GET_DEFAULT(coveragePercentage_, 0.0) };
        inline PeriodCoverage& setCoveragePercentage(float coveragePercentage) { DARABONBA_PTR_SET_VALUE(coveragePercentage_, coveragePercentage) };


        // period Field Functions 
        bool hasPeriod() const { return this->period_ != nullptr;};
        void deletePeriod() { this->period_ = nullptr;};
        inline string getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
        inline PeriodCoverage& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


      protected:
        // The coverage rate of deduction plans within the specified period.
        shared_ptr<float> coveragePercentage_ {};
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
      // The information about the coverage rate of deduction plans within a period.
      shared_ptr<vector<Data::PeriodCoverage>> periodCoverage_ {};
      // The information about the total coverage data of deduction plans.
      shared_ptr<Data::TotalCoverage> totalCoverage_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeResourceCoverageTotalResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeResourceCoverageTotalResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeResourceCoverageTotalResponseBody::Data) };
    inline DescribeResourceCoverageTotalResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeResourceCoverageTotalResponseBody::Data) };
    inline DescribeResourceCoverageTotalResponseBody& setData(const DescribeResourceCoverageTotalResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeResourceCoverageTotalResponseBody& setData(DescribeResourceCoverageTotalResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeResourceCoverageTotalResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeResourceCoverageTotalResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeResourceCoverageTotalResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code.
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<DescribeResourceCoverageTotalResponseBody::Data> data_ {};
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
