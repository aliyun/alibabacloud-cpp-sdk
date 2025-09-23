// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCSRESPONSEBODYVPCS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCSRESPONSEBODYVPCS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVpcsResponseBodyVpcsVSwitchs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeVpcsResponseBodyVpcs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcsResponseBodyVpcs& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeVpcsResponseBodyVpcs& obj) { 
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
    DescribeVpcsResponseBodyVpcs() = default ;
    DescribeVpcsResponseBodyVpcs(const DescribeVpcsResponseBodyVpcs &) = default ;
    DescribeVpcsResponseBodyVpcs(DescribeVpcsResponseBodyVpcs &&) = default ;
    DescribeVpcsResponseBodyVpcs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcsResponseBodyVpcs() = default ;
    DescribeVpcsResponseBodyVpcs& operator=(const DescribeVpcsResponseBodyVpcs &) = default ;
    DescribeVpcsResponseBodyVpcs& operator=(DescribeVpcsResponseBodyVpcs &&) = default ;
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
    inline DescribeVpcsResponseBodyVpcs& setAliUid(string aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


    // bid Field Functions 
    bool hasBid() const { return this->bid_ != nullptr;};
    void deleteBid() { this->bid_ = nullptr;};
    inline string bid() const { DARABONBA_PTR_GET_DEFAULT(bid_, "") };
    inline DescribeVpcsResponseBodyVpcs& setBid(string bid) { DARABONBA_PTR_SET_VALUE(bid_, bid) };


    // cidrBlock Field Functions 
    bool hasCidrBlock() const { return this->cidrBlock_ != nullptr;};
    void deleteCidrBlock() { this->cidrBlock_ = nullptr;};
    inline string cidrBlock() const { DARABONBA_PTR_GET_DEFAULT(cidrBlock_, "") };
    inline DescribeVpcsResponseBodyVpcs& setCidrBlock(string cidrBlock) { DARABONBA_PTR_SET_VALUE(cidrBlock_, cidrBlock) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline DescribeVpcsResponseBodyVpcs& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline DescribeVpcsResponseBodyVpcs& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // isDefault Field Functions 
    bool hasIsDefault() const { return this->isDefault_ != nullptr;};
    void deleteIsDefault() { this->isDefault_ = nullptr;};
    inline bool isDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
    inline DescribeVpcsResponseBodyVpcs& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


    // regionNo Field Functions 
    bool hasRegionNo() const { return this->regionNo_ != nullptr;};
    void deleteRegionNo() { this->regionNo_ = nullptr;};
    inline string regionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
    inline DescribeVpcsResponseBodyVpcs& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeVpcsResponseBodyVpcs& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // vSwitchs Field Functions 
    bool hasVSwitchs() const { return this->vSwitchs_ != nullptr;};
    void deleteVSwitchs() { this->vSwitchs_ = nullptr;};
    inline const vector<Models::DescribeVpcsResponseBodyVpcsVSwitchs> & vSwitchs() const { DARABONBA_PTR_GET_CONST(vSwitchs_, vector<Models::DescribeVpcsResponseBodyVpcsVSwitchs>) };
    inline vector<Models::DescribeVpcsResponseBodyVpcsVSwitchs> vSwitchs() { DARABONBA_PTR_GET(vSwitchs_, vector<Models::DescribeVpcsResponseBodyVpcsVSwitchs>) };
    inline DescribeVpcsResponseBodyVpcs& setVSwitchs(const vector<Models::DescribeVpcsResponseBodyVpcsVSwitchs> & vSwitchs) { DARABONBA_PTR_SET_VALUE(vSwitchs_, vSwitchs) };
    inline DescribeVpcsResponseBodyVpcs& setVSwitchs(vector<Models::DescribeVpcsResponseBodyVpcsVSwitchs> && vSwitchs) { DARABONBA_PTR_SET_RVALUE(vSwitchs_, vSwitchs) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeVpcsResponseBodyVpcs& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vpcName Field Functions 
    bool hasVpcName() const { return this->vpcName_ != nullptr;};
    void deleteVpcName() { this->vpcName_ = nullptr;};
    inline string vpcName() const { DARABONBA_PTR_GET_DEFAULT(vpcName_, "") };
    inline DescribeVpcsResponseBodyVpcs& setVpcName(string vpcName) { DARABONBA_PTR_SET_VALUE(vpcName_, vpcName) };


  protected:
    std::shared_ptr<string> aliUid_ = nullptr;
    std::shared_ptr<string> bid_ = nullptr;
    std::shared_ptr<string> cidrBlock_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<bool> isDefault_ = nullptr;
    std::shared_ptr<string> regionNo_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<vector<Models::DescribeVpcsResponseBodyVpcsVSwitchs>> vSwitchs_ = nullptr;
    std::shared_ptr<string> vpcId_ = nullptr;
    std::shared_ptr<string> vpcName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
