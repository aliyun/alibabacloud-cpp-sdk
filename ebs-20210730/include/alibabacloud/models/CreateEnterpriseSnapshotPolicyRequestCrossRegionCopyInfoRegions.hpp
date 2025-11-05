// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEENTERPRISESNAPSHOTPOLICYREQUESTCROSSREGIONCOPYINFOREGIONS_HPP_
#define ALIBABACLOUD_MODELS_CREATEENTERPRISESNAPSHOTPOLICYREQUESTCROSSREGIONCOPYINFOREGIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class CreateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfoRegions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfoRegions& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RetainDays, retainDays_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfoRegions& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RetainDays, retainDays_);
    };
    CreateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfoRegions() = default ;
    CreateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfoRegions(const CreateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfoRegions &) = default ;
    CreateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfoRegions(CreateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfoRegions &&) = default ;
    CreateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfoRegions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfoRegions() = default ;
    CreateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfoRegions& operator=(const CreateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfoRegions &) = default ;
    CreateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfoRegions& operator=(CreateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfoRegions &&) = default ;
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
    inline CreateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfoRegions& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // retainDays Field Functions 
    bool hasRetainDays() const { return this->retainDays_ != nullptr;};
    void deleteRetainDays() { this->retainDays_ = nullptr;};
    inline int32_t retainDays() const { DARABONBA_PTR_GET_DEFAULT(retainDays_, 0) };
    inline CreateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfoRegions& setRetainDays(int32_t retainDays) { DARABONBA_PTR_SET_VALUE(retainDays_, retainDays) };


  protected:
    // The region ID of the destination. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) operation to query the most recent region list.
    std::shared_ptr<string> regionId_ = nullptr;
    // Number of days to retain the destination snapshot. The range of values is greater than 1.
    std::shared_ptr<int32_t> retainDays_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
