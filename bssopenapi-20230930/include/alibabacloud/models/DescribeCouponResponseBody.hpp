// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOUPONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOUPONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class DescribeCouponResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCouponResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCouponResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeCouponResponseBody() = default ;
    DescribeCouponResponseBody(const DescribeCouponResponseBody &) = default ;
    DescribeCouponResponseBody(DescribeCouponResponseBody &&) = default ;
    DescribeCouponResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCouponResponseBody() = default ;
    DescribeCouponResponseBody& operator=(const DescribeCouponResponseBody &) = default ;
    DescribeCouponResponseBody& operator=(DescribeCouponResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
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
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ShareUidList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ShareUidList& obj) { 
          DARABONBA_PTR_TO_JSON(Uid, uid_);
          DARABONBA_PTR_TO_JSON(UserNick, userNick_);
        };
        friend void from_json(const Darabonba::Json& j, ShareUidList& obj) { 
          DARABONBA_PTR_FROM_JSON(Uid, uid_);
          DARABONBA_PTR_FROM_JSON(UserNick, userNick_);
        };
        ShareUidList() = default ;
        ShareUidList(const ShareUidList &) = default ;
        ShareUidList(ShareUidList &&) = default ;
        ShareUidList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ShareUidList() = default ;
        ShareUidList& operator=(const ShareUidList &) = default ;
        ShareUidList& operator=(ShareUidList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->uid_ == nullptr
        && this->userNick_ == nullptr; };
        // uid Field Functions 
        bool hasUid() const { return this->uid_ != nullptr;};
        void deleteUid() { this->uid_ = nullptr;};
        inline string getUid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
        inline ShareUidList& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


        // userNick Field Functions 
        bool hasUserNick() const { return this->userNick_ != nullptr;};
        void deleteUserNick() { this->userNick_ = nullptr;};
        inline string getUserNick() const { DARABONBA_PTR_GET_DEFAULT(userNick_, "") };
        inline ShareUidList& setUserNick(string userNick) { DARABONBA_PTR_SET_VALUE(userNick_, userNick) };


      protected:
        shared_ptr<string> uid_ {};
        shared_ptr<string> userNick_ {};
      };

      virtual bool empty() const override { return this->amount_ == nullptr
        && this->certainAmount_ == nullptr && this->couponId_ == nullptr && this->couponNo_ == nullptr && this->couponType_ == nullptr && this->couponTypeName_ == nullptr
        && this->currency_ == nullptr && this->endTime_ == nullptr && this->firstBuy_ == nullptr && this->gmtCreate_ == nullptr && this->itemNames_ == nullptr
        && this->moneyLimit_ == nullptr && this->orderTimeRule_ == nullptr && this->remainAmount_ == nullptr && this->remark_ == nullptr && this->shareUidList_ == nullptr
        && this->showSetDeductTagButton_ == nullptr && this->site_ == nullptr && this->siteName_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr
        && this->suitAccount_ == nullptr && this->suitItemType_ == nullptr && this->universalType_ == nullptr && this->yhOrderTypes_ == nullptr; };
      // amount Field Functions 
      bool hasAmount() const { return this->amount_ != nullptr;};
      void deleteAmount() { this->amount_ = nullptr;};
      inline string getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, "") };
      inline Data& setAmount(string amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


      // certainAmount Field Functions 
      bool hasCertainAmount() const { return this->certainAmount_ != nullptr;};
      void deleteCertainAmount() { this->certainAmount_ = nullptr;};
      inline string getCertainAmount() const { DARABONBA_PTR_GET_DEFAULT(certainAmount_, "") };
      inline Data& setCertainAmount(string certainAmount) { DARABONBA_PTR_SET_VALUE(certainAmount_, certainAmount) };


      // couponId Field Functions 
      bool hasCouponId() const { return this->couponId_ != nullptr;};
      void deleteCouponId() { this->couponId_ = nullptr;};
      inline int64_t getCouponId() const { DARABONBA_PTR_GET_DEFAULT(couponId_, 0L) };
      inline Data& setCouponId(int64_t couponId) { DARABONBA_PTR_SET_VALUE(couponId_, couponId) };


      // couponNo Field Functions 
      bool hasCouponNo() const { return this->couponNo_ != nullptr;};
      void deleteCouponNo() { this->couponNo_ = nullptr;};
      inline string getCouponNo() const { DARABONBA_PTR_GET_DEFAULT(couponNo_, "") };
      inline Data& setCouponNo(string couponNo) { DARABONBA_PTR_SET_VALUE(couponNo_, couponNo) };


      // couponType Field Functions 
      bool hasCouponType() const { return this->couponType_ != nullptr;};
      void deleteCouponType() { this->couponType_ = nullptr;};
      inline string getCouponType() const { DARABONBA_PTR_GET_DEFAULT(couponType_, "") };
      inline Data& setCouponType(string couponType) { DARABONBA_PTR_SET_VALUE(couponType_, couponType) };


      // couponTypeName Field Functions 
      bool hasCouponTypeName() const { return this->couponTypeName_ != nullptr;};
      void deleteCouponTypeName() { this->couponTypeName_ = nullptr;};
      inline string getCouponTypeName() const { DARABONBA_PTR_GET_DEFAULT(couponTypeName_, "") };
      inline Data& setCouponTypeName(string couponTypeName) { DARABONBA_PTR_SET_VALUE(couponTypeName_, couponTypeName) };


      // currency Field Functions 
      bool hasCurrency() const { return this->currency_ != nullptr;};
      void deleteCurrency() { this->currency_ = nullptr;};
      inline string getCurrency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
      inline Data& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline Data& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // firstBuy Field Functions 
      bool hasFirstBuy() const { return this->firstBuy_ != nullptr;};
      void deleteFirstBuy() { this->firstBuy_ = nullptr;};
      inline bool getFirstBuy() const { DARABONBA_PTR_GET_DEFAULT(firstBuy_, false) };
      inline Data& setFirstBuy(bool firstBuy) { DARABONBA_PTR_SET_VALUE(firstBuy_, firstBuy) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Data& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // itemNames Field Functions 
      bool hasItemNames() const { return this->itemNames_ != nullptr;};
      void deleteItemNames() { this->itemNames_ = nullptr;};
      inline const vector<string> & getItemNames() const { DARABONBA_PTR_GET_CONST(itemNames_, vector<string>) };
      inline vector<string> getItemNames() { DARABONBA_PTR_GET(itemNames_, vector<string>) };
      inline Data& setItemNames(const vector<string> & itemNames) { DARABONBA_PTR_SET_VALUE(itemNames_, itemNames) };
      inline Data& setItemNames(vector<string> && itemNames) { DARABONBA_PTR_SET_RVALUE(itemNames_, itemNames) };


      // moneyLimit Field Functions 
      bool hasMoneyLimit() const { return this->moneyLimit_ != nullptr;};
      void deleteMoneyLimit() { this->moneyLimit_ = nullptr;};
      inline string getMoneyLimit() const { DARABONBA_PTR_GET_DEFAULT(moneyLimit_, "") };
      inline Data& setMoneyLimit(string moneyLimit) { DARABONBA_PTR_SET_VALUE(moneyLimit_, moneyLimit) };


      // orderTimeRule Field Functions 
      bool hasOrderTimeRule() const { return this->orderTimeRule_ != nullptr;};
      void deleteOrderTimeRule() { this->orderTimeRule_ = nullptr;};
      inline string getOrderTimeRule() const { DARABONBA_PTR_GET_DEFAULT(orderTimeRule_, "") };
      inline Data& setOrderTimeRule(string orderTimeRule) { DARABONBA_PTR_SET_VALUE(orderTimeRule_, orderTimeRule) };


      // remainAmount Field Functions 
      bool hasRemainAmount() const { return this->remainAmount_ != nullptr;};
      void deleteRemainAmount() { this->remainAmount_ = nullptr;};
      inline string getRemainAmount() const { DARABONBA_PTR_GET_DEFAULT(remainAmount_, "") };
      inline Data& setRemainAmount(string remainAmount) { DARABONBA_PTR_SET_VALUE(remainAmount_, remainAmount) };


      // remark Field Functions 
      bool hasRemark() const { return this->remark_ != nullptr;};
      void deleteRemark() { this->remark_ = nullptr;};
      inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
      inline Data& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


      // shareUidList Field Functions 
      bool hasShareUidList() const { return this->shareUidList_ != nullptr;};
      void deleteShareUidList() { this->shareUidList_ = nullptr;};
      inline const vector<Data::ShareUidList> & getShareUidList() const { DARABONBA_PTR_GET_CONST(shareUidList_, vector<Data::ShareUidList>) };
      inline vector<Data::ShareUidList> getShareUidList() { DARABONBA_PTR_GET(shareUidList_, vector<Data::ShareUidList>) };
      inline Data& setShareUidList(const vector<Data::ShareUidList> & shareUidList) { DARABONBA_PTR_SET_VALUE(shareUidList_, shareUidList) };
      inline Data& setShareUidList(vector<Data::ShareUidList> && shareUidList) { DARABONBA_PTR_SET_RVALUE(shareUidList_, shareUidList) };


      // showSetDeductTagButton Field Functions 
      bool hasShowSetDeductTagButton() const { return this->showSetDeductTagButton_ != nullptr;};
      void deleteShowSetDeductTagButton() { this->showSetDeductTagButton_ = nullptr;};
      inline bool getShowSetDeductTagButton() const { DARABONBA_PTR_GET_DEFAULT(showSetDeductTagButton_, false) };
      inline Data& setShowSetDeductTagButton(bool showSetDeductTagButton) { DARABONBA_PTR_SET_VALUE(showSetDeductTagButton_, showSetDeductTagButton) };


      // site Field Functions 
      bool hasSite() const { return this->site_ != nullptr;};
      void deleteSite() { this->site_ = nullptr;};
      inline string getSite() const { DARABONBA_PTR_GET_DEFAULT(site_, "") };
      inline Data& setSite(string site) { DARABONBA_PTR_SET_VALUE(site_, site) };


      // siteName Field Functions 
      bool hasSiteName() const { return this->siteName_ != nullptr;};
      void deleteSiteName() { this->siteName_ = nullptr;};
      inline string getSiteName() const { DARABONBA_PTR_GET_DEFAULT(siteName_, "") };
      inline Data& setSiteName(string siteName) { DARABONBA_PTR_SET_VALUE(siteName_, siteName) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline Data& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // suitAccount Field Functions 
      bool hasSuitAccount() const { return this->suitAccount_ != nullptr;};
      void deleteSuitAccount() { this->suitAccount_ = nullptr;};
      inline string getSuitAccount() const { DARABONBA_PTR_GET_DEFAULT(suitAccount_, "") };
      inline Data& setSuitAccount(string suitAccount) { DARABONBA_PTR_SET_VALUE(suitAccount_, suitAccount) };


      // suitItemType Field Functions 
      bool hasSuitItemType() const { return this->suitItemType_ != nullptr;};
      void deleteSuitItemType() { this->suitItemType_ = nullptr;};
      inline string getSuitItemType() const { DARABONBA_PTR_GET_DEFAULT(suitItemType_, "") };
      inline Data& setSuitItemType(string suitItemType) { DARABONBA_PTR_SET_VALUE(suitItemType_, suitItemType) };


      // universalType Field Functions 
      bool hasUniversalType() const { return this->universalType_ != nullptr;};
      void deleteUniversalType() { this->universalType_ = nullptr;};
      inline string getUniversalType() const { DARABONBA_PTR_GET_DEFAULT(universalType_, "") };
      inline Data& setUniversalType(string universalType) { DARABONBA_PTR_SET_VALUE(universalType_, universalType) };


      // yhOrderTypes Field Functions 
      bool hasYhOrderTypes() const { return this->yhOrderTypes_ != nullptr;};
      void deleteYhOrderTypes() { this->yhOrderTypes_ = nullptr;};
      inline const vector<string> & getYhOrderTypes() const { DARABONBA_PTR_GET_CONST(yhOrderTypes_, vector<string>) };
      inline vector<string> getYhOrderTypes() { DARABONBA_PTR_GET(yhOrderTypes_, vector<string>) };
      inline Data& setYhOrderTypes(const vector<string> & yhOrderTypes) { DARABONBA_PTR_SET_VALUE(yhOrderTypes_, yhOrderTypes) };
      inline Data& setYhOrderTypes(vector<string> && yhOrderTypes) { DARABONBA_PTR_SET_RVALUE(yhOrderTypes_, yhOrderTypes) };


    protected:
      shared_ptr<string> amount_ {};
      shared_ptr<string> certainAmount_ {};
      shared_ptr<int64_t> couponId_ {};
      shared_ptr<string> couponNo_ {};
      shared_ptr<string> couponType_ {};
      shared_ptr<string> couponTypeName_ {};
      shared_ptr<string> currency_ {};
      shared_ptr<string> endTime_ {};
      shared_ptr<bool> firstBuy_ {};
      shared_ptr<string> gmtCreate_ {};
      shared_ptr<vector<string>> itemNames_ {};
      shared_ptr<string> moneyLimit_ {};
      shared_ptr<string> orderTimeRule_ {};
      shared_ptr<string> remainAmount_ {};
      shared_ptr<string> remark_ {};
      shared_ptr<vector<Data::ShareUidList>> shareUidList_ {};
      shared_ptr<bool> showSetDeductTagButton_ {};
      shared_ptr<string> site_ {};
      shared_ptr<string> siteName_ {};
      shared_ptr<string> startTime_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> suitAccount_ {};
      shared_ptr<string> suitItemType_ {};
      shared_ptr<string> universalType_ {};
      shared_ptr<vector<string>> yhOrderTypes_ {};
    };

    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->data_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeCouponResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeCouponResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeCouponResponseBody::Data>) };
    inline vector<DescribeCouponResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<DescribeCouponResponseBody::Data>) };
    inline DescribeCouponResponseBody& setData(const vector<DescribeCouponResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeCouponResponseBody& setData(vector<DescribeCouponResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeCouponResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCouponResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeCouponResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<int32_t> currentPage_ {};
    shared_ptr<vector<DescribeCouponResponseBody::Data>> data_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
