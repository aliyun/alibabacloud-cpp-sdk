// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCALLINPOOLTRANSFERCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYCALLINPOOLTRANSFERCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryCallInPoolTransferConfigResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class QueryCallInPoolTransferConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCallInPoolTransferConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCallInPoolTransferConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryCallInPoolTransferConfigResponseBody() = default ;
    QueryCallInPoolTransferConfigResponseBody(const QueryCallInPoolTransferConfigResponseBody &) = default ;
    QueryCallInPoolTransferConfigResponseBody(QueryCallInPoolTransferConfigResponseBody &&) = default ;
    QueryCallInPoolTransferConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCallInPoolTransferConfigResponseBody() = default ;
    QueryCallInPoolTransferConfigResponseBody& operator=(const QueryCallInPoolTransferConfigResponseBody &) = default ;
    QueryCallInPoolTransferConfigResponseBody& operator=(QueryCallInPoolTransferConfigResponseBody &&) = default ;
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
    inline QueryCallInPoolTransferConfigResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryCallInPoolTransferConfigResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, QueryCallInPoolTransferConfigResponseBodyData) };
    inline QueryCallInPoolTransferConfigResponseBodyData data() { DARABONBA_PTR_GET(data_, QueryCallInPoolTransferConfigResponseBodyData) };
    inline QueryCallInPoolTransferConfigResponseBody& setData(const QueryCallInPoolTransferConfigResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryCallInPoolTransferConfigResponseBody& setData(QueryCallInPoolTransferConfigResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryCallInPoolTransferConfigResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryCallInPoolTransferConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response code.
    // 
    // *   The value OK indicates that the request was successful.
    // *   For more information about other response codes, see [API error codes](https://help.aliyun.com/document_detail/112502.html).
    std::shared_ptr<string> code_ = nullptr;
    // The response parameters.
    std::shared_ptr<QueryCallInPoolTransferConfigResponseBodyData> data_ = nullptr;
    // The returned message.
    std::shared_ptr<string> message_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
