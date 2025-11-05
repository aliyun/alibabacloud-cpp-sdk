// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEENTERPRISESNAPSHOTPOLICYREQUESTCROSSREGIONCOPYINFO_HPP_
#define ALIBABACLOUD_MODELS_CREATEENTERPRISESNAPSHOTPOLICYREQUESTCROSSREGIONCOPYINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfoRegions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class CreateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(Regions, regions_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(Regions, regions_);
    };
    CreateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfo() = default ;
    CreateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfo(const CreateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfo &) = default ;
    CreateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfo(CreateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfo &&) = default ;
    CreateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfo() = default ;
    CreateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfo& operator=(const CreateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfo &) = default ;
    CreateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfo& operator=(CreateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfo &&) = default ;
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
    inline CreateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfo& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // regions Field Functions 
    bool hasRegions() const { return this->regions_ != nullptr;};
    void deleteRegions() { this->regions_ = nullptr;};
    inline const vector<Models::CreateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfoRegions> & regions() const { DARABONBA_PTR_GET_CONST(regions_, vector<Models::CreateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfoRegions>) };
    inline vector<Models::CreateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfoRegions> regions() { DARABONBA_PTR_GET(regions_, vector<Models::CreateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfoRegions>) };
    inline CreateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfo& setRegions(const vector<Models::CreateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfoRegions> & regions) { DARABONBA_PTR_SET_VALUE(regions_, regions) };
    inline CreateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfo& setRegions(vector<Models::CreateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfoRegions> && regions) { DARABONBA_PTR_SET_RVALUE(regions_, regions) };


  protected:
    // Whether cross-region replication is enabled. The range of values:
    // 
    // - true
    // 
    // - false
    std::shared_ptr<bool> enabled_ = nullptr;
    // The list of destination regions.
    std::shared_ptr<vector<Models::CreateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfoRegions>> regions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
