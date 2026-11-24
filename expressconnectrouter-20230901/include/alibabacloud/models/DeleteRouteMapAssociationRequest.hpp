// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEROUTEMAPASSOCIATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEROUTEMAPASSOCIATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ExpressConnectRouter20230901
{
namespace Models
{
  class DeleteRouteMapAssociationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteRouteMapAssociationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AssociationId, associationId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(EcrId, ecrId_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteRouteMapAssociationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AssociationId, associationId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(EcrId, ecrId_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    DeleteRouteMapAssociationRequest() = default ;
    DeleteRouteMapAssociationRequest(const DeleteRouteMapAssociationRequest &) = default ;
    DeleteRouteMapAssociationRequest(DeleteRouteMapAssociationRequest &&) = default ;
    DeleteRouteMapAssociationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteRouteMapAssociationRequest() = default ;
    DeleteRouteMapAssociationRequest& operator=(const DeleteRouteMapAssociationRequest &) = default ;
    DeleteRouteMapAssociationRequest& operator=(DeleteRouteMapAssociationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->associationId_ == nullptr
        && this->clientToken_ == nullptr && this->dryRun_ == nullptr && this->ecrId_ == nullptr && this->version_ == nullptr; };
    // associationId Field Functions 
    bool hasAssociationId() const { return this->associationId_ != nullptr;};
    void deleteAssociationId() { this->associationId_ = nullptr;};
    inline string getAssociationId() const { DARABONBA_PTR_GET_DEFAULT(associationId_, "") };
    inline DeleteRouteMapAssociationRequest& setAssociationId(string associationId) { DARABONBA_PTR_SET_VALUE(associationId_, associationId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DeleteRouteMapAssociationRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline DeleteRouteMapAssociationRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // ecrId Field Functions 
    bool hasEcrId() const { return this->ecrId_ != nullptr;};
    void deleteEcrId() { this->ecrId_ = nullptr;};
    inline string getEcrId() const { DARABONBA_PTR_GET_DEFAULT(ecrId_, "") };
    inline DeleteRouteMapAssociationRequest& setEcrId(string ecrId) { DARABONBA_PTR_SET_VALUE(ecrId_, ecrId) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline DeleteRouteMapAssociationRequest& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The ID of the route policy association.
    // 
    // This parameter is required.
    shared_ptr<string> associationId_ {};
    // The client token that is used to ensure the idempotence of the request. You can generate the value from your client and ensure that the value is unique across different requests. The client token can contain only ASCII characters.
    // 
    // > If you do not specify this parameter, the system automatically uses the **RequestId** of the API request as the **ClientToken**. The **RequestId** of each API request is different.
    shared_ptr<string> clientToken_ {};
    // Specifies whether it is only a dry run for this request. Valid values:
    // 
    // - **true**: sends a check request without modifying the EPS resource.
    // 
    // - **false** (default): sends a normal request.
    shared_ptr<bool> dryRun_ {};
    // The instance ID of the Express Connect Router (ECR).
    // 
    // This parameter is required.
    shared_ptr<string> ecrId_ {};
    shared_ptr<string> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ExpressConnectRouter20230901
#endif
