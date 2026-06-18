// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_E2BTEMPLATE_HPP_
#define ALIBABACLOUD_MODELS_E2BTEMPLATE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/E2BTemplateBuild.hpp>
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
  class E2BTemplate : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const E2BTemplate& obj) { 
      DARABONBA_PTR_TO_JSON(aliases, aliases_);
      DARABONBA_PTR_TO_JSON(buildStatus, buildStatus_);
      DARABONBA_PTR_TO_JSON(builds, builds_);
      DARABONBA_PTR_TO_JSON(cpuCount, cpuCount_);
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(lastSpawnedAt, lastSpawnedAt_);
      DARABONBA_PTR_TO_JSON(logConfiguration, logConfiguration_);
      DARABONBA_PTR_TO_JSON(memoryMB, memoryMB_);
      DARABONBA_PTR_TO_JSON(names, names_);
      DARABONBA_PTR_TO_JSON(public, public_);
      DARABONBA_PTR_TO_JSON(spawnCount, spawnCount_);
      DARABONBA_PTR_TO_JSON(statusReason, statusReason_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
      DARABONBA_PTR_TO_JSON(templateID, templateID_);
      DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
      DARABONBA_PTR_TO_JSON(userID, userID_);
    };
    friend void from_json(const Darabonba::Json& j, E2BTemplate& obj) { 
      DARABONBA_PTR_FROM_JSON(aliases, aliases_);
      DARABONBA_PTR_FROM_JSON(buildStatus, buildStatus_);
      DARABONBA_PTR_FROM_JSON(builds, builds_);
      DARABONBA_PTR_FROM_JSON(cpuCount, cpuCount_);
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(lastSpawnedAt, lastSpawnedAt_);
      DARABONBA_PTR_FROM_JSON(logConfiguration, logConfiguration_);
      DARABONBA_PTR_FROM_JSON(memoryMB, memoryMB_);
      DARABONBA_PTR_FROM_JSON(names, names_);
      DARABONBA_PTR_FROM_JSON(public, public_);
      DARABONBA_PTR_FROM_JSON(spawnCount, spawnCount_);
      DARABONBA_PTR_FROM_JSON(statusReason, statusReason_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
      DARABONBA_PTR_FROM_JSON(templateID, templateID_);
      DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
      DARABONBA_PTR_FROM_JSON(userID, userID_);
    };
    E2BTemplate() = default ;
    E2BTemplate(const E2BTemplate &) = default ;
    E2BTemplate(E2BTemplate &&) = default ;
    E2BTemplate(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~E2BTemplate() = default ;
    E2BTemplate& operator=(const E2BTemplate &) = default ;
    E2BTemplate& operator=(E2BTemplate &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliases_ == nullptr
        && this->buildStatus_ == nullptr && this->builds_ == nullptr && this->cpuCount_ == nullptr && this->createdAt_ == nullptr && this->lastSpawnedAt_ == nullptr
        && this->logConfiguration_ == nullptr && this->memoryMB_ == nullptr && this->names_ == nullptr && this->public_ == nullptr && this->spawnCount_ == nullptr
        && this->statusReason_ == nullptr && this->tags_ == nullptr && this->templateID_ == nullptr && this->updatedAt_ == nullptr && this->userID_ == nullptr; };
    // aliases Field Functions 
    bool hasAliases() const { return this->aliases_ != nullptr;};
    void deleteAliases() { this->aliases_ = nullptr;};
    inline const vector<string> & getAliases() const { DARABONBA_PTR_GET_CONST(aliases_, vector<string>) };
    inline vector<string> getAliases() { DARABONBA_PTR_GET(aliases_, vector<string>) };
    inline E2BTemplate& setAliases(const vector<string> & aliases) { DARABONBA_PTR_SET_VALUE(aliases_, aliases) };
    inline E2BTemplate& setAliases(vector<string> && aliases) { DARABONBA_PTR_SET_RVALUE(aliases_, aliases) };


    // buildStatus Field Functions 
    bool hasBuildStatus() const { return this->buildStatus_ != nullptr;};
    void deleteBuildStatus() { this->buildStatus_ = nullptr;};
    inline string getBuildStatus() const { DARABONBA_PTR_GET_DEFAULT(buildStatus_, "") };
    inline E2BTemplate& setBuildStatus(string buildStatus) { DARABONBA_PTR_SET_VALUE(buildStatus_, buildStatus) };


    // builds Field Functions 
    bool hasBuilds() const { return this->builds_ != nullptr;};
    void deleteBuilds() { this->builds_ = nullptr;};
    inline const E2BTemplateBuild & getBuilds() const { DARABONBA_PTR_GET_CONST(builds_, E2BTemplateBuild) };
    inline E2BTemplateBuild getBuilds() { DARABONBA_PTR_GET(builds_, E2BTemplateBuild) };
    inline E2BTemplate& setBuilds(const E2BTemplateBuild & builds) { DARABONBA_PTR_SET_VALUE(builds_, builds) };
    inline E2BTemplate& setBuilds(E2BTemplateBuild && builds) { DARABONBA_PTR_SET_RVALUE(builds_, builds) };


    // cpuCount Field Functions 
    bool hasCpuCount() const { return this->cpuCount_ != nullptr;};
    void deleteCpuCount() { this->cpuCount_ = nullptr;};
    inline int32_t getCpuCount() const { DARABONBA_PTR_GET_DEFAULT(cpuCount_, 0) };
    inline E2BTemplate& setCpuCount(int32_t cpuCount) { DARABONBA_PTR_SET_VALUE(cpuCount_, cpuCount) };


    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
    inline E2BTemplate& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // lastSpawnedAt Field Functions 
    bool hasLastSpawnedAt() const { return this->lastSpawnedAt_ != nullptr;};
    void deleteLastSpawnedAt() { this->lastSpawnedAt_ = nullptr;};
    inline string getLastSpawnedAt() const { DARABONBA_PTR_GET_DEFAULT(lastSpawnedAt_, "") };
    inline E2BTemplate& setLastSpawnedAt(string lastSpawnedAt) { DARABONBA_PTR_SET_VALUE(lastSpawnedAt_, lastSpawnedAt) };


    // logConfiguration Field Functions 
    bool hasLogConfiguration() const { return this->logConfiguration_ != nullptr;};
    void deleteLogConfiguration() { this->logConfiguration_ = nullptr;};
    inline const LogConfiguration & getLogConfiguration() const { DARABONBA_PTR_GET_CONST(logConfiguration_, LogConfiguration) };
    inline LogConfiguration getLogConfiguration() { DARABONBA_PTR_GET(logConfiguration_, LogConfiguration) };
    inline E2BTemplate& setLogConfiguration(const LogConfiguration & logConfiguration) { DARABONBA_PTR_SET_VALUE(logConfiguration_, logConfiguration) };
    inline E2BTemplate& setLogConfiguration(LogConfiguration && logConfiguration) { DARABONBA_PTR_SET_RVALUE(logConfiguration_, logConfiguration) };


    // memoryMB Field Functions 
    bool hasMemoryMB() const { return this->memoryMB_ != nullptr;};
    void deleteMemoryMB() { this->memoryMB_ = nullptr;};
    inline int32_t getMemoryMB() const { DARABONBA_PTR_GET_DEFAULT(memoryMB_, 0) };
    inline E2BTemplate& setMemoryMB(int32_t memoryMB) { DARABONBA_PTR_SET_VALUE(memoryMB_, memoryMB) };


    // names Field Functions 
    bool hasNames() const { return this->names_ != nullptr;};
    void deleteNames() { this->names_ = nullptr;};
    inline const vector<string> & getNames() const { DARABONBA_PTR_GET_CONST(names_, vector<string>) };
    inline vector<string> getNames() { DARABONBA_PTR_GET(names_, vector<string>) };
    inline E2BTemplate& setNames(const vector<string> & names) { DARABONBA_PTR_SET_VALUE(names_, names) };
    inline E2BTemplate& setNames(vector<string> && names) { DARABONBA_PTR_SET_RVALUE(names_, names) };


    // public Field Functions 
    bool hasPublic() const { return this->public_ != nullptr;};
    void deletePublic() { this->public_ = nullptr;};
    inline bool getPublic() const { DARABONBA_PTR_GET_DEFAULT(public_, false) };
    inline E2BTemplate& setPublic(bool _public) { DARABONBA_PTR_SET_VALUE(public_, _public) };


    // spawnCount Field Functions 
    bool hasSpawnCount() const { return this->spawnCount_ != nullptr;};
    void deleteSpawnCount() { this->spawnCount_ = nullptr;};
    inline string getSpawnCount() const { DARABONBA_PTR_GET_DEFAULT(spawnCount_, "") };
    inline E2BTemplate& setSpawnCount(string spawnCount) { DARABONBA_PTR_SET_VALUE(spawnCount_, spawnCount) };


    // statusReason Field Functions 
    bool hasStatusReason() const { return this->statusReason_ != nullptr;};
    void deleteStatusReason() { this->statusReason_ = nullptr;};
    inline string getStatusReason() const { DARABONBA_PTR_GET_DEFAULT(statusReason_, "") };
    inline E2BTemplate& setStatusReason(string statusReason) { DARABONBA_PTR_SET_VALUE(statusReason_, statusReason) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<E2BTemplateTag> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<E2BTemplateTag>) };
    inline vector<E2BTemplateTag> getTags() { DARABONBA_PTR_GET(tags_, vector<E2BTemplateTag>) };
    inline E2BTemplate& setTags(const vector<E2BTemplateTag> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline E2BTemplate& setTags(vector<E2BTemplateTag> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // templateID Field Functions 
    bool hasTemplateID() const { return this->templateID_ != nullptr;};
    void deleteTemplateID() { this->templateID_ = nullptr;};
    inline string getTemplateID() const { DARABONBA_PTR_GET_DEFAULT(templateID_, "") };
    inline E2BTemplate& setTemplateID(string templateID) { DARABONBA_PTR_SET_VALUE(templateID_, templateID) };


    // updatedAt Field Functions 
    bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
    void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
    inline string getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
    inline E2BTemplate& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


    // userID Field Functions 
    bool hasUserID() const { return this->userID_ != nullptr;};
    void deleteUserID() { this->userID_ = nullptr;};
    inline string getUserID() const { DARABONBA_PTR_GET_DEFAULT(userID_, "") };
    inline E2BTemplate& setUserID(string userID) { DARABONBA_PTR_SET_VALUE(userID_, userID) };


  protected:
    shared_ptr<vector<string>> aliases_ {};
    shared_ptr<string> buildStatus_ {};
    shared_ptr<E2BTemplateBuild> builds_ {};
    shared_ptr<int32_t> cpuCount_ {};
    shared_ptr<string> createdAt_ {};
    shared_ptr<string> lastSpawnedAt_ {};
    shared_ptr<LogConfiguration> logConfiguration_ {};
    shared_ptr<int32_t> memoryMB_ {};
    shared_ptr<vector<string>> names_ {};
    shared_ptr<bool> public_ {};
    shared_ptr<string> spawnCount_ {};
    shared_ptr<string> statusReason_ {};
    shared_ptr<vector<E2BTemplateTag>> tags_ {};
    shared_ptr<string> templateID_ {};
    shared_ptr<string> updatedAt_ {};
    shared_ptr<string> userID_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FCSandbox20260509
#endif
