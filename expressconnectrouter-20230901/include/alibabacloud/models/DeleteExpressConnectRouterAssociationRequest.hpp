// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEEXPRESSCONNECTROUTERASSOCIATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEEXPRESSCONNECTROUTERASSOCIATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ExpressConnectRouter20230901
{
namespace Models
{
  class DeleteExpressConnectRouterAssociationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteExpressConnectRouterAssociationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AssociationId, associationId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DeleteAttachment, deleteAttachment_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(EcrId, ecrId_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteExpressConnectRouterAssociationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AssociationId, associationId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DeleteAttachment, deleteAttachment_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(EcrId, ecrId_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    DeleteExpressConnectRouterAssociationRequest() = default ;
    DeleteExpressConnectRouterAssociationRequest(const DeleteExpressConnectRouterAssociationRequest &) = default ;
    DeleteExpressConnectRouterAssociationRequest(DeleteExpressConnectRouterAssociationRequest &&) = default ;
    DeleteExpressConnectRouterAssociationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteExpressConnectRouterAssociationRequest() = default ;
    DeleteExpressConnectRouterAssociationRequest& operator=(const DeleteExpressConnectRouterAssociationRequest &) = default ;
    DeleteExpressConnectRouterAssociationRequest& operator=(DeleteExpressConnectRouterAssociationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->associationId_ == nullptr
        && this->clientToken_ == nullptr && this->deleteAttachment_ == nullptr && this->dryRun_ == nullptr && this->ecrId_ == nullptr && this->version_ == nullptr; };
    // associationId Field Functions 
    bool hasAssociationId() const { return this->associationId_ != nullptr;};
    void deleteAssociationId() { this->associationId_ = nullptr;};
    inline string getAssociationId() const { DARABONBA_PTR_GET_DEFAULT(associationId_, "") };
    inline DeleteExpressConnectRouterAssociationRequest& setAssociationId(string associationId) { DARABONBA_PTR_SET_VALUE(associationId_, associationId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DeleteExpressConnectRouterAssociationRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // deleteAttachment Field Functions 
    bool hasDeleteAttachment() const { return this->deleteAttachment_ != nullptr;};
    void deleteDeleteAttachment() { this->deleteAttachment_ = nullptr;};
    inline bool getDeleteAttachment() const { DARABONBA_PTR_GET_DEFAULT(deleteAttachment_, false) };
    inline DeleteExpressConnectRouterAssociationRequest& setDeleteAttachment(bool deleteAttachment) { DARABONBA_PTR_SET_VALUE(deleteAttachment_, deleteAttachment) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline DeleteExpressConnectRouterAssociationRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // ecrId Field Functions 
    bool hasEcrId() const { return this->ecrId_ != nullptr;};
    void deleteEcrId() { this->ecrId_ = nullptr;};
    inline string getEcrId() const { DARABONBA_PTR_GET_DEFAULT(ecrId_, "") };
    inline DeleteExpressConnectRouterAssociationRequest& setEcrId(string ecrId) { DARABONBA_PTR_SET_VALUE(ecrId_, ecrId) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline DeleteExpressConnectRouterAssociationRequest& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The ID used to associate the Express Connect Router (ECR) with a VPC or transit router.
    // 
    // This parameter is required.
    shared_ptr<string> associationId_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can generate a parameter value from your client to ensure that the parameter value is unique among different requests. The ClientToken parameter supports only ASCII characters.
    // 
    // > If you do not specify this parameter, the system automatically uses the **RequestId** of the API request as the **ClientToken**. The **RequestId** of each API request is different.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to delete the association between the Express Connect Router (ECR) and a transit router or VPC. Valid values:
    // - **true**: Yes.
    // - **false**: No.
    shared_ptr<bool> deleteAttachment_ {};
    // Specifies whether to only perform a dry run for this request. Valid values:
    // 
    // - **true**: Sends a dry run request and does not modify service resources.
    // 
    // - **false** (default value): Sends a normal request.
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
