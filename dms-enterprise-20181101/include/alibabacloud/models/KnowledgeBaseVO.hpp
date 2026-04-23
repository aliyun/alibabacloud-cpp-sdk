// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_KNOWLEDGEBASEVO_HPP_
#define ALIBABACLOUD_MODELS_KNOWLEDGEBASEVO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class KnowledgeBaseVO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const KnowledgeBaseVO& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(Confidence, confidence_);
      DARABONBA_PTR_TO_JSON(DbId, dbId_);
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EntityId, entityId_);
      DARABONBA_PTR_TO_JSON(Env, env_);
      DARABONBA_PTR_TO_JSON(Expr, expr_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(IsDelete, isDelete_);
      DARABONBA_PTR_TO_JSON(KnowledgeId, knowledgeId_);
      DARABONBA_PTR_TO_JSON(KnowledgeType, knowledgeType_);
      DARABONBA_PTR_TO_JSON(LevelType, levelType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OldDescription, oldDescription_);
      DARABONBA_PTR_TO_JSON(OldSummary, oldSummary_);
      DARABONBA_PTR_TO_JSON(ParseDesc, parseDesc_);
      DARABONBA_PTR_TO_JSON(ReasoningLogic, reasoningLogic_);
      DARABONBA_PTR_TO_JSON(RelationType, relationType_);
      DARABONBA_PTR_TO_JSON(ShowType, showType_);
      DARABONBA_PTR_TO_JSON(Summary, summary_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
    };
    friend void from_json(const Darabonba::Json& j, KnowledgeBaseVO& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(Confidence, confidence_);
      DARABONBA_PTR_FROM_JSON(DbId, dbId_);
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EntityId, entityId_);
      DARABONBA_PTR_FROM_JSON(Env, env_);
      DARABONBA_PTR_FROM_JSON(Expr, expr_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(IsDelete, isDelete_);
      DARABONBA_PTR_FROM_JSON(KnowledgeId, knowledgeId_);
      DARABONBA_PTR_FROM_JSON(KnowledgeType, knowledgeType_);
      DARABONBA_PTR_FROM_JSON(LevelType, levelType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OldDescription, oldDescription_);
      DARABONBA_PTR_FROM_JSON(OldSummary, oldSummary_);
      DARABONBA_PTR_FROM_JSON(ParseDesc, parseDesc_);
      DARABONBA_PTR_FROM_JSON(ReasoningLogic, reasoningLogic_);
      DARABONBA_PTR_FROM_JSON(RelationType, relationType_);
      DARABONBA_PTR_FROM_JSON(ShowType, showType_);
      DARABONBA_PTR_FROM_JSON(Summary, summary_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
    };
    KnowledgeBaseVO() = default ;
    KnowledgeBaseVO(const KnowledgeBaseVO &) = default ;
    KnowledgeBaseVO(KnowledgeBaseVO &&) = default ;
    KnowledgeBaseVO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~KnowledgeBaseVO() = default ;
    KnowledgeBaseVO& operator=(const KnowledgeBaseVO &) = default ;
    KnowledgeBaseVO& operator=(KnowledgeBaseVO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && this->confidence_ == nullptr && this->dbId_ == nullptr && this->dbName_ == nullptr && this->description_ == nullptr && this->entityId_ == nullptr
        && this->env_ == nullptr && this->expr_ == nullptr && this->gmtCreate_ == nullptr && this->instanceName_ == nullptr && this->isDelete_ == nullptr
        && this->knowledgeId_ == nullptr && this->knowledgeType_ == nullptr && this->levelType_ == nullptr && this->name_ == nullptr && this->oldDescription_ == nullptr
        && this->oldSummary_ == nullptr && this->parseDesc_ == nullptr && this->reasoningLogic_ == nullptr && this->relationType_ == nullptr && this->showType_ == nullptr
        && this->summary_ == nullptr && this->tableName_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline KnowledgeBaseVO& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // confidence Field Functions 
    bool hasConfidence() const { return this->confidence_ != nullptr;};
    void deleteConfidence() { this->confidence_ = nullptr;};
    inline double getConfidence() const { DARABONBA_PTR_GET_DEFAULT(confidence_, 0.0) };
    inline KnowledgeBaseVO& setConfidence(double confidence) { DARABONBA_PTR_SET_VALUE(confidence_, confidence) };


    // dbId Field Functions 
    bool hasDbId() const { return this->dbId_ != nullptr;};
    void deleteDbId() { this->dbId_ = nullptr;};
    inline int32_t getDbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0) };
    inline KnowledgeBaseVO& setDbId(int32_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string getDbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline KnowledgeBaseVO& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline KnowledgeBaseVO& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // entityId Field Functions 
    bool hasEntityId() const { return this->entityId_ != nullptr;};
    void deleteEntityId() { this->entityId_ = nullptr;};
    inline int64_t getEntityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, 0L) };
    inline KnowledgeBaseVO& setEntityId(int64_t entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline string getEnv() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
    inline KnowledgeBaseVO& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


    // expr Field Functions 
    bool hasExpr() const { return this->expr_ != nullptr;};
    void deleteExpr() { this->expr_ = nullptr;};
    inline string getExpr() const { DARABONBA_PTR_GET_DEFAULT(expr_, "") };
    inline KnowledgeBaseVO& setExpr(string expr) { DARABONBA_PTR_SET_VALUE(expr_, expr) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline KnowledgeBaseVO& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline KnowledgeBaseVO& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // isDelete Field Functions 
    bool hasIsDelete() const { return this->isDelete_ != nullptr;};
    void deleteIsDelete() { this->isDelete_ = nullptr;};
    inline bool getIsDelete() const { DARABONBA_PTR_GET_DEFAULT(isDelete_, false) };
    inline KnowledgeBaseVO& setIsDelete(bool isDelete) { DARABONBA_PTR_SET_VALUE(isDelete_, isDelete) };


    // knowledgeId Field Functions 
    bool hasKnowledgeId() const { return this->knowledgeId_ != nullptr;};
    void deleteKnowledgeId() { this->knowledgeId_ = nullptr;};
    inline string getKnowledgeId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeId_, "") };
    inline KnowledgeBaseVO& setKnowledgeId(string knowledgeId) { DARABONBA_PTR_SET_VALUE(knowledgeId_, knowledgeId) };


    // knowledgeType Field Functions 
    bool hasKnowledgeType() const { return this->knowledgeType_ != nullptr;};
    void deleteKnowledgeType() { this->knowledgeType_ = nullptr;};
    inline string getKnowledgeType() const { DARABONBA_PTR_GET_DEFAULT(knowledgeType_, "") };
    inline KnowledgeBaseVO& setKnowledgeType(string knowledgeType) { DARABONBA_PTR_SET_VALUE(knowledgeType_, knowledgeType) };


    // levelType Field Functions 
    bool hasLevelType() const { return this->levelType_ != nullptr;};
    void deleteLevelType() { this->levelType_ = nullptr;};
    inline string getLevelType() const { DARABONBA_PTR_GET_DEFAULT(levelType_, "") };
    inline KnowledgeBaseVO& setLevelType(string levelType) { DARABONBA_PTR_SET_VALUE(levelType_, levelType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline KnowledgeBaseVO& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // oldDescription Field Functions 
    bool hasOldDescription() const { return this->oldDescription_ != nullptr;};
    void deleteOldDescription() { this->oldDescription_ = nullptr;};
    inline string getOldDescription() const { DARABONBA_PTR_GET_DEFAULT(oldDescription_, "") };
    inline KnowledgeBaseVO& setOldDescription(string oldDescription) { DARABONBA_PTR_SET_VALUE(oldDescription_, oldDescription) };


    // oldSummary Field Functions 
    bool hasOldSummary() const { return this->oldSummary_ != nullptr;};
    void deleteOldSummary() { this->oldSummary_ = nullptr;};
    inline string getOldSummary() const { DARABONBA_PTR_GET_DEFAULT(oldSummary_, "") };
    inline KnowledgeBaseVO& setOldSummary(string oldSummary) { DARABONBA_PTR_SET_VALUE(oldSummary_, oldSummary) };


    // parseDesc Field Functions 
    bool hasParseDesc() const { return this->parseDesc_ != nullptr;};
    void deleteParseDesc() { this->parseDesc_ = nullptr;};
    inline string getParseDesc() const { DARABONBA_PTR_GET_DEFAULT(parseDesc_, "") };
    inline KnowledgeBaseVO& setParseDesc(string parseDesc) { DARABONBA_PTR_SET_VALUE(parseDesc_, parseDesc) };


    // reasoningLogic Field Functions 
    bool hasReasoningLogic() const { return this->reasoningLogic_ != nullptr;};
    void deleteReasoningLogic() { this->reasoningLogic_ = nullptr;};
    inline string getReasoningLogic() const { DARABONBA_PTR_GET_DEFAULT(reasoningLogic_, "") };
    inline KnowledgeBaseVO& setReasoningLogic(string reasoningLogic) { DARABONBA_PTR_SET_VALUE(reasoningLogic_, reasoningLogic) };


    // relationType Field Functions 
    bool hasRelationType() const { return this->relationType_ != nullptr;};
    void deleteRelationType() { this->relationType_ = nullptr;};
    inline string getRelationType() const { DARABONBA_PTR_GET_DEFAULT(relationType_, "") };
    inline KnowledgeBaseVO& setRelationType(string relationType) { DARABONBA_PTR_SET_VALUE(relationType_, relationType) };


    // showType Field Functions 
    bool hasShowType() const { return this->showType_ != nullptr;};
    void deleteShowType() { this->showType_ = nullptr;};
    inline string getShowType() const { DARABONBA_PTR_GET_DEFAULT(showType_, "") };
    inline KnowledgeBaseVO& setShowType(string showType) { DARABONBA_PTR_SET_VALUE(showType_, showType) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
    inline KnowledgeBaseVO& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline KnowledgeBaseVO& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    shared_ptr<string> category_ {};
    shared_ptr<double> confidence_ {};
    shared_ptr<int32_t> dbId_ {};
    shared_ptr<string> dbName_ {};
    shared_ptr<string> description_ {};
    shared_ptr<int64_t> entityId_ {};
    shared_ptr<string> env_ {};
    shared_ptr<string> expr_ {};
    shared_ptr<string> gmtCreate_ {};
    shared_ptr<string> instanceName_ {};
    shared_ptr<bool> isDelete_ {};
    shared_ptr<string> knowledgeId_ {};
    shared_ptr<string> knowledgeType_ {};
    shared_ptr<string> levelType_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> oldDescription_ {};
    shared_ptr<string> oldSummary_ {};
    shared_ptr<string> parseDesc_ {};
    shared_ptr<string> reasoningLogic_ {};
    shared_ptr<string> relationType_ {};
    shared_ptr<string> showType_ {};
    shared_ptr<string> summary_ {};
    shared_ptr<string> tableName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
