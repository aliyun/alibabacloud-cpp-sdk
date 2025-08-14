// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOUPONRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOUPONRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCouponResponseBodyDataShareUidList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class DescribeCouponResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCouponResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Amount, amount_);
      DARABONBA_PTR_TO_JSON(CertainAmount, certainAmount_);
      DARABONBA_PTR_TO_JSON(CouponId, couponId_);
      DARABONBA_PTR_TO_JSON(CouponNo, couponNo_);
      DARABONBA_PTR_TO_JSON(CouponType, couponType_);
      DARABONBA_PTR_TO_JSON(CouponTypeName, couponTypeName_);
      DARABONBA_PTR_TO_JSON(Currency, currency_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(FirstBuy, firstBuy_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(ItemNames, itemNames_);
      DARABONBA_PTR_TO_JSON(MoneyLimit, moneyLimit_);
      DARABONBA_PTR_TO_JSON(OrderTimeRule, orderTimeRule_);
      DARABONBA_PTR_TO_JSON(RemainAmount, remainAmount_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(ShareUidList, shareUidList_);
      DARABONBA_PTR_TO_JSON(ShowSetDeductTagButton, showSetDeductTagButton_);
      DARABONBA_PTR_TO_JSON(Site, site_);
      DARABONBA_PTR_TO_JSON(SiteName, siteName_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SuitAccount, suitAccount_);
      DARABONBA_PTR_TO_JSON(SuitItemType, suitItemType_);
      DARABONBA_PTR_TO_JSON(UniversalType, universalType_);
      DARABONBA_PTR_TO_JSON(YhOrderTypes, yhOrderTypes_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCouponResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Amount, amount_);
      DARABONBA_PTR_FROM_JSON(CertainAmount, certainAmount_);
      DARABONBA_PTR_FROM_JSON(CouponId, couponId_);
      DARABONBA_PTR_FROM_JSON(CouponNo, couponNo_);
      DARABONBA_PTR_FROM_JSON(CouponType, couponType_);
      DARABONBA_PTR_FROM_JSON(CouponTypeName, couponTypeName_);
      DARABONBA_PTR_FROM_JSON(Currency, currency_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(FirstBuy, firstBuy_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(ItemNames, itemNames_);
      DARABONBA_PTR_FROM_JSON(MoneyLimit, moneyLimit_);
      DARABONBA_PTR_FROM_JSON(OrderTimeRule, orderTimeRule_);
      DARABONBA_PTR_FROM_JSON(RemainAmount, remainAmount_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(ShareUidList, shareUidList_);
      DARABONBA_PTR_FROM_JSON(ShowSetDeductTagButton, showSetDeductTagButton_);
      DARABONBA_PTR_FROM_JSON(Site, site_);
      DARABONBA_PTR_FROM_JSON(SiteName, siteName_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SuitAccount, suitAccount_);
      DARABONBA_PTR_FROM_JSON(SuitItemType, suitItemType_);
      DARABONBA_PTR_FROM_JSON(UniversalType, universalType_);
      DARABONBA_PTR_FROM_JSON(YhOrderTypes, yhOrderTypes_);
    };
    DescribeCouponResponseBodyData() = default ;
    DescribeCouponResponseBodyData(const DescribeCouponResponseBodyData &) = default ;
    DescribeCouponResponseBodyData(DescribeCouponResponseBodyData &&) = default ;
    DescribeCouponResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCouponResponseBodyData() = default ;
    DescribeCouponResponseBodyData& operator=(const DescribeCouponResponseBodyData &) = default ;
    DescribeCouponResponseBodyData& operator=(DescribeCouponResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->amount_ != nullptr
        && this->certainAmount_ != nullptr && this->couponId_ != nullptr && this->couponNo_ != nullptr && this->couponType_ != nullptr && this->couponTypeName_ != nullptr
        && this->currency_ != nullptr && this->endTime_ != nullptr && this->firstBuy_ != nullptr && this->gmtCreate_ != nullptr && this->itemNames_ != nullptr
        && this->moneyLimit_ != nullptr && this->orderTimeRule_ != nullptr && this->remainAmount_ != nullptr && this->remark_ != nullptr && this->shareUidList_ != nullptr
        && this->showSetDeductTagButton_ != nullptr && this->site_ != nullptr && this->siteName_ != nullptr && this->startTime_ != nullptr && this->status_ != nullptr
        && this->suitAccount_ != nullptr && this->suitItemType_ != nullptr && this->universalType_ != nullptr && this->yhOrderTypes_ != nullptr; };
    // amount Field Functions 
    bool hasAmount() const { return this->amount_ != nullptr;};
    void deleteAmount() { this->amount_ = nullptr;};
    inline string amount() const { DARABONBA_PTR_GET_DEFAULT(amount_, "") };
    inline DescribeCouponResponseBodyData& setAmount(string amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


    // certainAmount Field Functions 
    bool hasCertainAmount() const { return this->certainAmount_ != nullptr;};
    void deleteCertainAmount() { this->certainAmount_ = nullptr;};
    inline string certainAmount() const { DARABONBA_PTR_GET_DEFAULT(certainAmount_, "") };
    inline DescribeCouponResponseBodyData& setCertainAmount(string certainAmount) { DARABONBA_PTR_SET_VALUE(certainAmount_, certainAmount) };


    // couponId Field Functions 
    bool hasCouponId() const { return this->couponId_ != nullptr;};
    void deleteCouponId() { this->couponId_ = nullptr;};
    inline int64_t couponId() const { DARABONBA_PTR_GET_DEFAULT(couponId_, 0L) };
    inline DescribeCouponResponseBodyData& setCouponId(int64_t couponId) { DARABONBA_PTR_SET_VALUE(couponId_, couponId) };


    // couponNo Field Functions 
    bool hasCouponNo() const { return this->couponNo_ != nullptr;};
    void deleteCouponNo() { this->couponNo_ = nullptr;};
    inline string couponNo() const { DARABONBA_PTR_GET_DEFAULT(couponNo_, "") };
    inline DescribeCouponResponseBodyData& setCouponNo(string couponNo) { DARABONBA_PTR_SET_VALUE(couponNo_, couponNo) };


    // couponType Field Functions 
    bool hasCouponType() const { return this->couponType_ != nullptr;};
    void deleteCouponType() { this->couponType_ = nullptr;};
    inline string couponType() const { DARABONBA_PTR_GET_DEFAULT(couponType_, "") };
    inline DescribeCouponResponseBodyData& setCouponType(string couponType) { DARABONBA_PTR_SET_VALUE(couponType_, couponType) };


    // couponTypeName Field Functions 
    bool hasCouponTypeName() const { return this->couponTypeName_ != nullptr;};
    void deleteCouponTypeName() { this->couponTypeName_ = nullptr;};
    inline string couponTypeName() const { DARABONBA_PTR_GET_DEFAULT(couponTypeName_, "") };
    inline DescribeCouponResponseBodyData& setCouponTypeName(string couponTypeName) { DARABONBA_PTR_SET_VALUE(couponTypeName_, couponTypeName) };


    // currency Field Functions 
    bool hasCurrency() const { return this->currency_ != nullptr;};
    void deleteCurrency() { this->currency_ = nullptr;};
    inline string currency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
    inline DescribeCouponResponseBodyData& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeCouponResponseBodyData& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // firstBuy Field Functions 
    bool hasFirstBuy() const { return this->firstBuy_ != nullptr;};
    void deleteFirstBuy() { this->firstBuy_ = nullptr;};
    inline bool firstBuy() const { DARABONBA_PTR_GET_DEFAULT(firstBuy_, false) };
    inline DescribeCouponResponseBodyData& setFirstBuy(bool firstBuy) { DARABONBA_PTR_SET_VALUE(firstBuy_, firstBuy) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline DescribeCouponResponseBodyData& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // itemNames Field Functions 
    bool hasItemNames() const { return this->itemNames_ != nullptr;};
    void deleteItemNames() { this->itemNames_ = nullptr;};
    inline const vector<string> & itemNames() const { DARABONBA_PTR_GET_CONST(itemNames_, vector<string>) };
    inline vector<string> itemNames() { DARABONBA_PTR_GET(itemNames_, vector<string>) };
    inline DescribeCouponResponseBodyData& setItemNames(const vector<string> & itemNames) { DARABONBA_PTR_SET_VALUE(itemNames_, itemNames) };
    inline DescribeCouponResponseBodyData& setItemNames(vector<string> && itemNames) { DARABONBA_PTR_SET_RVALUE(itemNames_, itemNames) };


    // moneyLimit Field Functions 
    bool hasMoneyLimit() const { return this->moneyLimit_ != nullptr;};
    void deleteMoneyLimit() { this->moneyLimit_ = nullptr;};
    inline string moneyLimit() const { DARABONBA_PTR_GET_DEFAULT(moneyLimit_, "") };
    inline DescribeCouponResponseBodyData& setMoneyLimit(string moneyLimit) { DARABONBA_PTR_SET_VALUE(moneyLimit_, moneyLimit) };


    // orderTimeRule Field Functions 
    bool hasOrderTimeRule() const { return this->orderTimeRule_ != nullptr;};
    void deleteOrderTimeRule() { this->orderTimeRule_ = nullptr;};
    inline string orderTimeRule() const { DARABONBA_PTR_GET_DEFAULT(orderTimeRule_, "") };
    inline DescribeCouponResponseBodyData& setOrderTimeRule(string orderTimeRule) { DARABONBA_PTR_SET_VALUE(orderTimeRule_, orderTimeRule) };


    // remainAmount Field Functions 
    bool hasRemainAmount() const { return this->remainAmount_ != nullptr;};
    void deleteRemainAmount() { this->remainAmount_ = nullptr;};
    inline string remainAmount() const { DARABONBA_PTR_GET_DEFAULT(remainAmount_, "") };
    inline DescribeCouponResponseBodyData& setRemainAmount(string remainAmount) { DARABONBA_PTR_SET_VALUE(remainAmount_, remainAmount) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline DescribeCouponResponseBodyData& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // shareUidList Field Functions 
    bool hasShareUidList() const { return this->shareUidList_ != nullptr;};
    void deleteShareUidList() { this->shareUidList_ = nullptr;};
    inline const vector<Models::DescribeCouponResponseBodyDataShareUidList> & shareUidList() const { DARABONBA_PTR_GET_CONST(shareUidList_, vector<Models::DescribeCouponResponseBodyDataShareUidList>) };
    inline vector<Models::DescribeCouponResponseBodyDataShareUidList> shareUidList() { DARABONBA_PTR_GET(shareUidList_, vector<Models::DescribeCouponResponseBodyDataShareUidList>) };
    inline DescribeCouponResponseBodyData& setShareUidList(const vector<Models::DescribeCouponResponseBodyDataShareUidList> & shareUidList) { DARABONBA_PTR_SET_VALUE(shareUidList_, shareUidList) };
    inline DescribeCouponResponseBodyData& setShareUidList(vector<Models::DescribeCouponResponseBodyDataShareUidList> && shareUidList) { DARABONBA_PTR_SET_RVALUE(shareUidList_, shareUidList) };


    // showSetDeductTagButton Field Functions 
    bool hasShowSetDeductTagButton() const { return this->showSetDeductTagButton_ != nullptr;};
    void deleteShowSetDeductTagButton() { this->showSetDeductTagButton_ = nullptr;};
    inline bool showSetDeductTagButton() const { DARABONBA_PTR_GET_DEFAULT(showSetDeductTagButton_, false) };
    inline DescribeCouponResponseBodyData& setShowSetDeductTagButton(bool showSetDeductTagButton) { DARABONBA_PTR_SET_VALUE(showSetDeductTagButton_, showSetDeductTagButton) };


    // site Field Functions 
    bool hasSite() const { return this->site_ != nullptr;};
    void deleteSite() { this->site_ = nullptr;};
    inline string site() const { DARABONBA_PTR_GET_DEFAULT(site_, "") };
    inline DescribeCouponResponseBodyData& setSite(string site) { DARABONBA_PTR_SET_VALUE(site_, site) };


    // siteName Field Functions 
    bool hasSiteName() const { return this->siteName_ != nullptr;};
    void deleteSiteName() { this->siteName_ = nullptr;};
    inline string siteName() const { DARABONBA_PTR_GET_DEFAULT(siteName_, "") };
    inline DescribeCouponResponseBodyData& setSiteName(string siteName) { DARABONBA_PTR_SET_VALUE(siteName_, siteName) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeCouponResponseBodyData& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeCouponResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // suitAccount Field Functions 
    bool hasSuitAccount() const { return this->suitAccount_ != nullptr;};
    void deleteSuitAccount() { this->suitAccount_ = nullptr;};
    inline string suitAccount() const { DARABONBA_PTR_GET_DEFAULT(suitAccount_, "") };
    inline DescribeCouponResponseBodyData& setSuitAccount(string suitAccount) { DARABONBA_PTR_SET_VALUE(suitAccount_, suitAccount) };


    // suitItemType Field Functions 
    bool hasSuitItemType() const { return this->suitItemType_ != nullptr;};
    void deleteSuitItemType() { this->suitItemType_ = nullptr;};
    inline string suitItemType() const { DARABONBA_PTR_GET_DEFAULT(suitItemType_, "") };
    inline DescribeCouponResponseBodyData& setSuitItemType(string suitItemType) { DARABONBA_PTR_SET_VALUE(suitItemType_, suitItemType) };


    // universalType Field Functions 
    bool hasUniversalType() const { return this->universalType_ != nullptr;};
    void deleteUniversalType() { this->universalType_ = nullptr;};
    inline string universalType() const { DARABONBA_PTR_GET_DEFAULT(universalType_, "") };
    inline DescribeCouponResponseBodyData& setUniversalType(string universalType) { DARABONBA_PTR_SET_VALUE(universalType_, universalType) };


    // yhOrderTypes Field Functions 
    bool hasYhOrderTypes() const { return this->yhOrderTypes_ != nullptr;};
    void deleteYhOrderTypes() { this->yhOrderTypes_ = nullptr;};
    inline const vector<string> & yhOrderTypes() const { DARABONBA_PTR_GET_CONST(yhOrderTypes_, vector<string>) };
    inline vector<string> yhOrderTypes() { DARABONBA_PTR_GET(yhOrderTypes_, vector<string>) };
    inline DescribeCouponResponseBodyData& setYhOrderTypes(const vector<string> & yhOrderTypes) { DARABONBA_PTR_SET_VALUE(yhOrderTypes_, yhOrderTypes) };
    inline DescribeCouponResponseBodyData& setYhOrderTypes(vector<string> && yhOrderTypes) { DARABONBA_PTR_SET_RVALUE(yhOrderTypes_, yhOrderTypes) };


  protected:
    std::shared_ptr<string> amount_ = nullptr;
    std::shared_ptr<string> certainAmount_ = nullptr;
    std::shared_ptr<int64_t> couponId_ = nullptr;
    std::shared_ptr<string> couponNo_ = nullptr;
    std::shared_ptr<string> couponType_ = nullptr;
    std::shared_ptr<string> couponTypeName_ = nullptr;
    std::shared_ptr<string> currency_ = nullptr;
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<bool> firstBuy_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<vector<string>> itemNames_ = nullptr;
    std::shared_ptr<string> moneyLimit_ = nullptr;
    std::shared_ptr<string> orderTimeRule_ = nullptr;
    std::shared_ptr<string> remainAmount_ = nullptr;
    std::shared_ptr<string> remark_ = nullptr;
    std::shared_ptr<vector<Models::DescribeCouponResponseBodyDataShareUidList>> shareUidList_ = nullptr;
    std::shared_ptr<bool> showSetDeductTagButton_ = nullptr;
    std::shared_ptr<string> site_ = nullptr;
    std::shared_ptr<string> siteName_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> suitAccount_ = nullptr;
    std::shared_ptr<string> suitItemType_ = nullptr;
    std::shared_ptr<string> universalType_ = nullptr;
    std::shared_ptr<vector<string>> yhOrderTypes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
