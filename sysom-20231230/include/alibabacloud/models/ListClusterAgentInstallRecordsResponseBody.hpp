// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLUSTERAGENTINSTALLRECORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCLUSTERAGENTINSTALLRECORDSRESPONSEBODY_HPP_
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
  class ListClusterAgentInstallRecordsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClusterAgentInstallRecordsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListClusterAgentInstallRecordsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    ListClusterAgentInstallRecordsResponseBody() = default ;
    ListClusterAgentInstallRecordsResponseBody(const ListClusterAgentInstallRecordsResponseBody &) = default ;
    ListClusterAgentInstallRecordsResponseBody(ListClusterAgentInstallRecordsResponseBody &&) = default ;
    ListClusterAgentInstallRecordsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClusterAgentInstallRecordsResponseBody() = default ;
    ListClusterAgentInstallRecordsResponseBody& operator=(const ListClusterAgentInstallRecordsResponseBody &) = default ;
    ListClusterAgentInstallRecordsResponseBody& operator=(ListClusterAgentInstallRecordsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(agent_config_id, agentConfigId_);
        DARABONBA_PTR_TO_JSON(agent_config_name, agentConfigName_);
        DARABONBA_PTR_TO_JSON(cluster_id, clusterId_);
        DARABONBA_PTR_TO_JSON(created_at, createdAt_);
        DARABONBA_PTR_TO_JSON(grayscale_config, grayscaleConfig_);
        DARABONBA_PTR_TO_JSON(plugin_id, pluginId_);
        DARABONBA_PTR_TO_JSON(plugin_version, pluginVersion_);
        DARABONBA_PTR_TO_JSON(updated_at, updatedAt_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(agent_config_id, agentConfigId_);
        DARABONBA_PTR_FROM_JSON(agent_config_name, agentConfigName_);
        DARABONBA_PTR_FROM_JSON(cluster_id, clusterId_);
        DARABONBA_PTR_FROM_JSON(created_at, createdAt_);
        DARABONBA_PTR_FROM_JSON(grayscale_config, grayscaleConfig_);
        DARABONBA_PTR_FROM_JSON(plugin_id, pluginId_);
        DARABONBA_PTR_FROM_JSON(plugin_version, pluginVersion_);
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
      virtual bool empty() const override { return this->agentConfigId_ == nullptr
        && this->agentConfigName_ == nullptr && this->clusterId_ == nullptr && this->createdAt_ == nullptr && this->grayscaleConfig_ == nullptr && this->pluginId_ == nullptr
        && this->pluginVersion_ == nullptr && this->updatedAt_ == nullptr; };
      // agentConfigId Field Functions 
      bool hasAgentConfigId() const { return this->agentConfigId_ != nullptr;};
      void deleteAgentConfigId() { this->agentConfigId_ = nullptr;};
      inline string getAgentConfigId() const { DARABONBA_PTR_GET_DEFAULT(agentConfigId_, "") };
      inline Data& setAgentConfigId(string agentConfigId) { DARABONBA_PTR_SET_VALUE(agentConfigId_, agentConfigId) };


      // agentConfigName Field Functions 
      bool hasAgentConfigName() const { return this->agentConfigName_ != nullptr;};
      void deleteAgentConfigName() { this->agentConfigName_ = nullptr;};
      inline string getAgentConfigName() const { DARABONBA_PTR_GET_DEFAULT(agentConfigName_, "") };
      inline Data& setAgentConfigName(string agentConfigName) { DARABONBA_PTR_SET_VALUE(agentConfigName_, agentConfigName) };


      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline Data& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      // createdAt Field Functions 
      bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
      void deleteCreatedAt() { this->createdAt_ = nullptr;};
      inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
      inline Data& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


      // grayscaleConfig Field Functions 
      bool hasGrayscaleConfig() const { return this->grayscaleConfig_ != nullptr;};
      void deleteGrayscaleConfig() { this->grayscaleConfig_ = nullptr;};
      inline string getGrayscaleConfig() const { DARABONBA_PTR_GET_DEFAULT(grayscaleConfig_, "") };
      inline Data& setGrayscaleConfig(string grayscaleConfig) { DARABONBA_PTR_SET_VALUE(grayscaleConfig_, grayscaleConfig) };


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


      // updatedAt Field Functions 
      bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
      void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
      inline string getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
      inline Data& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


    protected:
      shared_ptr<string> agentConfigId_ {};
      shared_ptr<string> agentConfigName_ {};
      shared_ptr<string> clusterId_ {};
      shared_ptr<string> createdAt_ {};
      shared_ptr<string> grayscaleConfig_ {};
      shared_ptr<string> pluginId_ {};
      shared_ptr<string> pluginVersion_ {};
      shared_ptr<string> updatedAt_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->total_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListClusterAgentInstallRecordsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListClusterAgentInstallRecordsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListClusterAgentInstallRecordsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListClusterAgentInstallRecordsResponseBody::Data>) };
    inline vector<ListClusterAgentInstallRecordsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListClusterAgentInstallRecordsResponseBody::Data>) };
    inline ListClusterAgentInstallRecordsResponseBody& setData(const vector<ListClusterAgentInstallRecordsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListClusterAgentInstallRecordsResponseBody& setData(vector<ListClusterAgentInstallRecordsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListClusterAgentInstallRecordsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline ListClusterAgentInstallRecordsResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<string> code_ {};
    shared_ptr<vector<ListClusterAgentInstallRecordsResponseBody::Data>> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<int64_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
