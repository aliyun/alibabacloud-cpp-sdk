// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMODULERESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_GETMODULERESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetModuleResponseBodyModuleGroupInfo.hpp>
#include <vector>
#include <alibabacloud/models/GetModuleResponseBodyModuleTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class GetModuleResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetModuleResponseBodyModule& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GetModuleResponseBodyModule& obj) { 
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
    GetModuleResponseBodyModule() = default ;
    GetModuleResponseBodyModule(const GetModuleResponseBodyModule &) = default ;
    GetModuleResponseBodyModule(GetModuleResponseBodyModule &&) = default ;
    GetModuleResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetModuleResponseBodyModule() = default ;
    GetModuleResponseBodyModule& operator=(const GetModuleResponseBodyModule &) = default ;
    GetModuleResponseBodyModule& operator=(GetModuleResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->description_ == nullptr && return this->groupInfo_ == nullptr && return this->latestVersion_ == nullptr && return this->moduleId_ == nullptr && return this->name_ == nullptr
        && return this->outputPath_ == nullptr && return this->source_ == nullptr && return this->sourcePath_ == nullptr && return this->statePath_ == nullptr && return this->status_ == nullptr
        && return this->tags_ == nullptr && return this->versionStrategy_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetModuleResponseBodyModule& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetModuleResponseBodyModule& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // groupInfo Field Functions 
    bool hasGroupInfo() const { return this->groupInfo_ != nullptr;};
    void deleteGroupInfo() { this->groupInfo_ = nullptr;};
    inline const Models::GetModuleResponseBodyModuleGroupInfo & groupInfo() const { DARABONBA_PTR_GET_CONST(groupInfo_, Models::GetModuleResponseBodyModuleGroupInfo) };
    inline Models::GetModuleResponseBodyModuleGroupInfo groupInfo() { DARABONBA_PTR_GET(groupInfo_, Models::GetModuleResponseBodyModuleGroupInfo) };
    inline GetModuleResponseBodyModule& setGroupInfo(const Models::GetModuleResponseBodyModuleGroupInfo & groupInfo) { DARABONBA_PTR_SET_VALUE(groupInfo_, groupInfo) };
    inline GetModuleResponseBodyModule& setGroupInfo(Models::GetModuleResponseBodyModuleGroupInfo && groupInfo) { DARABONBA_PTR_SET_RVALUE(groupInfo_, groupInfo) };


    // latestVersion Field Functions 
    bool hasLatestVersion() const { return this->latestVersion_ != nullptr;};
    void deleteLatestVersion() { this->latestVersion_ = nullptr;};
    inline string latestVersion() const { DARABONBA_PTR_GET_DEFAULT(latestVersion_, "") };
    inline GetModuleResponseBodyModule& setLatestVersion(string latestVersion) { DARABONBA_PTR_SET_VALUE(latestVersion_, latestVersion) };


    // moduleId Field Functions 
    bool hasModuleId() const { return this->moduleId_ != nullptr;};
    void deleteModuleId() { this->moduleId_ = nullptr;};
    inline string moduleId() const { DARABONBA_PTR_GET_DEFAULT(moduleId_, "") };
    inline GetModuleResponseBodyModule& setModuleId(string moduleId) { DARABONBA_PTR_SET_VALUE(moduleId_, moduleId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetModuleResponseBodyModule& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // outputPath Field Functions 
    bool hasOutputPath() const { return this->outputPath_ != nullptr;};
    void deleteOutputPath() { this->outputPath_ = nullptr;};
    inline string outputPath() const { DARABONBA_PTR_GET_DEFAULT(outputPath_, "") };
    inline GetModuleResponseBodyModule& setOutputPath(string outputPath) { DARABONBA_PTR_SET_VALUE(outputPath_, outputPath) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline GetModuleResponseBodyModule& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // sourcePath Field Functions 
    bool hasSourcePath() const { return this->sourcePath_ != nullptr;};
    void deleteSourcePath() { this->sourcePath_ = nullptr;};
    inline string sourcePath() const { DARABONBA_PTR_GET_DEFAULT(sourcePath_, "") };
    inline GetModuleResponseBodyModule& setSourcePath(string sourcePath) { DARABONBA_PTR_SET_VALUE(sourcePath_, sourcePath) };


    // statePath Field Functions 
    bool hasStatePath() const { return this->statePath_ != nullptr;};
    void deleteStatePath() { this->statePath_ = nullptr;};
    inline string statePath() const { DARABONBA_PTR_GET_DEFAULT(statePath_, "") };
    inline GetModuleResponseBodyModule& setStatePath(string statePath) { DARABONBA_PTR_SET_VALUE(statePath_, statePath) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetModuleResponseBodyModule& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::GetModuleResponseBodyModuleTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::GetModuleResponseBodyModuleTags>) };
    inline vector<Models::GetModuleResponseBodyModuleTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::GetModuleResponseBodyModuleTags>) };
    inline GetModuleResponseBodyModule& setTags(const vector<Models::GetModuleResponseBodyModuleTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetModuleResponseBodyModule& setTags(vector<Models::GetModuleResponseBodyModuleTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // versionStrategy Field Functions 
    bool hasVersionStrategy() const { return this->versionStrategy_ != nullptr;};
    void deleteVersionStrategy() { this->versionStrategy_ = nullptr;};
    inline string versionStrategy() const { DARABONBA_PTR_GET_DEFAULT(versionStrategy_, "") };
    inline GetModuleResponseBodyModule& setVersionStrategy(string versionStrategy) { DARABONBA_PTR_SET_VALUE(versionStrategy_, versionStrategy) };


  protected:
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<Models::GetModuleResponseBodyModuleGroupInfo> groupInfo_ = nullptr;
    std::shared_ptr<string> latestVersion_ = nullptr;
    std::shared_ptr<string> moduleId_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> outputPath_ = nullptr;
    std::shared_ptr<string> source_ = nullptr;
    std::shared_ptr<string> sourcePath_ = nullptr;
    std::shared_ptr<string> statePath_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<vector<Models::GetModuleResponseBodyModuleTags>> tags_ = nullptr;
    std::shared_ptr<string> versionStrategy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
