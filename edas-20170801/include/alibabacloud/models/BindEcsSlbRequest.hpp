// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BINDECSSLBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BINDECSSLBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class BindEcsSlbRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BindEcsSlbRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(DeployGroupId, deployGroupId_);
      DARABONBA_PTR_TO_JSON(ListenerHealthCheckUrl, listenerHealthCheckUrl_);
      DARABONBA_PTR_TO_JSON(ListenerPort, listenerPort_);
      DARABONBA_PTR_TO_JSON(ListenerProtocol, listenerProtocol_);
      DARABONBA_PTR_TO_JSON(SlbId, slbId_);
      DARABONBA_PTR_TO_JSON(VForwardingUrlRule, VForwardingUrlRule_);
      DARABONBA_PTR_TO_JSON(VServerGroupId, VServerGroupId_);
      DARABONBA_PTR_TO_JSON(VServerGroupName, VServerGroupName_);
    };
    friend void from_json(const Darabonba::Json& j, BindEcsSlbRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(DeployGroupId, deployGroupId_);
      DARABONBA_PTR_FROM_JSON(ListenerHealthCheckUrl, listenerHealthCheckUrl_);
      DARABONBA_PTR_FROM_JSON(ListenerPort, listenerPort_);
      DARABONBA_PTR_FROM_JSON(ListenerProtocol, listenerProtocol_);
      DARABONBA_PTR_FROM_JSON(SlbId, slbId_);
      DARABONBA_PTR_FROM_JSON(VForwardingUrlRule, VForwardingUrlRule_);
      DARABONBA_PTR_FROM_JSON(VServerGroupId, VServerGroupId_);
      DARABONBA_PTR_FROM_JSON(VServerGroupName, VServerGroupName_);
    };
    BindEcsSlbRequest() = default ;
    BindEcsSlbRequest(const BindEcsSlbRequest &) = default ;
    BindEcsSlbRequest(BindEcsSlbRequest &&) = default ;
    BindEcsSlbRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BindEcsSlbRequest() = default ;
    BindEcsSlbRequest& operator=(const BindEcsSlbRequest &) = default ;
    BindEcsSlbRequest& operator=(BindEcsSlbRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->deployGroupId_ == nullptr && this->listenerHealthCheckUrl_ == nullptr && this->listenerPort_ == nullptr && this->listenerProtocol_ == nullptr && this->slbId_ == nullptr
        && this->VForwardingUrlRule_ == nullptr && this->VServerGroupId_ == nullptr && this->VServerGroupName_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline BindEcsSlbRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // deployGroupId Field Functions 
    bool hasDeployGroupId() const { return this->deployGroupId_ != nullptr;};
    void deleteDeployGroupId() { this->deployGroupId_ = nullptr;};
    inline string getDeployGroupId() const { DARABONBA_PTR_GET_DEFAULT(deployGroupId_, "") };
    inline BindEcsSlbRequest& setDeployGroupId(string deployGroupId) { DARABONBA_PTR_SET_VALUE(deployGroupId_, deployGroupId) };


    // listenerHealthCheckUrl Field Functions 
    bool hasListenerHealthCheckUrl() const { return this->listenerHealthCheckUrl_ != nullptr;};
    void deleteListenerHealthCheckUrl() { this->listenerHealthCheckUrl_ = nullptr;};
    inline string getListenerHealthCheckUrl() const { DARABONBA_PTR_GET_DEFAULT(listenerHealthCheckUrl_, "") };
    inline BindEcsSlbRequest& setListenerHealthCheckUrl(string listenerHealthCheckUrl) { DARABONBA_PTR_SET_VALUE(listenerHealthCheckUrl_, listenerHealthCheckUrl) };


    // listenerPort Field Functions 
    bool hasListenerPort() const { return this->listenerPort_ != nullptr;};
    void deleteListenerPort() { this->listenerPort_ = nullptr;};
    inline int32_t getListenerPort() const { DARABONBA_PTR_GET_DEFAULT(listenerPort_, 0) };
    inline BindEcsSlbRequest& setListenerPort(int32_t listenerPort) { DARABONBA_PTR_SET_VALUE(listenerPort_, listenerPort) };


    // listenerProtocol Field Functions 
    bool hasListenerProtocol() const { return this->listenerProtocol_ != nullptr;};
    void deleteListenerProtocol() { this->listenerProtocol_ = nullptr;};
    inline string getListenerProtocol() const { DARABONBA_PTR_GET_DEFAULT(listenerProtocol_, "") };
    inline BindEcsSlbRequest& setListenerProtocol(string listenerProtocol) { DARABONBA_PTR_SET_VALUE(listenerProtocol_, listenerProtocol) };


    // slbId Field Functions 
    bool hasSlbId() const { return this->slbId_ != nullptr;};
    void deleteSlbId() { this->slbId_ = nullptr;};
    inline string getSlbId() const { DARABONBA_PTR_GET_DEFAULT(slbId_, "") };
    inline BindEcsSlbRequest& setSlbId(string slbId) { DARABONBA_PTR_SET_VALUE(slbId_, slbId) };


    // VForwardingUrlRule Field Functions 
    bool hasVForwardingUrlRule() const { return this->VForwardingUrlRule_ != nullptr;};
    void deleteVForwardingUrlRule() { this->VForwardingUrlRule_ = nullptr;};
    inline string getVForwardingUrlRule() const { DARABONBA_PTR_GET_DEFAULT(VForwardingUrlRule_, "") };
    inline BindEcsSlbRequest& setVForwardingUrlRule(string VForwardingUrlRule) { DARABONBA_PTR_SET_VALUE(VForwardingUrlRule_, VForwardingUrlRule) };


    // VServerGroupId Field Functions 
    bool hasVServerGroupId() const { return this->VServerGroupId_ != nullptr;};
    void deleteVServerGroupId() { this->VServerGroupId_ = nullptr;};
    inline string getVServerGroupId() const { DARABONBA_PTR_GET_DEFAULT(VServerGroupId_, "") };
    inline BindEcsSlbRequest& setVServerGroupId(string VServerGroupId) { DARABONBA_PTR_SET_VALUE(VServerGroupId_, VServerGroupId) };


    // VServerGroupName Field Functions 
    bool hasVServerGroupName() const { return this->VServerGroupName_ != nullptr;};
    void deleteVServerGroupName() { this->VServerGroupName_ = nullptr;};
    inline string getVServerGroupName() const { DARABONBA_PTR_GET_DEFAULT(VServerGroupName_, "") };
    inline BindEcsSlbRequest& setVServerGroupName(string VServerGroupName) { DARABONBA_PTR_SET_VALUE(VServerGroupName_, VServerGroupName) };


  protected:
    // The ID of the application. You can query the application ID by calling the ListApplication operation. For more information, see [ListApplication](https://help.aliyun.com/document_detail/149390.html).
    // 
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // The ID of the instance group whose application you want to bind. You can call the ListDeployGroup operation to query the group ID. For more information, see [ListDeployGroup](https://help.aliyun.com/document_detail/62077.html).
    shared_ptr<string> deployGroupId_ {};
    // The health check URL.
    shared_ptr<string> listenerHealthCheckUrl_ {};
    // The listener port for the SLB instance.
    // 
    // This parameter is required.
    shared_ptr<int32_t> listenerPort_ {};
    // The listener protocol for the SLB instance.
    // 
    // This parameter is required.
    shared_ptr<string> listenerProtocol_ {};
    // The ID of the SLB instance.
    // 
    // This parameter is required.
    shared_ptr<string> slbId_ {};
    // The forwarding rule of the SLB listener.
    shared_ptr<string> VForwardingUrlRule_ {};
    // The ID of the vServer group for the SLB instance.
    shared_ptr<string> VServerGroupId_ {};
    // The name of the vServer group.
    shared_ptr<string> VServerGroupName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
