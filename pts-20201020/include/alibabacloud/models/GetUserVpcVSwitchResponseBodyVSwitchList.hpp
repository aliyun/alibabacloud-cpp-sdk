// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERVPCVSWITCHRESPONSEBODYVSWITCHLIST_HPP_
#define ALIBABACLOUD_MODELS_GETUSERVPCVSWITCHRESPONSEBODYVSWITCHLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PTS20201020
{
namespace Models
{
  class GetUserVpcVSwitchResponseBodyVSwitchList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserVpcVSwitchResponseBodyVSwitchList& obj) { 
      DARABONBA_PTR_TO_JSON(AvailableIpAddressCount, availableIpAddressCount_);
      DARABONBA_PTR_TO_JSON(MaxAgentCount, maxAgentCount_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VSwitchName, vSwitchName_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserVpcVSwitchResponseBodyVSwitchList& obj) { 
      DARABONBA_PTR_FROM_JSON(AvailableIpAddressCount, availableIpAddressCount_);
      DARABONBA_PTR_FROM_JSON(MaxAgentCount, maxAgentCount_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VSwitchName, vSwitchName_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    GetUserVpcVSwitchResponseBodyVSwitchList() = default ;
    GetUserVpcVSwitchResponseBodyVSwitchList(const GetUserVpcVSwitchResponseBodyVSwitchList &) = default ;
    GetUserVpcVSwitchResponseBodyVSwitchList(GetUserVpcVSwitchResponseBodyVSwitchList &&) = default ;
    GetUserVpcVSwitchResponseBodyVSwitchList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserVpcVSwitchResponseBodyVSwitchList() = default ;
    GetUserVpcVSwitchResponseBodyVSwitchList& operator=(const GetUserVpcVSwitchResponseBodyVSwitchList &) = default ;
    GetUserVpcVSwitchResponseBodyVSwitchList& operator=(GetUserVpcVSwitchResponseBodyVSwitchList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->availableIpAddressCount_ == nullptr
        && return this->maxAgentCount_ == nullptr && return this->vSwitchId_ == nullptr && return this->vSwitchName_ == nullptr && return this->vpcId_ == nullptr; };
    // availableIpAddressCount Field Functions 
    bool hasAvailableIpAddressCount() const { return this->availableIpAddressCount_ != nullptr;};
    void deleteAvailableIpAddressCount() { this->availableIpAddressCount_ = nullptr;};
    inline int64_t availableIpAddressCount() const { DARABONBA_PTR_GET_DEFAULT(availableIpAddressCount_, 0L) };
    inline GetUserVpcVSwitchResponseBodyVSwitchList& setAvailableIpAddressCount(int64_t availableIpAddressCount) { DARABONBA_PTR_SET_VALUE(availableIpAddressCount_, availableIpAddressCount) };


    // maxAgentCount Field Functions 
    bool hasMaxAgentCount() const { return this->maxAgentCount_ != nullptr;};
    void deleteMaxAgentCount() { this->maxAgentCount_ = nullptr;};
    inline int32_t maxAgentCount() const { DARABONBA_PTR_GET_DEFAULT(maxAgentCount_, 0) };
    inline GetUserVpcVSwitchResponseBodyVSwitchList& setMaxAgentCount(int32_t maxAgentCount) { DARABONBA_PTR_SET_VALUE(maxAgentCount_, maxAgentCount) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline GetUserVpcVSwitchResponseBodyVSwitchList& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vSwitchName Field Functions 
    bool hasVSwitchName() const { return this->vSwitchName_ != nullptr;};
    void deleteVSwitchName() { this->vSwitchName_ = nullptr;};
    inline string vSwitchName() const { DARABONBA_PTR_GET_DEFAULT(vSwitchName_, "") };
    inline GetUserVpcVSwitchResponseBodyVSwitchList& setVSwitchName(string vSwitchName) { DARABONBA_PTR_SET_VALUE(vSwitchName_, vSwitchName) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline GetUserVpcVSwitchResponseBodyVSwitchList& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The number of available IP addresses in the vSwitch.
    std::shared_ptr<int64_t> availableIpAddressCount_ = nullptr;
    // The maximum number of stress testers to be added.
    std::shared_ptr<int32_t> maxAgentCount_ = nullptr;
    // The vSwitch ID.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The vSwitch name.
    std::shared_ptr<string> vSwitchName_ = nullptr;
    // The VPC ID.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PTS20201020
#endif
