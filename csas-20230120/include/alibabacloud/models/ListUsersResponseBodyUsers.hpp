// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERSRESPONSEBODYUSERS_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERSRESPONSEBODYUSERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListUsersResponseBodyUsers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUsersResponseBodyUsers& obj) { 
      DARABONBA_PTR_TO_JSON(Department, department_);
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(IdpName, idpName_);
      DARABONBA_PTR_TO_JSON(Phone, phone_);
      DARABONBA_PTR_TO_JSON(SaseUserId, saseUserId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Username, username_);
    };
    friend void from_json(const Darabonba::Json& j, ListUsersResponseBodyUsers& obj) { 
      DARABONBA_PTR_FROM_JSON(Department, department_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(IdpName, idpName_);
      DARABONBA_PTR_FROM_JSON(Phone, phone_);
      DARABONBA_PTR_FROM_JSON(SaseUserId, saseUserId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Username, username_);
    };
    ListUsersResponseBodyUsers() = default ;
    ListUsersResponseBodyUsers(const ListUsersResponseBodyUsers &) = default ;
    ListUsersResponseBodyUsers(ListUsersResponseBodyUsers &&) = default ;
    ListUsersResponseBodyUsers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUsersResponseBodyUsers() = default ;
    ListUsersResponseBodyUsers& operator=(const ListUsersResponseBodyUsers &) = default ;
    ListUsersResponseBodyUsers& operator=(ListUsersResponseBodyUsers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->department_ == nullptr
        && return this->email_ == nullptr && return this->idpName_ == nullptr && return this->phone_ == nullptr && return this->saseUserId_ == nullptr && return this->status_ == nullptr
        && return this->username_ == nullptr; };
    // department Field Functions 
    bool hasDepartment() const { return this->department_ != nullptr;};
    void deleteDepartment() { this->department_ = nullptr;};
    inline string department() const { DARABONBA_PTR_GET_DEFAULT(department_, "") };
    inline ListUsersResponseBodyUsers& setDepartment(string department) { DARABONBA_PTR_SET_VALUE(department_, department) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline ListUsersResponseBodyUsers& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // idpName Field Functions 
    bool hasIdpName() const { return this->idpName_ != nullptr;};
    void deleteIdpName() { this->idpName_ = nullptr;};
    inline string idpName() const { DARABONBA_PTR_GET_DEFAULT(idpName_, "") };
    inline ListUsersResponseBodyUsers& setIdpName(string idpName) { DARABONBA_PTR_SET_VALUE(idpName_, idpName) };


    // phone Field Functions 
    bool hasPhone() const { return this->phone_ != nullptr;};
    void deletePhone() { this->phone_ = nullptr;};
    inline string phone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
    inline ListUsersResponseBodyUsers& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


    // saseUserId Field Functions 
    bool hasSaseUserId() const { return this->saseUserId_ != nullptr;};
    void deleteSaseUserId() { this->saseUserId_ = nullptr;};
    inline string saseUserId() const { DARABONBA_PTR_GET_DEFAULT(saseUserId_, "") };
    inline ListUsersResponseBodyUsers& setSaseUserId(string saseUserId) { DARABONBA_PTR_SET_VALUE(saseUserId_, saseUserId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListUsersResponseBodyUsers& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string username() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline ListUsersResponseBodyUsers& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


  protected:
    std::shared_ptr<string> department_ = nullptr;
    std::shared_ptr<string> email_ = nullptr;
    std::shared_ptr<string> idpName_ = nullptr;
    std::shared_ptr<string> phone_ = nullptr;
    std::shared_ptr<string> saseUserId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> username_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
