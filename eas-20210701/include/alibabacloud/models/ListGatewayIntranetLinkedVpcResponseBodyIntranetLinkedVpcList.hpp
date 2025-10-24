// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGATEWAYINTRANETLINKEDVPCRESPONSEBODYINTRANETLINKEDVPCLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTGATEWAYINTRANETLINKEDVPCRESPONSEBODYINTRANETLINKEDVPCLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class ListGatewayIntranetLinkedVpcResponseBodyIntranetLinkedVpcList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGatewayIntranetLinkedVpcResponseBodyIntranetLinkedVpcList& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(AuthoritativeDnsEnabled, authoritativeDnsEnabled_);
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, ListGatewayIntranetLinkedVpcResponseBodyIntranetLinkedVpcList& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(AuthoritativeDnsEnabled, authoritativeDnsEnabled_);
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    ListGatewayIntranetLinkedVpcResponseBodyIntranetLinkedVpcList() = default ;
    ListGatewayIntranetLinkedVpcResponseBodyIntranetLinkedVpcList(const ListGatewayIntranetLinkedVpcResponseBodyIntranetLinkedVpcList &) = default ;
    ListGatewayIntranetLinkedVpcResponseBodyIntranetLinkedVpcList(ListGatewayIntranetLinkedVpcResponseBodyIntranetLinkedVpcList &&) = default ;
    ListGatewayIntranetLinkedVpcResponseBodyIntranetLinkedVpcList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGatewayIntranetLinkedVpcResponseBodyIntranetLinkedVpcList() = default ;
    ListGatewayIntranetLinkedVpcResponseBodyIntranetLinkedVpcList& operator=(const ListGatewayIntranetLinkedVpcResponseBodyIntranetLinkedVpcList &) = default ;
    ListGatewayIntranetLinkedVpcResponseBodyIntranetLinkedVpcList& operator=(ListGatewayIntranetLinkedVpcResponseBodyIntranetLinkedVpcList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && return this->authoritativeDnsEnabled_ == nullptr && return this->ip_ == nullptr && return this->securityGroupId_ == nullptr && return this->status_ == nullptr && return this->vSwitchId_ == nullptr
        && return this->vpcId_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline ListGatewayIntranetLinkedVpcResponseBodyIntranetLinkedVpcList& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // authoritativeDnsEnabled Field Functions 
    bool hasAuthoritativeDnsEnabled() const { return this->authoritativeDnsEnabled_ != nullptr;};
    void deleteAuthoritativeDnsEnabled() { this->authoritativeDnsEnabled_ = nullptr;};
    inline bool authoritativeDnsEnabled() const { DARABONBA_PTR_GET_DEFAULT(authoritativeDnsEnabled_, false) };
    inline ListGatewayIntranetLinkedVpcResponseBodyIntranetLinkedVpcList& setAuthoritativeDnsEnabled(bool authoritativeDnsEnabled) { DARABONBA_PTR_SET_VALUE(authoritativeDnsEnabled_, authoritativeDnsEnabled) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline ListGatewayIntranetLinkedVpcResponseBodyIntranetLinkedVpcList& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline ListGatewayIntranetLinkedVpcResponseBodyIntranetLinkedVpcList& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListGatewayIntranetLinkedVpcResponseBodyIntranetLinkedVpcList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline ListGatewayIntranetLinkedVpcResponseBodyIntranetLinkedVpcList& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ListGatewayIntranetLinkedVpcResponseBodyIntranetLinkedVpcList& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    std::shared_ptr<string> accountId_ = nullptr;
    std::shared_ptr<bool> authoritativeDnsEnabled_ = nullptr;
    // The IP address.
    std::shared_ptr<string> ip_ = nullptr;
    // The security group ID.
    std::shared_ptr<string> securityGroupId_ = nullptr;
    // The state of the private gateway.
    // 
    // Valid values:
    // 
    // *   Creating
    // 
    //     <!-- -->
    // 
    //     :
    // 
    //     <!-- -->
    // 
    //     The private gateway is being created.
    // 
    //     <!-- -->
    // 
    // *   Running
    // 
    //     <!-- -->
    // 
    //     :
    // 
    //     <!-- -->
    // 
    //     The private gateway is running.
    // 
    //     <!-- -->
    std::shared_ptr<string> status_ = nullptr;
    // The vSwitch ID.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The virtual private cloud (VPC) ID.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
