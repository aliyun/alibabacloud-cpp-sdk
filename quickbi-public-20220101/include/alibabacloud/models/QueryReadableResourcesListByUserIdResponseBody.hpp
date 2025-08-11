// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYREADABLERESOURCESLISTBYUSERIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYREADABLERESOURCESLISTBYUSERIDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryReadableResourcesListByUserIdResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryReadableResourcesListByUserIdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryReadableResourcesListByUserIdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryReadableResourcesListByUserIdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryReadableResourcesListByUserIdResponseBody() = default ;
    QueryReadableResourcesListByUserIdResponseBody(const QueryReadableResourcesListByUserIdResponseBody &) = default ;
    QueryReadableResourcesListByUserIdResponseBody(QueryReadableResourcesListByUserIdResponseBody &&) = default ;
    QueryReadableResourcesListByUserIdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryReadableResourcesListByUserIdResponseBody() = default ;
    QueryReadableResourcesListByUserIdResponseBody& operator=(const QueryReadableResourcesListByUserIdResponseBody &) = default ;
    QueryReadableResourcesListByUserIdResponseBody& operator=(QueryReadableResourcesListByUserIdResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->result_ != nullptr && this->success_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryReadableResourcesListByUserIdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<QueryReadableResourcesListByUserIdResponseBodyResult> & result() const { DARABONBA_PTR_GET_CONST(result_, vector<QueryReadableResourcesListByUserIdResponseBodyResult>) };
    inline vector<QueryReadableResourcesListByUserIdResponseBodyResult> result() { DARABONBA_PTR_GET(result_, vector<QueryReadableResourcesListByUserIdResponseBodyResult>) };
    inline QueryReadableResourcesListByUserIdResponseBody& setResult(const vector<QueryReadableResourcesListByUserIdResponseBodyResult> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline QueryReadableResourcesListByUserIdResponseBody& setResult(vector<QueryReadableResourcesListByUserIdResponseBodyResult> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryReadableResourcesListByUserIdResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The list of works that the user has permission to view.
    std::shared_ptr<vector<QueryReadableResourcesListByUserIdResponseBodyResult>> result_ = nullptr;
    // Indicates whether the request is successful. Valid values:
    // 
    // *   true: The request was successful.
    // *   false: The request failed.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
