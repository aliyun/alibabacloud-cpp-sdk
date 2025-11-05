// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEENTERPRISESNAPSHOTPOLICYREQUESTCROSSREGIONCOPYINFOREGIONS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEENTERPRISESNAPSHOTPOLICYREQUESTCROSSREGIONCOPYINFOREGIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class UpdateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfoRegions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfoRegions& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RetainDays, retainDays_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfoRegions& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RetainDays, retainDays_);
    };
    UpdateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfoRegions() = default ;
    UpdateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfoRegions(const UpdateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfoRegions &) = default ;
    UpdateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfoRegions(UpdateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfoRegions &&) = default ;
    UpdateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfoRegions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfoRegions() = default ;
    UpdateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfoRegions& operator=(const UpdateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfoRegions &) = default ;
    UpdateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfoRegions& operator=(UpdateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfoRegions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr
        && return this->retainDays_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfoRegions& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // retainDays Field Functions 
    bool hasRetainDays() const { return this->retainDays_ != nullptr;};
    void deleteRetainDays() { this->retainDays_ = nullptr;};
    inline int32_t retainDays() const { DARABONBA_PTR_GET_DEFAULT(retainDays_, 0) };
    inline UpdateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfoRegions& setRetainDays(int32_t retainDays) { DARABONBA_PTR_SET_VALUE(retainDays_, retainDays) };


  protected:
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/354276.html) operation to query the most recent list of regions in which async replication is supported.
    std::shared_ptr<string> regionId_ = nullptr;
    // Number of days to retain the destination snapshot. The range of values is greater than 1.
    std::shared_ptr<int32_t> retainDays_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
