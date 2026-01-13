// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOWNLOADMETERINGDAILYDETAILCMD_HPP_
#define ALIBABACLOUD_MODELS_DOWNLOADMETERINGDAILYDETAILCMD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241121
{
namespace Models
{
  class DownloadMeteringDailyDetailCmd : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DownloadMeteringDailyDetailCmd& obj) { 
      DARABONBA_PTR_TO_JSON(billPeriod, billPeriod_);
      DARABONBA_PTR_TO_JSON(billingItem, billingItem_);
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
      DARABONBA_PTR_TO_JSON(subAccountId, subAccountId_);
    };
    friend void from_json(const Darabonba::Json& j, DownloadMeteringDailyDetailCmd& obj) { 
      DARABONBA_PTR_FROM_JSON(billPeriod, billPeriod_);
      DARABONBA_PTR_FROM_JSON(billingItem, billingItem_);
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      DARABONBA_PTR_FROM_JSON(subAccountId, subAccountId_);
    };
    DownloadMeteringDailyDetailCmd() = default ;
    DownloadMeteringDailyDetailCmd(const DownloadMeteringDailyDetailCmd &) = default ;
    DownloadMeteringDailyDetailCmd(DownloadMeteringDailyDetailCmd &&) = default ;
    DownloadMeteringDailyDetailCmd(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DownloadMeteringDailyDetailCmd() = default ;
    DownloadMeteringDailyDetailCmd& operator=(const DownloadMeteringDailyDetailCmd &) = default ;
    DownloadMeteringDailyDetailCmd& operator=(DownloadMeteringDailyDetailCmd &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->billPeriod_ == nullptr
        && this->billingItem_ == nullptr && this->endTime_ == nullptr && this->startTime_ == nullptr && this->subAccountId_ == nullptr; };
    // billPeriod Field Functions 
    bool hasBillPeriod() const { return this->billPeriod_ != nullptr;};
    void deleteBillPeriod() { this->billPeriod_ = nullptr;};
    inline string getBillPeriod() const { DARABONBA_PTR_GET_DEFAULT(billPeriod_, "") };
    inline DownloadMeteringDailyDetailCmd& setBillPeriod(string billPeriod) { DARABONBA_PTR_SET_VALUE(billPeriod_, billPeriod) };


    // billingItem Field Functions 
    bool hasBillingItem() const { return this->billingItem_ != nullptr;};
    void deleteBillingItem() { this->billingItem_ = nullptr;};
    inline string getBillingItem() const { DARABONBA_PTR_GET_DEFAULT(billingItem_, "") };
    inline DownloadMeteringDailyDetailCmd& setBillingItem(string billingItem) { DARABONBA_PTR_SET_VALUE(billingItem_, billingItem) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DownloadMeteringDailyDetailCmd& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DownloadMeteringDailyDetailCmd& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // subAccountId Field Functions 
    bool hasSubAccountId() const { return this->subAccountId_ != nullptr;};
    void deleteSubAccountId() { this->subAccountId_ = nullptr;};
    inline string getSubAccountId() const { DARABONBA_PTR_GET_DEFAULT(subAccountId_, "") };
    inline DownloadMeteringDailyDetailCmd& setSubAccountId(string subAccountId) { DARABONBA_PTR_SET_VALUE(subAccountId_, subAccountId) };


  protected:
    shared_ptr<string> billPeriod_ {};
    shared_ptr<string> billingItem_ {};
    shared_ptr<string> endTime_ {};
    shared_ptr<string> startTime_ {};
    shared_ptr<string> subAccountId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241121
#endif
