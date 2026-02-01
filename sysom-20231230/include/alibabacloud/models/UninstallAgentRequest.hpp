// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNINSTALLAGENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UNINSTALLAGENTREQUEST_HPP_
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
  class UninstallAgentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UninstallAgentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(agent_id, agentId_);
      DARABONBA_PTR_TO_JSON(agent_version, agentVersion_);
      DARABONBA_PTR_TO_JSON(instances, instances_);
    };
    friend void from_json(const Darabonba::Json& j, UninstallAgentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(agent_id, agentId_);
      DARABONBA_PTR_FROM_JSON(agent_version, agentVersion_);
      DARABONBA_PTR_FROM_JSON(instances, instances_);
    };
    UninstallAgentRequest() = default ;
    UninstallAgentRequest(const UninstallAgentRequest &) = default ;
    UninstallAgentRequest(UninstallAgentRequest &&) = default ;
    UninstallAgentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UninstallAgentRequest() = default ;
    UninstallAgentRequest& operator=(const UninstallAgentRequest &) = default ;
    UninstallAgentRequest& operator=(UninstallAgentRequest &&) = default ;
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
      // This parameter is required.
      shared_ptr<string> instance_ {};
      // This parameter is required.
      shared_ptr<string> region_ {};
    };

    virtual bool empty() const override { return this->agentId_ == nullptr
        && this->agentVersion_ == nullptr && this->instances_ == nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline UninstallAgentRequest& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // agentVersion Field Functions 
    bool hasAgentVersion() const { return this->agentVersion_ != nullptr;};
    void deleteAgentVersion() { this->agentVersion_ = nullptr;};
    inline string getAgentVersion() const { DARABONBA_PTR_GET_DEFAULT(agentVersion_, "") };
    inline UninstallAgentRequest& setAgentVersion(string agentVersion) { DARABONBA_PTR_SET_VALUE(agentVersion_, agentVersion) };


    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const vector<UninstallAgentRequest::Instances> & getInstances() const { DARABONBA_PTR_GET_CONST(instances_, vector<UninstallAgentRequest::Instances>) };
    inline vector<UninstallAgentRequest::Instances> getInstances() { DARABONBA_PTR_GET(instances_, vector<UninstallAgentRequest::Instances>) };
    inline UninstallAgentRequest& setInstances(const vector<UninstallAgentRequest::Instances> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline UninstallAgentRequest& setInstances(vector<UninstallAgentRequest::Instances> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


  protected:
    // This parameter is required.
    shared_ptr<string> agentId_ {};
    // This parameter is required.
    shared_ptr<string> agentVersion_ {};
    // This parameter is required.
    shared_ptr<vector<UninstallAgentRequest::Instances>> instances_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
