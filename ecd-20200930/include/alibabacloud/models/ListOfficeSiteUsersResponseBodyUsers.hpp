// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOFFICESITEUSERSRESPONSEBODYUSERS_HPP_
#define ALIBABACLOUD_MODELS_LISTOFFICESITEUSERSRESPONSEBODYUSERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ListOfficeSiteUsersResponseBodyUsers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOfficeSiteUsersResponseBodyUsers& obj) { 
      DARABONBA_PTR_TO_JSON(AssignedDesktopNumber, assignedDesktopNumber_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(DisplayNameNew, displayNameNew_);
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(EndUser, endUser_);
      DARABONBA_PTR_TO_JSON(Phone, phone_);
      DARABONBA_PTR_TO_JSON(UserPrincipalName, userPrincipalName_);
    };
    friend void from_json(const Darabonba::Json& j, ListOfficeSiteUsersResponseBodyUsers& obj) { 
      DARABONBA_PTR_FROM_JSON(AssignedDesktopNumber, assignedDesktopNumber_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(DisplayNameNew, displayNameNew_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(EndUser, endUser_);
      DARABONBA_PTR_FROM_JSON(Phone, phone_);
      DARABONBA_PTR_FROM_JSON(UserPrincipalName, userPrincipalName_);
    };
    ListOfficeSiteUsersResponseBodyUsers() = default ;
    ListOfficeSiteUsersResponseBodyUsers(const ListOfficeSiteUsersResponseBodyUsers &) = default ;
    ListOfficeSiteUsersResponseBodyUsers(ListOfficeSiteUsersResponseBodyUsers &&) = default ;
    ListOfficeSiteUsersResponseBodyUsers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOfficeSiteUsersResponseBodyUsers() = default ;
    ListOfficeSiteUsersResponseBodyUsers& operator=(const ListOfficeSiteUsersResponseBodyUsers &) = default ;
    ListOfficeSiteUsersResponseBodyUsers& operator=(ListOfficeSiteUsersResponseBodyUsers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assignedDesktopNumber_ == nullptr
        && return this->displayName_ == nullptr && return this->displayNameNew_ == nullptr && return this->email_ == nullptr && return this->endUser_ == nullptr && return this->phone_ == nullptr
        && return this->userPrincipalName_ == nullptr; };
    // assignedDesktopNumber Field Functions 
    bool hasAssignedDesktopNumber() const { return this->assignedDesktopNumber_ != nullptr;};
    void deleteAssignedDesktopNumber() { this->assignedDesktopNumber_ = nullptr;};
    inline int32_t assignedDesktopNumber() const { DARABONBA_PTR_GET_DEFAULT(assignedDesktopNumber_, 0) };
    inline ListOfficeSiteUsersResponseBodyUsers& setAssignedDesktopNumber(int32_t assignedDesktopNumber) { DARABONBA_PTR_SET_VALUE(assignedDesktopNumber_, assignedDesktopNumber) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline ListOfficeSiteUsersResponseBodyUsers& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // displayNameNew Field Functions 
    bool hasDisplayNameNew() const { return this->displayNameNew_ != nullptr;};
    void deleteDisplayNameNew() { this->displayNameNew_ = nullptr;};
    inline string displayNameNew() const { DARABONBA_PTR_GET_DEFAULT(displayNameNew_, "") };
    inline ListOfficeSiteUsersResponseBodyUsers& setDisplayNameNew(string displayNameNew) { DARABONBA_PTR_SET_VALUE(displayNameNew_, displayNameNew) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline ListOfficeSiteUsersResponseBodyUsers& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // endUser Field Functions 
    bool hasEndUser() const { return this->endUser_ != nullptr;};
    void deleteEndUser() { this->endUser_ = nullptr;};
    inline string endUser() const { DARABONBA_PTR_GET_DEFAULT(endUser_, "") };
    inline ListOfficeSiteUsersResponseBodyUsers& setEndUser(string endUser) { DARABONBA_PTR_SET_VALUE(endUser_, endUser) };


    // phone Field Functions 
    bool hasPhone() const { return this->phone_ != nullptr;};
    void deletePhone() { this->phone_ = nullptr;};
    inline string phone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
    inline ListOfficeSiteUsersResponseBodyUsers& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


    // userPrincipalName Field Functions 
    bool hasUserPrincipalName() const { return this->userPrincipalName_ != nullptr;};
    void deleteUserPrincipalName() { this->userPrincipalName_ = nullptr;};
    inline string userPrincipalName() const { DARABONBA_PTR_GET_DEFAULT(userPrincipalName_, "") };
    inline ListOfficeSiteUsersResponseBodyUsers& setUserPrincipalName(string userPrincipalName) { DARABONBA_PTR_SET_VALUE(userPrincipalName_, userPrincipalName) };


  protected:
    std::shared_ptr<int32_t> assignedDesktopNumber_ = nullptr;
    // The display name of the AD account.
    std::shared_ptr<string> displayName_ = nullptr;
    std::shared_ptr<string> displayNameNew_ = nullptr;
    std::shared_ptr<string> email_ = nullptr;
    // The username of the AD account.
    std::shared_ptr<string> endUser_ = nullptr;
    std::shared_ptr<string> phone_ = nullptr;
    std::shared_ptr<string> userPrincipalName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
