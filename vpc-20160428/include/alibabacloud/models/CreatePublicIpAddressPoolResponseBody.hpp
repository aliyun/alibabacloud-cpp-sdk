// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPUBLICIPADDRESSPOOLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEPUBLICIPADDRESSPOOLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class CreatePublicIpAddressPoolResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePublicIpAddressPoolResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PublicIpAddressPoolId, publicIpAddressPoolId_);
      DARABONBA_PTR_TO_JSON(PulbicIpAddressPoolId, pulbicIpAddressPoolId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePublicIpAddressPoolResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PublicIpAddressPoolId, publicIpAddressPoolId_);
      DARABONBA_PTR_FROM_JSON(PulbicIpAddressPoolId, pulbicIpAddressPoolId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
    };
    CreatePublicIpAddressPoolResponseBody() = default ;
    CreatePublicIpAddressPoolResponseBody(const CreatePublicIpAddressPoolResponseBody &) = default ;
    CreatePublicIpAddressPoolResponseBody(CreatePublicIpAddressPoolResponseBody &&) = default ;
    CreatePublicIpAddressPoolResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePublicIpAddressPoolResponseBody() = default ;
    CreatePublicIpAddressPoolResponseBody& operator=(const CreatePublicIpAddressPoolResponseBody &) = default ;
    CreatePublicIpAddressPoolResponseBody& operator=(CreatePublicIpAddressPoolResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->publicIpAddressPoolId_ == nullptr
        && return this->pulbicIpAddressPoolId_ == nullptr && return this->requestId_ == nullptr && return this->resourceGroupId_ == nullptr; };
    // publicIpAddressPoolId Field Functions 
    bool hasPublicIpAddressPoolId() const { return this->publicIpAddressPoolId_ != nullptr;};
    void deletePublicIpAddressPoolId() { this->publicIpAddressPoolId_ = nullptr;};
    inline string publicIpAddressPoolId() const { DARABONBA_PTR_GET_DEFAULT(publicIpAddressPoolId_, "") };
    inline CreatePublicIpAddressPoolResponseBody& setPublicIpAddressPoolId(string publicIpAddressPoolId) { DARABONBA_PTR_SET_VALUE(publicIpAddressPoolId_, publicIpAddressPoolId) };


    // pulbicIpAddressPoolId Field Functions 
    bool hasPulbicIpAddressPoolId() const { return this->pulbicIpAddressPoolId_ != nullptr;};
    void deletePulbicIpAddressPoolId() { this->pulbicIpAddressPoolId_ = nullptr;};
    inline string pulbicIpAddressPoolId() const { DARABONBA_PTR_GET_DEFAULT(pulbicIpAddressPoolId_, "") };
    inline CreatePublicIpAddressPoolResponseBody& setPulbicIpAddressPoolId(string pulbicIpAddressPoolId) { DARABONBA_PTR_SET_VALUE(pulbicIpAddressPoolId_, pulbicIpAddressPoolId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreatePublicIpAddressPoolResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreatePublicIpAddressPoolResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    // The ID of the IP address pool.
    std::shared_ptr<string> publicIpAddressPoolId_ = nullptr;
    // The ID of the IP address pool.
    std::shared_ptr<string> pulbicIpAddressPoolId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the resource group to which the IP address pool belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
