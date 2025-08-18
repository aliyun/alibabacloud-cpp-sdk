// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTEADHOCTASKREQUESTEXECUTECOMMAND_HPP_
#define ALIBABACLOUD_MODELS_EXECUTEADHOCTASKREQUESTEXECUTECOMMAND_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ExecuteAdHocTaskRequestExecuteCommandParamList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ExecuteAdHocTaskRequestExecuteCommand : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteAdHocTaskRequestExecuteCommand& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(DataSourceCatalog, dataSourceCatalog_);
      DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_TO_JSON(DataSourceSchema, dataSourceSchema_);
      DARABONBA_PTR_TO_JSON(OperatorType, operatorType_);
      DARABONBA_PTR_TO_JSON(ParamList, paramList_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteAdHocTaskRequestExecuteCommand& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(DataSourceCatalog, dataSourceCatalog_);
      DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_FROM_JSON(DataSourceSchema, dataSourceSchema_);
      DARABONBA_PTR_FROM_JSON(OperatorType, operatorType_);
      DARABONBA_PTR_FROM_JSON(ParamList, paramList_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    ExecuteAdHocTaskRequestExecuteCommand() = default ;
    ExecuteAdHocTaskRequestExecuteCommand(const ExecuteAdHocTaskRequestExecuteCommand &) = default ;
    ExecuteAdHocTaskRequestExecuteCommand(ExecuteAdHocTaskRequestExecuteCommand &&) = default ;
    ExecuteAdHocTaskRequestExecuteCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteAdHocTaskRequestExecuteCommand() = default ;
    ExecuteAdHocTaskRequestExecuteCommand& operator=(const ExecuteAdHocTaskRequestExecuteCommand &) = default ;
    ExecuteAdHocTaskRequestExecuteCommand& operator=(ExecuteAdHocTaskRequestExecuteCommand &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->dataSourceCatalog_ != nullptr && this->dataSourceId_ != nullptr && this->dataSourceSchema_ != nullptr && this->operatorType_ != nullptr && this->paramList_ != nullptr
        && this->projectId_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ExecuteAdHocTaskRequestExecuteCommand& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // dataSourceCatalog Field Functions 
    bool hasDataSourceCatalog() const { return this->dataSourceCatalog_ != nullptr;};
    void deleteDataSourceCatalog() { this->dataSourceCatalog_ = nullptr;};
    inline string dataSourceCatalog() const { DARABONBA_PTR_GET_DEFAULT(dataSourceCatalog_, "") };
    inline ExecuteAdHocTaskRequestExecuteCommand& setDataSourceCatalog(string dataSourceCatalog) { DARABONBA_PTR_SET_VALUE(dataSourceCatalog_, dataSourceCatalog) };


    // dataSourceId Field Functions 
    bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
    void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
    inline int64_t dataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, 0L) };
    inline ExecuteAdHocTaskRequestExecuteCommand& setDataSourceId(int64_t dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


    // dataSourceSchema Field Functions 
    bool hasDataSourceSchema() const { return this->dataSourceSchema_ != nullptr;};
    void deleteDataSourceSchema() { this->dataSourceSchema_ = nullptr;};
    inline string dataSourceSchema() const { DARABONBA_PTR_GET_DEFAULT(dataSourceSchema_, "") };
    inline ExecuteAdHocTaskRequestExecuteCommand& setDataSourceSchema(string dataSourceSchema) { DARABONBA_PTR_SET_VALUE(dataSourceSchema_, dataSourceSchema) };


    // operatorType Field Functions 
    bool hasOperatorType() const { return this->operatorType_ != nullptr;};
    void deleteOperatorType() { this->operatorType_ = nullptr;};
    inline string operatorType() const { DARABONBA_PTR_GET_DEFAULT(operatorType_, "") };
    inline ExecuteAdHocTaskRequestExecuteCommand& setOperatorType(string operatorType) { DARABONBA_PTR_SET_VALUE(operatorType_, operatorType) };


    // paramList Field Functions 
    bool hasParamList() const { return this->paramList_ != nullptr;};
    void deleteParamList() { this->paramList_ = nullptr;};
    inline const vector<Models::ExecuteAdHocTaskRequestExecuteCommandParamList> & paramList() const { DARABONBA_PTR_GET_CONST(paramList_, vector<Models::ExecuteAdHocTaskRequestExecuteCommandParamList>) };
    inline vector<Models::ExecuteAdHocTaskRequestExecuteCommandParamList> paramList() { DARABONBA_PTR_GET(paramList_, vector<Models::ExecuteAdHocTaskRequestExecuteCommandParamList>) };
    inline ExecuteAdHocTaskRequestExecuteCommand& setParamList(const vector<Models::ExecuteAdHocTaskRequestExecuteCommandParamList> & paramList) { DARABONBA_PTR_SET_VALUE(paramList_, paramList) };
    inline ExecuteAdHocTaskRequestExecuteCommand& setParamList(vector<Models::ExecuteAdHocTaskRequestExecuteCommandParamList> && paramList) { DARABONBA_PTR_SET_RVALUE(paramList_, paramList) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ExecuteAdHocTaskRequestExecuteCommand& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> dataSourceCatalog_ = nullptr;
    std::shared_ptr<int64_t> dataSourceId_ = nullptr;
    std::shared_ptr<string> dataSourceSchema_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> operatorType_ = nullptr;
    std::shared_ptr<vector<Models::ExecuteAdHocTaskRequestExecuteCommandParamList>> paramList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
