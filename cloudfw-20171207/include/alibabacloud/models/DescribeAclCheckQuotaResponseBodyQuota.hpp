// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACLCHECKQUOTARESPONSEBODYQUOTA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACLCHECKQUOTARESPONSEBODYQUOTA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeAclCheckQuotaResponseBodyQuota : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAclCheckQuotaResponseBodyQuota& obj) { 
      DARABONBA_PTR_TO_JSON(AvailableQuota, availableQuota_);
      DARABONBA_PTR_TO_JSON(ConsumedQuota, consumedQuota_);
      DARABONBA_PTR_TO_JSON(TotalQuota, totalQuota_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAclCheckQuotaResponseBodyQuota& obj) { 
      DARABONBA_PTR_FROM_JSON(AvailableQuota, availableQuota_);
      DARABONBA_PTR_FROM_JSON(ConsumedQuota, consumedQuota_);
      DARABONBA_PTR_FROM_JSON(TotalQuota, totalQuota_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    DescribeAclCheckQuotaResponseBodyQuota() = default ;
    DescribeAclCheckQuotaResponseBodyQuota(const DescribeAclCheckQuotaResponseBodyQuota &) = default ;
    DescribeAclCheckQuotaResponseBodyQuota(DescribeAclCheckQuotaResponseBodyQuota &&) = default ;
    DescribeAclCheckQuotaResponseBodyQuota(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAclCheckQuotaResponseBodyQuota() = default ;
    DescribeAclCheckQuotaResponseBodyQuota& operator=(const DescribeAclCheckQuotaResponseBodyQuota &) = default ;
    DescribeAclCheckQuotaResponseBodyQuota& operator=(DescribeAclCheckQuotaResponseBodyQuota &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->availableQuota_ == nullptr
        && return this->consumedQuota_ == nullptr && return this->totalQuota_ == nullptr && return this->updateTime_ == nullptr; };
    // availableQuota Field Functions 
    bool hasAvailableQuota() const { return this->availableQuota_ != nullptr;};
    void deleteAvailableQuota() { this->availableQuota_ = nullptr;};
    inline int64_t availableQuota() const { DARABONBA_PTR_GET_DEFAULT(availableQuota_, 0L) };
    inline DescribeAclCheckQuotaResponseBodyQuota& setAvailableQuota(int64_t availableQuota) { DARABONBA_PTR_SET_VALUE(availableQuota_, availableQuota) };


    // consumedQuota Field Functions 
    bool hasConsumedQuota() const { return this->consumedQuota_ != nullptr;};
    void deleteConsumedQuota() { this->consumedQuota_ = nullptr;};
    inline int64_t consumedQuota() const { DARABONBA_PTR_GET_DEFAULT(consumedQuota_, 0L) };
    inline DescribeAclCheckQuotaResponseBodyQuota& setConsumedQuota(int64_t consumedQuota) { DARABONBA_PTR_SET_VALUE(consumedQuota_, consumedQuota) };


    // totalQuota Field Functions 
    bool hasTotalQuota() const { return this->totalQuota_ != nullptr;};
    void deleteTotalQuota() { this->totalQuota_ = nullptr;};
    inline int64_t totalQuota() const { DARABONBA_PTR_GET_DEFAULT(totalQuota_, 0L) };
    inline DescribeAclCheckQuotaResponseBodyQuota& setTotalQuota(int64_t totalQuota) { DARABONBA_PTR_SET_VALUE(totalQuota_, totalQuota) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline DescribeAclCheckQuotaResponseBodyQuota& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    std::shared_ptr<int64_t> availableQuota_ = nullptr;
    std::shared_ptr<int64_t> consumedQuota_ = nullptr;
    std::shared_ptr<int64_t> totalQuota_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
