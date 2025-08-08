// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMAPPCENTERAPPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYMAPPCENTERAPPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryMappCenterAppResponseBodyQueryMappCenterAppResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class QueryMappCenterAppResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMappCenterAppResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(QueryMappCenterAppResult, queryMappCenterAppResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultMessage, resultMessage_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMappCenterAppResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(QueryMappCenterAppResult, queryMappCenterAppResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultMessage, resultMessage_);
    };
    QueryMappCenterAppResponseBody() = default ;
    QueryMappCenterAppResponseBody(const QueryMappCenterAppResponseBody &) = default ;
    QueryMappCenterAppResponseBody(QueryMappCenterAppResponseBody &&) = default ;
    QueryMappCenterAppResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMappCenterAppResponseBody() = default ;
    QueryMappCenterAppResponseBody& operator=(const QueryMappCenterAppResponseBody &) = default ;
    QueryMappCenterAppResponseBody& operator=(QueryMappCenterAppResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->queryMappCenterAppResult_ != nullptr
        && this->requestId_ != nullptr && this->resultCode_ != nullptr && this->resultMessage_ != nullptr; };
    // queryMappCenterAppResult Field Functions 
    bool hasQueryMappCenterAppResult() const { return this->queryMappCenterAppResult_ != nullptr;};
    void deleteQueryMappCenterAppResult() { this->queryMappCenterAppResult_ = nullptr;};
    inline const QueryMappCenterAppResponseBodyQueryMappCenterAppResult & queryMappCenterAppResult() const { DARABONBA_PTR_GET_CONST(queryMappCenterAppResult_, QueryMappCenterAppResponseBodyQueryMappCenterAppResult) };
    inline QueryMappCenterAppResponseBodyQueryMappCenterAppResult queryMappCenterAppResult() { DARABONBA_PTR_GET(queryMappCenterAppResult_, QueryMappCenterAppResponseBodyQueryMappCenterAppResult) };
    inline QueryMappCenterAppResponseBody& setQueryMappCenterAppResult(const QueryMappCenterAppResponseBodyQueryMappCenterAppResult & queryMappCenterAppResult) { DARABONBA_PTR_SET_VALUE(queryMappCenterAppResult_, queryMappCenterAppResult) };
    inline QueryMappCenterAppResponseBody& setQueryMappCenterAppResult(QueryMappCenterAppResponseBodyQueryMappCenterAppResult && queryMappCenterAppResult) { DARABONBA_PTR_SET_RVALUE(queryMappCenterAppResult_, queryMappCenterAppResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryMappCenterAppResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string resultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline QueryMappCenterAppResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultMessage Field Functions 
    bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
    void deleteResultMessage() { this->resultMessage_ = nullptr;};
    inline string resultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
    inline QueryMappCenterAppResponseBody& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


  protected:
    std::shared_ptr<QueryMappCenterAppResponseBodyQueryMappCenterAppResult> queryMappCenterAppResult_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> resultCode_ = nullptr;
    std::shared_ptr<string> resultMessage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
