// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCSRESPONSEBODYVPCSVPC_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCSRESPONSEBODYVPCSVPC_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVpcsResponseBodyVpcsVpcVSwitchs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeVpcsResponseBodyVpcsVpc : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcsResponseBodyVpcsVpc& obj) { 
      DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
      DARABONBA_PTR_TO_JSON(Bid, bid_);
      DARABONBA_PTR_TO_JSON(CidrBlock, cidrBlock_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(VSwitchs, vSwitchs_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VpcName, vpcName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcsResponseBodyVpcsVpc& obj) { 
      DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
      DARABONBA_PTR_FROM_JSON(Bid, bid_);
      DARABONBA_PTR_FROM_JSON(CidrBlock, cidrBlock_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(VSwitchs, vSwitchs_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VpcName, vpcName_);
    };
    DescribeVpcsResponseBodyVpcsVpc() = default ;
    DescribeVpcsResponseBodyVpcsVpc(const DescribeVpcsResponseBodyVpcsVpc &) = default ;
    DescribeVpcsResponseBodyVpcsVpc(DescribeVpcsResponseBodyVpcsVpc &&) = default ;
    DescribeVpcsResponseBodyVpcsVpc(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcsResponseBodyVpcsVpc() = default ;
    DescribeVpcsResponseBodyVpcsVpc& operator=(const DescribeVpcsResponseBodyVpcsVpc &) = default ;
    DescribeVpcsResponseBodyVpcsVpc& operator=(DescribeVpcsResponseBodyVpcsVpc &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aliUid_ != nullptr
        && this->bid_ != nullptr && this->cidrBlock_ != nullptr && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr && this->isDefault_ != nullptr
        && this->regionNo_ != nullptr && this->status_ != nullptr && this->vSwitchs_ != nullptr && this->vpcId_ != nullptr && this->vpcName_ != nullptr; };
    // aliUid Field Functions 
    bool hasAliUid() const { return this->aliUid_ != nullptr;};
    void deleteAliUid() { this->aliUid_ = nullptr;};
    inline string aliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, "") };
    inline DescribeVpcsResponseBodyVpcsVpc& setAliUid(string aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


    // bid Field Functions 
    bool hasBid() const { return this->bid_ != nullptr;};
    void deleteBid() { this->bid_ = nullptr;};
    inline string bid() const { DARABONBA_PTR_GET_DEFAULT(bid_, "") };
    inline DescribeVpcsResponseBodyVpcsVpc& setBid(string bid) { DARABONBA_PTR_SET_VALUE(bid_, bid) };


    // cidrBlock Field Functions 
    bool hasCidrBlock() const { return this->cidrBlock_ != nullptr;};
    void deleteCidrBlock() { this->cidrBlock_ = nullptr;};
    inline string cidrBlock() const { DARABONBA_PTR_GET_DEFAULT(cidrBlock_, "") };
    inline DescribeVpcsResponseBodyVpcsVpc& setCidrBlock(string cidrBlock) { DARABONBA_PTR_SET_VALUE(cidrBlock_, cidrBlock) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline DescribeVpcsResponseBodyVpcsVpc& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline DescribeVpcsResponseBodyVpcsVpc& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // isDefault Field Functions 
    bool hasIsDefault() const { return this->isDefault_ != nullptr;};
    void deleteIsDefault() { this->isDefault_ = nullptr;};
    inline bool isDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
    inline DescribeVpcsResponseBodyVpcsVpc& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


    // regionNo Field Functions 
    bool hasRegionNo() const { return this->regionNo_ != nullptr;};
    void deleteRegionNo() { this->regionNo_ = nullptr;};
    inline string regionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
    inline DescribeVpcsResponseBodyVpcsVpc& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeVpcsResponseBodyVpcsVpc& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // vSwitchs Field Functions 
    bool hasVSwitchs() const { return this->vSwitchs_ != nullptr;};
    void deleteVSwitchs() { this->vSwitchs_ = nullptr;};
    inline const vector<Models::DescribeVpcsResponseBodyVpcsVpcVSwitchs> & vSwitchs() const { DARABONBA_PTR_GET_CONST(vSwitchs_, vector<Models::DescribeVpcsResponseBodyVpcsVpcVSwitchs>) };
    inline vector<Models::DescribeVpcsResponseBodyVpcsVpcVSwitchs> vSwitchs() { DARABONBA_PTR_GET(vSwitchs_, vector<Models::DescribeVpcsResponseBodyVpcsVpcVSwitchs>) };
    inline DescribeVpcsResponseBodyVpcsVpc& setVSwitchs(const vector<Models::DescribeVpcsResponseBodyVpcsVpcVSwitchs> & vSwitchs) { DARABONBA_PTR_SET_VALUE(vSwitchs_, vSwitchs) };
    inline DescribeVpcsResponseBodyVpcsVpc& setVSwitchs(vector<Models::DescribeVpcsResponseBodyVpcsVpcVSwitchs> && vSwitchs) { DARABONBA_PTR_SET_RVALUE(vSwitchs_, vSwitchs) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeVpcsResponseBodyVpcsVpc& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vpcName Field Functions 
    bool hasVpcName() const { return this->vpcName_ != nullptr;};
    void deleteVpcName() { this->vpcName_ = nullptr;};
    inline string vpcName() const { DARABONBA_PTR_GET_DEFAULT(vpcName_, "") };
    inline DescribeVpcsResponseBodyVpcsVpc& setVpcName(string vpcName) { DARABONBA_PTR_SET_VALUE(vpcName_, vpcName) };


  protected:
    // The ID of the Alibaba Cloud account.
    std::shared_ptr<string> aliUid_ = nullptr;
    // The user channel ID.
    std::shared_ptr<string> bid_ = nullptr;
    // The IPv4 CIDR block of the VPC.
    std::shared_ptr<string> cidrBlock_ = nullptr;
    // The time when the VPC was created.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // The time when the VPC was modified.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // Indicates whether the VPC is the default VPC in the region. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> isDefault_ = nullptr;
    // The region in which the VPC resides.
    std::shared_ptr<string> regionNo_ = nullptr;
    // The status of the VPC. Valid values:
    // 
    // *   Pending
    // *   Available
    std::shared_ptr<string> status_ = nullptr;
    // The vSwitches in the VPC.
    std::shared_ptr<vector<Models::DescribeVpcsResponseBodyVpcsVpcVSwitchs>> vSwitchs_ = nullptr;
    // The ID of the VPC.
    std::shared_ptr<string> vpcId_ = nullptr;
    // The name of the VPC.
    std::shared_ptr<string> vpcName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
