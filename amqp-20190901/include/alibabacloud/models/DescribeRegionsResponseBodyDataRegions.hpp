// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREGIONSRESPONSEBODYDATAREGIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREGIONSRESPONSEBODYDATAREGIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class DescribeRegionsResponseBodyDataRegions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRegionsResponseBodyDataRegions& obj) { 
      DARABONBA_PTR_TO_JSON(RegionCnName, regionCnName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RegionName, regionName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRegionsResponseBodyDataRegions& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionCnName, regionCnName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RegionName, regionName_);
    };
    DescribeRegionsResponseBodyDataRegions() = default ;
    DescribeRegionsResponseBodyDataRegions(const DescribeRegionsResponseBodyDataRegions &) = default ;
    DescribeRegionsResponseBodyDataRegions(DescribeRegionsResponseBodyDataRegions &&) = default ;
    DescribeRegionsResponseBodyDataRegions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRegionsResponseBodyDataRegions() = default ;
    DescribeRegionsResponseBodyDataRegions& operator=(const DescribeRegionsResponseBodyDataRegions &) = default ;
    DescribeRegionsResponseBodyDataRegions& operator=(DescribeRegionsResponseBodyDataRegions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionCnName_ == nullptr
        && return this->regionId_ == nullptr && return this->regionName_ == nullptr; };
    // regionCnName Field Functions 
    bool hasRegionCnName() const { return this->regionCnName_ != nullptr;};
    void deleteRegionCnName() { this->regionCnName_ = nullptr;};
    inline string regionCnName() const { DARABONBA_PTR_GET_DEFAULT(regionCnName_, "") };
    inline DescribeRegionsResponseBodyDataRegions& setRegionCnName(string regionCnName) { DARABONBA_PTR_SET_VALUE(regionCnName_, regionCnName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeRegionsResponseBodyDataRegions& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // regionName Field Functions 
    bool hasRegionName() const { return this->regionName_ != nullptr;};
    void deleteRegionName() { this->regionName_ = nullptr;};
    inline string regionName() const { DARABONBA_PTR_GET_DEFAULT(regionName_, "") };
    inline DescribeRegionsResponseBodyDataRegions& setRegionName(string regionName) { DARABONBA_PTR_SET_VALUE(regionName_, regionName) };


  protected:
    std::shared_ptr<string> regionCnName_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> regionName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
