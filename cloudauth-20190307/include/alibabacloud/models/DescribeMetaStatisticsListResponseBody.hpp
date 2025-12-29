// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETASTATISTICSLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETASTATISTICSLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DescribeMetaStatisticsListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMetaStatisticsListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMetaStatisticsListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeMetaStatisticsListResponseBody() = default ;
    DescribeMetaStatisticsListResponseBody(const DescribeMetaStatisticsListResponseBody &) = default ;
    DescribeMetaStatisticsListResponseBody(DescribeMetaStatisticsListResponseBody &&) = default ;
    DescribeMetaStatisticsListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMetaStatisticsListResponseBody() = default ;
    DescribeMetaStatisticsListResponseBody& operator=(const DescribeMetaStatisticsListResponseBody &) = default ;
    DescribeMetaStatisticsListResponseBody& operator=(DescribeMetaStatisticsListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(Api, api_);
        DARABONBA_PTR_TO_JSON(ApiName, apiName_);
        DARABONBA_PTR_TO_JSON(BillCount, billCount_);
        DARABONBA_PTR_TO_JSON(BillRate, billRate_);
        DARABONBA_PTR_TO_JSON(ChargeCount, chargeCount_);
        DARABONBA_PTR_TO_JSON(Date, date_);
        DARABONBA_PTR_TO_JSON(IspName, ispName_);
        DARABONBA_PTR_TO_JSON(NoRecordCount, noRecordCount_);
        DARABONBA_PTR_TO_JSON(PassedCount, passedCount_);
        DARABONBA_PTR_TO_JSON(PassedRate, passedRate_);
        DARABONBA_PTR_TO_JSON(SuccessCount, successCount_);
        DARABONBA_PTR_TO_JSON(SuccessRate, successRate_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_TO_JSON(UnpassedCount, unpassedCount_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(Api, api_);
        DARABONBA_PTR_FROM_JSON(ApiName, apiName_);
        DARABONBA_PTR_FROM_JSON(BillCount, billCount_);
        DARABONBA_PTR_FROM_JSON(BillRate, billRate_);
        DARABONBA_PTR_FROM_JSON(ChargeCount, chargeCount_);
        DARABONBA_PTR_FROM_JSON(Date, date_);
        DARABONBA_PTR_FROM_JSON(IspName, ispName_);
        DARABONBA_PTR_FROM_JSON(NoRecordCount, noRecordCount_);
        DARABONBA_PTR_FROM_JSON(PassedCount, passedCount_);
        DARABONBA_PTR_FROM_JSON(PassedRate, passedRate_);
        DARABONBA_PTR_FROM_JSON(SuccessCount, successCount_);
        DARABONBA_PTR_FROM_JSON(SuccessRate, successRate_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_FROM_JSON(UnpassedCount, unpassedCount_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->api_ == nullptr
        && this->apiName_ == nullptr && this->billCount_ == nullptr && this->billRate_ == nullptr && this->chargeCount_ == nullptr && this->date_ == nullptr
        && this->ispName_ == nullptr && this->noRecordCount_ == nullptr && this->passedCount_ == nullptr && this->passedRate_ == nullptr && this->successCount_ == nullptr
        && this->successRate_ == nullptr && this->totalCount_ == nullptr && this->unpassedCount_ == nullptr; };
      // api Field Functions 
      bool hasApi() const { return this->api_ != nullptr;};
      void deleteApi() { this->api_ = nullptr;};
      inline string getApi() const { DARABONBA_PTR_GET_DEFAULT(api_, "") };
      inline Items& setApi(string api) { DARABONBA_PTR_SET_VALUE(api_, api) };


      // apiName Field Functions 
      bool hasApiName() const { return this->apiName_ != nullptr;};
      void deleteApiName() { this->apiName_ = nullptr;};
      inline string getApiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
      inline Items& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


      // billCount Field Functions 
      bool hasBillCount() const { return this->billCount_ != nullptr;};
      void deleteBillCount() { this->billCount_ = nullptr;};
      inline int64_t getBillCount() const { DARABONBA_PTR_GET_DEFAULT(billCount_, 0L) };
      inline Items& setBillCount(int64_t billCount) { DARABONBA_PTR_SET_VALUE(billCount_, billCount) };


      // billRate Field Functions 
      bool hasBillRate() const { return this->billRate_ != nullptr;};
      void deleteBillRate() { this->billRate_ = nullptr;};
      inline string getBillRate() const { DARABONBA_PTR_GET_DEFAULT(billRate_, "") };
      inline Items& setBillRate(string billRate) { DARABONBA_PTR_SET_VALUE(billRate_, billRate) };


      // chargeCount Field Functions 
      bool hasChargeCount() const { return this->chargeCount_ != nullptr;};
      void deleteChargeCount() { this->chargeCount_ = nullptr;};
      inline int64_t getChargeCount() const { DARABONBA_PTR_GET_DEFAULT(chargeCount_, 0L) };
      inline Items& setChargeCount(int64_t chargeCount) { DARABONBA_PTR_SET_VALUE(chargeCount_, chargeCount) };


      // date Field Functions 
      bool hasDate() const { return this->date_ != nullptr;};
      void deleteDate() { this->date_ = nullptr;};
      inline string getDate() const { DARABONBA_PTR_GET_DEFAULT(date_, "") };
      inline Items& setDate(string date) { DARABONBA_PTR_SET_VALUE(date_, date) };


      // ispName Field Functions 
      bool hasIspName() const { return this->ispName_ != nullptr;};
      void deleteIspName() { this->ispName_ = nullptr;};
      inline string getIspName() const { DARABONBA_PTR_GET_DEFAULT(ispName_, "") };
      inline Items& setIspName(string ispName) { DARABONBA_PTR_SET_VALUE(ispName_, ispName) };


      // noRecordCount Field Functions 
      bool hasNoRecordCount() const { return this->noRecordCount_ != nullptr;};
      void deleteNoRecordCount() { this->noRecordCount_ = nullptr;};
      inline int64_t getNoRecordCount() const { DARABONBA_PTR_GET_DEFAULT(noRecordCount_, 0L) };
      inline Items& setNoRecordCount(int64_t noRecordCount) { DARABONBA_PTR_SET_VALUE(noRecordCount_, noRecordCount) };


      // passedCount Field Functions 
      bool hasPassedCount() const { return this->passedCount_ != nullptr;};
      void deletePassedCount() { this->passedCount_ = nullptr;};
      inline int64_t getPassedCount() const { DARABONBA_PTR_GET_DEFAULT(passedCount_, 0L) };
      inline Items& setPassedCount(int64_t passedCount) { DARABONBA_PTR_SET_VALUE(passedCount_, passedCount) };


      // passedRate Field Functions 
      bool hasPassedRate() const { return this->passedRate_ != nullptr;};
      void deletePassedRate() { this->passedRate_ = nullptr;};
      inline string getPassedRate() const { DARABONBA_PTR_GET_DEFAULT(passedRate_, "") };
      inline Items& setPassedRate(string passedRate) { DARABONBA_PTR_SET_VALUE(passedRate_, passedRate) };


      // successCount Field Functions 
      bool hasSuccessCount() const { return this->successCount_ != nullptr;};
      void deleteSuccessCount() { this->successCount_ = nullptr;};
      inline int64_t getSuccessCount() const { DARABONBA_PTR_GET_DEFAULT(successCount_, 0L) };
      inline Items& setSuccessCount(int64_t successCount) { DARABONBA_PTR_SET_VALUE(successCount_, successCount) };


      // successRate Field Functions 
      bool hasSuccessRate() const { return this->successRate_ != nullptr;};
      void deleteSuccessRate() { this->successRate_ = nullptr;};
      inline string getSuccessRate() const { DARABONBA_PTR_GET_DEFAULT(successRate_, "") };
      inline Items& setSuccessRate(string successRate) { DARABONBA_PTR_SET_VALUE(successRate_, successRate) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline Items& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


      // unpassedCount Field Functions 
      bool hasUnpassedCount() const { return this->unpassedCount_ != nullptr;};
      void deleteUnpassedCount() { this->unpassedCount_ = nullptr;};
      inline int64_t getUnpassedCount() const { DARABONBA_PTR_GET_DEFAULT(unpassedCount_, 0L) };
      inline Items& setUnpassedCount(int64_t unpassedCount) { DARABONBA_PTR_SET_VALUE(unpassedCount_, unpassedCount) };


    protected:
      shared_ptr<string> api_ {};
      shared_ptr<string> apiName_ {};
      shared_ptr<int64_t> billCount_ {};
      shared_ptr<string> billRate_ {};
      shared_ptr<int64_t> chargeCount_ {};
      shared_ptr<string> date_ {};
      shared_ptr<string> ispName_ {};
      shared_ptr<int64_t> noRecordCount_ {};
      shared_ptr<int64_t> passedCount_ {};
      shared_ptr<string> passedRate_ {};
      shared_ptr<int64_t> successCount_ {};
      shared_ptr<string> successRate_ {};
      shared_ptr<int64_t> totalCount_ {};
      shared_ptr<int64_t> unpassedCount_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->requestId_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeMetaStatisticsListResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeMetaStatisticsListResponseBody::Items>) };
    inline vector<DescribeMetaStatisticsListResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<DescribeMetaStatisticsListResponseBody::Items>) };
    inline DescribeMetaStatisticsListResponseBody& setItems(const vector<DescribeMetaStatisticsListResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeMetaStatisticsListResponseBody& setItems(vector<DescribeMetaStatisticsListResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMetaStatisticsListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<DescribeMetaStatisticsListResponseBody::Items>> items_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
