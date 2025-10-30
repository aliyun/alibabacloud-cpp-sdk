// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PARSEBATCHTASKDEPENDENCYREQUESTPARSECOMMAND_HPP_
#define ALIBABACLOUD_MODELS_PARSEBATCHTASKDEPENDENCYREQUESTPARSECOMMAND_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ParseBatchTaskDependencyRequestParseCommand : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ParseBatchTaskDependencyRequestParseCommand& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(DataSourceCatalog, dataSourceCatalog_);
      DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_TO_JSON(DataSourceSchema, dataSourceSchema_);
      DARABONBA_PTR_TO_JSON(IncludeAllInputTables, includeAllInputTables_);
      DARABONBA_PTR_TO_JSON(NeedQueryLineages, needQueryLineages_);
      DARABONBA_PTR_TO_JSON(OperatorType, operatorType_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, ParseBatchTaskDependencyRequestParseCommand& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(DataSourceCatalog, dataSourceCatalog_);
      DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_FROM_JSON(DataSourceSchema, dataSourceSchema_);
      DARABONBA_PTR_FROM_JSON(IncludeAllInputTables, includeAllInputTables_);
      DARABONBA_PTR_FROM_JSON(NeedQueryLineages, needQueryLineages_);
      DARABONBA_PTR_FROM_JSON(OperatorType, operatorType_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    ParseBatchTaskDependencyRequestParseCommand() = default ;
    ParseBatchTaskDependencyRequestParseCommand(const ParseBatchTaskDependencyRequestParseCommand &) = default ;
    ParseBatchTaskDependencyRequestParseCommand(ParseBatchTaskDependencyRequestParseCommand &&) = default ;
    ParseBatchTaskDependencyRequestParseCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ParseBatchTaskDependencyRequestParseCommand() = default ;
    ParseBatchTaskDependencyRequestParseCommand& operator=(const ParseBatchTaskDependencyRequestParseCommand &) = default ;
    ParseBatchTaskDependencyRequestParseCommand& operator=(ParseBatchTaskDependencyRequestParseCommand &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->dataSourceCatalog_ == nullptr && return this->dataSourceId_ == nullptr && return this->dataSourceSchema_ == nullptr && return this->includeAllInputTables_ == nullptr && return this->needQueryLineages_ == nullptr
        && return this->operatorType_ == nullptr && return this->projectId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ParseBatchTaskDependencyRequestParseCommand& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // dataSourceCatalog Field Functions 
    bool hasDataSourceCatalog() const { return this->dataSourceCatalog_ != nullptr;};
    void deleteDataSourceCatalog() { this->dataSourceCatalog_ = nullptr;};
    inline string dataSourceCatalog() const { DARABONBA_PTR_GET_DEFAULT(dataSourceCatalog_, "") };
    inline ParseBatchTaskDependencyRequestParseCommand& setDataSourceCatalog(string dataSourceCatalog) { DARABONBA_PTR_SET_VALUE(dataSourceCatalog_, dataSourceCatalog) };


    // dataSourceId Field Functions 
    bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
    void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
    inline int64_t dataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, 0L) };
    inline ParseBatchTaskDependencyRequestParseCommand& setDataSourceId(int64_t dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


    // dataSourceSchema Field Functions 
    bool hasDataSourceSchema() const { return this->dataSourceSchema_ != nullptr;};
    void deleteDataSourceSchema() { this->dataSourceSchema_ = nullptr;};
    inline string dataSourceSchema() const { DARABONBA_PTR_GET_DEFAULT(dataSourceSchema_, "") };
    inline ParseBatchTaskDependencyRequestParseCommand& setDataSourceSchema(string dataSourceSchema) { DARABONBA_PTR_SET_VALUE(dataSourceSchema_, dataSourceSchema) };


    // includeAllInputTables Field Functions 
    bool hasIncludeAllInputTables() const { return this->includeAllInputTables_ != nullptr;};
    void deleteIncludeAllInputTables() { this->includeAllInputTables_ = nullptr;};
    inline bool includeAllInputTables() const { DARABONBA_PTR_GET_DEFAULT(includeAllInputTables_, false) };
    inline ParseBatchTaskDependencyRequestParseCommand& setIncludeAllInputTables(bool includeAllInputTables) { DARABONBA_PTR_SET_VALUE(includeAllInputTables_, includeAllInputTables) };


    // needQueryLineages Field Functions 
    bool hasNeedQueryLineages() const { return this->needQueryLineages_ != nullptr;};
    void deleteNeedQueryLineages() { this->needQueryLineages_ = nullptr;};
    inline bool needQueryLineages() const { DARABONBA_PTR_GET_DEFAULT(needQueryLineages_, false) };
    inline ParseBatchTaskDependencyRequestParseCommand& setNeedQueryLineages(bool needQueryLineages) { DARABONBA_PTR_SET_VALUE(needQueryLineages_, needQueryLineages) };


    // operatorType Field Functions 
    bool hasOperatorType() const { return this->operatorType_ != nullptr;};
    void deleteOperatorType() { this->operatorType_ = nullptr;};
    inline string operatorType() const { DARABONBA_PTR_GET_DEFAULT(operatorType_, "") };
    inline ParseBatchTaskDependencyRequestParseCommand& setOperatorType(string operatorType) { DARABONBA_PTR_SET_VALUE(operatorType_, operatorType) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ParseBatchTaskDependencyRequestParseCommand& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> dataSourceCatalog_ = nullptr;
    std::shared_ptr<int64_t> dataSourceId_ = nullptr;
    std::shared_ptr<string> dataSourceSchema_ = nullptr;
    std::shared_ptr<bool> includeAllInputTables_ = nullptr;
    std::shared_ptr<bool> needQueryLineages_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> operatorType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
