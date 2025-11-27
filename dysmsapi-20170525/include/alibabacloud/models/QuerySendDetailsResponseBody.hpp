// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSENDDETAILSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYSENDDETAILSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QuerySendDetailsResponseBodySmsSendDetailDTOs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class QuerySendDetailsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySendDetailsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SmsSendDetailDTOs, smsSendDetailDTOs_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySendDetailsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SmsSendDetailDTOs, smsSendDetailDTOs_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    QuerySendDetailsResponseBody() = default ;
    QuerySendDetailsResponseBody(const QuerySendDetailsResponseBody &) = default ;
    QuerySendDetailsResponseBody(QuerySendDetailsResponseBody &&) = default ;
    QuerySendDetailsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySendDetailsResponseBody() = default ;
    QuerySendDetailsResponseBody& operator=(const QuerySendDetailsResponseBody &) = default ;
    QuerySendDetailsResponseBody& operator=(QuerySendDetailsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->smsSendDetailDTOs_ == nullptr && return this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QuerySendDetailsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QuerySendDetailsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QuerySendDetailsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // smsSendDetailDTOs Field Functions 
    bool hasSmsSendDetailDTOs() const { return this->smsSendDetailDTOs_ != nullptr;};
    void deleteSmsSendDetailDTOs() { this->smsSendDetailDTOs_ = nullptr;};
    inline const QuerySendDetailsResponseBodySmsSendDetailDTOs & smsSendDetailDTOs() const { DARABONBA_PTR_GET_CONST(smsSendDetailDTOs_, QuerySendDetailsResponseBodySmsSendDetailDTOs) };
    inline QuerySendDetailsResponseBodySmsSendDetailDTOs smsSendDetailDTOs() { DARABONBA_PTR_GET(smsSendDetailDTOs_, QuerySendDetailsResponseBodySmsSendDetailDTOs) };
    inline QuerySendDetailsResponseBody& setSmsSendDetailDTOs(const QuerySendDetailsResponseBodySmsSendDetailDTOs & smsSendDetailDTOs) { DARABONBA_PTR_SET_VALUE(smsSendDetailDTOs_, smsSendDetailDTOs) };
    inline QuerySendDetailsResponseBody& setSmsSendDetailDTOs(QuerySendDetailsResponseBodySmsSendDetailDTOs && smsSendDetailDTOs) { DARABONBA_PTR_SET_RVALUE(smsSendDetailDTOs_, smsSendDetailDTOs) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline QuerySendDetailsResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The response code.
    // 
    // *   The value OK indicates that the request was successful.
    // *   Other values indicate that the request failed. For more information, see [Error codes](https://help.aliyun.com/document_detail/101346.html).
    std::shared_ptr<string> code_ = nullptr;
    // The returned message.
    std::shared_ptr<string> message_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The details of the message.
    std::shared_ptr<QuerySendDetailsResponseBodySmsSendDetailDTOs> smsSendDetailDTOs_ = nullptr;
    // The number of sent messages.
    std::shared_ptr<string> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
