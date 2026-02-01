// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGENTINSTALLRECORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAGENTINSTALLRECORDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class ListAgentInstallRecordsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAgentInstallRecordsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListAgentInstallRecordsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    ListAgentInstallRecordsResponseBody() = default ;
    ListAgentInstallRecordsResponseBody(const ListAgentInstallRecordsResponseBody &) = default ;
    ListAgentInstallRecordsResponseBody(ListAgentInstallRecordsResponseBody &&) = default ;
    ListAgentInstallRecordsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAgentInstallRecordsResponseBody() = default ;
    ListAgentInstallRecordsResponseBody& operator=(const ListAgentInstallRecordsResponseBody &) = default ;
    ListAgentInstallRecordsResponseBody& operator=(ListAgentInstallRecordsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(created_at, createdAt_);
        DARABONBA_PTR_TO_JSON(instance_id, instanceId_);
        DARABONBA_PTR_TO_JSON(plugin_id, pluginId_);
        DARABONBA_PTR_TO_JSON(plugin_version, pluginVersion_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(updated_at, updatedAt_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(created_at, createdAt_);
        DARABONBA_PTR_FROM_JSON(instance_id, instanceId_);
        DARABONBA_PTR_FROM_JSON(plugin_id, pluginId_);
        DARABONBA_PTR_FROM_JSON(plugin_version, pluginVersion_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(updated_at, updatedAt_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createdAt_ == nullptr
        && this->instanceId_ == nullptr && this->pluginId_ == nullptr && this->pluginVersion_ == nullptr && this->status_ == nullptr && this->updatedAt_ == nullptr; };
      // createdAt Field Functions 
      bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
      void deleteCreatedAt() { this->createdAt_ = nullptr;};
      inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
      inline Data& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Data& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // pluginId Field Functions 
      bool hasPluginId() const { return this->pluginId_ != nullptr;};
      void deletePluginId() { this->pluginId_ = nullptr;};
      inline string getPluginId() const { DARABONBA_PTR_GET_DEFAULT(pluginId_, "") };
      inline Data& setPluginId(string pluginId) { DARABONBA_PTR_SET_VALUE(pluginId_, pluginId) };


      // pluginVersion Field Functions 
      bool hasPluginVersion() const { return this->pluginVersion_ != nullptr;};
      void deletePluginVersion() { this->pluginVersion_ = nullptr;};
      inline string getPluginVersion() const { DARABONBA_PTR_GET_DEFAULT(pluginVersion_, "") };
      inline Data& setPluginVersion(string pluginVersion) { DARABONBA_PTR_SET_VALUE(pluginVersion_, pluginVersion) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // updatedAt Field Functions 
      bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
      void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
      inline string getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
      inline Data& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


    protected:
      shared_ptr<string> createdAt_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> pluginId_ {};
      shared_ptr<string> pluginVersion_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> updatedAt_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->total_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAgentInstallRecordsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListAgentInstallRecordsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListAgentInstallRecordsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListAgentInstallRecordsResponseBody::Data>) };
    inline vector<ListAgentInstallRecordsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListAgentInstallRecordsResponseBody::Data>) };
    inline ListAgentInstallRecordsResponseBody& setData(const vector<ListAgentInstallRecordsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListAgentInstallRecordsResponseBody& setData(vector<ListAgentInstallRecordsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListAgentInstallRecordsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline ListAgentInstallRecordsResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<string> code_ {};
    shared_ptr<vector<ListAgentInstallRecordsResponseBody::Data>> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<int64_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
