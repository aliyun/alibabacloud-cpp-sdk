// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWAREHOUSEDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETWAREHOUSEDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetWarehouseDetailResponseBodyWarehouseDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hologram20220601
{
namespace Models
{
  class GetWarehouseDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWarehouseDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(WarehouseDetail, warehouseDetail_);
    };
    friend void from_json(const Darabonba::Json& j, GetWarehouseDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(WarehouseDetail, warehouseDetail_);
    };
    GetWarehouseDetailResponseBody() = default ;
    GetWarehouseDetailResponseBody(const GetWarehouseDetailResponseBody &) = default ;
    GetWarehouseDetailResponseBody(GetWarehouseDetailResponseBody &&) = default ;
    GetWarehouseDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWarehouseDetailResponseBody() = default ;
    GetWarehouseDetailResponseBody& operator=(const GetWarehouseDetailResponseBody &) = default ;
    GetWarehouseDetailResponseBody& operator=(GetWarehouseDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->warehouseDetail_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetWarehouseDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // warehouseDetail Field Functions 
    bool hasWarehouseDetail() const { return this->warehouseDetail_ != nullptr;};
    void deleteWarehouseDetail() { this->warehouseDetail_ = nullptr;};
    inline const GetWarehouseDetailResponseBodyWarehouseDetail & warehouseDetail() const { DARABONBA_PTR_GET_CONST(warehouseDetail_, GetWarehouseDetailResponseBodyWarehouseDetail) };
    inline GetWarehouseDetailResponseBodyWarehouseDetail warehouseDetail() { DARABONBA_PTR_GET(warehouseDetail_, GetWarehouseDetailResponseBodyWarehouseDetail) };
    inline GetWarehouseDetailResponseBody& setWarehouseDetail(const GetWarehouseDetailResponseBodyWarehouseDetail & warehouseDetail) { DARABONBA_PTR_SET_VALUE(warehouseDetail_, warehouseDetail) };
    inline GetWarehouseDetailResponseBody& setWarehouseDetail(GetWarehouseDetailResponseBodyWarehouseDetail && warehouseDetail) { DARABONBA_PTR_SET_RVALUE(warehouseDetail_, warehouseDetail) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The returned values.
    std::shared_ptr<GetWarehouseDetailResponseBodyWarehouseDetail> warehouseDetail_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hologram20220601
#endif
