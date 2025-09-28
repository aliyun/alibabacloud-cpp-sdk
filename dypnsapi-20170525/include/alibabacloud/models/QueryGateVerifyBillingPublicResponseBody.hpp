// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYGATEVERIFYBILLINGPUBLICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYGATEVERIFYBILLINGPUBLICRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryGateVerifyBillingPublicResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dypnsapi20170525
{
namespace Models
{
  class QueryGateVerifyBillingPublicResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryGateVerifyBillingPublicResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryGateVerifyBillingPublicResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryGateVerifyBillingPublicResponseBody() = default ;
    QueryGateVerifyBillingPublicResponseBody(const QueryGateVerifyBillingPublicResponseBody &) = default ;
    QueryGateVerifyBillingPublicResponseBody(QueryGateVerifyBillingPublicResponseBody &&) = default ;
    QueryGateVerifyBillingPublicResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryGateVerifyBillingPublicResponseBody() = default ;
    QueryGateVerifyBillingPublicResponseBody& operator=(const QueryGateVerifyBillingPublicResponseBody &) = default ;
    QueryGateVerifyBillingPublicResponseBody& operator=(QueryGateVerifyBillingPublicResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->data_ != nullptr && this->message_ != nullptr && this->requestId_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryGateVerifyBillingPublicResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryGateVerifyBillingPublicResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, QueryGateVerifyBillingPublicResponseBodyData) };
    inline QueryGateVerifyBillingPublicResponseBodyData data() { DARABONBA_PTR_GET(data_, QueryGateVerifyBillingPublicResponseBodyData) };
    inline QueryGateVerifyBillingPublicResponseBody& setData(const QueryGateVerifyBillingPublicResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryGateVerifyBillingPublicResponseBody& setData(QueryGateVerifyBillingPublicResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryGateVerifyBillingPublicResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryGateVerifyBillingPublicResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response code. Valid values:
    // 
    // *   If OK is returned, the request is successful.
    // *   For more information about other error codes, see [API response codes](https://help.aliyun.com/document_detail/85198.html).
    std::shared_ptr<string> code_ = nullptr;
    // The billing information about each verification service.
    std::shared_ptr<QueryGateVerifyBillingPublicResponseBodyData> data_ = nullptr;
    // The returned message.
    std::shared_ptr<string> message_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dypnsapi20170525
#endif
