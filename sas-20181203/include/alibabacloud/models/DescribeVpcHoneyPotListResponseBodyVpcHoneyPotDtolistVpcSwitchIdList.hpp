// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCHONEYPOTLISTRESPONSEBODYVPCHONEYPOTDTOLISTVPCSWITCHIDLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCHONEYPOTLISTRESPONSEBODYVPCHONEYPOTDTOLISTVPCSWITCHIDLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeVpcHoneyPotListResponseBodyVpcHoneyPotDTOListVpcSwitchIdList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcHoneyPotListResponseBodyVpcHoneyPotDTOListVpcSwitchIdList& obj) { 
      DARABONBA_PTR_TO_JSON(VpcSwitchId, vpcSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcSwitchName, vpcSwitchName_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcHoneyPotListResponseBodyVpcHoneyPotDTOListVpcSwitchIdList& obj) { 
      DARABONBA_PTR_FROM_JSON(VpcSwitchId, vpcSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcSwitchName, vpcSwitchName_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeVpcHoneyPotListResponseBodyVpcHoneyPotDTOListVpcSwitchIdList() = default ;
    DescribeVpcHoneyPotListResponseBodyVpcHoneyPotDTOListVpcSwitchIdList(const DescribeVpcHoneyPotListResponseBodyVpcHoneyPotDTOListVpcSwitchIdList &) = default ;
    DescribeVpcHoneyPotListResponseBodyVpcHoneyPotDTOListVpcSwitchIdList(DescribeVpcHoneyPotListResponseBodyVpcHoneyPotDTOListVpcSwitchIdList &&) = default ;
    DescribeVpcHoneyPotListResponseBodyVpcHoneyPotDTOListVpcSwitchIdList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcHoneyPotListResponseBodyVpcHoneyPotDTOListVpcSwitchIdList() = default ;
    DescribeVpcHoneyPotListResponseBodyVpcHoneyPotDTOListVpcSwitchIdList& operator=(const DescribeVpcHoneyPotListResponseBodyVpcHoneyPotDTOListVpcSwitchIdList &) = default ;
    DescribeVpcHoneyPotListResponseBodyVpcHoneyPotDTOListVpcSwitchIdList& operator=(DescribeVpcHoneyPotListResponseBodyVpcHoneyPotDTOListVpcSwitchIdList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->vpcSwitchId_ != nullptr
        && this->vpcSwitchName_ != nullptr && this->zoneId_ != nullptr; };
    // vpcSwitchId Field Functions 
    bool hasVpcSwitchId() const { return this->vpcSwitchId_ != nullptr;};
    void deleteVpcSwitchId() { this->vpcSwitchId_ = nullptr;};
    inline string vpcSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vpcSwitchId_, "") };
    inline DescribeVpcHoneyPotListResponseBodyVpcHoneyPotDTOListVpcSwitchIdList& setVpcSwitchId(string vpcSwitchId) { DARABONBA_PTR_SET_VALUE(vpcSwitchId_, vpcSwitchId) };


    // vpcSwitchName Field Functions 
    bool hasVpcSwitchName() const { return this->vpcSwitchName_ != nullptr;};
    void deleteVpcSwitchName() { this->vpcSwitchName_ = nullptr;};
    inline string vpcSwitchName() const { DARABONBA_PTR_GET_DEFAULT(vpcSwitchName_, "") };
    inline DescribeVpcHoneyPotListResponseBodyVpcHoneyPotDTOListVpcSwitchIdList& setVpcSwitchName(string vpcSwitchName) { DARABONBA_PTR_SET_VALUE(vpcSwitchName_, vpcSwitchName) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeVpcHoneyPotListResponseBodyVpcHoneyPotDTOListVpcSwitchIdList& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The ID of the vSwitch.
    std::shared_ptr<string> vpcSwitchId_ = nullptr;
    // The name of the vSwitch.
    std::shared_ptr<string> vpcSwitchName_ = nullptr;
    // The zone ID of the vSwitch.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
