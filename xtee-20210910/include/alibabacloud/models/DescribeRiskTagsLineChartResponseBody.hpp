// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERISKTAGSLINECHARTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERISKTAGSLINECHARTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeRiskTagsLineChartResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRiskTagsLineChartResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultObject, resultObject_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRiskTagsLineChartResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultObject, resultObject_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeRiskTagsLineChartResponseBody() = default ;
    DescribeRiskTagsLineChartResponseBody(const DescribeRiskTagsLineChartResponseBody &) = default ;
    DescribeRiskTagsLineChartResponseBody(DescribeRiskTagsLineChartResponseBody &&) = default ;
    DescribeRiskTagsLineChartResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRiskTagsLineChartResponseBody() = default ;
    DescribeRiskTagsLineChartResponseBody& operator=(const DescribeRiskTagsLineChartResponseBody &) = default ;
    DescribeRiskTagsLineChartResponseBody& operator=(DescribeRiskTagsLineChartResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(Percent, percent_);
        DARABONBA_PTR_TO_JSON(Series, series_);
        DARABONBA_PTR_TO_JSON(Total, total_);
        DARABONBA_PTR_TO_JSON(Xaxis, xaxis_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(Percent, percent_);
        DARABONBA_PTR_FROM_JSON(Series, series_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
        DARABONBA_PTR_FROM_JSON(Xaxis, xaxis_);
      };
      ResultObject() = default ;
      ResultObject(const ResultObject &) = default ;
      ResultObject(ResultObject &&) = default ;
      ResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResultObject() = default ;
      ResultObject& operator=(const ResultObject &) = default ;
      ResultObject& operator=(ResultObject &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Xaxis : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Xaxis& obj) { 
          DARABONBA_PTR_TO_JSON(Data, data_);
        };
        friend void from_json(const Darabonba::Json& j, Xaxis& obj) { 
          DARABONBA_PTR_FROM_JSON(Data, data_);
        };
        Xaxis() = default ;
        Xaxis(const Xaxis &) = default ;
        Xaxis(Xaxis &&) = default ;
        Xaxis(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Xaxis() = default ;
        Xaxis& operator=(const Xaxis &) = default ;
        Xaxis& operator=(Xaxis &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->data_ == nullptr; };
        // data Field Functions 
        bool hasData() const { return this->data_ != nullptr;};
        void deleteData() { this->data_ = nullptr;};
        inline const vector<string> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<string>) };
        inline vector<string> getData() { DARABONBA_PTR_GET(data_, vector<string>) };
        inline Xaxis& setData(const vector<string> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
        inline Xaxis& setData(vector<string> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


      protected:
        // Data returned by the chart
        shared_ptr<vector<string>> data_ {};
      };

      class Series : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Series& obj) { 
          DARABONBA_PTR_TO_JSON(Data, data_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, Series& obj) { 
          DARABONBA_PTR_FROM_JSON(Data, data_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        Series() = default ;
        Series(const Series &) = default ;
        Series(Series &&) = default ;
        Series(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Series() = default ;
        Series& operator=(const Series &) = default ;
        Series& operator=(Series &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->data_ == nullptr
        && this->name_ == nullptr; };
        // data Field Functions 
        bool hasData() const { return this->data_ != nullptr;};
        void deleteData() { this->data_ = nullptr;};
        inline float getData() const { DARABONBA_PTR_GET_DEFAULT(data_, 0.0) };
        inline Series& setData(float data) { DARABONBA_PTR_SET_VALUE(data_, data) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Series& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        // Data
        shared_ptr<float> data_ {};
        // Name
        shared_ptr<string> name_ {};
      };

      virtual bool empty() const override { return this->percent_ == nullptr
        && this->series_ == nullptr && this->total_ == nullptr && this->xaxis_ == nullptr; };
      // percent Field Functions 
      bool hasPercent() const { return this->percent_ != nullptr;};
      void deletePercent() { this->percent_ = nullptr;};
      inline const vector<float> & getPercent() const { DARABONBA_PTR_GET_CONST(percent_, vector<float>) };
      inline vector<float> getPercent() { DARABONBA_PTR_GET(percent_, vector<float>) };
      inline ResultObject& setPercent(const vector<float> & percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };
      inline ResultObject& setPercent(vector<float> && percent) { DARABONBA_PTR_SET_RVALUE(percent_, percent) };


      // series Field Functions 
      bool hasSeries() const { return this->series_ != nullptr;};
      void deleteSeries() { this->series_ = nullptr;};
      inline const vector<ResultObject::Series> & getSeries() const { DARABONBA_PTR_GET_CONST(series_, vector<ResultObject::Series>) };
      inline vector<ResultObject::Series> getSeries() { DARABONBA_PTR_GET(series_, vector<ResultObject::Series>) };
      inline ResultObject& setSeries(const vector<ResultObject::Series> & series) { DARABONBA_PTR_SET_VALUE(series_, series) };
      inline ResultObject& setSeries(vector<ResultObject::Series> && series) { DARABONBA_PTR_SET_RVALUE(series_, series) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline const vector<int64_t> & getTotal() const { DARABONBA_PTR_GET_CONST(total_, vector<int64_t>) };
      inline vector<int64_t> getTotal() { DARABONBA_PTR_GET(total_, vector<int64_t>) };
      inline ResultObject& setTotal(const vector<int64_t> & total) { DARABONBA_PTR_SET_VALUE(total_, total) };
      inline ResultObject& setTotal(vector<int64_t> && total) { DARABONBA_PTR_SET_RVALUE(total_, total) };


      // xaxis Field Functions 
      bool hasXaxis() const { return this->xaxis_ != nullptr;};
      void deleteXaxis() { this->xaxis_ = nullptr;};
      inline const ResultObject::Xaxis & getXaxis() const { DARABONBA_PTR_GET_CONST(xaxis_, ResultObject::Xaxis) };
      inline ResultObject::Xaxis getXaxis() { DARABONBA_PTR_GET(xaxis_, ResultObject::Xaxis) };
      inline ResultObject& setXaxis(const ResultObject::Xaxis & xaxis) { DARABONBA_PTR_SET_VALUE(xaxis_, xaxis) };
      inline ResultObject& setXaxis(ResultObject::Xaxis && xaxis) { DARABONBA_PTR_SET_RVALUE(xaxis_, xaxis) };


    protected:
      // Call percentage, represented as a decimal
      shared_ptr<vector<float>> percent_ {};
      // Chart data
      shared_ptr<vector<ResultObject::Series>> series_ {};
      // Total number of records.
      shared_ptr<vector<int64_t>> total_ {};
      // X-axis data of the chart
      shared_ptr<ResultObject::Xaxis> xaxis_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->resultObject_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeRiskTagsLineChartResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline string getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, "") };
    inline DescribeRiskTagsLineChartResponseBody& setHttpStatusCode(string httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeRiskTagsLineChartResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRiskTagsLineChartResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const DescribeRiskTagsLineChartResponseBody::ResultObject & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, DescribeRiskTagsLineChartResponseBody::ResultObject) };
    inline DescribeRiskTagsLineChartResponseBody::ResultObject getResultObject() { DARABONBA_PTR_GET(resultObject_, DescribeRiskTagsLineChartResponseBody::ResultObject) };
    inline DescribeRiskTagsLineChartResponseBody& setResultObject(const DescribeRiskTagsLineChartResponseBody::ResultObject & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline DescribeRiskTagsLineChartResponseBody& setResultObject(DescribeRiskTagsLineChartResponseBody::ResultObject && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeRiskTagsLineChartResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Status code. Note: 200 indicates success.
    shared_ptr<string> code_ {};
    // HTTP status code
    shared_ptr<string> httpStatusCode_ {};
    // Error message.
    shared_ptr<string> message_ {};
    // Request ID
    shared_ptr<string> requestId_ {};
    // Returned result information
    shared_ptr<DescribeRiskTagsLineChartResponseBody::ResultObject> resultObject_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
