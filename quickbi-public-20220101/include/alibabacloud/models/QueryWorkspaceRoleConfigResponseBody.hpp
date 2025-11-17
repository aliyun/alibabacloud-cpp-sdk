// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYWORKSPACEROLECONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYWORKSPACEROLECONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryWorkspaceRoleConfigResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryWorkspaceRoleConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryWorkspaceRoleConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryWorkspaceRoleConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryWorkspaceRoleConfigResponseBody() = default ;
    QueryWorkspaceRoleConfigResponseBody(const QueryWorkspaceRoleConfigResponseBody &) = default ;
    QueryWorkspaceRoleConfigResponseBody(QueryWorkspaceRoleConfigResponseBody &&) = default ;
    QueryWorkspaceRoleConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryWorkspaceRoleConfigResponseBody() = default ;
    QueryWorkspaceRoleConfigResponseBody& operator=(const QueryWorkspaceRoleConfigResponseBody &) = default ;
    QueryWorkspaceRoleConfigResponseBody& operator=(QueryWorkspaceRoleConfigResponseBody &&) = default ;
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
    inline QueryWorkspaceRoleConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const QueryWorkspaceRoleConfigResponseBodyResult & result() const { DARABONBA_PTR_GET_CONST(result_, QueryWorkspaceRoleConfigResponseBodyResult) };
    inline QueryWorkspaceRoleConfigResponseBodyResult result() { DARABONBA_PTR_GET(result_, QueryWorkspaceRoleConfigResponseBodyResult) };
    inline QueryWorkspaceRoleConfigResponseBody& setResult(const QueryWorkspaceRoleConfigResponseBodyResult & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline QueryWorkspaceRoleConfigResponseBody& setResult(QueryWorkspaceRoleConfigResponseBodyResult && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryWorkspaceRoleConfigResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Returns the query result of the interface.
    std::shared_ptr<QueryWorkspaceRoleConfigResponseBodyResult> result_ = nullptr;
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
