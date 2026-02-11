// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOGFIELDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOGFIELDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class DescribeLogFieldsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLogFieldsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLogFieldsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeLogFieldsResponseBody() = default ;
    DescribeLogFieldsResponseBody(const DescribeLogFieldsResponseBody &) = default ;
    DescribeLogFieldsResponseBody(DescribeLogFieldsResponseBody &&) = default ;
    DescribeLogFieldsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLogFieldsResponseBody() = default ;
    DescribeLogFieldsResponseBody& operator=(const DescribeLogFieldsResponseBody &) = default ;
    DescribeLogFieldsResponseBody& operator=(DescribeLogFieldsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ActivityName, activityName_);
        DARABONBA_PTR_TO_JSON(FieldDesc, fieldDesc_);
        DARABONBA_PTR_TO_JSON(FieldName, fieldName_);
        DARABONBA_PTR_TO_JSON(FieldType, fieldType_);
        DARABONBA_PTR_TO_JSON(LogCode, logCode_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ActivityName, activityName_);
        DARABONBA_PTR_FROM_JSON(FieldDesc, fieldDesc_);
        DARABONBA_PTR_FROM_JSON(FieldName, fieldName_);
        DARABONBA_PTR_FROM_JSON(FieldType, fieldType_);
        DARABONBA_PTR_FROM_JSON(LogCode, logCode_);
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
      virtual bool empty() const override { return this->activityName_ == nullptr
        && this->fieldDesc_ == nullptr && this->fieldName_ == nullptr && this->fieldType_ == nullptr && this->logCode_ == nullptr; };
      // activityName Field Functions 
      bool hasActivityName() const { return this->activityName_ != nullptr;};
      void deleteActivityName() { this->activityName_ = nullptr;};
      inline string getActivityName() const { DARABONBA_PTR_GET_DEFAULT(activityName_, "") };
      inline Data& setActivityName(string activityName) { DARABONBA_PTR_SET_VALUE(activityName_, activityName) };


      // fieldDesc Field Functions 
      bool hasFieldDesc() const { return this->fieldDesc_ != nullptr;};
      void deleteFieldDesc() { this->fieldDesc_ = nullptr;};
      inline string getFieldDesc() const { DARABONBA_PTR_GET_DEFAULT(fieldDesc_, "") };
      inline Data& setFieldDesc(string fieldDesc) { DARABONBA_PTR_SET_VALUE(fieldDesc_, fieldDesc) };


      // fieldName Field Functions 
      bool hasFieldName() const { return this->fieldName_ != nullptr;};
      void deleteFieldName() { this->fieldName_ = nullptr;};
      inline string getFieldName() const { DARABONBA_PTR_GET_DEFAULT(fieldName_, "") };
      inline Data& setFieldName(string fieldName) { DARABONBA_PTR_SET_VALUE(fieldName_, fieldName) };


      // fieldType Field Functions 
      bool hasFieldType() const { return this->fieldType_ != nullptr;};
      void deleteFieldType() { this->fieldType_ = nullptr;};
      inline string getFieldType() const { DARABONBA_PTR_GET_DEFAULT(fieldType_, "") };
      inline Data& setFieldType(string fieldType) { DARABONBA_PTR_SET_VALUE(fieldType_, fieldType) };


      // logCode Field Functions 
      bool hasLogCode() const { return this->logCode_ != nullptr;};
      void deleteLogCode() { this->logCode_ = nullptr;};
      inline string getLogCode() const { DARABONBA_PTR_GET_DEFAULT(logCode_, "") };
      inline Data& setLogCode(string logCode) { DARABONBA_PTR_SET_VALUE(logCode_, logCode) };


    protected:
      // The type of the log to which the field belongs.
      shared_ptr<string> activityName_ {};
      // The internal code of the field description.
      shared_ptr<string> fieldDesc_ {};
      // The name of the field.
      shared_ptr<string> fieldName_ {};
      // The data type of the field. Valid values:
      // 
      // *   varchar
      // *   bigint
      shared_ptr<string> fieldType_ {};
      // The log source to which the field belongs.
      shared_ptr<string> logCode_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DescribeLogFieldsResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeLogFieldsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeLogFieldsResponseBody::Data>) };
    inline vector<DescribeLogFieldsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<DescribeLogFieldsResponseBody::Data>) };
    inline DescribeLogFieldsResponseBody& setData(const vector<DescribeLogFieldsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeLogFieldsResponseBody& setData(vector<DescribeLogFieldsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeLogFieldsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLogFieldsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeLogFieldsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code.
    shared_ptr<int32_t> code_ {};
    // The data returned.
    shared_ptr<vector<DescribeLogFieldsResponseBody::Data>> data_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
