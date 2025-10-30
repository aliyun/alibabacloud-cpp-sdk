// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLIENTUSERSRESPONSEBODYDATADATALIST_HPP_
#define ALIBABACLOUD_MODELS_LISTCLIENTUSERSRESPONSEBODYDATADATALIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListClientUsersResponseBodyDataDataListDepartment.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListClientUsersResponseBodyDataDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClientUsersResponseBodyDataDataList& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListClientUsersResponseBodyDataDataList& obj) { 
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
    ListClientUsersResponseBodyDataDataList() = default ;
    ListClientUsersResponseBodyDataDataList(const ListClientUsersResponseBodyDataDataList &) = default ;
    ListClientUsersResponseBodyDataDataList(ListClientUsersResponseBodyDataDataList &&) = default ;
    ListClientUsersResponseBodyDataDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClientUsersResponseBodyDataDataList() = default ;
    ListClientUsersResponseBodyDataDataList& operator=(const ListClientUsersResponseBodyDataDataList &) = default ;
    ListClientUsersResponseBodyDataDataList& operator=(ListClientUsersResponseBodyDataDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->department_ == nullptr
        && return this->departmentId_ == nullptr && return this->description_ == nullptr && return this->email_ == nullptr && return this->id_ == nullptr && return this->idpConfigId_ == nullptr
        && return this->mobileNumber_ == nullptr && return this->status_ == nullptr && return this->userId_ == nullptr && return this->username_ == nullptr; };
    // department Field Functions 
    bool hasDepartment() const { return this->department_ != nullptr;};
    void deleteDepartment() { this->department_ = nullptr;};
    inline const Models::ListClientUsersResponseBodyDataDataListDepartment & department() const { DARABONBA_PTR_GET_CONST(department_, Models::ListClientUsersResponseBodyDataDataListDepartment) };
    inline Models::ListClientUsersResponseBodyDataDataListDepartment department() { DARABONBA_PTR_GET(department_, Models::ListClientUsersResponseBodyDataDataListDepartment) };
    inline ListClientUsersResponseBodyDataDataList& setDepartment(const Models::ListClientUsersResponseBodyDataDataListDepartment & department) { DARABONBA_PTR_SET_VALUE(department_, department) };
    inline ListClientUsersResponseBodyDataDataList& setDepartment(Models::ListClientUsersResponseBodyDataDataListDepartment && department) { DARABONBA_PTR_SET_RVALUE(department_, department) };


    // departmentId Field Functions 
    bool hasDepartmentId() const { return this->departmentId_ != nullptr;};
    void deleteDepartmentId() { this->departmentId_ = nullptr;};
    inline string departmentId() const { DARABONBA_PTR_GET_DEFAULT(departmentId_, "") };
    inline ListClientUsersResponseBodyDataDataList& setDepartmentId(string departmentId) { DARABONBA_PTR_SET_VALUE(departmentId_, departmentId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListClientUsersResponseBodyDataDataList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline ListClientUsersResponseBodyDataDataList& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListClientUsersResponseBodyDataDataList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // idpConfigId Field Functions 
    bool hasIdpConfigId() const { return this->idpConfigId_ != nullptr;};
    void deleteIdpConfigId() { this->idpConfigId_ = nullptr;};
    inline string idpConfigId() const { DARABONBA_PTR_GET_DEFAULT(idpConfigId_, "") };
    inline ListClientUsersResponseBodyDataDataList& setIdpConfigId(string idpConfigId) { DARABONBA_PTR_SET_VALUE(idpConfigId_, idpConfigId) };


    // mobileNumber Field Functions 
    bool hasMobileNumber() const { return this->mobileNumber_ != nullptr;};
    void deleteMobileNumber() { this->mobileNumber_ = nullptr;};
    inline string mobileNumber() const { DARABONBA_PTR_GET_DEFAULT(mobileNumber_, "") };
    inline ListClientUsersResponseBodyDataDataList& setMobileNumber(string mobileNumber) { DARABONBA_PTR_SET_VALUE(mobileNumber_, mobileNumber) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListClientUsersResponseBodyDataDataList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ListClientUsersResponseBodyDataDataList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string username() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline ListClientUsersResponseBodyDataDataList& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


  protected:
    std::shared_ptr<Models::ListClientUsersResponseBodyDataDataListDepartment> department_ = nullptr;
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
