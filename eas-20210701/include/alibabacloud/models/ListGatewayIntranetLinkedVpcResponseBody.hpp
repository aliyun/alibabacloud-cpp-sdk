// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGATEWAYINTRANETLINKEDVPCRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTGATEWAYINTRANETLINKEDVPCRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class ListGatewayIntranetLinkedVpcResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGatewayIntranetLinkedVpcResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(IntranetLinkedVpcList, intranetLinkedVpcList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListGatewayIntranetLinkedVpcResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(IntranetLinkedVpcList, intranetLinkedVpcList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListGatewayIntranetLinkedVpcResponseBody() = default ;
    ListGatewayIntranetLinkedVpcResponseBody(const ListGatewayIntranetLinkedVpcResponseBody &) = default ;
    ListGatewayIntranetLinkedVpcResponseBody(ListGatewayIntranetLinkedVpcResponseBody &&) = default ;
    ListGatewayIntranetLinkedVpcResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGatewayIntranetLinkedVpcResponseBody() = default ;
    ListGatewayIntranetLinkedVpcResponseBody& operator=(const ListGatewayIntranetLinkedVpcResponseBody &) = default ;
    ListGatewayIntranetLinkedVpcResponseBody& operator=(ListGatewayIntranetLinkedVpcResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class IntranetLinkedVpcList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IntranetLinkedVpcList& obj) { 
        DARABONBA_PTR_TO_JSON(AccountId, accountId_);
        DARABONBA_PTR_TO_JSON(AuthoritativeDnsEnabled, authoritativeDnsEnabled_);
        DARABONBA_PTR_TO_JSON(Ip, ip_);
        DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      };
      friend void from_json(const Darabonba::Json& j, IntranetLinkedVpcList& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
        DARABONBA_PTR_FROM_JSON(AuthoritativeDnsEnabled, authoritativeDnsEnabled_);
        DARABONBA_PTR_FROM_JSON(Ip, ip_);
        DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      };
      IntranetLinkedVpcList() = default ;
      IntranetLinkedVpcList(const IntranetLinkedVpcList &) = default ;
      IntranetLinkedVpcList(IntranetLinkedVpcList &&) = default ;
      IntranetLinkedVpcList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~IntranetLinkedVpcList() = default ;
      IntranetLinkedVpcList& operator=(const IntranetLinkedVpcList &) = default ;
      IntranetLinkedVpcList& operator=(IntranetLinkedVpcList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accountId_ == nullptr
        && this->authoritativeDnsEnabled_ == nullptr && this->ip_ == nullptr && this->securityGroupId_ == nullptr && this->status_ == nullptr && this->vSwitchId_ == nullptr
        && this->vpcId_ == nullptr; };
      // accountId Field Functions 
      bool hasAccountId() const { return this->accountId_ != nullptr;};
      void deleteAccountId() { this->accountId_ = nullptr;};
      inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
      inline IntranetLinkedVpcList& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


      // authoritativeDnsEnabled Field Functions 
      bool hasAuthoritativeDnsEnabled() const { return this->authoritativeDnsEnabled_ != nullptr;};
      void deleteAuthoritativeDnsEnabled() { this->authoritativeDnsEnabled_ = nullptr;};
      inline bool getAuthoritativeDnsEnabled() const { DARABONBA_PTR_GET_DEFAULT(authoritativeDnsEnabled_, false) };
      inline IntranetLinkedVpcList& setAuthoritativeDnsEnabled(bool authoritativeDnsEnabled) { DARABONBA_PTR_SET_VALUE(authoritativeDnsEnabled_, authoritativeDnsEnabled) };


      // ip Field Functions 
      bool hasIp() const { return this->ip_ != nullptr;};
      void deleteIp() { this->ip_ = nullptr;};
      inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
      inline IntranetLinkedVpcList& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


      // securityGroupId Field Functions 
      bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
      void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
      inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
      inline IntranetLinkedVpcList& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline IntranetLinkedVpcList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // vSwitchId Field Functions 
      bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
      void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
      inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
      inline IntranetLinkedVpcList& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline IntranetLinkedVpcList& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    protected:
      shared_ptr<string> accountId_ {};
      shared_ptr<bool> authoritativeDnsEnabled_ {};
      // The IP address.
      shared_ptr<string> ip_ {};
      // The security group ID.
      shared_ptr<string> securityGroupId_ {};
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
      shared_ptr<string> status_ {};
      // The vSwitch ID.
      shared_ptr<string> vSwitchId_ {};
      // The virtual private cloud (VPC) ID.
      shared_ptr<string> vpcId_ {};
    };

    virtual bool empty() const override { return this->gatewayId_ == nullptr
        && this->intranetLinkedVpcList_ == nullptr && this->requestId_ == nullptr; };
    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
    inline ListGatewayIntranetLinkedVpcResponseBody& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // intranetLinkedVpcList Field Functions 
    bool hasIntranetLinkedVpcList() const { return this->intranetLinkedVpcList_ != nullptr;};
    void deleteIntranetLinkedVpcList() { this->intranetLinkedVpcList_ = nullptr;};
    inline const vector<ListGatewayIntranetLinkedVpcResponseBody::IntranetLinkedVpcList> & getIntranetLinkedVpcList() const { DARABONBA_PTR_GET_CONST(intranetLinkedVpcList_, vector<ListGatewayIntranetLinkedVpcResponseBody::IntranetLinkedVpcList>) };
    inline vector<ListGatewayIntranetLinkedVpcResponseBody::IntranetLinkedVpcList> getIntranetLinkedVpcList() { DARABONBA_PTR_GET(intranetLinkedVpcList_, vector<ListGatewayIntranetLinkedVpcResponseBody::IntranetLinkedVpcList>) };
    inline ListGatewayIntranetLinkedVpcResponseBody& setIntranetLinkedVpcList(const vector<ListGatewayIntranetLinkedVpcResponseBody::IntranetLinkedVpcList> & intranetLinkedVpcList) { DARABONBA_PTR_SET_VALUE(intranetLinkedVpcList_, intranetLinkedVpcList) };
    inline ListGatewayIntranetLinkedVpcResponseBody& setIntranetLinkedVpcList(vector<ListGatewayIntranetLinkedVpcResponseBody::IntranetLinkedVpcList> && intranetLinkedVpcList) { DARABONBA_PTR_SET_RVALUE(intranetLinkedVpcList_, intranetLinkedVpcList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListGatewayIntranetLinkedVpcResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The private gateway ID.
    shared_ptr<string> gatewayId_ {};
    // The internal endpoints.
    shared_ptr<vector<ListGatewayIntranetLinkedVpcResponseBody::IntranetLinkedVpcList>> intranetLinkedVpcList_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
