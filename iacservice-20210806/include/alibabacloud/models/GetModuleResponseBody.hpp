// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMODULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMODULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class GetModuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetModuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetModuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetModuleResponseBody() = default ;
    GetModuleResponseBody(const GetModuleResponseBody &) = default ;
    GetModuleResponseBody(GetModuleResponseBody &&) = default ;
    GetModuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetModuleResponseBody() = default ;
    GetModuleResponseBody& operator=(const GetModuleResponseBody &) = default ;
    GetModuleResponseBody& operator=(GetModuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(createTime, createTime_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(groupInfo, groupInfo_);
        DARABONBA_PTR_TO_JSON(latestVersion, latestVersion_);
        DARABONBA_PTR_TO_JSON(moduleId, moduleId_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(outputPath, outputPath_);
        DARABONBA_PTR_TO_JSON(source, source_);
        DARABONBA_PTR_TO_JSON(sourcePath, sourcePath_);
        DARABONBA_PTR_TO_JSON(statePath, statePath_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(tags, tags_);
        DARABONBA_PTR_TO_JSON(versionStrategy, versionStrategy_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(createTime, createTime_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(groupInfo, groupInfo_);
        DARABONBA_PTR_FROM_JSON(latestVersion, latestVersion_);
        DARABONBA_PTR_FROM_JSON(moduleId, moduleId_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(outputPath, outputPath_);
        DARABONBA_PTR_FROM_JSON(source, source_);
        DARABONBA_PTR_FROM_JSON(sourcePath, sourcePath_);
        DARABONBA_PTR_FROM_JSON(statePath, statePath_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(tags, tags_);
        DARABONBA_PTR_FROM_JSON(versionStrategy, versionStrategy_);
      };
      Module() = default ;
      Module(const Module &) = default ;
      Module(Module &&) = default ;
      Module(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Module() = default ;
      Module& operator=(const Module &) = default ;
      Module& operator=(Module &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(tagKey, tagKey_);
          DARABONBA_PTR_TO_JSON(tagValue, tagValue_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(tagKey, tagKey_);
          DARABONBA_PTR_FROM_JSON(tagValue, tagValue_);
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
        virtual bool empty() const override { return this->tagKey_ == nullptr
        && this->tagValue_ == nullptr; };
        // tagKey Field Functions 
        bool hasTagKey() const { return this->tagKey_ != nullptr;};
        void deleteTagKey() { this->tagKey_ = nullptr;};
        inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
        inline Tags& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


        // tagValue Field Functions 
        bool hasTagValue() const { return this->tagValue_ != nullptr;};
        void deleteTagValue() { this->tagValue_ = nullptr;};
        inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
        inline Tags& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


      protected:
        shared_ptr<string> tagKey_ {};
        shared_ptr<string> tagValue_ {};
      };

      class GroupInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const GroupInfo& obj) { 
          DARABONBA_PTR_TO_JSON(groupId, groupId_);
          DARABONBA_PTR_TO_JSON(groupName, groupName_);
          DARABONBA_PTR_TO_JSON(projectId, projectId_);
          DARABONBA_PTR_TO_JSON(projectName, projectName_);
        };
        friend void from_json(const Darabonba::Json& j, GroupInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(groupId, groupId_);
          DARABONBA_PTR_FROM_JSON(groupName, groupName_);
          DARABONBA_PTR_FROM_JSON(projectId, projectId_);
          DARABONBA_PTR_FROM_JSON(projectName, projectName_);
        };
        GroupInfo() = default ;
        GroupInfo(const GroupInfo &) = default ;
        GroupInfo(GroupInfo &&) = default ;
        GroupInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~GroupInfo() = default ;
        GroupInfo& operator=(const GroupInfo &) = default ;
        GroupInfo& operator=(GroupInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->groupId_ == nullptr
        && this->groupName_ == nullptr && this->projectId_ == nullptr && this->projectName_ == nullptr; };
        // groupId Field Functions 
        bool hasGroupId() const { return this->groupId_ != nullptr;};
        void deleteGroupId() { this->groupId_ = nullptr;};
        inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
        inline GroupInfo& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


        // groupName Field Functions 
        bool hasGroupName() const { return this->groupName_ != nullptr;};
        void deleteGroupName() { this->groupName_ = nullptr;};
        inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
        inline GroupInfo& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


        // projectId Field Functions 
        bool hasProjectId() const { return this->projectId_ != nullptr;};
        void deleteProjectId() { this->projectId_ = nullptr;};
        inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
        inline GroupInfo& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


        // projectName Field Functions 
        bool hasProjectName() const { return this->projectName_ != nullptr;};
        void deleteProjectName() { this->projectName_ = nullptr;};
        inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
        inline GroupInfo& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


      protected:
        shared_ptr<string> groupId_ {};
        shared_ptr<string> groupName_ {};
        shared_ptr<string> projectId_ {};
        shared_ptr<string> projectName_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->description_ == nullptr && this->groupInfo_ == nullptr && this->latestVersion_ == nullptr && this->moduleId_ == nullptr && this->name_ == nullptr
        && this->outputPath_ == nullptr && this->source_ == nullptr && this->sourcePath_ == nullptr && this->statePath_ == nullptr && this->status_ == nullptr
        && this->tags_ == nullptr && this->versionStrategy_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Module& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Module& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // groupInfo Field Functions 
      bool hasGroupInfo() const { return this->groupInfo_ != nullptr;};
      void deleteGroupInfo() { this->groupInfo_ = nullptr;};
      inline const Module::GroupInfo & getGroupInfo() const { DARABONBA_PTR_GET_CONST(groupInfo_, Module::GroupInfo) };
      inline Module::GroupInfo getGroupInfo() { DARABONBA_PTR_GET(groupInfo_, Module::GroupInfo) };
      inline Module& setGroupInfo(const Module::GroupInfo & groupInfo) { DARABONBA_PTR_SET_VALUE(groupInfo_, groupInfo) };
      inline Module& setGroupInfo(Module::GroupInfo && groupInfo) { DARABONBA_PTR_SET_RVALUE(groupInfo_, groupInfo) };


      // latestVersion Field Functions 
      bool hasLatestVersion() const { return this->latestVersion_ != nullptr;};
      void deleteLatestVersion() { this->latestVersion_ = nullptr;};
      inline string getLatestVersion() const { DARABONBA_PTR_GET_DEFAULT(latestVersion_, "") };
      inline Module& setLatestVersion(string latestVersion) { DARABONBA_PTR_SET_VALUE(latestVersion_, latestVersion) };


      // moduleId Field Functions 
      bool hasModuleId() const { return this->moduleId_ != nullptr;};
      void deleteModuleId() { this->moduleId_ = nullptr;};
      inline string getModuleId() const { DARABONBA_PTR_GET_DEFAULT(moduleId_, "") };
      inline Module& setModuleId(string moduleId) { DARABONBA_PTR_SET_VALUE(moduleId_, moduleId) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Module& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // outputPath Field Functions 
      bool hasOutputPath() const { return this->outputPath_ != nullptr;};
      void deleteOutputPath() { this->outputPath_ = nullptr;};
      inline string getOutputPath() const { DARABONBA_PTR_GET_DEFAULT(outputPath_, "") };
      inline Module& setOutputPath(string outputPath) { DARABONBA_PTR_SET_VALUE(outputPath_, outputPath) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline Module& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


      // sourcePath Field Functions 
      bool hasSourcePath() const { return this->sourcePath_ != nullptr;};
      void deleteSourcePath() { this->sourcePath_ = nullptr;};
      inline string getSourcePath() const { DARABONBA_PTR_GET_DEFAULT(sourcePath_, "") };
      inline Module& setSourcePath(string sourcePath) { DARABONBA_PTR_SET_VALUE(sourcePath_, sourcePath) };


      // statePath Field Functions 
      bool hasStatePath() const { return this->statePath_ != nullptr;};
      void deleteStatePath() { this->statePath_ = nullptr;};
      inline string getStatePath() const { DARABONBA_PTR_GET_DEFAULT(statePath_, "") };
      inline Module& setStatePath(string statePath) { DARABONBA_PTR_SET_VALUE(statePath_, statePath) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Module& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<Module::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Module::Tags>) };
      inline vector<Module::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Module::Tags>) };
      inline Module& setTags(const vector<Module::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Module& setTags(vector<Module::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // versionStrategy Field Functions 
      bool hasVersionStrategy() const { return this->versionStrategy_ != nullptr;};
      void deleteVersionStrategy() { this->versionStrategy_ = nullptr;};
      inline string getVersionStrategy() const { DARABONBA_PTR_GET_DEFAULT(versionStrategy_, "") };
      inline Module& setVersionStrategy(string versionStrategy) { DARABONBA_PTR_SET_VALUE(versionStrategy_, versionStrategy) };


    protected:
      shared_ptr<string> createTime_ {};
      shared_ptr<string> description_ {};
      shared_ptr<Module::GroupInfo> groupInfo_ {};
      shared_ptr<string> latestVersion_ {};
      shared_ptr<string> moduleId_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> outputPath_ {};
      shared_ptr<string> source_ {};
      shared_ptr<string> sourcePath_ {};
      shared_ptr<string> statePath_ {};
      shared_ptr<string> status_ {};
      shared_ptr<vector<Module::Tags>> tags_ {};
      shared_ptr<string> versionStrategy_ {};
    };

    virtual bool empty() const override { return this->module_ == nullptr
        && this->requestId_ == nullptr; };
    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const GetModuleResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, GetModuleResponseBody::Module) };
    inline GetModuleResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, GetModuleResponseBody::Module) };
    inline GetModuleResponseBody& setModule(const GetModuleResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline GetModuleResponseBody& setModule(GetModuleResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetModuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetModuleResponseBody::Module> module_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
