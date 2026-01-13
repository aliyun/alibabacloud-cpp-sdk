// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_METERINGSUMMARYRESULT_HPP_
#define ALIBABACLOUD_MODELS_METERINGSUMMARYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241121
{
namespace Models
{
  class MeteringSummaryResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MeteringSummaryResult& obj) { 
      DARABONBA_PTR_TO_JSON(meteringSummaryList, meteringSummaryList_);
    };
    friend void from_json(const Darabonba::Json& j, MeteringSummaryResult& obj) { 
      DARABONBA_PTR_FROM_JSON(meteringSummaryList, meteringSummaryList_);
    };
    MeteringSummaryResult() = default ;
    MeteringSummaryResult(const MeteringSummaryResult &) = default ;
    MeteringSummaryResult(MeteringSummaryResult &&) = default ;
    MeteringSummaryResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MeteringSummaryResult() = default ;
    MeteringSummaryResult& operator=(const MeteringSummaryResult &) = default ;
    MeteringSummaryResult& operator=(MeteringSummaryResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MeteringSummaryList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MeteringSummaryList& obj) { 
        DARABONBA_PTR_TO_JSON(billingFunctionItem, billingFunctionItem_);
        DARABONBA_PTR_TO_JSON(billingItem, billingItem_);
        DARABONBA_PTR_TO_JSON(failCount, failCount_);
        DARABONBA_PTR_TO_JSON(successCount, successCount_);
      };
      friend void from_json(const Darabonba::Json& j, MeteringSummaryList& obj) { 
        DARABONBA_PTR_FROM_JSON(billingFunctionItem, billingFunctionItem_);
        DARABONBA_PTR_FROM_JSON(billingItem, billingItem_);
        DARABONBA_PTR_FROM_JSON(failCount, failCount_);
        DARABONBA_PTR_FROM_JSON(successCount, successCount_);
      };
      MeteringSummaryList() = default ;
      MeteringSummaryList(const MeteringSummaryList &) = default ;
      MeteringSummaryList(MeteringSummaryList &&) = default ;
      MeteringSummaryList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MeteringSummaryList() = default ;
      MeteringSummaryList& operator=(const MeteringSummaryList &) = default ;
      MeteringSummaryList& operator=(MeteringSummaryList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->billingFunctionItem_ == nullptr
        && this->billingItem_ == nullptr && this->failCount_ == nullptr && this->successCount_ == nullptr; };
      // billingFunctionItem Field Functions 
      bool hasBillingFunctionItem() const { return this->billingFunctionItem_ != nullptr;};
      void deleteBillingFunctionItem() { this->billingFunctionItem_ = nullptr;};
      inline string getBillingFunctionItem() const { DARABONBA_PTR_GET_DEFAULT(billingFunctionItem_, "") };
      inline MeteringSummaryList& setBillingFunctionItem(string billingFunctionItem) { DARABONBA_PTR_SET_VALUE(billingFunctionItem_, billingFunctionItem) };


      // billingItem Field Functions 
      bool hasBillingItem() const { return this->billingItem_ != nullptr;};
      void deleteBillingItem() { this->billingItem_ = nullptr;};
      inline string getBillingItem() const { DARABONBA_PTR_GET_DEFAULT(billingItem_, "") };
      inline MeteringSummaryList& setBillingItem(string billingItem) { DARABONBA_PTR_SET_VALUE(billingItem_, billingItem) };


      // failCount Field Functions 
      bool hasFailCount() const { return this->failCount_ != nullptr;};
      void deleteFailCount() { this->failCount_ = nullptr;};
      inline int32_t getFailCount() const { DARABONBA_PTR_GET_DEFAULT(failCount_, 0) };
      inline MeteringSummaryList& setFailCount(int32_t failCount) { DARABONBA_PTR_SET_VALUE(failCount_, failCount) };


      // successCount Field Functions 
      bool hasSuccessCount() const { return this->successCount_ != nullptr;};
      void deleteSuccessCount() { this->successCount_ = nullptr;};
      inline int32_t getSuccessCount() const { DARABONBA_PTR_GET_DEFAULT(successCount_, 0) };
      inline MeteringSummaryList& setSuccessCount(int32_t successCount) { DARABONBA_PTR_SET_VALUE(successCount_, successCount) };


    protected:
      shared_ptr<string> billingFunctionItem_ {};
      shared_ptr<string> billingItem_ {};
      shared_ptr<int32_t> failCount_ {};
      shared_ptr<int32_t> successCount_ {};
    };

    virtual bool empty() const override { return this->meteringSummaryList_ == nullptr; };
    // meteringSummaryList Field Functions 
    bool hasMeteringSummaryList() const { return this->meteringSummaryList_ != nullptr;};
    void deleteMeteringSummaryList() { this->meteringSummaryList_ = nullptr;};
    inline const vector<MeteringSummaryResult::MeteringSummaryList> & getMeteringSummaryList() const { DARABONBA_PTR_GET_CONST(meteringSummaryList_, vector<MeteringSummaryResult::MeteringSummaryList>) };
    inline vector<MeteringSummaryResult::MeteringSummaryList> getMeteringSummaryList() { DARABONBA_PTR_GET(meteringSummaryList_, vector<MeteringSummaryResult::MeteringSummaryList>) };
    inline MeteringSummaryResult& setMeteringSummaryList(const vector<MeteringSummaryResult::MeteringSummaryList> & meteringSummaryList) { DARABONBA_PTR_SET_VALUE(meteringSummaryList_, meteringSummaryList) };
    inline MeteringSummaryResult& setMeteringSummaryList(vector<MeteringSummaryResult::MeteringSummaryList> && meteringSummaryList) { DARABONBA_PTR_SET_RVALUE(meteringSummaryList_, meteringSummaryList) };


  protected:
    shared_ptr<vector<MeteringSummaryResult::MeteringSummaryList>> meteringSummaryList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241121
#endif
