// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIPADDRESSESRESPONSEBODYIPADDRESSES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIPADDRESSESRESPONSEBODYIPADDRESSES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeIpAddressesResponseBodyIpAddresses : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIpAddressesResponseBodyIpAddresses& obj) { 
      DARABONBA_PTR_TO_JSON(CreateByWuying, createByWuying_);
      DARABONBA_PTR_TO_JSON(EipAddress, eipAddress_);
      DARABONBA_PTR_TO_JSON(EipId, eipId_);
      DARABONBA_PTR_TO_JSON(EipStatus, eipStatus_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIpAddressesResponseBodyIpAddresses& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateByWuying, createByWuying_);
      DARABONBA_PTR_FROM_JSON(EipAddress, eipAddress_);
      DARABONBA_PTR_FROM_JSON(EipId, eipId_);
      DARABONBA_PTR_FROM_JSON(EipStatus, eipStatus_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
    };
    DescribeIpAddressesResponseBodyIpAddresses() = default ;
    DescribeIpAddressesResponseBodyIpAddresses(const DescribeIpAddressesResponseBodyIpAddresses &) = default ;
    DescribeIpAddressesResponseBodyIpAddresses(DescribeIpAddressesResponseBodyIpAddresses &&) = default ;
    DescribeIpAddressesResponseBodyIpAddresses(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIpAddressesResponseBodyIpAddresses() = default ;
    DescribeIpAddressesResponseBodyIpAddresses& operator=(const DescribeIpAddressesResponseBodyIpAddresses &) = default ;
    DescribeIpAddressesResponseBodyIpAddresses& operator=(DescribeIpAddressesResponseBodyIpAddresses &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createByWuying_ == nullptr
        && return this->eipAddress_ == nullptr && return this->eipId_ == nullptr && return this->eipStatus_ == nullptr && return this->instanceId_ == nullptr && return this->instanceType_ == nullptr; };
    // createByWuying Field Functions 
    bool hasCreateByWuying() const { return this->createByWuying_ != nullptr;};
    void deleteCreateByWuying() { this->createByWuying_ = nullptr;};
    inline bool createByWuying() const { DARABONBA_PTR_GET_DEFAULT(createByWuying_, false) };
    inline DescribeIpAddressesResponseBodyIpAddresses& setCreateByWuying(bool createByWuying) { DARABONBA_PTR_SET_VALUE(createByWuying_, createByWuying) };


    // eipAddress Field Functions 
    bool hasEipAddress() const { return this->eipAddress_ != nullptr;};
    void deleteEipAddress() { this->eipAddress_ = nullptr;};
    inline string eipAddress() const { DARABONBA_PTR_GET_DEFAULT(eipAddress_, "") };
    inline DescribeIpAddressesResponseBodyIpAddresses& setEipAddress(string eipAddress) { DARABONBA_PTR_SET_VALUE(eipAddress_, eipAddress) };


    // eipId Field Functions 
    bool hasEipId() const { return this->eipId_ != nullptr;};
    void deleteEipId() { this->eipId_ = nullptr;};
    inline string eipId() const { DARABONBA_PTR_GET_DEFAULT(eipId_, "") };
    inline DescribeIpAddressesResponseBodyIpAddresses& setEipId(string eipId) { DARABONBA_PTR_SET_VALUE(eipId_, eipId) };


    // eipStatus Field Functions 
    bool hasEipStatus() const { return this->eipStatus_ != nullptr;};
    void deleteEipStatus() { this->eipStatus_ = nullptr;};
    inline string eipStatus() const { DARABONBA_PTR_GET_DEFAULT(eipStatus_, "") };
    inline DescribeIpAddressesResponseBodyIpAddresses& setEipStatus(string eipStatus) { DARABONBA_PTR_SET_VALUE(eipStatus_, eipStatus) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeIpAddressesResponseBodyIpAddresses& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DescribeIpAddressesResponseBodyIpAddresses& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


  protected:
    std::shared_ptr<bool> createByWuying_ = nullptr;
    std::shared_ptr<string> eipAddress_ = nullptr;
    std::shared_ptr<string> eipId_ = nullptr;
    std::shared_ptr<string> eipStatus_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> instanceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
