// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GROUPDEPARTSAVEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GROUPDEPARTSAVEREQUEST_HPP_
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
  class GroupDepartSaveRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GroupDepartSaveRequest& obj) { 
      DARABONBA_PTR_TO_JSON(dept_name, deptName_);
      DARABONBA_PTR_TO_JSON(manager_ids, managerIds_);
      DARABONBA_PTR_TO_JSON(outer_dept_id, outerDeptId_);
      DARABONBA_PTR_TO_JSON(outer_dept_pid, outerDeptPid_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(sub_corp_id_list, subCorpIdList_);
      DARABONBA_PTR_TO_JSON(sync_group, syncGroup_);
    };
    friend void from_json(const Darabonba::Json& j, GroupDepartSaveRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(dept_name, deptName_);
      DARABONBA_PTR_FROM_JSON(manager_ids, managerIds_);
      DARABONBA_PTR_FROM_JSON(outer_dept_id, outerDeptId_);
      DARABONBA_PTR_FROM_JSON(outer_dept_pid, outerDeptPid_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(sub_corp_id_list, subCorpIdList_);
      DARABONBA_PTR_FROM_JSON(sync_group, syncGroup_);
    };
    GroupDepartSaveRequest() = default ;
    GroupDepartSaveRequest(const GroupDepartSaveRequest &) = default ;
    GroupDepartSaveRequest(GroupDepartSaveRequest &&) = default ;
    GroupDepartSaveRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GroupDepartSaveRequest() = default ;
    GroupDepartSaveRequest& operator=(const GroupDepartSaveRequest &) = default ;
    GroupDepartSaveRequest& operator=(GroupDepartSaveRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deptName_ != nullptr
        && this->managerIds_ != nullptr && this->outerDeptId_ != nullptr && this->outerDeptPid_ != nullptr && this->status_ != nullptr && this->subCorpIdList_ != nullptr
        && this->syncGroup_ != nullptr; };
    // deptName Field Functions 
    bool hasDeptName() const { return this->deptName_ != nullptr;};
    void deleteDeptName() { this->deptName_ = nullptr;};
    inline string deptName() const { DARABONBA_PTR_GET_DEFAULT(deptName_, "") };
    inline GroupDepartSaveRequest& setDeptName(string deptName) { DARABONBA_PTR_SET_VALUE(deptName_, deptName) };


    // managerIds Field Functions 
    bool hasManagerIds() const { return this->managerIds_ != nullptr;};
    void deleteManagerIds() { this->managerIds_ = nullptr;};
    inline string managerIds() const { DARABONBA_PTR_GET_DEFAULT(managerIds_, "") };
    inline GroupDepartSaveRequest& setManagerIds(string managerIds) { DARABONBA_PTR_SET_VALUE(managerIds_, managerIds) };


    // outerDeptId Field Functions 
    bool hasOuterDeptId() const { return this->outerDeptId_ != nullptr;};
    void deleteOuterDeptId() { this->outerDeptId_ = nullptr;};
    inline string outerDeptId() const { DARABONBA_PTR_GET_DEFAULT(outerDeptId_, "") };
    inline GroupDepartSaveRequest& setOuterDeptId(string outerDeptId) { DARABONBA_PTR_SET_VALUE(outerDeptId_, outerDeptId) };


    // outerDeptPid Field Functions 
    bool hasOuterDeptPid() const { return this->outerDeptPid_ != nullptr;};
    void deleteOuterDeptPid() { this->outerDeptPid_ = nullptr;};
    inline string outerDeptPid() const { DARABONBA_PTR_GET_DEFAULT(outerDeptPid_, "") };
    inline GroupDepartSaveRequest& setOuterDeptPid(string outerDeptPid) { DARABONBA_PTR_SET_VALUE(outerDeptPid_, outerDeptPid) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline GroupDepartSaveRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // subCorpIdList Field Functions 
    bool hasSubCorpIdList() const { return this->subCorpIdList_ != nullptr;};
    void deleteSubCorpIdList() { this->subCorpIdList_ = nullptr;};
    inline const vector<string> & subCorpIdList() const { DARABONBA_PTR_GET_CONST(subCorpIdList_, vector<string>) };
    inline vector<string> subCorpIdList() { DARABONBA_PTR_GET(subCorpIdList_, vector<string>) };
    inline GroupDepartSaveRequest& setSubCorpIdList(const vector<string> & subCorpIdList) { DARABONBA_PTR_SET_VALUE(subCorpIdList_, subCorpIdList) };
    inline GroupDepartSaveRequest& setSubCorpIdList(vector<string> && subCorpIdList) { DARABONBA_PTR_SET_RVALUE(subCorpIdList_, subCorpIdList) };


    // syncGroup Field Functions 
    bool hasSyncGroup() const { return this->syncGroup_ != nullptr;};
    void deleteSyncGroup() { this->syncGroup_ = nullptr;};
    inline bool syncGroup() const { DARABONBA_PTR_GET_DEFAULT(syncGroup_, false) };
    inline GroupDepartSaveRequest& setSyncGroup(bool syncGroup) { DARABONBA_PTR_SET_VALUE(syncGroup_, syncGroup) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> deptName_ = nullptr;
    std::shared_ptr<string> managerIds_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> outerDeptId_ = nullptr;
    std::shared_ptr<string> outerDeptPid_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<vector<string>> subCorpIdList_ = nullptr;
    std::shared_ptr<bool> syncGroup_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
