// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASERVICEPUBLISHEDAPISRESPONSEBODYPAGERESULTAPILIST_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASERVICEPUBLISHEDAPISRESPONSEBODYPAGERESULTAPILIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDataServicePublishedApisResponseBodyPageResultApiListAppInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListDataServicePublishedApisResponseBodyPageResultApiList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataServicePublishedApisResponseBodyPageResultApiList& obj) { 
      DARABONBA_PTR_TO_JSON(ApiId, apiId_);
      DARABONBA_PTR_TO_JSON(ApiName, apiName_);
      DARABONBA_PTR_TO_JSON(AppCount, appCount_);
      DARABONBA_PTR_TO_JSON(AppInfoList, appInfoList_);
      DARABONBA_PTR_TO_JSON(ApplyStatus, applyStatus_);
      DARABONBA_PTR_TO_JSON(CallCount, callCount_);
      DARABONBA_PTR_TO_JSON(CreateType, createType_);
      DARABONBA_PTR_TO_JSON(CustomUpdateRate, customUpdateRate_);
      DARABONBA_PTR_TO_JSON(DeployTime, deployTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ExecuteMode, executeMode_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(LogicUnitNo, logicUnitNo_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(OwnerUserName, ownerUserName_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(UpdateRate, updateRate_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataServicePublishedApisResponseBodyPageResultApiList& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
      DARABONBA_PTR_FROM_JSON(ApiName, apiName_);
      DARABONBA_PTR_FROM_JSON(AppCount, appCount_);
      DARABONBA_PTR_FROM_JSON(AppInfoList, appInfoList_);
      DARABONBA_PTR_FROM_JSON(ApplyStatus, applyStatus_);
      DARABONBA_PTR_FROM_JSON(CallCount, callCount_);
      DARABONBA_PTR_FROM_JSON(CreateType, createType_);
      DARABONBA_PTR_FROM_JSON(CustomUpdateRate, customUpdateRate_);
      DARABONBA_PTR_FROM_JSON(DeployTime, deployTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ExecuteMode, executeMode_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(LogicUnitNo, logicUnitNo_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(OwnerUserName, ownerUserName_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(UpdateRate, updateRate_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    ListDataServicePublishedApisResponseBodyPageResultApiList() = default ;
    ListDataServicePublishedApisResponseBodyPageResultApiList(const ListDataServicePublishedApisResponseBodyPageResultApiList &) = default ;
    ListDataServicePublishedApisResponseBodyPageResultApiList(ListDataServicePublishedApisResponseBodyPageResultApiList &&) = default ;
    ListDataServicePublishedApisResponseBodyPageResultApiList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataServicePublishedApisResponseBodyPageResultApiList() = default ;
    ListDataServicePublishedApisResponseBodyPageResultApiList& operator=(const ListDataServicePublishedApisResponseBodyPageResultApiList &) = default ;
    ListDataServicePublishedApisResponseBodyPageResultApiList& operator=(ListDataServicePublishedApisResponseBodyPageResultApiList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiId_ == nullptr
        && return this->apiName_ == nullptr && return this->appCount_ == nullptr && return this->appInfoList_ == nullptr && return this->applyStatus_ == nullptr && return this->callCount_ == nullptr
        && return this->createType_ == nullptr && return this->customUpdateRate_ == nullptr && return this->deployTime_ == nullptr && return this->description_ == nullptr && return this->executeMode_ == nullptr
        && return this->groupId_ == nullptr && return this->groupName_ == nullptr && return this->logicUnitNo_ == nullptr && return this->mode_ == nullptr && return this->owner_ == nullptr
        && return this->ownerUserName_ == nullptr && return this->projectId_ == nullptr && return this->projectName_ == nullptr && return this->updateRate_ == nullptr && return this->updateTime_ == nullptr
        && return this->version_ == nullptr; };
    // apiId Field Functions 
    bool hasApiId() const { return this->apiId_ != nullptr;};
    void deleteApiId() { this->apiId_ = nullptr;};
    inline int64_t apiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, 0L) };
    inline ListDataServicePublishedApisResponseBodyPageResultApiList& setApiId(int64_t apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


    // apiName Field Functions 
    bool hasApiName() const { return this->apiName_ != nullptr;};
    void deleteApiName() { this->apiName_ = nullptr;};
    inline string apiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
    inline ListDataServicePublishedApisResponseBodyPageResultApiList& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


    // appCount Field Functions 
    bool hasAppCount() const { return this->appCount_ != nullptr;};
    void deleteAppCount() { this->appCount_ = nullptr;};
    inline int32_t appCount() const { DARABONBA_PTR_GET_DEFAULT(appCount_, 0) };
    inline ListDataServicePublishedApisResponseBodyPageResultApiList& setAppCount(int32_t appCount) { DARABONBA_PTR_SET_VALUE(appCount_, appCount) };


    // appInfoList Field Functions 
    bool hasAppInfoList() const { return this->appInfoList_ != nullptr;};
    void deleteAppInfoList() { this->appInfoList_ = nullptr;};
    inline const vector<Models::ListDataServicePublishedApisResponseBodyPageResultApiListAppInfoList> & appInfoList() const { DARABONBA_PTR_GET_CONST(appInfoList_, vector<Models::ListDataServicePublishedApisResponseBodyPageResultApiListAppInfoList>) };
    inline vector<Models::ListDataServicePublishedApisResponseBodyPageResultApiListAppInfoList> appInfoList() { DARABONBA_PTR_GET(appInfoList_, vector<Models::ListDataServicePublishedApisResponseBodyPageResultApiListAppInfoList>) };
    inline ListDataServicePublishedApisResponseBodyPageResultApiList& setAppInfoList(const vector<Models::ListDataServicePublishedApisResponseBodyPageResultApiListAppInfoList> & appInfoList) { DARABONBA_PTR_SET_VALUE(appInfoList_, appInfoList) };
    inline ListDataServicePublishedApisResponseBodyPageResultApiList& setAppInfoList(vector<Models::ListDataServicePublishedApisResponseBodyPageResultApiListAppInfoList> && appInfoList) { DARABONBA_PTR_SET_RVALUE(appInfoList_, appInfoList) };


    // applyStatus Field Functions 
    bool hasApplyStatus() const { return this->applyStatus_ != nullptr;};
    void deleteApplyStatus() { this->applyStatus_ = nullptr;};
    inline int32_t applyStatus() const { DARABONBA_PTR_GET_DEFAULT(applyStatus_, 0) };
    inline ListDataServicePublishedApisResponseBodyPageResultApiList& setApplyStatus(int32_t applyStatus) { DARABONBA_PTR_SET_VALUE(applyStatus_, applyStatus) };


    // callCount Field Functions 
    bool hasCallCount() const { return this->callCount_ != nullptr;};
    void deleteCallCount() { this->callCount_ = nullptr;};
    inline int32_t callCount() const { DARABONBA_PTR_GET_DEFAULT(callCount_, 0) };
    inline ListDataServicePublishedApisResponseBodyPageResultApiList& setCallCount(int32_t callCount) { DARABONBA_PTR_SET_VALUE(callCount_, callCount) };


    // createType Field Functions 
    bool hasCreateType() const { return this->createType_ != nullptr;};
    void deleteCreateType() { this->createType_ = nullptr;};
    inline int32_t createType() const { DARABONBA_PTR_GET_DEFAULT(createType_, 0) };
    inline ListDataServicePublishedApisResponseBodyPageResultApiList& setCreateType(int32_t createType) { DARABONBA_PTR_SET_VALUE(createType_, createType) };


    // customUpdateRate Field Functions 
    bool hasCustomUpdateRate() const { return this->customUpdateRate_ != nullptr;};
    void deleteCustomUpdateRate() { this->customUpdateRate_ = nullptr;};
    inline string customUpdateRate() const { DARABONBA_PTR_GET_DEFAULT(customUpdateRate_, "") };
    inline ListDataServicePublishedApisResponseBodyPageResultApiList& setCustomUpdateRate(string customUpdateRate) { DARABONBA_PTR_SET_VALUE(customUpdateRate_, customUpdateRate) };


    // deployTime Field Functions 
    bool hasDeployTime() const { return this->deployTime_ != nullptr;};
    void deleteDeployTime() { this->deployTime_ = nullptr;};
    inline string deployTime() const { DARABONBA_PTR_GET_DEFAULT(deployTime_, "") };
    inline ListDataServicePublishedApisResponseBodyPageResultApiList& setDeployTime(string deployTime) { DARABONBA_PTR_SET_VALUE(deployTime_, deployTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListDataServicePublishedApisResponseBodyPageResultApiList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // executeMode Field Functions 
    bool hasExecuteMode() const { return this->executeMode_ != nullptr;};
    void deleteExecuteMode() { this->executeMode_ = nullptr;};
    inline int32_t executeMode() const { DARABONBA_PTR_GET_DEFAULT(executeMode_, 0) };
    inline ListDataServicePublishedApisResponseBodyPageResultApiList& setExecuteMode(int32_t executeMode) { DARABONBA_PTR_SET_VALUE(executeMode_, executeMode) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int32_t groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0) };
    inline ListDataServicePublishedApisResponseBodyPageResultApiList& setGroupId(int32_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline ListDataServicePublishedApisResponseBodyPageResultApiList& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // logicUnitNo Field Functions 
    bool hasLogicUnitNo() const { return this->logicUnitNo_ != nullptr;};
    void deleteLogicUnitNo() { this->logicUnitNo_ = nullptr;};
    inline int64_t logicUnitNo() const { DARABONBA_PTR_GET_DEFAULT(logicUnitNo_, 0L) };
    inline ListDataServicePublishedApisResponseBodyPageResultApiList& setLogicUnitNo(int64_t logicUnitNo) { DARABONBA_PTR_SET_VALUE(logicUnitNo_, logicUnitNo) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline int32_t mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, 0) };
    inline ListDataServicePublishedApisResponseBodyPageResultApiList& setMode(int32_t mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline ListDataServicePublishedApisResponseBodyPageResultApiList& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // ownerUserName Field Functions 
    bool hasOwnerUserName() const { return this->ownerUserName_ != nullptr;};
    void deleteOwnerUserName() { this->ownerUserName_ = nullptr;};
    inline string ownerUserName() const { DARABONBA_PTR_GET_DEFAULT(ownerUserName_, "") };
    inline ListDataServicePublishedApisResponseBodyPageResultApiList& setOwnerUserName(string ownerUserName) { DARABONBA_PTR_SET_VALUE(ownerUserName_, ownerUserName) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int32_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0) };
    inline ListDataServicePublishedApisResponseBodyPageResultApiList& setProjectId(int32_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline ListDataServicePublishedApisResponseBodyPageResultApiList& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // updateRate Field Functions 
    bool hasUpdateRate() const { return this->updateRate_ != nullptr;};
    void deleteUpdateRate() { this->updateRate_ = nullptr;};
    inline int32_t updateRate() const { DARABONBA_PTR_GET_DEFAULT(updateRate_, 0) };
    inline ListDataServicePublishedApisResponseBodyPageResultApiList& setUpdateRate(int32_t updateRate) { DARABONBA_PTR_SET_VALUE(updateRate_, updateRate) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline ListDataServicePublishedApisResponseBodyPageResultApiList& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline ListDataServicePublishedApisResponseBodyPageResultApiList& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    std::shared_ptr<int64_t> apiId_ = nullptr;
    std::shared_ptr<string> apiName_ = nullptr;
    std::shared_ptr<int32_t> appCount_ = nullptr;
    std::shared_ptr<vector<Models::ListDataServicePublishedApisResponseBodyPageResultApiListAppInfoList>> appInfoList_ = nullptr;
    std::shared_ptr<int32_t> applyStatus_ = nullptr;
    std::shared_ptr<int32_t> callCount_ = nullptr;
    std::shared_ptr<int32_t> createType_ = nullptr;
    std::shared_ptr<string> customUpdateRate_ = nullptr;
    std::shared_ptr<string> deployTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<int32_t> executeMode_ = nullptr;
    std::shared_ptr<int32_t> groupId_ = nullptr;
    std::shared_ptr<string> groupName_ = nullptr;
    std::shared_ptr<int64_t> logicUnitNo_ = nullptr;
    std::shared_ptr<int32_t> mode_ = nullptr;
    std::shared_ptr<string> owner_ = nullptr;
    std::shared_ptr<string> ownerUserName_ = nullptr;
    std::shared_ptr<int32_t> projectId_ = nullptr;
    std::shared_ptr<string> projectName_ = nullptr;
    std::shared_ptr<int32_t> updateRate_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
