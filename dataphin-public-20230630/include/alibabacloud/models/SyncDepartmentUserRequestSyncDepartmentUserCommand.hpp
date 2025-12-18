// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SYNCDEPARTMENTUSERREQUESTSYNCDEPARTMENTUSERCOMMAND_HPP_
#define ALIBABACLOUD_MODELS_SYNCDEPARTMENTUSERREQUESTSYNCDEPARTMENTUSERCOMMAND_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SyncDepartmentUserRequestSyncDepartmentUserCommandDeptUserMapping.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class SyncDepartmentUserRequestSyncDepartmentUserCommand : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SyncDepartmentUserRequestSyncDepartmentUserCommand& obj) { 
      DARABONBA_PTR_TO_JSON(DeptUserMapping, deptUserMapping_);
    };
    friend void from_json(const Darabonba::Json& j, SyncDepartmentUserRequestSyncDepartmentUserCommand& obj) { 
      DARABONBA_PTR_FROM_JSON(DeptUserMapping, deptUserMapping_);
    };
    SyncDepartmentUserRequestSyncDepartmentUserCommand() = default ;
    SyncDepartmentUserRequestSyncDepartmentUserCommand(const SyncDepartmentUserRequestSyncDepartmentUserCommand &) = default ;
    SyncDepartmentUserRequestSyncDepartmentUserCommand(SyncDepartmentUserRequestSyncDepartmentUserCommand &&) = default ;
    SyncDepartmentUserRequestSyncDepartmentUserCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SyncDepartmentUserRequestSyncDepartmentUserCommand() = default ;
    SyncDepartmentUserRequestSyncDepartmentUserCommand& operator=(const SyncDepartmentUserRequestSyncDepartmentUserCommand &) = default ;
    SyncDepartmentUserRequestSyncDepartmentUserCommand& operator=(SyncDepartmentUserRequestSyncDepartmentUserCommand &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deptUserMapping_ == nullptr; };
    // deptUserMapping Field Functions 
    bool hasDeptUserMapping() const { return this->deptUserMapping_ != nullptr;};
    void deleteDeptUserMapping() { this->deptUserMapping_ = nullptr;};
    inline const vector<Models::SyncDepartmentUserRequestSyncDepartmentUserCommandDeptUserMapping> & deptUserMapping() const { DARABONBA_PTR_GET_CONST(deptUserMapping_, vector<Models::SyncDepartmentUserRequestSyncDepartmentUserCommandDeptUserMapping>) };
    inline vector<Models::SyncDepartmentUserRequestSyncDepartmentUserCommandDeptUserMapping> deptUserMapping() { DARABONBA_PTR_GET(deptUserMapping_, vector<Models::SyncDepartmentUserRequestSyncDepartmentUserCommandDeptUserMapping>) };
    inline SyncDepartmentUserRequestSyncDepartmentUserCommand& setDeptUserMapping(const vector<Models::SyncDepartmentUserRequestSyncDepartmentUserCommandDeptUserMapping> & deptUserMapping) { DARABONBA_PTR_SET_VALUE(deptUserMapping_, deptUserMapping) };
    inline SyncDepartmentUserRequestSyncDepartmentUserCommand& setDeptUserMapping(vector<Models::SyncDepartmentUserRequestSyncDepartmentUserCommandDeptUserMapping> && deptUserMapping) { DARABONBA_PTR_SET_RVALUE(deptUserMapping_, deptUserMapping) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<Models::SyncDepartmentUserRequestSyncDepartmentUserCommandDeptUserMapping>> deptUserMapping_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
