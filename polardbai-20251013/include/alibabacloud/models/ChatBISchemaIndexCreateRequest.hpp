// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATBISCHEMAINDEXCREATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHATBISCHEMAINDEXCREATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PolardbAI20251013
{
namespace Models
{
  class ChatBISchemaIndexCreateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChatBISchemaIndexCreateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthMessage, authMessage_);
      DARABONBA_PTR_TO_JSON(AuthType, authType_);
      DARABONBA_PTR_TO_JSON(ColumnsExcluded, columnsExcluded_);
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(TableNameSuffix, tableNameSuffix_);
      DARABONBA_PTR_TO_JSON(TablesIncluded, tablesIncluded_);
      DARABONBA_PTR_TO_JSON(ToSample, toSample_);
    };
    friend void from_json(const Darabonba::Json& j, ChatBISchemaIndexCreateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthMessage, authMessage_);
      DARABONBA_PTR_FROM_JSON(AuthType, authType_);
      DARABONBA_PTR_FROM_JSON(ColumnsExcluded, columnsExcluded_);
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(TableNameSuffix, tableNameSuffix_);
      DARABONBA_PTR_FROM_JSON(TablesIncluded, tablesIncluded_);
      DARABONBA_PTR_FROM_JSON(ToSample, toSample_);
    };
    ChatBISchemaIndexCreateRequest() = default ;
    ChatBISchemaIndexCreateRequest(const ChatBISchemaIndexCreateRequest &) = default ;
    ChatBISchemaIndexCreateRequest(ChatBISchemaIndexCreateRequest &&) = default ;
    ChatBISchemaIndexCreateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChatBISchemaIndexCreateRequest() = default ;
    ChatBISchemaIndexCreateRequest& operator=(const ChatBISchemaIndexCreateRequest &) = default ;
    ChatBISchemaIndexCreateRequest& operator=(ChatBISchemaIndexCreateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authMessage_ == nullptr
        && this->authType_ == nullptr && this->columnsExcluded_ == nullptr && this->dbName_ == nullptr && this->instanceName_ == nullptr && this->tableNameSuffix_ == nullptr
        && this->tablesIncluded_ == nullptr && this->toSample_ == nullptr; };
    // authMessage Field Functions 
    bool hasAuthMessage() const { return this->authMessage_ != nullptr;};
    void deleteAuthMessage() { this->authMessage_ = nullptr;};
    inline string getAuthMessage() const { DARABONBA_PTR_GET_DEFAULT(authMessage_, "") };
    inline ChatBISchemaIndexCreateRequest& setAuthMessage(string authMessage) { DARABONBA_PTR_SET_VALUE(authMessage_, authMessage) };


    // authType Field Functions 
    bool hasAuthType() const { return this->authType_ != nullptr;};
    void deleteAuthType() { this->authType_ = nullptr;};
    inline string getAuthType() const { DARABONBA_PTR_GET_DEFAULT(authType_, "") };
    inline ChatBISchemaIndexCreateRequest& setAuthType(string authType) { DARABONBA_PTR_SET_VALUE(authType_, authType) };


    // columnsExcluded Field Functions 
    bool hasColumnsExcluded() const { return this->columnsExcluded_ != nullptr;};
    void deleteColumnsExcluded() { this->columnsExcluded_ = nullptr;};
    inline string getColumnsExcluded() const { DARABONBA_PTR_GET_DEFAULT(columnsExcluded_, "") };
    inline ChatBISchemaIndexCreateRequest& setColumnsExcluded(string columnsExcluded) { DARABONBA_PTR_SET_VALUE(columnsExcluded_, columnsExcluded) };


    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string getDbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline ChatBISchemaIndexCreateRequest& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline ChatBISchemaIndexCreateRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // tableNameSuffix Field Functions 
    bool hasTableNameSuffix() const { return this->tableNameSuffix_ != nullptr;};
    void deleteTableNameSuffix() { this->tableNameSuffix_ = nullptr;};
    inline string getTableNameSuffix() const { DARABONBA_PTR_GET_DEFAULT(tableNameSuffix_, "") };
    inline ChatBISchemaIndexCreateRequest& setTableNameSuffix(string tableNameSuffix) { DARABONBA_PTR_SET_VALUE(tableNameSuffix_, tableNameSuffix) };


    // tablesIncluded Field Functions 
    bool hasTablesIncluded() const { return this->tablesIncluded_ != nullptr;};
    void deleteTablesIncluded() { this->tablesIncluded_ = nullptr;};
    inline string getTablesIncluded() const { DARABONBA_PTR_GET_DEFAULT(tablesIncluded_, "") };
    inline ChatBISchemaIndexCreateRequest& setTablesIncluded(string tablesIncluded) { DARABONBA_PTR_SET_VALUE(tablesIncluded_, tablesIncluded) };


    // toSample Field Functions 
    bool hasToSample() const { return this->toSample_ != nullptr;};
    void deleteToSample() { this->toSample_ = nullptr;};
    inline int32_t getToSample() const { DARABONBA_PTR_GET_DEFAULT(toSample_, 0) };
    inline ChatBISchemaIndexCreateRequest& setToSample(int32_t toSample) { DARABONBA_PTR_SET_VALUE(toSample_, toSample) };


  protected:
    shared_ptr<string> authMessage_ {};
    shared_ptr<string> authType_ {};
    shared_ptr<string> columnsExcluded_ {};
    // This parameter is required.
    shared_ptr<string> dbName_ {};
    // This parameter is required.
    shared_ptr<string> instanceName_ {};
    shared_ptr<string> tableNameSuffix_ {};
    shared_ptr<string> tablesIncluded_ {};
    shared_ptr<int32_t> toSample_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PolardbAI20251013
#endif
