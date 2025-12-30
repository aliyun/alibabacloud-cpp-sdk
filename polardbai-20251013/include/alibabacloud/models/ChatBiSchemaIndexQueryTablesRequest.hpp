// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATBISCHEMAINDEXQUERYTABLESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHATBISCHEMAINDEXQUERYTABLESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PolardbAI20251013
{
namespace Models
{
  class ChatBISchemaIndexQueryTablesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChatBISchemaIndexQueryTablesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(InputField, inputField_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ChatBISchemaIndexQueryTablesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(InputField, inputField_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ChatBISchemaIndexQueryTablesRequest() = default ;
    ChatBISchemaIndexQueryTablesRequest(const ChatBISchemaIndexQueryTablesRequest &) = default ;
    ChatBISchemaIndexQueryTablesRequest(ChatBISchemaIndexQueryTablesRequest &&) = default ;
    ChatBISchemaIndexQueryTablesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChatBISchemaIndexQueryTablesRequest() = default ;
    ChatBISchemaIndexQueryTablesRequest& operator=(const ChatBISchemaIndexQueryTablesRequest &) = default ;
    ChatBISchemaIndexQueryTablesRequest& operator=(ChatBISchemaIndexQueryTablesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dbName_ == nullptr
        && this->inputField_ == nullptr && this->instanceName_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr; };
    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string getDbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline ChatBISchemaIndexQueryTablesRequest& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // inputField Field Functions 
    bool hasInputField() const { return this->inputField_ != nullptr;};
    void deleteInputField() { this->inputField_ = nullptr;};
    inline string getInputField() const { DARABONBA_PTR_GET_DEFAULT(inputField_, "") };
    inline ChatBISchemaIndexQueryTablesRequest& setInputField(string inputField) { DARABONBA_PTR_SET_VALUE(inputField_, inputField) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline ChatBISchemaIndexQueryTablesRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline ChatBISchemaIndexQueryTablesRequest& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline ChatBISchemaIndexQueryTablesRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // This parameter is required.
    shared_ptr<string> dbName_ {};
    shared_ptr<string> inputField_ {};
    // This parameter is required.
    shared_ptr<string> instanceName_ {};
    shared_ptr<string> pageNumber_ {};
    shared_ptr<string> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PolardbAI20251013
#endif
