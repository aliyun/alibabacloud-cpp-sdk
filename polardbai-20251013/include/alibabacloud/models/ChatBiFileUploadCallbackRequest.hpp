// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATBIFILEUPLOADCALLBACKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHATBIFILEUPLOADCALLBACKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PolardbAI20251013
{
namespace Models
{
  class ChatBIFileUploadCallbackRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChatBIFileUploadCallbackRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CharacterSetName, characterSetName_);
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
      DARABONBA_PTR_TO_JSON(TableType, tableType_);
    };
    friend void from_json(const Darabonba::Json& j, ChatBIFileUploadCallbackRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CharacterSetName, characterSetName_);
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      DARABONBA_PTR_FROM_JSON(TableType, tableType_);
    };
    ChatBIFileUploadCallbackRequest() = default ;
    ChatBIFileUploadCallbackRequest(const ChatBIFileUploadCallbackRequest &) = default ;
    ChatBIFileUploadCallbackRequest(ChatBIFileUploadCallbackRequest &&) = default ;
    ChatBIFileUploadCallbackRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChatBIFileUploadCallbackRequest() = default ;
    ChatBIFileUploadCallbackRequest& operator=(const ChatBIFileUploadCallbackRequest &) = default ;
    ChatBIFileUploadCallbackRequest& operator=(ChatBIFileUploadCallbackRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->characterSetName_ == nullptr
        && this->dbName_ == nullptr && this->fileName_ == nullptr && this->instanceName_ == nullptr && this->tableName_ == nullptr && this->tableType_ == nullptr; };
    // characterSetName Field Functions 
    bool hasCharacterSetName() const { return this->characterSetName_ != nullptr;};
    void deleteCharacterSetName() { this->characterSetName_ = nullptr;};
    inline string getCharacterSetName() const { DARABONBA_PTR_GET_DEFAULT(characterSetName_, "") };
    inline ChatBIFileUploadCallbackRequest& setCharacterSetName(string characterSetName) { DARABONBA_PTR_SET_VALUE(characterSetName_, characterSetName) };


    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string getDbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline ChatBIFileUploadCallbackRequest& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline ChatBIFileUploadCallbackRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline ChatBIFileUploadCallbackRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline ChatBIFileUploadCallbackRequest& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // tableType Field Functions 
    bool hasTableType() const { return this->tableType_ != nullptr;};
    void deleteTableType() { this->tableType_ = nullptr;};
    inline string getTableType() const { DARABONBA_PTR_GET_DEFAULT(tableType_, "") };
    inline ChatBIFileUploadCallbackRequest& setTableType(string tableType) { DARABONBA_PTR_SET_VALUE(tableType_, tableType) };


  protected:
    shared_ptr<string> characterSetName_ {};
    // This parameter is required.
    shared_ptr<string> dbName_ {};
    // This parameter is required.
    shared_ptr<string> fileName_ {};
    // This parameter is required.
    shared_ptr<string> instanceName_ {};
    // This parameter is required.
    shared_ptr<string> tableName_ {};
    // This parameter is required.
    shared_ptr<string> tableType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PolardbAI20251013
#endif
