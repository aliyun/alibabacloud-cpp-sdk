// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSWITCHLISTRESPONSEBODYVSWITCHES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSWITCHLISTRESPONSEBODYVSWITCHES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeVSwitchListResponseBodyVSwitches : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVSwitchListResponseBodyVSwitches& obj) { 
      DARABONBA_PTR_TO_JSON(AvailableIpAddressCount, availableIpAddressCount_);
      DARABONBA_PTR_TO_JSON(CidrBlock, cidrBlock_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_TO_JSON(IzNo, izNo_);
      DARABONBA_PTR_TO_JSON(ShareType, shareType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VSwitchName, vSwitchName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVSwitchListResponseBodyVSwitches& obj) { 
      DARABONBA_PTR_FROM_JSON(AvailableIpAddressCount, availableIpAddressCount_);
      DARABONBA_PTR_FROM_JSON(CidrBlock, cidrBlock_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_FROM_JSON(IzNo, izNo_);
      DARABONBA_PTR_FROM_JSON(ShareType, shareType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VSwitchName, vSwitchName_);
    };
    DescribeVSwitchListResponseBodyVSwitches() = default ;
    DescribeVSwitchListResponseBodyVSwitches(const DescribeVSwitchListResponseBodyVSwitches &) = default ;
    DescribeVSwitchListResponseBodyVSwitches(DescribeVSwitchListResponseBodyVSwitches &&) = default ;
    DescribeVSwitchListResponseBodyVSwitches(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVSwitchListResponseBodyVSwitches() = default ;
    DescribeVSwitchListResponseBodyVSwitches& operator=(const DescribeVSwitchListResponseBodyVSwitches &) = default ;
    DescribeVSwitchListResponseBodyVSwitches& operator=(DescribeVSwitchListResponseBodyVSwitches &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->availableIpAddressCount_ == nullptr
        && return this->cidrBlock_ == nullptr && return this->description_ == nullptr && return this->gmtCreate_ == nullptr && return this->isDefault_ == nullptr && return this->izNo_ == nullptr
        && return this->shareType_ == nullptr && return this->status_ == nullptr && return this->vSwitchId_ == nullptr && return this->vSwitchName_ == nullptr; };
    // availableIpAddressCount Field Functions 
    bool hasAvailableIpAddressCount() const { return this->availableIpAddressCount_ != nullptr;};
    void deleteAvailableIpAddressCount() { this->availableIpAddressCount_ = nullptr;};
    inline string availableIpAddressCount() const { DARABONBA_PTR_GET_DEFAULT(availableIpAddressCount_, "") };
    inline DescribeVSwitchListResponseBodyVSwitches& setAvailableIpAddressCount(string availableIpAddressCount) { DARABONBA_PTR_SET_VALUE(availableIpAddressCount_, availableIpAddressCount) };


    // cidrBlock Field Functions 
    bool hasCidrBlock() const { return this->cidrBlock_ != nullptr;};
    void deleteCidrBlock() { this->cidrBlock_ = nullptr;};
    inline string cidrBlock() const { DARABONBA_PTR_GET_DEFAULT(cidrBlock_, "") };
    inline DescribeVSwitchListResponseBodyVSwitches& setCidrBlock(string cidrBlock) { DARABONBA_PTR_SET_VALUE(cidrBlock_, cidrBlock) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeVSwitchListResponseBodyVSwitches& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline DescribeVSwitchListResponseBodyVSwitches& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // isDefault Field Functions 
    bool hasIsDefault() const { return this->isDefault_ != nullptr;};
    void deleteIsDefault() { this->isDefault_ = nullptr;};
    inline string isDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, "") };
    inline DescribeVSwitchListResponseBodyVSwitches& setIsDefault(string isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


    // izNo Field Functions 
    bool hasIzNo() const { return this->izNo_ != nullptr;};
    void deleteIzNo() { this->izNo_ = nullptr;};
    inline string izNo() const { DARABONBA_PTR_GET_DEFAULT(izNo_, "") };
    inline DescribeVSwitchListResponseBodyVSwitches& setIzNo(string izNo) { DARABONBA_PTR_SET_VALUE(izNo_, izNo) };


    // shareType Field Functions 
    bool hasShareType() const { return this->shareType_ != nullptr;};
    void deleteShareType() { this->shareType_ = nullptr;};
    inline string shareType() const { DARABONBA_PTR_GET_DEFAULT(shareType_, "") };
    inline DescribeVSwitchListResponseBodyVSwitches& setShareType(string shareType) { DARABONBA_PTR_SET_VALUE(shareType_, shareType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeVSwitchListResponseBodyVSwitches& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeVSwitchListResponseBodyVSwitches& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vSwitchName Field Functions 
    bool hasVSwitchName() const { return this->vSwitchName_ != nullptr;};
    void deleteVSwitchName() { this->vSwitchName_ = nullptr;};
    inline string vSwitchName() const { DARABONBA_PTR_GET_DEFAULT(vSwitchName_, "") };
    inline DescribeVSwitchListResponseBodyVSwitches& setVSwitchName(string vSwitchName) { DARABONBA_PTR_SET_VALUE(vSwitchName_, vSwitchName) };


  protected:
    std::shared_ptr<string> availableIpAddressCount_ = nullptr;
    std::shared_ptr<string> cidrBlock_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> isDefault_ = nullptr;
    std::shared_ptr<string> izNo_ = nullptr;
    std::shared_ptr<string> shareType_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> vSwitchId_ = nullptr;
    std::shared_ptr<string> vSwitchName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
