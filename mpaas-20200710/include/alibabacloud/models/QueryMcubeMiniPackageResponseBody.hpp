// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMCUBEMINIPACKAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYMCUBEMINIPACKAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryMcubeMiniPackageResponseBodyQueryMiniPackageResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20200710
{
namespace Models
{
  class QueryMcubeMiniPackageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMcubeMiniPackageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(QueryMiniPackageResult, queryMiniPackageResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultMessage, resultMessage_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMcubeMiniPackageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(QueryMiniPackageResult, queryMiniPackageResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultMessage, resultMessage_);
    };
    QueryMcubeMiniPackageResponseBody() = default ;
    QueryMcubeMiniPackageResponseBody(const QueryMcubeMiniPackageResponseBody &) = default ;
    QueryMcubeMiniPackageResponseBody(QueryMcubeMiniPackageResponseBody &&) = default ;
    QueryMcubeMiniPackageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMcubeMiniPackageResponseBody() = default ;
    QueryMcubeMiniPackageResponseBody& operator=(const QueryMcubeMiniPackageResponseBody &) = default ;
    QueryMcubeMiniPackageResponseBody& operator=(QueryMcubeMiniPackageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->queryMiniPackageResult_ != nullptr
        && this->requestId_ != nullptr && this->resultCode_ != nullptr && this->resultMessage_ != nullptr; };
    // queryMiniPackageResult Field Functions 
    bool hasQueryMiniPackageResult() const { return this->queryMiniPackageResult_ != nullptr;};
    void deleteQueryMiniPackageResult() { this->queryMiniPackageResult_ = nullptr;};
    inline const QueryMcubeMiniPackageResponseBodyQueryMiniPackageResult & queryMiniPackageResult() const { DARABONBA_PTR_GET_CONST(queryMiniPackageResult_, QueryMcubeMiniPackageResponseBodyQueryMiniPackageResult) };
    inline QueryMcubeMiniPackageResponseBodyQueryMiniPackageResult queryMiniPackageResult() { DARABONBA_PTR_GET(queryMiniPackageResult_, QueryMcubeMiniPackageResponseBodyQueryMiniPackageResult) };
    inline QueryMcubeMiniPackageResponseBody& setQueryMiniPackageResult(const QueryMcubeMiniPackageResponseBodyQueryMiniPackageResult & queryMiniPackageResult) { DARABONBA_PTR_SET_VALUE(queryMiniPackageResult_, queryMiniPackageResult) };
    inline QueryMcubeMiniPackageResponseBody& setQueryMiniPackageResult(QueryMcubeMiniPackageResponseBodyQueryMiniPackageResult && queryMiniPackageResult) { DARABONBA_PTR_SET_RVALUE(queryMiniPackageResult_, queryMiniPackageResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryMcubeMiniPackageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string resultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline QueryMcubeMiniPackageResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultMessage Field Functions 
    bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
    void deleteResultMessage() { this->resultMessage_ = nullptr;};
    inline string resultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
    inline QueryMcubeMiniPackageResponseBody& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


  protected:
    std::shared_ptr<QueryMcubeMiniPackageResponseBodyQueryMiniPackageResult> queryMiniPackageResult_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> resultCode_ = nullptr;
    std::shared_ptr<string> resultMessage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20200710
#endif
