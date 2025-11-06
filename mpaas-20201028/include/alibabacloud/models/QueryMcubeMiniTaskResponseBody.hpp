// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMCUBEMINITASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYMCUBEMINITASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryMcubeMiniTaskResponseBodyQueryMiniTaskResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class QueryMcubeMiniTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMcubeMiniTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(QueryMiniTaskResult, queryMiniTaskResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultMessage, resultMessage_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMcubeMiniTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(QueryMiniTaskResult, queryMiniTaskResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultMessage, resultMessage_);
    };
    QueryMcubeMiniTaskResponseBody() = default ;
    QueryMcubeMiniTaskResponseBody(const QueryMcubeMiniTaskResponseBody &) = default ;
    QueryMcubeMiniTaskResponseBody(QueryMcubeMiniTaskResponseBody &&) = default ;
    QueryMcubeMiniTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMcubeMiniTaskResponseBody() = default ;
    QueryMcubeMiniTaskResponseBody& operator=(const QueryMcubeMiniTaskResponseBody &) = default ;
    QueryMcubeMiniTaskResponseBody& operator=(QueryMcubeMiniTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->queryMiniTaskResult_ == nullptr
        && return this->requestId_ == nullptr && return this->resultCode_ == nullptr && return this->resultMessage_ == nullptr; };
    // queryMiniTaskResult Field Functions 
    bool hasQueryMiniTaskResult() const { return this->queryMiniTaskResult_ != nullptr;};
    void deleteQueryMiniTaskResult() { this->queryMiniTaskResult_ = nullptr;};
    inline const QueryMcubeMiniTaskResponseBodyQueryMiniTaskResult & queryMiniTaskResult() const { DARABONBA_PTR_GET_CONST(queryMiniTaskResult_, QueryMcubeMiniTaskResponseBodyQueryMiniTaskResult) };
    inline QueryMcubeMiniTaskResponseBodyQueryMiniTaskResult queryMiniTaskResult() { DARABONBA_PTR_GET(queryMiniTaskResult_, QueryMcubeMiniTaskResponseBodyQueryMiniTaskResult) };
    inline QueryMcubeMiniTaskResponseBody& setQueryMiniTaskResult(const QueryMcubeMiniTaskResponseBodyQueryMiniTaskResult & queryMiniTaskResult) { DARABONBA_PTR_SET_VALUE(queryMiniTaskResult_, queryMiniTaskResult) };
    inline QueryMcubeMiniTaskResponseBody& setQueryMiniTaskResult(QueryMcubeMiniTaskResponseBodyQueryMiniTaskResult && queryMiniTaskResult) { DARABONBA_PTR_SET_RVALUE(queryMiniTaskResult_, queryMiniTaskResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryMcubeMiniTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string resultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline QueryMcubeMiniTaskResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultMessage Field Functions 
    bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
    void deleteResultMessage() { this->resultMessage_ = nullptr;};
    inline string resultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
    inline QueryMcubeMiniTaskResponseBody& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


  protected:
    std::shared_ptr<QueryMcubeMiniTaskResponseBodyQueryMiniTaskResult> queryMiniTaskResult_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> resultCode_ = nullptr;
    std::shared_ptr<string> resultMessage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
