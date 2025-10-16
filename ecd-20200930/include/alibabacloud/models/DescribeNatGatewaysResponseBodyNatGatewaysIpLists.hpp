// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENATGATEWAYSRESPONSEBODYNATGATEWAYSIPLISTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENATGATEWAYSRESPONSEBODYNATGATEWAYSIPLISTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeNatGatewaysResponseBodyNatGatewaysIpLists : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNatGatewaysResponseBodyNatGatewaysIpLists& obj) { 
      DARABONBA_PTR_TO_JSON(AllocationId, allocationId_);
      DARABONBA_PTR_TO_JSON(IpAddress, ipAddress_);
      DARABONBA_PTR_TO_JSON(PrivateIpAddress, privateIpAddress_);
      DARABONBA_PTR_TO_JSON(SnatEntryEnabled, snatEntryEnabled_);
      DARABONBA_PTR_TO_JSON(UsingStatus, usingStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNatGatewaysResponseBodyNatGatewaysIpLists& obj) { 
      DARABONBA_PTR_FROM_JSON(AllocationId, allocationId_);
      DARABONBA_PTR_FROM_JSON(IpAddress, ipAddress_);
      DARABONBA_PTR_FROM_JSON(PrivateIpAddress, privateIpAddress_);
      DARABONBA_PTR_FROM_JSON(SnatEntryEnabled, snatEntryEnabled_);
      DARABONBA_PTR_FROM_JSON(UsingStatus, usingStatus_);
    };
    DescribeNatGatewaysResponseBodyNatGatewaysIpLists() = default ;
    DescribeNatGatewaysResponseBodyNatGatewaysIpLists(const DescribeNatGatewaysResponseBodyNatGatewaysIpLists &) = default ;
    DescribeNatGatewaysResponseBodyNatGatewaysIpLists(DescribeNatGatewaysResponseBodyNatGatewaysIpLists &&) = default ;
    DescribeNatGatewaysResponseBodyNatGatewaysIpLists(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNatGatewaysResponseBodyNatGatewaysIpLists() = default ;
    DescribeNatGatewaysResponseBodyNatGatewaysIpLists& operator=(const DescribeNatGatewaysResponseBodyNatGatewaysIpLists &) = default ;
    DescribeNatGatewaysResponseBodyNatGatewaysIpLists& operator=(DescribeNatGatewaysResponseBodyNatGatewaysIpLists &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allocationId_ == nullptr
        && return this->ipAddress_ == nullptr && return this->privateIpAddress_ == nullptr && return this->snatEntryEnabled_ == nullptr && return this->usingStatus_ == nullptr; };
    // allocationId Field Functions 
    bool hasAllocationId() const { return this->allocationId_ != nullptr;};
    void deleteAllocationId() { this->allocationId_ = nullptr;};
    inline string allocationId() const { DARABONBA_PTR_GET_DEFAULT(allocationId_, "") };
    inline DescribeNatGatewaysResponseBodyNatGatewaysIpLists& setAllocationId(string allocationId) { DARABONBA_PTR_SET_VALUE(allocationId_, allocationId) };


    // ipAddress Field Functions 
    bool hasIpAddress() const { return this->ipAddress_ != nullptr;};
    void deleteIpAddress() { this->ipAddress_ = nullptr;};
    inline string ipAddress() const { DARABONBA_PTR_GET_DEFAULT(ipAddress_, "") };
    inline DescribeNatGatewaysResponseBodyNatGatewaysIpLists& setIpAddress(string ipAddress) { DARABONBA_PTR_SET_VALUE(ipAddress_, ipAddress) };


    // privateIpAddress Field Functions 
    bool hasPrivateIpAddress() const { return this->privateIpAddress_ != nullptr;};
    void deletePrivateIpAddress() { this->privateIpAddress_ = nullptr;};
    inline string privateIpAddress() const { DARABONBA_PTR_GET_DEFAULT(privateIpAddress_, "") };
    inline DescribeNatGatewaysResponseBodyNatGatewaysIpLists& setPrivateIpAddress(string privateIpAddress) { DARABONBA_PTR_SET_VALUE(privateIpAddress_, privateIpAddress) };


    // snatEntryEnabled Field Functions 
    bool hasSnatEntryEnabled() const { return this->snatEntryEnabled_ != nullptr;};
    void deleteSnatEntryEnabled() { this->snatEntryEnabled_ = nullptr;};
    inline string snatEntryEnabled() const { DARABONBA_PTR_GET_DEFAULT(snatEntryEnabled_, "") };
    inline DescribeNatGatewaysResponseBodyNatGatewaysIpLists& setSnatEntryEnabled(string snatEntryEnabled) { DARABONBA_PTR_SET_VALUE(snatEntryEnabled_, snatEntryEnabled) };


    // usingStatus Field Functions 
    bool hasUsingStatus() const { return this->usingStatus_ != nullptr;};
    void deleteUsingStatus() { this->usingStatus_ = nullptr;};
    inline string usingStatus() const { DARABONBA_PTR_GET_DEFAULT(usingStatus_, "") };
    inline DescribeNatGatewaysResponseBodyNatGatewaysIpLists& setUsingStatus(string usingStatus) { DARABONBA_PTR_SET_VALUE(usingStatus_, usingStatus) };


  protected:
    std::shared_ptr<string> allocationId_ = nullptr;
    std::shared_ptr<string> ipAddress_ = nullptr;
    std::shared_ptr<string> privateIpAddress_ = nullptr;
    std::shared_ptr<string> snatEntryEnabled_ = nullptr;
    std::shared_ptr<string> usingStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
