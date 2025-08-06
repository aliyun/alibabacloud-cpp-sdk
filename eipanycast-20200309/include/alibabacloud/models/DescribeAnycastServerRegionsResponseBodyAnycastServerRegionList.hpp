// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEANYCASTSERVERREGIONSRESPONSEBODYANYCASTSERVERREGIONLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEANYCASTSERVERREGIONSRESPONSEBODYANYCASTSERVERREGIONLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eipanycast20200309
{
namespace Models
{
  class DescribeAnycastServerRegionsResponseBodyAnycastServerRegionList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAnycastServerRegionsResponseBodyAnycastServerRegionList& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RegionName, regionName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAnycastServerRegionsResponseBodyAnycastServerRegionList& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RegionName, regionName_);
    };
    DescribeAnycastServerRegionsResponseBodyAnycastServerRegionList() = default ;
    DescribeAnycastServerRegionsResponseBodyAnycastServerRegionList(const DescribeAnycastServerRegionsResponseBodyAnycastServerRegionList &) = default ;
    DescribeAnycastServerRegionsResponseBodyAnycastServerRegionList(DescribeAnycastServerRegionsResponseBodyAnycastServerRegionList &&) = default ;
    DescribeAnycastServerRegionsResponseBodyAnycastServerRegionList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAnycastServerRegionsResponseBodyAnycastServerRegionList() = default ;
    DescribeAnycastServerRegionsResponseBodyAnycastServerRegionList& operator=(const DescribeAnycastServerRegionsResponseBodyAnycastServerRegionList &) = default ;
    DescribeAnycastServerRegionsResponseBodyAnycastServerRegionList& operator=(DescribeAnycastServerRegionsResponseBodyAnycastServerRegionList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->regionId_ != nullptr
        && this->regionName_ != nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeAnycastServerRegionsResponseBodyAnycastServerRegionList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // regionName Field Functions 
    bool hasRegionName() const { return this->regionName_ != nullptr;};
    void deleteRegionName() { this->regionName_ = nullptr;};
    inline string regionName() const { DARABONBA_PTR_GET_DEFAULT(regionName_, "") };
    inline DescribeAnycastServerRegionsResponseBodyAnycastServerRegionList& setRegionName(string regionName) { DARABONBA_PTR_SET_VALUE(regionName_, regionName) };


  protected:
    // The ID of the region.
    std::shared_ptr<string> regionId_ = nullptr;
    // The name of the region.
    std::shared_ptr<string> regionName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eipanycast20200309
#endif
