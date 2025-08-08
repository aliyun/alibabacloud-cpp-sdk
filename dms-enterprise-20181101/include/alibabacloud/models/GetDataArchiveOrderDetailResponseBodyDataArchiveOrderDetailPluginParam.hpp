// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATAARCHIVEORDERDETAILRESPONSEBODYDATAARCHIVEORDERDETAILPLUGINPARAM_HPP_
#define ALIBABACLOUD_MODELS_GETDATAARCHIVEORDERDETAILRESPONSEBODYDATAARCHIVEORDERDETAILPLUGINPARAM_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginParamTableIncludes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginParam : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginParam& obj) { 
      DARABONBA_PTR_TO_JSON(ArchiveMethod, archiveMethod_);
      DARABONBA_PTR_TO_JSON(DbSchema, dbSchema_);
      DARABONBA_PTR_TO_JSON(Logic, logic_);
      DARABONBA_PTR_TO_JSON(OrderAfter, orderAfter_);
      DARABONBA_PTR_TO_JSON(RunMethod, runMethod_);
      DARABONBA_PTR_TO_JSON(SourceDatabaseId, sourceDatabaseId_);
      DARABONBA_PTR_TO_JSON(TableIncludes, tableIncludes_);
      DARABONBA_PTR_TO_JSON(TableMapping, tableMapping_);
      DARABONBA_PTR_TO_JSON(TargetInstanceId, targetInstanceId_);
      DARABONBA_PTR_TO_JSON(Variables, variables_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginParam& obj) { 
      DARABONBA_PTR_FROM_JSON(ArchiveMethod, archiveMethod_);
      DARABONBA_PTR_FROM_JSON(DbSchema, dbSchema_);
      DARABONBA_PTR_FROM_JSON(Logic, logic_);
      DARABONBA_PTR_FROM_JSON(OrderAfter, orderAfter_);
      DARABONBA_PTR_FROM_JSON(RunMethod, runMethod_);
      DARABONBA_PTR_FROM_JSON(SourceDatabaseId, sourceDatabaseId_);
      DARABONBA_PTR_FROM_JSON(TableIncludes, tableIncludes_);
      DARABONBA_PTR_FROM_JSON(TableMapping, tableMapping_);
      DARABONBA_PTR_FROM_JSON(TargetInstanceId, targetInstanceId_);
      DARABONBA_PTR_FROM_JSON(Variables, variables_);
    };
    GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginParam() = default ;
    GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginParam(const GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginParam &) = default ;
    GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginParam(GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginParam &&) = default ;
    GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginParam(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginParam() = default ;
    GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginParam& operator=(const GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginParam &) = default ;
    GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginParam& operator=(GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginParam &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->archiveMethod_ != nullptr
        && this->dbSchema_ != nullptr && this->logic_ != nullptr && this->orderAfter_ != nullptr && this->runMethod_ != nullptr && this->sourceDatabaseId_ != nullptr
        && this->tableIncludes_ != nullptr && this->tableMapping_ != nullptr && this->targetInstanceId_ != nullptr && this->variables_ != nullptr; };
    // archiveMethod Field Functions 
    bool hasArchiveMethod() const { return this->archiveMethod_ != nullptr;};
    void deleteArchiveMethod() { this->archiveMethod_ = nullptr;};
    inline string archiveMethod() const { DARABONBA_PTR_GET_DEFAULT(archiveMethod_, "") };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginParam& setArchiveMethod(string archiveMethod) { DARABONBA_PTR_SET_VALUE(archiveMethod_, archiveMethod) };


    // dbSchema Field Functions 
    bool hasDbSchema() const { return this->dbSchema_ != nullptr;};
    void deleteDbSchema() { this->dbSchema_ = nullptr;};
    inline string dbSchema() const { DARABONBA_PTR_GET_DEFAULT(dbSchema_, "") };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginParam& setDbSchema(string dbSchema) { DARABONBA_PTR_SET_VALUE(dbSchema_, dbSchema) };


    // logic Field Functions 
    bool hasLogic() const { return this->logic_ != nullptr;};
    void deleteLogic() { this->logic_ = nullptr;};
    inline bool logic() const { DARABONBA_PTR_GET_DEFAULT(logic_, false) };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginParam& setLogic(bool logic) { DARABONBA_PTR_SET_VALUE(logic_, logic) };


    // orderAfter Field Functions 
    bool hasOrderAfter() const { return this->orderAfter_ != nullptr;};
    void deleteOrderAfter() { this->orderAfter_ = nullptr;};
    inline const vector<string> & orderAfter() const { DARABONBA_PTR_GET_CONST(orderAfter_, vector<string>) };
    inline vector<string> orderAfter() { DARABONBA_PTR_GET(orderAfter_, vector<string>) };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginParam& setOrderAfter(const vector<string> & orderAfter) { DARABONBA_PTR_SET_VALUE(orderAfter_, orderAfter) };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginParam& setOrderAfter(vector<string> && orderAfter) { DARABONBA_PTR_SET_RVALUE(orderAfter_, orderAfter) };


    // runMethod Field Functions 
    bool hasRunMethod() const { return this->runMethod_ != nullptr;};
    void deleteRunMethod() { this->runMethod_ = nullptr;};
    inline string runMethod() const { DARABONBA_PTR_GET_DEFAULT(runMethod_, "") };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginParam& setRunMethod(string runMethod) { DARABONBA_PTR_SET_VALUE(runMethod_, runMethod) };


    // sourceDatabaseId Field Functions 
    bool hasSourceDatabaseId() const { return this->sourceDatabaseId_ != nullptr;};
    void deleteSourceDatabaseId() { this->sourceDatabaseId_ = nullptr;};
    inline int64_t sourceDatabaseId() const { DARABONBA_PTR_GET_DEFAULT(sourceDatabaseId_, 0L) };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginParam& setSourceDatabaseId(int64_t sourceDatabaseId) { DARABONBA_PTR_SET_VALUE(sourceDatabaseId_, sourceDatabaseId) };


    // tableIncludes Field Functions 
    bool hasTableIncludes() const { return this->tableIncludes_ != nullptr;};
    void deleteTableIncludes() { this->tableIncludes_ = nullptr;};
    inline const vector<Models::GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginParamTableIncludes> & tableIncludes() const { DARABONBA_PTR_GET_CONST(tableIncludes_, vector<Models::GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginParamTableIncludes>) };
    inline vector<Models::GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginParamTableIncludes> tableIncludes() { DARABONBA_PTR_GET(tableIncludes_, vector<Models::GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginParamTableIncludes>) };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginParam& setTableIncludes(const vector<Models::GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginParamTableIncludes> & tableIncludes) { DARABONBA_PTR_SET_VALUE(tableIncludes_, tableIncludes) };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginParam& setTableIncludes(vector<Models::GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginParamTableIncludes> && tableIncludes) { DARABONBA_PTR_SET_RVALUE(tableIncludes_, tableIncludes) };


    // tableMapping Field Functions 
    bool hasTableMapping() const { return this->tableMapping_ != nullptr;};
    void deleteTableMapping() { this->tableMapping_ = nullptr;};
    inline const vector<string> & tableMapping() const { DARABONBA_PTR_GET_CONST(tableMapping_, vector<string>) };
    inline vector<string> tableMapping() { DARABONBA_PTR_GET(tableMapping_, vector<string>) };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginParam& setTableMapping(const vector<string> & tableMapping) { DARABONBA_PTR_SET_VALUE(tableMapping_, tableMapping) };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginParam& setTableMapping(vector<string> && tableMapping) { DARABONBA_PTR_SET_RVALUE(tableMapping_, tableMapping) };


    // targetInstanceId Field Functions 
    bool hasTargetInstanceId() const { return this->targetInstanceId_ != nullptr;};
    void deleteTargetInstanceId() { this->targetInstanceId_ = nullptr;};
    inline string targetInstanceId() const { DARABONBA_PTR_GET_DEFAULT(targetInstanceId_, "") };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginParam& setTargetInstanceId(string targetInstanceId) { DARABONBA_PTR_SET_VALUE(targetInstanceId_, targetInstanceId) };


    // variables Field Functions 
    bool hasVariables() const { return this->variables_ != nullptr;};
    void deleteVariables() { this->variables_ = nullptr;};
    inline const vector<string> & variables() const { DARABONBA_PTR_GET_CONST(variables_, vector<string>) };
    inline vector<string> variables() { DARABONBA_PTR_GET(variables_, vector<string>) };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginParam& setVariables(const vector<string> & variables) { DARABONBA_PTR_SET_VALUE(variables_, variables) };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginParam& setVariables(vector<string> && variables) { DARABONBA_PTR_SET_RVALUE(variables_, variables) };


  protected:
    // The type of the archiving destination.
    std::shared_ptr<string> archiveMethod_ = nullptr;
    // The schema of the database and table to be archived.
    std::shared_ptr<string> dbSchema_ = nullptr;
    // Indicates whether the database is logical.
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> logic_ = nullptr;
    // The post behavior of archiving.
    std::shared_ptr<vector<string>> orderAfter_ = nullptr;
    // The running method, which indicates whether to run the task immediately or at a specific point in time.
    std::shared_ptr<string> runMethod_ = nullptr;
    // The ID of the source database.
    std::shared_ptr<int64_t> sourceDatabaseId_ = nullptr;
    // The list of the archived tables and the filter conditions.
    std::shared_ptr<vector<Models::GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginParamTableIncludes>> tableIncludes_ = nullptr;
    // The mapping of schemas.
    std::shared_ptr<vector<string>> tableMapping_ = nullptr;
    // The ID of the destination instance.
    std::shared_ptr<string> targetInstanceId_ = nullptr;
    // The time variable defined for scheduled archiving.
    std::shared_ptr<vector<string>> variables_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
