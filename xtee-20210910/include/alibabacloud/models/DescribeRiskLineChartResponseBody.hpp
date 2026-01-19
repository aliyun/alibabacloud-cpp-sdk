// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERISKLINECHARTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERISKLINECHARTRESPONSEBODY_HPP_
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
  class DescribeRiskLineChartResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRiskLineChartResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(resultObject, resultObject_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRiskLineChartResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(resultObject, resultObject_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    DescribeRiskLineChartResponseBody() = default ;
    DescribeRiskLineChartResponseBody(const DescribeRiskLineChartResponseBody &) = default ;
    DescribeRiskLineChartResponseBody(DescribeRiskLineChartResponseBody &&) = default ;
    DescribeRiskLineChartResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRiskLineChartResponseBody() = default ;
    DescribeRiskLineChartResponseBody& operator=(const DescribeRiskLineChartResponseBody &) = default ;
    DescribeRiskLineChartResponseBody& operator=(DescribeRiskLineChartResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(series, series_);
        DARABONBA_PTR_TO_JSON(xaxis, xaxis_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(series, series_);
        DARABONBA_PTR_FROM_JSON(xaxis, xaxis_);
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
          DARABONBA_PTR_TO_JSON(data, data_);
        };
        friend void from_json(const Darabonba::Json& j, Xaxis& obj) { 
          DARABONBA_PTR_FROM_JSON(data, data_);
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
        // Returns x-axis data points
        shared_ptr<vector<string>> data_ {};
      };

      class Series : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Series& obj) { 
          DARABONBA_PTR_TO_JSON(data, data_);
          DARABONBA_PTR_TO_JSON(name, name_);
        };
        friend void from_json(const Darabonba::Json& j, Series& obj) { 
          DARABONBA_PTR_FROM_JSON(data, data_);
          DARABONBA_PTR_FROM_JSON(name, name_);
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
        inline const vector<string> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<string>) };
        inline vector<string> getData() { DARABONBA_PTR_GET(data_, vector<string>) };
        inline Series& setData(const vector<string> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
        inline Series& setData(vector<string> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Series& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        // Line chart data
        shared_ptr<vector<string>> data_ {};
        // Title of the line segment in the line chart
        shared_ptr<string> name_ {};
      };

      virtual bool empty() const override { return this->series_ == nullptr
        && this->xaxis_ == nullptr; };
      // series Field Functions 
      bool hasSeries() const { return this->series_ != nullptr;};
      void deleteSeries() { this->series_ = nullptr;};
      inline const vector<ResultObject::Series> & getSeries() const { DARABONBA_PTR_GET_CONST(series_, vector<ResultObject::Series>) };
      inline vector<ResultObject::Series> getSeries() { DARABONBA_PTR_GET(series_, vector<ResultObject::Series>) };
      inline ResultObject& setSeries(const vector<ResultObject::Series> & series) { DARABONBA_PTR_SET_VALUE(series_, series) };
      inline ResultObject& setSeries(vector<ResultObject::Series> && series) { DARABONBA_PTR_SET_RVALUE(series_, series) };


      // xaxis Field Functions 
      bool hasXaxis() const { return this->xaxis_ != nullptr;};
      void deleteXaxis() { this->xaxis_ = nullptr;};
      inline const ResultObject::Xaxis & getXaxis() const { DARABONBA_PTR_GET_CONST(xaxis_, ResultObject::Xaxis) };
      inline ResultObject::Xaxis getXaxis() { DARABONBA_PTR_GET(xaxis_, ResultObject::Xaxis) };
      inline ResultObject& setXaxis(const ResultObject::Xaxis & xaxis) { DARABONBA_PTR_SET_VALUE(xaxis_, xaxis) };
      inline ResultObject& setXaxis(ResultObject::Xaxis && xaxis) { DARABONBA_PTR_SET_RVALUE(xaxis_, xaxis) };


    protected:
      // Data list
      shared_ptr<vector<ResultObject::Series>> series_ {};
      // Details of xaxis node.
      shared_ptr<ResultObject::Xaxis> xaxis_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->resultObject_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeRiskLineChartResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline string getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, "") };
    inline DescribeRiskLineChartResponseBody& setHttpStatusCode(string httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeRiskLineChartResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRiskLineChartResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const DescribeRiskLineChartResponseBody::ResultObject & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, DescribeRiskLineChartResponseBody::ResultObject) };
    inline DescribeRiskLineChartResponseBody::ResultObject getResultObject() { DARABONBA_PTR_GET(resultObject_, DescribeRiskLineChartResponseBody::ResultObject) };
    inline DescribeRiskLineChartResponseBody& setResultObject(const DescribeRiskLineChartResponseBody::ResultObject & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline DescribeRiskLineChartResponseBody& setResultObject(DescribeRiskLineChartResponseBody::ResultObject && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeRiskLineChartResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Status code.
    shared_ptr<string> code_ {};
    // HTTP status code
    shared_ptr<string> httpStatusCode_ {};
    // Error message.
    shared_ptr<string> message_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Returned object
    shared_ptr<DescribeRiskLineChartResponseBody::ResultObject> resultObject_ {};
    // Whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
