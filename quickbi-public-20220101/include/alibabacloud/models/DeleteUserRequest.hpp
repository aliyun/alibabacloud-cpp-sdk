// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEUSERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class DeleteUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteUserRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TransferUserId, transferUserId_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TransferUserId, transferUserId_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    DeleteUserRequest() = default ;
    DeleteUserRequest(const DeleteUserRequest &) = default ;
    DeleteUserRequest(DeleteUserRequest &&) = default ;
    DeleteUserRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteUserRequest() = default ;
    DeleteUserRequest& operator=(const DeleteUserRequest &) = default ;
    DeleteUserRequest& operator=(DeleteUserRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->transferUserId_ == nullptr
        && this->userId_ == nullptr; };
    // transferUserId Field Functions 
    bool hasTransferUserId() const { return this->transferUserId_ != nullptr;};
    void deleteTransferUserId() { this->transferUserId_ = nullptr;};
    inline string getTransferUserId() const { DARABONBA_PTR_GET_DEFAULT(transferUserId_, "") };
    inline DeleteUserRequest& setTransferUserId(string transferUserId) { DARABONBA_PTR_SET_VALUE(transferUserId_, transferUserId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline DeleteUserRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The ID of the successor. If not empty, the report resources in the workspace of the deleted user will be transferred to the successor; otherwise, they will be transferred to the space owner.
    // - The successor cannot be an organization visitor
    // - The permissions of the successor in the workspace must not be less than those of the deleted user, with management permissions > development permissions > sharing permissions > viewing permissions
    // - If the successor is not in the workspace, they will be automatically added to the workspace
    shared_ptr<string> transferUserId_ {};
    // The ID of the user to be deleted. This user ID is the Quick BI UserID, not the Alibaba Cloud UID.
    // 
    // This parameter is required.
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
