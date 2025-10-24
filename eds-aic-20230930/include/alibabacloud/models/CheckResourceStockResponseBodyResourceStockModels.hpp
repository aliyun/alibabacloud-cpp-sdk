// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKRESOURCESTOCKRESPONSEBODYRESOURCESTOCKMODELS_HPP_
#define ALIBABACLOUD_MODELS_CHECKRESOURCESTOCKRESPONSEBODYRESOURCESTOCKMODELS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class CheckResourceStockResponseBodyResourceStockModels : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckResourceStockResponseBodyResourceStockModels& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StockStatus, stockStatus_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckResourceStockResponseBodyResourceStockModels& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StockStatus, stockStatus_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    CheckResourceStockResponseBodyResourceStockModels() = default ;
    CheckResourceStockResponseBodyResourceStockModels(const CheckResourceStockResponseBodyResourceStockModels &) = default ;
    CheckResourceStockResponseBodyResourceStockModels(CheckResourceStockResponseBodyResourceStockModels &&) = default ;
    CheckResourceStockResponseBodyResourceStockModels(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckResourceStockResponseBodyResourceStockModels() = default ;
    CheckResourceStockResponseBodyResourceStockModels& operator=(const CheckResourceStockResponseBodyResourceStockModels &) = default ;
    CheckResourceStockResponseBodyResourceStockModels& operator=(CheckResourceStockResponseBodyResourceStockModels &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr
        && return this->stockStatus_ == nullptr && return this->zoneId_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CheckResourceStockResponseBodyResourceStockModels& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // stockStatus Field Functions 
    bool hasStockStatus() const { return this->stockStatus_ != nullptr;};
    void deleteStockStatus() { this->stockStatus_ = nullptr;};
    inline string stockStatus() const { DARABONBA_PTR_GET_DEFAULT(stockStatus_, "") };
    inline CheckResourceStockResponseBodyResourceStockModels& setStockStatus(string stockStatus) { DARABONBA_PTR_SET_VALUE(stockStatus_, stockStatus) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline CheckResourceStockResponseBodyResourceStockModels& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // Region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // Inventory status of the instance group.
    std::shared_ptr<string> stockStatus_ = nullptr;
    // Zone ID.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
