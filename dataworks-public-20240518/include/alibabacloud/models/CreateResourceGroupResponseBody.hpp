// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERESOURCEGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATERESOURCEGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateResourceGroupResponseBodyResourceGroupOrder.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateResourceGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateResourceGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupOrder, resourceGroupOrder_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreateResourceGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupOrder, resourceGroupOrder_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
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
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->resourceGroupOrder_ != nullptr && this->success_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateResourceGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupOrder Field Functions 
    bool hasResourceGroupOrder() const { return this->resourceGroupOrder_ != nullptr;};
    void deleteResourceGroupOrder() { this->resourceGroupOrder_ = nullptr;};
    inline const CreateResourceGroupResponseBodyResourceGroupOrder & resourceGroupOrder() const { DARABONBA_PTR_GET_CONST(resourceGroupOrder_, CreateResourceGroupResponseBodyResourceGroupOrder) };
    inline CreateResourceGroupResponseBodyResourceGroupOrder resourceGroupOrder() { DARABONBA_PTR_GET(resourceGroupOrder_, CreateResourceGroupResponseBodyResourceGroupOrder) };
    inline CreateResourceGroupResponseBody& setResourceGroupOrder(const CreateResourceGroupResponseBodyResourceGroupOrder & resourceGroupOrder) { DARABONBA_PTR_SET_VALUE(resourceGroupOrder_, resourceGroupOrder) };
    inline CreateResourceGroupResponseBody& setResourceGroupOrder(CreateResourceGroupResponseBodyResourceGroupOrder && resourceGroupOrder) { DARABONBA_PTR_SET_RVALUE(resourceGroupOrder_, resourceGroupOrder) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreateResourceGroupResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the order that is used to create the serverless resource group.
    std::shared_ptr<CreateResourceGroupResponseBodyResourceGroupOrder> resourceGroupOrder_ = nullptr;
    // Indicates whether the request was successful.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
