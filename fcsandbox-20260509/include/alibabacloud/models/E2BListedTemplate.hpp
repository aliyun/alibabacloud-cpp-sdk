// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_E2BLISTEDTEMPLATE_HPP_
#define ALIBABACLOUD_MODELS_E2BLISTEDTEMPLATE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/LogConfiguration.hpp>
#include <alibabacloud/models/E2BTemplateTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FCSandbox20260509
{
namespace Models
{
  class E2BListedTemplate : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const E2BListedTemplate& obj) { 
      DARABONBA_PTR_TO_JSON(aliases, aliases_);
      DARABONBA_PTR_TO_JSON(buildStatus, buildStatus_);
      DARABONBA_PTR_TO_JSON(category, category_);
      DARABONBA_PTR_TO_JSON(cpuCount, cpuCount_);
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(functionName, functionName_);
      DARABONBA_PTR_TO_JSON(lastSpawnedAt, lastSpawnedAt_);
      DARABONBA_PTR_TO_JSON(logConfiguration, logConfiguration_);
      DARABONBA_PTR_TO_JSON(memoryMB, memoryMB_);
      DARABONBA_PTR_TO_JSON(names, names_);
      DARABONBA_PTR_TO_JSON(public, public_);
      DARABONBA_PTR_TO_JSON(resourceGroupID, resourceGroupID_);
      DARABONBA_PTR_TO_JSON(spawnCount, spawnCount_);
      DARABONBA_PTR_TO_JSON(statusReason, statusReason_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
      DARABONBA_PTR_TO_JSON(teamID, teamID_);
      DARABONBA_PTR_TO_JSON(teamName, teamName_);
      DARABONBA_PTR_TO_JSON(templateID, templateID_);
      DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
      DARABONBA_PTR_TO_JSON(userID, userID_);
    };
    friend void from_json(const Darabonba::Json& j, E2BListedTemplate& obj) { 
      DARABONBA_PTR_FROM_JSON(aliases, aliases_);
      DARABONBA_PTR_FROM_JSON(buildStatus, buildStatus_);
      DARABONBA_PTR_FROM_JSON(category, category_);
      DARABONBA_PTR_FROM_JSON(cpuCount, cpuCount_);
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(functionName, functionName_);
      DARABONBA_PTR_FROM_JSON(lastSpawnedAt, lastSpawnedAt_);
      DARABONBA_PTR_FROM_JSON(logConfiguration, logConfiguration_);
      DARABONBA_PTR_FROM_JSON(memoryMB, memoryMB_);
      DARABONBA_PTR_FROM_JSON(names, names_);
      DARABONBA_PTR_FROM_JSON(public, public_);
      DARABONBA_PTR_FROM_JSON(resourceGroupID, resourceGroupID_);
      DARABONBA_PTR_FROM_JSON(spawnCount, spawnCount_);
      DARABONBA_PTR_FROM_JSON(statusReason, statusReason_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
      DARABONBA_PTR_FROM_JSON(teamID, teamID_);
      DARABONBA_PTR_FROM_JSON(teamName, teamName_);
      DARABONBA_PTR_FROM_JSON(templateID, templateID_);
      DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
      DARABONBA_PTR_FROM_JSON(userID, userID_);
    };
    E2BListedTemplate() = default ;
    E2BListedTemplate(const E2BListedTemplate &) = default ;
    E2BListedTemplate(E2BListedTemplate &&) = default ;
    E2BListedTemplate(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~E2BListedTemplate() = default ;
    E2BListedTemplate& operator=(const E2BListedTemplate &) = default ;
    E2BListedTemplate& operator=(E2BListedTemplate &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliases_ == nullptr
        && this->buildStatus_ == nullptr && this->category_ == nullptr && this->cpuCount_ == nullptr && this->createdAt_ == nullptr && this->functionName_ == nullptr
        && this->lastSpawnedAt_ == nullptr && this->logConfiguration_ == nullptr && this->memoryMB_ == nullptr && this->names_ == nullptr && this->public_ == nullptr
        && this->resourceGroupID_ == nullptr && this->spawnCount_ == nullptr && this->statusReason_ == nullptr && this->tags_ == nullptr && this->teamID_ == nullptr
        && this->teamName_ == nullptr && this->templateID_ == nullptr && this->updatedAt_ == nullptr && this->userID_ == nullptr; };
    // aliases Field Functions 
    bool hasAliases() const { return this->aliases_ != nullptr;};
    void deleteAliases() { this->aliases_ = nullptr;};
    inline const vector<string> & getAliases() const { DARABONBA_PTR_GET_CONST(aliases_, vector<string>) };
    inline vector<string> getAliases() { DARABONBA_PTR_GET(aliases_, vector<string>) };
    inline E2BListedTemplate& setAliases(const vector<string> & aliases) { DARABONBA_PTR_SET_VALUE(aliases_, aliases) };
    inline E2BListedTemplate& setAliases(vector<string> && aliases) { DARABONBA_PTR_SET_RVALUE(aliases_, aliases) };


    // buildStatus Field Functions 
    bool hasBuildStatus() const { return this->buildStatus_ != nullptr;};
    void deleteBuildStatus() { this->buildStatus_ = nullptr;};
    inline string getBuildStatus() const { DARABONBA_PTR_GET_DEFAULT(buildStatus_, "") };
    inline E2BListedTemplate& setBuildStatus(string buildStatus) { DARABONBA_PTR_SET_VALUE(buildStatus_, buildStatus) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline E2BListedTemplate& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // cpuCount Field Functions 
    bool hasCpuCount() const { return this->cpuCount_ != nullptr;};
    void deleteCpuCount() { this->cpuCount_ = nullptr;};
    inline int32_t getCpuCount() const { DARABONBA_PTR_GET_DEFAULT(cpuCount_, 0) };
    inline E2BListedTemplate& setCpuCount(int32_t cpuCount) { DARABONBA_PTR_SET_VALUE(cpuCount_, cpuCount) };


    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
    inline E2BListedTemplate& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // functionName Field Functions 
    bool hasFunctionName() const { return this->functionName_ != nullptr;};
    void deleteFunctionName() { this->functionName_ = nullptr;};
    inline string getFunctionName() const { DARABONBA_PTR_GET_DEFAULT(functionName_, "") };
    inline E2BListedTemplate& setFunctionName(string functionName) { DARABONBA_PTR_SET_VALUE(functionName_, functionName) };


    // lastSpawnedAt Field Functions 
    bool hasLastSpawnedAt() const { return this->lastSpawnedAt_ != nullptr;};
    void deleteLastSpawnedAt() { this->lastSpawnedAt_ = nullptr;};
    inline string getLastSpawnedAt() const { DARABONBA_PTR_GET_DEFAULT(lastSpawnedAt_, "") };
    inline E2BListedTemplate& setLastSpawnedAt(string lastSpawnedAt) { DARABONBA_PTR_SET_VALUE(lastSpawnedAt_, lastSpawnedAt) };


    // logConfiguration Field Functions 
    bool hasLogConfiguration() const { return this->logConfiguration_ != nullptr;};
    void deleteLogConfiguration() { this->logConfiguration_ = nullptr;};
    inline const LogConfiguration & getLogConfiguration() const { DARABONBA_PTR_GET_CONST(logConfiguration_, LogConfiguration) };
    inline LogConfiguration getLogConfiguration() { DARABONBA_PTR_GET(logConfiguration_, LogConfiguration) };
    inline E2BListedTemplate& setLogConfiguration(const LogConfiguration & logConfiguration) { DARABONBA_PTR_SET_VALUE(logConfiguration_, logConfiguration) };
    inline E2BListedTemplate& setLogConfiguration(LogConfiguration && logConfiguration) { DARABONBA_PTR_SET_RVALUE(logConfiguration_, logConfiguration) };


    // memoryMB Field Functions 
    bool hasMemoryMB() const { return this->memoryMB_ != nullptr;};
    void deleteMemoryMB() { this->memoryMB_ = nullptr;};
    inline int32_t getMemoryMB() const { DARABONBA_PTR_GET_DEFAULT(memoryMB_, 0) };
    inline E2BListedTemplate& setMemoryMB(int32_t memoryMB) { DARABONBA_PTR_SET_VALUE(memoryMB_, memoryMB) };


    // names Field Functions 
    bool hasNames() const { return this->names_ != nullptr;};
    void deleteNames() { this->names_ = nullptr;};
    inline const vector<string> & getNames() const { DARABONBA_PTR_GET_CONST(names_, vector<string>) };
    inline vector<string> getNames() { DARABONBA_PTR_GET(names_, vector<string>) };
    inline E2BListedTemplate& setNames(const vector<string> & names) { DARABONBA_PTR_SET_VALUE(names_, names) };
    inline E2BListedTemplate& setNames(vector<string> && names) { DARABONBA_PTR_SET_RVALUE(names_, names) };


    // public Field Functions 
    bool hasPublic() const { return this->public_ != nullptr;};
    void deletePublic() { this->public_ = nullptr;};
    inline bool getPublic() const { DARABONBA_PTR_GET_DEFAULT(public_, false) };
    inline E2BListedTemplate& setPublic(bool _public) { DARABONBA_PTR_SET_VALUE(public_, _public) };


    // resourceGroupID Field Functions 
    bool hasResourceGroupID() const { return this->resourceGroupID_ != nullptr;};
    void deleteResourceGroupID() { this->resourceGroupID_ = nullptr;};
    inline string getResourceGroupID() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupID_, "") };
    inline E2BListedTemplate& setResourceGroupID(string resourceGroupID) { DARABONBA_PTR_SET_VALUE(resourceGroupID_, resourceGroupID) };


    // spawnCount Field Functions 
    bool hasSpawnCount() const { return this->spawnCount_ != nullptr;};
    void deleteSpawnCount() { this->spawnCount_ = nullptr;};
    inline int32_t getSpawnCount() const { DARABONBA_PTR_GET_DEFAULT(spawnCount_, 0) };
    inline E2BListedTemplate& setSpawnCount(int32_t spawnCount) { DARABONBA_PTR_SET_VALUE(spawnCount_, spawnCount) };


    // statusReason Field Functions 
    bool hasStatusReason() const { return this->statusReason_ != nullptr;};
    void deleteStatusReason() { this->statusReason_ = nullptr;};
    inline string getStatusReason() const { DARABONBA_PTR_GET_DEFAULT(statusReason_, "") };
    inline E2BListedTemplate& setStatusReason(string statusReason) { DARABONBA_PTR_SET_VALUE(statusReason_, statusReason) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<E2BTemplateTag> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<E2BTemplateTag>) };
    inline vector<E2BTemplateTag> getTags() { DARABONBA_PTR_GET(tags_, vector<E2BTemplateTag>) };
    inline E2BListedTemplate& setTags(const vector<E2BTemplateTag> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline E2BListedTemplate& setTags(vector<E2BTemplateTag> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // teamID Field Functions 
    bool hasTeamID() const { return this->teamID_ != nullptr;};
    void deleteTeamID() { this->teamID_ = nullptr;};
    inline string getTeamID() const { DARABONBA_PTR_GET_DEFAULT(teamID_, "") };
    inline E2BListedTemplate& setTeamID(string teamID) { DARABONBA_PTR_SET_VALUE(teamID_, teamID) };


    // teamName Field Functions 
    bool hasTeamName() const { return this->teamName_ != nullptr;};
    void deleteTeamName() { this->teamName_ = nullptr;};
    inline string getTeamName() const { DARABONBA_PTR_GET_DEFAULT(teamName_, "") };
    inline E2BListedTemplate& setTeamName(string teamName) { DARABONBA_PTR_SET_VALUE(teamName_, teamName) };


    // templateID Field Functions 
    bool hasTemplateID() const { return this->templateID_ != nullptr;};
    void deleteTemplateID() { this->templateID_ = nullptr;};
    inline string getTemplateID() const { DARABONBA_PTR_GET_DEFAULT(templateID_, "") };
    inline E2BListedTemplate& setTemplateID(string templateID) { DARABONBA_PTR_SET_VALUE(templateID_, templateID) };


    // updatedAt Field Functions 
    bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
    void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
    inline string getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
    inline E2BListedTemplate& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


    // userID Field Functions 
    bool hasUserID() const { return this->userID_ != nullptr;};
    void deleteUserID() { this->userID_ = nullptr;};
    inline string getUserID() const { DARABONBA_PTR_GET_DEFAULT(userID_, "") };
    inline E2BListedTemplate& setUserID(string userID) { DARABONBA_PTR_SET_VALUE(userID_, userID) };


  protected:
    shared_ptr<vector<string>> aliases_ {};
    shared_ptr<string> buildStatus_ {};
    shared_ptr<string> category_ {};
    shared_ptr<int32_t> cpuCount_ {};
    shared_ptr<string> createdAt_ {};
    shared_ptr<string> functionName_ {};
    shared_ptr<string> lastSpawnedAt_ {};
    shared_ptr<LogConfiguration> logConfiguration_ {};
    shared_ptr<int32_t> memoryMB_ {};
    shared_ptr<vector<string>> names_ {};
    shared_ptr<bool> public_ {};
    shared_ptr<string> resourceGroupID_ {};
    shared_ptr<int32_t> spawnCount_ {};
    shared_ptr<string> statusReason_ {};
    shared_ptr<vector<E2BTemplateTag>> tags_ {};
    shared_ptr<string> teamID_ {};
    shared_ptr<string> teamName_ {};
    shared_ptr<string> templateID_ {};
    shared_ptr<string> updatedAt_ {};
    shared_ptr<string> userID_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FCSandbox20260509
#endif
