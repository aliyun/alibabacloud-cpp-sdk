// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATBICONFIGCREATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHATBICONFIGCREATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PolardbAI20251013
{
namespace Models
{
  class ChatBIConfigCreateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChatBIConfigCreateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
    };
    friend void from_json(const Darabonba::Json& j, ChatBIConfigCreateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
    };
    ChatBIConfigCreateRequest() = default ;
    ChatBIConfigCreateRequest(const ChatBIConfigCreateRequest &) = default ;
    ChatBIConfigCreateRequest(ChatBIConfigCreateRequest &&) = default ;
    ChatBIConfigCreateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChatBIConfigCreateRequest() = default ;
    ChatBIConfigCreateRequest& operator=(const ChatBIConfigCreateRequest &) = default ;
    ChatBIConfigCreateRequest& operator=(ChatBIConfigCreateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dbName_ == nullptr
        && this->instanceName_ == nullptr; };
    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string getDbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline ChatBIConfigCreateRequest& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline ChatBIConfigCreateRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


  protected:
    // This parameter is required.
    shared_ptr<string> dbName_ {};
    // This parameter is required.
    shared_ptr<string> instanceName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PolardbAI20251013
#endif
