// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMODULESRESPONSEBODYMODULES_HPP_
#define ALIBABACLOUD_MODELS_LISTMODULESRESPONSEBODYMODULES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListModulesResponseBodyModulesGroupInfo.hpp>
#include <vector>
#include <alibabacloud/models/ListModulesResponseBodyModulesTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class ListModulesResponseBodyModules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListModulesResponseBodyModules& obj) { 
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(deletionProtection, deletionProtection_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(groupInfo, groupInfo_);
      DARABONBA_PTR_TO_JSON(latestVersion, latestVersion_);
      DARABONBA_PTR_TO_JSON(moduleId, moduleId_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(source, source_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, ListModulesResponseBodyModules& obj) { 
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(deletionProtection, deletionProtection_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(groupInfo, groupInfo_);
      DARABONBA_PTR_FROM_JSON(latestVersion, latestVersion_);
      DARABONBA_PTR_FROM_JSON(moduleId, moduleId_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(source, source_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
    };
    ListModulesResponseBodyModules() = default ;
    ListModulesResponseBodyModules(const ListModulesResponseBodyModules &) = default ;
    ListModulesResponseBodyModules(ListModulesResponseBodyModules &&) = default ;
    ListModulesResponseBodyModules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListModulesResponseBodyModules() = default ;
    ListModulesResponseBodyModules& operator=(const ListModulesResponseBodyModules &) = default ;
    ListModulesResponseBodyModules& operator=(ListModulesResponseBodyModules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->deletionProtection_ == nullptr && return this->description_ == nullptr && return this->groupInfo_ == nullptr && return this->latestVersion_ == nullptr && return this->moduleId_ == nullptr
        && return this->name_ == nullptr && return this->source_ == nullptr && return this->status_ == nullptr && return this->tags_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListModulesResponseBodyModules& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // deletionProtection Field Functions 
    bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
    void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
    inline bool deletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, false) };
    inline ListModulesResponseBodyModules& setDeletionProtection(bool deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListModulesResponseBodyModules& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // groupInfo Field Functions 
    bool hasGroupInfo() const { return this->groupInfo_ != nullptr;};
    void deleteGroupInfo() { this->groupInfo_ = nullptr;};
    inline const Models::ListModulesResponseBodyModulesGroupInfo & groupInfo() const { DARABONBA_PTR_GET_CONST(groupInfo_, Models::ListModulesResponseBodyModulesGroupInfo) };
    inline Models::ListModulesResponseBodyModulesGroupInfo groupInfo() { DARABONBA_PTR_GET(groupInfo_, Models::ListModulesResponseBodyModulesGroupInfo) };
    inline ListModulesResponseBodyModules& setGroupInfo(const Models::ListModulesResponseBodyModulesGroupInfo & groupInfo) { DARABONBA_PTR_SET_VALUE(groupInfo_, groupInfo) };
    inline ListModulesResponseBodyModules& setGroupInfo(Models::ListModulesResponseBodyModulesGroupInfo && groupInfo) { DARABONBA_PTR_SET_RVALUE(groupInfo_, groupInfo) };


    // latestVersion Field Functions 
    bool hasLatestVersion() const { return this->latestVersion_ != nullptr;};
    void deleteLatestVersion() { this->latestVersion_ = nullptr;};
    inline string latestVersion() const { DARABONBA_PTR_GET_DEFAULT(latestVersion_, "") };
    inline ListModulesResponseBodyModules& setLatestVersion(string latestVersion) { DARABONBA_PTR_SET_VALUE(latestVersion_, latestVersion) };


    // moduleId Field Functions 
    bool hasModuleId() const { return this->moduleId_ != nullptr;};
    void deleteModuleId() { this->moduleId_ = nullptr;};
    inline string moduleId() const { DARABONBA_PTR_GET_DEFAULT(moduleId_, "") };
    inline ListModulesResponseBodyModules& setModuleId(string moduleId) { DARABONBA_PTR_SET_VALUE(moduleId_, moduleId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListModulesResponseBodyModules& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline ListModulesResponseBodyModules& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListModulesResponseBodyModules& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListModulesResponseBodyModulesTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListModulesResponseBodyModulesTags>) };
    inline vector<Models::ListModulesResponseBodyModulesTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListModulesResponseBodyModulesTags>) };
    inline ListModulesResponseBodyModules& setTags(const vector<Models::ListModulesResponseBodyModulesTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListModulesResponseBodyModules& setTags(vector<Models::ListModulesResponseBodyModulesTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<bool> deletionProtection_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<Models::ListModulesResponseBodyModulesGroupInfo> groupInfo_ = nullptr;
    std::shared_ptr<string> latestVersion_ = nullptr;
    std::shared_ptr<string> moduleId_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> source_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<vector<Models::ListModulesResponseBodyModulesTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
