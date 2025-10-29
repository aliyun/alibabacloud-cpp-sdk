// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEPRIVATELINEAREASRESPONSEBODYLIVEAREASLISTLIVEAREAREGIONSREGION_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEPRIVATELINEAREASRESPONSEBODYLIVEAREASLISTLIVEAREAREGIONSREGION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLivePrivateLineAreasResponseBodyLiveAreasListLiveAreaRegionsRegion : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLivePrivateLineAreasResponseBodyLiveAreasListLiveAreaRegionsRegion& obj) { 
      DARABONBA_PTR_TO_JSON(LocalName, localName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLivePrivateLineAreasResponseBodyLiveAreasListLiveAreaRegionsRegion& obj) { 
      DARABONBA_PTR_FROM_JSON(LocalName, localName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeLivePrivateLineAreasResponseBodyLiveAreasListLiveAreaRegionsRegion() = default ;
    DescribeLivePrivateLineAreasResponseBodyLiveAreasListLiveAreaRegionsRegion(const DescribeLivePrivateLineAreasResponseBodyLiveAreasListLiveAreaRegionsRegion &) = default ;
    DescribeLivePrivateLineAreasResponseBodyLiveAreasListLiveAreaRegionsRegion(DescribeLivePrivateLineAreasResponseBodyLiveAreasListLiveAreaRegionsRegion &&) = default ;
    DescribeLivePrivateLineAreasResponseBodyLiveAreasListLiveAreaRegionsRegion(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLivePrivateLineAreasResponseBodyLiveAreasListLiveAreaRegionsRegion() = default ;
    DescribeLivePrivateLineAreasResponseBodyLiveAreasListLiveAreaRegionsRegion& operator=(const DescribeLivePrivateLineAreasResponseBodyLiveAreasListLiveAreaRegionsRegion &) = default ;
    DescribeLivePrivateLineAreasResponseBodyLiveAreasListLiveAreaRegionsRegion& operator=(DescribeLivePrivateLineAreasResponseBodyLiveAreasListLiveAreaRegionsRegion &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->localName_ == nullptr
        && return this->regionId_ == nullptr; };
    // localName Field Functions 
    bool hasLocalName() const { return this->localName_ != nullptr;};
    void deleteLocalName() { this->localName_ = nullptr;};
    inline string localName() const { DARABONBA_PTR_GET_DEFAULT(localName_, "") };
    inline DescribeLivePrivateLineAreasResponseBodyLiveAreasListLiveAreaRegionsRegion& setLocalName(string localName) { DARABONBA_PTR_SET_VALUE(localName_, localName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeLivePrivateLineAreasResponseBodyLiveAreasListLiveAreaRegionsRegion& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The region name.
    std::shared_ptr<string> localName_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
