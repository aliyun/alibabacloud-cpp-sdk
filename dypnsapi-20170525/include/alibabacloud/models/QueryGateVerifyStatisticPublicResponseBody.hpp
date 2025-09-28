// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYGATEVERIFYSTATISTICPUBLICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYGATEVERIFYSTATISTICPUBLICRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryGateVerifyStatisticPublicResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dypnsapi20170525
{
namespace Models
{
  class QueryGateVerifyStatisticPublicResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryGateVerifyStatisticPublicResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryGateVerifyStatisticPublicResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryGateVerifyStatisticPublicResponseBody() = default ;
    QueryGateVerifyStatisticPublicResponseBody(const QueryGateVerifyStatisticPublicResponseBody &) = default ;
    QueryGateVerifyStatisticPublicResponseBody(QueryGateVerifyStatisticPublicResponseBody &&) = default ;
    QueryGateVerifyStatisticPublicResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryGateVerifyStatisticPublicResponseBody() = default ;
    QueryGateVerifyStatisticPublicResponseBody& operator=(const QueryGateVerifyStatisticPublicResponseBody &) = default ;
    QueryGateVerifyStatisticPublicResponseBody& operator=(QueryGateVerifyStatisticPublicResponseBody &&) = default ;
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
    inline QueryGateVerifyStatisticPublicResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryGateVerifyStatisticPublicResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, QueryGateVerifyStatisticPublicResponseBodyData) };
    inline QueryGateVerifyStatisticPublicResponseBodyData data() { DARABONBA_PTR_GET(data_, QueryGateVerifyStatisticPublicResponseBodyData) };
    inline QueryGateVerifyStatisticPublicResponseBody& setData(const QueryGateVerifyStatisticPublicResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryGateVerifyStatisticPublicResponseBody& setData(QueryGateVerifyStatisticPublicResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryGateVerifyStatisticPublicResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryGateVerifyStatisticPublicResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response code. Valid values:
    // 
    // *   If OK is returned, the request is successful.
    // *   For more information about other error codes, see [API response codes](https://help.aliyun.com/document_detail/85198.html).
    std::shared_ptr<string> code_ = nullptr;
    // The information about the calls of Phone Number Verification Service, including the total calls, the successful calls, failed calls, unknown calls, and daily calls within the statistical date range.
    std::shared_ptr<QueryGateVerifyStatisticPublicResponseBodyData> data_ = nullptr;
    // The returned message.
    std::shared_ptr<string> message_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dypnsapi20170525
#endif
