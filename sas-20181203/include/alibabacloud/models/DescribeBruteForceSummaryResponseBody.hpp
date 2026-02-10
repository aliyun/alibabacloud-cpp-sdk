// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBRUTEFORCESUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBRUTEFORCESUMMARYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeBruteForceSummaryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBruteForceSummaryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BruteForceSummary, bruteForceSummary_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBruteForceSummaryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BruteForceSummary, bruteForceSummary_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeBruteForceSummaryResponseBody() = default ;
    DescribeBruteForceSummaryResponseBody(const DescribeBruteForceSummaryResponseBody &) = default ;
    DescribeBruteForceSummaryResponseBody(DescribeBruteForceSummaryResponseBody &&) = default ;
    DescribeBruteForceSummaryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBruteForceSummaryResponseBody() = default ;
    DescribeBruteForceSummaryResponseBody& operator=(const DescribeBruteForceSummaryResponseBody &) = default ;
    DescribeBruteForceSummaryResponseBody& operator=(DescribeBruteForceSummaryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class BruteForceSummary : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BruteForceSummary& obj) { 
        DARABONBA_PTR_TO_JSON(AllStrategyCount, allStrategyCount_);
        DARABONBA_PTR_TO_JSON(AntiBruteForceRuleCount, antiBruteForceRuleCount_);
        DARABONBA_PTR_TO_JSON(CustomEffectiveCount, customEffectiveCount_);
        DARABONBA_PTR_TO_JSON(CustomRecordCount, customRecordCount_);
        DARABONBA_PTR_TO_JSON(EffectiveCount, effectiveCount_);
        DARABONBA_PTR_TO_JSON(SystemEffectiveCount, systemEffectiveCount_);
        DARABONBA_PTR_TO_JSON(SystemRecordCount, systemRecordCount_);
      };
      friend void from_json(const Darabonba::Json& j, BruteForceSummary& obj) { 
        DARABONBA_PTR_FROM_JSON(AllStrategyCount, allStrategyCount_);
        DARABONBA_PTR_FROM_JSON(AntiBruteForceRuleCount, antiBruteForceRuleCount_);
        DARABONBA_PTR_FROM_JSON(CustomEffectiveCount, customEffectiveCount_);
        DARABONBA_PTR_FROM_JSON(CustomRecordCount, customRecordCount_);
        DARABONBA_PTR_FROM_JSON(EffectiveCount, effectiveCount_);
        DARABONBA_PTR_FROM_JSON(SystemEffectiveCount, systemEffectiveCount_);
        DARABONBA_PTR_FROM_JSON(SystemRecordCount, systemRecordCount_);
      };
      BruteForceSummary() = default ;
      BruteForceSummary(const BruteForceSummary &) = default ;
      BruteForceSummary(BruteForceSummary &&) = default ;
      BruteForceSummary(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BruteForceSummary() = default ;
      BruteForceSummary& operator=(const BruteForceSummary &) = default ;
      BruteForceSummary& operator=(BruteForceSummary &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->allStrategyCount_ == nullptr
        && this->antiBruteForceRuleCount_ == nullptr && this->customEffectiveCount_ == nullptr && this->customRecordCount_ == nullptr && this->effectiveCount_ == nullptr && this->systemEffectiveCount_ == nullptr
        && this->systemRecordCount_ == nullptr; };
      // allStrategyCount Field Functions 
      bool hasAllStrategyCount() const { return this->allStrategyCount_ != nullptr;};
      void deleteAllStrategyCount() { this->allStrategyCount_ = nullptr;};
      inline int32_t getAllStrategyCount() const { DARABONBA_PTR_GET_DEFAULT(allStrategyCount_, 0) };
      inline BruteForceSummary& setAllStrategyCount(int32_t allStrategyCount) { DARABONBA_PTR_SET_VALUE(allStrategyCount_, allStrategyCount) };


      // antiBruteForceRuleCount Field Functions 
      bool hasAntiBruteForceRuleCount() const { return this->antiBruteForceRuleCount_ != nullptr;};
      void deleteAntiBruteForceRuleCount() { this->antiBruteForceRuleCount_ = nullptr;};
      inline string getAntiBruteForceRuleCount() const { DARABONBA_PTR_GET_DEFAULT(antiBruteForceRuleCount_, "") };
      inline BruteForceSummary& setAntiBruteForceRuleCount(string antiBruteForceRuleCount) { DARABONBA_PTR_SET_VALUE(antiBruteForceRuleCount_, antiBruteForceRuleCount) };


      // customEffectiveCount Field Functions 
      bool hasCustomEffectiveCount() const { return this->customEffectiveCount_ != nullptr;};
      void deleteCustomEffectiveCount() { this->customEffectiveCount_ = nullptr;};
      inline string getCustomEffectiveCount() const { DARABONBA_PTR_GET_DEFAULT(customEffectiveCount_, "") };
      inline BruteForceSummary& setCustomEffectiveCount(string customEffectiveCount) { DARABONBA_PTR_SET_VALUE(customEffectiveCount_, customEffectiveCount) };


      // customRecordCount Field Functions 
      bool hasCustomRecordCount() const { return this->customRecordCount_ != nullptr;};
      void deleteCustomRecordCount() { this->customRecordCount_ = nullptr;};
      inline string getCustomRecordCount() const { DARABONBA_PTR_GET_DEFAULT(customRecordCount_, "") };
      inline BruteForceSummary& setCustomRecordCount(string customRecordCount) { DARABONBA_PTR_SET_VALUE(customRecordCount_, customRecordCount) };


      // effectiveCount Field Functions 
      bool hasEffectiveCount() const { return this->effectiveCount_ != nullptr;};
      void deleteEffectiveCount() { this->effectiveCount_ = nullptr;};
      inline int32_t getEffectiveCount() const { DARABONBA_PTR_GET_DEFAULT(effectiveCount_, 0) };
      inline BruteForceSummary& setEffectiveCount(int32_t effectiveCount) { DARABONBA_PTR_SET_VALUE(effectiveCount_, effectiveCount) };


      // systemEffectiveCount Field Functions 
      bool hasSystemEffectiveCount() const { return this->systemEffectiveCount_ != nullptr;};
      void deleteSystemEffectiveCount() { this->systemEffectiveCount_ = nullptr;};
      inline string getSystemEffectiveCount() const { DARABONBA_PTR_GET_DEFAULT(systemEffectiveCount_, "") };
      inline BruteForceSummary& setSystemEffectiveCount(string systemEffectiveCount) { DARABONBA_PTR_SET_VALUE(systemEffectiveCount_, systemEffectiveCount) };


      // systemRecordCount Field Functions 
      bool hasSystemRecordCount() const { return this->systemRecordCount_ != nullptr;};
      void deleteSystemRecordCount() { this->systemRecordCount_ = nullptr;};
      inline string getSystemRecordCount() const { DARABONBA_PTR_GET_DEFAULT(systemRecordCount_, "") };
      inline BruteForceSummary& setSystemRecordCount(string systemRecordCount) { DARABONBA_PTR_SET_VALUE(systemRecordCount_, systemRecordCount) };


    protected:
      // The number of anti-brute force IP blocking policies.
      shared_ptr<int32_t> allStrategyCount_ {};
      // The number of defense policies.
      shared_ptr<string> antiBruteForceRuleCount_ {};
      // The number of custom blocking rules that are in effect.
      shared_ptr<string> customEffectiveCount_ {};
      // The number of custom blocking rules.
      shared_ptr<string> customRecordCount_ {};
      // The number of anti-brute force IP blocking policies enabled.
      shared_ptr<int32_t> effectiveCount_ {};
      // The number of system blocking rules that are in effect.
      shared_ptr<string> systemEffectiveCount_ {};
      // The number of system blocking rules.
      shared_ptr<string> systemRecordCount_ {};
    };

    virtual bool empty() const override { return this->bruteForceSummary_ == nullptr
        && this->requestId_ == nullptr; };
    // bruteForceSummary Field Functions 
    bool hasBruteForceSummary() const { return this->bruteForceSummary_ != nullptr;};
    void deleteBruteForceSummary() { this->bruteForceSummary_ = nullptr;};
    inline const DescribeBruteForceSummaryResponseBody::BruteForceSummary & getBruteForceSummary() const { DARABONBA_PTR_GET_CONST(bruteForceSummary_, DescribeBruteForceSummaryResponseBody::BruteForceSummary) };
    inline DescribeBruteForceSummaryResponseBody::BruteForceSummary getBruteForceSummary() { DARABONBA_PTR_GET(bruteForceSummary_, DescribeBruteForceSummaryResponseBody::BruteForceSummary) };
    inline DescribeBruteForceSummaryResponseBody& setBruteForceSummary(const DescribeBruteForceSummaryResponseBody::BruteForceSummary & bruteForceSummary) { DARABONBA_PTR_SET_VALUE(bruteForceSummary_, bruteForceSummary) };
    inline DescribeBruteForceSummaryResponseBody& setBruteForceSummary(DescribeBruteForceSummaryResponseBody::BruteForceSummary && bruteForceSummary) { DARABONBA_PTR_SET_RVALUE(bruteForceSummary_, bruteForceSummary) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBruteForceSummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The statistics of IP address blocking policies.
    shared_ptr<DescribeBruteForceSummaryResponseBody::BruteForceSummary> bruteForceSummary_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
