// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEPARTMENTROLECMD_HPP_
#define ALIBABACLOUD_MODELS_DEPARTMENTROLECMD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class DepartmentRoleCmd : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DepartmentRoleCmd& obj) { 
      DARABONBA_PTR_TO_JSON(clientId, clientId_);
      DARABONBA_PTR_TO_JSON(roleCode, roleCode_);
    };
    friend void from_json(const Darabonba::Json& j, DepartmentRoleCmd& obj) { 
      DARABONBA_PTR_FROM_JSON(clientId, clientId_);
      DARABONBA_PTR_FROM_JSON(roleCode, roleCode_);
    };
    DepartmentRoleCmd() = default ;
    DepartmentRoleCmd(const DepartmentRoleCmd &) = default ;
    DepartmentRoleCmd(DepartmentRoleCmd &&) = default ;
    DepartmentRoleCmd(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DepartmentRoleCmd() = default ;
    DepartmentRoleCmd& operator=(const DepartmentRoleCmd &) = default ;
    DepartmentRoleCmd& operator=(DepartmentRoleCmd &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientId_ == nullptr
        && this->roleCode_ == nullptr; };
    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline int64_t getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, 0L) };
    inline DepartmentRoleCmd& setClientId(int64_t clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // roleCode Field Functions 
    bool hasRoleCode() const { return this->roleCode_ != nullptr;};
    void deleteRoleCode() { this->roleCode_ = nullptr;};
    inline string getRoleCode() const { DARABONBA_PTR_GET_DEFAULT(roleCode_, "") };
    inline DepartmentRoleCmd& setRoleCode(string roleCode) { DARABONBA_PTR_SET_VALUE(roleCode_, roleCode) };


  protected:
    shared_ptr<int64_t> clientId_ {};
    shared_ptr<string> roleCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
