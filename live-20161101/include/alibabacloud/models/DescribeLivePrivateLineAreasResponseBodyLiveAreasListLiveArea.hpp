// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEPRIVATELINEAREASRESPONSEBODYLIVEAREASLISTLIVEAREA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEPRIVATELINEAREASRESPONSEBODYLIVEAREASLISTLIVEAREA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLivePrivateLineAreasResponseBodyLiveAreasListLiveAreaRegions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLivePrivateLineAreasResponseBodyLiveAreasListLiveArea : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLivePrivateLineAreasResponseBodyLiveAreasListLiveArea& obj) { 
      DARABONBA_PTR_TO_JSON(RegionType, regionType_);
      DARABONBA_PTR_TO_JSON(Regions, regions_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLivePrivateLineAreasResponseBodyLiveAreasListLiveArea& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionType, regionType_);
      DARABONBA_PTR_FROM_JSON(Regions, regions_);
    };
    DescribeLivePrivateLineAreasResponseBodyLiveAreasListLiveArea() = default ;
    DescribeLivePrivateLineAreasResponseBodyLiveAreasListLiveArea(const DescribeLivePrivateLineAreasResponseBodyLiveAreasListLiveArea &) = default ;
    DescribeLivePrivateLineAreasResponseBodyLiveAreasListLiveArea(DescribeLivePrivateLineAreasResponseBodyLiveAreasListLiveArea &&) = default ;
    DescribeLivePrivateLineAreasResponseBodyLiveAreasListLiveArea(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLivePrivateLineAreasResponseBodyLiveAreasListLiveArea() = default ;
    DescribeLivePrivateLineAreasResponseBodyLiveAreasListLiveArea& operator=(const DescribeLivePrivateLineAreasResponseBodyLiveAreasListLiveArea &) = default ;
    DescribeLivePrivateLineAreasResponseBodyLiveAreasListLiveArea& operator=(DescribeLivePrivateLineAreasResponseBodyLiveAreasListLiveArea &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionType_ == nullptr
        && return this->regions_ == nullptr; };
    // regionType Field Functions 
    bool hasRegionType() const { return this->regionType_ != nullptr;};
    void deleteRegionType() { this->regionType_ = nullptr;};
    inline string regionType() const { DARABONBA_PTR_GET_DEFAULT(regionType_, "") };
    inline DescribeLivePrivateLineAreasResponseBodyLiveAreasListLiveArea& setRegionType(string regionType) { DARABONBA_PTR_SET_VALUE(regionType_, regionType) };


    // regions Field Functions 
    bool hasRegions() const { return this->regions_ != nullptr;};
    void deleteRegions() { this->regions_ = nullptr;};
    inline const Models::DescribeLivePrivateLineAreasResponseBodyLiveAreasListLiveAreaRegions & regions() const { DARABONBA_PTR_GET_CONST(regions_, Models::DescribeLivePrivateLineAreasResponseBodyLiveAreasListLiveAreaRegions) };
    inline Models::DescribeLivePrivateLineAreasResponseBodyLiveAreasListLiveAreaRegions regions() { DARABONBA_PTR_GET(regions_, Models::DescribeLivePrivateLineAreasResponseBodyLiveAreasListLiveAreaRegions) };
    inline DescribeLivePrivateLineAreasResponseBodyLiveAreasListLiveArea& setRegions(const Models::DescribeLivePrivateLineAreasResponseBodyLiveAreasListLiveAreaRegions & regions) { DARABONBA_PTR_SET_VALUE(regions_, regions) };
    inline DescribeLivePrivateLineAreasResponseBodyLiveAreasListLiveArea& setRegions(Models::DescribeLivePrivateLineAreasResponseBodyLiveAreasListLiveAreaRegions && regions) { DARABONBA_PTR_SET_RVALUE(regions_, regions) };


  protected:
    // The region type. Valid values:
    // 
    // *   domestic: in the Chinese mainland
    // *   overseas: outside the Chinese mainland
    std::shared_ptr<string> regionType_ = nullptr;
    // The regions.
    std::shared_ptr<Models::DescribeLivePrivateLineAreasResponseBodyLiveAreasListLiveAreaRegions> regions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
