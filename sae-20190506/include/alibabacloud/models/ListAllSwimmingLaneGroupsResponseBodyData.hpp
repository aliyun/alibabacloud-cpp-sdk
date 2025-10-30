// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALLSWIMMINGLANEGROUPSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTALLSWIMMINGLANEGROUPSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAllSwimmingLaneGroupsResponseBodyDataApps.hpp>
#include <alibabacloud/models/ListAllSwimmingLaneGroupsResponseBodyDataEntryApp.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ListAllSwimmingLaneGroupsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAllSwimmingLaneGroupsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AppIds, appIds_);
      DARABONBA_PTR_TO_JSON(Apps, apps_);
      DARABONBA_PTR_TO_JSON(CanaryModel, canaryModel_);
      DARABONBA_PTR_TO_JSON(EntryApp, entryApp_);
      DARABONBA_PTR_TO_JSON(EntryAppId, entryAppId_);
      DARABONBA_PTR_TO_JSON(EntryAppType, entryAppType_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(MseNamespaceId, mseNamespaceId_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(SwimVersion, swimVersion_);
    };
    friend void from_json(const Darabonba::Json& j, ListAllSwimmingLaneGroupsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AppIds, appIds_);
      DARABONBA_PTR_FROM_JSON(Apps, apps_);
      DARABONBA_PTR_FROM_JSON(CanaryModel, canaryModel_);
      DARABONBA_PTR_FROM_JSON(EntryApp, entryApp_);
      DARABONBA_PTR_FROM_JSON(EntryAppId, entryAppId_);
      DARABONBA_PTR_FROM_JSON(EntryAppType, entryAppType_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(MseNamespaceId, mseNamespaceId_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(SwimVersion, swimVersion_);
    };
    ListAllSwimmingLaneGroupsResponseBodyData() = default ;
    ListAllSwimmingLaneGroupsResponseBodyData(const ListAllSwimmingLaneGroupsResponseBodyData &) = default ;
    ListAllSwimmingLaneGroupsResponseBodyData(ListAllSwimmingLaneGroupsResponseBodyData &&) = default ;
    ListAllSwimmingLaneGroupsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAllSwimmingLaneGroupsResponseBodyData() = default ;
    ListAllSwimmingLaneGroupsResponseBodyData& operator=(const ListAllSwimmingLaneGroupsResponseBodyData &) = default ;
    ListAllSwimmingLaneGroupsResponseBodyData& operator=(ListAllSwimmingLaneGroupsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appIds_ == nullptr
        && return this->apps_ == nullptr && return this->canaryModel_ == nullptr && return this->entryApp_ == nullptr && return this->entryAppId_ == nullptr && return this->entryAppType_ == nullptr
        && return this->groupId_ == nullptr && return this->groupName_ == nullptr && return this->mseNamespaceId_ == nullptr && return this->namespaceId_ == nullptr && return this->swimVersion_ == nullptr; };
    // appIds Field Functions 
    bool hasAppIds() const { return this->appIds_ != nullptr;};
    void deleteAppIds() { this->appIds_ = nullptr;};
    inline const vector<string> & appIds() const { DARABONBA_PTR_GET_CONST(appIds_, vector<string>) };
    inline vector<string> appIds() { DARABONBA_PTR_GET(appIds_, vector<string>) };
    inline ListAllSwimmingLaneGroupsResponseBodyData& setAppIds(const vector<string> & appIds) { DARABONBA_PTR_SET_VALUE(appIds_, appIds) };
    inline ListAllSwimmingLaneGroupsResponseBodyData& setAppIds(vector<string> && appIds) { DARABONBA_PTR_SET_RVALUE(appIds_, appIds) };


    // apps Field Functions 
    bool hasApps() const { return this->apps_ != nullptr;};
    void deleteApps() { this->apps_ = nullptr;};
    inline const vector<Models::ListAllSwimmingLaneGroupsResponseBodyDataApps> & apps() const { DARABONBA_PTR_GET_CONST(apps_, vector<Models::ListAllSwimmingLaneGroupsResponseBodyDataApps>) };
    inline vector<Models::ListAllSwimmingLaneGroupsResponseBodyDataApps> apps() { DARABONBA_PTR_GET(apps_, vector<Models::ListAllSwimmingLaneGroupsResponseBodyDataApps>) };
    inline ListAllSwimmingLaneGroupsResponseBodyData& setApps(const vector<Models::ListAllSwimmingLaneGroupsResponseBodyDataApps> & apps) { DARABONBA_PTR_SET_VALUE(apps_, apps) };
    inline ListAllSwimmingLaneGroupsResponseBodyData& setApps(vector<Models::ListAllSwimmingLaneGroupsResponseBodyDataApps> && apps) { DARABONBA_PTR_SET_RVALUE(apps_, apps) };


    // canaryModel Field Functions 
    bool hasCanaryModel() const { return this->canaryModel_ != nullptr;};
    void deleteCanaryModel() { this->canaryModel_ = nullptr;};
    inline int32_t canaryModel() const { DARABONBA_PTR_GET_DEFAULT(canaryModel_, 0) };
    inline ListAllSwimmingLaneGroupsResponseBodyData& setCanaryModel(int32_t canaryModel) { DARABONBA_PTR_SET_VALUE(canaryModel_, canaryModel) };


    // entryApp Field Functions 
    bool hasEntryApp() const { return this->entryApp_ != nullptr;};
    void deleteEntryApp() { this->entryApp_ = nullptr;};
    inline const Models::ListAllSwimmingLaneGroupsResponseBodyDataEntryApp & entryApp() const { DARABONBA_PTR_GET_CONST(entryApp_, Models::ListAllSwimmingLaneGroupsResponseBodyDataEntryApp) };
    inline Models::ListAllSwimmingLaneGroupsResponseBodyDataEntryApp entryApp() { DARABONBA_PTR_GET(entryApp_, Models::ListAllSwimmingLaneGroupsResponseBodyDataEntryApp) };
    inline ListAllSwimmingLaneGroupsResponseBodyData& setEntryApp(const Models::ListAllSwimmingLaneGroupsResponseBodyDataEntryApp & entryApp) { DARABONBA_PTR_SET_VALUE(entryApp_, entryApp) };
    inline ListAllSwimmingLaneGroupsResponseBodyData& setEntryApp(Models::ListAllSwimmingLaneGroupsResponseBodyDataEntryApp && entryApp) { DARABONBA_PTR_SET_RVALUE(entryApp_, entryApp) };


    // entryAppId Field Functions 
    bool hasEntryAppId() const { return this->entryAppId_ != nullptr;};
    void deleteEntryAppId() { this->entryAppId_ = nullptr;};
    inline string entryAppId() const { DARABONBA_PTR_GET_DEFAULT(entryAppId_, "") };
    inline ListAllSwimmingLaneGroupsResponseBodyData& setEntryAppId(string entryAppId) { DARABONBA_PTR_SET_VALUE(entryAppId_, entryAppId) };


    // entryAppType Field Functions 
    bool hasEntryAppType() const { return this->entryAppType_ != nullptr;};
    void deleteEntryAppType() { this->entryAppType_ = nullptr;};
    inline string entryAppType() const { DARABONBA_PTR_GET_DEFAULT(entryAppType_, "") };
    inline ListAllSwimmingLaneGroupsResponseBodyData& setEntryAppType(string entryAppType) { DARABONBA_PTR_SET_VALUE(entryAppType_, entryAppType) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline ListAllSwimmingLaneGroupsResponseBodyData& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline ListAllSwimmingLaneGroupsResponseBodyData& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // mseNamespaceId Field Functions 
    bool hasMseNamespaceId() const { return this->mseNamespaceId_ != nullptr;};
    void deleteMseNamespaceId() { this->mseNamespaceId_ = nullptr;};
    inline string mseNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(mseNamespaceId_, "") };
    inline ListAllSwimmingLaneGroupsResponseBodyData& setMseNamespaceId(string mseNamespaceId) { DARABONBA_PTR_SET_VALUE(mseNamespaceId_, mseNamespaceId) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string namespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline ListAllSwimmingLaneGroupsResponseBodyData& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // swimVersion Field Functions 
    bool hasSwimVersion() const { return this->swimVersion_ != nullptr;};
    void deleteSwimVersion() { this->swimVersion_ = nullptr;};
    inline string swimVersion() const { DARABONBA_PTR_GET_DEFAULT(swimVersion_, "") };
    inline ListAllSwimmingLaneGroupsResponseBodyData& setSwimVersion(string swimVersion) { DARABONBA_PTR_SET_VALUE(swimVersion_, swimVersion) };


  protected:
    // The IDs of the applications associated with the lane group.
    std::shared_ptr<vector<string>> appIds_ = nullptr;
    // The application information.
    std::shared_ptr<vector<Models::ListAllSwimmingLaneGroupsResponseBodyDataApps>> apps_ = nullptr;
    // Full-link Grayscale Mode:
    // 
    // *   0: The request is routed based on the content of the request.
    // *   1: Proportional routing
    std::shared_ptr<int32_t> canaryModel_ = nullptr;
    // The entry application.
    std::shared_ptr<Models::ListAllSwimmingLaneGroupsResponseBodyDataEntryApp> entryApp_ = nullptr;
    // The ID of the gateway.
    std::shared_ptr<string> entryAppId_ = nullptr;
    // The application entry type (gateway type).
    // 
    // *   **apig:** cloud-native API Gateway
    // *   **mse-gw:** an MSE cloud original gateway
    // *   **mse:** Java Services Gateway
    std::shared_ptr<string> entryAppType_ = nullptr;
    // The ID of the lane group.
    std::shared_ptr<int64_t> groupId_ = nullptr;
    // The name of a lane group.
    std::shared_ptr<string> groupName_ = nullptr;
    // The ID of the namespace to which the MSE instance belongs.
    std::shared_ptr<string> mseNamespaceId_ = nullptr;
    // The ID of the namespace.
    std::shared_ptr<string> namespaceId_ = nullptr;
    // The end-to-end grayscale version. Valid values: 0 and 2 (recommended).
    std::shared_ptr<string> swimVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
