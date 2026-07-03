// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLOUDCONNECTNETWORKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATECLOUDCONNECTNETWORKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class CreateCloudConnectNetworkResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCloudConnectNetworkResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CcnId, ccnId_);
      DARABONBA_PTR_TO_JSON(CidrBlock, cidrBlock_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SnatCidrBlock, snatCidrBlock_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCloudConnectNetworkResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CcnId, ccnId_);
      DARABONBA_PTR_FROM_JSON(CidrBlock, cidrBlock_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SnatCidrBlock, snatCidrBlock_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    CreateCloudConnectNetworkResponseBody() = default ;
    CreateCloudConnectNetworkResponseBody(const CreateCloudConnectNetworkResponseBody &) = default ;
    CreateCloudConnectNetworkResponseBody(CreateCloudConnectNetworkResponseBody &&) = default ;
    CreateCloudConnectNetworkResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCloudConnectNetworkResponseBody() = default ;
    CreateCloudConnectNetworkResponseBody& operator=(const CreateCloudConnectNetworkResponseBody &) = default ;
    CreateCloudConnectNetworkResponseBody& operator=(CreateCloudConnectNetworkResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ccnId_ == nullptr
        && this->cidrBlock_ == nullptr && this->description_ == nullptr && this->name_ == nullptr && this->requestId_ == nullptr && this->resourceGroupId_ == nullptr
        && this->snatCidrBlock_ == nullptr && this->status_ == nullptr; };
    // ccnId Field Functions 
    bool hasCcnId() const { return this->ccnId_ != nullptr;};
    void deleteCcnId() { this->ccnId_ = nullptr;};
    inline string getCcnId() const { DARABONBA_PTR_GET_DEFAULT(ccnId_, "") };
    inline CreateCloudConnectNetworkResponseBody& setCcnId(string ccnId) { DARABONBA_PTR_SET_VALUE(ccnId_, ccnId) };


    // cidrBlock Field Functions 
    bool hasCidrBlock() const { return this->cidrBlock_ != nullptr;};
    void deleteCidrBlock() { this->cidrBlock_ = nullptr;};
    inline string getCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(cidrBlock_, "") };
    inline CreateCloudConnectNetworkResponseBody& setCidrBlock(string cidrBlock) { DARABONBA_PTR_SET_VALUE(cidrBlock_, cidrBlock) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateCloudConnectNetworkResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateCloudConnectNetworkResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateCloudConnectNetworkResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateCloudConnectNetworkResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // snatCidrBlock Field Functions 
    bool hasSnatCidrBlock() const { return this->snatCidrBlock_ != nullptr;};
    void deleteSnatCidrBlock() { this->snatCidrBlock_ = nullptr;};
    inline string getSnatCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(snatCidrBlock_, "") };
    inline CreateCloudConnectNetworkResponseBody& setSnatCidrBlock(string snatCidrBlock) { DARABONBA_PTR_SET_VALUE(snatCidrBlock_, snatCidrBlock) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline CreateCloudConnectNetworkResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The instance ID of the Cloud Connect Network (CCN).
    shared_ptr<string> ccnId_ {};
    // The private CIDR block.
    shared_ptr<string> cidrBlock_ {};
    // The description of the Cloud Connect Network (CCN) instance.
    shared_ptr<string> description_ {};
    // The name of the Cloud Connect Network (CCN) instance.
    shared_ptr<string> name_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The ID of the resource group to which the Cloud Connect Network (CCN) instance belongs.
    shared_ptr<string> resourceGroupId_ {};
    // The SNAT private CIDR block.
    shared_ptr<string> snatCidrBlock_ {};
    // The instance status of the Cloud Connect Network (CCN). Valid values:
    // 
    // - **Active**: Normal.
    // - **Pending**: Pending creation.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
