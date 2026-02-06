// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFLOWSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEFLOWSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cams20200606
{
namespace Models
{
  class CreateFlowShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFlowShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Categories, categoriesShrink_);
      DARABONBA_PTR_TO_JSON(CustSpaceId, custSpaceId_);
      DARABONBA_PTR_TO_JSON(EndpointUri, endpointUri_);
      DARABONBA_PTR_TO_JSON(FlowName, flowName_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFlowShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Categories, categoriesShrink_);
      DARABONBA_PTR_FROM_JSON(CustSpaceId, custSpaceId_);
      DARABONBA_PTR_FROM_JSON(EndpointUri, endpointUri_);
      DARABONBA_PTR_FROM_JSON(FlowName, flowName_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    CreateFlowShrinkRequest() = default ;
    CreateFlowShrinkRequest(const CreateFlowShrinkRequest &) = default ;
    CreateFlowShrinkRequest(CreateFlowShrinkRequest &&) = default ;
    CreateFlowShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFlowShrinkRequest() = default ;
    CreateFlowShrinkRequest& operator=(const CreateFlowShrinkRequest &) = default ;
    CreateFlowShrinkRequest& operator=(CreateFlowShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->categoriesShrink_ == nullptr
        && this->custSpaceId_ == nullptr && this->endpointUri_ == nullptr && this->flowName_ == nullptr && this->ownerId_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr; };
    // categoriesShrink Field Functions 
    bool hasCategoriesShrink() const { return this->categoriesShrink_ != nullptr;};
    void deleteCategoriesShrink() { this->categoriesShrink_ = nullptr;};
    inline string getCategoriesShrink() const { DARABONBA_PTR_GET_DEFAULT(categoriesShrink_, "") };
    inline CreateFlowShrinkRequest& setCategoriesShrink(string categoriesShrink) { DARABONBA_PTR_SET_VALUE(categoriesShrink_, categoriesShrink) };


    // custSpaceId Field Functions 
    bool hasCustSpaceId() const { return this->custSpaceId_ != nullptr;};
    void deleteCustSpaceId() { this->custSpaceId_ = nullptr;};
    inline string getCustSpaceId() const { DARABONBA_PTR_GET_DEFAULT(custSpaceId_, "") };
    inline CreateFlowShrinkRequest& setCustSpaceId(string custSpaceId) { DARABONBA_PTR_SET_VALUE(custSpaceId_, custSpaceId) };


    // endpointUri Field Functions 
    bool hasEndpointUri() const { return this->endpointUri_ != nullptr;};
    void deleteEndpointUri() { this->endpointUri_ = nullptr;};
    inline string getEndpointUri() const { DARABONBA_PTR_GET_DEFAULT(endpointUri_, "") };
    inline CreateFlowShrinkRequest& setEndpointUri(string endpointUri) { DARABONBA_PTR_SET_VALUE(endpointUri_, endpointUri) };


    // flowName Field Functions 
    bool hasFlowName() const { return this->flowName_ != nullptr;};
    void deleteFlowName() { this->flowName_ = nullptr;};
    inline string getFlowName() const { DARABONBA_PTR_GET_DEFAULT(flowName_, "") };
    inline CreateFlowShrinkRequest& setFlowName(string flowName) { DARABONBA_PTR_SET_VALUE(flowName_, flowName) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateFlowShrinkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateFlowShrinkRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateFlowShrinkRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // This parameter is required.
    shared_ptr<string> categoriesShrink_ {};
    shared_ptr<string> custSpaceId_ {};
    shared_ptr<string> endpointUri_ {};
    // This parameter is required.
    shared_ptr<string> flowName_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cams20200606
#endif
