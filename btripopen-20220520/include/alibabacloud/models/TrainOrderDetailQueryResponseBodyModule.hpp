// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAINORDERDETAILQUERYRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_TRAINORDERDETAILQUERYRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/TrainOrderDetailQueryResponseBodyModuleBookInfos.hpp>
#include <vector>
#include <alibabacloud/models/TrainOrderDetailQueryResponseBodyModuleChangeInfos.hpp>
#include <alibabacloud/models/TrainOrderDetailQueryResponseBodyModuleOfflineRefundDetails.hpp>
#include <alibabacloud/models/TrainOrderDetailQueryResponseBodyModulePassengerInfoS.hpp>
#include <alibabacloud/models/TrainOrderDetailQueryResponseBodyModuleRefundInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TrainOrderDetailQueryResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrainOrderDetailQueryResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(book_infos, bookInfos_);
      DARABONBA_PTR_TO_JSON(change_infos, changeInfos_);
      DARABONBA_PTR_TO_JSON(offlineRefundDetails, offlineRefundDetails_);
      DARABONBA_PTR_TO_JSON(order_id, orderId_);
      DARABONBA_PTR_TO_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_TO_JSON(passenger_info_s, passengerInfoS_);
      DARABONBA_PTR_TO_JSON(refund_infos, refundInfos_);
    };
    friend void from_json(const Darabonba::Json& j, TrainOrderDetailQueryResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(book_infos, bookInfos_);
      DARABONBA_PTR_FROM_JSON(change_infos, changeInfos_);
      DARABONBA_PTR_FROM_JSON(offlineRefundDetails, offlineRefundDetails_);
      DARABONBA_PTR_FROM_JSON(order_id, orderId_);
      DARABONBA_PTR_FROM_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_FROM_JSON(passenger_info_s, passengerInfoS_);
      DARABONBA_PTR_FROM_JSON(refund_infos, refundInfos_);
    };
    TrainOrderDetailQueryResponseBodyModule() = default ;
    TrainOrderDetailQueryResponseBodyModule(const TrainOrderDetailQueryResponseBodyModule &) = default ;
    TrainOrderDetailQueryResponseBodyModule(TrainOrderDetailQueryResponseBodyModule &&) = default ;
    TrainOrderDetailQueryResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrainOrderDetailQueryResponseBodyModule() = default ;
    TrainOrderDetailQueryResponseBodyModule& operator=(const TrainOrderDetailQueryResponseBodyModule &) = default ;
    TrainOrderDetailQueryResponseBodyModule& operator=(TrainOrderDetailQueryResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bookInfos_ != nullptr
        && this->changeInfos_ != nullptr && this->offlineRefundDetails_ != nullptr && this->orderId_ != nullptr && this->outOrderId_ != nullptr && this->passengerInfoS_ != nullptr
        && this->refundInfos_ != nullptr; };
    // bookInfos Field Functions 
    bool hasBookInfos() const { return this->bookInfos_ != nullptr;};
    void deleteBookInfos() { this->bookInfos_ = nullptr;};
    inline const Models::TrainOrderDetailQueryResponseBodyModuleBookInfos & bookInfos() const { DARABONBA_PTR_GET_CONST(bookInfos_, Models::TrainOrderDetailQueryResponseBodyModuleBookInfos) };
    inline Models::TrainOrderDetailQueryResponseBodyModuleBookInfos bookInfos() { DARABONBA_PTR_GET(bookInfos_, Models::TrainOrderDetailQueryResponseBodyModuleBookInfos) };
    inline TrainOrderDetailQueryResponseBodyModule& setBookInfos(const Models::TrainOrderDetailQueryResponseBodyModuleBookInfos & bookInfos) { DARABONBA_PTR_SET_VALUE(bookInfos_, bookInfos) };
    inline TrainOrderDetailQueryResponseBodyModule& setBookInfos(Models::TrainOrderDetailQueryResponseBodyModuleBookInfos && bookInfos) { DARABONBA_PTR_SET_RVALUE(bookInfos_, bookInfos) };


    // changeInfos Field Functions 
    bool hasChangeInfos() const { return this->changeInfos_ != nullptr;};
    void deleteChangeInfos() { this->changeInfos_ = nullptr;};
    inline const vector<Models::TrainOrderDetailQueryResponseBodyModuleChangeInfos> & changeInfos() const { DARABONBA_PTR_GET_CONST(changeInfos_, vector<Models::TrainOrderDetailQueryResponseBodyModuleChangeInfos>) };
    inline vector<Models::TrainOrderDetailQueryResponseBodyModuleChangeInfos> changeInfos() { DARABONBA_PTR_GET(changeInfos_, vector<Models::TrainOrderDetailQueryResponseBodyModuleChangeInfos>) };
    inline TrainOrderDetailQueryResponseBodyModule& setChangeInfos(const vector<Models::TrainOrderDetailQueryResponseBodyModuleChangeInfos> & changeInfos) { DARABONBA_PTR_SET_VALUE(changeInfos_, changeInfos) };
    inline TrainOrderDetailQueryResponseBodyModule& setChangeInfos(vector<Models::TrainOrderDetailQueryResponseBodyModuleChangeInfos> && changeInfos) { DARABONBA_PTR_SET_RVALUE(changeInfos_, changeInfos) };


    // offlineRefundDetails Field Functions 
    bool hasOfflineRefundDetails() const { return this->offlineRefundDetails_ != nullptr;};
    void deleteOfflineRefundDetails() { this->offlineRefundDetails_ = nullptr;};
    inline const vector<Models::TrainOrderDetailQueryResponseBodyModuleOfflineRefundDetails> & offlineRefundDetails() const { DARABONBA_PTR_GET_CONST(offlineRefundDetails_, vector<Models::TrainOrderDetailQueryResponseBodyModuleOfflineRefundDetails>) };
    inline vector<Models::TrainOrderDetailQueryResponseBodyModuleOfflineRefundDetails> offlineRefundDetails() { DARABONBA_PTR_GET(offlineRefundDetails_, vector<Models::TrainOrderDetailQueryResponseBodyModuleOfflineRefundDetails>) };
    inline TrainOrderDetailQueryResponseBodyModule& setOfflineRefundDetails(const vector<Models::TrainOrderDetailQueryResponseBodyModuleOfflineRefundDetails> & offlineRefundDetails) { DARABONBA_PTR_SET_VALUE(offlineRefundDetails_, offlineRefundDetails) };
    inline TrainOrderDetailQueryResponseBodyModule& setOfflineRefundDetails(vector<Models::TrainOrderDetailQueryResponseBodyModuleOfflineRefundDetails> && offlineRefundDetails) { DARABONBA_PTR_SET_RVALUE(offlineRefundDetails_, offlineRefundDetails) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline TrainOrderDetailQueryResponseBodyModule& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // outOrderId Field Functions 
    bool hasOutOrderId() const { return this->outOrderId_ != nullptr;};
    void deleteOutOrderId() { this->outOrderId_ = nullptr;};
    inline string outOrderId() const { DARABONBA_PTR_GET_DEFAULT(outOrderId_, "") };
    inline TrainOrderDetailQueryResponseBodyModule& setOutOrderId(string outOrderId) { DARABONBA_PTR_SET_VALUE(outOrderId_, outOrderId) };


    // passengerInfoS Field Functions 
    bool hasPassengerInfoS() const { return this->passengerInfoS_ != nullptr;};
    void deletePassengerInfoS() { this->passengerInfoS_ = nullptr;};
    inline const vector<Models::TrainOrderDetailQueryResponseBodyModulePassengerInfoS> & passengerInfoS() const { DARABONBA_PTR_GET_CONST(passengerInfoS_, vector<Models::TrainOrderDetailQueryResponseBodyModulePassengerInfoS>) };
    inline vector<Models::TrainOrderDetailQueryResponseBodyModulePassengerInfoS> passengerInfoS() { DARABONBA_PTR_GET(passengerInfoS_, vector<Models::TrainOrderDetailQueryResponseBodyModulePassengerInfoS>) };
    inline TrainOrderDetailQueryResponseBodyModule& setPassengerInfoS(const vector<Models::TrainOrderDetailQueryResponseBodyModulePassengerInfoS> & passengerInfoS) { DARABONBA_PTR_SET_VALUE(passengerInfoS_, passengerInfoS) };
    inline TrainOrderDetailQueryResponseBodyModule& setPassengerInfoS(vector<Models::TrainOrderDetailQueryResponseBodyModulePassengerInfoS> && passengerInfoS) { DARABONBA_PTR_SET_RVALUE(passengerInfoS_, passengerInfoS) };


    // refundInfos Field Functions 
    bool hasRefundInfos() const { return this->refundInfos_ != nullptr;};
    void deleteRefundInfos() { this->refundInfos_ = nullptr;};
    inline const vector<Models::TrainOrderDetailQueryResponseBodyModuleRefundInfos> & refundInfos() const { DARABONBA_PTR_GET_CONST(refundInfos_, vector<Models::TrainOrderDetailQueryResponseBodyModuleRefundInfos>) };
    inline vector<Models::TrainOrderDetailQueryResponseBodyModuleRefundInfos> refundInfos() { DARABONBA_PTR_GET(refundInfos_, vector<Models::TrainOrderDetailQueryResponseBodyModuleRefundInfos>) };
    inline TrainOrderDetailQueryResponseBodyModule& setRefundInfos(const vector<Models::TrainOrderDetailQueryResponseBodyModuleRefundInfos> & refundInfos) { DARABONBA_PTR_SET_VALUE(refundInfos_, refundInfos) };
    inline TrainOrderDetailQueryResponseBodyModule& setRefundInfos(vector<Models::TrainOrderDetailQueryResponseBodyModuleRefundInfos> && refundInfos) { DARABONBA_PTR_SET_RVALUE(refundInfos_, refundInfos) };


  protected:
    std::shared_ptr<Models::TrainOrderDetailQueryResponseBodyModuleBookInfos> bookInfos_ = nullptr;
    std::shared_ptr<vector<Models::TrainOrderDetailQueryResponseBodyModuleChangeInfos>> changeInfos_ = nullptr;
    std::shared_ptr<vector<Models::TrainOrderDetailQueryResponseBodyModuleOfflineRefundDetails>> offlineRefundDetails_ = nullptr;
    std::shared_ptr<string> orderId_ = nullptr;
    std::shared_ptr<string> outOrderId_ = nullptr;
    std::shared_ptr<vector<Models::TrainOrderDetailQueryResponseBodyModulePassengerInfoS>> passengerInfoS_ = nullptr;
    std::shared_ptr<vector<Models::TrainOrderDetailQueryResponseBodyModuleRefundInfos>> refundInfos_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
