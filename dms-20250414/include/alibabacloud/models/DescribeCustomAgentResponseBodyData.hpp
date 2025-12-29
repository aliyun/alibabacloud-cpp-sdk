// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECUSTOMAGENTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECUSTOMAGENTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCustomAgentResponseBodyDataExecutionConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class DescribeCustomAgentResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCustomAgentResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AliyunParentUid, aliyunParentUid_);
      DARABONBA_PTR_TO_JSON(AliyunUid, aliyunUid_);
      DARABONBA_PTR_TO_JSON(CreatorUserName, creatorUserName_);
      DARABONBA_PTR_TO_JSON(CustomAgentId, customAgentId_);
      DARABONBA_PTR_TO_JSON(DataJson, dataJson_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DmsUnit, dmsUnit_);
      DARABONBA_PTR_TO_JSON(ExecutionConfig, executionConfig_);
      DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Instruction, instruction_);
      DARABONBA_PTR_TO_JSON(Knowledge, knowledge_);
      DARABONBA_PTR_TO_JSON(Modifier, modifier_);
      DARABONBA_PTR_TO_JSON(ModifierUserName, modifierUserName_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OfflineTime, offlineTime_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(ReleaseTime, releaseTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TextReportConfig, textReportConfig_);
      DARABONBA_PTR_TO_JSON(WebReportConfig, webReportConfig_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCustomAgentResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AliyunParentUid, aliyunParentUid_);
      DARABONBA_PTR_FROM_JSON(AliyunUid, aliyunUid_);
      DARABONBA_PTR_FROM_JSON(CreatorUserName, creatorUserName_);
      DARABONBA_PTR_FROM_JSON(CustomAgentId, customAgentId_);
      DARABONBA_PTR_FROM_JSON(DataJson, dataJson_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DmsUnit, dmsUnit_);
      DARABONBA_PTR_FROM_JSON(ExecutionConfig, executionConfig_);
      DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Instruction, instruction_);
      DARABONBA_PTR_FROM_JSON(Knowledge, knowledge_);
      DARABONBA_PTR_FROM_JSON(Modifier, modifier_);
      DARABONBA_PTR_FROM_JSON(ModifierUserName, modifierUserName_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OfflineTime, offlineTime_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(ReleaseTime, releaseTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TextReportConfig, textReportConfig_);
      DARABONBA_PTR_FROM_JSON(WebReportConfig, webReportConfig_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    DescribeCustomAgentResponseBodyData() = default ;
    DescribeCustomAgentResponseBodyData(const DescribeCustomAgentResponseBodyData &) = default ;
    DescribeCustomAgentResponseBodyData(DescribeCustomAgentResponseBodyData &&) = default ;
    DescribeCustomAgentResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCustomAgentResponseBodyData() = default ;
    DescribeCustomAgentResponseBodyData& operator=(const DescribeCustomAgentResponseBodyData &) = default ;
    DescribeCustomAgentResponseBodyData& operator=(DescribeCustomAgentResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliyunParentUid_ == nullptr
        && return this->aliyunUid_ == nullptr && return this->creatorUserName_ == nullptr && return this->customAgentId_ == nullptr && return this->dataJson_ == nullptr && return this->description_ == nullptr
        && return this->dmsUnit_ == nullptr && return this->executionConfig_ == nullptr && return this->gmtCreated_ == nullptr && return this->gmtModified_ == nullptr && return this->instruction_ == nullptr
        && return this->knowledge_ == nullptr && return this->modifier_ == nullptr && return this->modifierUserName_ == nullptr && return this->name_ == nullptr && return this->offlineTime_ == nullptr
        && return this->region_ == nullptr && return this->releaseTime_ == nullptr && return this->status_ == nullptr && return this->textReportConfig_ == nullptr && return this->webReportConfig_ == nullptr
        && return this->workspaceId_ == nullptr; };
    // aliyunParentUid Field Functions 
    bool hasAliyunParentUid() const { return this->aliyunParentUid_ != nullptr;};
    void deleteAliyunParentUid() { this->aliyunParentUid_ = nullptr;};
    inline string aliyunParentUid() const { DARABONBA_PTR_GET_DEFAULT(aliyunParentUid_, "") };
    inline DescribeCustomAgentResponseBodyData& setAliyunParentUid(string aliyunParentUid) { DARABONBA_PTR_SET_VALUE(aliyunParentUid_, aliyunParentUid) };


    // aliyunUid Field Functions 
    bool hasAliyunUid() const { return this->aliyunUid_ != nullptr;};
    void deleteAliyunUid() { this->aliyunUid_ = nullptr;};
    inline string aliyunUid() const { DARABONBA_PTR_GET_DEFAULT(aliyunUid_, "") };
    inline DescribeCustomAgentResponseBodyData& setAliyunUid(string aliyunUid) { DARABONBA_PTR_SET_VALUE(aliyunUid_, aliyunUid) };


    // creatorUserName Field Functions 
    bool hasCreatorUserName() const { return this->creatorUserName_ != nullptr;};
    void deleteCreatorUserName() { this->creatorUserName_ = nullptr;};
    inline string creatorUserName() const { DARABONBA_PTR_GET_DEFAULT(creatorUserName_, "") };
    inline DescribeCustomAgentResponseBodyData& setCreatorUserName(string creatorUserName) { DARABONBA_PTR_SET_VALUE(creatorUserName_, creatorUserName) };


    // customAgentId Field Functions 
    bool hasCustomAgentId() const { return this->customAgentId_ != nullptr;};
    void deleteCustomAgentId() { this->customAgentId_ = nullptr;};
    inline string customAgentId() const { DARABONBA_PTR_GET_DEFAULT(customAgentId_, "") };
    inline DescribeCustomAgentResponseBodyData& setCustomAgentId(string customAgentId) { DARABONBA_PTR_SET_VALUE(customAgentId_, customAgentId) };


    // dataJson Field Functions 
    bool hasDataJson() const { return this->dataJson_ != nullptr;};
    void deleteDataJson() { this->dataJson_ = nullptr;};
    inline string dataJson() const { DARABONBA_PTR_GET_DEFAULT(dataJson_, "") };
    inline DescribeCustomAgentResponseBodyData& setDataJson(string dataJson) { DARABONBA_PTR_SET_VALUE(dataJson_, dataJson) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeCustomAgentResponseBodyData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dmsUnit Field Functions 
    bool hasDmsUnit() const { return this->dmsUnit_ != nullptr;};
    void deleteDmsUnit() { this->dmsUnit_ = nullptr;};
    inline string dmsUnit() const { DARABONBA_PTR_GET_DEFAULT(dmsUnit_, "") };
    inline DescribeCustomAgentResponseBodyData& setDmsUnit(string dmsUnit) { DARABONBA_PTR_SET_VALUE(dmsUnit_, dmsUnit) };


    // executionConfig Field Functions 
    bool hasExecutionConfig() const { return this->executionConfig_ != nullptr;};
    void deleteExecutionConfig() { this->executionConfig_ = nullptr;};
    inline const Models::DescribeCustomAgentResponseBodyDataExecutionConfig & executionConfig() const { DARABONBA_PTR_GET_CONST(executionConfig_, Models::DescribeCustomAgentResponseBodyDataExecutionConfig) };
    inline Models::DescribeCustomAgentResponseBodyDataExecutionConfig executionConfig() { DARABONBA_PTR_GET(executionConfig_, Models::DescribeCustomAgentResponseBodyDataExecutionConfig) };
    inline DescribeCustomAgentResponseBodyData& setExecutionConfig(const Models::DescribeCustomAgentResponseBodyDataExecutionConfig & executionConfig) { DARABONBA_PTR_SET_VALUE(executionConfig_, executionConfig) };
    inline DescribeCustomAgentResponseBodyData& setExecutionConfig(Models::DescribeCustomAgentResponseBodyDataExecutionConfig && executionConfig) { DARABONBA_PTR_SET_RVALUE(executionConfig_, executionConfig) };


    // gmtCreated Field Functions 
    bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
    void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
    inline string gmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
    inline DescribeCustomAgentResponseBodyData& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline DescribeCustomAgentResponseBodyData& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // instruction Field Functions 
    bool hasInstruction() const { return this->instruction_ != nullptr;};
    void deleteInstruction() { this->instruction_ = nullptr;};
    inline string instruction() const { DARABONBA_PTR_GET_DEFAULT(instruction_, "") };
    inline DescribeCustomAgentResponseBodyData& setInstruction(string instruction) { DARABONBA_PTR_SET_VALUE(instruction_, instruction) };


    // knowledge Field Functions 
    bool hasKnowledge() const { return this->knowledge_ != nullptr;};
    void deleteKnowledge() { this->knowledge_ = nullptr;};
    inline string knowledge() const { DARABONBA_PTR_GET_DEFAULT(knowledge_, "") };
    inline DescribeCustomAgentResponseBodyData& setKnowledge(string knowledge) { DARABONBA_PTR_SET_VALUE(knowledge_, knowledge) };


    // modifier Field Functions 
    bool hasModifier() const { return this->modifier_ != nullptr;};
    void deleteModifier() { this->modifier_ = nullptr;};
    inline string modifier() const { DARABONBA_PTR_GET_DEFAULT(modifier_, "") };
    inline DescribeCustomAgentResponseBodyData& setModifier(string modifier) { DARABONBA_PTR_SET_VALUE(modifier_, modifier) };


    // modifierUserName Field Functions 
    bool hasModifierUserName() const { return this->modifierUserName_ != nullptr;};
    void deleteModifierUserName() { this->modifierUserName_ = nullptr;};
    inline string modifierUserName() const { DARABONBA_PTR_GET_DEFAULT(modifierUserName_, "") };
    inline DescribeCustomAgentResponseBodyData& setModifierUserName(string modifierUserName) { DARABONBA_PTR_SET_VALUE(modifierUserName_, modifierUserName) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeCustomAgentResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // offlineTime Field Functions 
    bool hasOfflineTime() const { return this->offlineTime_ != nullptr;};
    void deleteOfflineTime() { this->offlineTime_ = nullptr;};
    inline string offlineTime() const { DARABONBA_PTR_GET_DEFAULT(offlineTime_, "") };
    inline DescribeCustomAgentResponseBodyData& setOfflineTime(string offlineTime) { DARABONBA_PTR_SET_VALUE(offlineTime_, offlineTime) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeCustomAgentResponseBodyData& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // releaseTime Field Functions 
    bool hasReleaseTime() const { return this->releaseTime_ != nullptr;};
    void deleteReleaseTime() { this->releaseTime_ = nullptr;};
    inline string releaseTime() const { DARABONBA_PTR_GET_DEFAULT(releaseTime_, "") };
    inline DescribeCustomAgentResponseBodyData& setReleaseTime(string releaseTime) { DARABONBA_PTR_SET_VALUE(releaseTime_, releaseTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeCustomAgentResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // textReportConfig Field Functions 
    bool hasTextReportConfig() const { return this->textReportConfig_ != nullptr;};
    void deleteTextReportConfig() { this->textReportConfig_ = nullptr;};
    inline string textReportConfig() const { DARABONBA_PTR_GET_DEFAULT(textReportConfig_, "") };
    inline DescribeCustomAgentResponseBodyData& setTextReportConfig(string textReportConfig) { DARABONBA_PTR_SET_VALUE(textReportConfig_, textReportConfig) };


    // webReportConfig Field Functions 
    bool hasWebReportConfig() const { return this->webReportConfig_ != nullptr;};
    void deleteWebReportConfig() { this->webReportConfig_ = nullptr;};
    inline string webReportConfig() const { DARABONBA_PTR_GET_DEFAULT(webReportConfig_, "") };
    inline DescribeCustomAgentResponseBodyData& setWebReportConfig(string webReportConfig) { DARABONBA_PTR_SET_VALUE(webReportConfig_, webReportConfig) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline DescribeCustomAgentResponseBodyData& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> aliyunParentUid_ = nullptr;
    std::shared_ptr<string> aliyunUid_ = nullptr;
    std::shared_ptr<string> creatorUserName_ = nullptr;
    std::shared_ptr<string> customAgentId_ = nullptr;
    std::shared_ptr<string> dataJson_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> dmsUnit_ = nullptr;
    std::shared_ptr<Models::DescribeCustomAgentResponseBodyDataExecutionConfig> executionConfig_ = nullptr;
    std::shared_ptr<string> gmtCreated_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<string> instruction_ = nullptr;
    std::shared_ptr<string> knowledge_ = nullptr;
    std::shared_ptr<string> modifier_ = nullptr;
    std::shared_ptr<string> modifierUserName_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> offlineTime_ = nullptr;
    std::shared_ptr<string> region_ = nullptr;
    std::shared_ptr<string> releaseTime_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> textReportConfig_ = nullptr;
    std::shared_ptr<string> webReportConfig_ = nullptr;
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
