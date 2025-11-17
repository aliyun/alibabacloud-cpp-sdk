// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTORGANIZATIONROLEUSERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTORGANIZATIONROLEUSERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListOrganizationRoleUsersResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class ListOrganizationRoleUsersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOrganizationRoleUsersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListOrganizationRoleUsersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListOrganizationRoleUsersResponseBody() = default ;
    ListOrganizationRoleUsersResponseBody(const ListOrganizationRoleUsersResponseBody &) = default ;
    ListOrganizationRoleUsersResponseBody(ListOrganizationRoleUsersResponseBody &&) = default ;
    ListOrganizationRoleUsersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOrganizationRoleUsersResponseBody() = default ;
    ListOrganizationRoleUsersResponseBody& operator=(const ListOrganizationRoleUsersResponseBody &) = default ;
    ListOrganizationRoleUsersResponseBody& operator=(ListOrganizationRoleUsersResponseBody &&) = default ;
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
    inline ListOrganizationRoleUsersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const ListOrganizationRoleUsersResponseBodyResult & result() const { DARABONBA_PTR_GET_CONST(result_, ListOrganizationRoleUsersResponseBodyResult) };
    inline ListOrganizationRoleUsersResponseBodyResult result() { DARABONBA_PTR_GET(result_, ListOrganizationRoleUsersResponseBodyResult) };
    inline ListOrganizationRoleUsersResponseBody& setResult(const ListOrganizationRoleUsersResponseBodyResult & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListOrganizationRoleUsersResponseBody& setResult(ListOrganizationRoleUsersResponseBodyResult && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListOrganizationRoleUsersResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Returns the list of users under the organization role.
    std::shared_ptr<ListOrganizationRoleUsersResponseBodyResult> result_ = nullptr;
    // Indicates whether the request was successful. Possible values:
    // - true: Request succeeded
    // - false: Request failed
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
