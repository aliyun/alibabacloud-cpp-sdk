// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATASERVICEAPIREQUESTCREATECOMMANDSCRIPTDETAILS_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATASERVICEAPIREQUESTCREATECOMMANDSCRIPTDETAILS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateDataServiceApiRequestCreateCommandScriptDetailsScriptRequestParameters.hpp>
#include <alibabacloud/models/CreateDataServiceApiRequestCreateCommandScriptDetailsScriptResponseParameters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class CreateDataServiceApiRequestCreateCommandScriptDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataServiceApiRequestCreateCommandScriptDetails& obj) { 
      DARABONBA_PTR_TO_JSON(DatasourceID, datasourceID_);
      DARABONBA_PTR_TO_JSON(DatasourceType, datasourceType_);
      DARABONBA_PTR_TO_JSON(IsPaginated, isPaginated_);
      DARABONBA_PTR_TO_JSON(Script, script_);
      DARABONBA_PTR_TO_JSON(ScriptRequestParameters, scriptRequestParameters_);
      DARABONBA_PTR_TO_JSON(ScriptResponseParameters, scriptResponseParameters_);
      DARABONBA_PTR_TO_JSON(SortPriority, sortPriority_);
      DARABONBA_PTR_TO_JSON(SqlMode, sqlMode_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataServiceApiRequestCreateCommandScriptDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(DatasourceID, datasourceID_);
      DARABONBA_PTR_FROM_JSON(DatasourceType, datasourceType_);
      DARABONBA_PTR_FROM_JSON(IsPaginated, isPaginated_);
      DARABONBA_PTR_FROM_JSON(Script, script_);
      DARABONBA_PTR_FROM_JSON(ScriptRequestParameters, scriptRequestParameters_);
      DARABONBA_PTR_FROM_JSON(ScriptResponseParameters, scriptResponseParameters_);
      DARABONBA_PTR_FROM_JSON(SortPriority, sortPriority_);
      DARABONBA_PTR_FROM_JSON(SqlMode, sqlMode_);
    };
    CreateDataServiceApiRequestCreateCommandScriptDetails() = default ;
    CreateDataServiceApiRequestCreateCommandScriptDetails(const CreateDataServiceApiRequestCreateCommandScriptDetails &) = default ;
    CreateDataServiceApiRequestCreateCommandScriptDetails(CreateDataServiceApiRequestCreateCommandScriptDetails &&) = default ;
    CreateDataServiceApiRequestCreateCommandScriptDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataServiceApiRequestCreateCommandScriptDetails() = default ;
    CreateDataServiceApiRequestCreateCommandScriptDetails& operator=(const CreateDataServiceApiRequestCreateCommandScriptDetails &) = default ;
    CreateDataServiceApiRequestCreateCommandScriptDetails& operator=(CreateDataServiceApiRequestCreateCommandScriptDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->datasourceID_ != nullptr
        && this->datasourceType_ != nullptr && this->isPaginated_ != nullptr && this->script_ != nullptr && this->scriptRequestParameters_ != nullptr && this->scriptResponseParameters_ != nullptr
        && this->sortPriority_ != nullptr && this->sqlMode_ != nullptr; };
    // datasourceID Field Functions 
    bool hasDatasourceID() const { return this->datasourceID_ != nullptr;};
    void deleteDatasourceID() { this->datasourceID_ = nullptr;};
    inline int64_t datasourceID() const { DARABONBA_PTR_GET_DEFAULT(datasourceID_, 0L) };
    inline CreateDataServiceApiRequestCreateCommandScriptDetails& setDatasourceID(int64_t datasourceID) { DARABONBA_PTR_SET_VALUE(datasourceID_, datasourceID) };


    // datasourceType Field Functions 
    bool hasDatasourceType() const { return this->datasourceType_ != nullptr;};
    void deleteDatasourceType() { this->datasourceType_ = nullptr;};
    inline int32_t datasourceType() const { DARABONBA_PTR_GET_DEFAULT(datasourceType_, 0) };
    inline CreateDataServiceApiRequestCreateCommandScriptDetails& setDatasourceType(int32_t datasourceType) { DARABONBA_PTR_SET_VALUE(datasourceType_, datasourceType) };


    // isPaginated Field Functions 
    bool hasIsPaginated() const { return this->isPaginated_ != nullptr;};
    void deleteIsPaginated() { this->isPaginated_ = nullptr;};
    inline bool isPaginated() const { DARABONBA_PTR_GET_DEFAULT(isPaginated_, false) };
    inline CreateDataServiceApiRequestCreateCommandScriptDetails& setIsPaginated(bool isPaginated) { DARABONBA_PTR_SET_VALUE(isPaginated_, isPaginated) };


    // script Field Functions 
    bool hasScript() const { return this->script_ != nullptr;};
    void deleteScript() { this->script_ = nullptr;};
    inline string script() const { DARABONBA_PTR_GET_DEFAULT(script_, "") };
    inline CreateDataServiceApiRequestCreateCommandScriptDetails& setScript(string script) { DARABONBA_PTR_SET_VALUE(script_, script) };


    // scriptRequestParameters Field Functions 
    bool hasScriptRequestParameters() const { return this->scriptRequestParameters_ != nullptr;};
    void deleteScriptRequestParameters() { this->scriptRequestParameters_ = nullptr;};
    inline const vector<Models::CreateDataServiceApiRequestCreateCommandScriptDetailsScriptRequestParameters> & scriptRequestParameters() const { DARABONBA_PTR_GET_CONST(scriptRequestParameters_, vector<Models::CreateDataServiceApiRequestCreateCommandScriptDetailsScriptRequestParameters>) };
    inline vector<Models::CreateDataServiceApiRequestCreateCommandScriptDetailsScriptRequestParameters> scriptRequestParameters() { DARABONBA_PTR_GET(scriptRequestParameters_, vector<Models::CreateDataServiceApiRequestCreateCommandScriptDetailsScriptRequestParameters>) };
    inline CreateDataServiceApiRequestCreateCommandScriptDetails& setScriptRequestParameters(const vector<Models::CreateDataServiceApiRequestCreateCommandScriptDetailsScriptRequestParameters> & scriptRequestParameters) { DARABONBA_PTR_SET_VALUE(scriptRequestParameters_, scriptRequestParameters) };
    inline CreateDataServiceApiRequestCreateCommandScriptDetails& setScriptRequestParameters(vector<Models::CreateDataServiceApiRequestCreateCommandScriptDetailsScriptRequestParameters> && scriptRequestParameters) { DARABONBA_PTR_SET_RVALUE(scriptRequestParameters_, scriptRequestParameters) };


    // scriptResponseParameters Field Functions 
    bool hasScriptResponseParameters() const { return this->scriptResponseParameters_ != nullptr;};
    void deleteScriptResponseParameters() { this->scriptResponseParameters_ = nullptr;};
    inline const vector<Models::CreateDataServiceApiRequestCreateCommandScriptDetailsScriptResponseParameters> & scriptResponseParameters() const { DARABONBA_PTR_GET_CONST(scriptResponseParameters_, vector<Models::CreateDataServiceApiRequestCreateCommandScriptDetailsScriptResponseParameters>) };
    inline vector<Models::CreateDataServiceApiRequestCreateCommandScriptDetailsScriptResponseParameters> scriptResponseParameters() { DARABONBA_PTR_GET(scriptResponseParameters_, vector<Models::CreateDataServiceApiRequestCreateCommandScriptDetailsScriptResponseParameters>) };
    inline CreateDataServiceApiRequestCreateCommandScriptDetails& setScriptResponseParameters(const vector<Models::CreateDataServiceApiRequestCreateCommandScriptDetailsScriptResponseParameters> & scriptResponseParameters) { DARABONBA_PTR_SET_VALUE(scriptResponseParameters_, scriptResponseParameters) };
    inline CreateDataServiceApiRequestCreateCommandScriptDetails& setScriptResponseParameters(vector<Models::CreateDataServiceApiRequestCreateCommandScriptDetailsScriptResponseParameters> && scriptResponseParameters) { DARABONBA_PTR_SET_RVALUE(scriptResponseParameters_, scriptResponseParameters) };


    // sortPriority Field Functions 
    bool hasSortPriority() const { return this->sortPriority_ != nullptr;};
    void deleteSortPriority() { this->sortPriority_ = nullptr;};
    inline int32_t sortPriority() const { DARABONBA_PTR_GET_DEFAULT(sortPriority_, 0) };
    inline CreateDataServiceApiRequestCreateCommandScriptDetails& setSortPriority(int32_t sortPriority) { DARABONBA_PTR_SET_VALUE(sortPriority_, sortPriority) };


    // sqlMode Field Functions 
    bool hasSqlMode() const { return this->sqlMode_ != nullptr;};
    void deleteSqlMode() { this->sqlMode_ = nullptr;};
    inline int32_t sqlMode() const { DARABONBA_PTR_GET_DEFAULT(sqlMode_, 0) };
    inline CreateDataServiceApiRequestCreateCommandScriptDetails& setSqlMode(int32_t sqlMode) { DARABONBA_PTR_SET_VALUE(sqlMode_, sqlMode) };


  protected:
    std::shared_ptr<int64_t> datasourceID_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> datasourceType_ = nullptr;
    std::shared_ptr<bool> isPaginated_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> script_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<Models::CreateDataServiceApiRequestCreateCommandScriptDetailsScriptRequestParameters>> scriptRequestParameters_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<Models::CreateDataServiceApiRequestCreateCommandScriptDetailsScriptResponseParameters>> scriptResponseParameters_ = nullptr;
    std::shared_ptr<int32_t> sortPriority_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> sqlMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
