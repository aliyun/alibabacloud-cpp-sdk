// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERPERMISSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERPERMISSIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListUserPermissionsResponseBodyUserPermissions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListUserPermissionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserPermissionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(UserPermissions, userPermissions_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserPermissionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(UserPermissions, userPermissions_);
    };
    ListUserPermissionsResponseBody() = default ;
    ListUserPermissionsResponseBody(const ListUserPermissionsResponseBody &) = default ;
    ListUserPermissionsResponseBody(ListUserPermissionsResponseBody &&) = default ;
    ListUserPermissionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserPermissionsResponseBody() = default ;
    ListUserPermissionsResponseBody& operator=(const ListUserPermissionsResponseBody &) = default ;
    ListUserPermissionsResponseBody& operator=(ListUserPermissionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->errorCode_ != nullptr
        && this->errorMessage_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr && this->totalCount_ != nullptr && this->userPermissions_ != nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListUserPermissionsResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListUserPermissionsResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListUserPermissionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListUserPermissionsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListUserPermissionsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // userPermissions Field Functions 
    bool hasUserPermissions() const { return this->userPermissions_ != nullptr;};
    void deleteUserPermissions() { this->userPermissions_ = nullptr;};
    inline const ListUserPermissionsResponseBodyUserPermissions & userPermissions() const { DARABONBA_PTR_GET_CONST(userPermissions_, ListUserPermissionsResponseBodyUserPermissions) };
    inline ListUserPermissionsResponseBodyUserPermissions userPermissions() { DARABONBA_PTR_GET(userPermissions_, ListUserPermissionsResponseBodyUserPermissions) };
    inline ListUserPermissionsResponseBody& setUserPermissions(const ListUserPermissionsResponseBodyUserPermissions & userPermissions) { DARABONBA_PTR_SET_VALUE(userPermissions_, userPermissions) };
    inline ListUserPermissionsResponseBody& setUserPermissions(ListUserPermissionsResponseBodyUserPermissions && userPermissions) { DARABONBA_PTR_SET_RVALUE(userPermissions_, userPermissions) };


  protected:
    // The error code.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request is successful. Valid values:
    // 
    // - true: The request is successful.
    // - false: The request fails.
    std::shared_ptr<bool> success_ = nullptr;
    // The total number of entries that meet the query conditions.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
    // The details of the permissions that the user has.
    std::shared_ptr<ListUserPermissionsResponseBodyUserPermissions> userPermissions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
