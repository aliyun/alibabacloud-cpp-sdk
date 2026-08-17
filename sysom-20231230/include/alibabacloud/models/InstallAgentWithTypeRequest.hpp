// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSTALLAGENTWITHTYPEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INSTALLAGENTWITHTYPEREQUEST_HPP_
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
  class InstallAgentWithTypeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InstallAgentWithTypeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(agentId, agentId_);
      DARABONBA_PTR_TO_JSON(agentVersion, agentVersion_);
      DARABONBA_PTR_TO_JSON(configId, configId_);
      DARABONBA_PTR_TO_JSON(instanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(instances, instances_);
    };
    friend void from_json(const Darabonba::Json& j, InstallAgentWithTypeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(agentId, agentId_);
      DARABONBA_PTR_FROM_JSON(agentVersion, agentVersion_);
      DARABONBA_PTR_FROM_JSON(configId, configId_);
      DARABONBA_PTR_FROM_JSON(instanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(instances, instances_);
    };
    InstallAgentWithTypeRequest() = default ;
    InstallAgentWithTypeRequest(const InstallAgentWithTypeRequest &) = default ;
    InstallAgentWithTypeRequest(InstallAgentWithTypeRequest &&) = default ;
    InstallAgentWithTypeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InstallAgentWithTypeRequest() = default ;
    InstallAgentWithTypeRequest& operator=(const InstallAgentWithTypeRequest &) = default ;
    InstallAgentWithTypeRequest& operator=(InstallAgentWithTypeRequest &&) = default ;
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
      // 
      // This parameter is required.
      shared_ptr<string> instance_ {};
      // The region ID.
      // 
      // This parameter is required.
      shared_ptr<string> region_ {};
    };

    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> key_ {};
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->tag_ == nullptr
        && this->agentId_ == nullptr && this->agentVersion_ == nullptr && this->configId_ == nullptr && this->instanceType_ == nullptr && this->instances_ == nullptr; };
    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<InstallAgentWithTypeRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<InstallAgentWithTypeRequest::Tag>) };
    inline vector<InstallAgentWithTypeRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<InstallAgentWithTypeRequest::Tag>) };
    inline InstallAgentWithTypeRequest& setTag(const vector<InstallAgentWithTypeRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline InstallAgentWithTypeRequest& setTag(vector<InstallAgentWithTypeRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline InstallAgentWithTypeRequest& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // agentVersion Field Functions 
    bool hasAgentVersion() const { return this->agentVersion_ != nullptr;};
    void deleteAgentVersion() { this->agentVersion_ = nullptr;};
    inline string getAgentVersion() const { DARABONBA_PTR_GET_DEFAULT(agentVersion_, "") };
    inline InstallAgentWithTypeRequest& setAgentVersion(string agentVersion) { DARABONBA_PTR_SET_VALUE(agentVersion_, agentVersion) };


    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline string getConfigId() const { DARABONBA_PTR_GET_DEFAULT(configId_, "") };
    inline InstallAgentWithTypeRequest& setConfigId(string configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline InstallAgentWithTypeRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const vector<InstallAgentWithTypeRequest::Instances> & getInstances() const { DARABONBA_PTR_GET_CONST(instances_, vector<InstallAgentWithTypeRequest::Instances>) };
    inline vector<InstallAgentWithTypeRequest::Instances> getInstances() { DARABONBA_PTR_GET(instances_, vector<InstallAgentWithTypeRequest::Instances>) };
    inline InstallAgentWithTypeRequest& setInstances(const vector<InstallAgentWithTypeRequest::Instances> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline InstallAgentWithTypeRequest& setInstances(vector<InstallAgentWithTypeRequest::Instances> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


  protected:
    shared_ptr<vector<InstallAgentWithTypeRequest::Tag>> tag_ {};
    // The ID of the component to install.
    // 
    // This parameter is required.
    shared_ptr<string> agentId_ {};
    // The version of the component to install.
    // 
    // This parameter is required.
    shared_ptr<string> agentVersion_ {};
    // The configuration ID of the component to install.
    shared_ptr<string> configId_ {};
    // The instance type.
    // 
    // This parameter is required.
    shared_ptr<string> instanceType_ {};
    // The list of instances on which to install the component.
    // 
    // This parameter is required.
    shared_ptr<vector<InstallAgentWithTypeRequest::Instances>> instances_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
