// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNODESRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTNODESRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListNodesResponseBodyResultIpAddress.hpp>
#include <alibabacloud/models/ListNodesResponseBodyResultTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListNodesResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNodesResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(agentStatus, agentStatus_);
      DARABONBA_PTR_TO_JSON(cloudAssistantStatus, cloudAssistantStatus_);
      DARABONBA_PTR_TO_JSON(ecsInstanceId, ecsInstanceId_);
      DARABONBA_PTR_TO_JSON(ecsInstanceName, ecsInstanceName_);
      DARABONBA_PTR_TO_JSON(ipAddress, ipAddress_);
      DARABONBA_PTR_TO_JSON(osType, osType_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, ListNodesResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(agentStatus, agentStatus_);
      DARABONBA_PTR_FROM_JSON(cloudAssistantStatus, cloudAssistantStatus_);
      DARABONBA_PTR_FROM_JSON(ecsInstanceId, ecsInstanceId_);
      DARABONBA_PTR_FROM_JSON(ecsInstanceName, ecsInstanceName_);
      DARABONBA_PTR_FROM_JSON(ipAddress, ipAddress_);
      DARABONBA_PTR_FROM_JSON(osType, osType_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
    };
    ListNodesResponseBodyResult() = default ;
    ListNodesResponseBodyResult(const ListNodesResponseBodyResult &) = default ;
    ListNodesResponseBodyResult(ListNodesResponseBodyResult &&) = default ;
    ListNodesResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNodesResponseBodyResult() = default ;
    ListNodesResponseBodyResult& operator=(const ListNodesResponseBodyResult &) = default ;
    ListNodesResponseBodyResult& operator=(ListNodesResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentStatus_ != nullptr
        && this->cloudAssistantStatus_ != nullptr && this->ecsInstanceId_ != nullptr && this->ecsInstanceName_ != nullptr && this->ipAddress_ != nullptr && this->osType_ != nullptr
        && this->status_ != nullptr && this->tags_ != nullptr; };
    // agentStatus Field Functions 
    bool hasAgentStatus() const { return this->agentStatus_ != nullptr;};
    void deleteAgentStatus() { this->agentStatus_ = nullptr;};
    inline string agentStatus() const { DARABONBA_PTR_GET_DEFAULT(agentStatus_, "") };
    inline ListNodesResponseBodyResult& setAgentStatus(string agentStatus) { DARABONBA_PTR_SET_VALUE(agentStatus_, agentStatus) };


    // cloudAssistantStatus Field Functions 
    bool hasCloudAssistantStatus() const { return this->cloudAssistantStatus_ != nullptr;};
    void deleteCloudAssistantStatus() { this->cloudAssistantStatus_ = nullptr;};
    inline string cloudAssistantStatus() const { DARABONBA_PTR_GET_DEFAULT(cloudAssistantStatus_, "") };
    inline ListNodesResponseBodyResult& setCloudAssistantStatus(string cloudAssistantStatus) { DARABONBA_PTR_SET_VALUE(cloudAssistantStatus_, cloudAssistantStatus) };


    // ecsInstanceId Field Functions 
    bool hasEcsInstanceId() const { return this->ecsInstanceId_ != nullptr;};
    void deleteEcsInstanceId() { this->ecsInstanceId_ = nullptr;};
    inline string ecsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(ecsInstanceId_, "") };
    inline ListNodesResponseBodyResult& setEcsInstanceId(string ecsInstanceId) { DARABONBA_PTR_SET_VALUE(ecsInstanceId_, ecsInstanceId) };


    // ecsInstanceName Field Functions 
    bool hasEcsInstanceName() const { return this->ecsInstanceName_ != nullptr;};
    void deleteEcsInstanceName() { this->ecsInstanceName_ = nullptr;};
    inline string ecsInstanceName() const { DARABONBA_PTR_GET_DEFAULT(ecsInstanceName_, "") };
    inline ListNodesResponseBodyResult& setEcsInstanceName(string ecsInstanceName) { DARABONBA_PTR_SET_VALUE(ecsInstanceName_, ecsInstanceName) };


    // ipAddress Field Functions 
    bool hasIpAddress() const { return this->ipAddress_ != nullptr;};
    void deleteIpAddress() { this->ipAddress_ = nullptr;};
    inline const vector<Models::ListNodesResponseBodyResultIpAddress> & ipAddress() const { DARABONBA_PTR_GET_CONST(ipAddress_, vector<Models::ListNodesResponseBodyResultIpAddress>) };
    inline vector<Models::ListNodesResponseBodyResultIpAddress> ipAddress() { DARABONBA_PTR_GET(ipAddress_, vector<Models::ListNodesResponseBodyResultIpAddress>) };
    inline ListNodesResponseBodyResult& setIpAddress(const vector<Models::ListNodesResponseBodyResultIpAddress> & ipAddress) { DARABONBA_PTR_SET_VALUE(ipAddress_, ipAddress) };
    inline ListNodesResponseBodyResult& setIpAddress(vector<Models::ListNodesResponseBodyResultIpAddress> && ipAddress) { DARABONBA_PTR_SET_RVALUE(ipAddress_, ipAddress) };


    // osType Field Functions 
    bool hasOsType() const { return this->osType_ != nullptr;};
    void deleteOsType() { this->osType_ = nullptr;};
    inline string osType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
    inline ListNodesResponseBodyResult& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListNodesResponseBodyResult& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListNodesResponseBodyResultTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListNodesResponseBodyResultTags>) };
    inline vector<Models::ListNodesResponseBodyResultTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListNodesResponseBodyResultTags>) };
    inline ListNodesResponseBodyResult& setTags(const vector<Models::ListNodesResponseBodyResultTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListNodesResponseBodyResult& setTags(vector<Models::ListNodesResponseBodyResultTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The status of the shipper on the ECS instance. Valid values:
    // 
    // *   heartOk: The heartbeat is normal.
    // *   heartLost: The heartbeat is abnormal.
    // *   uninstalled: The shipper is not installed.
    // *   failed: The shipper fails to be installed.
    std::shared_ptr<string> agentStatus_ = nullptr;
    // Indicates whether the Cloud Assistant client is installed. Valid values:
    // 
    // *   true: installed
    // *   false: not installed
    std::shared_ptr<string> cloudAssistantStatus_ = nullptr;
    // The ID of the ECS instance.
    std::shared_ptr<string> ecsInstanceId_ = nullptr;
    // The name of the ECS instance.
    std::shared_ptr<string> ecsInstanceName_ = nullptr;
    // The IP addresses of the ECS instance.
    std::shared_ptr<vector<Models::ListNodesResponseBodyResultIpAddress>> ipAddress_ = nullptr;
    // The operating system type of the ECS instance. Valid values:
    // 
    // *   windows: Windows Server
    // *   linux: Linux
    std::shared_ptr<string> osType_ = nullptr;
    // The status of the ECS instance. Valid values:
    // 
    // *   running: The instance is running.
    // *   starting: The instance is being started.
    // *   stopping: The instance is being stopped.
    // *   stopped: The instance is stopped.
    std::shared_ptr<string> status_ = nullptr;
    // The tags of the ECS instance.
    std::shared_ptr<vector<Models::ListNodesResponseBodyResultTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
