// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCESRESPONSEBODYINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCESRESPONSEBODYINSTANCES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListInstancesResponseBodyInstancesConfig.hpp>
#include <alibabacloud/models/ListInstancesResponseBodyInstancesOperatingTool.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class ListInstancesResponseBodyInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstancesResponseBodyInstances& obj) { 
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(OperatingTool, operatingTool_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstancesResponseBodyInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(OperatingTool, operatingTool_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListInstancesResponseBodyInstances() = default ;
    ListInstancesResponseBodyInstances(const ListInstancesResponseBodyInstances &) = default ;
    ListInstancesResponseBodyInstances(ListInstancesResponseBodyInstances &&) = default ;
    ListInstancesResponseBodyInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstancesResponseBodyInstances() = default ;
    ListInstancesResponseBodyInstances& operator=(const ListInstancesResponseBodyInstances &) = default ;
    ListInstancesResponseBodyInstances& operator=(ListInstancesResponseBodyInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->chargeType_ != nullptr
        && this->commodityCode_ != nullptr && this->config_ != nullptr && this->expiredTime_ != nullptr && this->gmtCreateTime_ != nullptr && this->gmtModifiedTime_ != nullptr
        && this->instanceId_ != nullptr && this->operatingTool_ != nullptr && this->regionId_ != nullptr && this->status_ != nullptr && this->type_ != nullptr; };
    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline ListInstancesResponseBodyInstances& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string commodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline ListInstancesResponseBodyInstances& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline const Models::ListInstancesResponseBodyInstancesConfig & config() const { DARABONBA_PTR_GET_CONST(config_, Models::ListInstancesResponseBodyInstancesConfig) };
    inline Models::ListInstancesResponseBodyInstancesConfig config() { DARABONBA_PTR_GET(config_, Models::ListInstancesResponseBodyInstancesConfig) };
    inline ListInstancesResponseBodyInstances& setConfig(const Models::ListInstancesResponseBodyInstancesConfig & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
    inline ListInstancesResponseBodyInstances& setConfig(Models::ListInstancesResponseBodyInstancesConfig && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


    // expiredTime Field Functions 
    bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
    void deleteExpiredTime() { this->expiredTime_ = nullptr;};
    inline string expiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
    inline ListInstancesResponseBodyInstances& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string gmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline ListInstancesResponseBodyInstances& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // gmtModifiedTime Field Functions 
    bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
    void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
    inline string gmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
    inline ListInstancesResponseBodyInstances& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListInstancesResponseBodyInstances& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // operatingTool Field Functions 
    bool hasOperatingTool() const { return this->operatingTool_ != nullptr;};
    void deleteOperatingTool() { this->operatingTool_ = nullptr;};
    inline const Models::ListInstancesResponseBodyInstancesOperatingTool & operatingTool() const { DARABONBA_PTR_GET_CONST(operatingTool_, Models::ListInstancesResponseBodyInstancesOperatingTool) };
    inline Models::ListInstancesResponseBodyInstancesOperatingTool operatingTool() { DARABONBA_PTR_GET(operatingTool_, Models::ListInstancesResponseBodyInstancesOperatingTool) };
    inline ListInstancesResponseBodyInstances& setOperatingTool(const Models::ListInstancesResponseBodyInstancesOperatingTool & operatingTool) { DARABONBA_PTR_SET_VALUE(operatingTool_, operatingTool) };
    inline ListInstancesResponseBodyInstances& setOperatingTool(Models::ListInstancesResponseBodyInstancesOperatingTool && operatingTool) { DARABONBA_PTR_SET_RVALUE(operatingTool_, operatingTool) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListInstancesResponseBodyInstances& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListInstancesResponseBodyInstances& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListInstancesResponseBodyInstances& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> chargeType_ = nullptr;
    std::shared_ptr<string> commodityCode_ = nullptr;
    std::shared_ptr<Models::ListInstancesResponseBodyInstancesConfig> config_ = nullptr;
    std::shared_ptr<string> expiredTime_ = nullptr;
    std::shared_ptr<string> gmtCreateTime_ = nullptr;
    std::shared_ptr<string> gmtModifiedTime_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<Models::ListInstancesResponseBodyInstancesOperatingTool> operatingTool_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
