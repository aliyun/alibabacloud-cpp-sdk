// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEINSTANCEAGENTCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEINSTANCEAGENTCONFIGREQUEST_HPP_
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
  class UpdateInstanceAgentConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateInstanceAgentConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(agentId, agentId_);
      DARABONBA_PTR_TO_JSON(configId, configId_);
      DARABONBA_PTR_TO_JSON(instances, instances_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateInstanceAgentConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(agentId, agentId_);
      DARABONBA_PTR_FROM_JSON(configId, configId_);
      DARABONBA_PTR_FROM_JSON(instances, instances_);
    };
    UpdateInstanceAgentConfigRequest() = default ;
    UpdateInstanceAgentConfigRequest(const UpdateInstanceAgentConfigRequest &) = default ;
    UpdateInstanceAgentConfigRequest(UpdateInstanceAgentConfigRequest &&) = default ;
    UpdateInstanceAgentConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateInstanceAgentConfigRequest() = default ;
    UpdateInstanceAgentConfigRequest& operator=(const UpdateInstanceAgentConfigRequest &) = default ;
    UpdateInstanceAgentConfigRequest& operator=(UpdateInstanceAgentConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Instances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Instances& obj) { 
        DARABONBA_PTR_TO_JSON(instance, instance_);
        DARABONBA_PTR_TO_JSON(region, region_);
      };
      friend void from_json(const Darabonba::Json& j, Instances& obj) { 
        DARABONBA_PTR_FROM_JSON(instance, instance_);
        DARABONBA_PTR_FROM_JSON(region, region_);
      };
      Instances() = default ;
      Instances(const Instances &) = default ;
      Instances(Instances &&) = default ;
      Instances(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Instances() = default ;
      Instances& operator=(const Instances &) = default ;
      Instances& operator=(Instances &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->instance_ == nullptr
        && this->region_ == nullptr; };
      // instance Field Functions 
      bool hasInstance() const { return this->instance_ != nullptr;};
      void deleteInstance() { this->instance_ = nullptr;};
      inline string getInstance() const { DARABONBA_PTR_GET_DEFAULT(instance_, "") };
      inline Instances& setInstance(string instance) { DARABONBA_PTR_SET_VALUE(instance_, instance) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline Instances& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    protected:
      // The instance ID.
      shared_ptr<string> instance_ {};
      // The region ID.
      shared_ptr<string> region_ {};
    };

    virtual bool empty() const override { return this->agentId_ == nullptr
        && this->configId_ == nullptr && this->instances_ == nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline UpdateInstanceAgentConfigRequest& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline string getConfigId() const { DARABONBA_PTR_GET_DEFAULT(configId_, "") };
    inline UpdateInstanceAgentConfigRequest& setConfigId(string configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const vector<UpdateInstanceAgentConfigRequest::Instances> & getInstances() const { DARABONBA_PTR_GET_CONST(instances_, vector<UpdateInstanceAgentConfigRequest::Instances>) };
    inline vector<UpdateInstanceAgentConfigRequest::Instances> getInstances() { DARABONBA_PTR_GET(instances_, vector<UpdateInstanceAgentConfigRequest::Instances>) };
    inline UpdateInstanceAgentConfigRequest& setInstances(const vector<UpdateInstanceAgentConfigRequest::Instances> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline UpdateInstanceAgentConfigRequest& setInstances(vector<UpdateInstanceAgentConfigRequest::Instances> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


  protected:
    // The ID of the component whose configuration is to be updated.
    // 
    // This parameter is required.
    shared_ptr<string> agentId_ {};
    // The ID of the component configuration to be applied to the instance.
    // 
    // This parameter is required.
    shared_ptr<string> configId_ {};
    // The instance information.
    shared_ptr<vector<UpdateInstanceAgentConfigRequest::Instances>> instances_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
