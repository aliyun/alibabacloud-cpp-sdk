// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSHARESTOUSERLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYSHARESTOUSERLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QuerySharesToUserListResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QuerySharesToUserListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySharesToUserListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySharesToUserListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QuerySharesToUserListResponseBody() = default ;
    QuerySharesToUserListResponseBody(const QuerySharesToUserListResponseBody &) = default ;
    QuerySharesToUserListResponseBody(QuerySharesToUserListResponseBody &&) = default ;
    QuerySharesToUserListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySharesToUserListResponseBody() = default ;
    QuerySharesToUserListResponseBody& operator=(const QuerySharesToUserListResponseBody &) = default ;
    QuerySharesToUserListResponseBody& operator=(QuerySharesToUserListResponseBody &&) = default ;
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
    inline QuerySharesToUserListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<QuerySharesToUserListResponseBodyResult> & result() const { DARABONBA_PTR_GET_CONST(result_, vector<QuerySharesToUserListResponseBodyResult>) };
    inline vector<QuerySharesToUserListResponseBodyResult> result() { DARABONBA_PTR_GET(result_, vector<QuerySharesToUserListResponseBodyResult>) };
    inline QuerySharesToUserListResponseBody& setResult(const vector<QuerySharesToUserListResponseBodyResult> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline QuerySharesToUserListResponseBody& setResult(vector<QuerySharesToUserListResponseBodyResult> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QuerySharesToUserListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Returns a list of works authorized to the user.
    std::shared_ptr<vector<QuerySharesToUserListResponseBodyResult>> result_ = nullptr;
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
