// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDDEPARTMENTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDDEPARTMENTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class AddDepartmentShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddDepartmentShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(dept_name, deptName_);
      DARABONBA_PTR_TO_JSON(manager_employee_id_list, managerEmployeeIdListShrink_);
      DARABONBA_PTR_TO_JSON(out_dept_id, outDeptId_);
      DARABONBA_PTR_TO_JSON(out_dept_pid, outDeptPid_);
    };
    friend void from_json(const Darabonba::Json& j, AddDepartmentShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(dept_name, deptName_);
      DARABONBA_PTR_FROM_JSON(manager_employee_id_list, managerEmployeeIdListShrink_);
      DARABONBA_PTR_FROM_JSON(out_dept_id, outDeptId_);
      DARABONBA_PTR_FROM_JSON(out_dept_pid, outDeptPid_);
    };
    AddDepartmentShrinkRequest() = default ;
    AddDepartmentShrinkRequest(const AddDepartmentShrinkRequest &) = default ;
    AddDepartmentShrinkRequest(AddDepartmentShrinkRequest &&) = default ;
    AddDepartmentShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddDepartmentShrinkRequest() = default ;
    AddDepartmentShrinkRequest& operator=(const AddDepartmentShrinkRequest &) = default ;
    AddDepartmentShrinkRequest& operator=(AddDepartmentShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deptName_ != nullptr
        && this->managerEmployeeIdListShrink_ != nullptr && this->outDeptId_ != nullptr && this->outDeptPid_ != nullptr; };
    // deptName Field Functions 
    bool hasDeptName() const { return this->deptName_ != nullptr;};
    void deleteDeptName() { this->deptName_ = nullptr;};
    inline string deptName() const { DARABONBA_PTR_GET_DEFAULT(deptName_, "") };
    inline AddDepartmentShrinkRequest& setDeptName(string deptName) { DARABONBA_PTR_SET_VALUE(deptName_, deptName) };


    // managerEmployeeIdListShrink Field Functions 
    bool hasManagerEmployeeIdListShrink() const { return this->managerEmployeeIdListShrink_ != nullptr;};
    void deleteManagerEmployeeIdListShrink() { this->managerEmployeeIdListShrink_ = nullptr;};
    inline string managerEmployeeIdListShrink() const { DARABONBA_PTR_GET_DEFAULT(managerEmployeeIdListShrink_, "") };
    inline AddDepartmentShrinkRequest& setManagerEmployeeIdListShrink(string managerEmployeeIdListShrink) { DARABONBA_PTR_SET_VALUE(managerEmployeeIdListShrink_, managerEmployeeIdListShrink) };


    // outDeptId Field Functions 
    bool hasOutDeptId() const { return this->outDeptId_ != nullptr;};
    void deleteOutDeptId() { this->outDeptId_ = nullptr;};
    inline string outDeptId() const { DARABONBA_PTR_GET_DEFAULT(outDeptId_, "") };
    inline AddDepartmentShrinkRequest& setOutDeptId(string outDeptId) { DARABONBA_PTR_SET_VALUE(outDeptId_, outDeptId) };


    // outDeptPid Field Functions 
    bool hasOutDeptPid() const { return this->outDeptPid_ != nullptr;};
    void deleteOutDeptPid() { this->outDeptPid_ = nullptr;};
    inline string outDeptPid() const { DARABONBA_PTR_GET_DEFAULT(outDeptPid_, "") };
    inline AddDepartmentShrinkRequest& setOutDeptPid(string outDeptPid) { DARABONBA_PTR_SET_VALUE(outDeptPid_, outDeptPid) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> deptName_ = nullptr;
    std::shared_ptr<string> managerEmployeeIdListShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> outDeptId_ = nullptr;
    std::shared_ptr<string> outDeptPid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
