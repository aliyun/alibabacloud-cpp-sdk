// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBATCHTASKUDFLINEAGESRESPONSEBODYDATALINEAGEGROUPLISTOUTPUTLINEAGELIST_HPP_
#define ALIBABACLOUD_MODELS_GETBATCHTASKUDFLINEAGESRESPONSEBODYDATALINEAGEGROUPLISTOUTPUTLINEAGELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListOutputLineageListColumnList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListOutputLineageList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListOutputLineageList& obj) { 
      DARABONBA_PTR_TO_JSON(BizUnitId, bizUnitId_);
      DARABONBA_PTR_TO_JSON(BizUnitName, bizUnitName_);
      DARABONBA_PTR_TO_JSON(ColumnList, columnList_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(Env, env_);
      DARABONBA_PTR_TO_JSON(FullTable, fullTable_);
      DARABONBA_PTR_TO_JSON(Guid, guid_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OwnerName, ownerName_);
      DARABONBA_PTR_TO_JSON(OwnerUserId, ownerUserId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(SubType, subType_);
    };
    friend void from_json(const Darabonba::Json& j, GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListOutputLineageList& obj) { 
      DARABONBA_PTR_FROM_JSON(BizUnitId, bizUnitId_);
      DARABONBA_PTR_FROM_JSON(BizUnitName, bizUnitName_);
      DARABONBA_PTR_FROM_JSON(ColumnList, columnList_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(Env, env_);
      DARABONBA_PTR_FROM_JSON(FullTable, fullTable_);
      DARABONBA_PTR_FROM_JSON(Guid, guid_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OwnerName, ownerName_);
      DARABONBA_PTR_FROM_JSON(OwnerUserId, ownerUserId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(SubType, subType_);
    };
    GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListOutputLineageList() = default ;
    GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListOutputLineageList(const GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListOutputLineageList &) = default ;
    GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListOutputLineageList(GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListOutputLineageList &&) = default ;
    GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListOutputLineageList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListOutputLineageList() = default ;
    GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListOutputLineageList& operator=(const GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListOutputLineageList &) = default ;
    GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListOutputLineageList& operator=(GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListOutputLineageList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizUnitId_ == nullptr
        && return this->bizUnitName_ == nullptr && return this->columnList_ == nullptr && return this->description_ == nullptr && return this->displayName_ == nullptr && return this->env_ == nullptr
        && return this->fullTable_ == nullptr && return this->guid_ == nullptr && return this->name_ == nullptr && return this->ownerName_ == nullptr && return this->ownerUserId_ == nullptr
        && return this->projectId_ == nullptr && return this->projectName_ == nullptr && return this->subType_ == nullptr; };
    // bizUnitId Field Functions 
    bool hasBizUnitId() const { return this->bizUnitId_ != nullptr;};
    void deleteBizUnitId() { this->bizUnitId_ = nullptr;};
    inline string bizUnitId() const { DARABONBA_PTR_GET_DEFAULT(bizUnitId_, "") };
    inline GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListOutputLineageList& setBizUnitId(string bizUnitId) { DARABONBA_PTR_SET_VALUE(bizUnitId_, bizUnitId) };


    // bizUnitName Field Functions 
    bool hasBizUnitName() const { return this->bizUnitName_ != nullptr;};
    void deleteBizUnitName() { this->bizUnitName_ = nullptr;};
    inline string bizUnitName() const { DARABONBA_PTR_GET_DEFAULT(bizUnitName_, "") };
    inline GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListOutputLineageList& setBizUnitName(string bizUnitName) { DARABONBA_PTR_SET_VALUE(bizUnitName_, bizUnitName) };


    // columnList Field Functions 
    bool hasColumnList() const { return this->columnList_ != nullptr;};
    void deleteColumnList() { this->columnList_ = nullptr;};
    inline const vector<Models::GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListOutputLineageListColumnList> & columnList() const { DARABONBA_PTR_GET_CONST(columnList_, vector<Models::GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListOutputLineageListColumnList>) };
    inline vector<Models::GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListOutputLineageListColumnList> columnList() { DARABONBA_PTR_GET(columnList_, vector<Models::GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListOutputLineageListColumnList>) };
    inline GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListOutputLineageList& setColumnList(const vector<Models::GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListOutputLineageListColumnList> & columnList) { DARABONBA_PTR_SET_VALUE(columnList_, columnList) };
    inline GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListOutputLineageList& setColumnList(vector<Models::GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListOutputLineageListColumnList> && columnList) { DARABONBA_PTR_SET_RVALUE(columnList_, columnList) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListOutputLineageList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListOutputLineageList& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline string env() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
    inline GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListOutputLineageList& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


    // fullTable Field Functions 
    bool hasFullTable() const { return this->fullTable_ != nullptr;};
    void deleteFullTable() { this->fullTable_ = nullptr;};
    inline bool fullTable() const { DARABONBA_PTR_GET_DEFAULT(fullTable_, false) };
    inline GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListOutputLineageList& setFullTable(bool fullTable) { DARABONBA_PTR_SET_VALUE(fullTable_, fullTable) };


    // guid Field Functions 
    bool hasGuid() const { return this->guid_ != nullptr;};
    void deleteGuid() { this->guid_ = nullptr;};
    inline string guid() const { DARABONBA_PTR_GET_DEFAULT(guid_, "") };
    inline GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListOutputLineageList& setGuid(string guid) { DARABONBA_PTR_SET_VALUE(guid_, guid) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListOutputLineageList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ownerName Field Functions 
    bool hasOwnerName() const { return this->ownerName_ != nullptr;};
    void deleteOwnerName() { this->ownerName_ = nullptr;};
    inline string ownerName() const { DARABONBA_PTR_GET_DEFAULT(ownerName_, "") };
    inline GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListOutputLineageList& setOwnerName(string ownerName) { DARABONBA_PTR_SET_VALUE(ownerName_, ownerName) };


    // ownerUserId Field Functions 
    bool hasOwnerUserId() const { return this->ownerUserId_ != nullptr;};
    void deleteOwnerUserId() { this->ownerUserId_ = nullptr;};
    inline string ownerUserId() const { DARABONBA_PTR_GET_DEFAULT(ownerUserId_, "") };
    inline GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListOutputLineageList& setOwnerUserId(string ownerUserId) { DARABONBA_PTR_SET_VALUE(ownerUserId_, ownerUserId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListOutputLineageList& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListOutputLineageList& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // subType Field Functions 
    bool hasSubType() const { return this->subType_ != nullptr;};
    void deleteSubType() { this->subType_ = nullptr;};
    inline string subType() const { DARABONBA_PTR_GET_DEFAULT(subType_, "") };
    inline GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListOutputLineageList& setSubType(string subType) { DARABONBA_PTR_SET_VALUE(subType_, subType) };


  protected:
    std::shared_ptr<string> bizUnitId_ = nullptr;
    std::shared_ptr<string> bizUnitName_ = nullptr;
    std::shared_ptr<vector<Models::GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListOutputLineageListColumnList>> columnList_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> displayName_ = nullptr;
    std::shared_ptr<string> env_ = nullptr;
    std::shared_ptr<bool> fullTable_ = nullptr;
    std::shared_ptr<string> guid_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> ownerName_ = nullptr;
    std::shared_ptr<string> ownerUserId_ = nullptr;
    std::shared_ptr<string> projectId_ = nullptr;
    std::shared_ptr<string> projectName_ = nullptr;
    std::shared_ptr<string> subType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
