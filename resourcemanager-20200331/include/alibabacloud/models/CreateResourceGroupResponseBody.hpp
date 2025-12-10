// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERESOURCEGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATERESOURCEGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateResourceGroupResponseBodyResourceGroup.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class CreateResourceGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateResourceGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroup, resourceGroup_);
    };
    friend void from_json(const Darabonba::Json& j, CreateResourceGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroup, resourceGroup_);
    };
    CreateResourceGroupResponseBody() = default ;
    CreateResourceGroupResponseBody(const CreateResourceGroupResponseBody &) = default ;
    CreateResourceGroupResponseBody(CreateResourceGroupResponseBody &&) = default ;
    CreateResourceGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateResourceGroupResponseBody() = default ;
    CreateResourceGroupResponseBody& operator=(const CreateResourceGroupResponseBody &) = default ;
    CreateResourceGroupResponseBody& operator=(CreateResourceGroupResponseBody &&) = default ;
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
    inline CreateResourceGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroup Field Functions 
    bool hasResourceGroup() const { return this->resourceGroup_ != nullptr;};
    void deleteResourceGroup() { this->resourceGroup_ = nullptr;};
    inline const CreateResourceGroupResponseBodyResourceGroup & resourceGroup() const { DARABONBA_PTR_GET_CONST(resourceGroup_, CreateResourceGroupResponseBodyResourceGroup) };
    inline CreateResourceGroupResponseBodyResourceGroup resourceGroup() { DARABONBA_PTR_GET(resourceGroup_, CreateResourceGroupResponseBodyResourceGroup) };
    inline CreateResourceGroupResponseBody& setResourceGroup(const CreateResourceGroupResponseBodyResourceGroup & resourceGroup) { DARABONBA_PTR_SET_VALUE(resourceGroup_, resourceGroup) };
    inline CreateResourceGroupResponseBody& setResourceGroup(CreateResourceGroupResponseBodyResourceGroup && resourceGroup) { DARABONBA_PTR_SET_RVALUE(resourceGroup_, resourceGroup) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information of the resource group.
    std::shared_ptr<CreateResourceGroupResponseBodyResourceGroup> resourceGroup_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
