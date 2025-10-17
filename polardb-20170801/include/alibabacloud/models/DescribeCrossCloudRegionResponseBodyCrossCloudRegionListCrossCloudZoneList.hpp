// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECROSSCLOUDREGIONRESPONSEBODYCROSSCLOUDREGIONLISTCROSSCLOUDZONELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECROSSCLOUDREGIONRESPONSEBODYCROSSCLOUDREGIONLISTCROSSCLOUDZONELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeCrossCloudRegionResponseBodyCrossCloudRegionListCrossCloudZoneList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCrossCloudRegionResponseBodyCrossCloudRegionListCrossCloudZoneList& obj) { 
      DARABONBA_PTR_TO_JSON(CrossCloudZoneId, crossCloudZoneId_);
      DARABONBA_PTR_TO_JSON(CrossCloudZoneName, crossCloudZoneName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCrossCloudRegionResponseBodyCrossCloudRegionListCrossCloudZoneList& obj) { 
      DARABONBA_PTR_FROM_JSON(CrossCloudZoneId, crossCloudZoneId_);
      DARABONBA_PTR_FROM_JSON(CrossCloudZoneName, crossCloudZoneName_);
    };
    DescribeCrossCloudRegionResponseBodyCrossCloudRegionListCrossCloudZoneList() = default ;
    DescribeCrossCloudRegionResponseBodyCrossCloudRegionListCrossCloudZoneList(const DescribeCrossCloudRegionResponseBodyCrossCloudRegionListCrossCloudZoneList &) = default ;
    DescribeCrossCloudRegionResponseBodyCrossCloudRegionListCrossCloudZoneList(DescribeCrossCloudRegionResponseBodyCrossCloudRegionListCrossCloudZoneList &&) = default ;
    DescribeCrossCloudRegionResponseBodyCrossCloudRegionListCrossCloudZoneList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCrossCloudRegionResponseBodyCrossCloudRegionListCrossCloudZoneList() = default ;
    DescribeCrossCloudRegionResponseBodyCrossCloudRegionListCrossCloudZoneList& operator=(const DescribeCrossCloudRegionResponseBodyCrossCloudRegionListCrossCloudZoneList &) = default ;
    DescribeCrossCloudRegionResponseBodyCrossCloudRegionListCrossCloudZoneList& operator=(DescribeCrossCloudRegionResponseBodyCrossCloudRegionListCrossCloudZoneList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->crossCloudZoneId_ == nullptr
        && return this->crossCloudZoneName_ == nullptr; };
    // crossCloudZoneId Field Functions 
    bool hasCrossCloudZoneId() const { return this->crossCloudZoneId_ != nullptr;};
    void deleteCrossCloudZoneId() { this->crossCloudZoneId_ = nullptr;};
    inline string crossCloudZoneId() const { DARABONBA_PTR_GET_DEFAULT(crossCloudZoneId_, "") };
    inline DescribeCrossCloudRegionResponseBodyCrossCloudRegionListCrossCloudZoneList& setCrossCloudZoneId(string crossCloudZoneId) { DARABONBA_PTR_SET_VALUE(crossCloudZoneId_, crossCloudZoneId) };


    // crossCloudZoneName Field Functions 
    bool hasCrossCloudZoneName() const { return this->crossCloudZoneName_ != nullptr;};
    void deleteCrossCloudZoneName() { this->crossCloudZoneName_ = nullptr;};
    inline string crossCloudZoneName() const { DARABONBA_PTR_GET_DEFAULT(crossCloudZoneName_, "") };
    inline DescribeCrossCloudRegionResponseBodyCrossCloudRegionListCrossCloudZoneList& setCrossCloudZoneName(string crossCloudZoneName) { DARABONBA_PTR_SET_VALUE(crossCloudZoneName_, crossCloudZoneName) };


  protected:
    std::shared_ptr<string> crossCloudZoneId_ = nullptr;
    std::shared_ptr<string> crossCloudZoneName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
