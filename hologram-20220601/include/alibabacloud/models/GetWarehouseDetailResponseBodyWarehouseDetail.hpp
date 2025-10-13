// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWAREHOUSEDETAILRESPONSEBODYWAREHOUSEDETAIL_HPP_
#define ALIBABACLOUD_MODELS_GETWAREHOUSEDETAILRESPONSEBODYWAREHOUSEDETAIL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetWarehouseDetailResponseBodyWarehouseDetailWarehouseList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hologram20220601
{
namespace Models
{
  class GetWarehouseDetailResponseBodyWarehouseDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWarehouseDetailResponseBodyWarehouseDetail& obj) { 
      DARABONBA_PTR_TO_JSON(RemainingCpu, remainingCpu_);
      DARABONBA_PTR_TO_JSON(ReservedCpu, reservedCpu_);
      DARABONBA_PTR_TO_JSON(TimedElasticCpu, timedElasticCpu_);
      DARABONBA_PTR_TO_JSON(WarehouseList, warehouseList_);
    };
    friend void from_json(const Darabonba::Json& j, GetWarehouseDetailResponseBodyWarehouseDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(RemainingCpu, remainingCpu_);
      DARABONBA_PTR_FROM_JSON(ReservedCpu, reservedCpu_);
      DARABONBA_PTR_FROM_JSON(TimedElasticCpu, timedElasticCpu_);
      DARABONBA_PTR_FROM_JSON(WarehouseList, warehouseList_);
    };
    GetWarehouseDetailResponseBodyWarehouseDetail() = default ;
    GetWarehouseDetailResponseBodyWarehouseDetail(const GetWarehouseDetailResponseBodyWarehouseDetail &) = default ;
    GetWarehouseDetailResponseBodyWarehouseDetail(GetWarehouseDetailResponseBodyWarehouseDetail &&) = default ;
    GetWarehouseDetailResponseBodyWarehouseDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWarehouseDetailResponseBodyWarehouseDetail() = default ;
    GetWarehouseDetailResponseBodyWarehouseDetail& operator=(const GetWarehouseDetailResponseBodyWarehouseDetail &) = default ;
    GetWarehouseDetailResponseBodyWarehouseDetail& operator=(GetWarehouseDetailResponseBodyWarehouseDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->remainingCpu_ != nullptr
        && this->reservedCpu_ != nullptr && this->timedElasticCpu_ != nullptr && this->warehouseList_ != nullptr; };
    // remainingCpu Field Functions 
    bool hasRemainingCpu() const { return this->remainingCpu_ != nullptr;};
    void deleteRemainingCpu() { this->remainingCpu_ = nullptr;};
    inline string remainingCpu() const { DARABONBA_PTR_GET_DEFAULT(remainingCpu_, "") };
    inline GetWarehouseDetailResponseBodyWarehouseDetail& setRemainingCpu(string remainingCpu) { DARABONBA_PTR_SET_VALUE(remainingCpu_, remainingCpu) };


    // reservedCpu Field Functions 
    bool hasReservedCpu() const { return this->reservedCpu_ != nullptr;};
    void deleteReservedCpu() { this->reservedCpu_ = nullptr;};
    inline string reservedCpu() const { DARABONBA_PTR_GET_DEFAULT(reservedCpu_, "") };
    inline GetWarehouseDetailResponseBodyWarehouseDetail& setReservedCpu(string reservedCpu) { DARABONBA_PTR_SET_VALUE(reservedCpu_, reservedCpu) };


    // timedElasticCpu Field Functions 
    bool hasTimedElasticCpu() const { return this->timedElasticCpu_ != nullptr;};
    void deleteTimedElasticCpu() { this->timedElasticCpu_ = nullptr;};
    inline string timedElasticCpu() const { DARABONBA_PTR_GET_DEFAULT(timedElasticCpu_, "") };
    inline GetWarehouseDetailResponseBodyWarehouseDetail& setTimedElasticCpu(string timedElasticCpu) { DARABONBA_PTR_SET_VALUE(timedElasticCpu_, timedElasticCpu) };


    // warehouseList Field Functions 
    bool hasWarehouseList() const { return this->warehouseList_ != nullptr;};
    void deleteWarehouseList() { this->warehouseList_ = nullptr;};
    inline const vector<Models::GetWarehouseDetailResponseBodyWarehouseDetailWarehouseList> & warehouseList() const { DARABONBA_PTR_GET_CONST(warehouseList_, vector<Models::GetWarehouseDetailResponseBodyWarehouseDetailWarehouseList>) };
    inline vector<Models::GetWarehouseDetailResponseBodyWarehouseDetailWarehouseList> warehouseList() { DARABONBA_PTR_GET(warehouseList_, vector<Models::GetWarehouseDetailResponseBodyWarehouseDetailWarehouseList>) };
    inline GetWarehouseDetailResponseBodyWarehouseDetail& setWarehouseList(const vector<Models::GetWarehouseDetailResponseBodyWarehouseDetailWarehouseList> & warehouseList) { DARABONBA_PTR_SET_VALUE(warehouseList_, warehouseList) };
    inline GetWarehouseDetailResponseBodyWarehouseDetail& setWarehouseList(vector<Models::GetWarehouseDetailResponseBodyWarehouseDetailWarehouseList> && warehouseList) { DARABONBA_PTR_SET_RVALUE(warehouseList_, warehouseList) };


  protected:
    // The remaining unallocated computing resources of the virtual warehouse instance.
    std::shared_ptr<string> remainingCpu_ = nullptr;
    // The reserved computing resources. The amount of computing resources in all running virtual warehouses in an instance cannot exceed the amount of reserved computing resources in the virtual warehouses.
    std::shared_ptr<string> reservedCpu_ = nullptr;
    std::shared_ptr<string> timedElasticCpu_ = nullptr;
    // The list of virtual warehouses.
    std::shared_ptr<vector<Models::GetWarehouseDetailResponseBodyWarehouseDetailWarehouseList>> warehouseList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hologram20220601
#endif
