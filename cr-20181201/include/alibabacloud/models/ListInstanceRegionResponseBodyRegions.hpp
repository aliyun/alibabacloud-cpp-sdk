// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCEREGIONRESPONSEBODYREGIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCEREGIONRESPONSEBODYREGIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class ListInstanceRegionResponseBodyRegions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceRegionResponseBodyRegions& obj) { 
      DARABONBA_PTR_TO_JSON(LocalName, localName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceRegionResponseBodyRegions& obj) { 
      DARABONBA_PTR_FROM_JSON(LocalName, localName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ListInstanceRegionResponseBodyRegions() = default ;
    ListInstanceRegionResponseBodyRegions(const ListInstanceRegionResponseBodyRegions &) = default ;
    ListInstanceRegionResponseBodyRegions(ListInstanceRegionResponseBodyRegions &&) = default ;
    ListInstanceRegionResponseBodyRegions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceRegionResponseBodyRegions() = default ;
    ListInstanceRegionResponseBodyRegions& operator=(const ListInstanceRegionResponseBodyRegions &) = default ;
    ListInstanceRegionResponseBodyRegions& operator=(ListInstanceRegionResponseBodyRegions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->localName_ != nullptr
        && this->regionId_ != nullptr; };
    // localName Field Functions 
    bool hasLocalName() const { return this->localName_ != nullptr;};
    void deleteLocalName() { this->localName_ = nullptr;};
    inline string localName() const { DARABONBA_PTR_GET_DEFAULT(localName_, "") };
    inline ListInstanceRegionResponseBodyRegions& setLocalName(string localName) { DARABONBA_PTR_SET_VALUE(localName_, localName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListInstanceRegionResponseBodyRegions& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The name of the region.
    std::shared_ptr<string> localName_ = nullptr;
    // The ID of the region.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
