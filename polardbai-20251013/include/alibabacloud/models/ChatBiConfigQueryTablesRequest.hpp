// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATBICONFIGQUERYTABLESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHATBICONFIGQUERYTABLESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PolardbAI20251013
{
namespace Models
{
  class ChatBIConfigQueryTablesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChatBIConfigQueryTablesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(InputField, inputField_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
    };
    friend void from_json(const Darabonba::Json& j, ChatBIConfigQueryTablesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(InputField, inputField_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
    };
    ChatBIConfigQueryTablesRequest() = default ;
    ChatBIConfigQueryTablesRequest(const ChatBIConfigQueryTablesRequest &) = default ;
    ChatBIConfigQueryTablesRequest(ChatBIConfigQueryTablesRequest &&) = default ;
    ChatBIConfigQueryTablesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChatBIConfigQueryTablesRequest() = default ;
    ChatBIConfigQueryTablesRequest& operator=(const ChatBIConfigQueryTablesRequest &) = default ;
    ChatBIConfigQueryTablesRequest& operator=(ChatBIConfigQueryTablesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dbName_ == nullptr
        && this->inputField_ == nullptr && this->instanceName_ == nullptr; };
    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string getDbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline ChatBIConfigQueryTablesRequest& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // inputField Field Functions 
    bool hasInputField() const { return this->inputField_ != nullptr;};
    void deleteInputField() { this->inputField_ = nullptr;};
    inline string getInputField() const { DARABONBA_PTR_GET_DEFAULT(inputField_, "") };
    inline ChatBIConfigQueryTablesRequest& setInputField(string inputField) { DARABONBA_PTR_SET_VALUE(inputField_, inputField) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline ChatBIConfigQueryTablesRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


  protected:
    // This parameter is required.
    shared_ptr<string> dbName_ {};
    shared_ptr<string> inputField_ {};
    // This parameter is required.
    shared_ptr<string> instanceName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PolardbAI20251013
#endif
