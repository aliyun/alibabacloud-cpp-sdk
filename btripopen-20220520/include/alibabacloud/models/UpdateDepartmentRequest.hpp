// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDEPARTMENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDEPARTMENTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class UpdateDepartmentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDepartmentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(dept_name, deptName_);
      DARABONBA_PTR_TO_JSON(manager_employee_id_list, managerEmployeeIdList_);
      DARABONBA_PTR_TO_JSON(out_dept_id, outDeptId_);
      DARABONBA_PTR_TO_JSON(out_dept_pid, outDeptPid_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDepartmentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(dept_name, deptName_);
      DARABONBA_PTR_FROM_JSON(manager_employee_id_list, managerEmployeeIdList_);
      DARABONBA_PTR_FROM_JSON(out_dept_id, outDeptId_);
      DARABONBA_PTR_FROM_JSON(out_dept_pid, outDeptPid_);
    };
    UpdateDepartmentRequest() = default ;
    UpdateDepartmentRequest(const UpdateDepartmentRequest &) = default ;
    UpdateDepartmentRequest(UpdateDepartmentRequest &&) = default ;
    UpdateDepartmentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDepartmentRequest() = default ;
    UpdateDepartmentRequest& operator=(const UpdateDepartmentRequest &) = default ;
    UpdateDepartmentRequest& operator=(UpdateDepartmentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deptName_ != nullptr
        && this->managerEmployeeIdList_ != nullptr && this->outDeptId_ != nullptr && this->outDeptPid_ != nullptr; };
    // deptName Field Functions 
    bool hasDeptName() const { return this->deptName_ != nullptr;};
    void deleteDeptName() { this->deptName_ = nullptr;};
    inline string deptName() const { DARABONBA_PTR_GET_DEFAULT(deptName_, "") };
    inline UpdateDepartmentRequest& setDeptName(string deptName) { DARABONBA_PTR_SET_VALUE(deptName_, deptName) };


    // managerEmployeeIdList Field Functions 
    bool hasManagerEmployeeIdList() const { return this->managerEmployeeIdList_ != nullptr;};
    void deleteManagerEmployeeIdList() { this->managerEmployeeIdList_ = nullptr;};
    inline const vector<string> & managerEmployeeIdList() const { DARABONBA_PTR_GET_CONST(managerEmployeeIdList_, vector<string>) };
    inline vector<string> managerEmployeeIdList() { DARABONBA_PTR_GET(managerEmployeeIdList_, vector<string>) };
    inline UpdateDepartmentRequest& setManagerEmployeeIdList(const vector<string> & managerEmployeeIdList) { DARABONBA_PTR_SET_VALUE(managerEmployeeIdList_, managerEmployeeIdList) };
    inline UpdateDepartmentRequest& setManagerEmployeeIdList(vector<string> && managerEmployeeIdList) { DARABONBA_PTR_SET_RVALUE(managerEmployeeIdList_, managerEmployeeIdList) };


    // outDeptId Field Functions 
    bool hasOutDeptId() const { return this->outDeptId_ != nullptr;};
    void deleteOutDeptId() { this->outDeptId_ = nullptr;};
    inline string outDeptId() const { DARABONBA_PTR_GET_DEFAULT(outDeptId_, "") };
    inline UpdateDepartmentRequest& setOutDeptId(string outDeptId) { DARABONBA_PTR_SET_VALUE(outDeptId_, outDeptId) };


    // outDeptPid Field Functions 
    bool hasOutDeptPid() const { return this->outDeptPid_ != nullptr;};
    void deleteOutDeptPid() { this->outDeptPid_ = nullptr;};
    inline string outDeptPid() const { DARABONBA_PTR_GET_DEFAULT(outDeptPid_, "") };
    inline UpdateDepartmentRequest& setOutDeptPid(string outDeptPid) { DARABONBA_PTR_SET_VALUE(outDeptPid_, outDeptPid) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> deptName_ = nullptr;
    std::shared_ptr<vector<string>> managerEmployeeIdList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> outDeptId_ = nullptr;
    std::shared_ptr<string> outDeptPid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
