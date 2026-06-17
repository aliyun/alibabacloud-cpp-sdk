// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDBCLUSTERARCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDBCLUSTERARCHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class ModifyDBClusterArchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDBClusterArchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoUseCoupon, autoUseCoupon_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(HotStandbyCluster, hotStandbyCluster_);
      DARABONBA_PTR_TO_JSON(PromotionCode, promotionCode_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StandbyAZ, standbyAZ_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDBClusterArchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoUseCoupon, autoUseCoupon_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(HotStandbyCluster, hotStandbyCluster_);
      DARABONBA_PTR_FROM_JSON(PromotionCode, promotionCode_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StandbyAZ, standbyAZ_);
    };
    ModifyDBClusterArchRequest() = default ;
    ModifyDBClusterArchRequest(const ModifyDBClusterArchRequest &) = default ;
    ModifyDBClusterArchRequest(ModifyDBClusterArchRequest &&) = default ;
    ModifyDBClusterArchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDBClusterArchRequest() = default ;
    ModifyDBClusterArchRequest& operator=(const ModifyDBClusterArchRequest &) = default ;
    ModifyDBClusterArchRequest& operator=(ModifyDBClusterArchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoUseCoupon_ == nullptr
        && this->DBClusterId_ == nullptr && this->hotStandbyCluster_ == nullptr && this->promotionCode_ == nullptr && this->regionId_ == nullptr && this->standbyAZ_ == nullptr; };
    // autoUseCoupon Field Functions 
    bool hasAutoUseCoupon() const { return this->autoUseCoupon_ != nullptr;};
    void deleteAutoUseCoupon() { this->autoUseCoupon_ = nullptr;};
    inline bool getAutoUseCoupon() const { DARABONBA_PTR_GET_DEFAULT(autoUseCoupon_, false) };
    inline ModifyDBClusterArchRequest& setAutoUseCoupon(bool autoUseCoupon) { DARABONBA_PTR_SET_VALUE(autoUseCoupon_, autoUseCoupon) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ModifyDBClusterArchRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // hotStandbyCluster Field Functions 
    bool hasHotStandbyCluster() const { return this->hotStandbyCluster_ != nullptr;};
    void deleteHotStandbyCluster() { this->hotStandbyCluster_ = nullptr;};
    inline string getHotStandbyCluster() const { DARABONBA_PTR_GET_DEFAULT(hotStandbyCluster_, "") };
    inline ModifyDBClusterArchRequest& setHotStandbyCluster(string hotStandbyCluster) { DARABONBA_PTR_SET_VALUE(hotStandbyCluster_, hotStandbyCluster) };


    // promotionCode Field Functions 
    bool hasPromotionCode() const { return this->promotionCode_ != nullptr;};
    void deletePromotionCode() { this->promotionCode_ = nullptr;};
    inline string getPromotionCode() const { DARABONBA_PTR_GET_DEFAULT(promotionCode_, "") };
    inline ModifyDBClusterArchRequest& setPromotionCode(string promotionCode) { DARABONBA_PTR_SET_VALUE(promotionCode_, promotionCode) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyDBClusterArchRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // standbyAZ Field Functions 
    bool hasStandbyAZ() const { return this->standbyAZ_ != nullptr;};
    void deleteStandbyAZ() { this->standbyAZ_ = nullptr;};
    inline string getStandbyAZ() const { DARABONBA_PTR_GET_DEFAULT(standbyAZ_, "") };
    inline ModifyDBClusterArchRequest& setStandbyAZ(string standbyAZ) { DARABONBA_PTR_SET_VALUE(standbyAZ_, standbyAZ) };


  protected:
    shared_ptr<bool> autoUseCoupon_ {};
    // The cluster ID.
    shared_ptr<string> DBClusterId_ {};
    // Specifies whether to enable a hot standby cluster. Valid values:
    // 
    // - **on**: Enables a hot standby cluster.
    // 
    // - **equal**: Enables a peer cluster.
    shared_ptr<string> hotStandbyCluster_ {};
    shared_ptr<string> promotionCode_ {};
    // The region ID.
    // 
    // > For more information, see [DescribeRegions](https://help.aliyun.com/document_detail/98041.html).
    shared_ptr<string> regionId_ {};
    // The zone for the hot standby storage cluster. Valid values:
    // 
    // - **auto** (default): The system automatically selects a zone.
    // 
    // > The default value is valid only when \\`HotStandbyCluster\\` is set to \\`on\\`. A specific zone is required when \\`HotStandbyCluster\\` is set to \\`equal\\`. For more information about zones, see [DescribeZones](https://help.aliyun.com/document_detail/98041.html).
    shared_ptr<string> standbyAZ_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
