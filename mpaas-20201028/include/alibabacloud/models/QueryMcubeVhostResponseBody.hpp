// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMCUBEVHOSTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYMCUBEVHOSTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryMcubeVhostResponseBodyQueryVhostResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class QueryMcubeVhostResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMcubeVhostResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(QueryVhostResult, queryVhostResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultMessage, resultMessage_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMcubeVhostResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(QueryVhostResult, queryVhostResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultMessage, resultMessage_);
    };
    QueryMcubeVhostResponseBody() = default ;
    QueryMcubeVhostResponseBody(const QueryMcubeVhostResponseBody &) = default ;
    QueryMcubeVhostResponseBody(QueryMcubeVhostResponseBody &&) = default ;
    QueryMcubeVhostResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMcubeVhostResponseBody() = default ;
    QueryMcubeVhostResponseBody& operator=(const QueryMcubeVhostResponseBody &) = default ;
    QueryMcubeVhostResponseBody& operator=(QueryMcubeVhostResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->queryVhostResult_ != nullptr
        && this->requestId_ != nullptr && this->resultCode_ != nullptr && this->resultMessage_ != nullptr; };
    // queryVhostResult Field Functions 
    bool hasQueryVhostResult() const { return this->queryVhostResult_ != nullptr;};
    void deleteQueryVhostResult() { this->queryVhostResult_ = nullptr;};
    inline const QueryMcubeVhostResponseBodyQueryVhostResult & queryVhostResult() const { DARABONBA_PTR_GET_CONST(queryVhostResult_, QueryMcubeVhostResponseBodyQueryVhostResult) };
    inline QueryMcubeVhostResponseBodyQueryVhostResult queryVhostResult() { DARABONBA_PTR_GET(queryVhostResult_, QueryMcubeVhostResponseBodyQueryVhostResult) };
    inline QueryMcubeVhostResponseBody& setQueryVhostResult(const QueryMcubeVhostResponseBodyQueryVhostResult & queryVhostResult) { DARABONBA_PTR_SET_VALUE(queryVhostResult_, queryVhostResult) };
    inline QueryMcubeVhostResponseBody& setQueryVhostResult(QueryMcubeVhostResponseBodyQueryVhostResult && queryVhostResult) { DARABONBA_PTR_SET_RVALUE(queryVhostResult_, queryVhostResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryMcubeVhostResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string resultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline QueryMcubeVhostResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultMessage Field Functions 
    bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
    void deleteResultMessage() { this->resultMessage_ = nullptr;};
    inline string resultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
    inline QueryMcubeVhostResponseBody& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


  protected:
    std::shared_ptr<QueryMcubeVhostResponseBodyQueryVhostResult> queryVhostResult_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> resultCode_ = nullptr;
    std::shared_ptr<string> resultMessage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
