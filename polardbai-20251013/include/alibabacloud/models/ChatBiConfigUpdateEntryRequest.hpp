// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATBICONFIGUPDATEENTRYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHATBICONFIGUPDATEENTRYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PolardbAI20251013
{
namespace Models
{
  class ChatBIConfigUpdateEntryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChatBIConfigUpdateEntryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(FormulaFunction, formulaFunction_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(IsFunctional, isFunctional_);
      DARABONBA_PTR_TO_JSON(QueryFunction, queryFunction_);
      DARABONBA_PTR_TO_JSON(SqlCondition, sqlCondition_);
      DARABONBA_PTR_TO_JSON(SqlFunction, sqlFunction_);
      DARABONBA_PTR_TO_JSON(TextCondition, textCondition_);
    };
    friend void from_json(const Darabonba::Json& j, ChatBIConfigUpdateEntryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(FormulaFunction, formulaFunction_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(IsFunctional, isFunctional_);
      DARABONBA_PTR_FROM_JSON(QueryFunction, queryFunction_);
      DARABONBA_PTR_FROM_JSON(SqlCondition, sqlCondition_);
      DARABONBA_PTR_FROM_JSON(SqlFunction, sqlFunction_);
      DARABONBA_PTR_FROM_JSON(TextCondition, textCondition_);
    };
    ChatBIConfigUpdateEntryRequest() = default ;
    ChatBIConfigUpdateEntryRequest(const ChatBIConfigUpdateEntryRequest &) = default ;
    ChatBIConfigUpdateEntryRequest(ChatBIConfigUpdateEntryRequest &&) = default ;
    ChatBIConfigUpdateEntryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChatBIConfigUpdateEntryRequest() = default ;
    ChatBIConfigUpdateEntryRequest& operator=(const ChatBIConfigUpdateEntryRequest &) = default ;
    ChatBIConfigUpdateEntryRequest& operator=(ChatBIConfigUpdateEntryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dbName_ == nullptr
        && this->formulaFunction_ == nullptr && this->id_ == nullptr && this->instanceName_ == nullptr && this->isFunctional_ == nullptr && this->queryFunction_ == nullptr
        && this->sqlCondition_ == nullptr && this->sqlFunction_ == nullptr && this->textCondition_ == nullptr; };
    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string getDbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline ChatBIConfigUpdateEntryRequest& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // formulaFunction Field Functions 
    bool hasFormulaFunction() const { return this->formulaFunction_ != nullptr;};
    void deleteFormulaFunction() { this->formulaFunction_ = nullptr;};
    inline string getFormulaFunction() const { DARABONBA_PTR_GET_DEFAULT(formulaFunction_, "") };
    inline ChatBIConfigUpdateEntryRequest& setFormulaFunction(string formulaFunction) { DARABONBA_PTR_SET_VALUE(formulaFunction_, formulaFunction) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int32_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
    inline ChatBIConfigUpdateEntryRequest& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline ChatBIConfigUpdateEntryRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // isFunctional Field Functions 
    bool hasIsFunctional() const { return this->isFunctional_ != nullptr;};
    void deleteIsFunctional() { this->isFunctional_ = nullptr;};
    inline int32_t getIsFunctional() const { DARABONBA_PTR_GET_DEFAULT(isFunctional_, 0) };
    inline ChatBIConfigUpdateEntryRequest& setIsFunctional(int32_t isFunctional) { DARABONBA_PTR_SET_VALUE(isFunctional_, isFunctional) };


    // queryFunction Field Functions 
    bool hasQueryFunction() const { return this->queryFunction_ != nullptr;};
    void deleteQueryFunction() { this->queryFunction_ = nullptr;};
    inline string getQueryFunction() const { DARABONBA_PTR_GET_DEFAULT(queryFunction_, "") };
    inline ChatBIConfigUpdateEntryRequest& setQueryFunction(string queryFunction) { DARABONBA_PTR_SET_VALUE(queryFunction_, queryFunction) };


    // sqlCondition Field Functions 
    bool hasSqlCondition() const { return this->sqlCondition_ != nullptr;};
    void deleteSqlCondition() { this->sqlCondition_ = nullptr;};
    inline string getSqlCondition() const { DARABONBA_PTR_GET_DEFAULT(sqlCondition_, "") };
    inline ChatBIConfigUpdateEntryRequest& setSqlCondition(string sqlCondition) { DARABONBA_PTR_SET_VALUE(sqlCondition_, sqlCondition) };


    // sqlFunction Field Functions 
    bool hasSqlFunction() const { return this->sqlFunction_ != nullptr;};
    void deleteSqlFunction() { this->sqlFunction_ = nullptr;};
    inline string getSqlFunction() const { DARABONBA_PTR_GET_DEFAULT(sqlFunction_, "") };
    inline ChatBIConfigUpdateEntryRequest& setSqlFunction(string sqlFunction) { DARABONBA_PTR_SET_VALUE(sqlFunction_, sqlFunction) };


    // textCondition Field Functions 
    bool hasTextCondition() const { return this->textCondition_ != nullptr;};
    void deleteTextCondition() { this->textCondition_ = nullptr;};
    inline string getTextCondition() const { DARABONBA_PTR_GET_DEFAULT(textCondition_, "") };
    inline ChatBIConfigUpdateEntryRequest& setTextCondition(string textCondition) { DARABONBA_PTR_SET_VALUE(textCondition_, textCondition) };


  protected:
    // This parameter is required.
    shared_ptr<string> dbName_ {};
    // This parameter is required.
    shared_ptr<string> formulaFunction_ {};
    shared_ptr<int32_t> id_ {};
    // This parameter is required.
    shared_ptr<string> instanceName_ {};
    shared_ptr<int32_t> isFunctional_ {};
    // This parameter is required.
    shared_ptr<string> queryFunction_ {};
    // This parameter is required.
    shared_ptr<string> sqlCondition_ {};
    // This parameter is required.
    shared_ptr<string> sqlFunction_ {};
    // This parameter is required.
    shared_ptr<string> textCondition_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PolardbAI20251013
#endif
