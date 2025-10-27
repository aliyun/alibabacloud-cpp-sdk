// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIMAGEREGISTRYREGIONRESPONSEBODYREGIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTIMAGEREGISTRYREGIONRESPONSEBODYREGIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListImageRegistryRegionResponseBodyRegions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListImageRegistryRegionResponseBodyRegions& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RegionName, regionName_);
    };
    friend void from_json(const Darabonba::Json& j, ListImageRegistryRegionResponseBodyRegions& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RegionName, regionName_);
    };
    ListImageRegistryRegionResponseBodyRegions() = default ;
    ListImageRegistryRegionResponseBodyRegions(const ListImageRegistryRegionResponseBodyRegions &) = default ;
    ListImageRegistryRegionResponseBodyRegions(ListImageRegistryRegionResponseBodyRegions &&) = default ;
    ListImageRegistryRegionResponseBodyRegions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListImageRegistryRegionResponseBodyRegions() = default ;
    ListImageRegistryRegionResponseBodyRegions& operator=(const ListImageRegistryRegionResponseBodyRegions &) = default ;
    ListImageRegistryRegionResponseBodyRegions& operator=(ListImageRegistryRegionResponseBodyRegions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr
        && return this->regionName_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListImageRegistryRegionResponseBodyRegions& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // regionName Field Functions 
    bool hasRegionName() const { return this->regionName_ != nullptr;};
    void deleteRegionName() { this->regionName_ = nullptr;};
    inline string regionName() const { DARABONBA_PTR_GET_DEFAULT(regionName_, "") };
    inline ListImageRegistryRegionResponseBodyRegions& setRegionName(string regionName) { DARABONBA_PTR_SET_VALUE(regionName_, regionName) };


  protected:
    // The region ID of the image.
    std::shared_ptr<string> regionId_ = nullptr;
    // The name of the region.
    std::shared_ptr<string> regionName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
