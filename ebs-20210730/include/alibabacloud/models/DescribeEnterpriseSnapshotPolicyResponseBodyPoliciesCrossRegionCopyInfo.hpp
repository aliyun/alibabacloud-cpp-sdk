// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENTERPRISESNAPSHOTPOLICYRESPONSEBODYPOLICIESCROSSREGIONCOPYINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENTERPRISESNAPSHOTPOLICYRESPONSEBODYPOLICIESCROSSREGIONCOPYINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesCrossRegionCopyInfoRegions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesCrossRegionCopyInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesCrossRegionCopyInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(Regions, regions_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesCrossRegionCopyInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(Regions, regions_);
    };
    DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesCrossRegionCopyInfo() = default ;
    DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesCrossRegionCopyInfo(const DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesCrossRegionCopyInfo &) = default ;
    DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesCrossRegionCopyInfo(DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesCrossRegionCopyInfo &&) = default ;
    DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesCrossRegionCopyInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesCrossRegionCopyInfo() = default ;
    DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesCrossRegionCopyInfo& operator=(const DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesCrossRegionCopyInfo &) = default ;
    DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesCrossRegionCopyInfo& operator=(DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesCrossRegionCopyInfo &&) = default ;
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
    inline DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesCrossRegionCopyInfo& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // regions Field Functions 
    bool hasRegions() const { return this->regions_ != nullptr;};
    void deleteRegions() { this->regions_ = nullptr;};
    inline const vector<Models::DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesCrossRegionCopyInfoRegions> & regions() const { DARABONBA_PTR_GET_CONST(regions_, vector<Models::DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesCrossRegionCopyInfoRegions>) };
    inline vector<Models::DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesCrossRegionCopyInfoRegions> regions() { DARABONBA_PTR_GET(regions_, vector<Models::DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesCrossRegionCopyInfoRegions>) };
    inline DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesCrossRegionCopyInfo& setRegions(const vector<Models::DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesCrossRegionCopyInfoRegions> & regions) { DARABONBA_PTR_SET_VALUE(regions_, regions) };
    inline DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesCrossRegionCopyInfo& setRegions(vector<Models::DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesCrossRegionCopyInfoRegions> && regions) { DARABONBA_PTR_SET_RVALUE(regions_, regions) };


  protected:
    // Indicates whether the cross-region replication feature is enabled.
    std::shared_ptr<bool> enabled_ = nullptr;
    // The destination regions that store snapshot copies.
    std::shared_ptr<vector<Models::DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesCrossRegionCopyInfoRegions>> regions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
