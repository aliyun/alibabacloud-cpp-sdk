// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BINDSLBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BINDSLBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class BindSlbRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BindSlbRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(ListenerPort, listenerPort_);
      DARABONBA_PTR_TO_JSON(SlbId, slbId_);
      DARABONBA_PTR_TO_JSON(SlbIp, slbIp_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(VServerGroupId, VServerGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, BindSlbRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(ListenerPort, listenerPort_);
      DARABONBA_PTR_FROM_JSON(SlbId, slbId_);
      DARABONBA_PTR_FROM_JSON(SlbIp, slbIp_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(VServerGroupId, VServerGroupId_);
    };
    BindSlbRequest() = default ;
    BindSlbRequest(const BindSlbRequest &) = default ;
    BindSlbRequest(BindSlbRequest &&) = default ;
    BindSlbRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BindSlbRequest() = default ;
    BindSlbRequest& operator=(const BindSlbRequest &) = default ;
    BindSlbRequest& operator=(BindSlbRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->listenerPort_ == nullptr && this->slbId_ == nullptr && this->slbIp_ == nullptr && this->type_ == nullptr && this->VServerGroupId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline BindSlbRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // listenerPort Field Functions 
    bool hasListenerPort() const { return this->listenerPort_ != nullptr;};
    void deleteListenerPort() { this->listenerPort_ = nullptr;};
    inline int32_t getListenerPort() const { DARABONBA_PTR_GET_DEFAULT(listenerPort_, 0) };
    inline BindSlbRequest& setListenerPort(int32_t listenerPort) { DARABONBA_PTR_SET_VALUE(listenerPort_, listenerPort) };


    // slbId Field Functions 
    bool hasSlbId() const { return this->slbId_ != nullptr;};
    void deleteSlbId() { this->slbId_ = nullptr;};
    inline string getSlbId() const { DARABONBA_PTR_GET_DEFAULT(slbId_, "") };
    inline BindSlbRequest& setSlbId(string slbId) { DARABONBA_PTR_SET_VALUE(slbId_, slbId) };


    // slbIp Field Functions 
    bool hasSlbIp() const { return this->slbIp_ != nullptr;};
    void deleteSlbIp() { this->slbIp_ = nullptr;};
    inline string getSlbIp() const { DARABONBA_PTR_GET_DEFAULT(slbIp_, "") };
    inline BindSlbRequest& setSlbIp(string slbIp) { DARABONBA_PTR_SET_VALUE(slbIp_, slbIp) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline BindSlbRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // VServerGroupId Field Functions 
    bool hasVServerGroupId() const { return this->VServerGroupId_ != nullptr;};
    void deleteVServerGroupId() { this->VServerGroupId_ = nullptr;};
    inline string getVServerGroupId() const { DARABONBA_PTR_GET_DEFAULT(VServerGroupId_, "") };
    inline BindSlbRequest& setVServerGroupId(string VServerGroupId) { DARABONBA_PTR_SET_VALUE(VServerGroupId_, VServerGroupId) };


  protected:
    // The ID of the Enterprise Distributed Application Service (EDAS) application.
    // 
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // The listener port.
    shared_ptr<int32_t> listenerPort_ {};
    // The ID of the SLB instance.
    // 
    // This parameter is required.
    shared_ptr<string> slbId_ {};
    // The IP address of the SLB instance.
    // 
    // This parameter is required.
    shared_ptr<string> slbIp_ {};
    // The network type of the SLB instance. Valid values:
    // 
    // - internet: an Internet-facing instance.
    // 
    // - intranet: an internal-facing instance.
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
    // The ID of the vServer group for the internal-facing SLB instance.
    shared_ptr<string> VServerGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
