// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWAREHOUSEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEWAREHOUSEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hologram20220601
{
namespace Models
{
  class CreateWarehouseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWarehouseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(config, config_);
      DARABONBA_PTR_TO_JSON(cpu, cpu_);
      DARABONBA_PTR_TO_JSON(warehouseName, warehouseName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWarehouseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(config, config_);
      DARABONBA_PTR_FROM_JSON(cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(warehouseName, warehouseName_);
    };
    CreateWarehouseRequest() = default ;
    CreateWarehouseRequest(const CreateWarehouseRequest &) = default ;
    CreateWarehouseRequest(CreateWarehouseRequest &&) = default ;
    CreateWarehouseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWarehouseRequest() = default ;
    CreateWarehouseRequest& operator=(const CreateWarehouseRequest &) = default ;
    CreateWarehouseRequest& operator=(CreateWarehouseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr
        && this->config_ == nullptr && this->cpu_ == nullptr && this->warehouseName_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateWarehouseRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline CreateWarehouseRequest& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline string getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, "") };
    inline CreateWarehouseRequest& setCpu(string cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // warehouseName Field Functions 
    bool hasWarehouseName() const { return this->warehouseName_ != nullptr;};
    void deleteWarehouseName() { this->warehouseName_ = nullptr;};
    inline string getWarehouseName() const { DARABONBA_PTR_GET_DEFAULT(warehouseName_, "") };
    inline CreateWarehouseRequest& setWarehouseName(string warehouseName) { DARABONBA_PTR_SET_VALUE(warehouseName_, warehouseName) };


  protected:
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The configuration information.
    shared_ptr<string> config_ {};
    // The number of vCPUs.
    shared_ptr<string> cpu_ {};
    // The name of the virtual warehouse.
    shared_ptr<string> warehouseName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hologram20220601
#endif
