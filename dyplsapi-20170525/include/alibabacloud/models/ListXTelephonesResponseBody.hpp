// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTXTELEPHONESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTXTELEPHONESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class ListXTelephonesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListXTelephonesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListXTelephonesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListXTelephonesResponseBody() = default ;
    ListXTelephonesResponseBody(const ListXTelephonesResponseBody &) = default ;
    ListXTelephonesResponseBody(ListXTelephonesResponseBody &&) = default ;
    ListXTelephonesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListXTelephonesResponseBody() = default ;
    ListXTelephonesResponseBody& operator=(const ListXTelephonesResponseBody &) = default ;
    ListXTelephonesResponseBody& operator=(ListXTelephonesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(List, list_);
        DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(List, list_);
        DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
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
      class List : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const List& obj) { 
          DARABONBA_PTR_TO_JSON(AuthMsg, authMsg_);
          DARABONBA_PTR_TO_JSON(BindTime, bindTime_);
          DARABONBA_PTR_TO_JSON(BuyTime, buyTime_);
          DARABONBA_PTR_TO_JSON(CustomerPoolKey, customerPoolKey_);
          DARABONBA_PTR_TO_JSON(CustomerPoolName, customerPoolName_);
          DARABONBA_PTR_TO_JSON(ReleaseTime, releaseTime_);
          DARABONBA_PTR_TO_JSON(SmsStatus, smsStatus_);
          DARABONBA_PTR_TO_JSON(Telephone, telephone_);
          DARABONBA_PTR_TO_JSON(TelephoneStatus, telephoneStatus_);
          DARABONBA_PTR_TO_JSON(UnbindTime, unbindTime_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(AuthMsg, authMsg_);
          DARABONBA_PTR_FROM_JSON(BindTime, bindTime_);
          DARABONBA_PTR_FROM_JSON(BuyTime, buyTime_);
          DARABONBA_PTR_FROM_JSON(CustomerPoolKey, customerPoolKey_);
          DARABONBA_PTR_FROM_JSON(CustomerPoolName, customerPoolName_);
          DARABONBA_PTR_FROM_JSON(ReleaseTime, releaseTime_);
          DARABONBA_PTR_FROM_JSON(SmsStatus, smsStatus_);
          DARABONBA_PTR_FROM_JSON(Telephone, telephone_);
          DARABONBA_PTR_FROM_JSON(TelephoneStatus, telephoneStatus_);
          DARABONBA_PTR_FROM_JSON(UnbindTime, unbindTime_);
        };
        List() = default ;
        List(const List &) = default ;
        List(List &&) = default ;
        List(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~List() = default ;
        List& operator=(const List &) = default ;
        List& operator=(List &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->authMsg_ == nullptr
        && this->bindTime_ == nullptr && this->buyTime_ == nullptr && this->customerPoolKey_ == nullptr && this->customerPoolName_ == nullptr && this->releaseTime_ == nullptr
        && this->smsStatus_ == nullptr && this->telephone_ == nullptr && this->telephoneStatus_ == nullptr && this->unbindTime_ == nullptr; };
        // authMsg Field Functions 
        bool hasAuthMsg() const { return this->authMsg_ != nullptr;};
        void deleteAuthMsg() { this->authMsg_ = nullptr;};
        inline string getAuthMsg() const { DARABONBA_PTR_GET_DEFAULT(authMsg_, "") };
        inline List& setAuthMsg(string authMsg) { DARABONBA_PTR_SET_VALUE(authMsg_, authMsg) };


        // bindTime Field Functions 
        bool hasBindTime() const { return this->bindTime_ != nullptr;};
        void deleteBindTime() { this->bindTime_ = nullptr;};
        inline string getBindTime() const { DARABONBA_PTR_GET_DEFAULT(bindTime_, "") };
        inline List& setBindTime(string bindTime) { DARABONBA_PTR_SET_VALUE(bindTime_, bindTime) };


        // buyTime Field Functions 
        bool hasBuyTime() const { return this->buyTime_ != nullptr;};
        void deleteBuyTime() { this->buyTime_ = nullptr;};
        inline string getBuyTime() const { DARABONBA_PTR_GET_DEFAULT(buyTime_, "") };
        inline List& setBuyTime(string buyTime) { DARABONBA_PTR_SET_VALUE(buyTime_, buyTime) };


        // customerPoolKey Field Functions 
        bool hasCustomerPoolKey() const { return this->customerPoolKey_ != nullptr;};
        void deleteCustomerPoolKey() { this->customerPoolKey_ = nullptr;};
        inline string getCustomerPoolKey() const { DARABONBA_PTR_GET_DEFAULT(customerPoolKey_, "") };
        inline List& setCustomerPoolKey(string customerPoolKey) { DARABONBA_PTR_SET_VALUE(customerPoolKey_, customerPoolKey) };


        // customerPoolName Field Functions 
        bool hasCustomerPoolName() const { return this->customerPoolName_ != nullptr;};
        void deleteCustomerPoolName() { this->customerPoolName_ = nullptr;};
        inline string getCustomerPoolName() const { DARABONBA_PTR_GET_DEFAULT(customerPoolName_, "") };
        inline List& setCustomerPoolName(string customerPoolName) { DARABONBA_PTR_SET_VALUE(customerPoolName_, customerPoolName) };


        // releaseTime Field Functions 
        bool hasReleaseTime() const { return this->releaseTime_ != nullptr;};
        void deleteReleaseTime() { this->releaseTime_ = nullptr;};
        inline string getReleaseTime() const { DARABONBA_PTR_GET_DEFAULT(releaseTime_, "") };
        inline List& setReleaseTime(string releaseTime) { DARABONBA_PTR_SET_VALUE(releaseTime_, releaseTime) };


        // smsStatus Field Functions 
        bool hasSmsStatus() const { return this->smsStatus_ != nullptr;};
        void deleteSmsStatus() { this->smsStatus_ = nullptr;};
        inline string getSmsStatus() const { DARABONBA_PTR_GET_DEFAULT(smsStatus_, "") };
        inline List& setSmsStatus(string smsStatus) { DARABONBA_PTR_SET_VALUE(smsStatus_, smsStatus) };


        // telephone Field Functions 
        bool hasTelephone() const { return this->telephone_ != nullptr;};
        void deleteTelephone() { this->telephone_ = nullptr;};
        inline string getTelephone() const { DARABONBA_PTR_GET_DEFAULT(telephone_, "") };
        inline List& setTelephone(string telephone) { DARABONBA_PTR_SET_VALUE(telephone_, telephone) };


        // telephoneStatus Field Functions 
        bool hasTelephoneStatus() const { return this->telephoneStatus_ != nullptr;};
        void deleteTelephoneStatus() { this->telephoneStatus_ = nullptr;};
        inline string getTelephoneStatus() const { DARABONBA_PTR_GET_DEFAULT(telephoneStatus_, "") };
        inline List& setTelephoneStatus(string telephoneStatus) { DARABONBA_PTR_SET_VALUE(telephoneStatus_, telephoneStatus) };


        // unbindTime Field Functions 
        bool hasUnbindTime() const { return this->unbindTime_ != nullptr;};
        void deleteUnbindTime() { this->unbindTime_ = nullptr;};
        inline string getUnbindTime() const { DARABONBA_PTR_GET_DEFAULT(unbindTime_, "") };
        inline List& setUnbindTime(string unbindTime) { DARABONBA_PTR_SET_VALUE(unbindTime_, unbindTime) };


      protected:
        // The reason for binding failure.
        shared_ptr<string> authMsg_ {};
        // The binding time. The format is YYYY-MM-DD HH:mm:ss.
        shared_ptr<string> bindTime_ {};
        // The purchase time. The format is YYYY-MM-DD HH:mm:ss.
        shared_ptr<string> buyTime_ {};
        // The customer number pool key.
        shared_ptr<string> customerPoolKey_ {};
        // The number pool name.
        shared_ptr<string> customerPoolName_ {};
        // The release time. The format is YYYY-MM-DD HH:mm:ss.
        shared_ptr<string> releaseTime_ {};
        // The SMS activation status. Valid values:
        // - 0: Not activated.
        // - 1: Activated.
        shared_ptr<string> smsStatus_ {};
        // The X number.
        shared_ptr<string> telephone_ {};
        // The number status. Valid values:
        // - 0: Idle.
        // - 1: Allocation completed and pending purchase.
        // - 2: Purchase completed and pending verification.
        // - 3: Real-name verification in progress.
        // - 4: Real-name verification succeeded.
        // - 5: Verification failed.
        // - 6: Unbinding in progress.
        // - 7: Unbinding failed.
        // - 8: Released.
        // - 99: Released due to timeout.
        shared_ptr<string> telephoneStatus_ {};
        // The unbinding time. The format is YYYY-MM-DD HH:mm:ss.
        shared_ptr<string> unbindTime_ {};
      };

      virtual bool empty() const override { return this->list_ == nullptr
        && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->total_ == nullptr; };
      // list Field Functions 
      bool hasList() const { return this->list_ != nullptr;};
      void deleteList() { this->list_ = nullptr;};
      inline const vector<Data::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<Data::List>) };
      inline vector<Data::List> getList() { DARABONBA_PTR_GET(list_, vector<Data::List>) };
      inline Data& setList(const vector<Data::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
      inline Data& setList(vector<Data::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


      // pageNo Field Functions 
      bool hasPageNo() const { return this->pageNo_ != nullptr;};
      void deletePageNo() { this->pageNo_ = nullptr;};
      inline int64_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
      inline Data& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
      inline Data& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
      inline Data& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      // The data list.
      shared_ptr<vector<Data::List>> list_ {};
      // The page number.
      shared_ptr<int64_t> pageNo_ {};
      // The number of entries per page.
      shared_ptr<int64_t> pageSize_ {};
      // The total number of entries that meet the query conditions.
      shared_ptr<int64_t> total_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline ListXTelephonesResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListXTelephonesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListXTelephonesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListXTelephonesResponseBody::Data) };
    inline ListXTelephonesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListXTelephonesResponseBody::Data) };
    inline ListXTelephonesResponseBody& setData(const ListXTelephonesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListXTelephonesResponseBody& setData(ListXTelephonesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListXTelephonesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListXTelephonesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The details of the access denied error.
    shared_ptr<string> accessDeniedDetail_ {};
    // The response status code. Valid values:
    // 
    // - 0000: Success.
    // 
    // - Other values: Failure.
    shared_ptr<string> code_ {};
    // The data collection.
    shared_ptr<ListXTelephonesResponseBody::Data> data_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // Indicates whether the request is successful. Valid values:
    // 
    // - true: Success.
    // 
    // - false: Failure.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
