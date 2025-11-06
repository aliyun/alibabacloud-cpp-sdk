// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBINDINGCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETBINDINGCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class GetBindingCountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBindingCountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BindingType, bindingType_);
      DARABONBA_PTR_TO_JSON(ConsoleSessionId, consoleSessionId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_TO_JSON(Upstream, upstream_);
      DARABONBA_PTR_TO_JSON(VhostName, vhostName_);
    };
    friend void from_json(const Darabonba::Json& j, GetBindingCountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BindingType, bindingType_);
      DARABONBA_PTR_FROM_JSON(ConsoleSessionId, consoleSessionId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_FROM_JSON(Upstream, upstream_);
      DARABONBA_PTR_FROM_JSON(VhostName, vhostName_);
    };
    GetBindingCountRequest() = default ;
    GetBindingCountRequest(const GetBindingCountRequest &) = default ;
    GetBindingCountRequest(GetBindingCountRequest &&) = default ;
    GetBindingCountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBindingCountRequest() = default ;
    GetBindingCountRequest& operator=(const GetBindingCountRequest &) = default ;
    GetBindingCountRequest& operator=(GetBindingCountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bindingType_ == nullptr
        && return this->consoleSessionId_ == nullptr && return this->instanceId_ == nullptr && return this->resourceName_ == nullptr && return this->upstream_ == nullptr && return this->vhostName_ == nullptr; };
    // bindingType Field Functions 
    bool hasBindingType() const { return this->bindingType_ != nullptr;};
    void deleteBindingType() { this->bindingType_ = nullptr;};
    inline int32_t bindingType() const { DARABONBA_PTR_GET_DEFAULT(bindingType_, 0) };
    inline GetBindingCountRequest& setBindingType(int32_t bindingType) { DARABONBA_PTR_SET_VALUE(bindingType_, bindingType) };


    // consoleSessionId Field Functions 
    bool hasConsoleSessionId() const { return this->consoleSessionId_ != nullptr;};
    void deleteConsoleSessionId() { this->consoleSessionId_ = nullptr;};
    inline string consoleSessionId() const { DARABONBA_PTR_GET_DEFAULT(consoleSessionId_, "") };
    inline GetBindingCountRequest& setConsoleSessionId(string consoleSessionId) { DARABONBA_PTR_SET_VALUE(consoleSessionId_, consoleSessionId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetBindingCountRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // resourceName Field Functions 
    bool hasResourceName() const { return this->resourceName_ != nullptr;};
    void deleteResourceName() { this->resourceName_ = nullptr;};
    inline string resourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
    inline GetBindingCountRequest& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


    // upstream Field Functions 
    bool hasUpstream() const { return this->upstream_ != nullptr;};
    void deleteUpstream() { this->upstream_ = nullptr;};
    inline bool upstream() const { DARABONBA_PTR_GET_DEFAULT(upstream_, false) };
    inline GetBindingCountRequest& setUpstream(bool upstream) { DARABONBA_PTR_SET_VALUE(upstream_, upstream) };


    // vhostName Field Functions 
    bool hasVhostName() const { return this->vhostName_ != nullptr;};
    void deleteVhostName() { this->vhostName_ = nullptr;};
    inline string vhostName() const { DARABONBA_PTR_GET_DEFAULT(vhostName_, "") };
    inline GetBindingCountRequest& setVhostName(string vhostName) { DARABONBA_PTR_SET_VALUE(vhostName_, vhostName) };


  protected:
    // This parameter is required.
    std::shared_ptr<int32_t> bindingType_ = nullptr;
    std::shared_ptr<string> consoleSessionId_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> resourceName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<bool> upstream_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> vhostName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
