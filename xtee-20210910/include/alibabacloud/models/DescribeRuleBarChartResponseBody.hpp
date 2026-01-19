// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERULEBARCHARTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERULEBARCHARTRESPONSEBODY_HPP_
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
  class DescribeRuleBarChartResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRuleBarChartResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(resultObject, resultObject_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRuleBarChartResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(resultObject, resultObject_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    DescribeRuleBarChartResponseBody() = default ;
    DescribeRuleBarChartResponseBody(const DescribeRuleBarChartResponseBody &) = default ;
    DescribeRuleBarChartResponseBody(DescribeRuleBarChartResponseBody &&) = default ;
    DescribeRuleBarChartResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRuleBarChartResponseBody() = default ;
    DescribeRuleBarChartResponseBody& operator=(const DescribeRuleBarChartResponseBody &) = default ;
    DescribeRuleBarChartResponseBody& operator=(DescribeRuleBarChartResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(series, series_);
        DARABONBA_PTR_TO_JSON(yaxis, yaxis_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(series, series_);
        DARABONBA_PTR_FROM_JSON(yaxis, yaxis_);
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
      class Yaxis : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Yaxis& obj) { 
          DARABONBA_PTR_TO_JSON(data, data_);
        };
        friend void from_json(const Darabonba::Json& j, Yaxis& obj) { 
          DARABONBA_PTR_FROM_JSON(data, data_);
        };
        Yaxis() = default ;
        Yaxis(const Yaxis &) = default ;
        Yaxis(Yaxis &&) = default ;
        Yaxis(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Yaxis() = default ;
        Yaxis& operator=(const Yaxis &) = default ;
        Yaxis& operator=(Yaxis &&) = default ;
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
        inline Yaxis& setData(const vector<string> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
        inline Yaxis& setData(vector<string> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


      protected:
        // yaxis data items
        shared_ptr<vector<string>> data_ {};
      };

      class Series : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Series& obj) { 
          DARABONBA_PTR_TO_JSON(data, data_);
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Series& obj) { 
          DARABONBA_PTR_FROM_JSON(data, data_);
          DARABONBA_PTR_FROM_JSON(type, type_);
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
        class Data : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Data& obj) { 
            DARABONBA_PTR_TO_JSON(eventName, eventName_);
            DARABONBA_PTR_TO_JSON(num, num_);
            DARABONBA_PTR_TO_JSON(ruleName, ruleName_);
            DARABONBA_PTR_TO_JSON(status, status_);
          };
          friend void from_json(const Darabonba::Json& j, Data& obj) { 
            DARABONBA_PTR_FROM_JSON(eventName, eventName_);
            DARABONBA_PTR_FROM_JSON(num, num_);
            DARABONBA_PTR_FROM_JSON(ruleName, ruleName_);
            DARABONBA_PTR_FROM_JSON(status, status_);
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
          virtual bool empty() const override { return this->eventName_ == nullptr
        && this->num_ == nullptr && this->ruleName_ == nullptr && this->status_ == nullptr; };
          // eventName Field Functions 
          bool hasEventName() const { return this->eventName_ != nullptr;};
          void deleteEventName() { this->eventName_ = nullptr;};
          inline string getEventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
          inline Data& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


          // num Field Functions 
          bool hasNum() const { return this->num_ != nullptr;};
          void deleteNum() { this->num_ = nullptr;};
          inline int64_t getNum() const { DARABONBA_PTR_GET_DEFAULT(num_, 0L) };
          inline Data& setNum(int64_t num) { DARABONBA_PTR_SET_VALUE(num_, num) };


          // ruleName Field Functions 
          bool hasRuleName() const { return this->ruleName_ != nullptr;};
          void deleteRuleName() { this->ruleName_ = nullptr;};
          inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
          inline Data& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
          inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        protected:
          // Event name.
          shared_ptr<string> eventName_ {};
          // Number.
          shared_ptr<int64_t> num_ {};
          // Policy name
          shared_ptr<string> ruleName_ {};
          // Status.
          shared_ptr<string> status_ {};
        };

        virtual bool empty() const override { return this->data_ == nullptr
        && this->type_ == nullptr; };
        // data Field Functions 
        bool hasData() const { return this->data_ != nullptr;};
        void deleteData() { this->data_ = nullptr;};
        inline const vector<Series::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<Series::Data>) };
        inline vector<Series::Data> getData() { DARABONBA_PTR_GET(data_, vector<Series::Data>) };
        inline Series& setData(const vector<Series::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
        inline Series& setData(vector<Series::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Series& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // Response data.
        shared_ptr<vector<Series::Data>> data_ {};
        // Bar chart type
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->series_ == nullptr
        && this->yaxis_ == nullptr; };
      // series Field Functions 
      bool hasSeries() const { return this->series_ != nullptr;};
      void deleteSeries() { this->series_ = nullptr;};
      inline const vector<ResultObject::Series> & getSeries() const { DARABONBA_PTR_GET_CONST(series_, vector<ResultObject::Series>) };
      inline vector<ResultObject::Series> getSeries() { DARABONBA_PTR_GET(series_, vector<ResultObject::Series>) };
      inline ResultObject& setSeries(const vector<ResultObject::Series> & series) { DARABONBA_PTR_SET_VALUE(series_, series) };
      inline ResultObject& setSeries(vector<ResultObject::Series> && series) { DARABONBA_PTR_SET_RVALUE(series_, series) };


      // yaxis Field Functions 
      bool hasYaxis() const { return this->yaxis_ != nullptr;};
      void deleteYaxis() { this->yaxis_ = nullptr;};
      inline const ResultObject::Yaxis & getYaxis() const { DARABONBA_PTR_GET_CONST(yaxis_, ResultObject::Yaxis) };
      inline ResultObject::Yaxis getYaxis() { DARABONBA_PTR_GET(yaxis_, ResultObject::Yaxis) };
      inline ResultObject& setYaxis(const ResultObject::Yaxis & yaxis) { DARABONBA_PTR_SET_VALUE(yaxis_, yaxis) };
      inline ResultObject& setYaxis(ResultObject::Yaxis && yaxis) { DARABONBA_PTR_SET_RVALUE(yaxis_, yaxis) };


    protected:
      // Data list
      shared_ptr<vector<ResultObject::Series>> series_ {};
      // yaxis related results.
      shared_ptr<ResultObject::Yaxis> yaxis_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->resultObject_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeRuleBarChartResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline string getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, "") };
    inline DescribeRuleBarChartResponseBody& setHttpStatusCode(string httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeRuleBarChartResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRuleBarChartResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const DescribeRuleBarChartResponseBody::ResultObject & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, DescribeRuleBarChartResponseBody::ResultObject) };
    inline DescribeRuleBarChartResponseBody::ResultObject getResultObject() { DARABONBA_PTR_GET(resultObject_, DescribeRuleBarChartResponseBody::ResultObject) };
    inline DescribeRuleBarChartResponseBody& setResultObject(const DescribeRuleBarChartResponseBody::ResultObject & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline DescribeRuleBarChartResponseBody& setResultObject(DescribeRuleBarChartResponseBody::ResultObject && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeRuleBarChartResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Status code.
    shared_ptr<string> code_ {};
    // HTTP status code.
    shared_ptr<string> httpStatusCode_ {};
    // Error message.
    shared_ptr<string> message_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Returned object
    shared_ptr<DescribeRuleBarChartResponseBody::ResultObject> resultObject_ {};
    // Whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
