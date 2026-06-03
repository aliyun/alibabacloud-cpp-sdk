// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSMSSIGNRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSMSSIGNRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dypns20170620
{
namespace Models
{
  class ListSmsSignResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSmsSignResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListSmsSignResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListSmsSignResponseBody() = default ;
    ListSmsSignResponseBody(const ListSmsSignResponseBody &) = default ;
    ListSmsSignResponseBody(ListSmsSignResponseBody &&) = default ;
    ListSmsSignResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSmsSignResponseBody() = default ;
    ListSmsSignResponseBody& operator=(const ListSmsSignResponseBody &) = default ;
    ListSmsSignResponseBody& operator=(ListSmsSignResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AuditResult, auditResult_);
        DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
        DARABONBA_PTR_TO_JSON(DefaultFlag, defaultFlag_);
        DARABONBA_PTR_TO_JSON(SmsSignName, smsSignName_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TestFlag, testFlag_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AuditResult, auditResult_);
        DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
        DARABONBA_PTR_FROM_JSON(DefaultFlag, defaultFlag_);
        DARABONBA_PTR_FROM_JSON(SmsSignName, smsSignName_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TestFlag, testFlag_);
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
      virtual bool empty() const override { return this->auditResult_ == nullptr
        && this->createDate_ == nullptr && this->defaultFlag_ == nullptr && this->smsSignName_ == nullptr && this->status_ == nullptr && this->testFlag_ == nullptr; };
      // auditResult Field Functions 
      bool hasAuditResult() const { return this->auditResult_ != nullptr;};
      void deleteAuditResult() { this->auditResult_ = nullptr;};
      inline string getAuditResult() const { DARABONBA_PTR_GET_DEFAULT(auditResult_, "") };
      inline Data& setAuditResult(string auditResult) { DARABONBA_PTR_SET_VALUE(auditResult_, auditResult) };


      // createDate Field Functions 
      bool hasCreateDate() const { return this->createDate_ != nullptr;};
      void deleteCreateDate() { this->createDate_ = nullptr;};
      inline int64_t getCreateDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, 0L) };
      inline Data& setCreateDate(int64_t createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


      // defaultFlag Field Functions 
      bool hasDefaultFlag() const { return this->defaultFlag_ != nullptr;};
      void deleteDefaultFlag() { this->defaultFlag_ = nullptr;};
      inline bool getDefaultFlag() const { DARABONBA_PTR_GET_DEFAULT(defaultFlag_, false) };
      inline Data& setDefaultFlag(bool defaultFlag) { DARABONBA_PTR_SET_VALUE(defaultFlag_, defaultFlag) };


      // smsSignName Field Functions 
      bool hasSmsSignName() const { return this->smsSignName_ != nullptr;};
      void deleteSmsSignName() { this->smsSignName_ = nullptr;};
      inline string getSmsSignName() const { DARABONBA_PTR_GET_DEFAULT(smsSignName_, "") };
      inline Data& setSmsSignName(string smsSignName) { DARABONBA_PTR_SET_VALUE(smsSignName_, smsSignName) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // testFlag Field Functions 
      bool hasTestFlag() const { return this->testFlag_ != nullptr;};
      void deleteTestFlag() { this->testFlag_ = nullptr;};
      inline bool getTestFlag() const { DARABONBA_PTR_GET_DEFAULT(testFlag_, false) };
      inline Data& setTestFlag(bool testFlag) { DARABONBA_PTR_SET_VALUE(testFlag_, testFlag) };


    protected:
      shared_ptr<string> auditResult_ {};
      shared_ptr<int64_t> createDate_ {};
      shared_ptr<bool> defaultFlag_ {};
      shared_ptr<string> smsSignName_ {};
      shared_ptr<string> status_ {};
      shared_ptr<bool> testFlag_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListSmsSignResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListSmsSignResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListSmsSignResponseBody::Data>) };
    inline vector<ListSmsSignResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListSmsSignResponseBody::Data>) };
    inline ListSmsSignResponseBody& setData(const vector<ListSmsSignResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListSmsSignResponseBody& setData(vector<ListSmsSignResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListSmsSignResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSmsSignResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<vector<ListSmsSignResponseBody::Data>> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dypns20170620
#endif
