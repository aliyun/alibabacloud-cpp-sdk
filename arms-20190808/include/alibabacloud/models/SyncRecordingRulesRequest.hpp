// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SYNCRECORDINGRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SYNCRECORDINGRULESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class SyncRecordingRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SyncRecordingRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TargetClusters, targetClusters_);
    };
    friend void from_json(const Darabonba::Json& j, SyncRecordingRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TargetClusters, targetClusters_);
    };
    SyncRecordingRulesRequest() = default ;
    SyncRecordingRulesRequest(const SyncRecordingRulesRequest &) = default ;
    SyncRecordingRulesRequest(SyncRecordingRulesRequest &&) = default ;
    SyncRecordingRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SyncRecordingRulesRequest() = default ;
    SyncRecordingRulesRequest& operator=(const SyncRecordingRulesRequest &) = default ;
    SyncRecordingRulesRequest& operator=(SyncRecordingRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterId_ != nullptr
        && this->regionId_ != nullptr && this->targetClusters_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline SyncRecordingRulesRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SyncRecordingRulesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // targetClusters Field Functions 
    bool hasTargetClusters() const { return this->targetClusters_ != nullptr;};
    void deleteTargetClusters() { this->targetClusters_ = nullptr;};
    inline string targetClusters() const { DARABONBA_PTR_GET_DEFAULT(targetClusters_, "") };
    inline SyncRecordingRulesRequest& setTargetClusters(string targetClusters) { DARABONBA_PTR_SET_VALUE(targetClusters_, targetClusters) };


  protected:
    // The ID of the cluster whose aggregation rule you want to synchronize.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The ID of the region. The destination region can be the same as the source region.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The IDs of clusters to which you want to synchronize the aggregation rule.
    // 
    // This parameter is required.
    std::shared_ptr<string> targetClusters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
