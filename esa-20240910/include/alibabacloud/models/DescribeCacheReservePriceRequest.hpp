// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECACHERESERVEPRICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECACHERESERVEPRICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class DescribeCacheReservePriceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCacheReservePriceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CrRegion, crRegion_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(QuotaGb, quotaGb_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCacheReservePriceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CrRegion, crRegion_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(QuotaGb, quotaGb_);
    };
    DescribeCacheReservePriceRequest() = default ;
    DescribeCacheReservePriceRequest(const DescribeCacheReservePriceRequest &) = default ;
    DescribeCacheReservePriceRequest(DescribeCacheReservePriceRequest &&) = default ;
    DescribeCacheReservePriceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCacheReservePriceRequest() = default ;
    DescribeCacheReservePriceRequest& operator=(const DescribeCacheReservePriceRequest &) = default ;
    DescribeCacheReservePriceRequest& operator=(DescribeCacheReservePriceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->crRegion_ == nullptr
        && this->period_ == nullptr && this->quotaGb_ == nullptr; };
    // crRegion Field Functions 
    bool hasCrRegion() const { return this->crRegion_ != nullptr;};
    void deleteCrRegion() { this->crRegion_ = nullptr;};
    inline string getCrRegion() const { DARABONBA_PTR_GET_DEFAULT(crRegion_, "") };
    inline DescribeCacheReservePriceRequest& setCrRegion(string crRegion) { DARABONBA_PTR_SET_VALUE(crRegion_, crRegion) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline DescribeCacheReservePriceRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // quotaGb Field Functions 
    bool hasQuotaGb() const { return this->quotaGb_ != nullptr;};
    void deleteQuotaGb() { this->quotaGb_ = nullptr;};
    inline int64_t getQuotaGb() const { DARABONBA_PTR_GET_DEFAULT(quotaGb_, 0L) };
    inline DescribeCacheReservePriceRequest& setQuotaGb(int64_t quotaGb) { DARABONBA_PTR_SET_VALUE(quotaGb_, quotaGb) };


  protected:
    // The cache reserve region.
    // 
    // - HK: Hong Kong (China)
    // 
    // - CN: the Chinese mainland.
    shared_ptr<string> crRegion_ {};
    // The purchase period. Unit: months.
    shared_ptr<int32_t> period_ {};
    // The cache reserve specification. Unit: GB.
    shared_ptr<int64_t> quotaGb_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
