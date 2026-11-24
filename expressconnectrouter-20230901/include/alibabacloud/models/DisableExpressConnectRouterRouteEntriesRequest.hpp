// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISABLEEXPRESSCONNECTROUTERROUTEENTRIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DISABLEEXPRESSCONNECTROUTERROUTEENTRIESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ExpressConnectRouter20230901
{
namespace Models
{
  class DisableExpressConnectRouterRouteEntriesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisableExpressConnectRouterRouteEntriesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DestinationCidrBlock, destinationCidrBlock_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(EcrId, ecrId_);
      DARABONBA_PTR_TO_JSON(NexthopInstanceId, nexthopInstanceId_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, DisableExpressConnectRouterRouteEntriesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DestinationCidrBlock, destinationCidrBlock_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(EcrId, ecrId_);
      DARABONBA_PTR_FROM_JSON(NexthopInstanceId, nexthopInstanceId_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    DisableExpressConnectRouterRouteEntriesRequest() = default ;
    DisableExpressConnectRouterRouteEntriesRequest(const DisableExpressConnectRouterRouteEntriesRequest &) = default ;
    DisableExpressConnectRouterRouteEntriesRequest(DisableExpressConnectRouterRouteEntriesRequest &&) = default ;
    DisableExpressConnectRouterRouteEntriesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisableExpressConnectRouterRouteEntriesRequest() = default ;
    DisableExpressConnectRouterRouteEntriesRequest& operator=(const DisableExpressConnectRouterRouteEntriesRequest &) = default ;
    DisableExpressConnectRouterRouteEntriesRequest& operator=(DisableExpressConnectRouterRouteEntriesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->destinationCidrBlock_ == nullptr && this->dryRun_ == nullptr && this->ecrId_ == nullptr && this->nexthopInstanceId_ == nullptr && this->version_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DisableExpressConnectRouterRouteEntriesRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // destinationCidrBlock Field Functions 
    bool hasDestinationCidrBlock() const { return this->destinationCidrBlock_ != nullptr;};
    void deleteDestinationCidrBlock() { this->destinationCidrBlock_ = nullptr;};
    inline string getDestinationCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(destinationCidrBlock_, "") };
    inline DisableExpressConnectRouterRouteEntriesRequest& setDestinationCidrBlock(string destinationCidrBlock) { DARABONBA_PTR_SET_VALUE(destinationCidrBlock_, destinationCidrBlock) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline DisableExpressConnectRouterRouteEntriesRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // ecrId Field Functions 
    bool hasEcrId() const { return this->ecrId_ != nullptr;};
    void deleteEcrId() { this->ecrId_ = nullptr;};
    inline string getEcrId() const { DARABONBA_PTR_GET_DEFAULT(ecrId_, "") };
    inline DisableExpressConnectRouterRouteEntriesRequest& setEcrId(string ecrId) { DARABONBA_PTR_SET_VALUE(ecrId_, ecrId) };


    // nexthopInstanceId Field Functions 
    bool hasNexthopInstanceId() const { return this->nexthopInstanceId_ != nullptr;};
    void deleteNexthopInstanceId() { this->nexthopInstanceId_ = nullptr;};
    inline string getNexthopInstanceId() const { DARABONBA_PTR_GET_DEFAULT(nexthopInstanceId_, "") };
    inline DisableExpressConnectRouterRouteEntriesRequest& setNexthopInstanceId(string nexthopInstanceId) { DARABONBA_PTR_SET_VALUE(nexthopInstanceId_, nexthopInstanceId) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline DisableExpressConnectRouterRouteEntriesRequest& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can generate the parameter value from your client to ensure that the value is unique across different requests. The ClientToken parameter supports only ASCII characters.
    // 
    // > If you do not specify this parameter, the system automatically uses the **RequestId** of the API request as the **ClientToken**. The **RequestId** of each API request is different.
    shared_ptr<string> clientToken_ {};
    // The destination CIDR block of the route entry in the gateway route table.
    // 
    // This parameter is required.
    shared_ptr<string> destinationCidrBlock_ {};
    // Specifies whether the request is a dry run. Valid values:
    // 
    // - **true**: sends a check request and does not modify the EPS resource.
    // 
    // - **false** (default): sends a normal request.
    shared_ptr<bool> dryRun_ {};
    // The instance ID of the Express Connect Router (ECR).
    // 
    // This parameter is required.
    shared_ptr<string> ecrId_ {};
    // The next hop instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> nexthopInstanceId_ {};
    shared_ptr<string> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ExpressConnectRouter20230901
#endif
