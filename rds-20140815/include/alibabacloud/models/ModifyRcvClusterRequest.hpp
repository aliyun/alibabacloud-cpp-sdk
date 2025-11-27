// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYRCVCLUSTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYRCVCLUSTERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class ModifyRCVClusterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyRCVClusterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SupportDiskPerformanceLevel, supportDiskPerformanceLevel_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyRCVClusterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SupportDiskPerformanceLevel, supportDiskPerformanceLevel_);
    };
    ModifyRCVClusterRequest() = default ;
    ModifyRCVClusterRequest(const ModifyRCVClusterRequest &) = default ;
    ModifyRCVClusterRequest(ModifyRCVClusterRequest &&) = default ;
    ModifyRCVClusterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyRCVClusterRequest() = default ;
    ModifyRCVClusterRequest& operator=(const ModifyRCVClusterRequest &) = default ;
    ModifyRCVClusterRequest& operator=(ModifyRCVClusterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->regionId_ == nullptr && return this->supportDiskPerformanceLevel_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ModifyRCVClusterRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyRCVClusterRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // supportDiskPerformanceLevel Field Functions 
    bool hasSupportDiskPerformanceLevel() const { return this->supportDiskPerformanceLevel_ != nullptr;};
    void deleteSupportDiskPerformanceLevel() { this->supportDiskPerformanceLevel_ = nullptr;};
    inline const vector<string> & supportDiskPerformanceLevel() const { DARABONBA_PTR_GET_CONST(supportDiskPerformanceLevel_, vector<string>) };
    inline vector<string> supportDiskPerformanceLevel() { DARABONBA_PTR_GET(supportDiskPerformanceLevel_, vector<string>) };
    inline ModifyRCVClusterRequest& setSupportDiskPerformanceLevel(const vector<string> & supportDiskPerformanceLevel) { DARABONBA_PTR_SET_VALUE(supportDiskPerformanceLevel_, supportDiskPerformanceLevel) };
    inline ModifyRCVClusterRequest& setSupportDiskPerformanceLevel(vector<string> && supportDiskPerformanceLevel) { DARABONBA_PTR_SET_RVALUE(supportDiskPerformanceLevel_, supportDiskPerformanceLevel) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<vector<string>> supportDiskPerformanceLevel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
