// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRANSFORMEIPSEGMENTTOPUBLICIPADDRESSPOOLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_TRANSFORMEIPSEGMENTTOPUBLICIPADDRESSPOOLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class TransformEipSegmentToPublicIpAddressPoolResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TransformEipSegmentToPublicIpAddressPoolResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PublicIpAddressPoolId, publicIpAddressPoolId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, TransformEipSegmentToPublicIpAddressPoolResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PublicIpAddressPoolId, publicIpAddressPoolId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
    };
    TransformEipSegmentToPublicIpAddressPoolResponseBody() = default ;
    TransformEipSegmentToPublicIpAddressPoolResponseBody(const TransformEipSegmentToPublicIpAddressPoolResponseBody &) = default ;
    TransformEipSegmentToPublicIpAddressPoolResponseBody(TransformEipSegmentToPublicIpAddressPoolResponseBody &&) = default ;
    TransformEipSegmentToPublicIpAddressPoolResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TransformEipSegmentToPublicIpAddressPoolResponseBody() = default ;
    TransformEipSegmentToPublicIpAddressPoolResponseBody& operator=(const TransformEipSegmentToPublicIpAddressPoolResponseBody &) = default ;
    TransformEipSegmentToPublicIpAddressPoolResponseBody& operator=(TransformEipSegmentToPublicIpAddressPoolResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->publicIpAddressPoolId_ == nullptr
        && this->requestId_ == nullptr && this->resourceGroupId_ == nullptr; };
    // publicIpAddressPoolId Field Functions 
    bool hasPublicIpAddressPoolId() const { return this->publicIpAddressPoolId_ != nullptr;};
    void deletePublicIpAddressPoolId() { this->publicIpAddressPoolId_ = nullptr;};
    inline string getPublicIpAddressPoolId() const { DARABONBA_PTR_GET_DEFAULT(publicIpAddressPoolId_, "") };
    inline TransformEipSegmentToPublicIpAddressPoolResponseBody& setPublicIpAddressPoolId(string publicIpAddressPoolId) { DARABONBA_PTR_SET_VALUE(publicIpAddressPoolId_, publicIpAddressPoolId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline TransformEipSegmentToPublicIpAddressPoolResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline TransformEipSegmentToPublicIpAddressPoolResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    // The ID of the IP address pool.
    shared_ptr<string> publicIpAddressPoolId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The ID of the resource group to which the IP address pool belongs.
    shared_ptr<string> resourceGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
