// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTEMIGRATIONOPERATIONRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_EXECUTEMIGRATIONOPERATIONRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ExecuteMigrationOperationResponseBodyDataOperationParam.hpp>
#include <alibabacloud/models/ExecuteMigrationOperationResponseBodyDataOperationResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class ExecuteMigrationOperationResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteMigrationOperationResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(businessStatus, businessStatus_);
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(migrationId, migrationId_);
      DARABONBA_PTR_TO_JSON(operationId, operationId_);
      DARABONBA_PTR_TO_JSON(operationKey, operationKey_);
      DARABONBA_PTR_TO_JSON(operationParam, operationParam_);
      DARABONBA_PTR_TO_JSON(operationResult, operationResult_);
      DARABONBA_PTR_TO_JSON(operationStatus, operationStatus_);
      DARABONBA_PTR_TO_JSON(operationType, operationType_);
      DARABONBA_PTR_TO_JSON(stageType, stageType_);
      DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteMigrationOperationResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(businessStatus, businessStatus_);
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(migrationId, migrationId_);
      DARABONBA_PTR_FROM_JSON(operationId, operationId_);
      DARABONBA_PTR_FROM_JSON(operationKey, operationKey_);
      DARABONBA_PTR_FROM_JSON(operationParam, operationParam_);
      DARABONBA_PTR_FROM_JSON(operationResult, operationResult_);
      DARABONBA_PTR_FROM_JSON(operationStatus, operationStatus_);
      DARABONBA_PTR_FROM_JSON(operationType, operationType_);
      DARABONBA_PTR_FROM_JSON(stageType, stageType_);
      DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
    };
    ExecuteMigrationOperationResponseBodyData() = default ;
    ExecuteMigrationOperationResponseBodyData(const ExecuteMigrationOperationResponseBodyData &) = default ;
    ExecuteMigrationOperationResponseBodyData(ExecuteMigrationOperationResponseBodyData &&) = default ;
    ExecuteMigrationOperationResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteMigrationOperationResponseBodyData() = default ;
    ExecuteMigrationOperationResponseBodyData& operator=(const ExecuteMigrationOperationResponseBodyData &) = default ;
    ExecuteMigrationOperationResponseBodyData& operator=(ExecuteMigrationOperationResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->businessStatus_ != nullptr
        && this->createTime_ != nullptr && this->migrationId_ != nullptr && this->operationId_ != nullptr && this->operationKey_ != nullptr && this->operationParam_ != nullptr
        && this->operationResult_ != nullptr && this->operationStatus_ != nullptr && this->operationType_ != nullptr && this->stageType_ != nullptr && this->updateTime_ != nullptr; };
    // businessStatus Field Functions 
    bool hasBusinessStatus() const { return this->businessStatus_ != nullptr;};
    void deleteBusinessStatus() { this->businessStatus_ = nullptr;};
    inline string businessStatus() const { DARABONBA_PTR_GET_DEFAULT(businessStatus_, "") };
    inline ExecuteMigrationOperationResponseBodyData& setBusinessStatus(string businessStatus) { DARABONBA_PTR_SET_VALUE(businessStatus_, businessStatus) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ExecuteMigrationOperationResponseBodyData& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // migrationId Field Functions 
    bool hasMigrationId() const { return this->migrationId_ != nullptr;};
    void deleteMigrationId() { this->migrationId_ = nullptr;};
    inline int64_t migrationId() const { DARABONBA_PTR_GET_DEFAULT(migrationId_, 0L) };
    inline ExecuteMigrationOperationResponseBodyData& setMigrationId(int64_t migrationId) { DARABONBA_PTR_SET_VALUE(migrationId_, migrationId) };


    // operationId Field Functions 
    bool hasOperationId() const { return this->operationId_ != nullptr;};
    void deleteOperationId() { this->operationId_ = nullptr;};
    inline int64_t operationId() const { DARABONBA_PTR_GET_DEFAULT(operationId_, 0L) };
    inline ExecuteMigrationOperationResponseBodyData& setOperationId(int64_t operationId) { DARABONBA_PTR_SET_VALUE(operationId_, operationId) };


    // operationKey Field Functions 
    bool hasOperationKey() const { return this->operationKey_ != nullptr;};
    void deleteOperationKey() { this->operationKey_ = nullptr;};
    inline string operationKey() const { DARABONBA_PTR_GET_DEFAULT(operationKey_, "") };
    inline ExecuteMigrationOperationResponseBodyData& setOperationKey(string operationKey) { DARABONBA_PTR_SET_VALUE(operationKey_, operationKey) };


    // operationParam Field Functions 
    bool hasOperationParam() const { return this->operationParam_ != nullptr;};
    void deleteOperationParam() { this->operationParam_ = nullptr;};
    inline const Models::ExecuteMigrationOperationResponseBodyDataOperationParam & operationParam() const { DARABONBA_PTR_GET_CONST(operationParam_, Models::ExecuteMigrationOperationResponseBodyDataOperationParam) };
    inline Models::ExecuteMigrationOperationResponseBodyDataOperationParam operationParam() { DARABONBA_PTR_GET(operationParam_, Models::ExecuteMigrationOperationResponseBodyDataOperationParam) };
    inline ExecuteMigrationOperationResponseBodyData& setOperationParam(const Models::ExecuteMigrationOperationResponseBodyDataOperationParam & operationParam) { DARABONBA_PTR_SET_VALUE(operationParam_, operationParam) };
    inline ExecuteMigrationOperationResponseBodyData& setOperationParam(Models::ExecuteMigrationOperationResponseBodyDataOperationParam && operationParam) { DARABONBA_PTR_SET_RVALUE(operationParam_, operationParam) };


    // operationResult Field Functions 
    bool hasOperationResult() const { return this->operationResult_ != nullptr;};
    void deleteOperationResult() { this->operationResult_ = nullptr;};
    inline const Models::ExecuteMigrationOperationResponseBodyDataOperationResult & operationResult() const { DARABONBA_PTR_GET_CONST(operationResult_, Models::ExecuteMigrationOperationResponseBodyDataOperationResult) };
    inline Models::ExecuteMigrationOperationResponseBodyDataOperationResult operationResult() { DARABONBA_PTR_GET(operationResult_, Models::ExecuteMigrationOperationResponseBodyDataOperationResult) };
    inline ExecuteMigrationOperationResponseBodyData& setOperationResult(const Models::ExecuteMigrationOperationResponseBodyDataOperationResult & operationResult) { DARABONBA_PTR_SET_VALUE(operationResult_, operationResult) };
    inline ExecuteMigrationOperationResponseBodyData& setOperationResult(Models::ExecuteMigrationOperationResponseBodyDataOperationResult && operationResult) { DARABONBA_PTR_SET_RVALUE(operationResult_, operationResult) };


    // operationStatus Field Functions 
    bool hasOperationStatus() const { return this->operationStatus_ != nullptr;};
    void deleteOperationStatus() { this->operationStatus_ = nullptr;};
    inline string operationStatus() const { DARABONBA_PTR_GET_DEFAULT(operationStatus_, "") };
    inline ExecuteMigrationOperationResponseBodyData& setOperationStatus(string operationStatus) { DARABONBA_PTR_SET_VALUE(operationStatus_, operationStatus) };


    // operationType Field Functions 
    bool hasOperationType() const { return this->operationType_ != nullptr;};
    void deleteOperationType() { this->operationType_ = nullptr;};
    inline string operationType() const { DARABONBA_PTR_GET_DEFAULT(operationType_, "") };
    inline ExecuteMigrationOperationResponseBodyData& setOperationType(string operationType) { DARABONBA_PTR_SET_VALUE(operationType_, operationType) };


    // stageType Field Functions 
    bool hasStageType() const { return this->stageType_ != nullptr;};
    void deleteStageType() { this->stageType_ = nullptr;};
    inline string stageType() const { DARABONBA_PTR_GET_DEFAULT(stageType_, "") };
    inline ExecuteMigrationOperationResponseBodyData& setStageType(string stageType) { DARABONBA_PTR_SET_VALUE(stageType_, stageType) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline ExecuteMigrationOperationResponseBodyData& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    std::shared_ptr<string> businessStatus_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<int64_t> migrationId_ = nullptr;
    std::shared_ptr<int64_t> operationId_ = nullptr;
    std::shared_ptr<string> operationKey_ = nullptr;
    std::shared_ptr<Models::ExecuteMigrationOperationResponseBodyDataOperationParam> operationParam_ = nullptr;
    std::shared_ptr<Models::ExecuteMigrationOperationResponseBodyDataOperationResult> operationResult_ = nullptr;
    std::shared_ptr<string> operationStatus_ = nullptr;
    std::shared_ptr<string> operationType_ = nullptr;
    std::shared_ptr<string> stageType_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
