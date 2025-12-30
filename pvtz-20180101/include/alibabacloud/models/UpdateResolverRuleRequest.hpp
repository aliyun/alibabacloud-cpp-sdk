// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERESOLVERRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATERESOLVERRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Pvtz20180101
{
namespace Models
{
  class UpdateResolverRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateResolverRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndpointId, endpointId_);
      DARABONBA_PTR_TO_JSON(ForwardIp, forwardIp_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PriorityForwardConfigs, priorityForwardConfigs_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateResolverRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndpointId, endpointId_);
      DARABONBA_PTR_FROM_JSON(ForwardIp, forwardIp_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PriorityForwardConfigs, priorityForwardConfigs_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
    };
    UpdateResolverRuleRequest() = default ;
    UpdateResolverRuleRequest(const UpdateResolverRuleRequest &) = default ;
    UpdateResolverRuleRequest(UpdateResolverRuleRequest &&) = default ;
    UpdateResolverRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateResolverRuleRequest() = default ;
    UpdateResolverRuleRequest& operator=(const UpdateResolverRuleRequest &) = default ;
    UpdateResolverRuleRequest& operator=(UpdateResolverRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PriorityForwardConfigs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PriorityForwardConfigs& obj) { 
        DARABONBA_PTR_TO_JSON(AlidnsServiceAddresses, alidnsServiceAddresses_);
        DARABONBA_PTR_TO_JSON(CustomAddresses, customAddresses_);
        DARABONBA_PTR_TO_JSON(EnableStatus, enableStatus_);
        DARABONBA_PTR_TO_JSON(Priority, priority_);
        DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      };
      friend void from_json(const Darabonba::Json& j, PriorityForwardConfigs& obj) { 
        DARABONBA_PTR_FROM_JSON(AlidnsServiceAddresses, alidnsServiceAddresses_);
        DARABONBA_PTR_FROM_JSON(CustomAddresses, customAddresses_);
        DARABONBA_PTR_FROM_JSON(EnableStatus, enableStatus_);
        DARABONBA_PTR_FROM_JSON(Priority, priority_);
        DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      };
      PriorityForwardConfigs() = default ;
      PriorityForwardConfigs(const PriorityForwardConfigs &) = default ;
      PriorityForwardConfigs(PriorityForwardConfigs &&) = default ;
      PriorityForwardConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PriorityForwardConfigs() = default ;
      PriorityForwardConfigs& operator=(const PriorityForwardConfigs &) = default ;
      PriorityForwardConfigs& operator=(PriorityForwardConfigs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->alidnsServiceAddresses_ == nullptr
        && this->customAddresses_ == nullptr && this->enableStatus_ == nullptr && this->priority_ == nullptr && this->protocol_ == nullptr; };
      // alidnsServiceAddresses Field Functions 
      bool hasAlidnsServiceAddresses() const { return this->alidnsServiceAddresses_ != nullptr;};
      void deleteAlidnsServiceAddresses() { this->alidnsServiceAddresses_ = nullptr;};
      inline const vector<string> & getAlidnsServiceAddresses() const { DARABONBA_PTR_GET_CONST(alidnsServiceAddresses_, vector<string>) };
      inline vector<string> getAlidnsServiceAddresses() { DARABONBA_PTR_GET(alidnsServiceAddresses_, vector<string>) };
      inline PriorityForwardConfigs& setAlidnsServiceAddresses(const vector<string> & alidnsServiceAddresses) { DARABONBA_PTR_SET_VALUE(alidnsServiceAddresses_, alidnsServiceAddresses) };
      inline PriorityForwardConfigs& setAlidnsServiceAddresses(vector<string> && alidnsServiceAddresses) { DARABONBA_PTR_SET_RVALUE(alidnsServiceAddresses_, alidnsServiceAddresses) };


      // customAddresses Field Functions 
      bool hasCustomAddresses() const { return this->customAddresses_ != nullptr;};
      void deleteCustomAddresses() { this->customAddresses_ = nullptr;};
      inline const vector<string> & getCustomAddresses() const { DARABONBA_PTR_GET_CONST(customAddresses_, vector<string>) };
      inline vector<string> getCustomAddresses() { DARABONBA_PTR_GET(customAddresses_, vector<string>) };
      inline PriorityForwardConfigs& setCustomAddresses(const vector<string> & customAddresses) { DARABONBA_PTR_SET_VALUE(customAddresses_, customAddresses) };
      inline PriorityForwardConfigs& setCustomAddresses(vector<string> && customAddresses) { DARABONBA_PTR_SET_RVALUE(customAddresses_, customAddresses) };


      // enableStatus Field Functions 
      bool hasEnableStatus() const { return this->enableStatus_ != nullptr;};
      void deleteEnableStatus() { this->enableStatus_ = nullptr;};
      inline string getEnableStatus() const { DARABONBA_PTR_GET_DEFAULT(enableStatus_, "") };
      inline PriorityForwardConfigs& setEnableStatus(string enableStatus) { DARABONBA_PTR_SET_VALUE(enableStatus_, enableStatus) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
      inline PriorityForwardConfigs& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
      inline PriorityForwardConfigs& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    protected:
      shared_ptr<vector<string>> alidnsServiceAddresses_ {};
      shared_ptr<vector<string>> customAddresses_ {};
      shared_ptr<string> enableStatus_ {};
      shared_ptr<int32_t> priority_ {};
      shared_ptr<string> protocol_ {};
    };

    class ForwardIp : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ForwardIp& obj) { 
        DARABONBA_PTR_TO_JSON(Ip, ip_);
        DARABONBA_PTR_TO_JSON(Port, port_);
      };
      friend void from_json(const Darabonba::Json& j, ForwardIp& obj) { 
        DARABONBA_PTR_FROM_JSON(Ip, ip_);
        DARABONBA_PTR_FROM_JSON(Port, port_);
      };
      ForwardIp() = default ;
      ForwardIp(const ForwardIp &) = default ;
      ForwardIp(ForwardIp &&) = default ;
      ForwardIp(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ForwardIp() = default ;
      ForwardIp& operator=(const ForwardIp &) = default ;
      ForwardIp& operator=(ForwardIp &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->ip_ == nullptr
        && this->port_ == nullptr; };
      // ip Field Functions 
      bool hasIp() const { return this->ip_ != nullptr;};
      void deleteIp() { this->ip_ = nullptr;};
      inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
      inline ForwardIp& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
      inline ForwardIp& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    protected:
      // The IP address of the destination server.
      // 
      // >  You cannot specify the following IP addresses as the IP addresses of the external DNS servers because the IP addresses are reserved by the system: 100.100.2.136 to 100.100.2.138, and 100.100.2.116 to 100.100.2.118.
      shared_ptr<string> ip_ {};
      // The port of the destination server.
      shared_ptr<int32_t> port_ {};
    };

    virtual bool empty() const override { return this->endpointId_ == nullptr
        && this->forwardIp_ == nullptr && this->lang_ == nullptr && this->name_ == nullptr && this->priorityForwardConfigs_ == nullptr && this->ruleId_ == nullptr; };
    // endpointId Field Functions 
    bool hasEndpointId() const { return this->endpointId_ != nullptr;};
    void deleteEndpointId() { this->endpointId_ = nullptr;};
    inline string getEndpointId() const { DARABONBA_PTR_GET_DEFAULT(endpointId_, "") };
    inline UpdateResolverRuleRequest& setEndpointId(string endpointId) { DARABONBA_PTR_SET_VALUE(endpointId_, endpointId) };


    // forwardIp Field Functions 
    bool hasForwardIp() const { return this->forwardIp_ != nullptr;};
    void deleteForwardIp() { this->forwardIp_ = nullptr;};
    inline const vector<UpdateResolverRuleRequest::ForwardIp> & getForwardIp() const { DARABONBA_PTR_GET_CONST(forwardIp_, vector<UpdateResolverRuleRequest::ForwardIp>) };
    inline vector<UpdateResolverRuleRequest::ForwardIp> getForwardIp() { DARABONBA_PTR_GET(forwardIp_, vector<UpdateResolverRuleRequest::ForwardIp>) };
    inline UpdateResolverRuleRequest& setForwardIp(const vector<UpdateResolverRuleRequest::ForwardIp> & forwardIp) { DARABONBA_PTR_SET_VALUE(forwardIp_, forwardIp) };
    inline UpdateResolverRuleRequest& setForwardIp(vector<UpdateResolverRuleRequest::ForwardIp> && forwardIp) { DARABONBA_PTR_SET_RVALUE(forwardIp_, forwardIp) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline UpdateResolverRuleRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateResolverRuleRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // priorityForwardConfigs Field Functions 
    bool hasPriorityForwardConfigs() const { return this->priorityForwardConfigs_ != nullptr;};
    void deletePriorityForwardConfigs() { this->priorityForwardConfigs_ = nullptr;};
    inline const vector<UpdateResolverRuleRequest::PriorityForwardConfigs> & getPriorityForwardConfigs() const { DARABONBA_PTR_GET_CONST(priorityForwardConfigs_, vector<UpdateResolverRuleRequest::PriorityForwardConfigs>) };
    inline vector<UpdateResolverRuleRequest::PriorityForwardConfigs> getPriorityForwardConfigs() { DARABONBA_PTR_GET(priorityForwardConfigs_, vector<UpdateResolverRuleRequest::PriorityForwardConfigs>) };
    inline UpdateResolverRuleRequest& setPriorityForwardConfigs(const vector<UpdateResolverRuleRequest::PriorityForwardConfigs> & priorityForwardConfigs) { DARABONBA_PTR_SET_VALUE(priorityForwardConfigs_, priorityForwardConfigs) };
    inline UpdateResolverRuleRequest& setPriorityForwardConfigs(vector<UpdateResolverRuleRequest::PriorityForwardConfigs> && priorityForwardConfigs) { DARABONBA_PTR_SET_RVALUE(priorityForwardConfigs_, priorityForwardConfigs) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline UpdateResolverRuleRequest& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


  protected:
    // The endpoint ID.
    shared_ptr<string> endpointId_ {};
    // The IP addresses and ports of the external Domain Name System (DNS) servers. Enter the IP addresses and ports of the destination servers to which the DNS requests are forwarded. You can enter up to six IP addresses and ports. Both private and public IP addresses are supported.
    // 
    // >  If you specify public IP addresses as the IP addresses of the external DNS servers and Elastic Compute Service (ECS) instances in the outbound virtual private cloud (VPC) are not assigned public IP addresses, you need to activate NAT Gateway for the VPC and create and manage SNAT entries on a NAT gateway.
    shared_ptr<vector<UpdateResolverRuleRequest::ForwardIp>> forwardIp_ {};
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    // 
    // Default value: en.
    shared_ptr<string> lang_ {};
    // The name of the forwarding rule.
    shared_ptr<string> name_ {};
    shared_ptr<vector<UpdateResolverRuleRequest::PriorityForwardConfigs>> priorityForwardConfigs_ {};
    // The ID of the forwarding rule.
    // 
    // This parameter is required.
    shared_ptr<string> ruleId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Pvtz20180101
#endif
