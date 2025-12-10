// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETERESOURCEGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETERESOURCEGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DeleteResourceGroupResponseBodyResourceGroup.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class DeleteResourceGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteResourceGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroup, resourceGroup_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteResourceGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroup, resourceGroup_);
    };
    DeleteResourceGroupResponseBody() = default ;
    DeleteResourceGroupResponseBody(const DeleteResourceGroupResponseBody &) = default ;
    DeleteResourceGroupResponseBody(DeleteResourceGroupResponseBody &&) = default ;
    DeleteResourceGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteResourceGroupResponseBody() = default ;
    DeleteResourceGroupResponseBody& operator=(const DeleteResourceGroupResponseBody &) = default ;
    DeleteResourceGroupResponseBody& operator=(DeleteResourceGroupResponseBody &&) = default ;
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
    inline DeleteResourceGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroup Field Functions 
    bool hasResourceGroup() const { return this->resourceGroup_ != nullptr;};
    void deleteResourceGroup() { this->resourceGroup_ = nullptr;};
    inline const DeleteResourceGroupResponseBodyResourceGroup & resourceGroup() const { DARABONBA_PTR_GET_CONST(resourceGroup_, DeleteResourceGroupResponseBodyResourceGroup) };
    inline DeleteResourceGroupResponseBodyResourceGroup resourceGroup() { DARABONBA_PTR_GET(resourceGroup_, DeleteResourceGroupResponseBodyResourceGroup) };
    inline DeleteResourceGroupResponseBody& setResourceGroup(const DeleteResourceGroupResponseBodyResourceGroup & resourceGroup) { DARABONBA_PTR_SET_VALUE(resourceGroup_, resourceGroup) };
    inline DeleteResourceGroupResponseBody& setResourceGroup(DeleteResourceGroupResponseBodyResourceGroup && resourceGroup) { DARABONBA_PTR_SET_RVALUE(resourceGroup_, resourceGroup) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information of the resource group.
    std::shared_ptr<DeleteResourceGroupResponseBodyResourceGroup> resourceGroup_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
