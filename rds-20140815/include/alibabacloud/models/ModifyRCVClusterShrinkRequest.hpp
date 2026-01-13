// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYRCVCLUSTERSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYRCVCLUSTERSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class ModifyRCVClusterShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyRCVClusterShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SupportDiskPerformanceLevel, supportDiskPerformanceLevelShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyRCVClusterShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SupportDiskPerformanceLevel, supportDiskPerformanceLevelShrink_);
    };
    ModifyRCVClusterShrinkRequest() = default ;
    ModifyRCVClusterShrinkRequest(const ModifyRCVClusterShrinkRequest &) = default ;
    ModifyRCVClusterShrinkRequest(ModifyRCVClusterShrinkRequest &&) = default ;
    ModifyRCVClusterShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyRCVClusterShrinkRequest() = default ;
    ModifyRCVClusterShrinkRequest& operator=(const ModifyRCVClusterShrinkRequest &) = default ;
    ModifyRCVClusterShrinkRequest& operator=(ModifyRCVClusterShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->regionId_ == nullptr && this->supportDiskPerformanceLevelShrink_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ModifyRCVClusterShrinkRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyRCVClusterShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // supportDiskPerformanceLevelShrink Field Functions 
    bool hasSupportDiskPerformanceLevelShrink() const { return this->supportDiskPerformanceLevelShrink_ != nullptr;};
    void deleteSupportDiskPerformanceLevelShrink() { this->supportDiskPerformanceLevelShrink_ = nullptr;};
    inline string getSupportDiskPerformanceLevelShrink() const { DARABONBA_PTR_GET_DEFAULT(supportDiskPerformanceLevelShrink_, "") };
    inline ModifyRCVClusterShrinkRequest& setSupportDiskPerformanceLevelShrink(string supportDiskPerformanceLevelShrink) { DARABONBA_PTR_SET_VALUE(supportDiskPerformanceLevelShrink_, supportDiskPerformanceLevelShrink) };


  protected:
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> supportDiskPerformanceLevelShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
