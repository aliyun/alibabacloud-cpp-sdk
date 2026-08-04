// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYBINDSBYOUTERIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYBINDSBYOUTERIDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class QueryBindsByOuterIdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryBindsByOuterIdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpCode, httpCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryBindsByOuterIdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpCode, httpCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryBindsByOuterIdResponseBody() = default ;
    QueryBindsByOuterIdResponseBody(const QueryBindsByOuterIdResponseBody &) = default ;
    QueryBindsByOuterIdResponseBody(QueryBindsByOuterIdResponseBody &&) = default ;
    QueryBindsByOuterIdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryBindsByOuterIdResponseBody() = default ;
    QueryBindsByOuterIdResponseBody& operator=(const QueryBindsByOuterIdResponseBody &) = default ;
    QueryBindsByOuterIdResponseBody& operator=(QueryBindsByOuterIdResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_ANY_TO_JSON(BindData, bindData_);
        DARABONBA_PTR_TO_JSON(MinorOuterId, minorOuterId_);
        DARABONBA_PTR_TO_JSON(OuterId, outerId_);
        DARABONBA_PTR_TO_JSON(Pk, pk_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_ANY_FROM_JSON(BindData, bindData_);
        DARABONBA_PTR_FROM_JSON(MinorOuterId, minorOuterId_);
        DARABONBA_PTR_FROM_JSON(OuterId, outerId_);
        DARABONBA_PTR_FROM_JSON(Pk, pk_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
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
      virtual bool empty() const override { return this->bindData_ == nullptr
        && this->minorOuterId_ == nullptr && this->outerId_ == nullptr && this->pk_ == nullptr && this->status_ == nullptr && this->tenantId_ == nullptr; };
      // bindData Field Functions 
      bool hasBindData() const { return this->bindData_ != nullptr;};
      void deleteBindData() { this->bindData_ = nullptr;};
      inline       const Darabonba::Json & getBindData() const { DARABONBA_GET(bindData_) };
      Darabonba::Json & getBindData() { DARABONBA_GET(bindData_) };
      inline Data& setBindData(const Darabonba::Json & bindData) { DARABONBA_SET_VALUE(bindData_, bindData) };
      inline Data& setBindData(Darabonba::Json && bindData) { DARABONBA_SET_RVALUE(bindData_, bindData) };


      // minorOuterId Field Functions 
      bool hasMinorOuterId() const { return this->minorOuterId_ != nullptr;};
      void deleteMinorOuterId() { this->minorOuterId_ = nullptr;};
      inline string getMinorOuterId() const { DARABONBA_PTR_GET_DEFAULT(minorOuterId_, "") };
      inline Data& setMinorOuterId(string minorOuterId) { DARABONBA_PTR_SET_VALUE(minorOuterId_, minorOuterId) };


      // outerId Field Functions 
      bool hasOuterId() const { return this->outerId_ != nullptr;};
      void deleteOuterId() { this->outerId_ = nullptr;};
      inline string getOuterId() const { DARABONBA_PTR_GET_DEFAULT(outerId_, "") };
      inline Data& setOuterId(string outerId) { DARABONBA_PTR_SET_VALUE(outerId_, outerId) };


      // pk Field Functions 
      bool hasPk() const { return this->pk_ != nullptr;};
      void deletePk() { this->pk_ = nullptr;};
      inline string getPk() const { DARABONBA_PTR_GET_DEFAULT(pk_, "") };
      inline Data& setPk(string pk) { DARABONBA_PTR_SET_VALUE(pk_, pk) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tenantId Field Functions 
      bool hasTenantId() const { return this->tenantId_ != nullptr;};
      void deleteTenantId() { this->tenantId_ = nullptr;};
      inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
      inline Data& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    protected:
      Darabonba::Json bindData_ {};
      shared_ptr<string> minorOuterId_ {};
      shared_ptr<string> outerId_ {};
      shared_ptr<string> pk_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> tenantId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryBindsByOuterIdResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<QueryBindsByOuterIdResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<QueryBindsByOuterIdResponseBody::Data>) };
    inline vector<QueryBindsByOuterIdResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<QueryBindsByOuterIdResponseBody::Data>) };
    inline QueryBindsByOuterIdResponseBody& setData(const vector<QueryBindsByOuterIdResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryBindsByOuterIdResponseBody& setData(vector<QueryBindsByOuterIdResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpCode Field Functions 
    bool hasHttpCode() const { return this->httpCode_ != nullptr;};
    void deleteHttpCode() { this->httpCode_ = nullptr;};
    inline string getHttpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, "") };
    inline QueryBindsByOuterIdResponseBody& setHttpCode(string httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryBindsByOuterIdResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryBindsByOuterIdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryBindsByOuterIdResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<vector<QueryBindsByOuterIdResponseBody::Data>> data_ {};
    shared_ptr<string> httpCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif
