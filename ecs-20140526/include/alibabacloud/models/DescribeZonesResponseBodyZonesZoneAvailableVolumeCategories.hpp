// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEZONESRESPONSEBODYZONESZONEAVAILABLEVOLUMECATEGORIES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEZONESRESPONSEBODYZONESZONEAVAILABLEVOLUMECATEGORIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeZonesResponseBodyZonesZoneAvailableVolumeCategories : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeZonesResponseBodyZonesZoneAvailableVolumeCategories& obj) { 
      DARABONBA_PTR_TO_JSON(VolumeCategories, volumeCategories_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeZonesResponseBodyZonesZoneAvailableVolumeCategories& obj) { 
      DARABONBA_PTR_FROM_JSON(VolumeCategories, volumeCategories_);
    };
    DescribeZonesResponseBodyZonesZoneAvailableVolumeCategories() = default ;
    DescribeZonesResponseBodyZonesZoneAvailableVolumeCategories(const DescribeZonesResponseBodyZonesZoneAvailableVolumeCategories &) = default ;
    DescribeZonesResponseBodyZonesZoneAvailableVolumeCategories(DescribeZonesResponseBodyZonesZoneAvailableVolumeCategories &&) = default ;
    DescribeZonesResponseBodyZonesZoneAvailableVolumeCategories(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeZonesResponseBodyZonesZoneAvailableVolumeCategories() = default ;
    DescribeZonesResponseBodyZonesZoneAvailableVolumeCategories& operator=(const DescribeZonesResponseBodyZonesZoneAvailableVolumeCategories &) = default ;
    DescribeZonesResponseBodyZonesZoneAvailableVolumeCategories& operator=(DescribeZonesResponseBodyZonesZoneAvailableVolumeCategories &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->volumeCategories_ == nullptr; };
    // volumeCategories Field Functions 
    bool hasVolumeCategories() const { return this->volumeCategories_ != nullptr;};
    void deleteVolumeCategories() { this->volumeCategories_ = nullptr;};
    inline const vector<string> & volumeCategories() const { DARABONBA_PTR_GET_CONST(volumeCategories_, vector<string>) };
    inline vector<string> volumeCategories() { DARABONBA_PTR_GET(volumeCategories_, vector<string>) };
    inline DescribeZonesResponseBodyZonesZoneAvailableVolumeCategories& setVolumeCategories(const vector<string> & volumeCategories) { DARABONBA_PTR_SET_VALUE(volumeCategories_, volumeCategories) };
    inline DescribeZonesResponseBodyZonesZoneAvailableVolumeCategories& setVolumeCategories(vector<string> && volumeCategories) { DARABONBA_PTR_SET_RVALUE(volumeCategories_, volumeCategories) };


  protected:
    std::shared_ptr<vector<string>> volumeCategories_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
