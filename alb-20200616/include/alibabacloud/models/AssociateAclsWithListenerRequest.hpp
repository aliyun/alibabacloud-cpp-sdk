// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSOCIATEACLSWITHLISTENERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ASSOCIATEACLSWITHLISTENERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class AssociateAclsWithListenerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssociateAclsWithListenerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AclIds, aclIds_);
      DARABONBA_PTR_TO_JSON(AclType, aclType_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(ListenerId, listenerId_);
    };
    friend void from_json(const Darabonba::Json& j, AssociateAclsWithListenerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AclIds, aclIds_);
      DARABONBA_PTR_FROM_JSON(AclType, aclType_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(ListenerId, listenerId_);
    };
    AssociateAclsWithListenerRequest() = default ;
    AssociateAclsWithListenerRequest(const AssociateAclsWithListenerRequest &) = default ;
    AssociateAclsWithListenerRequest(AssociateAclsWithListenerRequest &&) = default ;
    AssociateAclsWithListenerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssociateAclsWithListenerRequest() = default ;
    AssociateAclsWithListenerRequest& operator=(const AssociateAclsWithListenerRequest &) = default ;
    AssociateAclsWithListenerRequest& operator=(AssociateAclsWithListenerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aclIds_ != nullptr
        && this->aclType_ != nullptr && this->clientToken_ != nullptr && this->dryRun_ != nullptr && this->listenerId_ != nullptr; };
    // aclIds Field Functions 
    bool hasAclIds() const { return this->aclIds_ != nullptr;};
    void deleteAclIds() { this->aclIds_ = nullptr;};
    inline const vector<string> & aclIds() const { DARABONBA_PTR_GET_CONST(aclIds_, vector<string>) };
    inline vector<string> aclIds() { DARABONBA_PTR_GET(aclIds_, vector<string>) };
    inline AssociateAclsWithListenerRequest& setAclIds(const vector<string> & aclIds) { DARABONBA_PTR_SET_VALUE(aclIds_, aclIds) };
    inline AssociateAclsWithListenerRequest& setAclIds(vector<string> && aclIds) { DARABONBA_PTR_SET_RVALUE(aclIds_, aclIds) };


    // aclType Field Functions 
    bool hasAclType() const { return this->aclType_ != nullptr;};
    void deleteAclType() { this->aclType_ = nullptr;};
    inline string aclType() const { DARABONBA_PTR_GET_DEFAULT(aclType_, "") };
    inline AssociateAclsWithListenerRequest& setAclType(string aclType) { DARABONBA_PTR_SET_VALUE(aclType_, aclType) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline AssociateAclsWithListenerRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline AssociateAclsWithListenerRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // listenerId Field Functions 
    bool hasListenerId() const { return this->listenerId_ != nullptr;};
    void deleteListenerId() { this->listenerId_ = nullptr;};
    inline string listenerId() const { DARABONBA_PTR_GET_DEFAULT(listenerId_, "") };
    inline AssociateAclsWithListenerRequest& setListenerId(string listenerId) { DARABONBA_PTR_SET_VALUE(listenerId_, listenerId) };


  protected:
    // The IDs of the ACLs. You can specify up to three IDs in each call.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> aclIds_ = nullptr;
    // The type of the ACL. Valid values:
    // 
    // *   **White**: a whitelist. Only requests from the IP addresses or CIDR blocks in the ACL are forwarded. The whitelist applies to scenarios in which you want to allow only specific IP addresses to access an application. Your service may be adversely affected if the whitelist is not properly configured. If a whitelist is configured for a listener, only requests from IP addresses that are added to the whitelist are forwarded by the listener. If you enable a whitelist but do not add an IP address to the whitelist, the listener forwards all requests.
    // *   **Black**: a blacklist. All requests from the IP addresses or CIDR blocks in the ACL are blocked. The blacklist applies to scenarios in which you want to block access from specific IP addresses to an application. If a blacklist is configured for a listener but no IP address is added to the blacklist, the listener forwards all requests.
    // 
    // This parameter is required.
    std::shared_ptr<string> aclType_ = nullptr;
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the **request ID** as the **client token**. The **request ID** may be different for each request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // Specifies whether to perform only a dry run, without performing the actual request. Valid values:
    // 
    // *   **true**: performs only a dry run. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, and service limits. If the request fails the dry run, an error message is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // *   **false** (default): performs a dry run and performs the actual request. If the request passes the dry run, a 2xx HTTP status code is returned and the operation is performed.
    std::shared_ptr<bool> dryRun_ = nullptr;
    // The ID of the listener.
    // 
    // This parameter is required.
    std::shared_ptr<string> listenerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
