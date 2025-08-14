// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGEOGRAPHICREGIONMEMBERSHIPRESPONSEBODYREGIONIDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGEOGRAPHICREGIONMEMBERSHIPRESPONSEBODYREGIONIDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeGeographicRegionMembershipResponseBodyRegionIdsRegionId.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribeGeographicRegionMembershipResponseBodyRegionIds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGeographicRegionMembershipResponseBodyRegionIds& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGeographicRegionMembershipResponseBodyRegionIds& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeGeographicRegionMembershipResponseBodyRegionIds() = default ;
    DescribeGeographicRegionMembershipResponseBodyRegionIds(const DescribeGeographicRegionMembershipResponseBodyRegionIds &) = default ;
    DescribeGeographicRegionMembershipResponseBodyRegionIds(DescribeGeographicRegionMembershipResponseBodyRegionIds &&) = default ;
    DescribeGeographicRegionMembershipResponseBodyRegionIds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGeographicRegionMembershipResponseBodyRegionIds() = default ;
    DescribeGeographicRegionMembershipResponseBodyRegionIds& operator=(const DescribeGeographicRegionMembershipResponseBodyRegionIds &) = default ;
    DescribeGeographicRegionMembershipResponseBodyRegionIds& operator=(DescribeGeographicRegionMembershipResponseBodyRegionIds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->regionId_ != nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline const vector<Models::DescribeGeographicRegionMembershipResponseBodyRegionIdsRegionId> & regionId() const { DARABONBA_PTR_GET_CONST(regionId_, vector<Models::DescribeGeographicRegionMembershipResponseBodyRegionIdsRegionId>) };
    inline vector<Models::DescribeGeographicRegionMembershipResponseBodyRegionIdsRegionId> regionId() { DARABONBA_PTR_GET(regionId_, vector<Models::DescribeGeographicRegionMembershipResponseBodyRegionIdsRegionId>) };
    inline DescribeGeographicRegionMembershipResponseBodyRegionIds& setRegionId(const vector<Models::DescribeGeographicRegionMembershipResponseBodyRegionIdsRegionId> & regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };
    inline DescribeGeographicRegionMembershipResponseBodyRegionIds& setRegionId(vector<Models::DescribeGeographicRegionMembershipResponseBodyRegionIdsRegionId> && regionId) { DARABONBA_PTR_SET_RVALUE(regionId_, regionId) };


  protected:
    std::shared_ptr<vector<Models::DescribeGeographicRegionMembershipResponseBodyRegionIdsRegionId>> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
