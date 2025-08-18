// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBATCHTASKUDFLINEAGESRESPONSEBODYDATALINEAGEGROUPLISTINPUTLINEAGELIST_HPP_
#define ALIBABACLOUD_MODELS_GETBATCHTASKUDFLINEAGESRESPONSEBODYDATALINEAGEGROUPLISTINPUTLINEAGELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListInputLineageListColumnList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListInputLineageList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListInputLineageList& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListInputLineageList& obj) { 
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
    GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListInputLineageList() = default ;
    GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListInputLineageList(const GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListInputLineageList &) = default ;
    GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListInputLineageList(GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListInputLineageList &&) = default ;
    GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListInputLineageList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListInputLineageList() = default ;
    GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListInputLineageList& operator=(const GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListInputLineageList &) = default ;
    GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListInputLineageList& operator=(GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListInputLineageList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bizUnitId_ != nullptr
        && this->bizUnitName_ != nullptr && this->columnList_ != nullptr && this->description_ != nullptr && this->displayName_ != nullptr && this->env_ != nullptr
        && this->fullTable_ != nullptr && this->guid_ != nullptr && this->name_ != nullptr && this->ownerName_ != nullptr && this->ownerUserId_ != nullptr
        && this->projectId_ != nullptr && this->projectName_ != nullptr && this->subType_ != nullptr; };
    // bizUnitId Field Functions 
    bool hasBizUnitId() const { return this->bizUnitId_ != nullptr;};
    void deleteBizUnitId() { this->bizUnitId_ = nullptr;};
    inline string bizUnitId() const { DARABONBA_PTR_GET_DEFAULT(bizUnitId_, "") };
    inline GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListInputLineageList& setBizUnitId(string bizUnitId) { DARABONBA_PTR_SET_VALUE(bizUnitId_, bizUnitId) };


    // bizUnitName Field Functions 
    bool hasBizUnitName() const { return this->bizUnitName_ != nullptr;};
    void deleteBizUnitName() { this->bizUnitName_ = nullptr;};
    inline string bizUnitName() const { DARABONBA_PTR_GET_DEFAULT(bizUnitName_, "") };
    inline GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListInputLineageList& setBizUnitName(string bizUnitName) { DARABONBA_PTR_SET_VALUE(bizUnitName_, bizUnitName) };


    // columnList Field Functions 
    bool hasColumnList() const { return this->columnList_ != nullptr;};
    void deleteColumnList() { this->columnList_ = nullptr;};
    inline const vector<Models::GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListInputLineageListColumnList> & columnList() const { DARABONBA_PTR_GET_CONST(columnList_, vector<Models::GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListInputLineageListColumnList>) };
    inline vector<Models::GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListInputLineageListColumnList> columnList() { DARABONBA_PTR_GET(columnList_, vector<Models::GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListInputLineageListColumnList>) };
    inline GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListInputLineageList& setColumnList(const vector<Models::GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListInputLineageListColumnList> & columnList) { DARABONBA_PTR_SET_VALUE(columnList_, columnList) };
    inline GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListInputLineageList& setColumnList(vector<Models::GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListInputLineageListColumnList> && columnList) { DARABONBA_PTR_SET_RVALUE(columnList_, columnList) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListInputLineageList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListInputLineageList& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline string env() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
    inline GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListInputLineageList& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


    // fullTable Field Functions 
    bool hasFullTable() const { return this->fullTable_ != nullptr;};
    void deleteFullTable() { this->fullTable_ = nullptr;};
    inline bool fullTable() const { DARABONBA_PTR_GET_DEFAULT(fullTable_, false) };
    inline GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListInputLineageList& setFullTable(bool fullTable) { DARABONBA_PTR_SET_VALUE(fullTable_, fullTable) };


    // guid Field Functions 
    bool hasGuid() const { return this->guid_ != nullptr;};
    void deleteGuid() { this->guid_ = nullptr;};
    inline string guid() const { DARABONBA_PTR_GET_DEFAULT(guid_, "") };
    inline GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListInputLineageList& setGuid(string guid) { DARABONBA_PTR_SET_VALUE(guid_, guid) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListInputLineageList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ownerName Field Functions 
    bool hasOwnerName() const { return this->ownerName_ != nullptr;};
    void deleteOwnerName() { this->ownerName_ = nullptr;};
    inline string ownerName() const { DARABONBA_PTR_GET_DEFAULT(ownerName_, "") };
    inline GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListInputLineageList& setOwnerName(string ownerName) { DARABONBA_PTR_SET_VALUE(ownerName_, ownerName) };


    // ownerUserId Field Functions 
    bool hasOwnerUserId() const { return this->ownerUserId_ != nullptr;};
    void deleteOwnerUserId() { this->ownerUserId_ = nullptr;};
    inline string ownerUserId() const { DARABONBA_PTR_GET_DEFAULT(ownerUserId_, "") };
    inline GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListInputLineageList& setOwnerUserId(string ownerUserId) { DARABONBA_PTR_SET_VALUE(ownerUserId_, ownerUserId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListInputLineageList& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListInputLineageList& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // subType Field Functions 
    bool hasSubType() const { return this->subType_ != nullptr;};
    void deleteSubType() { this->subType_ = nullptr;};
    inline string subType() const { DARABONBA_PTR_GET_DEFAULT(subType_, "") };
    inline GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListInputLineageList& setSubType(string subType) { DARABONBA_PTR_SET_VALUE(subType_, subType) };


  protected:
    std::shared_ptr<string> bizUnitId_ = nullptr;
    std::shared_ptr<string> bizUnitName_ = nullptr;
    std::shared_ptr<vector<Models::GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListInputLineageListColumnList>> columnList_ = nullptr;
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
