// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECHILDINSTANCEREGIONSRESPONSEBODYREGIONSREGION_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECHILDINSTANCEREGIONSRESPONSEBODYREGIONSREGION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribeChildInstanceRegionsResponseBodyRegionsRegion : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeChildInstanceRegionsResponseBodyRegionsRegion& obj) { 
      DARABONBA_PTR_TO_JSON(LocalName, localName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeChildInstanceRegionsResponseBodyRegionsRegion& obj) { 
      DARABONBA_PTR_FROM_JSON(LocalName, localName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeChildInstanceRegionsResponseBodyRegionsRegion() = default ;
    DescribeChildInstanceRegionsResponseBodyRegionsRegion(const DescribeChildInstanceRegionsResponseBodyRegionsRegion &) = default ;
    DescribeChildInstanceRegionsResponseBodyRegionsRegion(DescribeChildInstanceRegionsResponseBodyRegionsRegion &&) = default ;
    DescribeChildInstanceRegionsResponseBodyRegionsRegion(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeChildInstanceRegionsResponseBodyRegionsRegion() = default ;
    DescribeChildInstanceRegionsResponseBodyRegionsRegion& operator=(const DescribeChildInstanceRegionsResponseBodyRegionsRegion &) = default ;
    DescribeChildInstanceRegionsResponseBodyRegionsRegion& operator=(DescribeChildInstanceRegionsResponseBodyRegionsRegion &&) = default ;
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
    inline DescribeChildInstanceRegionsResponseBodyRegionsRegion& setLocalName(string localName) { DARABONBA_PTR_SET_VALUE(localName_, localName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeChildInstanceRegionsResponseBodyRegionsRegion& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The name of the region.
    std::shared_ptr<string> localName_ = nullptr;
    // The ID of the region.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
