// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPHYSICALCONNECTIONOCCUPANCYORDERRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATEPHYSICALCONNECTIONOCCUPANCYORDERRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class CreatePhysicalConnectionOccupancyOrderResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePhysicalConnectionOccupancyOrderResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePhysicalConnectionOccupancyOrderResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
    };
    CreatePhysicalConnectionOccupancyOrderResponseBodyData() = default ;
    CreatePhysicalConnectionOccupancyOrderResponseBodyData(const CreatePhysicalConnectionOccupancyOrderResponseBodyData &) = default ;
    CreatePhysicalConnectionOccupancyOrderResponseBodyData(CreatePhysicalConnectionOccupancyOrderResponseBodyData &&) = default ;
    CreatePhysicalConnectionOccupancyOrderResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePhysicalConnectionOccupancyOrderResponseBodyData() = default ;
    CreatePhysicalConnectionOccupancyOrderResponseBodyData& operator=(const CreatePhysicalConnectionOccupancyOrderResponseBodyData &) = default ;
    CreatePhysicalConnectionOccupancyOrderResponseBodyData& operator=(CreatePhysicalConnectionOccupancyOrderResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->orderId_ != nullptr; };
    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline CreatePhysicalConnectionOccupancyOrderResponseBodyData& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


  protected:
    // The ID of the order that is placed.
    std::shared_ptr<string> orderId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
