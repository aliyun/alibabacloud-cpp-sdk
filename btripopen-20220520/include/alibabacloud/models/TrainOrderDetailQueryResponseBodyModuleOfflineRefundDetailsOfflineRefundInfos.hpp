// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAINORDERDETAILQUERYRESPONSEBODYMODULEOFFLINEREFUNDDETAILSOFFLINEREFUNDINFOS_HPP_
#define ALIBABACLOUD_MODELS_TRAINORDERDETAILQUERYRESPONSEBODYMODULEOFFLINEREFUNDDETAILSOFFLINEREFUNDINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TrainOrderDetailQueryResponseBodyModuleOfflineRefundDetailsOfflineRefundInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrainOrderDetailQueryResponseBodyModuleOfflineRefundDetailsOfflineRefundInfos& obj) { 
      DARABONBA_PTR_TO_JSON(passenger_id, passengerId_);
      DARABONBA_PTR_TO_JSON(refund_price, refundPrice_);
    };
    friend void from_json(const Darabonba::Json& j, TrainOrderDetailQueryResponseBodyModuleOfflineRefundDetailsOfflineRefundInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(passenger_id, passengerId_);
      DARABONBA_PTR_FROM_JSON(refund_price, refundPrice_);
    };
    TrainOrderDetailQueryResponseBodyModuleOfflineRefundDetailsOfflineRefundInfos() = default ;
    TrainOrderDetailQueryResponseBodyModuleOfflineRefundDetailsOfflineRefundInfos(const TrainOrderDetailQueryResponseBodyModuleOfflineRefundDetailsOfflineRefundInfos &) = default ;
    TrainOrderDetailQueryResponseBodyModuleOfflineRefundDetailsOfflineRefundInfos(TrainOrderDetailQueryResponseBodyModuleOfflineRefundDetailsOfflineRefundInfos &&) = default ;
    TrainOrderDetailQueryResponseBodyModuleOfflineRefundDetailsOfflineRefundInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrainOrderDetailQueryResponseBodyModuleOfflineRefundDetailsOfflineRefundInfos() = default ;
    TrainOrderDetailQueryResponseBodyModuleOfflineRefundDetailsOfflineRefundInfos& operator=(const TrainOrderDetailQueryResponseBodyModuleOfflineRefundDetailsOfflineRefundInfos &) = default ;
    TrainOrderDetailQueryResponseBodyModuleOfflineRefundDetailsOfflineRefundInfos& operator=(TrainOrderDetailQueryResponseBodyModuleOfflineRefundDetailsOfflineRefundInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->passengerId_ != nullptr
        && this->refundPrice_ != nullptr; };
    // passengerId Field Functions 
    bool hasPassengerId() const { return this->passengerId_ != nullptr;};
    void deletePassengerId() { this->passengerId_ = nullptr;};
    inline string passengerId() const { DARABONBA_PTR_GET_DEFAULT(passengerId_, "") };
    inline TrainOrderDetailQueryResponseBodyModuleOfflineRefundDetailsOfflineRefundInfos& setPassengerId(string passengerId) { DARABONBA_PTR_SET_VALUE(passengerId_, passengerId) };


    // refundPrice Field Functions 
    bool hasRefundPrice() const { return this->refundPrice_ != nullptr;};
    void deleteRefundPrice() { this->refundPrice_ = nullptr;};
    inline int64_t refundPrice() const { DARABONBA_PTR_GET_DEFAULT(refundPrice_, 0L) };
    inline TrainOrderDetailQueryResponseBodyModuleOfflineRefundDetailsOfflineRefundInfos& setRefundPrice(int64_t refundPrice) { DARABONBA_PTR_SET_VALUE(refundPrice_, refundPrice) };


  protected:
    std::shared_ptr<string> passengerId_ = nullptr;
    std::shared_ptr<int64_t> refundPrice_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
