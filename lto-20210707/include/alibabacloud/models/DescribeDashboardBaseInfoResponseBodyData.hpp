// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDASHBOARDBASEINFORESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDASHBOARDBASEINFORESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Lto20210707
{
namespace Models
{
  class DescribeDashboardBaseInfoResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDashboardBaseInfoResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ApiInvokeCount, apiInvokeCount_);
      DARABONBA_PTR_TO_JSON(BizChainCount, bizChainCount_);
      DARABONBA_PTR_TO_JSON(DeviceCount, deviceCount_);
      DARABONBA_PTR_TO_JSON(MemberCount, memberCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDashboardBaseInfoResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiInvokeCount, apiInvokeCount_);
      DARABONBA_PTR_FROM_JSON(BizChainCount, bizChainCount_);
      DARABONBA_PTR_FROM_JSON(DeviceCount, deviceCount_);
      DARABONBA_PTR_FROM_JSON(MemberCount, memberCount_);
    };
    DescribeDashboardBaseInfoResponseBodyData() = default ;
    DescribeDashboardBaseInfoResponseBodyData(const DescribeDashboardBaseInfoResponseBodyData &) = default ;
    DescribeDashboardBaseInfoResponseBodyData(DescribeDashboardBaseInfoResponseBodyData &&) = default ;
    DescribeDashboardBaseInfoResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDashboardBaseInfoResponseBodyData() = default ;
    DescribeDashboardBaseInfoResponseBodyData& operator=(const DescribeDashboardBaseInfoResponseBodyData &) = default ;
    DescribeDashboardBaseInfoResponseBodyData& operator=(DescribeDashboardBaseInfoResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiInvokeCount_ == nullptr
        && return this->bizChainCount_ == nullptr && return this->deviceCount_ == nullptr && return this->memberCount_ == nullptr; };
    // apiInvokeCount Field Functions 
    bool hasApiInvokeCount() const { return this->apiInvokeCount_ != nullptr;};
    void deleteApiInvokeCount() { this->apiInvokeCount_ = nullptr;};
    inline int64_t apiInvokeCount() const { DARABONBA_PTR_GET_DEFAULT(apiInvokeCount_, 0L) };
    inline DescribeDashboardBaseInfoResponseBodyData& setApiInvokeCount(int64_t apiInvokeCount) { DARABONBA_PTR_SET_VALUE(apiInvokeCount_, apiInvokeCount) };


    // bizChainCount Field Functions 
    bool hasBizChainCount() const { return this->bizChainCount_ != nullptr;};
    void deleteBizChainCount() { this->bizChainCount_ = nullptr;};
    inline int32_t bizChainCount() const { DARABONBA_PTR_GET_DEFAULT(bizChainCount_, 0) };
    inline DescribeDashboardBaseInfoResponseBodyData& setBizChainCount(int32_t bizChainCount) { DARABONBA_PTR_SET_VALUE(bizChainCount_, bizChainCount) };


    // deviceCount Field Functions 
    bool hasDeviceCount() const { return this->deviceCount_ != nullptr;};
    void deleteDeviceCount() { this->deviceCount_ = nullptr;};
    inline int32_t deviceCount() const { DARABONBA_PTR_GET_DEFAULT(deviceCount_, 0) };
    inline DescribeDashboardBaseInfoResponseBodyData& setDeviceCount(int32_t deviceCount) { DARABONBA_PTR_SET_VALUE(deviceCount_, deviceCount) };


    // memberCount Field Functions 
    bool hasMemberCount() const { return this->memberCount_ != nullptr;};
    void deleteMemberCount() { this->memberCount_ = nullptr;};
    inline int32_t memberCount() const { DARABONBA_PTR_GET_DEFAULT(memberCount_, 0) };
    inline DescribeDashboardBaseInfoResponseBodyData& setMemberCount(int32_t memberCount) { DARABONBA_PTR_SET_VALUE(memberCount_, memberCount) };


  protected:
    std::shared_ptr<int64_t> apiInvokeCount_ = nullptr;
    std::shared_ptr<int32_t> bizChainCount_ = nullptr;
    std::shared_ptr<int32_t> deviceCount_ = nullptr;
    std::shared_ptr<int32_t> memberCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Lto20210707
#endif
