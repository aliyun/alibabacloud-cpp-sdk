// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREGIONSRESPONSEBODYREGIONMODELLISTZONES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREGIONSRESPONSEBODYREGIONMODELLISTZONES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Selectdb20230522
{
namespace Models
{
  class DescribeRegionsResponseBodyRegionModelListZones : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRegionsResponseBodyRegionModelListZones& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Disabled, disabled_);
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SubDomain, subDomain_);
      DARABONBA_PTR_TO_JSON(VpcEnabled, vpcEnabled_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRegionsResponseBodyRegionModelListZones& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Disabled, disabled_);
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SubDomain, subDomain_);
      DARABONBA_PTR_FROM_JSON(VpcEnabled, vpcEnabled_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeRegionsResponseBodyRegionModelListZones() = default ;
    DescribeRegionsResponseBodyRegionModelListZones(const DescribeRegionsResponseBodyRegionModelListZones &) = default ;
    DescribeRegionsResponseBodyRegionModelListZones(DescribeRegionsResponseBodyRegionModelListZones &&) = default ;
    DescribeRegionsResponseBodyRegionModelListZones(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRegionsResponseBodyRegionModelListZones() = default ;
    DescribeRegionsResponseBodyRegionModelListZones& operator=(const DescribeRegionsResponseBodyRegionModelListZones &) = default ;
    DescribeRegionsResponseBodyRegionModelListZones& operator=(DescribeRegionsResponseBodyRegionModelListZones &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->disabled_ != nullptr && this->label_ != nullptr && this->name_ != nullptr && this->regionId_ != nullptr && this->subDomain_ != nullptr
        && this->vpcEnabled_ != nullptr && this->zoneId_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeRegionsResponseBodyRegionModelListZones& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // disabled Field Functions 
    bool hasDisabled() const { return this->disabled_ != nullptr;};
    void deleteDisabled() { this->disabled_ = nullptr;};
    inline bool disabled() const { DARABONBA_PTR_GET_DEFAULT(disabled_, false) };
    inline DescribeRegionsResponseBodyRegionModelListZones& setDisabled(bool disabled) { DARABONBA_PTR_SET_VALUE(disabled_, disabled) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline DescribeRegionsResponseBodyRegionModelListZones& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeRegionsResponseBodyRegionModelListZones& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeRegionsResponseBodyRegionModelListZones& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // subDomain Field Functions 
    bool hasSubDomain() const { return this->subDomain_ != nullptr;};
    void deleteSubDomain() { this->subDomain_ = nullptr;};
    inline string subDomain() const { DARABONBA_PTR_GET_DEFAULT(subDomain_, "") };
    inline DescribeRegionsResponseBodyRegionModelListZones& setSubDomain(string subDomain) { DARABONBA_PTR_SET_VALUE(subDomain_, subDomain) };


    // vpcEnabled Field Functions 
    bool hasVpcEnabled() const { return this->vpcEnabled_ != nullptr;};
    void deleteVpcEnabled() { this->vpcEnabled_ = nullptr;};
    inline bool vpcEnabled() const { DARABONBA_PTR_GET_DEFAULT(vpcEnabled_, false) };
    inline DescribeRegionsResponseBodyRegionModelListZones& setVpcEnabled(bool vpcEnabled) { DARABONBA_PTR_SET_VALUE(vpcEnabled_, vpcEnabled) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeRegionsResponseBodyRegionModelListZones& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The zone description.
    std::shared_ptr<string> description_ = nullptr;
    // Indicates whether the VPC is disabled.
    std::shared_ptr<bool> disabled_ = nullptr;
    // The label.
    std::shared_ptr<string> label_ = nullptr;
    // The zone name.
    std::shared_ptr<string> name_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The subdomain.
    std::shared_ptr<string> subDomain_ = nullptr;
    // Indicates whether the VPC is enabled.
    std::shared_ptr<bool> vpcEnabled_ = nullptr;
    // Indicates whether the virtual private cloud (VPC) is available.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Selectdb20230522
#endif
