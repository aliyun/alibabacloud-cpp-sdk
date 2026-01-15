// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERESOURCEGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATERESOURCEGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class CreateResourceGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateResourceGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupID, resourceGroupID_);
    };
    friend void from_json(const Darabonba::Json& j, CreateResourceGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupID, resourceGroupID_);
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
        && this->resourceGroupID_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateResourceGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupID Field Functions 
    bool hasResourceGroupID() const { return this->resourceGroupID_ != nullptr;};
    void deleteResourceGroupID() { this->resourceGroupID_ = nullptr;};
    inline string getResourceGroupID() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupID_, "") };
    inline CreateResourceGroupResponseBody& setResourceGroupID(string resourceGroupID) { DARABONBA_PTR_SET_VALUE(resourceGroupID_, resourceGroupID) };


  protected:
    shared_ptr<string> requestId_ {};
    // ResourceGroup ID。
    shared_ptr<string> resourceGroupID_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
