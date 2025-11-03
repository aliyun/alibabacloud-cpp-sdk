// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIPV6TRANSLATORSRESPONSEBODYIPV6TRANSLATORSIPV6TRANSLATOR_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIPV6TRANSLATORSRESPONSEBODYIPV6TRANSLATORSIPV6TRANSLATOR_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeIPv6TranslatorsResponseBodyIpv6TranslatorsIpv6TranslatorIpv6TranslatorEntryIds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeIPv6TranslatorsResponseBodyIpv6TranslatorsIpv6Translator : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIPv6TranslatorsResponseBodyIpv6TranslatorsIpv6Translator& obj) { 
      DARABONBA_PTR_TO_JSON(AllocateIpv4Addr, allocateIpv4Addr_);
      DARABONBA_PTR_TO_JSON(AllocateIpv6Addr, allocateIpv6Addr_);
      DARABONBA_PTR_TO_JSON(AvailableBandwidth, availableBandwidth_);
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(BusinessStatus, businessStatus_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Ipv6TranslatorEntryIds, ipv6TranslatorEntryIds_);
      DARABONBA_PTR_TO_JSON(Ipv6TranslatorId, ipv6TranslatorId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Spec, spec_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIPv6TranslatorsResponseBodyIpv6TranslatorsIpv6Translator& obj) { 
      DARABONBA_PTR_FROM_JSON(AllocateIpv4Addr, allocateIpv4Addr_);
      DARABONBA_PTR_FROM_JSON(AllocateIpv6Addr, allocateIpv6Addr_);
      DARABONBA_PTR_FROM_JSON(AvailableBandwidth, availableBandwidth_);
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(BusinessStatus, businessStatus_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Ipv6TranslatorEntryIds, ipv6TranslatorEntryIds_);
      DARABONBA_PTR_FROM_JSON(Ipv6TranslatorId, ipv6TranslatorId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Spec, spec_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeIPv6TranslatorsResponseBodyIpv6TranslatorsIpv6Translator() = default ;
    DescribeIPv6TranslatorsResponseBodyIpv6TranslatorsIpv6Translator(const DescribeIPv6TranslatorsResponseBodyIpv6TranslatorsIpv6Translator &) = default ;
    DescribeIPv6TranslatorsResponseBodyIpv6TranslatorsIpv6Translator(DescribeIPv6TranslatorsResponseBodyIpv6TranslatorsIpv6Translator &&) = default ;
    DescribeIPv6TranslatorsResponseBodyIpv6TranslatorsIpv6Translator(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIPv6TranslatorsResponseBodyIpv6TranslatorsIpv6Translator() = default ;
    DescribeIPv6TranslatorsResponseBodyIpv6TranslatorsIpv6Translator& operator=(const DescribeIPv6TranslatorsResponseBodyIpv6TranslatorsIpv6Translator &) = default ;
    DescribeIPv6TranslatorsResponseBodyIpv6TranslatorsIpv6Translator& operator=(DescribeIPv6TranslatorsResponseBodyIpv6TranslatorsIpv6Translator &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allocateIpv4Addr_ == nullptr
        && return this->allocateIpv6Addr_ == nullptr && return this->availableBandwidth_ == nullptr && return this->bandwidth_ == nullptr && return this->businessStatus_ == nullptr && return this->createTime_ == nullptr
        && return this->description_ == nullptr && return this->endTime_ == nullptr && return this->ipv6TranslatorEntryIds_ == nullptr && return this->ipv6TranslatorId_ == nullptr && return this->name_ == nullptr
        && return this->payType_ == nullptr && return this->regionId_ == nullptr && return this->spec_ == nullptr && return this->status_ == nullptr; };
    // allocateIpv4Addr Field Functions 
    bool hasAllocateIpv4Addr() const { return this->allocateIpv4Addr_ != nullptr;};
    void deleteAllocateIpv4Addr() { this->allocateIpv4Addr_ = nullptr;};
    inline string allocateIpv4Addr() const { DARABONBA_PTR_GET_DEFAULT(allocateIpv4Addr_, "") };
    inline DescribeIPv6TranslatorsResponseBodyIpv6TranslatorsIpv6Translator& setAllocateIpv4Addr(string allocateIpv4Addr) { DARABONBA_PTR_SET_VALUE(allocateIpv4Addr_, allocateIpv4Addr) };


    // allocateIpv6Addr Field Functions 
    bool hasAllocateIpv6Addr() const { return this->allocateIpv6Addr_ != nullptr;};
    void deleteAllocateIpv6Addr() { this->allocateIpv6Addr_ = nullptr;};
    inline string allocateIpv6Addr() const { DARABONBA_PTR_GET_DEFAULT(allocateIpv6Addr_, "") };
    inline DescribeIPv6TranslatorsResponseBodyIpv6TranslatorsIpv6Translator& setAllocateIpv6Addr(string allocateIpv6Addr) { DARABONBA_PTR_SET_VALUE(allocateIpv6Addr_, allocateIpv6Addr) };


    // availableBandwidth Field Functions 
    bool hasAvailableBandwidth() const { return this->availableBandwidth_ != nullptr;};
    void deleteAvailableBandwidth() { this->availableBandwidth_ = nullptr;};
    inline string availableBandwidth() const { DARABONBA_PTR_GET_DEFAULT(availableBandwidth_, "") };
    inline DescribeIPv6TranslatorsResponseBodyIpv6TranslatorsIpv6Translator& setAvailableBandwidth(string availableBandwidth) { DARABONBA_PTR_SET_VALUE(availableBandwidth_, availableBandwidth) };


    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int32_t bandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
    inline DescribeIPv6TranslatorsResponseBodyIpv6TranslatorsIpv6Translator& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // businessStatus Field Functions 
    bool hasBusinessStatus() const { return this->businessStatus_ != nullptr;};
    void deleteBusinessStatus() { this->businessStatus_ = nullptr;};
    inline string businessStatus() const { DARABONBA_PTR_GET_DEFAULT(businessStatus_, "") };
    inline DescribeIPv6TranslatorsResponseBodyIpv6TranslatorsIpv6Translator& setBusinessStatus(string businessStatus) { DARABONBA_PTR_SET_VALUE(businessStatus_, businessStatus) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline DescribeIPv6TranslatorsResponseBodyIpv6TranslatorsIpv6Translator& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeIPv6TranslatorsResponseBodyIpv6TranslatorsIpv6Translator& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeIPv6TranslatorsResponseBodyIpv6TranslatorsIpv6Translator& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // ipv6TranslatorEntryIds Field Functions 
    bool hasIpv6TranslatorEntryIds() const { return this->ipv6TranslatorEntryIds_ != nullptr;};
    void deleteIpv6TranslatorEntryIds() { this->ipv6TranslatorEntryIds_ = nullptr;};
    inline const Models::DescribeIPv6TranslatorsResponseBodyIpv6TranslatorsIpv6TranslatorIpv6TranslatorEntryIds & ipv6TranslatorEntryIds() const { DARABONBA_PTR_GET_CONST(ipv6TranslatorEntryIds_, Models::DescribeIPv6TranslatorsResponseBodyIpv6TranslatorsIpv6TranslatorIpv6TranslatorEntryIds) };
    inline Models::DescribeIPv6TranslatorsResponseBodyIpv6TranslatorsIpv6TranslatorIpv6TranslatorEntryIds ipv6TranslatorEntryIds() { DARABONBA_PTR_GET(ipv6TranslatorEntryIds_, Models::DescribeIPv6TranslatorsResponseBodyIpv6TranslatorsIpv6TranslatorIpv6TranslatorEntryIds) };
    inline DescribeIPv6TranslatorsResponseBodyIpv6TranslatorsIpv6Translator& setIpv6TranslatorEntryIds(const Models::DescribeIPv6TranslatorsResponseBodyIpv6TranslatorsIpv6TranslatorIpv6TranslatorEntryIds & ipv6TranslatorEntryIds) { DARABONBA_PTR_SET_VALUE(ipv6TranslatorEntryIds_, ipv6TranslatorEntryIds) };
    inline DescribeIPv6TranslatorsResponseBodyIpv6TranslatorsIpv6Translator& setIpv6TranslatorEntryIds(Models::DescribeIPv6TranslatorsResponseBodyIpv6TranslatorsIpv6TranslatorIpv6TranslatorEntryIds && ipv6TranslatorEntryIds) { DARABONBA_PTR_SET_RVALUE(ipv6TranslatorEntryIds_, ipv6TranslatorEntryIds) };


    // ipv6TranslatorId Field Functions 
    bool hasIpv6TranslatorId() const { return this->ipv6TranslatorId_ != nullptr;};
    void deleteIpv6TranslatorId() { this->ipv6TranslatorId_ = nullptr;};
    inline string ipv6TranslatorId() const { DARABONBA_PTR_GET_DEFAULT(ipv6TranslatorId_, "") };
    inline DescribeIPv6TranslatorsResponseBodyIpv6TranslatorsIpv6Translator& setIpv6TranslatorId(string ipv6TranslatorId) { DARABONBA_PTR_SET_VALUE(ipv6TranslatorId_, ipv6TranslatorId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeIPv6TranslatorsResponseBodyIpv6TranslatorsIpv6Translator& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline DescribeIPv6TranslatorsResponseBodyIpv6TranslatorsIpv6Translator& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeIPv6TranslatorsResponseBodyIpv6TranslatorsIpv6Translator& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline string spec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
    inline DescribeIPv6TranslatorsResponseBodyIpv6TranslatorsIpv6Translator& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeIPv6TranslatorsResponseBodyIpv6TranslatorsIpv6Translator& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The IPv4 address allocated to the IPv6 Translation Service instance.
    std::shared_ptr<string> allocateIpv4Addr_ = nullptr;
    // The IPv6 address allocated to the IPv6 Translation Service instance.
    std::shared_ptr<string> allocateIpv6Addr_ = nullptr;
    // The bandwidth of the IPv6 Translation Service instance.
    std::shared_ptr<string> availableBandwidth_ = nullptr;
    // The bandwidth of the IPv6 Translation Service instance. Unit: Mbit/s.
    std::shared_ptr<int32_t> bandwidth_ = nullptr;
    // The business status of the IPv6 Translation Service instance. Valid values:
    // 
    // *   **Normal**
    // *   **FinancialLocked**
    std::shared_ptr<string> businessStatus_ = nullptr;
    // The timestamp when the IPv6 Translation Service instance was created.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The description of the IPv6 Translation Service instance.
    std::shared_ptr<string> description_ = nullptr;
    // The timestamp when IPv6 Translation Service instance expires.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The IDs of IPv6 mapping entries of the IPv6 Translation Service instance.
    std::shared_ptr<Models::DescribeIPv6TranslatorsResponseBodyIpv6TranslatorsIpv6TranslatorIpv6TranslatorEntryIds> ipv6TranslatorEntryIds_ = nullptr;
    // The ID of the IPv6 Translation Service instance.
    std::shared_ptr<string> ipv6TranslatorId_ = nullptr;
    // The name of the IPv6 Translation Service instance.
    std::shared_ptr<string> name_ = nullptr;
    // The billing method of the IPv6 Translation Service instance.
    // 
    // *   **Prepay**: subscription
    // *   **Postpay**: pay-as-you-go
    std::shared_ptr<string> payType_ = nullptr;
    // The region of the IPv6 Translation Service instance.
    std::shared_ptr<string> regionId_ = nullptr;
    // The specification of the IPv6 Translation Service instance.
    std::shared_ptr<string> spec_ = nullptr;
    // The status of the IPv6 Translation Service instance.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
