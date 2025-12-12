// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSKILLGROUPCONFIGRESPONSEBODYDATASKILLGROUPCONFIG_HPP_
#define ALIBABACLOUD_MODELS_LISTSKILLGROUPCONFIGRESPONSEBODYDATASKILLGROUPCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListSkillGroupConfigResponseBodyDataSkillGroupConfigAllRuleList.hpp>
#include <alibabacloud/models/ListSkillGroupConfigResponseBodyDataSkillGroupConfigRuleList.hpp>
#include <alibabacloud/models/ListSkillGroupConfigResponseBodyDataSkillGroupConfigSkillGroupScreens.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class ListSkillGroupConfigResponseBodyDataSkillGroupConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSkillGroupConfigResponseBodyDataSkillGroupConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AllContentQualityCheck, allContentQualityCheck_);
      DARABONBA_PTR_TO_JSON(AllRids, allRids_);
      DARABONBA_PTR_TO_JSON(AllRuleList, allRuleList_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ModelId, modelId_);
      DARABONBA_PTR_TO_JSON(ModelName, modelName_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(QualityCheckType, qualityCheckType_);
      DARABONBA_PTR_TO_JSON(Rid, rid_);
      DARABONBA_PTR_TO_JSON(RuleList, ruleList_);
      DARABONBA_PTR_TO_JSON(ScreenSwitch, screenSwitch_);
      DARABONBA_PTR_TO_JSON(SkillGroupFrom, skillGroupFrom_);
      DARABONBA_PTR_TO_JSON(SkillGroupId, skillGroupId_);
      DARABONBA_PTR_TO_JSON(SkillGroupName, skillGroupName_);
      DARABONBA_PTR_TO_JSON(SkillGroupScreens, skillGroupScreens_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(VocabId, vocabId_);
      DARABONBA_PTR_TO_JSON(VocabName, vocabName_);
    };
    friend void from_json(const Darabonba::Json& j, ListSkillGroupConfigResponseBodyDataSkillGroupConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AllContentQualityCheck, allContentQualityCheck_);
      DARABONBA_PTR_FROM_JSON(AllRids, allRids_);
      DARABONBA_PTR_FROM_JSON(AllRuleList, allRuleList_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ModelId, modelId_);
      DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(QualityCheckType, qualityCheckType_);
      DARABONBA_PTR_FROM_JSON(Rid, rid_);
      DARABONBA_PTR_FROM_JSON(RuleList, ruleList_);
      DARABONBA_PTR_FROM_JSON(ScreenSwitch, screenSwitch_);
      DARABONBA_PTR_FROM_JSON(SkillGroupFrom, skillGroupFrom_);
      DARABONBA_PTR_FROM_JSON(SkillGroupId, skillGroupId_);
      DARABONBA_PTR_FROM_JSON(SkillGroupName, skillGroupName_);
      DARABONBA_PTR_FROM_JSON(SkillGroupScreens, skillGroupScreens_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(VocabId, vocabId_);
      DARABONBA_PTR_FROM_JSON(VocabName, vocabName_);
    };
    ListSkillGroupConfigResponseBodyDataSkillGroupConfig() = default ;
    ListSkillGroupConfigResponseBodyDataSkillGroupConfig(const ListSkillGroupConfigResponseBodyDataSkillGroupConfig &) = default ;
    ListSkillGroupConfigResponseBodyDataSkillGroupConfig(ListSkillGroupConfigResponseBodyDataSkillGroupConfig &&) = default ;
    ListSkillGroupConfigResponseBodyDataSkillGroupConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSkillGroupConfigResponseBodyDataSkillGroupConfig() = default ;
    ListSkillGroupConfigResponseBodyDataSkillGroupConfig& operator=(const ListSkillGroupConfigResponseBodyDataSkillGroupConfig &) = default ;
    ListSkillGroupConfigResponseBodyDataSkillGroupConfig& operator=(ListSkillGroupConfigResponseBodyDataSkillGroupConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allContentQualityCheck_ == nullptr
        && return this->allRids_ == nullptr && return this->allRuleList_ == nullptr && return this->createTime_ == nullptr && return this->id_ == nullptr && return this->instanceId_ == nullptr
        && return this->modelId_ == nullptr && return this->modelName_ == nullptr && return this->name_ == nullptr && return this->qualityCheckType_ == nullptr && return this->rid_ == nullptr
        && return this->ruleList_ == nullptr && return this->screenSwitch_ == nullptr && return this->skillGroupFrom_ == nullptr && return this->skillGroupId_ == nullptr && return this->skillGroupName_ == nullptr
        && return this->skillGroupScreens_ == nullptr && return this->status_ == nullptr && return this->type_ == nullptr && return this->updateTime_ == nullptr && return this->vocabId_ == nullptr
        && return this->vocabName_ == nullptr; };
    // allContentQualityCheck Field Functions 
    bool hasAllContentQualityCheck() const { return this->allContentQualityCheck_ != nullptr;};
    void deleteAllContentQualityCheck() { this->allContentQualityCheck_ = nullptr;};
    inline int32_t allContentQualityCheck() const { DARABONBA_PTR_GET_DEFAULT(allContentQualityCheck_, 0) };
    inline ListSkillGroupConfigResponseBodyDataSkillGroupConfig& setAllContentQualityCheck(int32_t allContentQualityCheck) { DARABONBA_PTR_SET_VALUE(allContentQualityCheck_, allContentQualityCheck) };


    // allRids Field Functions 
    bool hasAllRids() const { return this->allRids_ != nullptr;};
    void deleteAllRids() { this->allRids_ = nullptr;};
    inline string allRids() const { DARABONBA_PTR_GET_DEFAULT(allRids_, "") };
    inline ListSkillGroupConfigResponseBodyDataSkillGroupConfig& setAllRids(string allRids) { DARABONBA_PTR_SET_VALUE(allRids_, allRids) };


    // allRuleList Field Functions 
    bool hasAllRuleList() const { return this->allRuleList_ != nullptr;};
    void deleteAllRuleList() { this->allRuleList_ = nullptr;};
    inline const Models::ListSkillGroupConfigResponseBodyDataSkillGroupConfigAllRuleList & allRuleList() const { DARABONBA_PTR_GET_CONST(allRuleList_, Models::ListSkillGroupConfigResponseBodyDataSkillGroupConfigAllRuleList) };
    inline Models::ListSkillGroupConfigResponseBodyDataSkillGroupConfigAllRuleList allRuleList() { DARABONBA_PTR_GET(allRuleList_, Models::ListSkillGroupConfigResponseBodyDataSkillGroupConfigAllRuleList) };
    inline ListSkillGroupConfigResponseBodyDataSkillGroupConfig& setAllRuleList(const Models::ListSkillGroupConfigResponseBodyDataSkillGroupConfigAllRuleList & allRuleList) { DARABONBA_PTR_SET_VALUE(allRuleList_, allRuleList) };
    inline ListSkillGroupConfigResponseBodyDataSkillGroupConfig& setAllRuleList(Models::ListSkillGroupConfigResponseBodyDataSkillGroupConfigAllRuleList && allRuleList) { DARABONBA_PTR_SET_RVALUE(allRuleList_, allRuleList) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListSkillGroupConfigResponseBodyDataSkillGroupConfig& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListSkillGroupConfigResponseBodyDataSkillGroupConfig& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListSkillGroupConfigResponseBodyDataSkillGroupConfig& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline int64_t modelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, 0L) };
    inline ListSkillGroupConfigResponseBodyDataSkillGroupConfig& setModelId(int64_t modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // modelName Field Functions 
    bool hasModelName() const { return this->modelName_ != nullptr;};
    void deleteModelName() { this->modelName_ = nullptr;};
    inline string modelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
    inline ListSkillGroupConfigResponseBodyDataSkillGroupConfig& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListSkillGroupConfigResponseBodyDataSkillGroupConfig& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // qualityCheckType Field Functions 
    bool hasQualityCheckType() const { return this->qualityCheckType_ != nullptr;};
    void deleteQualityCheckType() { this->qualityCheckType_ = nullptr;};
    inline int32_t qualityCheckType() const { DARABONBA_PTR_GET_DEFAULT(qualityCheckType_, 0) };
    inline ListSkillGroupConfigResponseBodyDataSkillGroupConfig& setQualityCheckType(int32_t qualityCheckType) { DARABONBA_PTR_SET_VALUE(qualityCheckType_, qualityCheckType) };


    // rid Field Functions 
    bool hasRid() const { return this->rid_ != nullptr;};
    void deleteRid() { this->rid_ = nullptr;};
    inline string rid() const { DARABONBA_PTR_GET_DEFAULT(rid_, "") };
    inline ListSkillGroupConfigResponseBodyDataSkillGroupConfig& setRid(string rid) { DARABONBA_PTR_SET_VALUE(rid_, rid) };


    // ruleList Field Functions 
    bool hasRuleList() const { return this->ruleList_ != nullptr;};
    void deleteRuleList() { this->ruleList_ = nullptr;};
    inline const Models::ListSkillGroupConfigResponseBodyDataSkillGroupConfigRuleList & ruleList() const { DARABONBA_PTR_GET_CONST(ruleList_, Models::ListSkillGroupConfigResponseBodyDataSkillGroupConfigRuleList) };
    inline Models::ListSkillGroupConfigResponseBodyDataSkillGroupConfigRuleList ruleList() { DARABONBA_PTR_GET(ruleList_, Models::ListSkillGroupConfigResponseBodyDataSkillGroupConfigRuleList) };
    inline ListSkillGroupConfigResponseBodyDataSkillGroupConfig& setRuleList(const Models::ListSkillGroupConfigResponseBodyDataSkillGroupConfigRuleList & ruleList) { DARABONBA_PTR_SET_VALUE(ruleList_, ruleList) };
    inline ListSkillGroupConfigResponseBodyDataSkillGroupConfig& setRuleList(Models::ListSkillGroupConfigResponseBodyDataSkillGroupConfigRuleList && ruleList) { DARABONBA_PTR_SET_RVALUE(ruleList_, ruleList) };


    // screenSwitch Field Functions 
    bool hasScreenSwitch() const { return this->screenSwitch_ != nullptr;};
    void deleteScreenSwitch() { this->screenSwitch_ = nullptr;};
    inline bool screenSwitch() const { DARABONBA_PTR_GET_DEFAULT(screenSwitch_, false) };
    inline ListSkillGroupConfigResponseBodyDataSkillGroupConfig& setScreenSwitch(bool screenSwitch) { DARABONBA_PTR_SET_VALUE(screenSwitch_, screenSwitch) };


    // skillGroupFrom Field Functions 
    bool hasSkillGroupFrom() const { return this->skillGroupFrom_ != nullptr;};
    void deleteSkillGroupFrom() { this->skillGroupFrom_ = nullptr;};
    inline int32_t skillGroupFrom() const { DARABONBA_PTR_GET_DEFAULT(skillGroupFrom_, 0) };
    inline ListSkillGroupConfigResponseBodyDataSkillGroupConfig& setSkillGroupFrom(int32_t skillGroupFrom) { DARABONBA_PTR_SET_VALUE(skillGroupFrom_, skillGroupFrom) };


    // skillGroupId Field Functions 
    bool hasSkillGroupId() const { return this->skillGroupId_ != nullptr;};
    void deleteSkillGroupId() { this->skillGroupId_ = nullptr;};
    inline string skillGroupId() const { DARABONBA_PTR_GET_DEFAULT(skillGroupId_, "") };
    inline ListSkillGroupConfigResponseBodyDataSkillGroupConfig& setSkillGroupId(string skillGroupId) { DARABONBA_PTR_SET_VALUE(skillGroupId_, skillGroupId) };


    // skillGroupName Field Functions 
    bool hasSkillGroupName() const { return this->skillGroupName_ != nullptr;};
    void deleteSkillGroupName() { this->skillGroupName_ = nullptr;};
    inline string skillGroupName() const { DARABONBA_PTR_GET_DEFAULT(skillGroupName_, "") };
    inline ListSkillGroupConfigResponseBodyDataSkillGroupConfig& setSkillGroupName(string skillGroupName) { DARABONBA_PTR_SET_VALUE(skillGroupName_, skillGroupName) };


    // skillGroupScreens Field Functions 
    bool hasSkillGroupScreens() const { return this->skillGroupScreens_ != nullptr;};
    void deleteSkillGroupScreens() { this->skillGroupScreens_ = nullptr;};
    inline const Models::ListSkillGroupConfigResponseBodyDataSkillGroupConfigSkillGroupScreens & skillGroupScreens() const { DARABONBA_PTR_GET_CONST(skillGroupScreens_, Models::ListSkillGroupConfigResponseBodyDataSkillGroupConfigSkillGroupScreens) };
    inline Models::ListSkillGroupConfigResponseBodyDataSkillGroupConfigSkillGroupScreens skillGroupScreens() { DARABONBA_PTR_GET(skillGroupScreens_, Models::ListSkillGroupConfigResponseBodyDataSkillGroupConfigSkillGroupScreens) };
    inline ListSkillGroupConfigResponseBodyDataSkillGroupConfig& setSkillGroupScreens(const Models::ListSkillGroupConfigResponseBodyDataSkillGroupConfigSkillGroupScreens & skillGroupScreens) { DARABONBA_PTR_SET_VALUE(skillGroupScreens_, skillGroupScreens) };
    inline ListSkillGroupConfigResponseBodyDataSkillGroupConfig& setSkillGroupScreens(Models::ListSkillGroupConfigResponseBodyDataSkillGroupConfigSkillGroupScreens && skillGroupScreens) { DARABONBA_PTR_SET_RVALUE(skillGroupScreens_, skillGroupScreens) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ListSkillGroupConfigResponseBodyDataSkillGroupConfig& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline ListSkillGroupConfigResponseBodyDataSkillGroupConfig& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline ListSkillGroupConfigResponseBodyDataSkillGroupConfig& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // vocabId Field Functions 
    bool hasVocabId() const { return this->vocabId_ != nullptr;};
    void deleteVocabId() { this->vocabId_ = nullptr;};
    inline int64_t vocabId() const { DARABONBA_PTR_GET_DEFAULT(vocabId_, 0L) };
    inline ListSkillGroupConfigResponseBodyDataSkillGroupConfig& setVocabId(int64_t vocabId) { DARABONBA_PTR_SET_VALUE(vocabId_, vocabId) };


    // vocabName Field Functions 
    bool hasVocabName() const { return this->vocabName_ != nullptr;};
    void deleteVocabName() { this->vocabName_ = nullptr;};
    inline string vocabName() const { DARABONBA_PTR_GET_DEFAULT(vocabName_, "") };
    inline ListSkillGroupConfigResponseBodyDataSkillGroupConfig& setVocabName(string vocabName) { DARABONBA_PTR_SET_VALUE(vocabName_, vocabName) };


  protected:
    std::shared_ptr<int32_t> allContentQualityCheck_ = nullptr;
    std::shared_ptr<string> allRids_ = nullptr;
    std::shared_ptr<Models::ListSkillGroupConfigResponseBodyDataSkillGroupConfigAllRuleList> allRuleList_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<int64_t> modelId_ = nullptr;
    std::shared_ptr<string> modelName_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int32_t> qualityCheckType_ = nullptr;
    std::shared_ptr<string> rid_ = nullptr;
    std::shared_ptr<Models::ListSkillGroupConfigResponseBodyDataSkillGroupConfigRuleList> ruleList_ = nullptr;
    std::shared_ptr<bool> screenSwitch_ = nullptr;
    std::shared_ptr<int32_t> skillGroupFrom_ = nullptr;
    std::shared_ptr<string> skillGroupId_ = nullptr;
    std::shared_ptr<string> skillGroupName_ = nullptr;
    std::shared_ptr<Models::ListSkillGroupConfigResponseBodyDataSkillGroupConfigSkillGroupScreens> skillGroupScreens_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<int32_t> type_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
    std::shared_ptr<int64_t> vocabId_ = nullptr;
    std::shared_ptr<string> vocabName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
