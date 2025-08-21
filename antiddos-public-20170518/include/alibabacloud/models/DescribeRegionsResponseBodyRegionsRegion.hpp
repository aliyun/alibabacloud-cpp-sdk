// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREGIONSRESPONSEBODYREGIONSREGION_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREGIONSRESPONSEBODYREGIONSREGION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AntiddosPublic20170518
{
namespace Models
{
  class DescribeRegionsResponseBodyRegionsRegion : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRegionsResponseBodyRegionsRegion& obj) { 
      DARABONBA_PTR_TO_JSON(RegionEnName, regionEnName_);
      DARABONBA_PTR_TO_JSON(RegionName, regionName_);
      DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_TO_JSON(RegionNoAlias, regionNoAlias_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRegionsResponseBodyRegionsRegion& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionEnName, regionEnName_);
      DARABONBA_PTR_FROM_JSON(RegionName, regionName_);
      DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_FROM_JSON(RegionNoAlias, regionNoAlias_);
    };
    DescribeRegionsResponseBodyRegionsRegion() = default ;
    DescribeRegionsResponseBodyRegionsRegion(const DescribeRegionsResponseBodyRegionsRegion &) = default ;
    DescribeRegionsResponseBodyRegionsRegion(DescribeRegionsResponseBodyRegionsRegion &&) = default ;
    DescribeRegionsResponseBodyRegionsRegion(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRegionsResponseBodyRegionsRegion() = default ;
    DescribeRegionsResponseBodyRegionsRegion& operator=(const DescribeRegionsResponseBodyRegionsRegion &) = default ;
    DescribeRegionsResponseBodyRegionsRegion& operator=(DescribeRegionsResponseBodyRegionsRegion &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->regionEnName_ != nullptr
        && this->regionName_ != nullptr && this->regionNo_ != nullptr && this->regionNoAlias_ != nullptr; };
    // regionEnName Field Functions 
    bool hasRegionEnName() const { return this->regionEnName_ != nullptr;};
    void deleteRegionEnName() { this->regionEnName_ = nullptr;};
    inline string regionEnName() const { DARABONBA_PTR_GET_DEFAULT(regionEnName_, "") };
    inline DescribeRegionsResponseBodyRegionsRegion& setRegionEnName(string regionEnName) { DARABONBA_PTR_SET_VALUE(regionEnName_, regionEnName) };


    // regionName Field Functions 
    bool hasRegionName() const { return this->regionName_ != nullptr;};
    void deleteRegionName() { this->regionName_ = nullptr;};
    inline string regionName() const { DARABONBA_PTR_GET_DEFAULT(regionName_, "") };
    inline DescribeRegionsResponseBodyRegionsRegion& setRegionName(string regionName) { DARABONBA_PTR_SET_VALUE(regionName_, regionName) };


    // regionNo Field Functions 
    bool hasRegionNo() const { return this->regionNo_ != nullptr;};
    void deleteRegionNo() { this->regionNo_ = nullptr;};
    inline string regionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
    inline DescribeRegionsResponseBodyRegionsRegion& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


    // regionNoAlias Field Functions 
    bool hasRegionNoAlias() const { return this->regionNoAlias_ != nullptr;};
    void deleteRegionNoAlias() { this->regionNoAlias_ = nullptr;};
    inline string regionNoAlias() const { DARABONBA_PTR_GET_DEFAULT(regionNoAlias_, "") };
    inline DescribeRegionsResponseBodyRegionsRegion& setRegionNoAlias(string regionNoAlias) { DARABONBA_PTR_SET_VALUE(regionNoAlias_, regionNoAlias) };


  protected:
    // The English name of the region.
    std::shared_ptr<string> regionEnName_ = nullptr;
    // The Chinese name of the region.
    std::shared_ptr<string> regionName_ = nullptr;
    // The code of the region.
    std::shared_ptr<string> regionNo_ = nullptr;
    // The ID of the region.
    std::shared_ptr<string> regionNoAlias_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AntiddosPublic20170518
#endif
