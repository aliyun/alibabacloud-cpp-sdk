// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPENSTRUCTSASEUSERSIMPLE_HPP_
#define ALIBABACLOUD_MODELS_OPENSTRUCTSASEUSERSIMPLE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class OpenStructSaseUserSimple : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OpenStructSaseUserSimple& obj) { 
      DARABONBA_PTR_TO_JSON(Departments, departments_);
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(IdpConfigId, idpConfigId_);
      DARABONBA_PTR_TO_JSON(SaseUserId, saseUserId_);
      DARABONBA_PTR_TO_JSON(Telephone, telephone_);
      DARABONBA_PTR_TO_JSON(Username, username_);
    };
    friend void from_json(const Darabonba::Json& j, OpenStructSaseUserSimple& obj) { 
      DARABONBA_PTR_FROM_JSON(Departments, departments_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(IdpConfigId, idpConfigId_);
      DARABONBA_PTR_FROM_JSON(SaseUserId, saseUserId_);
      DARABONBA_PTR_FROM_JSON(Telephone, telephone_);
      DARABONBA_PTR_FROM_JSON(Username, username_);
    };
    OpenStructSaseUserSimple() = default ;
    OpenStructSaseUserSimple(const OpenStructSaseUserSimple &) = default ;
    OpenStructSaseUserSimple(OpenStructSaseUserSimple &&) = default ;
    OpenStructSaseUserSimple(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OpenStructSaseUserSimple() = default ;
    OpenStructSaseUserSimple& operator=(const OpenStructSaseUserSimple &) = default ;
    OpenStructSaseUserSimple& operator=(OpenStructSaseUserSimple &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Departments : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Departments& obj) { 
        DARABONBA_PTR_TO_JSON(DepartmentId, departmentId_);
        DARABONBA_PTR_TO_JSON(FullDepartmentIdPath, fullDepartmentIdPath_);
        DARABONBA_PTR_TO_JSON(FullDn, fullDn_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(ParentDepartmentId, parentDepartmentId_);
      };
      friend void from_json(const Darabonba::Json& j, Departments& obj) { 
        DARABONBA_PTR_FROM_JSON(DepartmentId, departmentId_);
        DARABONBA_PTR_FROM_JSON(FullDepartmentIdPath, fullDepartmentIdPath_);
        DARABONBA_PTR_FROM_JSON(FullDn, fullDn_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(ParentDepartmentId, parentDepartmentId_);
      };
      Departments() = default ;
      Departments(const Departments &) = default ;
      Departments(Departments &&) = default ;
      Departments(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Departments() = default ;
      Departments& operator=(const Departments &) = default ;
      Departments& operator=(Departments &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->departmentId_ == nullptr
        && this->fullDepartmentIdPath_ == nullptr && this->fullDn_ == nullptr && this->name_ == nullptr && this->parentDepartmentId_ == nullptr; };
      // departmentId Field Functions 
      bool hasDepartmentId() const { return this->departmentId_ != nullptr;};
      void deleteDepartmentId() { this->departmentId_ = nullptr;};
      inline string getDepartmentId() const { DARABONBA_PTR_GET_DEFAULT(departmentId_, "") };
      inline Departments& setDepartmentId(string departmentId) { DARABONBA_PTR_SET_VALUE(departmentId_, departmentId) };


      // fullDepartmentIdPath Field Functions 
      bool hasFullDepartmentIdPath() const { return this->fullDepartmentIdPath_ != nullptr;};
      void deleteFullDepartmentIdPath() { this->fullDepartmentIdPath_ = nullptr;};
      inline string getFullDepartmentIdPath() const { DARABONBA_PTR_GET_DEFAULT(fullDepartmentIdPath_, "") };
      inline Departments& setFullDepartmentIdPath(string fullDepartmentIdPath) { DARABONBA_PTR_SET_VALUE(fullDepartmentIdPath_, fullDepartmentIdPath) };


      // fullDn Field Functions 
      bool hasFullDn() const { return this->fullDn_ != nullptr;};
      void deleteFullDn() { this->fullDn_ = nullptr;};
      inline string getFullDn() const { DARABONBA_PTR_GET_DEFAULT(fullDn_, "") };
      inline Departments& setFullDn(string fullDn) { DARABONBA_PTR_SET_VALUE(fullDn_, fullDn) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Departments& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // parentDepartmentId Field Functions 
      bool hasParentDepartmentId() const { return this->parentDepartmentId_ != nullptr;};
      void deleteParentDepartmentId() { this->parentDepartmentId_ = nullptr;};
      inline string getParentDepartmentId() const { DARABONBA_PTR_GET_DEFAULT(parentDepartmentId_, "") };
      inline Departments& setParentDepartmentId(string parentDepartmentId) { DARABONBA_PTR_SET_VALUE(parentDepartmentId_, parentDepartmentId) };


    protected:
      shared_ptr<string> departmentId_ {};
      shared_ptr<string> fullDepartmentIdPath_ {};
      shared_ptr<string> fullDn_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> parentDepartmentId_ {};
    };

    virtual bool empty() const override { return this->departments_ == nullptr
        && this->email_ == nullptr && this->idpConfigId_ == nullptr && this->saseUserId_ == nullptr && this->telephone_ == nullptr && this->username_ == nullptr; };
    // departments Field Functions 
    bool hasDepartments() const { return this->departments_ != nullptr;};
    void deleteDepartments() { this->departments_ = nullptr;};
    inline const vector<OpenStructSaseUserSimple::Departments> & getDepartments() const { DARABONBA_PTR_GET_CONST(departments_, vector<OpenStructSaseUserSimple::Departments>) };
    inline vector<OpenStructSaseUserSimple::Departments> getDepartments() { DARABONBA_PTR_GET(departments_, vector<OpenStructSaseUserSimple::Departments>) };
    inline OpenStructSaseUserSimple& setDepartments(const vector<OpenStructSaseUserSimple::Departments> & departments) { DARABONBA_PTR_SET_VALUE(departments_, departments) };
    inline OpenStructSaseUserSimple& setDepartments(vector<OpenStructSaseUserSimple::Departments> && departments) { DARABONBA_PTR_SET_RVALUE(departments_, departments) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline OpenStructSaseUserSimple& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // idpConfigId Field Functions 
    bool hasIdpConfigId() const { return this->idpConfigId_ != nullptr;};
    void deleteIdpConfigId() { this->idpConfigId_ = nullptr;};
    inline string getIdpConfigId() const { DARABONBA_PTR_GET_DEFAULT(idpConfigId_, "") };
    inline OpenStructSaseUserSimple& setIdpConfigId(string idpConfigId) { DARABONBA_PTR_SET_VALUE(idpConfigId_, idpConfigId) };


    // saseUserId Field Functions 
    bool hasSaseUserId() const { return this->saseUserId_ != nullptr;};
    void deleteSaseUserId() { this->saseUserId_ = nullptr;};
    inline string getSaseUserId() const { DARABONBA_PTR_GET_DEFAULT(saseUserId_, "") };
    inline OpenStructSaseUserSimple& setSaseUserId(string saseUserId) { DARABONBA_PTR_SET_VALUE(saseUserId_, saseUserId) };


    // telephone Field Functions 
    bool hasTelephone() const { return this->telephone_ != nullptr;};
    void deleteTelephone() { this->telephone_ = nullptr;};
    inline string getTelephone() const { DARABONBA_PTR_GET_DEFAULT(telephone_, "") };
    inline OpenStructSaseUserSimple& setTelephone(string telephone) { DARABONBA_PTR_SET_VALUE(telephone_, telephone) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline OpenStructSaseUserSimple& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


  protected:
    shared_ptr<vector<OpenStructSaseUserSimple::Departments>> departments_ {};
    shared_ptr<string> email_ {};
    shared_ptr<string> idpConfigId_ {};
    shared_ptr<string> saseUserId_ {};
    shared_ptr<string> telephone_ {};
    shared_ptr<string> username_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
