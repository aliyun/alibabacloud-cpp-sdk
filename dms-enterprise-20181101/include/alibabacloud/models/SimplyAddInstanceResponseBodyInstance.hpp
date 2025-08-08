// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SIMPLYADDINSTANCERESPONSEBODYINSTANCE_HPP_
#define ALIBABACLOUD_MODELS_SIMPLYADDINSTANCERESPONSEBODYINSTANCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class SimplyAddInstanceResponseBodyInstance : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SimplyAddInstanceResponseBodyInstance& obj) { 
      DARABONBA_PTR_TO_JSON(Host, host_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Port, port_);
    };
    friend void from_json(const Darabonba::Json& j, SimplyAddInstanceResponseBodyInstance& obj) { 
      DARABONBA_PTR_FROM_JSON(Host, host_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
    };
    SimplyAddInstanceResponseBodyInstance() = default ;
    SimplyAddInstanceResponseBodyInstance(const SimplyAddInstanceResponseBodyInstance &) = default ;
    SimplyAddInstanceResponseBodyInstance(SimplyAddInstanceResponseBodyInstance &&) = default ;
    SimplyAddInstanceResponseBodyInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SimplyAddInstanceResponseBodyInstance() = default ;
    SimplyAddInstanceResponseBodyInstance& operator=(const SimplyAddInstanceResponseBodyInstance &) = default ;
    SimplyAddInstanceResponseBodyInstance& operator=(SimplyAddInstanceResponseBodyInstance &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->host_ != nullptr
        && this->instanceId_ != nullptr && this->port_ != nullptr; };
    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string host() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline SimplyAddInstanceResponseBodyInstance& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SimplyAddInstanceResponseBodyInstance& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string port() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline SimplyAddInstanceResponseBodyInstance& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


  protected:
    std::shared_ptr<string> host_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> port_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
