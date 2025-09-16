// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESUPPORTEDREGIONSRESPONSEBODYREGIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESUPPORTEDREGIONSRESPONSEBODYREGIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20211028
{
namespace Models
{
  class DescribeSupportedRegionsResponseBodyRegions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSupportedRegionsResponseBodyRegions& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Extra, extra_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(RegionName, regionName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSupportedRegionsResponseBodyRegions& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Extra, extra_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(RegionName, regionName_);
    };
    DescribeSupportedRegionsResponseBodyRegions() = default ;
    DescribeSupportedRegionsResponseBodyRegions(const DescribeSupportedRegionsResponseBodyRegions &) = default ;
    DescribeSupportedRegionsResponseBodyRegions(DescribeSupportedRegionsResponseBodyRegions &&) = default ;
    DescribeSupportedRegionsResponseBodyRegions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSupportedRegionsResponseBodyRegions() = default ;
    DescribeSupportedRegionsResponseBodyRegions& operator=(const DescribeSupportedRegionsResponseBodyRegions &) = default ;
    DescribeSupportedRegionsResponseBodyRegions& operator=(DescribeSupportedRegionsResponseBodyRegions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->extra_ != nullptr && this->region_ != nullptr && this->regionName_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeSupportedRegionsResponseBodyRegions& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // extra Field Functions 
    bool hasExtra() const { return this->extra_ != nullptr;};
    void deleteExtra() { this->extra_ = nullptr;};
    inline string extra() const { DARABONBA_PTR_GET_DEFAULT(extra_, "") };
    inline DescribeSupportedRegionsResponseBodyRegions& setExtra(string extra) { DARABONBA_PTR_SET_VALUE(extra_, extra) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeSupportedRegionsResponseBodyRegions& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // regionName Field Functions 
    bool hasRegionName() const { return this->regionName_ != nullptr;};
    void deleteRegionName() { this->regionName_ = nullptr;};
    inline string regionName() const { DARABONBA_PTR_GET_DEFAULT(regionName_, "") };
    inline DescribeSupportedRegionsResponseBodyRegions& setRegionName(string regionName) { DARABONBA_PTR_SET_VALUE(regionName_, regionName) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> extra_ = nullptr;
    std::shared_ptr<string> region_ = nullptr;
    std::shared_ptr<string> regionName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20211028
#endif
