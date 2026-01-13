// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMETERINGDAILYDETAILRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTMETERINGDAILYDETAILRESULT_HPP_
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
  class ListMeteringDailyDetailResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMeteringDailyDetailResult& obj) { 
      DARABONBA_PTR_TO_JSON(meteringDailyDetailList, meteringDailyDetailList_);
    };
    friend void from_json(const Darabonba::Json& j, ListMeteringDailyDetailResult& obj) { 
      DARABONBA_PTR_FROM_JSON(meteringDailyDetailList, meteringDailyDetailList_);
    };
    ListMeteringDailyDetailResult() = default ;
    ListMeteringDailyDetailResult(const ListMeteringDailyDetailResult &) = default ;
    ListMeteringDailyDetailResult(ListMeteringDailyDetailResult &&) = default ;
    ListMeteringDailyDetailResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMeteringDailyDetailResult() = default ;
    ListMeteringDailyDetailResult& operator=(const ListMeteringDailyDetailResult &) = default ;
    ListMeteringDailyDetailResult& operator=(ListMeteringDailyDetailResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MeteringDailyDetailList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MeteringDailyDetailList& obj) { 
        DARABONBA_PTR_TO_JSON(billDate, billDate_);
        DARABONBA_PTR_TO_JSON(billPeriod, billPeriod_);
        DARABONBA_PTR_TO_JSON(billingFunctionItem, billingFunctionItem_);
        DARABONBA_PTR_TO_JSON(billingItem, billingItem_);
        DARABONBA_PTR_TO_JSON(billingQps, billingQps_);
        DARABONBA_PTR_TO_JSON(failedCount, failedCount_);
        DARABONBA_PTR_TO_JSON(ladderTypeCode, ladderTypeCode_);
        DARABONBA_PTR_TO_JSON(subAccountId, subAccountId_);
        DARABONBA_PTR_TO_JSON(successCount, successCount_);
      };
      friend void from_json(const Darabonba::Json& j, MeteringDailyDetailList& obj) { 
        DARABONBA_PTR_FROM_JSON(billDate, billDate_);
        DARABONBA_PTR_FROM_JSON(billPeriod, billPeriod_);
        DARABONBA_PTR_FROM_JSON(billingFunctionItem, billingFunctionItem_);
        DARABONBA_PTR_FROM_JSON(billingItem, billingItem_);
        DARABONBA_PTR_FROM_JSON(billingQps, billingQps_);
        DARABONBA_PTR_FROM_JSON(failedCount, failedCount_);
        DARABONBA_PTR_FROM_JSON(ladderTypeCode, ladderTypeCode_);
        DARABONBA_PTR_FROM_JSON(subAccountId, subAccountId_);
        DARABONBA_PTR_FROM_JSON(successCount, successCount_);
      };
      MeteringDailyDetailList() = default ;
      MeteringDailyDetailList(const MeteringDailyDetailList &) = default ;
      MeteringDailyDetailList(MeteringDailyDetailList &&) = default ;
      MeteringDailyDetailList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MeteringDailyDetailList() = default ;
      MeteringDailyDetailList& operator=(const MeteringDailyDetailList &) = default ;
      MeteringDailyDetailList& operator=(MeteringDailyDetailList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->billDate_ == nullptr
        && this->billPeriod_ == nullptr && this->billingFunctionItem_ == nullptr && this->billingItem_ == nullptr && this->billingQps_ == nullptr && this->failedCount_ == nullptr
        && this->ladderTypeCode_ == nullptr && this->subAccountId_ == nullptr && this->successCount_ == nullptr; };
      // billDate Field Functions 
      bool hasBillDate() const { return this->billDate_ != nullptr;};
      void deleteBillDate() { this->billDate_ = nullptr;};
      inline string getBillDate() const { DARABONBA_PTR_GET_DEFAULT(billDate_, "") };
      inline MeteringDailyDetailList& setBillDate(string billDate) { DARABONBA_PTR_SET_VALUE(billDate_, billDate) };


      // billPeriod Field Functions 
      bool hasBillPeriod() const { return this->billPeriod_ != nullptr;};
      void deleteBillPeriod() { this->billPeriod_ = nullptr;};
      inline string getBillPeriod() const { DARABONBA_PTR_GET_DEFAULT(billPeriod_, "") };
      inline MeteringDailyDetailList& setBillPeriod(string billPeriod) { DARABONBA_PTR_SET_VALUE(billPeriod_, billPeriod) };


      // billingFunctionItem Field Functions 
      bool hasBillingFunctionItem() const { return this->billingFunctionItem_ != nullptr;};
      void deleteBillingFunctionItem() { this->billingFunctionItem_ = nullptr;};
      inline string getBillingFunctionItem() const { DARABONBA_PTR_GET_DEFAULT(billingFunctionItem_, "") };
      inline MeteringDailyDetailList& setBillingFunctionItem(string billingFunctionItem) { DARABONBA_PTR_SET_VALUE(billingFunctionItem_, billingFunctionItem) };


      // billingItem Field Functions 
      bool hasBillingItem() const { return this->billingItem_ != nullptr;};
      void deleteBillingItem() { this->billingItem_ = nullptr;};
      inline string getBillingItem() const { DARABONBA_PTR_GET_DEFAULT(billingItem_, "") };
      inline MeteringDailyDetailList& setBillingItem(string billingItem) { DARABONBA_PTR_SET_VALUE(billingItem_, billingItem) };


      // billingQps Field Functions 
      bool hasBillingQps() const { return this->billingQps_ != nullptr;};
      void deleteBillingQps() { this->billingQps_ = nullptr;};
      inline int32_t getBillingQps() const { DARABONBA_PTR_GET_DEFAULT(billingQps_, 0) };
      inline MeteringDailyDetailList& setBillingQps(int32_t billingQps) { DARABONBA_PTR_SET_VALUE(billingQps_, billingQps) };


      // failedCount Field Functions 
      bool hasFailedCount() const { return this->failedCount_ != nullptr;};
      void deleteFailedCount() { this->failedCount_ = nullptr;};
      inline int32_t getFailedCount() const { DARABONBA_PTR_GET_DEFAULT(failedCount_, 0) };
      inline MeteringDailyDetailList& setFailedCount(int32_t failedCount) { DARABONBA_PTR_SET_VALUE(failedCount_, failedCount) };


      // ladderTypeCode Field Functions 
      bool hasLadderTypeCode() const { return this->ladderTypeCode_ != nullptr;};
      void deleteLadderTypeCode() { this->ladderTypeCode_ = nullptr;};
      inline int32_t getLadderTypeCode() const { DARABONBA_PTR_GET_DEFAULT(ladderTypeCode_, 0) };
      inline MeteringDailyDetailList& setLadderTypeCode(int32_t ladderTypeCode) { DARABONBA_PTR_SET_VALUE(ladderTypeCode_, ladderTypeCode) };


      // subAccountId Field Functions 
      bool hasSubAccountId() const { return this->subAccountId_ != nullptr;};
      void deleteSubAccountId() { this->subAccountId_ = nullptr;};
      inline string getSubAccountId() const { DARABONBA_PTR_GET_DEFAULT(subAccountId_, "") };
      inline MeteringDailyDetailList& setSubAccountId(string subAccountId) { DARABONBA_PTR_SET_VALUE(subAccountId_, subAccountId) };


      // successCount Field Functions 
      bool hasSuccessCount() const { return this->successCount_ != nullptr;};
      void deleteSuccessCount() { this->successCount_ = nullptr;};
      inline int32_t getSuccessCount() const { DARABONBA_PTR_GET_DEFAULT(successCount_, 0) };
      inline MeteringDailyDetailList& setSuccessCount(int32_t successCount) { DARABONBA_PTR_SET_VALUE(successCount_, successCount) };


    protected:
      shared_ptr<string> billDate_ {};
      shared_ptr<string> billPeriod_ {};
      shared_ptr<string> billingFunctionItem_ {};
      shared_ptr<string> billingItem_ {};
      shared_ptr<int32_t> billingQps_ {};
      shared_ptr<int32_t> failedCount_ {};
      shared_ptr<int32_t> ladderTypeCode_ {};
      shared_ptr<string> subAccountId_ {};
      shared_ptr<int32_t> successCount_ {};
    };

    virtual bool empty() const override { return this->meteringDailyDetailList_ == nullptr; };
    // meteringDailyDetailList Field Functions 
    bool hasMeteringDailyDetailList() const { return this->meteringDailyDetailList_ != nullptr;};
    void deleteMeteringDailyDetailList() { this->meteringDailyDetailList_ = nullptr;};
    inline const vector<ListMeteringDailyDetailResult::MeteringDailyDetailList> & getMeteringDailyDetailList() const { DARABONBA_PTR_GET_CONST(meteringDailyDetailList_, vector<ListMeteringDailyDetailResult::MeteringDailyDetailList>) };
    inline vector<ListMeteringDailyDetailResult::MeteringDailyDetailList> getMeteringDailyDetailList() { DARABONBA_PTR_GET(meteringDailyDetailList_, vector<ListMeteringDailyDetailResult::MeteringDailyDetailList>) };
    inline ListMeteringDailyDetailResult& setMeteringDailyDetailList(const vector<ListMeteringDailyDetailResult::MeteringDailyDetailList> & meteringDailyDetailList) { DARABONBA_PTR_SET_VALUE(meteringDailyDetailList_, meteringDailyDetailList) };
    inline ListMeteringDailyDetailResult& setMeteringDailyDetailList(vector<ListMeteringDailyDetailResult::MeteringDailyDetailList> && meteringDailyDetailList) { DARABONBA_PTR_SET_RVALUE(meteringDailyDetailList_, meteringDailyDetailList) };


  protected:
    shared_ptr<vector<ListMeteringDailyDetailResult::MeteringDailyDetailList>> meteringDailyDetailList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241121
#endif
