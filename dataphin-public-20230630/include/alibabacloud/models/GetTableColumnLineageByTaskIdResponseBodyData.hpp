// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTABLECOLUMNLINEAGEBYTASKIDRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETTABLECOLUMNLINEAGEBYTASKIDRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetTableColumnLineageByTaskIdResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTableColumnLineageByTaskIdResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(InputBizUnitId, inputBizUnitId_);
      DARABONBA_PTR_TO_JSON(InputColumnId, inputColumnId_);
      DARABONBA_PTR_TO_JSON(InputColumnName, inputColumnName_);
      DARABONBA_PTR_TO_JSON(InputDataSourceId, inputDataSourceId_);
      DARABONBA_PTR_TO_JSON(InputDataSourceType, inputDataSourceType_);
      DARABONBA_PTR_TO_JSON(InputDbType, inputDbType_);
      DARABONBA_PTR_TO_JSON(InputEnv, inputEnv_);
      DARABONBA_PTR_TO_JSON(InputProjectId, inputProjectId_);
      DARABONBA_PTR_TO_JSON(InputTableDeleted, inputTableDeleted_);
      DARABONBA_PTR_TO_JSON(InputTableId, inputTableId_);
      DARABONBA_PTR_TO_JSON(InputTableName, inputTableName_);
      DARABONBA_PTR_TO_JSON(InputTableType, inputTableType_);
      DARABONBA_PTR_TO_JSON(OutputBizUnitId, outputBizUnitId_);
      DARABONBA_PTR_TO_JSON(OutputColumnId, outputColumnId_);
      DARABONBA_PTR_TO_JSON(OutputColumnName, outputColumnName_);
      DARABONBA_PTR_TO_JSON(OutputDataSourceId, outputDataSourceId_);
      DARABONBA_PTR_TO_JSON(OutputDataSourceType, outputDataSourceType_);
      DARABONBA_PTR_TO_JSON(OutputDbType, outputDbType_);
      DARABONBA_PTR_TO_JSON(OutputEnv, outputEnv_);
      DARABONBA_PTR_TO_JSON(OutputProjectId, outputProjectId_);
      DARABONBA_PTR_TO_JSON(OutputTableDeleted, outputTableDeleted_);
      DARABONBA_PTR_TO_JSON(OutputTableId, outputTableId_);
      DARABONBA_PTR_TO_JSON(OutputTableName, outputTableName_);
      DARABONBA_PTR_TO_JSON(OutputTableType, outputTableType_);
      DARABONBA_PTR_TO_JSON(TaskEnv, taskEnv_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, GetTableColumnLineageByTaskIdResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(InputBizUnitId, inputBizUnitId_);
      DARABONBA_PTR_FROM_JSON(InputColumnId, inputColumnId_);
      DARABONBA_PTR_FROM_JSON(InputColumnName, inputColumnName_);
      DARABONBA_PTR_FROM_JSON(InputDataSourceId, inputDataSourceId_);
      DARABONBA_PTR_FROM_JSON(InputDataSourceType, inputDataSourceType_);
      DARABONBA_PTR_FROM_JSON(InputDbType, inputDbType_);
      DARABONBA_PTR_FROM_JSON(InputEnv, inputEnv_);
      DARABONBA_PTR_FROM_JSON(InputProjectId, inputProjectId_);
      DARABONBA_PTR_FROM_JSON(InputTableDeleted, inputTableDeleted_);
      DARABONBA_PTR_FROM_JSON(InputTableId, inputTableId_);
      DARABONBA_PTR_FROM_JSON(InputTableName, inputTableName_);
      DARABONBA_PTR_FROM_JSON(InputTableType, inputTableType_);
      DARABONBA_PTR_FROM_JSON(OutputBizUnitId, outputBizUnitId_);
      DARABONBA_PTR_FROM_JSON(OutputColumnId, outputColumnId_);
      DARABONBA_PTR_FROM_JSON(OutputColumnName, outputColumnName_);
      DARABONBA_PTR_FROM_JSON(OutputDataSourceId, outputDataSourceId_);
      DARABONBA_PTR_FROM_JSON(OutputDataSourceType, outputDataSourceType_);
      DARABONBA_PTR_FROM_JSON(OutputDbType, outputDbType_);
      DARABONBA_PTR_FROM_JSON(OutputEnv, outputEnv_);
      DARABONBA_PTR_FROM_JSON(OutputProjectId, outputProjectId_);
      DARABONBA_PTR_FROM_JSON(OutputTableDeleted, outputTableDeleted_);
      DARABONBA_PTR_FROM_JSON(OutputTableId, outputTableId_);
      DARABONBA_PTR_FROM_JSON(OutputTableName, outputTableName_);
      DARABONBA_PTR_FROM_JSON(OutputTableType, outputTableType_);
      DARABONBA_PTR_FROM_JSON(TaskEnv, taskEnv_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
    };
    GetTableColumnLineageByTaskIdResponseBodyData() = default ;
    GetTableColumnLineageByTaskIdResponseBodyData(const GetTableColumnLineageByTaskIdResponseBodyData &) = default ;
    GetTableColumnLineageByTaskIdResponseBodyData(GetTableColumnLineageByTaskIdResponseBodyData &&) = default ;
    GetTableColumnLineageByTaskIdResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTableColumnLineageByTaskIdResponseBodyData() = default ;
    GetTableColumnLineageByTaskIdResponseBodyData& operator=(const GetTableColumnLineageByTaskIdResponseBodyData &) = default ;
    GetTableColumnLineageByTaskIdResponseBodyData& operator=(GetTableColumnLineageByTaskIdResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->inputBizUnitId_ != nullptr
        && this->inputColumnId_ != nullptr && this->inputColumnName_ != nullptr && this->inputDataSourceId_ != nullptr && this->inputDataSourceType_ != nullptr && this->inputDbType_ != nullptr
        && this->inputEnv_ != nullptr && this->inputProjectId_ != nullptr && this->inputTableDeleted_ != nullptr && this->inputTableId_ != nullptr && this->inputTableName_ != nullptr
        && this->inputTableType_ != nullptr && this->outputBizUnitId_ != nullptr && this->outputColumnId_ != nullptr && this->outputColumnName_ != nullptr && this->outputDataSourceId_ != nullptr
        && this->outputDataSourceType_ != nullptr && this->outputDbType_ != nullptr && this->outputEnv_ != nullptr && this->outputProjectId_ != nullptr && this->outputTableDeleted_ != nullptr
        && this->outputTableId_ != nullptr && this->outputTableName_ != nullptr && this->outputTableType_ != nullptr && this->taskEnv_ != nullptr && this->taskId_ != nullptr
        && this->tenantId_ != nullptr; };
    // inputBizUnitId Field Functions 
    bool hasInputBizUnitId() const { return this->inputBizUnitId_ != nullptr;};
    void deleteInputBizUnitId() { this->inputBizUnitId_ = nullptr;};
    inline int64_t inputBizUnitId() const { DARABONBA_PTR_GET_DEFAULT(inputBizUnitId_, 0L) };
    inline GetTableColumnLineageByTaskIdResponseBodyData& setInputBizUnitId(int64_t inputBizUnitId) { DARABONBA_PTR_SET_VALUE(inputBizUnitId_, inputBizUnitId) };


    // inputColumnId Field Functions 
    bool hasInputColumnId() const { return this->inputColumnId_ != nullptr;};
    void deleteInputColumnId() { this->inputColumnId_ = nullptr;};
    inline string inputColumnId() const { DARABONBA_PTR_GET_DEFAULT(inputColumnId_, "") };
    inline GetTableColumnLineageByTaskIdResponseBodyData& setInputColumnId(string inputColumnId) { DARABONBA_PTR_SET_VALUE(inputColumnId_, inputColumnId) };


    // inputColumnName Field Functions 
    bool hasInputColumnName() const { return this->inputColumnName_ != nullptr;};
    void deleteInputColumnName() { this->inputColumnName_ = nullptr;};
    inline string inputColumnName() const { DARABONBA_PTR_GET_DEFAULT(inputColumnName_, "") };
    inline GetTableColumnLineageByTaskIdResponseBodyData& setInputColumnName(string inputColumnName) { DARABONBA_PTR_SET_VALUE(inputColumnName_, inputColumnName) };


    // inputDataSourceId Field Functions 
    bool hasInputDataSourceId() const { return this->inputDataSourceId_ != nullptr;};
    void deleteInputDataSourceId() { this->inputDataSourceId_ = nullptr;};
    inline int64_t inputDataSourceId() const { DARABONBA_PTR_GET_DEFAULT(inputDataSourceId_, 0L) };
    inline GetTableColumnLineageByTaskIdResponseBodyData& setInputDataSourceId(int64_t inputDataSourceId) { DARABONBA_PTR_SET_VALUE(inputDataSourceId_, inputDataSourceId) };


    // inputDataSourceType Field Functions 
    bool hasInputDataSourceType() const { return this->inputDataSourceType_ != nullptr;};
    void deleteInputDataSourceType() { this->inputDataSourceType_ = nullptr;};
    inline string inputDataSourceType() const { DARABONBA_PTR_GET_DEFAULT(inputDataSourceType_, "") };
    inline GetTableColumnLineageByTaskIdResponseBodyData& setInputDataSourceType(string inputDataSourceType) { DARABONBA_PTR_SET_VALUE(inputDataSourceType_, inputDataSourceType) };


    // inputDbType Field Functions 
    bool hasInputDbType() const { return this->inputDbType_ != nullptr;};
    void deleteInputDbType() { this->inputDbType_ = nullptr;};
    inline string inputDbType() const { DARABONBA_PTR_GET_DEFAULT(inputDbType_, "") };
    inline GetTableColumnLineageByTaskIdResponseBodyData& setInputDbType(string inputDbType) { DARABONBA_PTR_SET_VALUE(inputDbType_, inputDbType) };


    // inputEnv Field Functions 
    bool hasInputEnv() const { return this->inputEnv_ != nullptr;};
    void deleteInputEnv() { this->inputEnv_ = nullptr;};
    inline string inputEnv() const { DARABONBA_PTR_GET_DEFAULT(inputEnv_, "") };
    inline GetTableColumnLineageByTaskIdResponseBodyData& setInputEnv(string inputEnv) { DARABONBA_PTR_SET_VALUE(inputEnv_, inputEnv) };


    // inputProjectId Field Functions 
    bool hasInputProjectId() const { return this->inputProjectId_ != nullptr;};
    void deleteInputProjectId() { this->inputProjectId_ = nullptr;};
    inline int64_t inputProjectId() const { DARABONBA_PTR_GET_DEFAULT(inputProjectId_, 0L) };
    inline GetTableColumnLineageByTaskIdResponseBodyData& setInputProjectId(int64_t inputProjectId) { DARABONBA_PTR_SET_VALUE(inputProjectId_, inputProjectId) };


    // inputTableDeleted Field Functions 
    bool hasInputTableDeleted() const { return this->inputTableDeleted_ != nullptr;};
    void deleteInputTableDeleted() { this->inputTableDeleted_ = nullptr;};
    inline bool inputTableDeleted() const { DARABONBA_PTR_GET_DEFAULT(inputTableDeleted_, false) };
    inline GetTableColumnLineageByTaskIdResponseBodyData& setInputTableDeleted(bool inputTableDeleted) { DARABONBA_PTR_SET_VALUE(inputTableDeleted_, inputTableDeleted) };


    // inputTableId Field Functions 
    bool hasInputTableId() const { return this->inputTableId_ != nullptr;};
    void deleteInputTableId() { this->inputTableId_ = nullptr;};
    inline string inputTableId() const { DARABONBA_PTR_GET_DEFAULT(inputTableId_, "") };
    inline GetTableColumnLineageByTaskIdResponseBodyData& setInputTableId(string inputTableId) { DARABONBA_PTR_SET_VALUE(inputTableId_, inputTableId) };


    // inputTableName Field Functions 
    bool hasInputTableName() const { return this->inputTableName_ != nullptr;};
    void deleteInputTableName() { this->inputTableName_ = nullptr;};
    inline string inputTableName() const { DARABONBA_PTR_GET_DEFAULT(inputTableName_, "") };
    inline GetTableColumnLineageByTaskIdResponseBodyData& setInputTableName(string inputTableName) { DARABONBA_PTR_SET_VALUE(inputTableName_, inputTableName) };


    // inputTableType Field Functions 
    bool hasInputTableType() const { return this->inputTableType_ != nullptr;};
    void deleteInputTableType() { this->inputTableType_ = nullptr;};
    inline string inputTableType() const { DARABONBA_PTR_GET_DEFAULT(inputTableType_, "") };
    inline GetTableColumnLineageByTaskIdResponseBodyData& setInputTableType(string inputTableType) { DARABONBA_PTR_SET_VALUE(inputTableType_, inputTableType) };


    // outputBizUnitId Field Functions 
    bool hasOutputBizUnitId() const { return this->outputBizUnitId_ != nullptr;};
    void deleteOutputBizUnitId() { this->outputBizUnitId_ = nullptr;};
    inline int64_t outputBizUnitId() const { DARABONBA_PTR_GET_DEFAULT(outputBizUnitId_, 0L) };
    inline GetTableColumnLineageByTaskIdResponseBodyData& setOutputBizUnitId(int64_t outputBizUnitId) { DARABONBA_PTR_SET_VALUE(outputBizUnitId_, outputBizUnitId) };


    // outputColumnId Field Functions 
    bool hasOutputColumnId() const { return this->outputColumnId_ != nullptr;};
    void deleteOutputColumnId() { this->outputColumnId_ = nullptr;};
    inline string outputColumnId() const { DARABONBA_PTR_GET_DEFAULT(outputColumnId_, "") };
    inline GetTableColumnLineageByTaskIdResponseBodyData& setOutputColumnId(string outputColumnId) { DARABONBA_PTR_SET_VALUE(outputColumnId_, outputColumnId) };


    // outputColumnName Field Functions 
    bool hasOutputColumnName() const { return this->outputColumnName_ != nullptr;};
    void deleteOutputColumnName() { this->outputColumnName_ = nullptr;};
    inline string outputColumnName() const { DARABONBA_PTR_GET_DEFAULT(outputColumnName_, "") };
    inline GetTableColumnLineageByTaskIdResponseBodyData& setOutputColumnName(string outputColumnName) { DARABONBA_PTR_SET_VALUE(outputColumnName_, outputColumnName) };


    // outputDataSourceId Field Functions 
    bool hasOutputDataSourceId() const { return this->outputDataSourceId_ != nullptr;};
    void deleteOutputDataSourceId() { this->outputDataSourceId_ = nullptr;};
    inline int64_t outputDataSourceId() const { DARABONBA_PTR_GET_DEFAULT(outputDataSourceId_, 0L) };
    inline GetTableColumnLineageByTaskIdResponseBodyData& setOutputDataSourceId(int64_t outputDataSourceId) { DARABONBA_PTR_SET_VALUE(outputDataSourceId_, outputDataSourceId) };


    // outputDataSourceType Field Functions 
    bool hasOutputDataSourceType() const { return this->outputDataSourceType_ != nullptr;};
    void deleteOutputDataSourceType() { this->outputDataSourceType_ = nullptr;};
    inline string outputDataSourceType() const { DARABONBA_PTR_GET_DEFAULT(outputDataSourceType_, "") };
    inline GetTableColumnLineageByTaskIdResponseBodyData& setOutputDataSourceType(string outputDataSourceType) { DARABONBA_PTR_SET_VALUE(outputDataSourceType_, outputDataSourceType) };


    // outputDbType Field Functions 
    bool hasOutputDbType() const { return this->outputDbType_ != nullptr;};
    void deleteOutputDbType() { this->outputDbType_ = nullptr;};
    inline string outputDbType() const { DARABONBA_PTR_GET_DEFAULT(outputDbType_, "") };
    inline GetTableColumnLineageByTaskIdResponseBodyData& setOutputDbType(string outputDbType) { DARABONBA_PTR_SET_VALUE(outputDbType_, outputDbType) };


    // outputEnv Field Functions 
    bool hasOutputEnv() const { return this->outputEnv_ != nullptr;};
    void deleteOutputEnv() { this->outputEnv_ = nullptr;};
    inline string outputEnv() const { DARABONBA_PTR_GET_DEFAULT(outputEnv_, "") };
    inline GetTableColumnLineageByTaskIdResponseBodyData& setOutputEnv(string outputEnv) { DARABONBA_PTR_SET_VALUE(outputEnv_, outputEnv) };


    // outputProjectId Field Functions 
    bool hasOutputProjectId() const { return this->outputProjectId_ != nullptr;};
    void deleteOutputProjectId() { this->outputProjectId_ = nullptr;};
    inline int64_t outputProjectId() const { DARABONBA_PTR_GET_DEFAULT(outputProjectId_, 0L) };
    inline GetTableColumnLineageByTaskIdResponseBodyData& setOutputProjectId(int64_t outputProjectId) { DARABONBA_PTR_SET_VALUE(outputProjectId_, outputProjectId) };


    // outputTableDeleted Field Functions 
    bool hasOutputTableDeleted() const { return this->outputTableDeleted_ != nullptr;};
    void deleteOutputTableDeleted() { this->outputTableDeleted_ = nullptr;};
    inline bool outputTableDeleted() const { DARABONBA_PTR_GET_DEFAULT(outputTableDeleted_, false) };
    inline GetTableColumnLineageByTaskIdResponseBodyData& setOutputTableDeleted(bool outputTableDeleted) { DARABONBA_PTR_SET_VALUE(outputTableDeleted_, outputTableDeleted) };


    // outputTableId Field Functions 
    bool hasOutputTableId() const { return this->outputTableId_ != nullptr;};
    void deleteOutputTableId() { this->outputTableId_ = nullptr;};
    inline string outputTableId() const { DARABONBA_PTR_GET_DEFAULT(outputTableId_, "") };
    inline GetTableColumnLineageByTaskIdResponseBodyData& setOutputTableId(string outputTableId) { DARABONBA_PTR_SET_VALUE(outputTableId_, outputTableId) };


    // outputTableName Field Functions 
    bool hasOutputTableName() const { return this->outputTableName_ != nullptr;};
    void deleteOutputTableName() { this->outputTableName_ = nullptr;};
    inline string outputTableName() const { DARABONBA_PTR_GET_DEFAULT(outputTableName_, "") };
    inline GetTableColumnLineageByTaskIdResponseBodyData& setOutputTableName(string outputTableName) { DARABONBA_PTR_SET_VALUE(outputTableName_, outputTableName) };


    // outputTableType Field Functions 
    bool hasOutputTableType() const { return this->outputTableType_ != nullptr;};
    void deleteOutputTableType() { this->outputTableType_ = nullptr;};
    inline string outputTableType() const { DARABONBA_PTR_GET_DEFAULT(outputTableType_, "") };
    inline GetTableColumnLineageByTaskIdResponseBodyData& setOutputTableType(string outputTableType) { DARABONBA_PTR_SET_VALUE(outputTableType_, outputTableType) };


    // taskEnv Field Functions 
    bool hasTaskEnv() const { return this->taskEnv_ != nullptr;};
    void deleteTaskEnv() { this->taskEnv_ = nullptr;};
    inline string taskEnv() const { DARABONBA_PTR_GET_DEFAULT(taskEnv_, "") };
    inline GetTableColumnLineageByTaskIdResponseBodyData& setTaskEnv(string taskEnv) { DARABONBA_PTR_SET_VALUE(taskEnv_, taskEnv) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetTableColumnLineageByTaskIdResponseBodyData& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline int64_t tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
    inline GetTableColumnLineageByTaskIdResponseBodyData& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    std::shared_ptr<int64_t> inputBizUnitId_ = nullptr;
    std::shared_ptr<string> inputColumnId_ = nullptr;
    std::shared_ptr<string> inputColumnName_ = nullptr;
    std::shared_ptr<int64_t> inputDataSourceId_ = nullptr;
    std::shared_ptr<string> inputDataSourceType_ = nullptr;
    std::shared_ptr<string> inputDbType_ = nullptr;
    std::shared_ptr<string> inputEnv_ = nullptr;
    std::shared_ptr<int64_t> inputProjectId_ = nullptr;
    std::shared_ptr<bool> inputTableDeleted_ = nullptr;
    std::shared_ptr<string> inputTableId_ = nullptr;
    std::shared_ptr<string> inputTableName_ = nullptr;
    std::shared_ptr<string> inputTableType_ = nullptr;
    std::shared_ptr<int64_t> outputBizUnitId_ = nullptr;
    std::shared_ptr<string> outputColumnId_ = nullptr;
    std::shared_ptr<string> outputColumnName_ = nullptr;
    std::shared_ptr<int64_t> outputDataSourceId_ = nullptr;
    std::shared_ptr<string> outputDataSourceType_ = nullptr;
    std::shared_ptr<string> outputDbType_ = nullptr;
    std::shared_ptr<string> outputEnv_ = nullptr;
    std::shared_ptr<int64_t> outputProjectId_ = nullptr;
    std::shared_ptr<bool> outputTableDeleted_ = nullptr;
    std::shared_ptr<string> outputTableId_ = nullptr;
    std::shared_ptr<string> outputTableName_ = nullptr;
    std::shared_ptr<string> outputTableType_ = nullptr;
    std::shared_ptr<string> taskEnv_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<int64_t> tenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
