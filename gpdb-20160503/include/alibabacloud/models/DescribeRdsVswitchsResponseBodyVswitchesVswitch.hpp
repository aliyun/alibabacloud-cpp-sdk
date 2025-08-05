// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERDSVSWITCHSRESPONSEBODYVSWITCHESVSWITCH_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERDSVSWITCHSRESPONSEBODYVSWITCHESVSWITCH_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeRdsVSwitchsResponseBodyVSwitchesVSwitch : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRdsVSwitchsResponseBodyVSwitchesVSwitch& obj) { 
      DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
      DARABONBA_PTR_TO_JSON(Bid, bid_);
      DARABONBA_PTR_TO_JSON(CidrBlock, cidrBlock_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_TO_JSON(IzNo, izNo_);
      DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VSwitchName, vSwitchName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRdsVSwitchsResponseBodyVSwitchesVSwitch& obj) { 
      DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
      DARABONBA_PTR_FROM_JSON(Bid, bid_);
      DARABONBA_PTR_FROM_JSON(CidrBlock, cidrBlock_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_FROM_JSON(IzNo, izNo_);
      DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VSwitchName, vSwitchName_);
    };
    DescribeRdsVSwitchsResponseBodyVSwitchesVSwitch() = default ;
    DescribeRdsVSwitchsResponseBodyVSwitchesVSwitch(const DescribeRdsVSwitchsResponseBodyVSwitchesVSwitch &) = default ;
    DescribeRdsVSwitchsResponseBodyVSwitchesVSwitch(DescribeRdsVSwitchsResponseBodyVSwitchesVSwitch &&) = default ;
    DescribeRdsVSwitchsResponseBodyVSwitchesVSwitch(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRdsVSwitchsResponseBodyVSwitchesVSwitch() = default ;
    DescribeRdsVSwitchsResponseBodyVSwitchesVSwitch& operator=(const DescribeRdsVSwitchsResponseBodyVSwitchesVSwitch &) = default ;
    DescribeRdsVSwitchsResponseBodyVSwitchesVSwitch& operator=(DescribeRdsVSwitchsResponseBodyVSwitchesVSwitch &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aliUid_ != nullptr
        && this->bid_ != nullptr && this->cidrBlock_ != nullptr && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr && this->isDefault_ != nullptr
        && this->izNo_ != nullptr && this->regionNo_ != nullptr && this->status_ != nullptr && this->vSwitchId_ != nullptr && this->vSwitchName_ != nullptr; };
    // aliUid Field Functions 
    bool hasAliUid() const { return this->aliUid_ != nullptr;};
    void deleteAliUid() { this->aliUid_ = nullptr;};
    inline string aliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, "") };
    inline DescribeRdsVSwitchsResponseBodyVSwitchesVSwitch& setAliUid(string aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


    // bid Field Functions 
    bool hasBid() const { return this->bid_ != nullptr;};
    void deleteBid() { this->bid_ = nullptr;};
    inline string bid() const { DARABONBA_PTR_GET_DEFAULT(bid_, "") };
    inline DescribeRdsVSwitchsResponseBodyVSwitchesVSwitch& setBid(string bid) { DARABONBA_PTR_SET_VALUE(bid_, bid) };


    // cidrBlock Field Functions 
    bool hasCidrBlock() const { return this->cidrBlock_ != nullptr;};
    void deleteCidrBlock() { this->cidrBlock_ = nullptr;};
    inline string cidrBlock() const { DARABONBA_PTR_GET_DEFAULT(cidrBlock_, "") };
    inline DescribeRdsVSwitchsResponseBodyVSwitchesVSwitch& setCidrBlock(string cidrBlock) { DARABONBA_PTR_SET_VALUE(cidrBlock_, cidrBlock) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline DescribeRdsVSwitchsResponseBodyVSwitchesVSwitch& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline DescribeRdsVSwitchsResponseBodyVSwitchesVSwitch& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // isDefault Field Functions 
    bool hasIsDefault() const { return this->isDefault_ != nullptr;};
    void deleteIsDefault() { this->isDefault_ = nullptr;};
    inline bool isDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
    inline DescribeRdsVSwitchsResponseBodyVSwitchesVSwitch& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


    // izNo Field Functions 
    bool hasIzNo() const { return this->izNo_ != nullptr;};
    void deleteIzNo() { this->izNo_ = nullptr;};
    inline string izNo() const { DARABONBA_PTR_GET_DEFAULT(izNo_, "") };
    inline DescribeRdsVSwitchsResponseBodyVSwitchesVSwitch& setIzNo(string izNo) { DARABONBA_PTR_SET_VALUE(izNo_, izNo) };


    // regionNo Field Functions 
    bool hasRegionNo() const { return this->regionNo_ != nullptr;};
    void deleteRegionNo() { this->regionNo_ = nullptr;};
    inline string regionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
    inline DescribeRdsVSwitchsResponseBodyVSwitchesVSwitch& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeRdsVSwitchsResponseBodyVSwitchesVSwitch& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeRdsVSwitchsResponseBodyVSwitchesVSwitch& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vSwitchName Field Functions 
    bool hasVSwitchName() const { return this->vSwitchName_ != nullptr;};
    void deleteVSwitchName() { this->vSwitchName_ = nullptr;};
    inline string vSwitchName() const { DARABONBA_PTR_GET_DEFAULT(vSwitchName_, "") };
    inline DescribeRdsVSwitchsResponseBodyVSwitchesVSwitch& setVSwitchName(string vSwitchName) { DARABONBA_PTR_SET_VALUE(vSwitchName_, vSwitchName) };


  protected:
    // An invalid parameter. It is no longer returned when you call this operation.
    std::shared_ptr<string> aliUid_ = nullptr;
    // An invalid parameter. It is no longer returned when you call this operation.
    std::shared_ptr<string> bid_ = nullptr;
    // The CIDR block of the vSwitch.
    std::shared_ptr<string> cidrBlock_ = nullptr;
    // An invalid parameter. It is no longer returned when you call this operation.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // An invalid parameter. It is no longer returned when you call this operation.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // Indicates whether the vSwitch is the default vSwitch. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> isDefault_ = nullptr;
    // The ID of the zone.
    std::shared_ptr<string> izNo_ = nullptr;
    // An invalid parameter. It is no longer returned when you call this operation.
    std::shared_ptr<string> regionNo_ = nullptr;
    // The state of the vSwitch. If **Available** is returned, the vSwitch is available.
    std::shared_ptr<string> status_ = nullptr;
    // The ID of the vSwitch.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The name of the vSwitch.
    std::shared_ptr<string> vSwitchName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
