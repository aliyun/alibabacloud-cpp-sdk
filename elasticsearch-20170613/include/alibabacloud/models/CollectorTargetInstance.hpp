// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COLLECTORTARGETINSTANCE_HPP_
#define ALIBABACLOUD_MODELS_COLLECTORTARGETINSTANCE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class CollectorTargetInstance : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CollectorTargetInstance& obj) { 
      DARABONBA_PTR_TO_JSON(configType, configType_);
      DARABONBA_PTR_TO_JSON(enableMonitoring, enableMonitoring_);
      DARABONBA_PTR_TO_JSON(hosts, hosts_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(instanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(password, password_);
      DARABONBA_PTR_TO_JSON(protocol, protocol_);
      DARABONBA_PTR_TO_JSON(userName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, CollectorTargetInstance& obj) { 
      DARABONBA_PTR_FROM_JSON(configType, configType_);
      DARABONBA_PTR_FROM_JSON(enableMonitoring, enableMonitoring_);
      DARABONBA_PTR_FROM_JSON(hosts, hosts_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(instanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(password, password_);
      DARABONBA_PTR_FROM_JSON(protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(userName, userName_);
    };
    CollectorTargetInstance() = default ;
    CollectorTargetInstance(const CollectorTargetInstance &) = default ;
    CollectorTargetInstance(CollectorTargetInstance &&) = default ;
    CollectorTargetInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CollectorTargetInstance() = default ;
    CollectorTargetInstance& operator=(const CollectorTargetInstance &) = default ;
    CollectorTargetInstance& operator=(CollectorTargetInstance &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->configType_ != nullptr
        && this->enableMonitoring_ != nullptr && this->hosts_ != nullptr && this->instanceId_ != nullptr && this->instanceType_ != nullptr && this->password_ != nullptr
        && this->protocol_ != nullptr && this->userName_ != nullptr; };
    // configType Field Functions 
    bool hasConfigType() const { return this->configType_ != nullptr;};
    void deleteConfigType() { this->configType_ = nullptr;};
    inline string configType() const { DARABONBA_PTR_GET_DEFAULT(configType_, "") };
    inline CollectorTargetInstance& setConfigType(string configType) { DARABONBA_PTR_SET_VALUE(configType_, configType) };


    // enableMonitoring Field Functions 
    bool hasEnableMonitoring() const { return this->enableMonitoring_ != nullptr;};
    void deleteEnableMonitoring() { this->enableMonitoring_ = nullptr;};
    inline bool enableMonitoring() const { DARABONBA_PTR_GET_DEFAULT(enableMonitoring_, false) };
    inline CollectorTargetInstance& setEnableMonitoring(bool enableMonitoring) { DARABONBA_PTR_SET_VALUE(enableMonitoring_, enableMonitoring) };


    // hosts Field Functions 
    bool hasHosts() const { return this->hosts_ != nullptr;};
    void deleteHosts() { this->hosts_ = nullptr;};
    inline const vector<string> & hosts() const { DARABONBA_PTR_GET_CONST(hosts_, vector<string>) };
    inline vector<string> hosts() { DARABONBA_PTR_GET(hosts_, vector<string>) };
    inline CollectorTargetInstance& setHosts(const vector<string> & hosts) { DARABONBA_PTR_SET_VALUE(hosts_, hosts) };
    inline CollectorTargetInstance& setHosts(vector<string> && hosts) { DARABONBA_PTR_SET_RVALUE(hosts_, hosts) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CollectorTargetInstance& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline CollectorTargetInstance& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline CollectorTargetInstance& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline CollectorTargetInstance& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline CollectorTargetInstance& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> configType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<bool> enableMonitoring_ = nullptr;
    std::shared_ptr<vector<string>> hosts_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> password_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> protocol_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
