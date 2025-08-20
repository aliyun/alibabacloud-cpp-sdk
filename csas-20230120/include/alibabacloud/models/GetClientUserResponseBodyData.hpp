// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLIENTUSERRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETCLIENTUSERRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetClientUserResponseBodyDataDepartment.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class GetClientUserResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetClientUserResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Department, department_);
      DARABONBA_PTR_TO_JSON(DepartmentId, departmentId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(IdpConfigId, idpConfigId_);
      DARABONBA_PTR_TO_JSON(MobileNumber, mobileNumber_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(Username, username_);
    };
    friend void from_json(const Darabonba::Json& j, GetClientUserResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Department, department_);
      DARABONBA_PTR_FROM_JSON(DepartmentId, departmentId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(IdpConfigId, idpConfigId_);
      DARABONBA_PTR_FROM_JSON(MobileNumber, mobileNumber_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(Username, username_);
    };
    GetClientUserResponseBodyData() = default ;
    GetClientUserResponseBodyData(const GetClientUserResponseBodyData &) = default ;
    GetClientUserResponseBodyData(GetClientUserResponseBodyData &&) = default ;
    GetClientUserResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetClientUserResponseBodyData() = default ;
    GetClientUserResponseBodyData& operator=(const GetClientUserResponseBodyData &) = default ;
    GetClientUserResponseBodyData& operator=(GetClientUserResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->department_ != nullptr
        && this->departmentId_ != nullptr && this->description_ != nullptr && this->email_ != nullptr && this->id_ != nullptr && this->idpConfigId_ != nullptr
        && this->mobileNumber_ != nullptr && this->status_ != nullptr && this->userId_ != nullptr && this->username_ != nullptr; };
    // department Field Functions 
    bool hasDepartment() const { return this->department_ != nullptr;};
    void deleteDepartment() { this->department_ = nullptr;};
    inline const Models::GetClientUserResponseBodyDataDepartment & department() const { DARABONBA_PTR_GET_CONST(department_, Models::GetClientUserResponseBodyDataDepartment) };
    inline Models::GetClientUserResponseBodyDataDepartment department() { DARABONBA_PTR_GET(department_, Models::GetClientUserResponseBodyDataDepartment) };
    inline GetClientUserResponseBodyData& setDepartment(const Models::GetClientUserResponseBodyDataDepartment & department) { DARABONBA_PTR_SET_VALUE(department_, department) };
    inline GetClientUserResponseBodyData& setDepartment(Models::GetClientUserResponseBodyDataDepartment && department) { DARABONBA_PTR_SET_RVALUE(department_, department) };


    // departmentId Field Functions 
    bool hasDepartmentId() const { return this->departmentId_ != nullptr;};
    void deleteDepartmentId() { this->departmentId_ = nullptr;};
    inline string departmentId() const { DARABONBA_PTR_GET_DEFAULT(departmentId_, "") };
    inline GetClientUserResponseBodyData& setDepartmentId(string departmentId) { DARABONBA_PTR_SET_VALUE(departmentId_, departmentId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetClientUserResponseBodyData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline GetClientUserResponseBodyData& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetClientUserResponseBodyData& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // idpConfigId Field Functions 
    bool hasIdpConfigId() const { return this->idpConfigId_ != nullptr;};
    void deleteIdpConfigId() { this->idpConfigId_ = nullptr;};
    inline string idpConfigId() const { DARABONBA_PTR_GET_DEFAULT(idpConfigId_, "") };
    inline GetClientUserResponseBodyData& setIdpConfigId(string idpConfigId) { DARABONBA_PTR_SET_VALUE(idpConfigId_, idpConfigId) };


    // mobileNumber Field Functions 
    bool hasMobileNumber() const { return this->mobileNumber_ != nullptr;};
    void deleteMobileNumber() { this->mobileNumber_ = nullptr;};
    inline string mobileNumber() const { DARABONBA_PTR_GET_DEFAULT(mobileNumber_, "") };
    inline GetClientUserResponseBodyData& setMobileNumber(string mobileNumber) { DARABONBA_PTR_SET_VALUE(mobileNumber_, mobileNumber) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetClientUserResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GetClientUserResponseBodyData& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string username() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline GetClientUserResponseBodyData& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


  protected:
    std::shared_ptr<Models::GetClientUserResponseBodyDataDepartment> department_ = nullptr;
    std::shared_ptr<string> departmentId_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> email_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> idpConfigId_ = nullptr;
    std::shared_ptr<string> mobileNumber_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<string> username_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
