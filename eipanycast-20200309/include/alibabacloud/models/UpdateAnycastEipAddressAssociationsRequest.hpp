// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEANYCASTEIPADDRESSASSOCIATIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEANYCASTEIPADDRESSASSOCIATIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateAnycastEipAddressAssociationsRequestPopLocationAddList.hpp>
#include <alibabacloud/models/UpdateAnycastEipAddressAssociationsRequestPopLocationDeleteList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eipanycast20200309
{
namespace Models
{
  class UpdateAnycastEipAddressAssociationsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAnycastEipAddressAssociationsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AnycastId, anycastId_);
      DARABONBA_PTR_TO_JSON(AssociationMode, associationMode_);
      DARABONBA_PTR_TO_JSON(BindInstanceId, bindInstanceId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(PopLocationAddList, popLocationAddList_);
      DARABONBA_PTR_TO_JSON(PopLocationDeleteList, popLocationDeleteList_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAnycastEipAddressAssociationsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AnycastId, anycastId_);
      DARABONBA_PTR_FROM_JSON(AssociationMode, associationMode_);
      DARABONBA_PTR_FROM_JSON(BindInstanceId, bindInstanceId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(PopLocationAddList, popLocationAddList_);
      DARABONBA_PTR_FROM_JSON(PopLocationDeleteList, popLocationDeleteList_);
    };
    UpdateAnycastEipAddressAssociationsRequest() = default ;
    UpdateAnycastEipAddressAssociationsRequest(const UpdateAnycastEipAddressAssociationsRequest &) = default ;
    UpdateAnycastEipAddressAssociationsRequest(UpdateAnycastEipAddressAssociationsRequest &&) = default ;
    UpdateAnycastEipAddressAssociationsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAnycastEipAddressAssociationsRequest() = default ;
    UpdateAnycastEipAddressAssociationsRequest& operator=(const UpdateAnycastEipAddressAssociationsRequest &) = default ;
    UpdateAnycastEipAddressAssociationsRequest& operator=(UpdateAnycastEipAddressAssociationsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->anycastId_ == nullptr
        && return this->associationMode_ == nullptr && return this->bindInstanceId_ == nullptr && return this->clientToken_ == nullptr && return this->dryRun_ == nullptr && return this->popLocationAddList_ == nullptr
        && return this->popLocationDeleteList_ == nullptr; };
    // anycastId Field Functions 
    bool hasAnycastId() const { return this->anycastId_ != nullptr;};
    void deleteAnycastId() { this->anycastId_ = nullptr;};
    inline string anycastId() const { DARABONBA_PTR_GET_DEFAULT(anycastId_, "") };
    inline UpdateAnycastEipAddressAssociationsRequest& setAnycastId(string anycastId) { DARABONBA_PTR_SET_VALUE(anycastId_, anycastId) };


    // associationMode Field Functions 
    bool hasAssociationMode() const { return this->associationMode_ != nullptr;};
    void deleteAssociationMode() { this->associationMode_ = nullptr;};
    inline string associationMode() const { DARABONBA_PTR_GET_DEFAULT(associationMode_, "") };
    inline UpdateAnycastEipAddressAssociationsRequest& setAssociationMode(string associationMode) { DARABONBA_PTR_SET_VALUE(associationMode_, associationMode) };


    // bindInstanceId Field Functions 
    bool hasBindInstanceId() const { return this->bindInstanceId_ != nullptr;};
    void deleteBindInstanceId() { this->bindInstanceId_ = nullptr;};
    inline string bindInstanceId() const { DARABONBA_PTR_GET_DEFAULT(bindInstanceId_, "") };
    inline UpdateAnycastEipAddressAssociationsRequest& setBindInstanceId(string bindInstanceId) { DARABONBA_PTR_SET_VALUE(bindInstanceId_, bindInstanceId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateAnycastEipAddressAssociationsRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline UpdateAnycastEipAddressAssociationsRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // popLocationAddList Field Functions 
    bool hasPopLocationAddList() const { return this->popLocationAddList_ != nullptr;};
    void deletePopLocationAddList() { this->popLocationAddList_ = nullptr;};
    inline const vector<UpdateAnycastEipAddressAssociationsRequestPopLocationAddList> & popLocationAddList() const { DARABONBA_PTR_GET_CONST(popLocationAddList_, vector<UpdateAnycastEipAddressAssociationsRequestPopLocationAddList>) };
    inline vector<UpdateAnycastEipAddressAssociationsRequestPopLocationAddList> popLocationAddList() { DARABONBA_PTR_GET(popLocationAddList_, vector<UpdateAnycastEipAddressAssociationsRequestPopLocationAddList>) };
    inline UpdateAnycastEipAddressAssociationsRequest& setPopLocationAddList(const vector<UpdateAnycastEipAddressAssociationsRequestPopLocationAddList> & popLocationAddList) { DARABONBA_PTR_SET_VALUE(popLocationAddList_, popLocationAddList) };
    inline UpdateAnycastEipAddressAssociationsRequest& setPopLocationAddList(vector<UpdateAnycastEipAddressAssociationsRequestPopLocationAddList> && popLocationAddList) { DARABONBA_PTR_SET_RVALUE(popLocationAddList_, popLocationAddList) };


    // popLocationDeleteList Field Functions 
    bool hasPopLocationDeleteList() const { return this->popLocationDeleteList_ != nullptr;};
    void deletePopLocationDeleteList() { this->popLocationDeleteList_ = nullptr;};
    inline const vector<UpdateAnycastEipAddressAssociationsRequestPopLocationDeleteList> & popLocationDeleteList() const { DARABONBA_PTR_GET_CONST(popLocationDeleteList_, vector<UpdateAnycastEipAddressAssociationsRequestPopLocationDeleteList>) };
    inline vector<UpdateAnycastEipAddressAssociationsRequestPopLocationDeleteList> popLocationDeleteList() { DARABONBA_PTR_GET(popLocationDeleteList_, vector<UpdateAnycastEipAddressAssociationsRequestPopLocationDeleteList>) };
    inline UpdateAnycastEipAddressAssociationsRequest& setPopLocationDeleteList(const vector<UpdateAnycastEipAddressAssociationsRequestPopLocationDeleteList> & popLocationDeleteList) { DARABONBA_PTR_SET_VALUE(popLocationDeleteList_, popLocationDeleteList) };
    inline UpdateAnycastEipAddressAssociationsRequest& setPopLocationDeleteList(vector<UpdateAnycastEipAddressAssociationsRequestPopLocationDeleteList> && popLocationDeleteList) { DARABONBA_PTR_SET_RVALUE(popLocationDeleteList_, popLocationDeleteList) };


  protected:
    // The ID of the Anycast EIP.
    // 
    // This parameter is required.
    std::shared_ptr<string> anycastId_ = nullptr;
    // The association mode. Valid values:
    // 
    // *   **Default**: the default mode. In this mode, cloud resources to be associated are set as default origin servers.
    // *   **Normal**: the standard mode. In this mode, cloud resources to be associated are set as standard origin servers.
    std::shared_ptr<string> associationMode_ = nullptr;
    // The ID of the cloud resource with which you want to associate the Anycast EIP.
    // 
    // This parameter is required.
    std::shared_ptr<string> bindInstanceId_ = nullptr;
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the value, but you must make sure that it is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    // 
    // >  If you do not set this parameter, the system automatically uses **RequestId** as **ClientToken**. **RequestId** may be different for each API request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // Specifies whether to only precheck the request. Valid values:
    // 
    // *   **true**: prechecks the request without updating the association information. The system checks the required parameters, request syntax, and limits. If the request fails to pass the precheck, an error message is returned. If the request passes the precheck, the `DryRunOperation` error code is returned.
    // *   **false** (default): sends the API request. If the request passes the precheck, a 2xx HTTP status code is returned and the operation is performed.
    std::shared_ptr<bool> dryRun_ = nullptr;
    // The access areas and access points to be added.
    std::shared_ptr<vector<UpdateAnycastEipAddressAssociationsRequestPopLocationAddList>> popLocationAddList_ = nullptr;
    // The access areas and access points to be deleted.
    std::shared_ptr<vector<UpdateAnycastEipAddressAssociationsRequestPopLocationDeleteList>> popLocationDeleteList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eipanycast20200309
#endif
