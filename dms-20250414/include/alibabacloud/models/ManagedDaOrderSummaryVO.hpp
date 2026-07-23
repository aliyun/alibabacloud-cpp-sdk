// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MANAGEDDAORDERSUMMARYVO_HPP_
#define ALIBABACLOUD_MODELS_MANAGEDDAORDERSUMMARYVO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class ManagedDaOrderSummaryVO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ManagedDaOrderSummaryVO& obj) { 
      DARABONBA_PTR_TO_JSON(availableQuota, availableQuota_);
      DARABONBA_PTR_TO_JSON(totalQuota, totalQuota_);
      DARABONBA_PTR_TO_JSON(trialExpireTime, trialExpireTime_);
      DARABONBA_PTR_TO_JSON(trialUsed, trialUsed_);
      DARABONBA_PTR_TO_JSON(usedQuota, usedQuota_);
      DARABONBA_PTR_TO_JSON(validOrderCount, validOrderCount_);
    };
    friend void from_json(const Darabonba::Json& j, ManagedDaOrderSummaryVO& obj) { 
      DARABONBA_PTR_FROM_JSON(availableQuota, availableQuota_);
      DARABONBA_PTR_FROM_JSON(totalQuota, totalQuota_);
      DARABONBA_PTR_FROM_JSON(trialExpireTime, trialExpireTime_);
      DARABONBA_PTR_FROM_JSON(trialUsed, trialUsed_);
      DARABONBA_PTR_FROM_JSON(usedQuota, usedQuota_);
      DARABONBA_PTR_FROM_JSON(validOrderCount, validOrderCount_);
    };
    ManagedDaOrderSummaryVO() = default ;
    ManagedDaOrderSummaryVO(const ManagedDaOrderSummaryVO &) = default ;
    ManagedDaOrderSummaryVO(ManagedDaOrderSummaryVO &&) = default ;
    ManagedDaOrderSummaryVO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ManagedDaOrderSummaryVO() = default ;
    ManagedDaOrderSummaryVO& operator=(const ManagedDaOrderSummaryVO &) = default ;
    ManagedDaOrderSummaryVO& operator=(ManagedDaOrderSummaryVO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->availableQuota_ == nullptr
        && this->totalQuota_ == nullptr && this->trialExpireTime_ == nullptr && this->trialUsed_ == nullptr && this->usedQuota_ == nullptr && this->validOrderCount_ == nullptr; };
    // availableQuota Field Functions 
    bool hasAvailableQuota() const { return this->availableQuota_ != nullptr;};
    void deleteAvailableQuota() { this->availableQuota_ = nullptr;};
    inline int32_t getAvailableQuota() const { DARABONBA_PTR_GET_DEFAULT(availableQuota_, 0) };
    inline ManagedDaOrderSummaryVO& setAvailableQuota(int32_t availableQuota) { DARABONBA_PTR_SET_VALUE(availableQuota_, availableQuota) };


    // totalQuota Field Functions 
    bool hasTotalQuota() const { return this->totalQuota_ != nullptr;};
    void deleteTotalQuota() { this->totalQuota_ = nullptr;};
    inline int32_t getTotalQuota() const { DARABONBA_PTR_GET_DEFAULT(totalQuota_, 0) };
    inline ManagedDaOrderSummaryVO& setTotalQuota(int32_t totalQuota) { DARABONBA_PTR_SET_VALUE(totalQuota_, totalQuota) };


    // trialExpireTime Field Functions 
    bool hasTrialExpireTime() const { return this->trialExpireTime_ != nullptr;};
    void deleteTrialExpireTime() { this->trialExpireTime_ = nullptr;};
    inline string getTrialExpireTime() const { DARABONBA_PTR_GET_DEFAULT(trialExpireTime_, "") };
    inline ManagedDaOrderSummaryVO& setTrialExpireTime(string trialExpireTime) { DARABONBA_PTR_SET_VALUE(trialExpireTime_, trialExpireTime) };


    // trialUsed Field Functions 
    bool hasTrialUsed() const { return this->trialUsed_ != nullptr;};
    void deleteTrialUsed() { this->trialUsed_ = nullptr;};
    inline bool getTrialUsed() const { DARABONBA_PTR_GET_DEFAULT(trialUsed_, false) };
    inline ManagedDaOrderSummaryVO& setTrialUsed(bool trialUsed) { DARABONBA_PTR_SET_VALUE(trialUsed_, trialUsed) };


    // usedQuota Field Functions 
    bool hasUsedQuota() const { return this->usedQuota_ != nullptr;};
    void deleteUsedQuota() { this->usedQuota_ = nullptr;};
    inline int32_t getUsedQuota() const { DARABONBA_PTR_GET_DEFAULT(usedQuota_, 0) };
    inline ManagedDaOrderSummaryVO& setUsedQuota(int32_t usedQuota) { DARABONBA_PTR_SET_VALUE(usedQuota_, usedQuota) };


    // validOrderCount Field Functions 
    bool hasValidOrderCount() const { return this->validOrderCount_ != nullptr;};
    void deleteValidOrderCount() { this->validOrderCount_ = nullptr;};
    inline int32_t getValidOrderCount() const { DARABONBA_PTR_GET_DEFAULT(validOrderCount_, 0) };
    inline ManagedDaOrderSummaryVO& setValidOrderCount(int32_t validOrderCount) { DARABONBA_PTR_SET_VALUE(validOrderCount_, validOrderCount) };


  protected:
    shared_ptr<int32_t> availableQuota_ {};
    shared_ptr<int32_t> totalQuota_ {};
    shared_ptr<string> trialExpireTime_ {};
    shared_ptr<bool> trialUsed_ {};
    shared_ptr<int32_t> usedQuota_ {};
    shared_ptr<int32_t> validOrderCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
