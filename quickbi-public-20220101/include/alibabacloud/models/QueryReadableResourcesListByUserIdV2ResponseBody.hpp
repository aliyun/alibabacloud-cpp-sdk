// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYREADABLERESOURCESLISTBYUSERIDV2RESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYREADABLERESOURCESLISTBYUSERIDV2RESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryReadableResourcesListByUserIdV2ResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryReadableResourcesListByUserIdV2ResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryReadableResourcesListByUserIdV2ResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryReadableResourcesListByUserIdV2ResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryReadableResourcesListByUserIdV2ResponseBody() = default ;
    QueryReadableResourcesListByUserIdV2ResponseBody(const QueryReadableResourcesListByUserIdV2ResponseBody &) = default ;
    QueryReadableResourcesListByUserIdV2ResponseBody(QueryReadableResourcesListByUserIdV2ResponseBody &&) = default ;
    QueryReadableResourcesListByUserIdV2ResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryReadableResourcesListByUserIdV2ResponseBody() = default ;
    QueryReadableResourcesListByUserIdV2ResponseBody& operator=(const QueryReadableResourcesListByUserIdV2ResponseBody &) = default ;
    QueryReadableResourcesListByUserIdV2ResponseBody& operator=(QueryReadableResourcesListByUserIdV2ResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->result_ == nullptr && return this->success_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryReadableResourcesListByUserIdV2ResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<QueryReadableResourcesListByUserIdV2ResponseBodyResult> & result() const { DARABONBA_PTR_GET_CONST(result_, vector<QueryReadableResourcesListByUserIdV2ResponseBodyResult>) };
    inline vector<QueryReadableResourcesListByUserIdV2ResponseBodyResult> result() { DARABONBA_PTR_GET(result_, vector<QueryReadableResourcesListByUserIdV2ResponseBodyResult>) };
    inline QueryReadableResourcesListByUserIdV2ResponseBody& setResult(const vector<QueryReadableResourcesListByUserIdV2ResponseBodyResult> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline QueryReadableResourcesListByUserIdV2ResponseBody& setResult(vector<QueryReadableResourcesListByUserIdV2ResponseBodyResult> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryReadableResourcesListByUserIdV2ResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Returns the query result.
    std::shared_ptr<vector<QueryReadableResourcesListByUserIdV2ResponseBodyResult>> result_ = nullptr;
    // Indicates whether the request was successful. Possible values:
    // - true: Request succeeded
    // - false: Request failed
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
