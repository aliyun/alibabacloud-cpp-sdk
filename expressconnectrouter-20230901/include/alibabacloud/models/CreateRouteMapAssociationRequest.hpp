// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEROUTEMAPASSOCIATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEROUTEMAPASSOCIATIONREQUEST_HPP_
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
  class CreateRouteMapAssociationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRouteMapAssociationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(EcrId, ecrId_);
      DARABONBA_PTR_TO_JSON(RegionIdList, regionIdList_);
      DARABONBA_PTR_TO_JSON(RouteMapId, routeMapId_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRouteMapAssociationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(EcrId, ecrId_);
      DARABONBA_PTR_FROM_JSON(RegionIdList, regionIdList_);
      DARABONBA_PTR_FROM_JSON(RouteMapId, routeMapId_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    CreateRouteMapAssociationRequest() = default ;
    CreateRouteMapAssociationRequest(const CreateRouteMapAssociationRequest &) = default ;
    CreateRouteMapAssociationRequest(CreateRouteMapAssociationRequest &&) = default ;
    CreateRouteMapAssociationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRouteMapAssociationRequest() = default ;
    CreateRouteMapAssociationRequest& operator=(const CreateRouteMapAssociationRequest &) = default ;
    CreateRouteMapAssociationRequest& operator=(CreateRouteMapAssociationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->dryRun_ == nullptr && this->ecrId_ == nullptr && this->regionIdList_ == nullptr && this->routeMapId_ == nullptr && this->version_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateRouteMapAssociationRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateRouteMapAssociationRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // ecrId Field Functions 
    bool hasEcrId() const { return this->ecrId_ != nullptr;};
    void deleteEcrId() { this->ecrId_ = nullptr;};
    inline string getEcrId() const { DARABONBA_PTR_GET_DEFAULT(ecrId_, "") };
    inline CreateRouteMapAssociationRequest& setEcrId(string ecrId) { DARABONBA_PTR_SET_VALUE(ecrId_, ecrId) };


    // regionIdList Field Functions 
    bool hasRegionIdList() const { return this->regionIdList_ != nullptr;};
    void deleteRegionIdList() { this->regionIdList_ = nullptr;};
    inline const vector<string> & getRegionIdList() const { DARABONBA_PTR_GET_CONST(regionIdList_, vector<string>) };
    inline vector<string> getRegionIdList() { DARABONBA_PTR_GET(regionIdList_, vector<string>) };
    inline CreateRouteMapAssociationRequest& setRegionIdList(const vector<string> & regionIdList) { DARABONBA_PTR_SET_VALUE(regionIdList_, regionIdList) };
    inline CreateRouteMapAssociationRequest& setRegionIdList(vector<string> && regionIdList) { DARABONBA_PTR_SET_RVALUE(regionIdList_, regionIdList) };


    // routeMapId Field Functions 
    bool hasRouteMapId() const { return this->routeMapId_ != nullptr;};
    void deleteRouteMapId() { this->routeMapId_ = nullptr;};
    inline string getRouteMapId() const { DARABONBA_PTR_GET_DEFAULT(routeMapId_, "") };
    inline CreateRouteMapAssociationRequest& setRouteMapId(string routeMapId) { DARABONBA_PTR_SET_VALUE(routeMapId_, routeMapId) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline CreateRouteMapAssociationRequest& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can generate the value from your client and ensure that the value is unique across different requests. The client token supports only ASCII characters.
    // 
    // > If you do not specify this parameter, the system automatically uses the **RequestId** of the API request as the **ClientToken**. The **RequestId** of each API request is unique.
    shared_ptr<string> clientToken_ {};
    // Specifies whether it is a dry run only. Valid values:
    // 
    // - **true**: sends a dry run request without modifying EPS resources.
    // 
    // - **false** (default): sends a normal request.
    shared_ptr<bool> dryRun_ {};
    // The Express Connect Router (ECR) instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> ecrId_ {};
    // The list of region IDs of the Express Connect Router (ECR) where the routing policy is distributed and takes effect.
    // 
    // > If this parameter is left empty, the routing policy is not distributed to any region.
    shared_ptr<vector<string>> regionIdList_ {};
    // The ID of the route map in the Cloud Enterprise Network (CEN).
    // 
    // This parameter is required.
    shared_ptr<string> routeMapId_ {};
    shared_ptr<string> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ExpressConnectRouter20230901
#endif
