// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREGIONSRESPONSEBODYREGIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREGIONSRESPONSEBODYREGIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DescribeRegionsResponseBodyRegions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRegionsResponseBodyRegions& obj) { 
      DARABONBA_PTR_TO_JSON(ClassicUnavailable, classicUnavailable_);
      DARABONBA_PTR_TO_JSON(LocalName, localName_);
      DARABONBA_PTR_TO_JSON(RegionEndpoint, regionEndpoint_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(VpcUnavailable, vpcUnavailable_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRegionsResponseBodyRegions& obj) { 
      DARABONBA_PTR_FROM_JSON(ClassicUnavailable, classicUnavailable_);
      DARABONBA_PTR_FROM_JSON(LocalName, localName_);
      DARABONBA_PTR_FROM_JSON(RegionEndpoint, regionEndpoint_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(VpcUnavailable, vpcUnavailable_);
    };
    DescribeRegionsResponseBodyRegions() = default ;
    DescribeRegionsResponseBodyRegions(const DescribeRegionsResponseBodyRegions &) = default ;
    DescribeRegionsResponseBodyRegions(DescribeRegionsResponseBodyRegions &&) = default ;
    DescribeRegionsResponseBodyRegions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRegionsResponseBodyRegions() = default ;
    DescribeRegionsResponseBodyRegions& operator=(const DescribeRegionsResponseBodyRegions &) = default ;
    DescribeRegionsResponseBodyRegions& operator=(DescribeRegionsResponseBodyRegions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->classicUnavailable_ != nullptr
        && this->localName_ != nullptr && this->regionEndpoint_ != nullptr && this->regionId_ != nullptr && this->vpcUnavailable_ != nullptr; };
    // classicUnavailable Field Functions 
    bool hasClassicUnavailable() const { return this->classicUnavailable_ != nullptr;};
    void deleteClassicUnavailable() { this->classicUnavailable_ = nullptr;};
    inline bool classicUnavailable() const { DARABONBA_PTR_GET_DEFAULT(classicUnavailable_, false) };
    inline DescribeRegionsResponseBodyRegions& setClassicUnavailable(bool classicUnavailable) { DARABONBA_PTR_SET_VALUE(classicUnavailable_, classicUnavailable) };


    // localName Field Functions 
    bool hasLocalName() const { return this->localName_ != nullptr;};
    void deleteLocalName() { this->localName_ = nullptr;};
    inline string localName() const { DARABONBA_PTR_GET_DEFAULT(localName_, "") };
    inline DescribeRegionsResponseBodyRegions& setLocalName(string localName) { DARABONBA_PTR_SET_VALUE(localName_, localName) };


    // regionEndpoint Field Functions 
    bool hasRegionEndpoint() const { return this->regionEndpoint_ != nullptr;};
    void deleteRegionEndpoint() { this->regionEndpoint_ = nullptr;};
    inline string regionEndpoint() const { DARABONBA_PTR_GET_DEFAULT(regionEndpoint_, "") };
    inline DescribeRegionsResponseBodyRegions& setRegionEndpoint(string regionEndpoint) { DARABONBA_PTR_SET_VALUE(regionEndpoint_, regionEndpoint) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeRegionsResponseBodyRegions& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // vpcUnavailable Field Functions 
    bool hasVpcUnavailable() const { return this->vpcUnavailable_ != nullptr;};
    void deleteVpcUnavailable() { this->vpcUnavailable_ = nullptr;};
    inline bool vpcUnavailable() const { DARABONBA_PTR_GET_DEFAULT(vpcUnavailable_, false) };
    inline DescribeRegionsResponseBodyRegions& setVpcUnavailable(bool vpcUnavailable) { DARABONBA_PTR_SET_VALUE(vpcUnavailable_, vpcUnavailable) };


  protected:
    // Indicates whether the current region supports scaling groups that reside in the classic network. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> classicUnavailable_ = nullptr;
    // The region name.
    std::shared_ptr<string> localName_ = nullptr;
    // The region endpoint.
    std::shared_ptr<string> regionEndpoint_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // Indicates whether the current region supports scaling groups that reside in virtual private clouds (VPCs). Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> vpcUnavailable_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
