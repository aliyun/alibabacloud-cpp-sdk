// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SYNCHRONIZEEXPRESSCONNECTROUTERINTERREGIONBANDWIDTHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SYNCHRONIZEEXPRESSCONNECTROUTERINTERREGIONBANDWIDTHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ExpressConnectRouter20230901
{
namespace Models
{
  class SynchronizeExpressConnectRouterInterRegionBandwidthRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SynchronizeExpressConnectRouterInterRegionBandwidthRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(EcrId, ecrId_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, SynchronizeExpressConnectRouterInterRegionBandwidthRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(EcrId, ecrId_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    SynchronizeExpressConnectRouterInterRegionBandwidthRequest() = default ;
    SynchronizeExpressConnectRouterInterRegionBandwidthRequest(const SynchronizeExpressConnectRouterInterRegionBandwidthRequest &) = default ;
    SynchronizeExpressConnectRouterInterRegionBandwidthRequest(SynchronizeExpressConnectRouterInterRegionBandwidthRequest &&) = default ;
    SynchronizeExpressConnectRouterInterRegionBandwidthRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SynchronizeExpressConnectRouterInterRegionBandwidthRequest() = default ;
    SynchronizeExpressConnectRouterInterRegionBandwidthRequest& operator=(const SynchronizeExpressConnectRouterInterRegionBandwidthRequest &) = default ;
    SynchronizeExpressConnectRouterInterRegionBandwidthRequest& operator=(SynchronizeExpressConnectRouterInterRegionBandwidthRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->dryRun_ == nullptr && this->ecrId_ == nullptr && this->version_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline SynchronizeExpressConnectRouterInterRegionBandwidthRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline SynchronizeExpressConnectRouterInterRegionBandwidthRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // ecrId Field Functions 
    bool hasEcrId() const { return this->ecrId_ != nullptr;};
    void deleteEcrId() { this->ecrId_ = nullptr;};
    inline string getEcrId() const { DARABONBA_PTR_GET_DEFAULT(ecrId_, "") };
    inline SynchronizeExpressConnectRouterInterRegionBandwidthRequest& setEcrId(string ecrId) { DARABONBA_PTR_SET_VALUE(ecrId_, ecrId) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline SynchronizeExpressConnectRouterInterRegionBandwidthRequest& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // A client-generated token that ensures the idempotence of the request. The token must be unique for each request and can contain only ASCII characters.
    // 
    // Generate a unique value from your client for each request. The ClientToken parameter can contain only ASCII characters.
    // 
    // > If you do not specify this parameter, the system automatically uses the **RequestId** of the API request as the **ClientToken**. The **RequestId** of each API request is different.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform a dry run. Valid values:
    // 
    // - **true**: Sends a check request. The service resource is not modified.
    // 
    // - **false** (default): Sends a normal request.
    shared_ptr<bool> dryRun_ {};
    // The ID of the Express Connect Router (ECR) instance.
    // 
    // This parameter is required.
    shared_ptr<string> ecrId_ {};
    shared_ptr<string> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ExpressConnectRouter20230901
#endif
