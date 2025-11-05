// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEENTERPRISESNAPSHOTPOLICYREQUESTCROSSREGIONCOPYINFO_HPP_
#define ALIBABACLOUD_MODELS_UPDATEENTERPRISESNAPSHOTPOLICYREQUESTCROSSREGIONCOPYINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfoRegions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class UpdateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(Regions, regions_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(Regions, regions_);
    };
    UpdateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfo() = default ;
    UpdateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfo(const UpdateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfo &) = default ;
    UpdateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfo(UpdateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfo &&) = default ;
    UpdateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfo() = default ;
    UpdateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfo& operator=(const UpdateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfo &) = default ;
    UpdateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfo& operator=(UpdateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enabled_ == nullptr
        && return this->regions_ == nullptr; };
    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline UpdateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfo& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // regions Field Functions 
    bool hasRegions() const { return this->regions_ != nullptr;};
    void deleteRegions() { this->regions_ = nullptr;};
    inline const vector<Models::UpdateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfoRegions> & regions() const { DARABONBA_PTR_GET_CONST(regions_, vector<Models::UpdateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfoRegions>) };
    inline vector<Models::UpdateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfoRegions> regions() { DARABONBA_PTR_GET(regions_, vector<Models::UpdateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfoRegions>) };
    inline UpdateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfo& setRegions(const vector<Models::UpdateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfoRegions> & regions) { DARABONBA_PTR_SET_VALUE(regions_, regions) };
    inline UpdateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfo& setRegions(vector<Models::UpdateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfoRegions> && regions) { DARABONBA_PTR_SET_RVALUE(regions_, regions) };


  protected:
    // Whether cross-region replication is enabled. The range of values:
    // 
    // - true
    // 
    // - false
    std::shared_ptr<bool> enabled_ = nullptr;
    // Destination region information.
    std::shared_ptr<vector<Models::UpdateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfoRegions>> regions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
