// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTORAGEREGIONLISTRESPONSEBODYREGIONLISTREGION_HPP_
#define ALIBABACLOUD_MODELS_GETSTORAGEREGIONLISTRESPONSEBODYREGIONLISTREGION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetStorageRegionListResponseBodyRegionListRegion : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStorageRegionListResponseBodyRegionListRegion& obj) { 
      DARABONBA_PTR_TO_JSON(RegionID, regionID_);
    };
    friend void from_json(const Darabonba::Json& j, GetStorageRegionListResponseBodyRegionListRegion& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionID, regionID_);
    };
    GetStorageRegionListResponseBodyRegionListRegion() = default ;
    GetStorageRegionListResponseBodyRegionListRegion(const GetStorageRegionListResponseBodyRegionListRegion &) = default ;
    GetStorageRegionListResponseBodyRegionListRegion(GetStorageRegionListResponseBodyRegionListRegion &&) = default ;
    GetStorageRegionListResponseBodyRegionListRegion(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStorageRegionListResponseBodyRegionListRegion() = default ;
    GetStorageRegionListResponseBodyRegionListRegion& operator=(const GetStorageRegionListResponseBodyRegionListRegion &) = default ;
    GetStorageRegionListResponseBodyRegionListRegion& operator=(GetStorageRegionListResponseBodyRegionListRegion &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->regionID_ != nullptr; };
    // regionID Field Functions 
    bool hasRegionID() const { return this->regionID_ != nullptr;};
    void deleteRegionID() { this->regionID_ = nullptr;};
    inline string regionID() const { DARABONBA_PTR_GET_DEFAULT(regionID_, "") };
    inline GetStorageRegionListResponseBodyRegionListRegion& setRegionID(string regionID) { DARABONBA_PTR_SET_VALUE(regionID_, regionID) };


  protected:
    std::shared_ptr<string> regionID_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
