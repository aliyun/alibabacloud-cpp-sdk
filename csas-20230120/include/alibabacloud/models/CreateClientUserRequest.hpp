// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLIENTUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECLIENTUSERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class CreateClientUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateClientUserRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DepartmentId, departmentId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(IdpConfigId, idpConfigId_);
      DARABONBA_PTR_TO_JSON(MobileNumber, mobileNumber_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(Username, username_);
    };
    friend void from_json(const Darabonba::Json& j, CreateClientUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DepartmentId, departmentId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(IdpConfigId, idpConfigId_);
      DARABONBA_PTR_FROM_JSON(MobileNumber, mobileNumber_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(Username, username_);
    };
    CreateClientUserRequest() = default ;
    CreateClientUserRequest(const CreateClientUserRequest &) = default ;
    CreateClientUserRequest(CreateClientUserRequest &&) = default ;
    CreateClientUserRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateClientUserRequest() = default ;
    CreateClientUserRequest& operator=(const CreateClientUserRequest &) = default ;
    CreateClientUserRequest& operator=(CreateClientUserRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->departmentId_ == nullptr
        && return this->description_ == nullptr && return this->email_ == nullptr && return this->idpConfigId_ == nullptr && return this->mobileNumber_ == nullptr && return this->password_ == nullptr
        && return this->username_ == nullptr; };
    // departmentId Field Functions 
    bool hasDepartmentId() const { return this->departmentId_ != nullptr;};
    void deleteDepartmentId() { this->departmentId_ = nullptr;};
    inline string departmentId() const { DARABONBA_PTR_GET_DEFAULT(departmentId_, "") };
    inline CreateClientUserRequest& setDepartmentId(string departmentId) { DARABONBA_PTR_SET_VALUE(departmentId_, departmentId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateClientUserRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline CreateClientUserRequest& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // idpConfigId Field Functions 
    bool hasIdpConfigId() const { return this->idpConfigId_ != nullptr;};
    void deleteIdpConfigId() { this->idpConfigId_ = nullptr;};
    inline string idpConfigId() const { DARABONBA_PTR_GET_DEFAULT(idpConfigId_, "") };
    inline CreateClientUserRequest& setIdpConfigId(string idpConfigId) { DARABONBA_PTR_SET_VALUE(idpConfigId_, idpConfigId) };


    // mobileNumber Field Functions 
    bool hasMobileNumber() const { return this->mobileNumber_ != nullptr;};
    void deleteMobileNumber() { this->mobileNumber_ = nullptr;};
    inline string mobileNumber() const { DARABONBA_PTR_GET_DEFAULT(mobileNumber_, "") };
    inline CreateClientUserRequest& setMobileNumber(string mobileNumber) { DARABONBA_PTR_SET_VALUE(mobileNumber_, mobileNumber) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline CreateClientUserRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string username() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline CreateClientUserRequest& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


  protected:
    std::shared_ptr<string> departmentId_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> email_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> idpConfigId_ = nullptr;
    std::shared_ptr<string> mobileNumber_ = nullptr;
    std::shared_ptr<string> password_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> username_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
