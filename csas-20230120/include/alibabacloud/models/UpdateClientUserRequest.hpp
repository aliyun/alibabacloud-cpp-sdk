// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECLIENTUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECLIENTUSERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class UpdateClientUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateClientUserRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DepartmentId, departmentId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(MobileNumber, mobileNumber_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateClientUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DepartmentId, departmentId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(MobileNumber, mobileNumber_);
    };
    UpdateClientUserRequest() = default ;
    UpdateClientUserRequest(const UpdateClientUserRequest &) = default ;
    UpdateClientUserRequest(UpdateClientUserRequest &&) = default ;
    UpdateClientUserRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateClientUserRequest() = default ;
    UpdateClientUserRequest& operator=(const UpdateClientUserRequest &) = default ;
    UpdateClientUserRequest& operator=(UpdateClientUserRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->departmentId_ == nullptr
        && return this->description_ == nullptr && return this->email_ == nullptr && return this->id_ == nullptr && return this->mobileNumber_ == nullptr; };
    // departmentId Field Functions 
    bool hasDepartmentId() const { return this->departmentId_ != nullptr;};
    void deleteDepartmentId() { this->departmentId_ = nullptr;};
    inline string departmentId() const { DARABONBA_PTR_GET_DEFAULT(departmentId_, "") };
    inline UpdateClientUserRequest& setDepartmentId(string departmentId) { DARABONBA_PTR_SET_VALUE(departmentId_, departmentId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateClientUserRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline UpdateClientUserRequest& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline UpdateClientUserRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // mobileNumber Field Functions 
    bool hasMobileNumber() const { return this->mobileNumber_ != nullptr;};
    void deleteMobileNumber() { this->mobileNumber_ = nullptr;};
    inline string mobileNumber() const { DARABONBA_PTR_GET_DEFAULT(mobileNumber_, "") };
    inline UpdateClientUserRequest& setMobileNumber(string mobileNumber) { DARABONBA_PTR_SET_VALUE(mobileNumber_, mobileNumber) };


  protected:
    std::shared_ptr<string> departmentId_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> email_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> mobileNumber_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
