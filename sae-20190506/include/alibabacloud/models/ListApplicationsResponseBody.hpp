// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ListApplicationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListApplicationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
    };
    ListApplicationsResponseBody() = default ;
    ListApplicationsResponseBody(const ListApplicationsResponseBody &) = default ;
    ListApplicationsResponseBody(ListApplicationsResponseBody &&) = default ;
    ListApplicationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApplicationsResponseBody() = default ;
    ListApplicationsResponseBody& operator=(const ListApplicationsResponseBody &) = default ;
    ListApplicationsResponseBody& operator=(ListApplicationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Applications, applications_);
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Applications, applications_);
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Applications : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Applications& obj) { 
          DARABONBA_PTR_TO_JSON(AppDeletingStatus, appDeletingStatus_);
          DARABONBA_PTR_TO_JSON(AppDescription, appDescription_);
          DARABONBA_PTR_TO_JSON(AppId, appId_);
          DARABONBA_PTR_TO_JSON(AppName, appName_);
          DARABONBA_PTR_TO_JSON(AppType, appType_);
          DARABONBA_PTR_TO_JSON(BaseAppId, baseAppId_);
          DARABONBA_PTR_TO_JSON(Children, children_);
          DARABONBA_PTR_TO_JSON(Cpu, cpu_);
          DARABONBA_PTR_TO_JSON(DiskSize, diskSize_);
          DARABONBA_PTR_TO_JSON(EnableIdle, enableIdle_);
          DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
          DARABONBA_PTR_TO_JSON(Instances, instances_);
          DARABONBA_PTR_TO_JSON(IsStateful, isStateful_);
          DARABONBA_PTR_TO_JSON(Mem, mem_);
          DARABONBA_PTR_TO_JSON(MseEnabled, mseEnabled_);
          DARABONBA_PTR_TO_JSON(MseNamespaceId, mseNamespaceId_);
          DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
          DARABONBA_PTR_TO_JSON(NamespaceName, namespaceName_);
          DARABONBA_PTR_TO_JSON(NewSaeVersion, newSaeVersion_);
          DARABONBA_PTR_TO_JSON(PackageUrl, packageUrl_);
          DARABONBA_PTR_TO_JSON(ProgrammingLanguage, programmingLanguage_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
          DARABONBA_PTR_TO_JSON(RunningInstances, runningInstances_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        };
        friend void from_json(const Darabonba::Json& j, Applications& obj) { 
          DARABONBA_PTR_FROM_JSON(AppDeletingStatus, appDeletingStatus_);
          DARABONBA_PTR_FROM_JSON(AppDescription, appDescription_);
          DARABONBA_PTR_FROM_JSON(AppId, appId_);
          DARABONBA_PTR_FROM_JSON(AppName, appName_);
          DARABONBA_PTR_FROM_JSON(AppType, appType_);
          DARABONBA_PTR_FROM_JSON(BaseAppId, baseAppId_);
          DARABONBA_PTR_FROM_JSON(Children, children_);
          DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
          DARABONBA_PTR_FROM_JSON(DiskSize, diskSize_);
          DARABONBA_PTR_FROM_JSON(EnableIdle, enableIdle_);
          DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
          DARABONBA_PTR_FROM_JSON(Instances, instances_);
          DARABONBA_PTR_FROM_JSON(IsStateful, isStateful_);
          DARABONBA_PTR_FROM_JSON(Mem, mem_);
          DARABONBA_PTR_FROM_JSON(MseEnabled, mseEnabled_);
          DARABONBA_PTR_FROM_JSON(MseNamespaceId, mseNamespaceId_);
          DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
          DARABONBA_PTR_FROM_JSON(NamespaceName, namespaceName_);
          DARABONBA_PTR_FROM_JSON(NewSaeVersion, newSaeVersion_);
          DARABONBA_PTR_FROM_JSON(PackageUrl, packageUrl_);
          DARABONBA_PTR_FROM_JSON(ProgrammingLanguage, programmingLanguage_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
          DARABONBA_PTR_FROM_JSON(RunningInstances, runningInstances_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        };
        Applications() = default ;
        Applications(const Applications &) = default ;
        Applications(Applications &&) = default ;
        Applications(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Applications() = default ;
        Applications& operator=(const Applications &) = default ;
        Applications& operator=(Applications &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Tags : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Tags& obj) { 
            DARABONBA_PTR_TO_JSON(Key, key_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Tags& obj) { 
            DARABONBA_PTR_FROM_JSON(Key, key_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          Tags() = default ;
          Tags(const Tags &) = default ;
          Tags(Tags &&) = default ;
          Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Tags() = default ;
          Tags& operator=(const Tags &) = default ;
          Tags& operator=(Tags &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
          // key Field Functions 
          bool hasKey() const { return this->key_ != nullptr;};
          void deleteKey() { this->key_ = nullptr;};
          inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
          inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The key of the tag.
          shared_ptr<string> key_ {};
          // The value of the tag.
          shared_ptr<string> value_ {};
        };

        class Children : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Children& obj) { 
            DARABONBA_PTR_TO_JSON(AppDeletingStatus, appDeletingStatus_);
            DARABONBA_PTR_TO_JSON(AppDescription, appDescription_);
            DARABONBA_PTR_TO_JSON(AppId, appId_);
            DARABONBA_PTR_TO_JSON(AppName, appName_);
            DARABONBA_PTR_TO_JSON(AppType, appType_);
            DARABONBA_PTR_TO_JSON(BaseAppId, baseAppId_);
            DARABONBA_PTR_TO_JSON(Cpu, cpu_);
            DARABONBA_PTR_TO_JSON(EnableIdle, enableIdle_);
            DARABONBA_PTR_TO_JSON(Instances, instances_);
            DARABONBA_PTR_TO_JSON(IsStateful, isStateful_);
            DARABONBA_PTR_TO_JSON(Mem, mem_);
            DARABONBA_PTR_TO_JSON(MseEnabled, mseEnabled_);
            DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
            DARABONBA_PTR_TO_JSON(NamespaceName, namespaceName_);
            DARABONBA_PTR_TO_JSON(NewSaeVersion, newSaeVersion_);
            DARABONBA_PTR_TO_JSON(ProgrammingLanguage, programmingLanguage_);
            DARABONBA_PTR_TO_JSON(RegionId, regionId_);
            DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
            DARABONBA_PTR_TO_JSON(RunningInstances, runningInstances_);
            DARABONBA_PTR_TO_JSON(ScaleRuleEnabled, scaleRuleEnabled_);
            DARABONBA_PTR_TO_JSON(ScaleRuleType, scaleRuleType_);
            DARABONBA_PTR_TO_JSON(Tags, tags_);
          };
          friend void from_json(const Darabonba::Json& j, Children& obj) { 
            DARABONBA_PTR_FROM_JSON(AppDeletingStatus, appDeletingStatus_);
            DARABONBA_PTR_FROM_JSON(AppDescription, appDescription_);
            DARABONBA_PTR_FROM_JSON(AppId, appId_);
            DARABONBA_PTR_FROM_JSON(AppName, appName_);
            DARABONBA_PTR_FROM_JSON(AppType, appType_);
            DARABONBA_PTR_FROM_JSON(BaseAppId, baseAppId_);
            DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
            DARABONBA_PTR_FROM_JSON(EnableIdle, enableIdle_);
            DARABONBA_PTR_FROM_JSON(Instances, instances_);
            DARABONBA_PTR_FROM_JSON(IsStateful, isStateful_);
            DARABONBA_PTR_FROM_JSON(Mem, mem_);
            DARABONBA_PTR_FROM_JSON(MseEnabled, mseEnabled_);
            DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
            DARABONBA_PTR_FROM_JSON(NamespaceName, namespaceName_);
            DARABONBA_PTR_FROM_JSON(NewSaeVersion, newSaeVersion_);
            DARABONBA_PTR_FROM_JSON(ProgrammingLanguage, programmingLanguage_);
            DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
            DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
            DARABONBA_PTR_FROM_JSON(RunningInstances, runningInstances_);
            DARABONBA_PTR_FROM_JSON(ScaleRuleEnabled, scaleRuleEnabled_);
            DARABONBA_PTR_FROM_JSON(ScaleRuleType, scaleRuleType_);
            DARABONBA_PTR_FROM_JSON(Tags, tags_);
          };
          Children() = default ;
          Children(const Children &) = default ;
          Children(Children &&) = default ;
          Children(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Children() = default ;
          Children& operator=(const Children &) = default ;
          Children& operator=(Children &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Tags : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Tags& obj) { 
              DARABONBA_PTR_TO_JSON(Key, key_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, Tags& obj) { 
              DARABONBA_PTR_FROM_JSON(Key, key_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            Tags() = default ;
            Tags(const Tags &) = default ;
            Tags(Tags &&) = default ;
            Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Tags() = default ;
            Tags& operator=(const Tags &) = default ;
            Tags& operator=(Tags &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
            // key Field Functions 
            bool hasKey() const { return this->key_ != nullptr;};
            void deleteKey() { this->key_ = nullptr;};
            inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
            inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            // The tag key.
            shared_ptr<string> key_ {};
            // The tag value.
            shared_ptr<string> value_ {};
          };

          virtual bool empty() const override { return this->appDeletingStatus_ == nullptr
        && this->appDescription_ == nullptr && this->appId_ == nullptr && this->appName_ == nullptr && this->appType_ == nullptr && this->baseAppId_ == nullptr
        && this->cpu_ == nullptr && this->enableIdle_ == nullptr && this->instances_ == nullptr && this->isStateful_ == nullptr && this->mem_ == nullptr
        && this->mseEnabled_ == nullptr && this->namespaceId_ == nullptr && this->namespaceName_ == nullptr && this->newSaeVersion_ == nullptr && this->programmingLanguage_ == nullptr
        && this->regionId_ == nullptr && this->resourceType_ == nullptr && this->runningInstances_ == nullptr && this->scaleRuleEnabled_ == nullptr && this->scaleRuleType_ == nullptr
        && this->tags_ == nullptr; };
          // appDeletingStatus Field Functions 
          bool hasAppDeletingStatus() const { return this->appDeletingStatus_ != nullptr;};
          void deleteAppDeletingStatus() { this->appDeletingStatus_ = nullptr;};
          inline bool getAppDeletingStatus() const { DARABONBA_PTR_GET_DEFAULT(appDeletingStatus_, false) };
          inline Children& setAppDeletingStatus(bool appDeletingStatus) { DARABONBA_PTR_SET_VALUE(appDeletingStatus_, appDeletingStatus) };


          // appDescription Field Functions 
          bool hasAppDescription() const { return this->appDescription_ != nullptr;};
          void deleteAppDescription() { this->appDescription_ = nullptr;};
          inline string getAppDescription() const { DARABONBA_PTR_GET_DEFAULT(appDescription_, "") };
          inline Children& setAppDescription(string appDescription) { DARABONBA_PTR_SET_VALUE(appDescription_, appDescription) };


          // appId Field Functions 
          bool hasAppId() const { return this->appId_ != nullptr;};
          void deleteAppId() { this->appId_ = nullptr;};
          inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
          inline Children& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


          // appName Field Functions 
          bool hasAppName() const { return this->appName_ != nullptr;};
          void deleteAppName() { this->appName_ = nullptr;};
          inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
          inline Children& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


          // appType Field Functions 
          bool hasAppType() const { return this->appType_ != nullptr;};
          void deleteAppType() { this->appType_ = nullptr;};
          inline string getAppType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
          inline Children& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


          // baseAppId Field Functions 
          bool hasBaseAppId() const { return this->baseAppId_ != nullptr;};
          void deleteBaseAppId() { this->baseAppId_ = nullptr;};
          inline string getBaseAppId() const { DARABONBA_PTR_GET_DEFAULT(baseAppId_, "") };
          inline Children& setBaseAppId(string baseAppId) { DARABONBA_PTR_SET_VALUE(baseAppId_, baseAppId) };


          // cpu Field Functions 
          bool hasCpu() const { return this->cpu_ != nullptr;};
          void deleteCpu() { this->cpu_ = nullptr;};
          inline int32_t getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
          inline Children& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


          // enableIdle Field Functions 
          bool hasEnableIdle() const { return this->enableIdle_ != nullptr;};
          void deleteEnableIdle() { this->enableIdle_ = nullptr;};
          inline string getEnableIdle() const { DARABONBA_PTR_GET_DEFAULT(enableIdle_, "") };
          inline Children& setEnableIdle(string enableIdle) { DARABONBA_PTR_SET_VALUE(enableIdle_, enableIdle) };


          // instances Field Functions 
          bool hasInstances() const { return this->instances_ != nullptr;};
          void deleteInstances() { this->instances_ = nullptr;};
          inline int32_t getInstances() const { DARABONBA_PTR_GET_DEFAULT(instances_, 0) };
          inline Children& setInstances(int32_t instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };


          // isStateful Field Functions 
          bool hasIsStateful() const { return this->isStateful_ != nullptr;};
          void deleteIsStateful() { this->isStateful_ = nullptr;};
          inline bool getIsStateful() const { DARABONBA_PTR_GET_DEFAULT(isStateful_, false) };
          inline Children& setIsStateful(bool isStateful) { DARABONBA_PTR_SET_VALUE(isStateful_, isStateful) };


          // mem Field Functions 
          bool hasMem() const { return this->mem_ != nullptr;};
          void deleteMem() { this->mem_ = nullptr;};
          inline int32_t getMem() const { DARABONBA_PTR_GET_DEFAULT(mem_, 0) };
          inline Children& setMem(int32_t mem) { DARABONBA_PTR_SET_VALUE(mem_, mem) };


          // mseEnabled Field Functions 
          bool hasMseEnabled() const { return this->mseEnabled_ != nullptr;};
          void deleteMseEnabled() { this->mseEnabled_ = nullptr;};
          inline bool getMseEnabled() const { DARABONBA_PTR_GET_DEFAULT(mseEnabled_, false) };
          inline Children& setMseEnabled(bool mseEnabled) { DARABONBA_PTR_SET_VALUE(mseEnabled_, mseEnabled) };


          // namespaceId Field Functions 
          bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
          void deleteNamespaceId() { this->namespaceId_ = nullptr;};
          inline string getNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
          inline Children& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


          // namespaceName Field Functions 
          bool hasNamespaceName() const { return this->namespaceName_ != nullptr;};
          void deleteNamespaceName() { this->namespaceName_ = nullptr;};
          inline string getNamespaceName() const { DARABONBA_PTR_GET_DEFAULT(namespaceName_, "") };
          inline Children& setNamespaceName(string namespaceName) { DARABONBA_PTR_SET_VALUE(namespaceName_, namespaceName) };


          // newSaeVersion Field Functions 
          bool hasNewSaeVersion() const { return this->newSaeVersion_ != nullptr;};
          void deleteNewSaeVersion() { this->newSaeVersion_ = nullptr;};
          inline string getNewSaeVersion() const { DARABONBA_PTR_GET_DEFAULT(newSaeVersion_, "") };
          inline Children& setNewSaeVersion(string newSaeVersion) { DARABONBA_PTR_SET_VALUE(newSaeVersion_, newSaeVersion) };


          // programmingLanguage Field Functions 
          bool hasProgrammingLanguage() const { return this->programmingLanguage_ != nullptr;};
          void deleteProgrammingLanguage() { this->programmingLanguage_ = nullptr;};
          inline string getProgrammingLanguage() const { DARABONBA_PTR_GET_DEFAULT(programmingLanguage_, "") };
          inline Children& setProgrammingLanguage(string programmingLanguage) { DARABONBA_PTR_SET_VALUE(programmingLanguage_, programmingLanguage) };


          // regionId Field Functions 
          bool hasRegionId() const { return this->regionId_ != nullptr;};
          void deleteRegionId() { this->regionId_ = nullptr;};
          inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
          inline Children& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


          // resourceType Field Functions 
          bool hasResourceType() const { return this->resourceType_ != nullptr;};
          void deleteResourceType() { this->resourceType_ = nullptr;};
          inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
          inline Children& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


          // runningInstances Field Functions 
          bool hasRunningInstances() const { return this->runningInstances_ != nullptr;};
          void deleteRunningInstances() { this->runningInstances_ = nullptr;};
          inline int32_t getRunningInstances() const { DARABONBA_PTR_GET_DEFAULT(runningInstances_, 0) };
          inline Children& setRunningInstances(int32_t runningInstances) { DARABONBA_PTR_SET_VALUE(runningInstances_, runningInstances) };


          // scaleRuleEnabled Field Functions 
          bool hasScaleRuleEnabled() const { return this->scaleRuleEnabled_ != nullptr;};
          void deleteScaleRuleEnabled() { this->scaleRuleEnabled_ = nullptr;};
          inline bool getScaleRuleEnabled() const { DARABONBA_PTR_GET_DEFAULT(scaleRuleEnabled_, false) };
          inline Children& setScaleRuleEnabled(bool scaleRuleEnabled) { DARABONBA_PTR_SET_VALUE(scaleRuleEnabled_, scaleRuleEnabled) };


          // scaleRuleType Field Functions 
          bool hasScaleRuleType() const { return this->scaleRuleType_ != nullptr;};
          void deleteScaleRuleType() { this->scaleRuleType_ = nullptr;};
          inline string getScaleRuleType() const { DARABONBA_PTR_GET_DEFAULT(scaleRuleType_, "") };
          inline Children& setScaleRuleType(string scaleRuleType) { DARABONBA_PTR_SET_VALUE(scaleRuleType_, scaleRuleType) };


          // tags Field Functions 
          bool hasTags() const { return this->tags_ != nullptr;};
          void deleteTags() { this->tags_ = nullptr;};
          inline const vector<Children::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Children::Tags>) };
          inline vector<Children::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Children::Tags>) };
          inline Children& setTags(const vector<Children::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
          inline Children& setTags(vector<Children::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        protected:
          // If is deleting this application.
          shared_ptr<bool> appDeletingStatus_ {};
          // The application description.
          shared_ptr<string> appDescription_ {};
          // The application ID.
          shared_ptr<string> appId_ {};
          // The application name.
          shared_ptr<string> appName_ {};
          // The way to deploy applications.
          shared_ptr<string> appType_ {};
          // The base application ID.
          shared_ptr<string> baseAppId_ {};
          // The CPU sepcification.
          shared_ptr<int32_t> cpu_ {};
          shared_ptr<string> enableIdle_ {};
          // The number of instances.
          shared_ptr<int32_t> instances_ {};
          shared_ptr<bool> isStateful_ {};
          // The memory specification.
          shared_ptr<int32_t> mem_ {};
          // If this application has enabled MSE.
          shared_ptr<bool> mseEnabled_ {};
          // The namespace ID.
          shared_ptr<string> namespaceId_ {};
          // The name of the namespace.
          shared_ptr<string> namespaceName_ {};
          // The application edition.
          // 
          // - lite: the lightweight edition.
          // - std: the standard edition.
          // - pro: the professional edition.
          shared_ptr<string> newSaeVersion_ {};
          // The programming language of this application.
          shared_ptr<string> programmingLanguage_ {};
          // The region ID.
          shared_ptr<string> regionId_ {};
          shared_ptr<string> resourceType_ {};
          // The number of instances in running state.
          shared_ptr<int32_t> runningInstances_ {};
          // If the scale rule is enabled.
          shared_ptr<bool> scaleRuleEnabled_ {};
          // The type of the scale rule.
          shared_ptr<string> scaleRuleType_ {};
          // The application tag.
          shared_ptr<vector<Children::Tags>> tags_ {};
        };

        virtual bool empty() const override { return this->appDeletingStatus_ == nullptr
        && this->appDescription_ == nullptr && this->appId_ == nullptr && this->appName_ == nullptr && this->appType_ == nullptr && this->baseAppId_ == nullptr
        && this->children_ == nullptr && this->cpu_ == nullptr && this->diskSize_ == nullptr && this->enableIdle_ == nullptr && this->imageUrl_ == nullptr
        && this->instances_ == nullptr && this->isStateful_ == nullptr && this->mem_ == nullptr && this->mseEnabled_ == nullptr && this->mseNamespaceId_ == nullptr
        && this->namespaceId_ == nullptr && this->namespaceName_ == nullptr && this->newSaeVersion_ == nullptr && this->packageUrl_ == nullptr && this->programmingLanguage_ == nullptr
        && this->regionId_ == nullptr && this->resourceType_ == nullptr && this->runningInstances_ == nullptr && this->tags_ == nullptr && this->vpcId_ == nullptr; };
        // appDeletingStatus Field Functions 
        bool hasAppDeletingStatus() const { return this->appDeletingStatus_ != nullptr;};
        void deleteAppDeletingStatus() { this->appDeletingStatus_ = nullptr;};
        inline bool getAppDeletingStatus() const { DARABONBA_PTR_GET_DEFAULT(appDeletingStatus_, false) };
        inline Applications& setAppDeletingStatus(bool appDeletingStatus) { DARABONBA_PTR_SET_VALUE(appDeletingStatus_, appDeletingStatus) };


        // appDescription Field Functions 
        bool hasAppDescription() const { return this->appDescription_ != nullptr;};
        void deleteAppDescription() { this->appDescription_ = nullptr;};
        inline string getAppDescription() const { DARABONBA_PTR_GET_DEFAULT(appDescription_, "") };
        inline Applications& setAppDescription(string appDescription) { DARABONBA_PTR_SET_VALUE(appDescription_, appDescription) };


        // appId Field Functions 
        bool hasAppId() const { return this->appId_ != nullptr;};
        void deleteAppId() { this->appId_ = nullptr;};
        inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
        inline Applications& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


        // appName Field Functions 
        bool hasAppName() const { return this->appName_ != nullptr;};
        void deleteAppName() { this->appName_ = nullptr;};
        inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
        inline Applications& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


        // appType Field Functions 
        bool hasAppType() const { return this->appType_ != nullptr;};
        void deleteAppType() { this->appType_ = nullptr;};
        inline string getAppType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
        inline Applications& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


        // baseAppId Field Functions 
        bool hasBaseAppId() const { return this->baseAppId_ != nullptr;};
        void deleteBaseAppId() { this->baseAppId_ = nullptr;};
        inline string getBaseAppId() const { DARABONBA_PTR_GET_DEFAULT(baseAppId_, "") };
        inline Applications& setBaseAppId(string baseAppId) { DARABONBA_PTR_SET_VALUE(baseAppId_, baseAppId) };


        // children Field Functions 
        bool hasChildren() const { return this->children_ != nullptr;};
        void deleteChildren() { this->children_ = nullptr;};
        inline const vector<Applications::Children> & getChildren() const { DARABONBA_PTR_GET_CONST(children_, vector<Applications::Children>) };
        inline vector<Applications::Children> getChildren() { DARABONBA_PTR_GET(children_, vector<Applications::Children>) };
        inline Applications& setChildren(const vector<Applications::Children> & children) { DARABONBA_PTR_SET_VALUE(children_, children) };
        inline Applications& setChildren(vector<Applications::Children> && children) { DARABONBA_PTR_SET_RVALUE(children_, children) };


        // cpu Field Functions 
        bool hasCpu() const { return this->cpu_ != nullptr;};
        void deleteCpu() { this->cpu_ = nullptr;};
        inline int32_t getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
        inline Applications& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


        // diskSize Field Functions 
        bool hasDiskSize() const { return this->diskSize_ != nullptr;};
        void deleteDiskSize() { this->diskSize_ = nullptr;};
        inline int32_t getDiskSize() const { DARABONBA_PTR_GET_DEFAULT(diskSize_, 0) };
        inline Applications& setDiskSize(int32_t diskSize) { DARABONBA_PTR_SET_VALUE(diskSize_, diskSize) };


        // enableIdle Field Functions 
        bool hasEnableIdle() const { return this->enableIdle_ != nullptr;};
        void deleteEnableIdle() { this->enableIdle_ = nullptr;};
        inline string getEnableIdle() const { DARABONBA_PTR_GET_DEFAULT(enableIdle_, "") };
        inline Applications& setEnableIdle(string enableIdle) { DARABONBA_PTR_SET_VALUE(enableIdle_, enableIdle) };


        // imageUrl Field Functions 
        bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
        void deleteImageUrl() { this->imageUrl_ = nullptr;};
        inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
        inline Applications& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


        // instances Field Functions 
        bool hasInstances() const { return this->instances_ != nullptr;};
        void deleteInstances() { this->instances_ = nullptr;};
        inline int32_t getInstances() const { DARABONBA_PTR_GET_DEFAULT(instances_, 0) };
        inline Applications& setInstances(int32_t instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };


        // isStateful Field Functions 
        bool hasIsStateful() const { return this->isStateful_ != nullptr;};
        void deleteIsStateful() { this->isStateful_ = nullptr;};
        inline bool getIsStateful() const { DARABONBA_PTR_GET_DEFAULT(isStateful_, false) };
        inline Applications& setIsStateful(bool isStateful) { DARABONBA_PTR_SET_VALUE(isStateful_, isStateful) };


        // mem Field Functions 
        bool hasMem() const { return this->mem_ != nullptr;};
        void deleteMem() { this->mem_ = nullptr;};
        inline int32_t getMem() const { DARABONBA_PTR_GET_DEFAULT(mem_, 0) };
        inline Applications& setMem(int32_t mem) { DARABONBA_PTR_SET_VALUE(mem_, mem) };


        // mseEnabled Field Functions 
        bool hasMseEnabled() const { return this->mseEnabled_ != nullptr;};
        void deleteMseEnabled() { this->mseEnabled_ = nullptr;};
        inline bool getMseEnabled() const { DARABONBA_PTR_GET_DEFAULT(mseEnabled_, false) };
        inline Applications& setMseEnabled(bool mseEnabled) { DARABONBA_PTR_SET_VALUE(mseEnabled_, mseEnabled) };


        // mseNamespaceId Field Functions 
        bool hasMseNamespaceId() const { return this->mseNamespaceId_ != nullptr;};
        void deleteMseNamespaceId() { this->mseNamespaceId_ = nullptr;};
        inline string getMseNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(mseNamespaceId_, "") };
        inline Applications& setMseNamespaceId(string mseNamespaceId) { DARABONBA_PTR_SET_VALUE(mseNamespaceId_, mseNamespaceId) };


        // namespaceId Field Functions 
        bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
        void deleteNamespaceId() { this->namespaceId_ = nullptr;};
        inline string getNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
        inline Applications& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


        // namespaceName Field Functions 
        bool hasNamespaceName() const { return this->namespaceName_ != nullptr;};
        void deleteNamespaceName() { this->namespaceName_ = nullptr;};
        inline string getNamespaceName() const { DARABONBA_PTR_GET_DEFAULT(namespaceName_, "") };
        inline Applications& setNamespaceName(string namespaceName) { DARABONBA_PTR_SET_VALUE(namespaceName_, namespaceName) };


        // newSaeVersion Field Functions 
        bool hasNewSaeVersion() const { return this->newSaeVersion_ != nullptr;};
        void deleteNewSaeVersion() { this->newSaeVersion_ = nullptr;};
        inline string getNewSaeVersion() const { DARABONBA_PTR_GET_DEFAULT(newSaeVersion_, "") };
        inline Applications& setNewSaeVersion(string newSaeVersion) { DARABONBA_PTR_SET_VALUE(newSaeVersion_, newSaeVersion) };


        // packageUrl Field Functions 
        bool hasPackageUrl() const { return this->packageUrl_ != nullptr;};
        void deletePackageUrl() { this->packageUrl_ = nullptr;};
        inline string getPackageUrl() const { DARABONBA_PTR_GET_DEFAULT(packageUrl_, "") };
        inline Applications& setPackageUrl(string packageUrl) { DARABONBA_PTR_SET_VALUE(packageUrl_, packageUrl) };


        // programmingLanguage Field Functions 
        bool hasProgrammingLanguage() const { return this->programmingLanguage_ != nullptr;};
        void deleteProgrammingLanguage() { this->programmingLanguage_ = nullptr;};
        inline string getProgrammingLanguage() const { DARABONBA_PTR_GET_DEFAULT(programmingLanguage_, "") };
        inline Applications& setProgrammingLanguage(string programmingLanguage) { DARABONBA_PTR_SET_VALUE(programmingLanguage_, programmingLanguage) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline Applications& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // resourceType Field Functions 
        bool hasResourceType() const { return this->resourceType_ != nullptr;};
        void deleteResourceType() { this->resourceType_ = nullptr;};
        inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
        inline Applications& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


        // runningInstances Field Functions 
        bool hasRunningInstances() const { return this->runningInstances_ != nullptr;};
        void deleteRunningInstances() { this->runningInstances_ = nullptr;};
        inline int32_t getRunningInstances() const { DARABONBA_PTR_GET_DEFAULT(runningInstances_, 0) };
        inline Applications& setRunningInstances(int32_t runningInstances) { DARABONBA_PTR_SET_VALUE(runningInstances_, runningInstances) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const vector<Applications::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Applications::Tags>) };
        inline vector<Applications::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Applications::Tags>) };
        inline Applications& setTags(const vector<Applications::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline Applications& setTags(vector<Applications::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline Applications& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      protected:
        // Indicates whether the application is being deleted. Valid values:
        // 
        // *   **true**: The application is being deleted.
        // *   **false**: The application is not being deleted.
        shared_ptr<bool> appDeletingStatus_ {};
        // The description of the application.
        shared_ptr<string> appDescription_ {};
        // The application ID.
        shared_ptr<string> appId_ {};
        // The application name.
        shared_ptr<string> appName_ {};
        // The application type.
        shared_ptr<string> appType_ {};
        // The base app ID. Only gray-release applications have this property.
        shared_ptr<string> baseAppId_ {};
        // The gray-release application list of this application.
        shared_ptr<vector<Applications::Children>> children_ {};
        // The CPU specifications that are required for each instance. Unit: millicores. This parameter cannot be set to 0. Valid values:
        // 
        // *   **500**
        // *   **1000**
        // *   **2000**
        // *   **4000**
        // *   **8000**
        // *   **16000**
        // *   **32000**
        shared_ptr<int32_t> cpu_ {};
        // The disk size. Unit: GB.
        shared_ptr<int32_t> diskSize_ {};
        // If the idle mode is enabled.
        shared_ptr<string> enableIdle_ {};
        // The image URL.
        shared_ptr<string> imageUrl_ {};
        // The number of application instances.
        shared_ptr<int32_t> instances_ {};
        shared_ptr<bool> isStateful_ {};
        // The memory size that is required by each instance. Unit: MB. This parameter cannot be set to 0. The values of this parameter correspond to the values of the Cpu parameter:
        // 
        // *   This parameter is set to **1024** if the Cpu parameter is set to 500 or 1000.
        // *   This parameter is set to **2048** if the Cpu parameter is set to 500, 1000, or 2000.
        // *   This parameter is set to **4096** if the Cpu parameter is set to 1000, 2000, or 4000.
        // *   This parameter is set to **8192** if the Cpu parameter is set to 2000, 4000, or 8000.
        // *   This parameter is set to **12288** if the Cpu parameter is set to 12000.
        // *   This parameter is set to **16384** if the Cpu parameter is set to 4000, 8000, or 16000.
        // *   This parameter is set to **24576** if the Cpu parameter is set to 12000.
        // *   This parameter is set to **32768** if the Cpu parameter is set to 16000.
        // *   This parameter is set to **65536** if the Cpu parameter is set to 8000, 16000, or 32000.
        // *   This parameter is set to **131072** if the Cpu parameter is set to 32000.
        shared_ptr<int32_t> mem_ {};
        // The application has enabled MSE or not.
        shared_ptr<bool> mseEnabled_ {};
        // The name space of MSE:
        // 
        // - default: the free edition.
        // - sae-pro: the professional edition.
        // - sae-ent: the enterprise eiditon.
        shared_ptr<string> mseNamespaceId_ {};
        // The namespace ID.
        shared_ptr<string> namespaceId_ {};
        // The name of the namespace.
        shared_ptr<string> namespaceName_ {};
        // The application edition.
        // 
        // - lite: the lightweight edition.
        // - std: the standard edition.
        // - pro: the professional edition.
        shared_ptr<string> newSaeVersion_ {};
        // The package URL.
        shared_ptr<string> packageUrl_ {};
        // The programming language of the application.
        shared_ptr<string> programmingLanguage_ {};
        // The region ID.
        shared_ptr<string> regionId_ {};
        shared_ptr<string> resourceType_ {};
        // The number of running instances.
        shared_ptr<int32_t> runningInstances_ {};
        // The tags of the application.
        shared_ptr<vector<Applications::Tags>> tags_ {};
        // VPC ID.
        shared_ptr<string> vpcId_ {};
      };

      virtual bool empty() const override { return this->applications_ == nullptr
        && this->currentPage_ == nullptr && this->pageSize_ == nullptr && this->totalSize_ == nullptr; };
      // applications Field Functions 
      bool hasApplications() const { return this->applications_ != nullptr;};
      void deleteApplications() { this->applications_ = nullptr;};
      inline const vector<Data::Applications> & getApplications() const { DARABONBA_PTR_GET_CONST(applications_, vector<Data::Applications>) };
      inline vector<Data::Applications> getApplications() { DARABONBA_PTR_GET(applications_, vector<Data::Applications>) };
      inline Data& setApplications(const vector<Data::Applications> & applications) { DARABONBA_PTR_SET_VALUE(applications_, applications) };
      inline Data& setApplications(vector<Data::Applications> && applications) { DARABONBA_PTR_SET_RVALUE(applications_, applications) };


      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline Data& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalSize Field Functions 
      bool hasTotalSize() const { return this->totalSize_ != nullptr;};
      void deleteTotalSize() { this->totalSize_ = nullptr;};
      inline int32_t getTotalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0) };
      inline Data& setTotalSize(int32_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


    protected:
      // The queried applications.
      shared_ptr<vector<Data::Applications>> applications_ {};
      // The current page number.
      shared_ptr<int32_t> currentPage_ {};
      // The number of records in each page.
      shared_ptr<int32_t> pageSize_ {};
      // The number of applications.
      shared_ptr<int32_t> totalSize_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->currentPage_ == nullptr && this->data_ == nullptr && this->errorCode_ == nullptr && this->message_ == nullptr && this->pageSize_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr && this->totalSize_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListApplicationsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListApplicationsResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListApplicationsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListApplicationsResponseBody::Data) };
    inline ListApplicationsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListApplicationsResponseBody::Data) };
    inline ListApplicationsResponseBody& setData(const ListApplicationsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListApplicationsResponseBody& setData(ListApplicationsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListApplicationsResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListApplicationsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListApplicationsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListApplicationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListApplicationsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalSize Field Functions 
    bool hasTotalSize() const { return this->totalSize_ != nullptr;};
    void deleteTotalSize() { this->totalSize_ = nullptr;};
    inline int32_t getTotalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0) };
    inline ListApplicationsResponseBody& setTotalSize(int32_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


  protected:
    // The HTTP status code. Take note of the following rules:
    // 
    // - **2xx**: The call was successful.
    // - **3xx**: The call was redirected.
    // - **4xx**: The call failed.
    // - **5xx**: A server error occurred.
    shared_ptr<string> code_ {};
    // The current page number.
    shared_ptr<int32_t> currentPage_ {};
    // The queried applications.
    shared_ptr<ListApplicationsResponseBody::Data> data_ {};
    // The returned error code. Valid values:
    // 
    // *   If the call is successful, the **ErrorCode** parameter is not returned.
    // *   If the call fails, the **ErrorCode** parameter is returned. For more information, see the "**Error codes**" section of this topic.
    shared_ptr<string> errorCode_ {};
    // Additional message.
    shared_ptr<string> message_ {};
    // The page size.
    shared_ptr<int32_t> pageSize_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    shared_ptr<bool> success_ {};
    // The number of applications.
    shared_ptr<int32_t> totalSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
