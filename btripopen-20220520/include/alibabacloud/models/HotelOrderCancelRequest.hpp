// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELORDERCANCELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_HOTELORDERCANCELREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelOrderCancelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelOrderCancelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(btrip_order_id, btripOrderId_);
      DARABONBA_PTR_TO_JSON(dis_order_id, disOrderId_);
    };
    friend void from_json(const Darabonba::Json& j, HotelOrderCancelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(btrip_order_id, btripOrderId_);
      DARABONBA_PTR_FROM_JSON(dis_order_id, disOrderId_);
    };
    HotelOrderCancelRequest() = default ;
    HotelOrderCancelRequest(const HotelOrderCancelRequest &) = default ;
    HotelOrderCancelRequest(HotelOrderCancelRequest &&) = default ;
    HotelOrderCancelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelOrderCancelRequest() = default ;
    HotelOrderCancelRequest& operator=(const HotelOrderCancelRequest &) = default ;
    HotelOrderCancelRequest& operator=(HotelOrderCancelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->btripOrderId_ != nullptr
        && this->disOrderId_ != nullptr; };
    // btripOrderId Field Functions 
    bool hasBtripOrderId() const { return this->btripOrderId_ != nullptr;};
    void deleteBtripOrderId() { this->btripOrderId_ = nullptr;};
    inline string btripOrderId() const { DARABONBA_PTR_GET_DEFAULT(btripOrderId_, "") };
    inline HotelOrderCancelRequest& setBtripOrderId(string btripOrderId) { DARABONBA_PTR_SET_VALUE(btripOrderId_, btripOrderId) };


    // disOrderId Field Functions 
    bool hasDisOrderId() const { return this->disOrderId_ != nullptr;};
    void deleteDisOrderId() { this->disOrderId_ = nullptr;};
    inline string disOrderId() const { DARABONBA_PTR_GET_DEFAULT(disOrderId_, "") };
    inline HotelOrderCancelRequest& setDisOrderId(string disOrderId) { DARABONBA_PTR_SET_VALUE(disOrderId_, disOrderId) };


  protected:
    std::shared_ptr<string> btripOrderId_ = nullptr;
    std::shared_ptr<string> disOrderId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
