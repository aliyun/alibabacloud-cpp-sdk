// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATBIPATTERNINDEXCREATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHATBIPATTERNINDEXCREATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PolardbAI20251013
{
namespace Models
{
  class ChatBIPatternIndexCreateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChatBIPatternIndexCreateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(PatternTableName, patternTableName_);
      DARABONBA_PTR_TO_JSON(TableNameSuffix, tableNameSuffix_);
    };
    friend void from_json(const Darabonba::Json& j, ChatBIPatternIndexCreateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(PatternTableName, patternTableName_);
      DARABONBA_PTR_FROM_JSON(TableNameSuffix, tableNameSuffix_);
    };
    ChatBIPatternIndexCreateRequest() = default ;
    ChatBIPatternIndexCreateRequest(const ChatBIPatternIndexCreateRequest &) = default ;
    ChatBIPatternIndexCreateRequest(ChatBIPatternIndexCreateRequest &&) = default ;
    ChatBIPatternIndexCreateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChatBIPatternIndexCreateRequest() = default ;
    ChatBIPatternIndexCreateRequest& operator=(const ChatBIPatternIndexCreateRequest &) = default ;
    ChatBIPatternIndexCreateRequest& operator=(ChatBIPatternIndexCreateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dbName_ == nullptr
        && this->instanceName_ == nullptr && this->patternTableName_ == nullptr && this->tableNameSuffix_ == nullptr; };
    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string getDbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline ChatBIPatternIndexCreateRequest& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline ChatBIPatternIndexCreateRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // patternTableName Field Functions 
    bool hasPatternTableName() const { return this->patternTableName_ != nullptr;};
    void deletePatternTableName() { this->patternTableName_ = nullptr;};
    inline string getPatternTableName() const { DARABONBA_PTR_GET_DEFAULT(patternTableName_, "") };
    inline ChatBIPatternIndexCreateRequest& setPatternTableName(string patternTableName) { DARABONBA_PTR_SET_VALUE(patternTableName_, patternTableName) };


    // tableNameSuffix Field Functions 
    bool hasTableNameSuffix() const { return this->tableNameSuffix_ != nullptr;};
    void deleteTableNameSuffix() { this->tableNameSuffix_ = nullptr;};
    inline string getTableNameSuffix() const { DARABONBA_PTR_GET_DEFAULT(tableNameSuffix_, "") };
    inline ChatBIPatternIndexCreateRequest& setTableNameSuffix(string tableNameSuffix) { DARABONBA_PTR_SET_VALUE(tableNameSuffix_, tableNameSuffix) };


  protected:
    // This parameter is required.
    shared_ptr<string> dbName_ {};
    // This parameter is required.
    shared_ptr<string> instanceName_ {};
    shared_ptr<string> patternTableName_ {};
    shared_ptr<string> tableNameSuffix_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PolardbAI20251013
#endif
