// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONNECTIONRESOURCEMETA_HPP_
#define ALIBABACLOUD_MODELS_CONNECTIONRESOURCEMETA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAILangStudio20240710
{
namespace Models
{
  class ConnectionResourceMeta : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConnectionResourceMeta& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
    };
    friend void from_json(const Darabonba::Json& j, ConnectionResourceMeta& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
    };
    ConnectionResourceMeta() = default ;
    ConnectionResourceMeta(const ConnectionResourceMeta &) = default ;
    ConnectionResourceMeta(ConnectionResourceMeta &&) = default ;
    ConnectionResourceMeta(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConnectionResourceMeta() = default ;
    ConnectionResourceMeta& operator=(const ConnectionResourceMeta &) = default ;
    ConnectionResourceMeta& operator=(ConnectionResourceMeta &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->instanceName_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ConnectionResourceMeta& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline ConnectionResourceMeta& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


  protected:
    // 资源实例ID
    std::shared_ptr<string> instanceId_ = nullptr;
    // 资源实例名称
    std::shared_ptr<string> instanceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710
#endif
