// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENDISABLESCALINGRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENDISABLESCALINGRULESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Selectdb20230522
{
namespace Models
{
  class EnDisableScalingRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnDisableScalingRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(DbInstanceId, dbInstanceId_);
      DARABONBA_PTR_TO_JSON(Product, product_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(ScalingRulesEnable, scalingRulesEnable_);
    };
    friend void from_json(const Darabonba::Json& j, EnDisableScalingRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(DbInstanceId, dbInstanceId_);
      DARABONBA_PTR_FROM_JSON(Product, product_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(ScalingRulesEnable, scalingRulesEnable_);
    };
    EnDisableScalingRulesRequest() = default ;
    EnDisableScalingRulesRequest(const EnDisableScalingRulesRequest &) = default ;
    EnDisableScalingRulesRequest(EnDisableScalingRulesRequest &&) = default ;
    EnDisableScalingRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnDisableScalingRulesRequest() = default ;
    EnDisableScalingRulesRequest& operator=(const EnDisableScalingRulesRequest &) = default ;
    EnDisableScalingRulesRequest& operator=(EnDisableScalingRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->dbInstanceId_ == nullptr && this->product_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerId_ == nullptr && this->scalingRulesEnable_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline EnDisableScalingRulesRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // dbInstanceId Field Functions 
    bool hasDbInstanceId() const { return this->dbInstanceId_ != nullptr;};
    void deleteDbInstanceId() { this->dbInstanceId_ = nullptr;};
    inline string getDbInstanceId() const { DARABONBA_PTR_GET_DEFAULT(dbInstanceId_, "") };
    inline EnDisableScalingRulesRequest& setDbInstanceId(string dbInstanceId) { DARABONBA_PTR_SET_VALUE(dbInstanceId_, dbInstanceId) };


    // product Field Functions 
    bool hasProduct() const { return this->product_ != nullptr;};
    void deleteProduct() { this->product_ = nullptr;};
    inline string getProduct() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
    inline EnDisableScalingRulesRequest& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline EnDisableScalingRulesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline EnDisableScalingRulesRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // scalingRulesEnable Field Functions 
    bool hasScalingRulesEnable() const { return this->scalingRulesEnable_ != nullptr;};
    void deleteScalingRulesEnable() { this->scalingRulesEnable_ = nullptr;};
    inline bool getScalingRulesEnable() const { DARABONBA_PTR_GET_DEFAULT(scalingRulesEnable_, false) };
    inline EnDisableScalingRulesRequest& setScalingRulesEnable(bool scalingRulesEnable) { DARABONBA_PTR_SET_VALUE(scalingRulesEnable_, scalingRulesEnable) };


  protected:
    // The cluster ID.
    // 
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> dbInstanceId_ {};
    // The cloud service.
    shared_ptr<string> product_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // Specifies whether to enable the scheduled scaling policy.
    // 
    // Valid values:
    // 
    // *   true
    // *   false
    // 
    // This parameter is required.
    shared_ptr<bool> scalingRulesEnable_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Selectdb20230522
#endif
