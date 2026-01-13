// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMETERINGDAILYDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMETERINGDAILYDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241121
{
namespace Models
{
  class ListMeteringDailyDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMeteringDailyDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(billPeriod, billPeriod_);
      DARABONBA_PTR_TO_JSON(billingItem, billingItem_);
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
      DARABONBA_PTR_TO_JSON(subAccountId, subAccountId_);
    };
    friend void from_json(const Darabonba::Json& j, ListMeteringDailyDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(billPeriod, billPeriod_);
      DARABONBA_PTR_FROM_JSON(billingItem, billingItem_);
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      DARABONBA_PTR_FROM_JSON(subAccountId, subAccountId_);
    };
    ListMeteringDailyDetailRequest() = default ;
    ListMeteringDailyDetailRequest(const ListMeteringDailyDetailRequest &) = default ;
    ListMeteringDailyDetailRequest(ListMeteringDailyDetailRequest &&) = default ;
    ListMeteringDailyDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMeteringDailyDetailRequest() = default ;
    ListMeteringDailyDetailRequest& operator=(const ListMeteringDailyDetailRequest &) = default ;
    ListMeteringDailyDetailRequest& operator=(ListMeteringDailyDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->billPeriod_ == nullptr
        && this->billingItem_ == nullptr && this->endTime_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->startTime_ == nullptr
        && this->subAccountId_ == nullptr; };
    // billPeriod Field Functions 
    bool hasBillPeriod() const { return this->billPeriod_ != nullptr;};
    void deleteBillPeriod() { this->billPeriod_ = nullptr;};
    inline string getBillPeriod() const { DARABONBA_PTR_GET_DEFAULT(billPeriod_, "") };
    inline ListMeteringDailyDetailRequest& setBillPeriod(string billPeriod) { DARABONBA_PTR_SET_VALUE(billPeriod_, billPeriod) };


    // billingItem Field Functions 
    bool hasBillingItem() const { return this->billingItem_ != nullptr;};
    void deleteBillingItem() { this->billingItem_ = nullptr;};
    inline string getBillingItem() const { DARABONBA_PTR_GET_DEFAULT(billingItem_, "") };
    inline ListMeteringDailyDetailRequest& setBillingItem(string billingItem) { DARABONBA_PTR_SET_VALUE(billingItem_, billingItem) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListMeteringDailyDetailRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListMeteringDailyDetailRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListMeteringDailyDetailRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListMeteringDailyDetailRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // subAccountId Field Functions 
    bool hasSubAccountId() const { return this->subAccountId_ != nullptr;};
    void deleteSubAccountId() { this->subAccountId_ = nullptr;};
    inline string getSubAccountId() const { DARABONBA_PTR_GET_DEFAULT(subAccountId_, "") };
    inline ListMeteringDailyDetailRequest& setSubAccountId(string subAccountId) { DARABONBA_PTR_SET_VALUE(subAccountId_, subAccountId) };


  protected:
    shared_ptr<string> billPeriod_ {};
    shared_ptr<string> billingItem_ {};
    shared_ptr<string> endTime_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> startTime_ {};
    shared_ptr<string> subAccountId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241121
#endif
