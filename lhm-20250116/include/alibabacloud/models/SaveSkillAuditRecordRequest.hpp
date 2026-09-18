// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVESKILLAUDITRECORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVESKILLAUDITRECORDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LHM20250116
{
namespace Models
{
  class SaveSkillAuditRecordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveSkillAuditRecordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(batchId, batchId_);
      DARABONBA_PTR_TO_JSON(cid, cid_);
      DARABONBA_PTR_TO_JSON(dryRunStatus, dryRunStatus_);
      DARABONBA_PTR_TO_JSON(extInfo, extInfo_);
      DARABONBA_PTR_TO_JSON(recordType, recordType_);
      DARABONBA_PTR_TO_JSON(scriptTransformResult, scriptTransformResult_);
      DARABONBA_PTR_TO_JSON(scriptTransformStatus, scriptTransformStatus_);
      DARABONBA_PTR_TO_JSON(sourceDialect, sourceDialect_);
      DARABONBA_PTR_TO_JSON(sourceSqlScript, sourceSqlScript_);
      DARABONBA_PTR_TO_JSON(targetDialect, targetDialect_);
    };
    friend void from_json(const Darabonba::Json& j, SaveSkillAuditRecordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(batchId, batchId_);
      DARABONBA_PTR_FROM_JSON(cid, cid_);
      DARABONBA_PTR_FROM_JSON(dryRunStatus, dryRunStatus_);
      DARABONBA_PTR_FROM_JSON(extInfo, extInfo_);
      DARABONBA_PTR_FROM_JSON(recordType, recordType_);
      DARABONBA_PTR_FROM_JSON(scriptTransformResult, scriptTransformResult_);
      DARABONBA_PTR_FROM_JSON(scriptTransformStatus, scriptTransformStatus_);
      DARABONBA_PTR_FROM_JSON(sourceDialect, sourceDialect_);
      DARABONBA_PTR_FROM_JSON(sourceSqlScript, sourceSqlScript_);
      DARABONBA_PTR_FROM_JSON(targetDialect, targetDialect_);
    };
    SaveSkillAuditRecordRequest() = default ;
    SaveSkillAuditRecordRequest(const SaveSkillAuditRecordRequest &) = default ;
    SaveSkillAuditRecordRequest(SaveSkillAuditRecordRequest &&) = default ;
    SaveSkillAuditRecordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveSkillAuditRecordRequest() = default ;
    SaveSkillAuditRecordRequest& operator=(const SaveSkillAuditRecordRequest &) = default ;
    SaveSkillAuditRecordRequest& operator=(SaveSkillAuditRecordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->batchId_ == nullptr
        && this->cid_ == nullptr && this->dryRunStatus_ == nullptr && this->extInfo_ == nullptr && this->recordType_ == nullptr && this->scriptTransformResult_ == nullptr
        && this->scriptTransformStatus_ == nullptr && this->sourceDialect_ == nullptr && this->sourceSqlScript_ == nullptr && this->targetDialect_ == nullptr; };
    // batchId Field Functions 
    bool hasBatchId() const { return this->batchId_ != nullptr;};
    void deleteBatchId() { this->batchId_ = nullptr;};
    inline string getBatchId() const { DARABONBA_PTR_GET_DEFAULT(batchId_, "") };
    inline SaveSkillAuditRecordRequest& setBatchId(string batchId) { DARABONBA_PTR_SET_VALUE(batchId_, batchId) };


    // cid Field Functions 
    bool hasCid() const { return this->cid_ != nullptr;};
    void deleteCid() { this->cid_ = nullptr;};
    inline string getCid() const { DARABONBA_PTR_GET_DEFAULT(cid_, "") };
    inline SaveSkillAuditRecordRequest& setCid(string cid) { DARABONBA_PTR_SET_VALUE(cid_, cid) };


    // dryRunStatus Field Functions 
    bool hasDryRunStatus() const { return this->dryRunStatus_ != nullptr;};
    void deleteDryRunStatus() { this->dryRunStatus_ = nullptr;};
    inline string getDryRunStatus() const { DARABONBA_PTR_GET_DEFAULT(dryRunStatus_, "") };
    inline SaveSkillAuditRecordRequest& setDryRunStatus(string dryRunStatus) { DARABONBA_PTR_SET_VALUE(dryRunStatus_, dryRunStatus) };


    // extInfo Field Functions 
    bool hasExtInfo() const { return this->extInfo_ != nullptr;};
    void deleteExtInfo() { this->extInfo_ = nullptr;};
    inline string getExtInfo() const { DARABONBA_PTR_GET_DEFAULT(extInfo_, "") };
    inline SaveSkillAuditRecordRequest& setExtInfo(string extInfo) { DARABONBA_PTR_SET_VALUE(extInfo_, extInfo) };


    // recordType Field Functions 
    bool hasRecordType() const { return this->recordType_ != nullptr;};
    void deleteRecordType() { this->recordType_ = nullptr;};
    inline string getRecordType() const { DARABONBA_PTR_GET_DEFAULT(recordType_, "") };
    inline SaveSkillAuditRecordRequest& setRecordType(string recordType) { DARABONBA_PTR_SET_VALUE(recordType_, recordType) };


    // scriptTransformResult Field Functions 
    bool hasScriptTransformResult() const { return this->scriptTransformResult_ != nullptr;};
    void deleteScriptTransformResult() { this->scriptTransformResult_ = nullptr;};
    inline string getScriptTransformResult() const { DARABONBA_PTR_GET_DEFAULT(scriptTransformResult_, "") };
    inline SaveSkillAuditRecordRequest& setScriptTransformResult(string scriptTransformResult) { DARABONBA_PTR_SET_VALUE(scriptTransformResult_, scriptTransformResult) };


    // scriptTransformStatus Field Functions 
    bool hasScriptTransformStatus() const { return this->scriptTransformStatus_ != nullptr;};
    void deleteScriptTransformStatus() { this->scriptTransformStatus_ = nullptr;};
    inline string getScriptTransformStatus() const { DARABONBA_PTR_GET_DEFAULT(scriptTransformStatus_, "") };
    inline SaveSkillAuditRecordRequest& setScriptTransformStatus(string scriptTransformStatus) { DARABONBA_PTR_SET_VALUE(scriptTransformStatus_, scriptTransformStatus) };


    // sourceDialect Field Functions 
    bool hasSourceDialect() const { return this->sourceDialect_ != nullptr;};
    void deleteSourceDialect() { this->sourceDialect_ = nullptr;};
    inline string getSourceDialect() const { DARABONBA_PTR_GET_DEFAULT(sourceDialect_, "") };
    inline SaveSkillAuditRecordRequest& setSourceDialect(string sourceDialect) { DARABONBA_PTR_SET_VALUE(sourceDialect_, sourceDialect) };


    // sourceSqlScript Field Functions 
    bool hasSourceSqlScript() const { return this->sourceSqlScript_ != nullptr;};
    void deleteSourceSqlScript() { this->sourceSqlScript_ = nullptr;};
    inline string getSourceSqlScript() const { DARABONBA_PTR_GET_DEFAULT(sourceSqlScript_, "") };
    inline SaveSkillAuditRecordRequest& setSourceSqlScript(string sourceSqlScript) { DARABONBA_PTR_SET_VALUE(sourceSqlScript_, sourceSqlScript) };


    // targetDialect Field Functions 
    bool hasTargetDialect() const { return this->targetDialect_ != nullptr;};
    void deleteTargetDialect() { this->targetDialect_ = nullptr;};
    inline string getTargetDialect() const { DARABONBA_PTR_GET_DEFAULT(targetDialect_, "") };
    inline SaveSkillAuditRecordRequest& setTargetDialect(string targetDialect) { DARABONBA_PTR_SET_VALUE(targetDialect_, targetDialect) };


  protected:
    // The batch ID.
    shared_ptr<string> batchId_ {};
    // The tenant ID.
    shared_ptr<string> cid_ {};
    // The dry run status.
    shared_ptr<string> dryRunStatus_ {};
    // The extended information.
    shared_ptr<string> extInfo_ {};
    // The record type.
    shared_ptr<string> recordType_ {};
    // The conversion result.
    shared_ptr<string> scriptTransformResult_ {};
    // The conversion status.
    shared_ptr<string> scriptTransformStatus_ {};
    // The source dialect.
    shared_ptr<string> sourceDialect_ {};
    // The source dialect content.
    shared_ptr<string> sourceSqlScript_ {};
    // The target dialect.
    shared_ptr<string> targetDialect_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LHM20250116
#endif
