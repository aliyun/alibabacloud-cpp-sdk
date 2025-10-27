// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREGIONSMIXEDRESPONSEBODYREGIONSREGION_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREGIONSMIXEDRESPONSEBODYREGIONSREGION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeRegionsMixedResponseBodyRegionsRegion : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRegionsMixedResponseBodyRegionsRegion& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRegionsMixedResponseBodyRegionsRegion& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    DescribeRegionsMixedResponseBodyRegionsRegion() = default ;
    DescribeRegionsMixedResponseBodyRegionsRegion(const DescribeRegionsMixedResponseBodyRegionsRegion &) = default ;
    DescribeRegionsMixedResponseBodyRegionsRegion(DescribeRegionsMixedResponseBodyRegionsRegion &&) = default ;
    DescribeRegionsMixedResponseBodyRegionsRegion(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRegionsMixedResponseBodyRegionsRegion() = default ;
    DescribeRegionsMixedResponseBodyRegionsRegion& operator=(const DescribeRegionsMixedResponseBodyRegionsRegion &) = default ;
    DescribeRegionsMixedResponseBodyRegionsRegion& operator=(DescribeRegionsMixedResponseBodyRegionsRegion &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr
        && return this->version_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeRegionsMixedResponseBodyRegionsRegion& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline DescribeRegionsMixedResponseBodyRegionsRegion& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The version of the cluster.
    // 
    // Valid values:
    // 
    // *   2.0
    // *   3.0
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
