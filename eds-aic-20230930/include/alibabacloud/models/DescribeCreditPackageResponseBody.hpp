// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECREDITPACKAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECREDITPACKAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class DescribeCreditPackageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCreditPackageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreditsPackageInfos, creditsPackageInfos_);
      DARABONBA_PTR_TO_JSON(IsFirstPurchase, isFirstPurchase_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalAvailableCredits, totalAvailableCredits_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TotalExhaustedCredit, totalExhaustedCredit_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCreditPackageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreditsPackageInfos, creditsPackageInfos_);
      DARABONBA_PTR_FROM_JSON(IsFirstPurchase, isFirstPurchase_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalAvailableCredits, totalAvailableCredits_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TotalExhaustedCredit, totalExhaustedCredit_);
    };
    DescribeCreditPackageResponseBody() = default ;
    DescribeCreditPackageResponseBody(const DescribeCreditPackageResponseBody &) = default ;
    DescribeCreditPackageResponseBody(DescribeCreditPackageResponseBody &&) = default ;
    DescribeCreditPackageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCreditPackageResponseBody() = default ;
    DescribeCreditPackageResponseBody& operator=(const DescribeCreditPackageResponseBody &) = default ;
    DescribeCreditPackageResponseBody& operator=(DescribeCreditPackageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CreditsPackageInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CreditsPackageInfos& obj) { 
        DARABONBA_PTR_TO_JSON(AvailableCredits, availableCredits_);
        DARABONBA_PTR_TO_JSON(CreditPackageId, creditPackageId_);
        DARABONBA_PTR_TO_JSON(CreditPackageStatus, creditPackageStatus_);
        DARABONBA_PTR_TO_JSON(EffectiveTime, effectiveTime_);
        DARABONBA_PTR_TO_JSON(ExhaustedCredits, exhaustedCredits_);
        DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
        DARABONBA_PTR_TO_JSON(TotalCredits, totalCredits_);
      };
      friend void from_json(const Darabonba::Json& j, CreditsPackageInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(AvailableCredits, availableCredits_);
        DARABONBA_PTR_FROM_JSON(CreditPackageId, creditPackageId_);
        DARABONBA_PTR_FROM_JSON(CreditPackageStatus, creditPackageStatus_);
        DARABONBA_PTR_FROM_JSON(EffectiveTime, effectiveTime_);
        DARABONBA_PTR_FROM_JSON(ExhaustedCredits, exhaustedCredits_);
        DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
        DARABONBA_PTR_FROM_JSON(TotalCredits, totalCredits_);
      };
      CreditsPackageInfos() = default ;
      CreditsPackageInfos(const CreditsPackageInfos &) = default ;
      CreditsPackageInfos(CreditsPackageInfos &&) = default ;
      CreditsPackageInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CreditsPackageInfos() = default ;
      CreditsPackageInfos& operator=(const CreditsPackageInfos &) = default ;
      CreditsPackageInfos& operator=(CreditsPackageInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->availableCredits_ == nullptr
        && this->creditPackageId_ == nullptr && this->creditPackageStatus_ == nullptr && this->effectiveTime_ == nullptr && this->exhaustedCredits_ == nullptr && this->expiredTime_ == nullptr
        && this->totalCredits_ == nullptr; };
      // availableCredits Field Functions 
      bool hasAvailableCredits() const { return this->availableCredits_ != nullptr;};
      void deleteAvailableCredits() { this->availableCredits_ = nullptr;};
      inline string getAvailableCredits() const { DARABONBA_PTR_GET_DEFAULT(availableCredits_, "") };
      inline CreditsPackageInfos& setAvailableCredits(string availableCredits) { DARABONBA_PTR_SET_VALUE(availableCredits_, availableCredits) };


      // creditPackageId Field Functions 
      bool hasCreditPackageId() const { return this->creditPackageId_ != nullptr;};
      void deleteCreditPackageId() { this->creditPackageId_ = nullptr;};
      inline string getCreditPackageId() const { DARABONBA_PTR_GET_DEFAULT(creditPackageId_, "") };
      inline CreditsPackageInfos& setCreditPackageId(string creditPackageId) { DARABONBA_PTR_SET_VALUE(creditPackageId_, creditPackageId) };


      // creditPackageStatus Field Functions 
      bool hasCreditPackageStatus() const { return this->creditPackageStatus_ != nullptr;};
      void deleteCreditPackageStatus() { this->creditPackageStatus_ = nullptr;};
      inline string getCreditPackageStatus() const { DARABONBA_PTR_GET_DEFAULT(creditPackageStatus_, "") };
      inline CreditsPackageInfos& setCreditPackageStatus(string creditPackageStatus) { DARABONBA_PTR_SET_VALUE(creditPackageStatus_, creditPackageStatus) };


      // effectiveTime Field Functions 
      bool hasEffectiveTime() const { return this->effectiveTime_ != nullptr;};
      void deleteEffectiveTime() { this->effectiveTime_ = nullptr;};
      inline string getEffectiveTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveTime_, "") };
      inline CreditsPackageInfos& setEffectiveTime(string effectiveTime) { DARABONBA_PTR_SET_VALUE(effectiveTime_, effectiveTime) };


      // exhaustedCredits Field Functions 
      bool hasExhaustedCredits() const { return this->exhaustedCredits_ != nullptr;};
      void deleteExhaustedCredits() { this->exhaustedCredits_ = nullptr;};
      inline string getExhaustedCredits() const { DARABONBA_PTR_GET_DEFAULT(exhaustedCredits_, "") };
      inline CreditsPackageInfos& setExhaustedCredits(string exhaustedCredits) { DARABONBA_PTR_SET_VALUE(exhaustedCredits_, exhaustedCredits) };


      // expiredTime Field Functions 
      bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
      void deleteExpiredTime() { this->expiredTime_ = nullptr;};
      inline string getExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
      inline CreditsPackageInfos& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


      // totalCredits Field Functions 
      bool hasTotalCredits() const { return this->totalCredits_ != nullptr;};
      void deleteTotalCredits() { this->totalCredits_ = nullptr;};
      inline string getTotalCredits() const { DARABONBA_PTR_GET_DEFAULT(totalCredits_, "") };
      inline CreditsPackageInfos& setTotalCredits(string totalCredits) { DARABONBA_PTR_SET_VALUE(totalCredits_, totalCredits) };


    protected:
      // The number of available credits in the credit package.
      shared_ptr<string> availableCredits_ {};
      // The ID of the credit package.
      shared_ptr<string> creditPackageId_ {};
      // The status of the credit package.
      shared_ptr<string> creditPackageStatus_ {};
      // The time when the credit package becomes effective.
      shared_ptr<string> effectiveTime_ {};
      // The number of exhausted credits in the credit package.
      shared_ptr<string> exhaustedCredits_ {};
      // The time when the credit package expires.
      shared_ptr<string> expiredTime_ {};
      // The total number of credits in the credit package.
      shared_ptr<string> totalCredits_ {};
    };

    virtual bool empty() const override { return this->creditsPackageInfos_ == nullptr
        && this->isFirstPurchase_ == nullptr && this->requestId_ == nullptr && this->totalAvailableCredits_ == nullptr && this->totalCount_ == nullptr && this->totalExhaustedCredit_ == nullptr; };
    // creditsPackageInfos Field Functions 
    bool hasCreditsPackageInfos() const { return this->creditsPackageInfos_ != nullptr;};
    void deleteCreditsPackageInfos() { this->creditsPackageInfos_ = nullptr;};
    inline const vector<DescribeCreditPackageResponseBody::CreditsPackageInfos> & getCreditsPackageInfos() const { DARABONBA_PTR_GET_CONST(creditsPackageInfos_, vector<DescribeCreditPackageResponseBody::CreditsPackageInfos>) };
    inline vector<DescribeCreditPackageResponseBody::CreditsPackageInfos> getCreditsPackageInfos() { DARABONBA_PTR_GET(creditsPackageInfos_, vector<DescribeCreditPackageResponseBody::CreditsPackageInfos>) };
    inline DescribeCreditPackageResponseBody& setCreditsPackageInfos(const vector<DescribeCreditPackageResponseBody::CreditsPackageInfos> & creditsPackageInfos) { DARABONBA_PTR_SET_VALUE(creditsPackageInfos_, creditsPackageInfos) };
    inline DescribeCreditPackageResponseBody& setCreditsPackageInfos(vector<DescribeCreditPackageResponseBody::CreditsPackageInfos> && creditsPackageInfos) { DARABONBA_PTR_SET_RVALUE(creditsPackageInfos_, creditsPackageInfos) };


    // isFirstPurchase Field Functions 
    bool hasIsFirstPurchase() const { return this->isFirstPurchase_ != nullptr;};
    void deleteIsFirstPurchase() { this->isFirstPurchase_ = nullptr;};
    inline bool getIsFirstPurchase() const { DARABONBA_PTR_GET_DEFAULT(isFirstPurchase_, false) };
    inline DescribeCreditPackageResponseBody& setIsFirstPurchase(bool isFirstPurchase) { DARABONBA_PTR_SET_VALUE(isFirstPurchase_, isFirstPurchase) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCreditPackageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalAvailableCredits Field Functions 
    bool hasTotalAvailableCredits() const { return this->totalAvailableCredits_ != nullptr;};
    void deleteTotalAvailableCredits() { this->totalAvailableCredits_ = nullptr;};
    inline string getTotalAvailableCredits() const { DARABONBA_PTR_GET_DEFAULT(totalAvailableCredits_, "") };
    inline DescribeCreditPackageResponseBody& setTotalAvailableCredits(string totalAvailableCredits) { DARABONBA_PTR_SET_VALUE(totalAvailableCredits_, totalAvailableCredits) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeCreditPackageResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // totalExhaustedCredit Field Functions 
    bool hasTotalExhaustedCredit() const { return this->totalExhaustedCredit_ != nullptr;};
    void deleteTotalExhaustedCredit() { this->totalExhaustedCredit_ = nullptr;};
    inline string getTotalExhaustedCredit() const { DARABONBA_PTR_GET_DEFAULT(totalExhaustedCredit_, "") };
    inline DescribeCreditPackageResponseBody& setTotalExhaustedCredit(string totalExhaustedCredit) { DARABONBA_PTR_SET_VALUE(totalExhaustedCredit_, totalExhaustedCredit) };


  protected:
    // An array of credit package details.
    shared_ptr<vector<DescribeCreditPackageResponseBody::CreditsPackageInfos>> creditsPackageInfos_ {};
    // Indicates whether this is your first purchase.
    shared_ptr<bool> isFirstPurchase_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of available credits.
    shared_ptr<string> totalAvailableCredits_ {};
    // The total number of entries.
    shared_ptr<int32_t> totalCount_ {};
    // The total number of exhausted credits.
    shared_ptr<string> totalExhaustedCredit_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
