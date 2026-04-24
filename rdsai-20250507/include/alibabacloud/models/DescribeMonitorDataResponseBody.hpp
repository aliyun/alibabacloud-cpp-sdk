// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMONITORDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMONITORDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class DescribeMonitorDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMonitorDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMonitorDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeMonitorDataResponseBody() = default ;
    DescribeMonitorDataResponseBody(const DescribeMonitorDataResponseBody &) = default ;
    DescribeMonitorDataResponseBody(DescribeMonitorDataResponseBody &&) = default ;
    DescribeMonitorDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMonitorDataResponseBody() = default ;
    DescribeMonitorDataResponseBody& operator=(const DescribeMonitorDataResponseBody &) = default ;
    DescribeMonitorDataResponseBody& operator=(DescribeMonitorDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
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
      class Value : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Value& obj) { 
          DARABONBA_PTR_TO_JSON(Time, time_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Value& obj) { 
          DARABONBA_PTR_FROM_JSON(Time, time_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Value() = default ;
        Value(const Value &) = default ;
        Value(Value &&) = default ;
        Value(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Value() = default ;
        Value& operator=(const Value &) = default ;
        Value& operator=(Value &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->time_ == nullptr
        && this->value_ == nullptr; };
        // time Field Functions 
        bool hasTime() const { return this->time_ != nullptr;};
        void deleteTime() { this->time_ = nullptr;};
        inline string getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
        inline Value& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline double getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
        inline Value& setValue(double value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        shared_ptr<string> time_ {};
        shared_ptr<double> value_ {};
      };

      virtual bool empty() const override { return this->name_ == nullptr
        && this->value_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline const vector<Data::Value> & getValue() const { DARABONBA_PTR_GET_CONST(value_, vector<Data::Value>) };
      inline vector<Data::Value> getValue() { DARABONBA_PTR_GET(value_, vector<Data::Value>) };
      inline Data& setValue(const vector<Data::Value> & value) { DARABONBA_PTR_SET_VALUE(value_, value) };
      inline Data& setValue(vector<Data::Value> && value) { DARABONBA_PTR_SET_RVALUE(value_, value) };


    protected:
      shared_ptr<string> name_ {};
      shared_ptr<vector<Data::Value>> value_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeMonitorDataResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeMonitorDataResponseBody::Data>) };
    inline vector<DescribeMonitorDataResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<DescribeMonitorDataResponseBody::Data>) };
    inline DescribeMonitorDataResponseBody& setData(const vector<DescribeMonitorDataResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeMonitorDataResponseBody& setData(vector<DescribeMonitorDataResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeMonitorDataResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMonitorDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeMonitorDataResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<vector<DescribeMonitorDataResponseBody::Data>> data_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
