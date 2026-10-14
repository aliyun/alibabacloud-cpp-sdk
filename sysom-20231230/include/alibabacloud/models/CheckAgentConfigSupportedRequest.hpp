// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKAGENTCONFIGSUPPORTEDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKAGENTCONFIGSUPPORTEDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class CheckAgentConfigSupportedRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckAgentConfigSupportedRequest& obj) { 
      DARABONBA_PTR_TO_JSON(agentId, agentId_);
      DARABONBA_PTR_TO_JSON(checkType, checkType_);
      DARABONBA_PTR_TO_JSON(clusters, clusters_);
      DARABONBA_PTR_TO_JSON(configId, configId_);
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(instances, instances_);
    };
    friend void from_json(const Darabonba::Json& j, CheckAgentConfigSupportedRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(agentId, agentId_);
      DARABONBA_PTR_FROM_JSON(checkType, checkType_);
      DARABONBA_PTR_FROM_JSON(clusters, clusters_);
      DARABONBA_PTR_FROM_JSON(configId, configId_);
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(instances, instances_);
    };
    CheckAgentConfigSupportedRequest() = default ;
    CheckAgentConfigSupportedRequest(const CheckAgentConfigSupportedRequest &) = default ;
    CheckAgentConfigSupportedRequest(CheckAgentConfigSupportedRequest &&) = default ;
    CheckAgentConfigSupportedRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckAgentConfigSupportedRequest() = default ;
    CheckAgentConfigSupportedRequest& operator=(const CheckAgentConfigSupportedRequest &) = default ;
    CheckAgentConfigSupportedRequest& operator=(CheckAgentConfigSupportedRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentId_ == nullptr
        && this->checkType_ == nullptr && this->clusters_ == nullptr && this->configId_ == nullptr && this->content_ == nullptr && this->instances_ == nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline CheckAgentConfigSupportedRequest& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // checkType Field Functions 
    bool hasCheckType() const { return this->checkType_ != nullptr;};
    void deleteCheckType() { this->checkType_ = nullptr;};
    inline string getCheckType() const { DARABONBA_PTR_GET_DEFAULT(checkType_, "") };
    inline CheckAgentConfigSupportedRequest& setCheckType(string checkType) { DARABONBA_PTR_SET_VALUE(checkType_, checkType) };


    // clusters Field Functions 
    bool hasClusters() const { return this->clusters_ != nullptr;};
    void deleteClusters() { this->clusters_ = nullptr;};
    inline string getClusters() const { DARABONBA_PTR_GET_DEFAULT(clusters_, "") };
    inline CheckAgentConfigSupportedRequest& setClusters(string clusters) { DARABONBA_PTR_SET_VALUE(clusters_, clusters) };


    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline string getConfigId() const { DARABONBA_PTR_GET_DEFAULT(configId_, "") };
    inline CheckAgentConfigSupportedRequest& setConfigId(string configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline CheckAgentConfigSupportedRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline string getInstances() const { DARABONBA_PTR_GET_DEFAULT(instances_, "") };
    inline CheckAgentConfigSupportedRequest& setInstances(string instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };


  protected:
    // The ID of the component to update. You can obtain the component ID from the ListAgents operation.
    // 
    // This parameter is required.
    shared_ptr<string> agentId_ {};
    // The configuration dimension to check, such as cluster or node.
    shared_ptr<string> checkType_ {};
    // The cluster ID.
    shared_ptr<string> clusters_ {};
    // The ID of the component configuration to install.
    // 
    // This parameter is required.
    shared_ptr<string> configId_ {};
    // The configuration content.
    shared_ptr<string> content_ {};
    // The list of instances. Separate multiple instance IDs with commas (,).
    shared_ptr<string> instances_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
