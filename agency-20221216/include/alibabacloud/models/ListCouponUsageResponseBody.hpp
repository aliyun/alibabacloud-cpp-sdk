// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOUPONUSAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCOUPONUSAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20221216
{
namespace Models
{
  class ListCouponUsageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCouponUsageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListCouponUsageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListCouponUsageResponseBody() = default ;
    ListCouponUsageResponseBody(const ListCouponUsageResponseBody &) = default ;
    ListCouponUsageResponseBody(ListCouponUsageResponseBody &&) = default ;
    ListCouponUsageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCouponUsageResponseBody() = default ;
    ListCouponUsageResponseBody& operator=(const ListCouponUsageResponseBody &) = default ;
    ListCouponUsageResponseBody& operator=(ListCouponUsageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Page, page_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Page, page_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
      };
      PageInfo() = default ;
      PageInfo(const PageInfo &) = default ;
      PageInfo(PageInfo &&) = default ;
      PageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageInfo() = default ;
      PageInfo& operator=(const PageInfo &) = default ;
      PageInfo& operator=(PageInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->page_ == nullptr
        && this->pageSize_ == nullptr && this->total_ == nullptr; };
      // page Field Functions 
      bool hasPage() const { return this->page_ != nullptr;};
      void deletePage() { this->page_ = nullptr;};
      inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
      inline PageInfo& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
      inline PageInfo& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      shared_ptr<int32_t> page_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<int32_t> total_ {};
    };

    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Account, account_);
        DARABONBA_PTR_TO_JSON(Amount, amount_);
        DARABONBA_PTR_TO_JSON(Balance, balance_);
        DARABONBA_PTR_TO_JSON(CouponId, couponId_);
        DARABONBA_PTR_TO_JSON(CouponTemplateId, couponTemplateId_);
        DARABONBA_PTR_TO_JSON(EffDate, effDate_);
        DARABONBA_PTR_TO_JSON(PublishDate, publishDate_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Uid, uid_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Account, account_);
        DARABONBA_PTR_FROM_JSON(Amount, amount_);
        DARABONBA_PTR_FROM_JSON(Balance, balance_);
        DARABONBA_PTR_FROM_JSON(CouponId, couponId_);
        DARABONBA_PTR_FROM_JSON(CouponTemplateId, couponTemplateId_);
        DARABONBA_PTR_FROM_JSON(EffDate, effDate_);
        DARABONBA_PTR_FROM_JSON(PublishDate, publishDate_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Uid, uid_);
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
      virtual bool empty() const override { return this->account_ == nullptr
        && this->amount_ == nullptr && this->balance_ == nullptr && this->couponId_ == nullptr && this->couponTemplateId_ == nullptr && this->effDate_ == nullptr
        && this->publishDate_ == nullptr && this->status_ == nullptr && this->uid_ == nullptr; };
      // account Field Functions 
      bool hasAccount() const { return this->account_ != nullptr;};
      void deleteAccount() { this->account_ = nullptr;};
      inline string getAccount() const { DARABONBA_PTR_GET_DEFAULT(account_, "") };
      inline Data& setAccount(string account) { DARABONBA_PTR_SET_VALUE(account_, account) };


      // amount Field Functions 
      bool hasAmount() const { return this->amount_ != nullptr;};
      void deleteAmount() { this->amount_ = nullptr;};
      inline double getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0.0) };
      inline Data& setAmount(double amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


      // balance Field Functions 
      bool hasBalance() const { return this->balance_ != nullptr;};
      void deleteBalance() { this->balance_ = nullptr;};
      inline double getBalance() const { DARABONBA_PTR_GET_DEFAULT(balance_, 0.0) };
      inline Data& setBalance(double balance) { DARABONBA_PTR_SET_VALUE(balance_, balance) };


      // couponId Field Functions 
      bool hasCouponId() const { return this->couponId_ != nullptr;};
      void deleteCouponId() { this->couponId_ = nullptr;};
      inline string getCouponId() const { DARABONBA_PTR_GET_DEFAULT(couponId_, "") };
      inline Data& setCouponId(string couponId) { DARABONBA_PTR_SET_VALUE(couponId_, couponId) };


      // couponTemplateId Field Functions 
      bool hasCouponTemplateId() const { return this->couponTemplateId_ != nullptr;};
      void deleteCouponTemplateId() { this->couponTemplateId_ = nullptr;};
      inline int64_t getCouponTemplateId() const { DARABONBA_PTR_GET_DEFAULT(couponTemplateId_, 0L) };
      inline Data& setCouponTemplateId(int64_t couponTemplateId) { DARABONBA_PTR_SET_VALUE(couponTemplateId_, couponTemplateId) };


      // effDate Field Functions 
      bool hasEffDate() const { return this->effDate_ != nullptr;};
      void deleteEffDate() { this->effDate_ = nullptr;};
      inline string getEffDate() const { DARABONBA_PTR_GET_DEFAULT(effDate_, "") };
      inline Data& setEffDate(string effDate) { DARABONBA_PTR_SET_VALUE(effDate_, effDate) };


      // publishDate Field Functions 
      bool hasPublishDate() const { return this->publishDate_ != nullptr;};
      void deletePublishDate() { this->publishDate_ = nullptr;};
      inline string getPublishDate() const { DARABONBA_PTR_GET_DEFAULT(publishDate_, "") };
      inline Data& setPublishDate(string publishDate) { DARABONBA_PTR_SET_VALUE(publishDate_, publishDate) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // uid Field Functions 
      bool hasUid() const { return this->uid_ != nullptr;};
      void deleteUid() { this->uid_ = nullptr;};
      inline int64_t getUid() const { DARABONBA_PTR_GET_DEFAULT(uid_, 0L) };
      inline Data& setUid(int64_t uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


    protected:
      shared_ptr<string> account_ {};
      shared_ptr<double> amount_ {};
      shared_ptr<double> balance_ {};
      shared_ptr<string> couponId_ {};
      shared_ptr<int64_t> couponTemplateId_ {};
      shared_ptr<string> effDate_ {};
      shared_ptr<string> publishDate_ {};
      shared_ptr<string> status_ {};
      shared_ptr<int64_t> uid_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->pageInfo_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListCouponUsageResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListCouponUsageResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListCouponUsageResponseBody::Data>) };
    inline vector<ListCouponUsageResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListCouponUsageResponseBody::Data>) };
    inline ListCouponUsageResponseBody& setData(const vector<ListCouponUsageResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListCouponUsageResponseBody& setData(vector<ListCouponUsageResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListCouponUsageResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListCouponUsageResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListCouponUsageResponseBody::PageInfo) };
    inline ListCouponUsageResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, ListCouponUsageResponseBody::PageInfo) };
    inline ListCouponUsageResponseBody& setPageInfo(const ListCouponUsageResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListCouponUsageResponseBody& setPageInfo(ListCouponUsageResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCouponUsageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<vector<ListCouponUsageResponseBody::Data>> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<ListCouponUsageResponseBody::PageInfo> pageInfo_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20221216
#endif
