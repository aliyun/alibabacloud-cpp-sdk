// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGGREGATERESOURCEINVENTORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAGGREGATERESOURCEINVENTORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetAggregateResourceInventoryResponseBodyResourceInventory.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetAggregateResourceInventoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAggregateResourceInventoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceInventory, resourceInventory_);
    };
    friend void from_json(const Darabonba::Json& j, GetAggregateResourceInventoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceInventory, resourceInventory_);
    };
    GetAggregateResourceInventoryResponseBody() = default ;
    GetAggregateResourceInventoryResponseBody(const GetAggregateResourceInventoryResponseBody &) = default ;
    GetAggregateResourceInventoryResponseBody(GetAggregateResourceInventoryResponseBody &&) = default ;
    GetAggregateResourceInventoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAggregateResourceInventoryResponseBody() = default ;
    GetAggregateResourceInventoryResponseBody& operator=(const GetAggregateResourceInventoryResponseBody &) = default ;
    GetAggregateResourceInventoryResponseBody& operator=(GetAggregateResourceInventoryResponseBody &&) = default ;
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
    inline GetAggregateResourceInventoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceInventory Field Functions 
    bool hasResourceInventory() const { return this->resourceInventory_ != nullptr;};
    void deleteResourceInventory() { this->resourceInventory_ = nullptr;};
    inline const GetAggregateResourceInventoryResponseBodyResourceInventory & resourceInventory() const { DARABONBA_PTR_GET_CONST(resourceInventory_, GetAggregateResourceInventoryResponseBodyResourceInventory) };
    inline GetAggregateResourceInventoryResponseBodyResourceInventory resourceInventory() { DARABONBA_PTR_GET(resourceInventory_, GetAggregateResourceInventoryResponseBodyResourceInventory) };
    inline GetAggregateResourceInventoryResponseBody& setResourceInventory(const GetAggregateResourceInventoryResponseBodyResourceInventory & resourceInventory) { DARABONBA_PTR_SET_VALUE(resourceInventory_, resourceInventory) };
    inline GetAggregateResourceInventoryResponseBody& setResourceInventory(GetAggregateResourceInventoryResponseBodyResourceInventory && resourceInventory) { DARABONBA_PTR_SET_RVALUE(resourceInventory_, resourceInventory) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the resource inventory.
    std::shared_ptr<GetAggregateResourceInventoryResponseBodyResourceInventory> resourceInventory_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
