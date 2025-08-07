// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSWITCHESRESPONSEBODYVSWITCHS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSWITCHESRESPONSEBODYVSWITCHS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeVSwitchesResponseBodyVSwitchs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVSwitchesResponseBodyVSwitchs& obj) { 
      DARABONBA_PTR_TO_JSON(AvailableIpAddressCount, availableIpAddressCount_);
      DARABONBA_PTR_TO_JSON(CidrBlock, cidrBlock_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_TO_JSON(IzNo, izNo_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VSwitchName, vSwitchName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVSwitchesResponseBodyVSwitchs& obj) { 
      DARABONBA_PTR_FROM_JSON(AvailableIpAddressCount, availableIpAddressCount_);
      DARABONBA_PTR_FROM_JSON(CidrBlock, cidrBlock_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_FROM_JSON(IzNo, izNo_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VSwitchName, vSwitchName_);
    };
    DescribeVSwitchesResponseBodyVSwitchs() = default ;
    DescribeVSwitchesResponseBodyVSwitchs(const DescribeVSwitchesResponseBodyVSwitchs &) = default ;
    DescribeVSwitchesResponseBodyVSwitchs(DescribeVSwitchesResponseBodyVSwitchs &&) = default ;
    DescribeVSwitchesResponseBodyVSwitchs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVSwitchesResponseBodyVSwitchs() = default ;
    DescribeVSwitchesResponseBodyVSwitchs& operator=(const DescribeVSwitchesResponseBodyVSwitchs &) = default ;
    DescribeVSwitchesResponseBodyVSwitchs& operator=(DescribeVSwitchesResponseBodyVSwitchs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->availableIpAddressCount_ != nullptr
        && this->cidrBlock_ != nullptr && this->description_ != nullptr && this->isDefault_ != nullptr && this->izNo_ != nullptr && this->status_ != nullptr
        && this->vSwitchId_ != nullptr && this->vSwitchName_ != nullptr; };
    // availableIpAddressCount Field Functions 
    bool hasAvailableIpAddressCount() const { return this->availableIpAddressCount_ != nullptr;};
    void deleteAvailableIpAddressCount() { this->availableIpAddressCount_ = nullptr;};
    inline int64_t availableIpAddressCount() const { DARABONBA_PTR_GET_DEFAULT(availableIpAddressCount_, 0L) };
    inline DescribeVSwitchesResponseBodyVSwitchs& setAvailableIpAddressCount(int64_t availableIpAddressCount) { DARABONBA_PTR_SET_VALUE(availableIpAddressCount_, availableIpAddressCount) };


    // cidrBlock Field Functions 
    bool hasCidrBlock() const { return this->cidrBlock_ != nullptr;};
    void deleteCidrBlock() { this->cidrBlock_ = nullptr;};
    inline string cidrBlock() const { DARABONBA_PTR_GET_DEFAULT(cidrBlock_, "") };
    inline DescribeVSwitchesResponseBodyVSwitchs& setCidrBlock(string cidrBlock) { DARABONBA_PTR_SET_VALUE(cidrBlock_, cidrBlock) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeVSwitchesResponseBodyVSwitchs& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // isDefault Field Functions 
    bool hasIsDefault() const { return this->isDefault_ != nullptr;};
    void deleteIsDefault() { this->isDefault_ = nullptr;};
    inline bool isDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
    inline DescribeVSwitchesResponseBodyVSwitchs& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


    // izNo Field Functions 
    bool hasIzNo() const { return this->izNo_ != nullptr;};
    void deleteIzNo() { this->izNo_ = nullptr;};
    inline string izNo() const { DARABONBA_PTR_GET_DEFAULT(izNo_, "") };
    inline DescribeVSwitchesResponseBodyVSwitchs& setIzNo(string izNo) { DARABONBA_PTR_SET_VALUE(izNo_, izNo) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeVSwitchesResponseBodyVSwitchs& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeVSwitchesResponseBodyVSwitchs& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vSwitchName Field Functions 
    bool hasVSwitchName() const { return this->vSwitchName_ != nullptr;};
    void deleteVSwitchName() { this->vSwitchName_ = nullptr;};
    inline string vSwitchName() const { DARABONBA_PTR_GET_DEFAULT(vSwitchName_, "") };
    inline DescribeVSwitchesResponseBodyVSwitchs& setVSwitchName(string vSwitchName) { DARABONBA_PTR_SET_VALUE(vSwitchName_, vSwitchName) };


  protected:
    // The number of available IP addresses in the vSwitch.
    std::shared_ptr<int64_t> availableIpAddressCount_ = nullptr;
    // The IPv4 CIDR block of the vSwitch.
    std::shared_ptr<string> cidrBlock_ = nullptr;
    // The description of the vSwitch.
    std::shared_ptr<string> description_ = nullptr;
    // Indicates whether the vSwitch is the default vSwitch. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> isDefault_ = nullptr;
    // The zone to which the NAT gateway belongs.
    std::shared_ptr<string> izNo_ = nullptr;
    // The status of the vSwitch. Valid values:
    // 
    // *   **Pending**: The vSwitch is being configured.
    // *   **Available**: The vSwitch is available.
    std::shared_ptr<string> status_ = nullptr;
    // The vSwitch ID.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The name of the vSwitch.
    std::shared_ptr<string> vSwitchName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
