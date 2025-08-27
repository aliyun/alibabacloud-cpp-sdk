// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELORDERCHANGEDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_HOTELORDERCHANGEDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelOrderChangeDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelOrderChangeDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(btrip_user_id, btripUserId_);
      DARABONBA_PTR_TO_JSON(change_order_id, changeOrderId_);
      DARABONBA_PTR_TO_JSON(dis_order_id, disOrderId_);
      DARABONBA_PTR_TO_JSON(sale_order_id, saleOrderId_);
    };
    friend void from_json(const Darabonba::Json& j, HotelOrderChangeDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(btrip_user_id, btripUserId_);
      DARABONBA_PTR_FROM_JSON(change_order_id, changeOrderId_);
      DARABONBA_PTR_FROM_JSON(dis_order_id, disOrderId_);
      DARABONBA_PTR_FROM_JSON(sale_order_id, saleOrderId_);
    };
    HotelOrderChangeDetailRequest() = default ;
    HotelOrderChangeDetailRequest(const HotelOrderChangeDetailRequest &) = default ;
    HotelOrderChangeDetailRequest(HotelOrderChangeDetailRequest &&) = default ;
    HotelOrderChangeDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelOrderChangeDetailRequest() = default ;
    HotelOrderChangeDetailRequest& operator=(const HotelOrderChangeDetailRequest &) = default ;
    HotelOrderChangeDetailRequest& operator=(HotelOrderChangeDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->btripUserId_ != nullptr
        && this->changeOrderId_ != nullptr && this->disOrderId_ != nullptr && this->saleOrderId_ != nullptr; };
    // btripUserId Field Functions 
    bool hasBtripUserId() const { return this->btripUserId_ != nullptr;};
    void deleteBtripUserId() { this->btripUserId_ = nullptr;};
    inline string btripUserId() const { DARABONBA_PTR_GET_DEFAULT(btripUserId_, "") };
    inline HotelOrderChangeDetailRequest& setBtripUserId(string btripUserId) { DARABONBA_PTR_SET_VALUE(btripUserId_, btripUserId) };


    // changeOrderId Field Functions 
    bool hasChangeOrderId() const { return this->changeOrderId_ != nullptr;};
    void deleteChangeOrderId() { this->changeOrderId_ = nullptr;};
    inline string changeOrderId() const { DARABONBA_PTR_GET_DEFAULT(changeOrderId_, "") };
    inline HotelOrderChangeDetailRequest& setChangeOrderId(string changeOrderId) { DARABONBA_PTR_SET_VALUE(changeOrderId_, changeOrderId) };


    // disOrderId Field Functions 
    bool hasDisOrderId() const { return this->disOrderId_ != nullptr;};
    void deleteDisOrderId() { this->disOrderId_ = nullptr;};
    inline string disOrderId() const { DARABONBA_PTR_GET_DEFAULT(disOrderId_, "") };
    inline HotelOrderChangeDetailRequest& setDisOrderId(string disOrderId) { DARABONBA_PTR_SET_VALUE(disOrderId_, disOrderId) };


    // saleOrderId Field Functions 
    bool hasSaleOrderId() const { return this->saleOrderId_ != nullptr;};
    void deleteSaleOrderId() { this->saleOrderId_ = nullptr;};
    inline string saleOrderId() const { DARABONBA_PTR_GET_DEFAULT(saleOrderId_, "") };
    inline HotelOrderChangeDetailRequest& setSaleOrderId(string saleOrderId) { DARABONBA_PTR_SET_VALUE(saleOrderId_, saleOrderId) };


  protected:
    std::shared_ptr<string> btripUserId_ = nullptr;
    std::shared_ptr<string> changeOrderId_ = nullptr;
    std::shared_ptr<string> disOrderId_ = nullptr;
    std::shared_ptr<string> saleOrderId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
