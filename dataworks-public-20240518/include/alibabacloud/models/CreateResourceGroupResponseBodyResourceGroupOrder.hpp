// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERESOURCEGROUPRESPONSEBODYRESOURCEGROUPORDER_HPP_
#define ALIBABACLOUD_MODELS_CREATERESOURCEGROUPRESPONSEBODYRESOURCEGROUPORDER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateResourceGroupResponseBodyResourceGroupOrder : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateResourceGroupResponseBodyResourceGroupOrder& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(OrderInstanceId, orderInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateResourceGroupResponseBodyResourceGroupOrder& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(OrderInstanceId, orderInstanceId_);
    };
    CreateResourceGroupResponseBodyResourceGroupOrder() = default ;
    CreateResourceGroupResponseBodyResourceGroupOrder(const CreateResourceGroupResponseBodyResourceGroupOrder &) = default ;
    CreateResourceGroupResponseBodyResourceGroupOrder(CreateResourceGroupResponseBodyResourceGroupOrder &&) = default ;
    CreateResourceGroupResponseBodyResourceGroupOrder(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateResourceGroupResponseBodyResourceGroupOrder() = default ;
    CreateResourceGroupResponseBodyResourceGroupOrder& operator=(const CreateResourceGroupResponseBodyResourceGroupOrder &) = default ;
    CreateResourceGroupResponseBodyResourceGroupOrder& operator=(CreateResourceGroupResponseBodyResourceGroupOrder &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->orderId_ == nullptr && return this->orderInstanceId_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline CreateResourceGroupResponseBodyResourceGroupOrder& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline CreateResourceGroupResponseBodyResourceGroupOrder& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // orderInstanceId Field Functions 
    bool hasOrderInstanceId() const { return this->orderInstanceId_ != nullptr;};
    void deleteOrderInstanceId() { this->orderInstanceId_ = nullptr;};
    inline string orderInstanceId() const { DARABONBA_PTR_GET_DEFAULT(orderInstanceId_, "") };
    inline CreateResourceGroupResponseBodyResourceGroupOrder& setOrderInstanceId(string orderInstanceId) { DARABONBA_PTR_SET_VALUE(orderInstanceId_, orderInstanceId) };


  protected:
    // The ID of the serverless resource group.
    std::shared_ptr<string> id_ = nullptr;
    // The ID of the order that is used to create the serverless resource group.
    std::shared_ptr<int64_t> orderId_ = nullptr;
    // The instance ID of the order that is used to create the serverless resource group.
    std::shared_ptr<string> orderInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
