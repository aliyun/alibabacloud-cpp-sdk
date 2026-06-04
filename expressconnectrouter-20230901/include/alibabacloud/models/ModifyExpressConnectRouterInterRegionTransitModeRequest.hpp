// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYEXPRESSCONNECTROUTERINTERREGIONTRANSITMODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYEXPRESSCONNECTROUTERINTERREGIONTRANSITMODEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ExpressConnectRouter20230901
{
namespace Models
{
  class ModifyExpressConnectRouterInterRegionTransitModeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyExpressConnectRouterInterRegionTransitModeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(EcrId, ecrId_);
      DARABONBA_PTR_TO_JSON(TransitModeList, transitModeList_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyExpressConnectRouterInterRegionTransitModeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(EcrId, ecrId_);
      DARABONBA_PTR_FROM_JSON(TransitModeList, transitModeList_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    ModifyExpressConnectRouterInterRegionTransitModeRequest() = default ;
    ModifyExpressConnectRouterInterRegionTransitModeRequest(const ModifyExpressConnectRouterInterRegionTransitModeRequest &) = default ;
    ModifyExpressConnectRouterInterRegionTransitModeRequest(ModifyExpressConnectRouterInterRegionTransitModeRequest &&) = default ;
    ModifyExpressConnectRouterInterRegionTransitModeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyExpressConnectRouterInterRegionTransitModeRequest() = default ;
    ModifyExpressConnectRouterInterRegionTransitModeRequest& operator=(const ModifyExpressConnectRouterInterRegionTransitModeRequest &) = default ;
    ModifyExpressConnectRouterInterRegionTransitModeRequest& operator=(ModifyExpressConnectRouterInterRegionTransitModeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TransitModeList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TransitModeList& obj) { 
        DARABONBA_PTR_TO_JSON(Mode, mode_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      };
      friend void from_json(const Darabonba::Json& j, TransitModeList& obj) { 
        DARABONBA_PTR_FROM_JSON(Mode, mode_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      };
      TransitModeList() = default ;
      TransitModeList(const TransitModeList &) = default ;
      TransitModeList(TransitModeList &&) = default ;
      TransitModeList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TransitModeList() = default ;
      TransitModeList& operator=(const TransitModeList &) = default ;
      TransitModeList& operator=(TransitModeList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->mode_ == nullptr
        && this->regionId_ == nullptr; };
      // mode Field Functions 
      bool hasMode() const { return this->mode_ != nullptr;};
      void deleteMode() { this->mode_ = nullptr;};
      inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
      inline TransitModeList& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline TransitModeList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    protected:
      // The cross-domain forwarding mode of the ECR. Valid values:
      // 
      // *   **ECMP**: the load balancing mode.
      // *   **NearBy**: the nearby forwarding mode.
      shared_ptr<string> mode_ {};
      // The region ID of the ECR.
      shared_ptr<string> regionId_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->dryRun_ == nullptr && this->ecrId_ == nullptr && this->transitModeList_ == nullptr && this->version_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyExpressConnectRouterInterRegionTransitModeRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline ModifyExpressConnectRouterInterRegionTransitModeRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // ecrId Field Functions 
    bool hasEcrId() const { return this->ecrId_ != nullptr;};
    void deleteEcrId() { this->ecrId_ = nullptr;};
    inline string getEcrId() const { DARABONBA_PTR_GET_DEFAULT(ecrId_, "") };
    inline ModifyExpressConnectRouterInterRegionTransitModeRequest& setEcrId(string ecrId) { DARABONBA_PTR_SET_VALUE(ecrId_, ecrId) };


    // transitModeList Field Functions 
    bool hasTransitModeList() const { return this->transitModeList_ != nullptr;};
    void deleteTransitModeList() { this->transitModeList_ = nullptr;};
    inline const vector<ModifyExpressConnectRouterInterRegionTransitModeRequest::TransitModeList> & getTransitModeList() const { DARABONBA_PTR_GET_CONST(transitModeList_, vector<ModifyExpressConnectRouterInterRegionTransitModeRequest::TransitModeList>) };
    inline vector<ModifyExpressConnectRouterInterRegionTransitModeRequest::TransitModeList> getTransitModeList() { DARABONBA_PTR_GET(transitModeList_, vector<ModifyExpressConnectRouterInterRegionTransitModeRequest::TransitModeList>) };
    inline ModifyExpressConnectRouterInterRegionTransitModeRequest& setTransitModeList(const vector<ModifyExpressConnectRouterInterRegionTransitModeRequest::TransitModeList> & transitModeList) { DARABONBA_PTR_SET_VALUE(transitModeList_, transitModeList) };
    inline ModifyExpressConnectRouterInterRegionTransitModeRequest& setTransitModeList(vector<ModifyExpressConnectRouterInterRegionTransitModeRequest::TransitModeList> && transitModeList) { DARABONBA_PTR_SET_RVALUE(transitModeList_, transitModeList) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline ModifyExpressConnectRouterInterRegionTransitModeRequest& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the **request ID** as the **client token**. The **request ID** may be different for each request.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform only a dry run, without performing the actual request. Valid values:
    // 
    // *   **true**: performs only a dry run.
    // *   **false** (default): performs a dry run and performs the actual request.
    shared_ptr<bool> dryRun_ {};
    // The ECR ID.
    // 
    // This parameter is required.
    shared_ptr<string> ecrId_ {};
    // The cross-region forwarding modes.
    shared_ptr<vector<ModifyExpressConnectRouterInterRegionTransitModeRequest::TransitModeList>> transitModeList_ {};
    shared_ptr<string> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ExpressConnectRouter20230901
#endif
