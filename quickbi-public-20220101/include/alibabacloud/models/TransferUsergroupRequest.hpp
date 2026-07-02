// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRANSFERUSERGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TRANSFERUSERGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class TransferUsergroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TransferUsergroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ParentUserGroupId, parentUserGroupId_);
      DARABONBA_PTR_TO_JSON(UserGroupId, userGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, TransferUsergroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ParentUserGroupId, parentUserGroupId_);
      DARABONBA_PTR_FROM_JSON(UserGroupId, userGroupId_);
    };
    TransferUsergroupRequest() = default ;
    TransferUsergroupRequest(const TransferUsergroupRequest &) = default ;
    TransferUsergroupRequest(TransferUsergroupRequest &&) = default ;
    TransferUsergroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TransferUsergroupRequest() = default ;
    TransferUsergroupRequest& operator=(const TransferUsergroupRequest &) = default ;
    TransferUsergroupRequest& operator=(TransferUsergroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->parentUserGroupId_ == nullptr
        && this->userGroupId_ == nullptr; };
    // parentUserGroupId Field Functions 
    bool hasParentUserGroupId() const { return this->parentUserGroupId_ != nullptr;};
    void deleteParentUserGroupId() { this->parentUserGroupId_ = nullptr;};
    inline string getParentUserGroupId() const { DARABONBA_PTR_GET_DEFAULT(parentUserGroupId_, "") };
    inline TransferUsergroupRequest& setParentUserGroupId(string parentUserGroupId) { DARABONBA_PTR_SET_VALUE(parentUserGroupId_, parentUserGroupId) };


    // userGroupId Field Functions 
    bool hasUserGroupId() const { return this->userGroupId_ != nullptr;};
    void deleteUserGroupId() { this->userGroupId_ = nullptr;};
    inline string getUserGroupId() const { DARABONBA_PTR_GET_DEFAULT(userGroupId_, "") };
    inline TransferUsergroupRequest& setUserGroupId(string userGroupId) { DARABONBA_PTR_SET_VALUE(userGroupId_, userGroupId) };


  protected:
    // The ID of the parent user group.
    // 
    // This parameter is required.
    shared_ptr<string> parentUserGroupId_ {};
    // The ID of the user group to migrate.
    // 
    // This parameter is required.
    shared_ptr<string> userGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
