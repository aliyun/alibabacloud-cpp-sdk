// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERALBILL_HPP_
#define ALIBABACLOUD_MODELS_GENERALBILL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Money.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkedmall20230930
{
namespace Models
{
  class GeneralBill : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GeneralBill& obj) { 
      DARABONBA_PTR_TO_JSON(billId, billId_);
      DARABONBA_PTR_TO_JSON(billPeriod, billPeriod_);
      DARABONBA_PTR_TO_JSON(downloadUrl, downloadUrl_);
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(shopId, shopId_);
      DARABONBA_PTR_TO_JSON(shopName, shopName_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
      DARABONBA_PTR_TO_JSON(totalAmount, totalAmount_);
    };
    friend void from_json(const Darabonba::Json& j, GeneralBill& obj) { 
      DARABONBA_PTR_FROM_JSON(billId, billId_);
      DARABONBA_PTR_FROM_JSON(billPeriod, billPeriod_);
      DARABONBA_PTR_FROM_JSON(downloadUrl, downloadUrl_);
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(shopId, shopId_);
      DARABONBA_PTR_FROM_JSON(shopName, shopName_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      DARABONBA_PTR_FROM_JSON(totalAmount, totalAmount_);
    };
    GeneralBill() = default ;
    GeneralBill(const GeneralBill &) = default ;
    GeneralBill(GeneralBill &&) = default ;
    GeneralBill(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GeneralBill() = default ;
    GeneralBill& operator=(const GeneralBill &) = default ;
    GeneralBill& operator=(GeneralBill &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->billId_ == nullptr
        && this->billPeriod_ == nullptr && this->downloadUrl_ == nullptr && this->endTime_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr
        && this->shopId_ == nullptr && this->shopName_ == nullptr && this->startTime_ == nullptr && this->totalAmount_ == nullptr; };
    // billId Field Functions 
    bool hasBillId() const { return this->billId_ != nullptr;};
    void deleteBillId() { this->billId_ = nullptr;};
    inline string getBillId() const { DARABONBA_PTR_GET_DEFAULT(billId_, "") };
    inline GeneralBill& setBillId(string billId) { DARABONBA_PTR_SET_VALUE(billId_, billId) };


    // billPeriod Field Functions 
    bool hasBillPeriod() const { return this->billPeriod_ != nullptr;};
    void deleteBillPeriod() { this->billPeriod_ = nullptr;};
    inline string getBillPeriod() const { DARABONBA_PTR_GET_DEFAULT(billPeriod_, "") };
    inline GeneralBill& setBillPeriod(string billPeriod) { DARABONBA_PTR_SET_VALUE(billPeriod_, billPeriod) };


    // downloadUrl Field Functions 
    bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
    void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
    inline const vector<string> & getDownloadUrl() const { DARABONBA_PTR_GET_CONST(downloadUrl_, vector<string>) };
    inline vector<string> getDownloadUrl() { DARABONBA_PTR_GET(downloadUrl_, vector<string>) };
    inline GeneralBill& setDownloadUrl(const vector<string> & downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };
    inline GeneralBill& setDownloadUrl(vector<string> && downloadUrl) { DARABONBA_PTR_SET_RVALUE(downloadUrl_, downloadUrl) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GeneralBill& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline GeneralBill& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline GeneralBill& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // shopId Field Functions 
    bool hasShopId() const { return this->shopId_ != nullptr;};
    void deleteShopId() { this->shopId_ = nullptr;};
    inline string getShopId() const { DARABONBA_PTR_GET_DEFAULT(shopId_, "") };
    inline GeneralBill& setShopId(string shopId) { DARABONBA_PTR_SET_VALUE(shopId_, shopId) };


    // shopName Field Functions 
    bool hasShopName() const { return this->shopName_ != nullptr;};
    void deleteShopName() { this->shopName_ = nullptr;};
    inline string getShopName() const { DARABONBA_PTR_GET_DEFAULT(shopName_, "") };
    inline GeneralBill& setShopName(string shopName) { DARABONBA_PTR_SET_VALUE(shopName_, shopName) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GeneralBill& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // totalAmount Field Functions 
    bool hasTotalAmount() const { return this->totalAmount_ != nullptr;};
    void deleteTotalAmount() { this->totalAmount_ = nullptr;};
    inline const Money & getTotalAmount() const { DARABONBA_PTR_GET_CONST(totalAmount_, Money) };
    inline Money getTotalAmount() { DARABONBA_PTR_GET(totalAmount_, Money) };
    inline GeneralBill& setTotalAmount(const Money & totalAmount) { DARABONBA_PTR_SET_VALUE(totalAmount_, totalAmount) };
    inline GeneralBill& setTotalAmount(Money && totalAmount) { DARABONBA_PTR_SET_RVALUE(totalAmount_, totalAmount) };


  protected:
    shared_ptr<string> billId_ {};
    shared_ptr<string> billPeriod_ {};
    shared_ptr<vector<string>> downloadUrl_ {};
    shared_ptr<string> endTime_ {};
    shared_ptr<string> gmtCreate_ {};
    shared_ptr<string> gmtModified_ {};
    shared_ptr<string> shopId_ {};
    shared_ptr<string> shopName_ {};
    shared_ptr<string> startTime_ {};
    shared_ptr<Money> totalAmount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkedmall20230930
#endif
