// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAUTOMATICWRITEOFFCHANGERECORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYAUTOMATICWRITEOFFCHANGERECORDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20221216
{
namespace Models
{
  class QueryAutomaticWriteOffChangeRecordsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAutomaticWriteOffChangeRecordsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAutomaticWriteOffChangeRecordsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryAutomaticWriteOffChangeRecordsResponseBody() = default ;
    QueryAutomaticWriteOffChangeRecordsResponseBody(const QueryAutomaticWriteOffChangeRecordsResponseBody &) = default ;
    QueryAutomaticWriteOffChangeRecordsResponseBody(QueryAutomaticWriteOffChangeRecordsResponseBody &&) = default ;
    QueryAutomaticWriteOffChangeRecordsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAutomaticWriteOffChangeRecordsResponseBody() = default ;
    QueryAutomaticWriteOffChangeRecordsResponseBody& operator=(const QueryAutomaticWriteOffChangeRecordsResponseBody &) = default ;
    QueryAutomaticWriteOffChangeRecordsResponseBody& operator=(QueryAutomaticWriteOffChangeRecordsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ChangeContent, changeContent_);
        DARABONBA_PTR_TO_JSON(OperateId, operateId_);
        DARABONBA_PTR_TO_JSON(OperateSource, operateSource_);
        DARABONBA_PTR_TO_JSON(OperationTime, operationTime_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ChangeContent, changeContent_);
        DARABONBA_PTR_FROM_JSON(OperateId, operateId_);
        DARABONBA_PTR_FROM_JSON(OperateSource, operateSource_);
        DARABONBA_PTR_FROM_JSON(OperationTime, operationTime_);
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
      virtual bool empty() const override { return this->changeContent_ == nullptr
        && this->operateId_ == nullptr && this->operateSource_ == nullptr && this->operationTime_ == nullptr; };
      // changeContent Field Functions 
      bool hasChangeContent() const { return this->changeContent_ != nullptr;};
      void deleteChangeContent() { this->changeContent_ = nullptr;};
      inline string getChangeContent() const { DARABONBA_PTR_GET_DEFAULT(changeContent_, "") };
      inline Data& setChangeContent(string changeContent) { DARABONBA_PTR_SET_VALUE(changeContent_, changeContent) };


      // operateId Field Functions 
      bool hasOperateId() const { return this->operateId_ != nullptr;};
      void deleteOperateId() { this->operateId_ = nullptr;};
      inline string getOperateId() const { DARABONBA_PTR_GET_DEFAULT(operateId_, "") };
      inline Data& setOperateId(string operateId) { DARABONBA_PTR_SET_VALUE(operateId_, operateId) };


      // operateSource Field Functions 
      bool hasOperateSource() const { return this->operateSource_ != nullptr;};
      void deleteOperateSource() { this->operateSource_ = nullptr;};
      inline string getOperateSource() const { DARABONBA_PTR_GET_DEFAULT(operateSource_, "") };
      inline Data& setOperateSource(string operateSource) { DARABONBA_PTR_SET_VALUE(operateSource_, operateSource) };


      // operationTime Field Functions 
      bool hasOperationTime() const { return this->operationTime_ != nullptr;};
      void deleteOperationTime() { this->operationTime_ = nullptr;};
      inline string getOperationTime() const { DARABONBA_PTR_GET_DEFAULT(operationTime_, "") };
      inline Data& setOperationTime(string operationTime) { DARABONBA_PTR_SET_VALUE(operationTime_, operationTime) };


    protected:
      shared_ptr<string> changeContent_ {};
      shared_ptr<string> operateId_ {};
      shared_ptr<string> operateSource_ {};
      shared_ptr<string> operationTime_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryAutomaticWriteOffChangeRecordsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<QueryAutomaticWriteOffChangeRecordsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<QueryAutomaticWriteOffChangeRecordsResponseBody::Data>) };
    inline vector<QueryAutomaticWriteOffChangeRecordsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<QueryAutomaticWriteOffChangeRecordsResponseBody::Data>) };
    inline QueryAutomaticWriteOffChangeRecordsResponseBody& setData(const vector<QueryAutomaticWriteOffChangeRecordsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryAutomaticWriteOffChangeRecordsResponseBody& setData(vector<QueryAutomaticWriteOffChangeRecordsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryAutomaticWriteOffChangeRecordsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryAutomaticWriteOffChangeRecordsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<vector<QueryAutomaticWriteOffChangeRecordsResponseBody::Data>> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20221216
#endif
