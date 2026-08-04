// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEPTMEMBERDTO_HPP_
#define ALIBABACLOUD_MODELS_DEPTMEMBERDTO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class DeptMemberDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeptMemberDTO& obj) { 
      DARABONBA_PTR_TO_JSON(allowedModels, allowedModels_);
      DARABONBA_PTR_TO_JSON(authConfig, authConfig_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(keyCount, keyCount_);
      DARABONBA_PTR_TO_JSON(loginName, loginName_);
      DARABONBA_PTR_TO_JSON(monthlyBalance, monthlyBalance_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(permanentBalance, permanentBalance_);
      DARABONBA_PTR_TO_JSON(phone, phone_);
      DARABONBA_PTR_TO_JSON(roleCode, roleCode_);
      DARABONBA_PTR_TO_JSON(roleName, roleName_);
    };
    friend void from_json(const Darabonba::Json& j, DeptMemberDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(allowedModels, allowedModels_);
      DARABONBA_PTR_FROM_JSON(authConfig, authConfig_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(keyCount, keyCount_);
      DARABONBA_PTR_FROM_JSON(loginName, loginName_);
      DARABONBA_PTR_FROM_JSON(monthlyBalance, monthlyBalance_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(permanentBalance, permanentBalance_);
      DARABONBA_PTR_FROM_JSON(phone, phone_);
      DARABONBA_PTR_FROM_JSON(roleCode, roleCode_);
      DARABONBA_PTR_FROM_JSON(roleName, roleName_);
    };
    DeptMemberDTO() = default ;
    DeptMemberDTO(const DeptMemberDTO &) = default ;
    DeptMemberDTO(DeptMemberDTO &&) = default ;
    DeptMemberDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeptMemberDTO() = default ;
    DeptMemberDTO& operator=(const DeptMemberDTO &) = default ;
    DeptMemberDTO& operator=(DeptMemberDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allowedModels_ == nullptr
        && this->authConfig_ == nullptr && this->gmtCreate_ == nullptr && this->id_ == nullptr && this->keyCount_ == nullptr && this->loginName_ == nullptr
        && this->monthlyBalance_ == nullptr && this->name_ == nullptr && this->permanentBalance_ == nullptr && this->phone_ == nullptr && this->roleCode_ == nullptr
        && this->roleName_ == nullptr; };
    // allowedModels Field Functions 
    bool hasAllowedModels() const { return this->allowedModels_ != nullptr;};
    void deleteAllowedModels() { this->allowedModels_ = nullptr;};
    inline string getAllowedModels() const { DARABONBA_PTR_GET_DEFAULT(allowedModels_, "") };
    inline DeptMemberDTO& setAllowedModels(string allowedModels) { DARABONBA_PTR_SET_VALUE(allowedModels_, allowedModels) };


    // authConfig Field Functions 
    bool hasAuthConfig() const { return this->authConfig_ != nullptr;};
    void deleteAuthConfig() { this->authConfig_ = nullptr;};
    inline string getAuthConfig() const { DARABONBA_PTR_GET_DEFAULT(authConfig_, "") };
    inline DeptMemberDTO& setAuthConfig(string authConfig) { DARABONBA_PTR_SET_VALUE(authConfig_, authConfig) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline DeptMemberDTO& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DeptMemberDTO& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // keyCount Field Functions 
    bool hasKeyCount() const { return this->keyCount_ != nullptr;};
    void deleteKeyCount() { this->keyCount_ = nullptr;};
    inline int32_t getKeyCount() const { DARABONBA_PTR_GET_DEFAULT(keyCount_, 0) };
    inline DeptMemberDTO& setKeyCount(int32_t keyCount) { DARABONBA_PTR_SET_VALUE(keyCount_, keyCount) };


    // loginName Field Functions 
    bool hasLoginName() const { return this->loginName_ != nullptr;};
    void deleteLoginName() { this->loginName_ = nullptr;};
    inline string getLoginName() const { DARABONBA_PTR_GET_DEFAULT(loginName_, "") };
    inline DeptMemberDTO& setLoginName(string loginName) { DARABONBA_PTR_SET_VALUE(loginName_, loginName) };


    // monthlyBalance Field Functions 
    bool hasMonthlyBalance() const { return this->monthlyBalance_ != nullptr;};
    void deleteMonthlyBalance() { this->monthlyBalance_ = nullptr;};
    inline double getMonthlyBalance() const { DARABONBA_PTR_GET_DEFAULT(monthlyBalance_, 0.0) };
    inline DeptMemberDTO& setMonthlyBalance(double monthlyBalance) { DARABONBA_PTR_SET_VALUE(monthlyBalance_, monthlyBalance) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DeptMemberDTO& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // permanentBalance Field Functions 
    bool hasPermanentBalance() const { return this->permanentBalance_ != nullptr;};
    void deletePermanentBalance() { this->permanentBalance_ = nullptr;};
    inline double getPermanentBalance() const { DARABONBA_PTR_GET_DEFAULT(permanentBalance_, 0.0) };
    inline DeptMemberDTO& setPermanentBalance(double permanentBalance) { DARABONBA_PTR_SET_VALUE(permanentBalance_, permanentBalance) };


    // phone Field Functions 
    bool hasPhone() const { return this->phone_ != nullptr;};
    void deletePhone() { this->phone_ = nullptr;};
    inline string getPhone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
    inline DeptMemberDTO& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


    // roleCode Field Functions 
    bool hasRoleCode() const { return this->roleCode_ != nullptr;};
    void deleteRoleCode() { this->roleCode_ = nullptr;};
    inline string getRoleCode() const { DARABONBA_PTR_GET_DEFAULT(roleCode_, "") };
    inline DeptMemberDTO& setRoleCode(string roleCode) { DARABONBA_PTR_SET_VALUE(roleCode_, roleCode) };


    // roleName Field Functions 
    bool hasRoleName() const { return this->roleName_ != nullptr;};
    void deleteRoleName() { this->roleName_ = nullptr;};
    inline string getRoleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
    inline DeptMemberDTO& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


  protected:
    shared_ptr<string> allowedModels_ {};
    shared_ptr<string> authConfig_ {};
    shared_ptr<string> gmtCreate_ {};
    shared_ptr<int64_t> id_ {};
    shared_ptr<int32_t> keyCount_ {};
    shared_ptr<string> loginName_ {};
    shared_ptr<double> monthlyBalance_ {};
    shared_ptr<string> name_ {};
    shared_ptr<double> permanentBalance_ {};
    shared_ptr<string> phone_ {};
    shared_ptr<string> roleCode_ {};
    shared_ptr<string> roleName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
