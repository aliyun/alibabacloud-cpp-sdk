// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDDATASERVICEPROJECTMEMBERREQUESTADDCOMMANDPROJECTMEMBERLIST_HPP_
#define ALIBABACLOUD_MODELS_ADDDATASERVICEPROJECTMEMBERREQUESTADDCOMMANDPROJECTMEMBERLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class AddDataServiceProjectMemberRequestAddCommandProjectMemberList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddDataServiceProjectMemberRequestAddCommandProjectMemberList& obj) { 
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(Role, role_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, AddDataServiceProjectMemberRequestAddCommandProjectMemberList& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    AddDataServiceProjectMemberRequestAddCommandProjectMemberList() = default ;
    AddDataServiceProjectMemberRequestAddCommandProjectMemberList(const AddDataServiceProjectMemberRequestAddCommandProjectMemberList &) = default ;
    AddDataServiceProjectMemberRequestAddCommandProjectMemberList(AddDataServiceProjectMemberRequestAddCommandProjectMemberList &&) = default ;
    AddDataServiceProjectMemberRequestAddCommandProjectMemberList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddDataServiceProjectMemberRequestAddCommandProjectMemberList() = default ;
    AddDataServiceProjectMemberRequestAddCommandProjectMemberList& operator=(const AddDataServiceProjectMemberRequestAddCommandProjectMemberList &) = default ;
    AddDataServiceProjectMemberRequestAddCommandProjectMemberList& operator=(AddDataServiceProjectMemberRequestAddCommandProjectMemberList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountName_ != nullptr
        && this->displayName_ != nullptr && this->role_ != nullptr && this->userId_ != nullptr; };
    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string accountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline AddDataServiceProjectMemberRequestAddCommandProjectMemberList& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline AddDataServiceProjectMemberRequestAddCommandProjectMemberList& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline int32_t role() const { DARABONBA_PTR_GET_DEFAULT(role_, 0) };
    inline AddDataServiceProjectMemberRequestAddCommandProjectMemberList& setRole(int32_t role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline AddDataServiceProjectMemberRequestAddCommandProjectMemberList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> accountName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> displayName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> role_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
