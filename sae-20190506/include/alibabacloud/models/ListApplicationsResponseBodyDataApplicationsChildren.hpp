// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONSRESPONSEBODYDATAAPPLICATIONSCHILDREN_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONSRESPONSEBODYDATAAPPLICATIONSCHILDREN_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListApplicationsResponseBodyDataApplicationsChildrenTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ListApplicationsResponseBodyDataApplicationsChildren : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationsResponseBodyDataApplicationsChildren& obj) { 
      DARABONBA_PTR_TO_JSON(AppDeletingStatus, appDeletingStatus_);
      DARABONBA_PTR_TO_JSON(AppDescription, appDescription_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(AppType, appType_);
      DARABONBA_PTR_TO_JSON(BaseAppId, baseAppId_);
      DARABONBA_PTR_TO_JSON(Cpu, cpu_);
      DARABONBA_PTR_TO_JSON(Instances, instances_);
      DARABONBA_PTR_TO_JSON(IsStateful, isStateful_);
      DARABONBA_PTR_TO_JSON(Mem, mem_);
      DARABONBA_PTR_TO_JSON(MseEnabled, mseEnabled_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(NamespaceName, namespaceName_);
      DARABONBA_PTR_TO_JSON(NewSaeVersion, newSaeVersion_);
      DARABONBA_PTR_TO_JSON(ProgrammingLanguage, programmingLanguage_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RunningInstances, runningInstances_);
      DARABONBA_PTR_TO_JSON(ScaleRuleEnabled, scaleRuleEnabled_);
      DARABONBA_PTR_TO_JSON(ScaleRuleType, scaleRuleType_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, ListApplicationsResponseBodyDataApplicationsChildren& obj) { 
      DARABONBA_PTR_FROM_JSON(AppDeletingStatus, appDeletingStatus_);
      DARABONBA_PTR_FROM_JSON(AppDescription, appDescription_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(AppType, appType_);
      DARABONBA_PTR_FROM_JSON(BaseAppId, baseAppId_);
      DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(Instances, instances_);
      DARABONBA_PTR_FROM_JSON(IsStateful, isStateful_);
      DARABONBA_PTR_FROM_JSON(Mem, mem_);
      DARABONBA_PTR_FROM_JSON(MseEnabled, mseEnabled_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(NamespaceName, namespaceName_);
      DARABONBA_PTR_FROM_JSON(NewSaeVersion, newSaeVersion_);
      DARABONBA_PTR_FROM_JSON(ProgrammingLanguage, programmingLanguage_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RunningInstances, runningInstances_);
      DARABONBA_PTR_FROM_JSON(ScaleRuleEnabled, scaleRuleEnabled_);
      DARABONBA_PTR_FROM_JSON(ScaleRuleType, scaleRuleType_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    ListApplicationsResponseBodyDataApplicationsChildren() = default ;
    ListApplicationsResponseBodyDataApplicationsChildren(const ListApplicationsResponseBodyDataApplicationsChildren &) = default ;
    ListApplicationsResponseBodyDataApplicationsChildren(ListApplicationsResponseBodyDataApplicationsChildren &&) = default ;
    ListApplicationsResponseBodyDataApplicationsChildren(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApplicationsResponseBodyDataApplicationsChildren() = default ;
    ListApplicationsResponseBodyDataApplicationsChildren& operator=(const ListApplicationsResponseBodyDataApplicationsChildren &) = default ;
    ListApplicationsResponseBodyDataApplicationsChildren& operator=(ListApplicationsResponseBodyDataApplicationsChildren &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appDeletingStatus_ != nullptr
        && this->appDescription_ != nullptr && this->appId_ != nullptr && this->appName_ != nullptr && this->appType_ != nullptr && this->baseAppId_ != nullptr
        && this->cpu_ != nullptr && this->instances_ != nullptr && this->isStateful_ != nullptr && this->mem_ != nullptr && this->mseEnabled_ != nullptr
        && this->namespaceId_ != nullptr && this->namespaceName_ != nullptr && this->newSaeVersion_ != nullptr && this->programmingLanguage_ != nullptr && this->regionId_ != nullptr
        && this->runningInstances_ != nullptr && this->scaleRuleEnabled_ != nullptr && this->scaleRuleType_ != nullptr && this->tags_ != nullptr; };
    // appDeletingStatus Field Functions 
    bool hasAppDeletingStatus() const { return this->appDeletingStatus_ != nullptr;};
    void deleteAppDeletingStatus() { this->appDeletingStatus_ = nullptr;};
    inline bool appDeletingStatus() const { DARABONBA_PTR_GET_DEFAULT(appDeletingStatus_, false) };
    inline ListApplicationsResponseBodyDataApplicationsChildren& setAppDeletingStatus(bool appDeletingStatus) { DARABONBA_PTR_SET_VALUE(appDeletingStatus_, appDeletingStatus) };


    // appDescription Field Functions 
    bool hasAppDescription() const { return this->appDescription_ != nullptr;};
    void deleteAppDescription() { this->appDescription_ = nullptr;};
    inline string appDescription() const { DARABONBA_PTR_GET_DEFAULT(appDescription_, "") };
    inline ListApplicationsResponseBodyDataApplicationsChildren& setAppDescription(string appDescription) { DARABONBA_PTR_SET_VALUE(appDescription_, appDescription) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ListApplicationsResponseBodyDataApplicationsChildren& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ListApplicationsResponseBodyDataApplicationsChildren& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // appType Field Functions 
    bool hasAppType() const { return this->appType_ != nullptr;};
    void deleteAppType() { this->appType_ = nullptr;};
    inline string appType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
    inline ListApplicationsResponseBodyDataApplicationsChildren& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


    // baseAppId Field Functions 
    bool hasBaseAppId() const { return this->baseAppId_ != nullptr;};
    void deleteBaseAppId() { this->baseAppId_ = nullptr;};
    inline string baseAppId() const { DARABONBA_PTR_GET_DEFAULT(baseAppId_, "") };
    inline ListApplicationsResponseBodyDataApplicationsChildren& setBaseAppId(string baseAppId) { DARABONBA_PTR_SET_VALUE(baseAppId_, baseAppId) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline int32_t cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
    inline ListApplicationsResponseBodyDataApplicationsChildren& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline int32_t instances() const { DARABONBA_PTR_GET_DEFAULT(instances_, 0) };
    inline ListApplicationsResponseBodyDataApplicationsChildren& setInstances(int32_t instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };


    // isStateful Field Functions 
    bool hasIsStateful() const { return this->isStateful_ != nullptr;};
    void deleteIsStateful() { this->isStateful_ = nullptr;};
    inline bool isStateful() const { DARABONBA_PTR_GET_DEFAULT(isStateful_, false) };
    inline ListApplicationsResponseBodyDataApplicationsChildren& setIsStateful(bool isStateful) { DARABONBA_PTR_SET_VALUE(isStateful_, isStateful) };


    // mem Field Functions 
    bool hasMem() const { return this->mem_ != nullptr;};
    void deleteMem() { this->mem_ = nullptr;};
    inline int32_t mem() const { DARABONBA_PTR_GET_DEFAULT(mem_, 0) };
    inline ListApplicationsResponseBodyDataApplicationsChildren& setMem(int32_t mem) { DARABONBA_PTR_SET_VALUE(mem_, mem) };


    // mseEnabled Field Functions 
    bool hasMseEnabled() const { return this->mseEnabled_ != nullptr;};
    void deleteMseEnabled() { this->mseEnabled_ = nullptr;};
    inline bool mseEnabled() const { DARABONBA_PTR_GET_DEFAULT(mseEnabled_, false) };
    inline ListApplicationsResponseBodyDataApplicationsChildren& setMseEnabled(bool mseEnabled) { DARABONBA_PTR_SET_VALUE(mseEnabled_, mseEnabled) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string namespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline ListApplicationsResponseBodyDataApplicationsChildren& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // namespaceName Field Functions 
    bool hasNamespaceName() const { return this->namespaceName_ != nullptr;};
    void deleteNamespaceName() { this->namespaceName_ = nullptr;};
    inline string namespaceName() const { DARABONBA_PTR_GET_DEFAULT(namespaceName_, "") };
    inline ListApplicationsResponseBodyDataApplicationsChildren& setNamespaceName(string namespaceName) { DARABONBA_PTR_SET_VALUE(namespaceName_, namespaceName) };


    // newSaeVersion Field Functions 
    bool hasNewSaeVersion() const { return this->newSaeVersion_ != nullptr;};
    void deleteNewSaeVersion() { this->newSaeVersion_ = nullptr;};
    inline string newSaeVersion() const { DARABONBA_PTR_GET_DEFAULT(newSaeVersion_, "") };
    inline ListApplicationsResponseBodyDataApplicationsChildren& setNewSaeVersion(string newSaeVersion) { DARABONBA_PTR_SET_VALUE(newSaeVersion_, newSaeVersion) };


    // programmingLanguage Field Functions 
    bool hasProgrammingLanguage() const { return this->programmingLanguage_ != nullptr;};
    void deleteProgrammingLanguage() { this->programmingLanguage_ = nullptr;};
    inline string programmingLanguage() const { DARABONBA_PTR_GET_DEFAULT(programmingLanguage_, "") };
    inline ListApplicationsResponseBodyDataApplicationsChildren& setProgrammingLanguage(string programmingLanguage) { DARABONBA_PTR_SET_VALUE(programmingLanguage_, programmingLanguage) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListApplicationsResponseBodyDataApplicationsChildren& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // runningInstances Field Functions 
    bool hasRunningInstances() const { return this->runningInstances_ != nullptr;};
    void deleteRunningInstances() { this->runningInstances_ = nullptr;};
    inline int32_t runningInstances() const { DARABONBA_PTR_GET_DEFAULT(runningInstances_, 0) };
    inline ListApplicationsResponseBodyDataApplicationsChildren& setRunningInstances(int32_t runningInstances) { DARABONBA_PTR_SET_VALUE(runningInstances_, runningInstances) };


    // scaleRuleEnabled Field Functions 
    bool hasScaleRuleEnabled() const { return this->scaleRuleEnabled_ != nullptr;};
    void deleteScaleRuleEnabled() { this->scaleRuleEnabled_ = nullptr;};
    inline bool scaleRuleEnabled() const { DARABONBA_PTR_GET_DEFAULT(scaleRuleEnabled_, false) };
    inline ListApplicationsResponseBodyDataApplicationsChildren& setScaleRuleEnabled(bool scaleRuleEnabled) { DARABONBA_PTR_SET_VALUE(scaleRuleEnabled_, scaleRuleEnabled) };


    // scaleRuleType Field Functions 
    bool hasScaleRuleType() const { return this->scaleRuleType_ != nullptr;};
    void deleteScaleRuleType() { this->scaleRuleType_ = nullptr;};
    inline string scaleRuleType() const { DARABONBA_PTR_GET_DEFAULT(scaleRuleType_, "") };
    inline ListApplicationsResponseBodyDataApplicationsChildren& setScaleRuleType(string scaleRuleType) { DARABONBA_PTR_SET_VALUE(scaleRuleType_, scaleRuleType) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListApplicationsResponseBodyDataApplicationsChildrenTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListApplicationsResponseBodyDataApplicationsChildrenTags>) };
    inline vector<Models::ListApplicationsResponseBodyDataApplicationsChildrenTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListApplicationsResponseBodyDataApplicationsChildrenTags>) };
    inline ListApplicationsResponseBodyDataApplicationsChildren& setTags(const vector<Models::ListApplicationsResponseBodyDataApplicationsChildrenTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListApplicationsResponseBodyDataApplicationsChildren& setTags(vector<Models::ListApplicationsResponseBodyDataApplicationsChildrenTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // If is deleting this application.
    std::shared_ptr<bool> appDeletingStatus_ = nullptr;
    // The application description.
    std::shared_ptr<string> appDescription_ = nullptr;
    // The application ID.
    std::shared_ptr<string> appId_ = nullptr;
    // The application name.
    std::shared_ptr<string> appName_ = nullptr;
    // The way to deploy applications.
    std::shared_ptr<string> appType_ = nullptr;
    // The base application ID.
    std::shared_ptr<string> baseAppId_ = nullptr;
    // The CPU sepcification.
    std::shared_ptr<int32_t> cpu_ = nullptr;
    // The number of instances.
    std::shared_ptr<int32_t> instances_ = nullptr;
    std::shared_ptr<bool> isStateful_ = nullptr;
    // The memory specification.
    std::shared_ptr<int32_t> mem_ = nullptr;
    // If this application has enabled MSE.
    std::shared_ptr<bool> mseEnabled_ = nullptr;
    // The namespace ID.
    std::shared_ptr<string> namespaceId_ = nullptr;
    // The name of the namespace.
    std::shared_ptr<string> namespaceName_ = nullptr;
    // The application edition.
    // 
    // - lite: the lightweight edition.
    // - std: the standard edition.
    // - pro: the professional edition.
    std::shared_ptr<string> newSaeVersion_ = nullptr;
    // The programming language of this application.
    std::shared_ptr<string> programmingLanguage_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The number of instances in running state.
    std::shared_ptr<int32_t> runningInstances_ = nullptr;
    // If the scale rule is enabled.
    std::shared_ptr<bool> scaleRuleEnabled_ = nullptr;
    // The type of the scale rule.
    std::shared_ptr<string> scaleRuleType_ = nullptr;
    // The application tag.
    std::shared_ptr<vector<Models::ListApplicationsResponseBodyDataApplicationsChildrenTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
