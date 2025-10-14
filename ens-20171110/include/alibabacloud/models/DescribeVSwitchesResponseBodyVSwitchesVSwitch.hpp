// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSWITCHESRESPONSEBODYVSWITCHESVSWITCH_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSWITCHESRESPONSEBODYVSWITCHESVSWITCH_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeVSwitchesResponseBodyVSwitchesVSwitchTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeVSwitchesResponseBodyVSwitchesVSwitch : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVSwitchesResponseBodyVSwitchesVSwitch& obj) { 
      DARABONBA_PTR_TO_JSON(CidrBlock, cidrBlock_);
      DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_TO_JSON(FreeIpCount, freeIpCount_);
      DARABONBA_PTR_TO_JSON(NetworkId, networkId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VSwitchName, vSwitchName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVSwitchesResponseBodyVSwitchesVSwitch& obj) { 
      DARABONBA_PTR_FROM_JSON(CidrBlock, cidrBlock_);
      DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_FROM_JSON(FreeIpCount, freeIpCount_);
      DARABONBA_PTR_FROM_JSON(NetworkId, networkId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VSwitchName, vSwitchName_);
    };
    DescribeVSwitchesResponseBodyVSwitchesVSwitch() = default ;
    DescribeVSwitchesResponseBodyVSwitchesVSwitch(const DescribeVSwitchesResponseBodyVSwitchesVSwitch &) = default ;
    DescribeVSwitchesResponseBodyVSwitchesVSwitch(DescribeVSwitchesResponseBodyVSwitchesVSwitch &&) = default ;
    DescribeVSwitchesResponseBodyVSwitchesVSwitch(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVSwitchesResponseBodyVSwitchesVSwitch() = default ;
    DescribeVSwitchesResponseBodyVSwitchesVSwitch& operator=(const DescribeVSwitchesResponseBodyVSwitchesVSwitch &) = default ;
    DescribeVSwitchesResponseBodyVSwitchesVSwitch& operator=(DescribeVSwitchesResponseBodyVSwitchesVSwitch &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cidrBlock_ == nullptr
        && return this->createdTime_ == nullptr && return this->description_ == nullptr && return this->ensRegionId_ == nullptr && return this->freeIpCount_ == nullptr && return this->networkId_ == nullptr
        && return this->status_ == nullptr && return this->tags_ == nullptr && return this->vSwitchId_ == nullptr && return this->vSwitchName_ == nullptr; };
    // cidrBlock Field Functions 
    bool hasCidrBlock() const { return this->cidrBlock_ != nullptr;};
    void deleteCidrBlock() { this->cidrBlock_ = nullptr;};
    inline string cidrBlock() const { DARABONBA_PTR_GET_DEFAULT(cidrBlock_, "") };
    inline DescribeVSwitchesResponseBodyVSwitchesVSwitch& setCidrBlock(string cidrBlock) { DARABONBA_PTR_SET_VALUE(cidrBlock_, cidrBlock) };


    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline string createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
    inline DescribeVSwitchesResponseBodyVSwitchesVSwitch& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeVSwitchesResponseBodyVSwitchesVSwitch& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // ensRegionId Field Functions 
    bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
    void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
    inline string ensRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
    inline DescribeVSwitchesResponseBodyVSwitchesVSwitch& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


    // freeIpCount Field Functions 
    bool hasFreeIpCount() const { return this->freeIpCount_ != nullptr;};
    void deleteFreeIpCount() { this->freeIpCount_ = nullptr;};
    inline int64_t freeIpCount() const { DARABONBA_PTR_GET_DEFAULT(freeIpCount_, 0L) };
    inline DescribeVSwitchesResponseBodyVSwitchesVSwitch& setFreeIpCount(int64_t freeIpCount) { DARABONBA_PTR_SET_VALUE(freeIpCount_, freeIpCount) };


    // networkId Field Functions 
    bool hasNetworkId() const { return this->networkId_ != nullptr;};
    void deleteNetworkId() { this->networkId_ = nullptr;};
    inline string networkId() const { DARABONBA_PTR_GET_DEFAULT(networkId_, "") };
    inline DescribeVSwitchesResponseBodyVSwitchesVSwitch& setNetworkId(string networkId) { DARABONBA_PTR_SET_VALUE(networkId_, networkId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeVSwitchesResponseBodyVSwitchesVSwitch& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::DescribeVSwitchesResponseBodyVSwitchesVSwitchTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::DescribeVSwitchesResponseBodyVSwitchesVSwitchTags) };
    inline Models::DescribeVSwitchesResponseBodyVSwitchesVSwitchTags tags() { DARABONBA_PTR_GET(tags_, Models::DescribeVSwitchesResponseBodyVSwitchesVSwitchTags) };
    inline DescribeVSwitchesResponseBodyVSwitchesVSwitch& setTags(const Models::DescribeVSwitchesResponseBodyVSwitchesVSwitchTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeVSwitchesResponseBodyVSwitchesVSwitch& setTags(Models::DescribeVSwitchesResponseBodyVSwitchesVSwitchTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeVSwitchesResponseBodyVSwitchesVSwitch& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vSwitchName Field Functions 
    bool hasVSwitchName() const { return this->vSwitchName_ != nullptr;};
    void deleteVSwitchName() { this->vSwitchName_ = nullptr;};
    inline string vSwitchName() const { DARABONBA_PTR_GET_DEFAULT(vSwitchName_, "") };
    inline DescribeVSwitchesResponseBodyVSwitchesVSwitch& setVSwitchName(string vSwitchName) { DARABONBA_PTR_SET_VALUE(vSwitchName_, vSwitchName) };


  protected:
    // The IPv4 CIDR block of the vSwitch.
    std::shared_ptr<string> cidrBlock_ = nullptr;
    // The time when the VPC was created. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> createdTime_ = nullptr;
    // The description of the vSwitch.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the ENS node.
    std::shared_ptr<string> ensRegionId_ = nullptr;
    // The number of available IP addresses.
    std::shared_ptr<int64_t> freeIpCount_ = nullptr;
    // The ID of the virtual private cloud (VPC).
    std::shared_ptr<string> networkId_ = nullptr;
    // The status of the vSwitch. Valid values:
    // 
    // *   Pending
    // *   Available
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<Models::DescribeVSwitchesResponseBodyVSwitchesVSwitchTags> tags_ = nullptr;
    // The ID of the vSwitch.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The name of the vSwitch.
    std::shared_ptr<string> vSwitchName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
