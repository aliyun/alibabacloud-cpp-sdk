// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEROUTEMAPASSOCIATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEROUTEMAPASSOCIATIONREQUEST_HPP_
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
  class UpdateRouteMapAssociationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRouteMapAssociationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AssociationId, associationId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(EcrId, ecrId_);
      DARABONBA_PTR_TO_JSON(RegionIdList, regionIdList_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRouteMapAssociationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AssociationId, associationId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(EcrId, ecrId_);
      DARABONBA_PTR_FROM_JSON(RegionIdList, regionIdList_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    UpdateRouteMapAssociationRequest() = default ;
    UpdateRouteMapAssociationRequest(const UpdateRouteMapAssociationRequest &) = default ;
    UpdateRouteMapAssociationRequest(UpdateRouteMapAssociationRequest &&) = default ;
    UpdateRouteMapAssociationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRouteMapAssociationRequest() = default ;
    UpdateRouteMapAssociationRequest& operator=(const UpdateRouteMapAssociationRequest &) = default ;
    UpdateRouteMapAssociationRequest& operator=(UpdateRouteMapAssociationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->associationId_ == nullptr
        && this->clientToken_ == nullptr && this->dryRun_ == nullptr && this->ecrId_ == nullptr && this->regionIdList_ == nullptr && this->version_ == nullptr; };
    // associationId Field Functions 
    bool hasAssociationId() const { return this->associationId_ != nullptr;};
    void deleteAssociationId() { this->associationId_ = nullptr;};
    inline string getAssociationId() const { DARABONBA_PTR_GET_DEFAULT(associationId_, "") };
    inline UpdateRouteMapAssociationRequest& setAssociationId(string associationId) { DARABONBA_PTR_SET_VALUE(associationId_, associationId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateRouteMapAssociationRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline UpdateRouteMapAssociationRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // ecrId Field Functions 
    bool hasEcrId() const { return this->ecrId_ != nullptr;};
    void deleteEcrId() { this->ecrId_ = nullptr;};
    inline string getEcrId() const { DARABONBA_PTR_GET_DEFAULT(ecrId_, "") };
    inline UpdateRouteMapAssociationRequest& setEcrId(string ecrId) { DARABONBA_PTR_SET_VALUE(ecrId_, ecrId) };


    // regionIdList Field Functions 
    bool hasRegionIdList() const { return this->regionIdList_ != nullptr;};
    void deleteRegionIdList() { this->regionIdList_ = nullptr;};
    inline const vector<string> & getRegionIdList() const { DARABONBA_PTR_GET_CONST(regionIdList_, vector<string>) };
    inline vector<string> getRegionIdList() { DARABONBA_PTR_GET(regionIdList_, vector<string>) };
    inline UpdateRouteMapAssociationRequest& setRegionIdList(const vector<string> & regionIdList) { DARABONBA_PTR_SET_VALUE(regionIdList_, regionIdList) };
    inline UpdateRouteMapAssociationRequest& setRegionIdList(vector<string> && regionIdList) { DARABONBA_PTR_SET_RVALUE(regionIdList_, regionIdList) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline UpdateRouteMapAssociationRequest& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The ID of the routing policy association.
    // 
    // This parameter is required.
    shared_ptr<string> associationId_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can generate the parameter value on your client to ensure that it is unique across different requests. The client token only supports ASCII characters.
    // 
    // > If you do not specify this parameter, the system automatically uses the **RequestId** of the API request as the **ClientToken**. The **RequestId** of each API request is unique.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform a dry run on the request. Valid values:
    // 
    // - **true**: Performs a dry run and does not modify service resources.
    // 
    // - **false** (default): Sends a normal request.
    shared_ptr<bool> dryRun_ {};
    // The instance ID of the Express Connect Router (ECR).
    // 
    // This parameter is required.
    shared_ptr<string> ecrId_ {};
    // The list of region IDs where the routing policy is delivered and takes effect for the Express Connect Router (ECR).
    // 
    // > If this parameter is left empty, the routing policy is not delivered to any region.
    shared_ptr<vector<string>> regionIdList_ {};
    shared_ptr<string> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ExpressConnectRouter20230901
#endif
