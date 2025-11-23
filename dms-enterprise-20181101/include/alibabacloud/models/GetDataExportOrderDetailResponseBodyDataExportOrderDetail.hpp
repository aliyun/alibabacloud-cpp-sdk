// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATAEXPORTORDERDETAILRESPONSEBODYDATAEXPORTORDERDETAIL_HPP_
#define ALIBABACLOUD_MODELS_GETDATAEXPORTORDERDETAILRESPONSEBODYDATAEXPORTORDERDETAIL_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDataExportOrderDetailResponseBodyDataExportOrderDetailKeyInfo.hpp>
#include <alibabacloud/models/GetDataExportOrderDetailResponseBodyDataExportOrderDetailOrderDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetDataExportOrderDetailResponseBodyDataExportOrderDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataExportOrderDetailResponseBodyDataExportOrderDetail& obj) { 
      DARABONBA_PTR_TO_JSON(KeyInfo, keyInfo_);
      DARABONBA_PTR_TO_JSON(OrderDetail, orderDetail_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataExportOrderDetailResponseBodyDataExportOrderDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(KeyInfo, keyInfo_);
      DARABONBA_PTR_FROM_JSON(OrderDetail, orderDetail_);
    };
    GetDataExportOrderDetailResponseBodyDataExportOrderDetail() = default ;
    GetDataExportOrderDetailResponseBodyDataExportOrderDetail(const GetDataExportOrderDetailResponseBodyDataExportOrderDetail &) = default ;
    GetDataExportOrderDetailResponseBodyDataExportOrderDetail(GetDataExportOrderDetailResponseBodyDataExportOrderDetail &&) = default ;
    GetDataExportOrderDetailResponseBodyDataExportOrderDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataExportOrderDetailResponseBodyDataExportOrderDetail() = default ;
    GetDataExportOrderDetailResponseBodyDataExportOrderDetail& operator=(const GetDataExportOrderDetailResponseBodyDataExportOrderDetail &) = default ;
    GetDataExportOrderDetailResponseBodyDataExportOrderDetail& operator=(GetDataExportOrderDetailResponseBodyDataExportOrderDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->keyInfo_ == nullptr
        && return this->orderDetail_ == nullptr; };
    // keyInfo Field Functions 
    bool hasKeyInfo() const { return this->keyInfo_ != nullptr;};
    void deleteKeyInfo() { this->keyInfo_ = nullptr;};
    inline const Models::GetDataExportOrderDetailResponseBodyDataExportOrderDetailKeyInfo & keyInfo() const { DARABONBA_PTR_GET_CONST(keyInfo_, Models::GetDataExportOrderDetailResponseBodyDataExportOrderDetailKeyInfo) };
    inline Models::GetDataExportOrderDetailResponseBodyDataExportOrderDetailKeyInfo keyInfo() { DARABONBA_PTR_GET(keyInfo_, Models::GetDataExportOrderDetailResponseBodyDataExportOrderDetailKeyInfo) };
    inline GetDataExportOrderDetailResponseBodyDataExportOrderDetail& setKeyInfo(const Models::GetDataExportOrderDetailResponseBodyDataExportOrderDetailKeyInfo & keyInfo) { DARABONBA_PTR_SET_VALUE(keyInfo_, keyInfo) };
    inline GetDataExportOrderDetailResponseBodyDataExportOrderDetail& setKeyInfo(Models::GetDataExportOrderDetailResponseBodyDataExportOrderDetailKeyInfo && keyInfo) { DARABONBA_PTR_SET_RVALUE(keyInfo_, keyInfo) };


    // orderDetail Field Functions 
    bool hasOrderDetail() const { return this->orderDetail_ != nullptr;};
    void deleteOrderDetail() { this->orderDetail_ = nullptr;};
    inline const Models::GetDataExportOrderDetailResponseBodyDataExportOrderDetailOrderDetail & orderDetail() const { DARABONBA_PTR_GET_CONST(orderDetail_, Models::GetDataExportOrderDetailResponseBodyDataExportOrderDetailOrderDetail) };
    inline Models::GetDataExportOrderDetailResponseBodyDataExportOrderDetailOrderDetail orderDetail() { DARABONBA_PTR_GET(orderDetail_, Models::GetDataExportOrderDetailResponseBodyDataExportOrderDetailOrderDetail) };
    inline GetDataExportOrderDetailResponseBodyDataExportOrderDetail& setOrderDetail(const Models::GetDataExportOrderDetailResponseBodyDataExportOrderDetailOrderDetail & orderDetail) { DARABONBA_PTR_SET_VALUE(orderDetail_, orderDetail) };
    inline GetDataExportOrderDetailResponseBodyDataExportOrderDetail& setOrderDetail(Models::GetDataExportOrderDetailResponseBodyDataExportOrderDetailOrderDetail && orderDetail) { DARABONBA_PTR_SET_RVALUE(orderDetail_, orderDetail) };


  protected:
    // The status information.
    std::shared_ptr<Models::GetDataExportOrderDetailResponseBodyDataExportOrderDetailKeyInfo> keyInfo_ = nullptr;
    // The details of the ticket.
    std::shared_ptr<Models::GetDataExportOrderDetailResponseBodyDataExportOrderDetailOrderDetail> orderDetail_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
