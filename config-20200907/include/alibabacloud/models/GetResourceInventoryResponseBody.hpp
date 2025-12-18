// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCEINVENTORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCEINVENTORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetResourceInventoryResponseBodyResourceInventory.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetResourceInventoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceInventoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceInventory, resourceInventory_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceInventoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceInventory, resourceInventory_);
    };
    GetResourceInventoryResponseBody() = default ;
    GetResourceInventoryResponseBody(const GetResourceInventoryResponseBody &) = default ;
    GetResourceInventoryResponseBody(GetResourceInventoryResponseBody &&) = default ;
    GetResourceInventoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceInventoryResponseBody() = default ;
    GetResourceInventoryResponseBody& operator=(const GetResourceInventoryResponseBody &) = default ;
    GetResourceInventoryResponseBody& operator=(GetResourceInventoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->resourceInventory_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetResourceInventoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceInventory Field Functions 
    bool hasResourceInventory() const { return this->resourceInventory_ != nullptr;};
    void deleteResourceInventory() { this->resourceInventory_ = nullptr;};
    inline const GetResourceInventoryResponseBodyResourceInventory & resourceInventory() const { DARABONBA_PTR_GET_CONST(resourceInventory_, GetResourceInventoryResponseBodyResourceInventory) };
    inline GetResourceInventoryResponseBodyResourceInventory resourceInventory() { DARABONBA_PTR_GET(resourceInventory_, GetResourceInventoryResponseBodyResourceInventory) };
    inline GetResourceInventoryResponseBody& setResourceInventory(const GetResourceInventoryResponseBodyResourceInventory & resourceInventory) { DARABONBA_PTR_SET_VALUE(resourceInventory_, resourceInventory) };
    inline GetResourceInventoryResponseBody& setResourceInventory(GetResourceInventoryResponseBodyResourceInventory && resourceInventory) { DARABONBA_PTR_SET_RVALUE(resourceInventory_, resourceInventory) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the resource inventory.
    std::shared_ptr<GetResourceInventoryResponseBodyResourceInventory> resourceInventory_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
