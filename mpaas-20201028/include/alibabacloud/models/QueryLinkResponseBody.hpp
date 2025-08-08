// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYLINKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYLINKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryLinkResponseBodyResultContent.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class QueryLinkResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryLinkResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultContent, resultContent_);
      DARABONBA_PTR_TO_JSON(ResultMessage, resultMessage_);
    };
    friend void from_json(const Darabonba::Json& j, QueryLinkResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultContent, resultContent_);
      DARABONBA_PTR_FROM_JSON(ResultMessage, resultMessage_);
    };
    QueryLinkResponseBody() = default ;
    QueryLinkResponseBody(const QueryLinkResponseBody &) = default ;
    QueryLinkResponseBody(QueryLinkResponseBody &&) = default ;
    QueryLinkResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryLinkResponseBody() = default ;
    QueryLinkResponseBody& operator=(const QueryLinkResponseBody &) = default ;
    QueryLinkResponseBody& operator=(QueryLinkResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->resultCode_ != nullptr && this->resultContent_ != nullptr && this->resultMessage_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryLinkResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string resultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline QueryLinkResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultContent Field Functions 
    bool hasResultContent() const { return this->resultContent_ != nullptr;};
    void deleteResultContent() { this->resultContent_ = nullptr;};
    inline const QueryLinkResponseBodyResultContent & resultContent() const { DARABONBA_PTR_GET_CONST(resultContent_, QueryLinkResponseBodyResultContent) };
    inline QueryLinkResponseBodyResultContent resultContent() { DARABONBA_PTR_GET(resultContent_, QueryLinkResponseBodyResultContent) };
    inline QueryLinkResponseBody& setResultContent(const QueryLinkResponseBodyResultContent & resultContent) { DARABONBA_PTR_SET_VALUE(resultContent_, resultContent) };
    inline QueryLinkResponseBody& setResultContent(QueryLinkResponseBodyResultContent && resultContent) { DARABONBA_PTR_SET_RVALUE(resultContent_, resultContent) };


    // resultMessage Field Functions 
    bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
    void deleteResultMessage() { this->resultMessage_ = nullptr;};
    inline string resultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
    inline QueryLinkResponseBody& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


  protected:
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> resultCode_ = nullptr;
    std::shared_ptr<QueryLinkResponseBodyResultContent> resultContent_ = nullptr;
    std::shared_ptr<string> resultMessage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
