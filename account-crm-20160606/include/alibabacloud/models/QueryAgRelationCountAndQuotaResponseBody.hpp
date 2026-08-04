// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAGRELATIONCOUNTANDQUOTARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYAGRELATIONCOUNTANDQUOTARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class QueryAgRelationCountAndQuotaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAgRelationCountAndQuotaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpCode, httpCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NullObject, nullObject_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAgRelationCountAndQuotaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpCode, httpCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NullObject, nullObject_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryAgRelationCountAndQuotaResponseBody() = default ;
    QueryAgRelationCountAndQuotaResponseBody(const QueryAgRelationCountAndQuotaResponseBody &) = default ;
    QueryAgRelationCountAndQuotaResponseBody(QueryAgRelationCountAndQuotaResponseBody &&) = default ;
    QueryAgRelationCountAndQuotaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAgRelationCountAndQuotaResponseBody() = default ;
    QueryAgRelationCountAndQuotaResponseBody& operator=(const QueryAgRelationCountAndQuotaResponseBody &) = default ;
    QueryAgRelationCountAndQuotaResponseBody& operator=(QueryAgRelationCountAndQuotaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AccountCount, accountCount_);
        DARABONBA_PTR_TO_JSON(Mpk, mpk_);
        DARABONBA_PTR_TO_JSON(NullObject, nullObject_);
        DARABONBA_PTR_TO_JSON(Quota, quota_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountCount, accountCount_);
        DARABONBA_PTR_FROM_JSON(Mpk, mpk_);
        DARABONBA_PTR_FROM_JSON(NullObject, nullObject_);
        DARABONBA_PTR_FROM_JSON(Quota, quota_);
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
      virtual bool empty() const override { return this->accountCount_ == nullptr
        && this->mpk_ == nullptr && this->nullObject_ == nullptr && this->quota_ == nullptr; };
      // accountCount Field Functions 
      bool hasAccountCount() const { return this->accountCount_ != nullptr;};
      void deleteAccountCount() { this->accountCount_ = nullptr;};
      inline int64_t getAccountCount() const { DARABONBA_PTR_GET_DEFAULT(accountCount_, 0L) };
      inline Data& setAccountCount(int64_t accountCount) { DARABONBA_PTR_SET_VALUE(accountCount_, accountCount) };


      // mpk Field Functions 
      bool hasMpk() const { return this->mpk_ != nullptr;};
      void deleteMpk() { this->mpk_ = nullptr;};
      inline string getMpk() const { DARABONBA_PTR_GET_DEFAULT(mpk_, "") };
      inline Data& setMpk(string mpk) { DARABONBA_PTR_SET_VALUE(mpk_, mpk) };


      // nullObject Field Functions 
      bool hasNullObject() const { return this->nullObject_ != nullptr;};
      void deleteNullObject() { this->nullObject_ = nullptr;};
      inline bool getNullObject() const { DARABONBA_PTR_GET_DEFAULT(nullObject_, false) };
      inline Data& setNullObject(bool nullObject) { DARABONBA_PTR_SET_VALUE(nullObject_, nullObject) };


      // quota Field Functions 
      bool hasQuota() const { return this->quota_ != nullptr;};
      void deleteQuota() { this->quota_ = nullptr;};
      inline int32_t getQuota() const { DARABONBA_PTR_GET_DEFAULT(quota_, 0) };
      inline Data& setQuota(int32_t quota) { DARABONBA_PTR_SET_VALUE(quota_, quota) };


    protected:
      shared_ptr<int64_t> accountCount_ {};
      shared_ptr<string> mpk_ {};
      shared_ptr<bool> nullObject_ {};
      shared_ptr<int32_t> quota_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpCode_ == nullptr && this->message_ == nullptr && this->nullObject_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryAgRelationCountAndQuotaResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryAgRelationCountAndQuotaResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryAgRelationCountAndQuotaResponseBody::Data) };
    inline QueryAgRelationCountAndQuotaResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryAgRelationCountAndQuotaResponseBody::Data) };
    inline QueryAgRelationCountAndQuotaResponseBody& setData(const QueryAgRelationCountAndQuotaResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryAgRelationCountAndQuotaResponseBody& setData(QueryAgRelationCountAndQuotaResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpCode Field Functions 
    bool hasHttpCode() const { return this->httpCode_ != nullptr;};
    void deleteHttpCode() { this->httpCode_ = nullptr;};
    inline string getHttpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, "") };
    inline QueryAgRelationCountAndQuotaResponseBody& setHttpCode(string httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryAgRelationCountAndQuotaResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nullObject Field Functions 
    bool hasNullObject() const { return this->nullObject_ != nullptr;};
    void deleteNullObject() { this->nullObject_ = nullptr;};
    inline bool getNullObject() const { DARABONBA_PTR_GET_DEFAULT(nullObject_, false) };
    inline QueryAgRelationCountAndQuotaResponseBody& setNullObject(bool nullObject) { DARABONBA_PTR_SET_VALUE(nullObject_, nullObject) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryAgRelationCountAndQuotaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryAgRelationCountAndQuotaResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<QueryAgRelationCountAndQuotaResponseBody::Data> data_ {};
    shared_ptr<string> httpCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<bool> nullObject_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif
