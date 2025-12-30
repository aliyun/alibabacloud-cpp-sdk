// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATBIPATTERNUPDATEENTRYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHATBIPATTERNUPDATEENTRYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PolardbAI20251013
{
namespace Models
{
  class ChatBIPatternUpdateEntryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChatBIPatternUpdateEntryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(PatternDescription, patternDescription_);
      DARABONBA_PTR_TO_JSON(PatternParams, patternParams_);
      DARABONBA_PTR_TO_JSON(PatternQuestion, patternQuestion_);
      DARABONBA_PTR_TO_JSON(PatternSql, patternSql_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
    };
    friend void from_json(const Darabonba::Json& j, ChatBIPatternUpdateEntryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(PatternDescription, patternDescription_);
      DARABONBA_PTR_FROM_JSON(PatternParams, patternParams_);
      DARABONBA_PTR_FROM_JSON(PatternQuestion, patternQuestion_);
      DARABONBA_PTR_FROM_JSON(PatternSql, patternSql_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
    };
    ChatBIPatternUpdateEntryRequest() = default ;
    ChatBIPatternUpdateEntryRequest(const ChatBIPatternUpdateEntryRequest &) = default ;
    ChatBIPatternUpdateEntryRequest(ChatBIPatternUpdateEntryRequest &&) = default ;
    ChatBIPatternUpdateEntryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChatBIPatternUpdateEntryRequest() = default ;
    ChatBIPatternUpdateEntryRequest& operator=(const ChatBIPatternUpdateEntryRequest &) = default ;
    ChatBIPatternUpdateEntryRequest& operator=(ChatBIPatternUpdateEntryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dbName_ == nullptr
        && this->id_ == nullptr && this->instanceName_ == nullptr && this->patternDescription_ == nullptr && this->patternParams_ == nullptr && this->patternQuestion_ == nullptr
        && this->patternSql_ == nullptr && this->tableName_ == nullptr; };
    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string getDbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline ChatBIPatternUpdateEntryRequest& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int32_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
    inline ChatBIPatternUpdateEntryRequest& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline ChatBIPatternUpdateEntryRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // patternDescription Field Functions 
    bool hasPatternDescription() const { return this->patternDescription_ != nullptr;};
    void deletePatternDescription() { this->patternDescription_ = nullptr;};
    inline string getPatternDescription() const { DARABONBA_PTR_GET_DEFAULT(patternDescription_, "") };
    inline ChatBIPatternUpdateEntryRequest& setPatternDescription(string patternDescription) { DARABONBA_PTR_SET_VALUE(patternDescription_, patternDescription) };


    // patternParams Field Functions 
    bool hasPatternParams() const { return this->patternParams_ != nullptr;};
    void deletePatternParams() { this->patternParams_ = nullptr;};
    inline string getPatternParams() const { DARABONBA_PTR_GET_DEFAULT(patternParams_, "") };
    inline ChatBIPatternUpdateEntryRequest& setPatternParams(string patternParams) { DARABONBA_PTR_SET_VALUE(patternParams_, patternParams) };


    // patternQuestion Field Functions 
    bool hasPatternQuestion() const { return this->patternQuestion_ != nullptr;};
    void deletePatternQuestion() { this->patternQuestion_ = nullptr;};
    inline string getPatternQuestion() const { DARABONBA_PTR_GET_DEFAULT(patternQuestion_, "") };
    inline ChatBIPatternUpdateEntryRequest& setPatternQuestion(string patternQuestion) { DARABONBA_PTR_SET_VALUE(patternQuestion_, patternQuestion) };


    // patternSql Field Functions 
    bool hasPatternSql() const { return this->patternSql_ != nullptr;};
    void deletePatternSql() { this->patternSql_ = nullptr;};
    inline string getPatternSql() const { DARABONBA_PTR_GET_DEFAULT(patternSql_, "") };
    inline ChatBIPatternUpdateEntryRequest& setPatternSql(string patternSql) { DARABONBA_PTR_SET_VALUE(patternSql_, patternSql) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline ChatBIPatternUpdateEntryRequest& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    // This parameter is required.
    shared_ptr<string> dbName_ {};
    shared_ptr<int32_t> id_ {};
    // This parameter is required.
    shared_ptr<string> instanceName_ {};
    // This parameter is required.
    shared_ptr<string> patternDescription_ {};
    // This parameter is required.
    shared_ptr<string> patternParams_ {};
    // This parameter is required.
    shared_ptr<string> patternQuestion_ {};
    // This parameter is required.
    shared_ptr<string> patternSql_ {};
    // This parameter is required.
    shared_ptr<string> tableName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PolardbAI20251013
#endif
