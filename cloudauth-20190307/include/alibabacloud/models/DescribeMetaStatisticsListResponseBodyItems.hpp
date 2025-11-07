// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETASTATISTICSLISTRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETASTATISTICSLISTRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DescribeMetaStatisticsListResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMetaStatisticsListResponseBodyItems& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeMetaStatisticsListResponseBodyItems& obj) { 
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
    DescribeMetaStatisticsListResponseBodyItems() = default ;
    DescribeMetaStatisticsListResponseBodyItems(const DescribeMetaStatisticsListResponseBodyItems &) = default ;
    DescribeMetaStatisticsListResponseBodyItems(DescribeMetaStatisticsListResponseBodyItems &&) = default ;
    DescribeMetaStatisticsListResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMetaStatisticsListResponseBodyItems() = default ;
    DescribeMetaStatisticsListResponseBodyItems& operator=(const DescribeMetaStatisticsListResponseBodyItems &) = default ;
    DescribeMetaStatisticsListResponseBodyItems& operator=(DescribeMetaStatisticsListResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->api_ == nullptr
        && return this->apiName_ == nullptr && return this->billCount_ == nullptr && return this->billRate_ == nullptr && return this->chargeCount_ == nullptr && return this->date_ == nullptr
        && return this->ispName_ == nullptr && return this->noRecordCount_ == nullptr && return this->passedCount_ == nullptr && return this->passedRate_ == nullptr && return this->successCount_ == nullptr
        && return this->successRate_ == nullptr && return this->totalCount_ == nullptr && return this->unpassedCount_ == nullptr; };
    // api Field Functions 
    bool hasApi() const { return this->api_ != nullptr;};
    void deleteApi() { this->api_ = nullptr;};
    inline string api() const { DARABONBA_PTR_GET_DEFAULT(api_, "") };
    inline DescribeMetaStatisticsListResponseBodyItems& setApi(string api) { DARABONBA_PTR_SET_VALUE(api_, api) };


    // apiName Field Functions 
    bool hasApiName() const { return this->apiName_ != nullptr;};
    void deleteApiName() { this->apiName_ = nullptr;};
    inline string apiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
    inline DescribeMetaStatisticsListResponseBodyItems& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


    // billCount Field Functions 
    bool hasBillCount() const { return this->billCount_ != nullptr;};
    void deleteBillCount() { this->billCount_ = nullptr;};
    inline int64_t billCount() const { DARABONBA_PTR_GET_DEFAULT(billCount_, 0L) };
    inline DescribeMetaStatisticsListResponseBodyItems& setBillCount(int64_t billCount) { DARABONBA_PTR_SET_VALUE(billCount_, billCount) };


    // billRate Field Functions 
    bool hasBillRate() const { return this->billRate_ != nullptr;};
    void deleteBillRate() { this->billRate_ = nullptr;};
    inline string billRate() const { DARABONBA_PTR_GET_DEFAULT(billRate_, "") };
    inline DescribeMetaStatisticsListResponseBodyItems& setBillRate(string billRate) { DARABONBA_PTR_SET_VALUE(billRate_, billRate) };


    // chargeCount Field Functions 
    bool hasChargeCount() const { return this->chargeCount_ != nullptr;};
    void deleteChargeCount() { this->chargeCount_ = nullptr;};
    inline int64_t chargeCount() const { DARABONBA_PTR_GET_DEFAULT(chargeCount_, 0L) };
    inline DescribeMetaStatisticsListResponseBodyItems& setChargeCount(int64_t chargeCount) { DARABONBA_PTR_SET_VALUE(chargeCount_, chargeCount) };


    // date Field Functions 
    bool hasDate() const { return this->date_ != nullptr;};
    void deleteDate() { this->date_ = nullptr;};
    inline string date() const { DARABONBA_PTR_GET_DEFAULT(date_, "") };
    inline DescribeMetaStatisticsListResponseBodyItems& setDate(string date) { DARABONBA_PTR_SET_VALUE(date_, date) };


    // ispName Field Functions 
    bool hasIspName() const { return this->ispName_ != nullptr;};
    void deleteIspName() { this->ispName_ = nullptr;};
    inline string ispName() const { DARABONBA_PTR_GET_DEFAULT(ispName_, "") };
    inline DescribeMetaStatisticsListResponseBodyItems& setIspName(string ispName) { DARABONBA_PTR_SET_VALUE(ispName_, ispName) };


    // noRecordCount Field Functions 
    bool hasNoRecordCount() const { return this->noRecordCount_ != nullptr;};
    void deleteNoRecordCount() { this->noRecordCount_ = nullptr;};
    inline int64_t noRecordCount() const { DARABONBA_PTR_GET_DEFAULT(noRecordCount_, 0L) };
    inline DescribeMetaStatisticsListResponseBodyItems& setNoRecordCount(int64_t noRecordCount) { DARABONBA_PTR_SET_VALUE(noRecordCount_, noRecordCount) };


    // passedCount Field Functions 
    bool hasPassedCount() const { return this->passedCount_ != nullptr;};
    void deletePassedCount() { this->passedCount_ = nullptr;};
    inline int64_t passedCount() const { DARABONBA_PTR_GET_DEFAULT(passedCount_, 0L) };
    inline DescribeMetaStatisticsListResponseBodyItems& setPassedCount(int64_t passedCount) { DARABONBA_PTR_SET_VALUE(passedCount_, passedCount) };


    // passedRate Field Functions 
    bool hasPassedRate() const { return this->passedRate_ != nullptr;};
    void deletePassedRate() { this->passedRate_ = nullptr;};
    inline string passedRate() const { DARABONBA_PTR_GET_DEFAULT(passedRate_, "") };
    inline DescribeMetaStatisticsListResponseBodyItems& setPassedRate(string passedRate) { DARABONBA_PTR_SET_VALUE(passedRate_, passedRate) };


    // successCount Field Functions 
    bool hasSuccessCount() const { return this->successCount_ != nullptr;};
    void deleteSuccessCount() { this->successCount_ = nullptr;};
    inline int64_t successCount() const { DARABONBA_PTR_GET_DEFAULT(successCount_, 0L) };
    inline DescribeMetaStatisticsListResponseBodyItems& setSuccessCount(int64_t successCount) { DARABONBA_PTR_SET_VALUE(successCount_, successCount) };


    // successRate Field Functions 
    bool hasSuccessRate() const { return this->successRate_ != nullptr;};
    void deleteSuccessRate() { this->successRate_ = nullptr;};
    inline string successRate() const { DARABONBA_PTR_GET_DEFAULT(successRate_, "") };
    inline DescribeMetaStatisticsListResponseBodyItems& setSuccessRate(string successRate) { DARABONBA_PTR_SET_VALUE(successRate_, successRate) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeMetaStatisticsListResponseBodyItems& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // unpassedCount Field Functions 
    bool hasUnpassedCount() const { return this->unpassedCount_ != nullptr;};
    void deleteUnpassedCount() { this->unpassedCount_ = nullptr;};
    inline int64_t unpassedCount() const { DARABONBA_PTR_GET_DEFAULT(unpassedCount_, 0L) };
    inline DescribeMetaStatisticsListResponseBodyItems& setUnpassedCount(int64_t unpassedCount) { DARABONBA_PTR_SET_VALUE(unpassedCount_, unpassedCount) };


  protected:
    std::shared_ptr<string> api_ = nullptr;
    std::shared_ptr<string> apiName_ = nullptr;
    std::shared_ptr<int64_t> billCount_ = nullptr;
    std::shared_ptr<string> billRate_ = nullptr;
    std::shared_ptr<int64_t> chargeCount_ = nullptr;
    std::shared_ptr<string> date_ = nullptr;
    std::shared_ptr<string> ispName_ = nullptr;
    std::shared_ptr<int64_t> noRecordCount_ = nullptr;
    std::shared_ptr<int64_t> passedCount_ = nullptr;
    std::shared_ptr<string> passedRate_ = nullptr;
    std::shared_ptr<int64_t> successCount_ = nullptr;
    std::shared_ptr<string> successRate_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
    std::shared_ptr<int64_t> unpassedCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
