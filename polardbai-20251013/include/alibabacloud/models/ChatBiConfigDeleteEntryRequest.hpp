// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATBICONFIGDELETEENTRYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHATBICONFIGDELETEENTRYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PolardbAI20251013
{
namespace Models
{
  class ChatBIConfigDeleteEntryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChatBIConfigDeleteEntryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
    };
    friend void from_json(const Darabonba::Json& j, ChatBIConfigDeleteEntryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
    };
    ChatBIConfigDeleteEntryRequest() = default ;
    ChatBIConfigDeleteEntryRequest(const ChatBIConfigDeleteEntryRequest &) = default ;
    ChatBIConfigDeleteEntryRequest(ChatBIConfigDeleteEntryRequest &&) = default ;
    ChatBIConfigDeleteEntryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChatBIConfigDeleteEntryRequest() = default ;
    ChatBIConfigDeleteEntryRequest& operator=(const ChatBIConfigDeleteEntryRequest &) = default ;
    ChatBIConfigDeleteEntryRequest& operator=(ChatBIConfigDeleteEntryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dbName_ == nullptr
        && this->id_ == nullptr && this->instanceName_ == nullptr; };
    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string getDbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline ChatBIConfigDeleteEntryRequest& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ChatBIConfigDeleteEntryRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline ChatBIConfigDeleteEntryRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


  protected:
    // This parameter is required.
    shared_ptr<string> dbName_ {};
    // This parameter is required.
    shared_ptr<string> id_ {};
    // This parameter is required.
    shared_ptr<string> instanceName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PolardbAI20251013
#endif
