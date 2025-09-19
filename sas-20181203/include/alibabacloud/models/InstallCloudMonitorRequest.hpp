// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSTALLCLOUDMONITORREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INSTALLCLOUDMONITORREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class InstallCloudMonitorRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InstallCloudMonitorRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentAccessKey, agentAccessKey_);
      DARABONBA_PTR_TO_JSON(AgentSecretKey, agentSecretKey_);
      DARABONBA_PTR_TO_JSON(ArgusVersion, argusVersion_);
      DARABONBA_PTR_TO_JSON(InstanceIdList, instanceIdList_);
      DARABONBA_PTR_TO_JSON(UuidList, uuidList_);
    };
    friend void from_json(const Darabonba::Json& j, InstallCloudMonitorRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentAccessKey, agentAccessKey_);
      DARABONBA_PTR_FROM_JSON(AgentSecretKey, agentSecretKey_);
      DARABONBA_PTR_FROM_JSON(ArgusVersion, argusVersion_);
      DARABONBA_PTR_FROM_JSON(InstanceIdList, instanceIdList_);
      DARABONBA_PTR_FROM_JSON(UuidList, uuidList_);
    };
    InstallCloudMonitorRequest() = default ;
    InstallCloudMonitorRequest(const InstallCloudMonitorRequest &) = default ;
    InstallCloudMonitorRequest(InstallCloudMonitorRequest &&) = default ;
    InstallCloudMonitorRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InstallCloudMonitorRequest() = default ;
    InstallCloudMonitorRequest& operator=(const InstallCloudMonitorRequest &) = default ;
    InstallCloudMonitorRequest& operator=(InstallCloudMonitorRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentAccessKey_ != nullptr
        && this->agentSecretKey_ != nullptr && this->argusVersion_ != nullptr && this->instanceIdList_ != nullptr && this->uuidList_ != nullptr; };
    // agentAccessKey Field Functions 
    bool hasAgentAccessKey() const { return this->agentAccessKey_ != nullptr;};
    void deleteAgentAccessKey() { this->agentAccessKey_ = nullptr;};
    inline string agentAccessKey() const { DARABONBA_PTR_GET_DEFAULT(agentAccessKey_, "") };
    inline InstallCloudMonitorRequest& setAgentAccessKey(string agentAccessKey) { DARABONBA_PTR_SET_VALUE(agentAccessKey_, agentAccessKey) };


    // agentSecretKey Field Functions 
    bool hasAgentSecretKey() const { return this->agentSecretKey_ != nullptr;};
    void deleteAgentSecretKey() { this->agentSecretKey_ = nullptr;};
    inline string agentSecretKey() const { DARABONBA_PTR_GET_DEFAULT(agentSecretKey_, "") };
    inline InstallCloudMonitorRequest& setAgentSecretKey(string agentSecretKey) { DARABONBA_PTR_SET_VALUE(agentSecretKey_, agentSecretKey) };


    // argusVersion Field Functions 
    bool hasArgusVersion() const { return this->argusVersion_ != nullptr;};
    void deleteArgusVersion() { this->argusVersion_ = nullptr;};
    inline string argusVersion() const { DARABONBA_PTR_GET_DEFAULT(argusVersion_, "") };
    inline InstallCloudMonitorRequest& setArgusVersion(string argusVersion) { DARABONBA_PTR_SET_VALUE(argusVersion_, argusVersion) };


    // instanceIdList Field Functions 
    bool hasInstanceIdList() const { return this->instanceIdList_ != nullptr;};
    void deleteInstanceIdList() { this->instanceIdList_ = nullptr;};
    inline const vector<string> & instanceIdList() const { DARABONBA_PTR_GET_CONST(instanceIdList_, vector<string>) };
    inline vector<string> instanceIdList() { DARABONBA_PTR_GET(instanceIdList_, vector<string>) };
    inline InstallCloudMonitorRequest& setInstanceIdList(const vector<string> & instanceIdList) { DARABONBA_PTR_SET_VALUE(instanceIdList_, instanceIdList) };
    inline InstallCloudMonitorRequest& setInstanceIdList(vector<string> && instanceIdList) { DARABONBA_PTR_SET_RVALUE(instanceIdList_, instanceIdList) };


    // uuidList Field Functions 
    bool hasUuidList() const { return this->uuidList_ != nullptr;};
    void deleteUuidList() { this->uuidList_ = nullptr;};
    inline const vector<string> & uuidList() const { DARABONBA_PTR_GET_CONST(uuidList_, vector<string>) };
    inline vector<string> uuidList() { DARABONBA_PTR_GET(uuidList_, vector<string>) };
    inline InstallCloudMonitorRequest& setUuidList(const vector<string> & uuidList) { DARABONBA_PTR_SET_VALUE(uuidList_, uuidList) };
    inline InstallCloudMonitorRequest& setUuidList(vector<string> && uuidList) { DARABONBA_PTR_SET_RVALUE(uuidList_, uuidList) };


  protected:
    // The AccessKey ID that is required to install the CloudMonitor agent. You can call the [DescribeMonitoringAgentAccessKey](https://help.aliyun.com/document_detail/114948.html) operation to query the AccessKey ID.
    // 
    // > This parameter is required only when you install the CloudMonitor agent on servers that are not deployed on Alibaba Cloud.
    std::shared_ptr<string> agentAccessKey_ = nullptr;
    // The AccessKey secret that is required to install the CloudMonitor agent. You can call the [DescribeMonitoringAgentAccessKey](https://help.aliyun.com/document_detail/114948.html) operation to query the AccessKey secret.
    // 
    // > This parameter is required only when you install the CloudMonitor agent on servers that are not deployed on Alibaba Cloud.
    std::shared_ptr<string> agentSecretKey_ = nullptr;
    // The version of the CloudMonitor agent that you want to install on the servers. For more information about the latest version of the CloudMonitor agent, see [Overview](https://help.aliyun.com/document_detail/183431.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> argusVersion_ = nullptr;
    // The IDs of the servers on which you want to install the CloudMonitor agent. Separate multiple IDs with commas (,).
    std::shared_ptr<vector<string>> instanceIdList_ = nullptr;
    // The UUIDs of the servers on which you want to install the CloudMonitor agent. Separate multiple UUIDs with commas (,).
    std::shared_ptr<vector<string>> uuidList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
