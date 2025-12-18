// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SYNCDEPARTMENTUSERREQUESTSYNCDEPARTMENTUSERCOMMANDDEPTUSERMAPPING_HPP_
#define ALIBABACLOUD_MODELS_SYNCDEPARTMENTUSERREQUESTSYNCDEPARTMENTUSERCOMMANDDEPTUSERMAPPING_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class SyncDepartmentUserRequestSyncDepartmentUserCommandDeptUserMapping : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SyncDepartmentUserRequestSyncDepartmentUserCommandDeptUserMapping& obj) { 
      DARABONBA_PTR_TO_JSON(DepartmentIdList, departmentIdList_);
      DARABONBA_PTR_TO_JSON(SourceUserId, sourceUserId_);
    };
    friend void from_json(const Darabonba::Json& j, SyncDepartmentUserRequestSyncDepartmentUserCommandDeptUserMapping& obj) { 
      DARABONBA_PTR_FROM_JSON(DepartmentIdList, departmentIdList_);
      DARABONBA_PTR_FROM_JSON(SourceUserId, sourceUserId_);
    };
    SyncDepartmentUserRequestSyncDepartmentUserCommandDeptUserMapping() = default ;
    SyncDepartmentUserRequestSyncDepartmentUserCommandDeptUserMapping(const SyncDepartmentUserRequestSyncDepartmentUserCommandDeptUserMapping &) = default ;
    SyncDepartmentUserRequestSyncDepartmentUserCommandDeptUserMapping(SyncDepartmentUserRequestSyncDepartmentUserCommandDeptUserMapping &&) = default ;
    SyncDepartmentUserRequestSyncDepartmentUserCommandDeptUserMapping(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SyncDepartmentUserRequestSyncDepartmentUserCommandDeptUserMapping() = default ;
    SyncDepartmentUserRequestSyncDepartmentUserCommandDeptUserMapping& operator=(const SyncDepartmentUserRequestSyncDepartmentUserCommandDeptUserMapping &) = default ;
    SyncDepartmentUserRequestSyncDepartmentUserCommandDeptUserMapping& operator=(SyncDepartmentUserRequestSyncDepartmentUserCommandDeptUserMapping &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->departmentIdList_ == nullptr
        && return this->sourceUserId_ == nullptr; };
    // departmentIdList Field Functions 
    bool hasDepartmentIdList() const { return this->departmentIdList_ != nullptr;};
    void deleteDepartmentIdList() { this->departmentIdList_ = nullptr;};
    inline const vector<string> & departmentIdList() const { DARABONBA_PTR_GET_CONST(departmentIdList_, vector<string>) };
    inline vector<string> departmentIdList() { DARABONBA_PTR_GET(departmentIdList_, vector<string>) };
    inline SyncDepartmentUserRequestSyncDepartmentUserCommandDeptUserMapping& setDepartmentIdList(const vector<string> & departmentIdList) { DARABONBA_PTR_SET_VALUE(departmentIdList_, departmentIdList) };
    inline SyncDepartmentUserRequestSyncDepartmentUserCommandDeptUserMapping& setDepartmentIdList(vector<string> && departmentIdList) { DARABONBA_PTR_SET_RVALUE(departmentIdList_, departmentIdList) };


    // sourceUserId Field Functions 
    bool hasSourceUserId() const { return this->sourceUserId_ != nullptr;};
    void deleteSourceUserId() { this->sourceUserId_ = nullptr;};
    inline string sourceUserId() const { DARABONBA_PTR_GET_DEFAULT(sourceUserId_, "") };
    inline SyncDepartmentUserRequestSyncDepartmentUserCommandDeptUserMapping& setSourceUserId(string sourceUserId) { DARABONBA_PTR_SET_VALUE(sourceUserId_, sourceUserId) };


  protected:
    std::shared_ptr<vector<string>> departmentIdList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sourceUserId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
