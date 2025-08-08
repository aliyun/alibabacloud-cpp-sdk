// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYINSTANCESPEC4MODIFYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYINSTANCESPEC4MODIFYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryInstanceSpec4ModifyResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BPStudio20210931
{
namespace Models
{
  class QueryInstanceSpec4ModifyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryInstanceSpec4ModifyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryInstanceSpec4ModifyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryInstanceSpec4ModifyResponseBody() = default ;
    QueryInstanceSpec4ModifyResponseBody(const QueryInstanceSpec4ModifyResponseBody &) = default ;
    QueryInstanceSpec4ModifyResponseBody(QueryInstanceSpec4ModifyResponseBody &&) = default ;
    QueryInstanceSpec4ModifyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryInstanceSpec4ModifyResponseBody() = default ;
    QueryInstanceSpec4ModifyResponseBody& operator=(const QueryInstanceSpec4ModifyResponseBody &) = default ;
    QueryInstanceSpec4ModifyResponseBody& operator=(QueryInstanceSpec4ModifyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessDeniedDetail_ != nullptr
        && this->code_ != nullptr && this->data_ != nullptr && this->message_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string accessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline QueryInstanceSpec4ModifyResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryInstanceSpec4ModifyResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryInstanceSpec4ModifyResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, QueryInstanceSpec4ModifyResponseBodyData) };
    inline QueryInstanceSpec4ModifyResponseBodyData data() { DARABONBA_PTR_GET(data_, QueryInstanceSpec4ModifyResponseBodyData) };
    inline QueryInstanceSpec4ModifyResponseBody& setData(const QueryInstanceSpec4ModifyResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryInstanceSpec4ModifyResponseBody& setData(QueryInstanceSpec4ModifyResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryInstanceSpec4ModifyResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryInstanceSpec4ModifyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryInstanceSpec4ModifyResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<string> accessDeniedDetail_ = nullptr;
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<QueryInstanceSpec4ModifyResponseBodyData> data_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BPStudio20210931
#endif
