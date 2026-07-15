// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECACHERESERVEPRICEGAPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECACHERESERVEPRICEGAPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class DescribeCacheReservePriceGapRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCacheReservePriceGapRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(TargetQuotaGb, targetQuotaGb_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCacheReservePriceGapRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(TargetQuotaGb, targetQuotaGb_);
    };
    DescribeCacheReservePriceGapRequest() = default ;
    DescribeCacheReservePriceGapRequest(const DescribeCacheReservePriceGapRequest &) = default ;
    DescribeCacheReservePriceGapRequest(DescribeCacheReservePriceGapRequest &&) = default ;
    DescribeCacheReservePriceGapRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCacheReservePriceGapRequest() = default ;
    DescribeCacheReservePriceGapRequest& operator=(const DescribeCacheReservePriceGapRequest &) = default ;
    DescribeCacheReservePriceGapRequest& operator=(DescribeCacheReservePriceGapRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->targetQuotaGb_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeCacheReservePriceGapRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // targetQuotaGb Field Functions 
    bool hasTargetQuotaGb() const { return this->targetQuotaGb_ != nullptr;};
    void deleteTargetQuotaGb() { this->targetQuotaGb_ = nullptr;};
    inline int64_t getTargetQuotaGb() const { DARABONBA_PTR_GET_DEFAULT(targetQuotaGb_, 0L) };
    inline DescribeCacheReservePriceGapRequest& setTargetQuotaGb(int64_t targetQuotaGb) { DARABONBA_PTR_SET_VALUE(targetQuotaGb_, targetQuotaGb) };


  protected:
    // The instance ID.
    shared_ptr<string> instanceId_ {};
    // The requested cache size. Unit: GB.
    shared_ptr<int64_t> targetQuotaGb_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
