// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERESOURCEGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATERESOURCEGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateResourceGroupResponseBodyResourceGroup.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class UpdateResourceGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateResourceGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroup, resourceGroup_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateResourceGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroup, resourceGroup_);
    };
    UpdateResourceGroupResponseBody() = default ;
    UpdateResourceGroupResponseBody(const UpdateResourceGroupResponseBody &) = default ;
    UpdateResourceGroupResponseBody(UpdateResourceGroupResponseBody &&) = default ;
    UpdateResourceGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateResourceGroupResponseBody() = default ;
    UpdateResourceGroupResponseBody& operator=(const UpdateResourceGroupResponseBody &) = default ;
    UpdateResourceGroupResponseBody& operator=(UpdateResourceGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->resourceGroup_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateResourceGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroup Field Functions 
    bool hasResourceGroup() const { return this->resourceGroup_ != nullptr;};
    void deleteResourceGroup() { this->resourceGroup_ = nullptr;};
    inline const UpdateResourceGroupResponseBodyResourceGroup & resourceGroup() const { DARABONBA_PTR_GET_CONST(resourceGroup_, UpdateResourceGroupResponseBodyResourceGroup) };
    inline UpdateResourceGroupResponseBodyResourceGroup resourceGroup() { DARABONBA_PTR_GET(resourceGroup_, UpdateResourceGroupResponseBodyResourceGroup) };
    inline UpdateResourceGroupResponseBody& setResourceGroup(const UpdateResourceGroupResponseBodyResourceGroup & resourceGroup) { DARABONBA_PTR_SET_VALUE(resourceGroup_, resourceGroup) };
    inline UpdateResourceGroupResponseBody& setResourceGroup(UpdateResourceGroupResponseBodyResourceGroup && resourceGroup) { DARABONBA_PTR_SET_RVALUE(resourceGroup_, resourceGroup) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information of the resource group.
    std::shared_ptr<UpdateResourceGroupResponseBodyResourceGroup> resourceGroup_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
