// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMAILADDRESSBYPARAMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYMAILADDRESSBYPARAMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class QueryMailAddressByParamResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMailAddressByParamResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(data, data_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMailAddressByParamResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(data, data_);
    };
    QueryMailAddressByParamResponseBody() = default ;
    QueryMailAddressByParamResponseBody(const QueryMailAddressByParamResponseBody &) = default ;
    QueryMailAddressByParamResponseBody(QueryMailAddressByParamResponseBody &&) = default ;
    QueryMailAddressByParamResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMailAddressByParamResponseBody() = default ;
    QueryMailAddressByParamResponseBody& operator=(const QueryMailAddressByParamResponseBody &) = default ;
    QueryMailAddressByParamResponseBody& operator=(QueryMailAddressByParamResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(mailAddress, mailAddress_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(mailAddress, mailAddress_);
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
      class MailAddress : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MailAddress& obj) { 
          DARABONBA_PTR_TO_JSON(AccountName, accountName_);
          DARABONBA_PTR_TO_JSON(AccountStatus, accountStatus_);
          DARABONBA_PTR_TO_JSON(ConfigSetId, configSetId_);
          DARABONBA_PTR_TO_JSON(ConfigSetName, configSetName_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(DailyCount, dailyCount_);
          DARABONBA_PTR_TO_JSON(DailyReqCount, dailyReqCount_);
          DARABONBA_PTR_TO_JSON(DomainStatus, domainStatus_);
          DARABONBA_PTR_TO_JSON(MailAddressId, mailAddressId_);
          DARABONBA_PTR_TO_JSON(MonthCount, monthCount_);
          DARABONBA_PTR_TO_JSON(MonthReqCount, monthReqCount_);
          DARABONBA_PTR_TO_JSON(ReplyAddress, replyAddress_);
          DARABONBA_PTR_TO_JSON(ReplyStatus, replyStatus_);
          DARABONBA_PTR_TO_JSON(Sendtype, sendtype_);
        };
        friend void from_json(const Darabonba::Json& j, MailAddress& obj) { 
          DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
          DARABONBA_PTR_FROM_JSON(AccountStatus, accountStatus_);
          DARABONBA_PTR_FROM_JSON(ConfigSetId, configSetId_);
          DARABONBA_PTR_FROM_JSON(ConfigSetName, configSetName_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(DailyCount, dailyCount_);
          DARABONBA_PTR_FROM_JSON(DailyReqCount, dailyReqCount_);
          DARABONBA_PTR_FROM_JSON(DomainStatus, domainStatus_);
          DARABONBA_PTR_FROM_JSON(MailAddressId, mailAddressId_);
          DARABONBA_PTR_FROM_JSON(MonthCount, monthCount_);
          DARABONBA_PTR_FROM_JSON(MonthReqCount, monthReqCount_);
          DARABONBA_PTR_FROM_JSON(ReplyAddress, replyAddress_);
          DARABONBA_PTR_FROM_JSON(ReplyStatus, replyStatus_);
          DARABONBA_PTR_FROM_JSON(Sendtype, sendtype_);
        };
        MailAddress() = default ;
        MailAddress(const MailAddress &) = default ;
        MailAddress(MailAddress &&) = default ;
        MailAddress(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MailAddress() = default ;
        MailAddress& operator=(const MailAddress &) = default ;
        MailAddress& operator=(MailAddress &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->accountName_ == nullptr
        && this->accountStatus_ == nullptr && this->configSetId_ == nullptr && this->configSetName_ == nullptr && this->createTime_ == nullptr && this->dailyCount_ == nullptr
        && this->dailyReqCount_ == nullptr && this->domainStatus_ == nullptr && this->mailAddressId_ == nullptr && this->monthCount_ == nullptr && this->monthReqCount_ == nullptr
        && this->replyAddress_ == nullptr && this->replyStatus_ == nullptr && this->sendtype_ == nullptr; };
        // accountName Field Functions 
        bool hasAccountName() const { return this->accountName_ != nullptr;};
        void deleteAccountName() { this->accountName_ = nullptr;};
        inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
        inline MailAddress& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


        // accountStatus Field Functions 
        bool hasAccountStatus() const { return this->accountStatus_ != nullptr;};
        void deleteAccountStatus() { this->accountStatus_ = nullptr;};
        inline string getAccountStatus() const { DARABONBA_PTR_GET_DEFAULT(accountStatus_, "") };
        inline MailAddress& setAccountStatus(string accountStatus) { DARABONBA_PTR_SET_VALUE(accountStatus_, accountStatus) };


        // configSetId Field Functions 
        bool hasConfigSetId() const { return this->configSetId_ != nullptr;};
        void deleteConfigSetId() { this->configSetId_ = nullptr;};
        inline string getConfigSetId() const { DARABONBA_PTR_GET_DEFAULT(configSetId_, "") };
        inline MailAddress& setConfigSetId(string configSetId) { DARABONBA_PTR_SET_VALUE(configSetId_, configSetId) };


        // configSetName Field Functions 
        bool hasConfigSetName() const { return this->configSetName_ != nullptr;};
        void deleteConfigSetName() { this->configSetName_ = nullptr;};
        inline string getConfigSetName() const { DARABONBA_PTR_GET_DEFAULT(configSetName_, "") };
        inline MailAddress& setConfigSetName(string configSetName) { DARABONBA_PTR_SET_VALUE(configSetName_, configSetName) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline MailAddress& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // dailyCount Field Functions 
        bool hasDailyCount() const { return this->dailyCount_ != nullptr;};
        void deleteDailyCount() { this->dailyCount_ = nullptr;};
        inline string getDailyCount() const { DARABONBA_PTR_GET_DEFAULT(dailyCount_, "") };
        inline MailAddress& setDailyCount(string dailyCount) { DARABONBA_PTR_SET_VALUE(dailyCount_, dailyCount) };


        // dailyReqCount Field Functions 
        bool hasDailyReqCount() const { return this->dailyReqCount_ != nullptr;};
        void deleteDailyReqCount() { this->dailyReqCount_ = nullptr;};
        inline string getDailyReqCount() const { DARABONBA_PTR_GET_DEFAULT(dailyReqCount_, "") };
        inline MailAddress& setDailyReqCount(string dailyReqCount) { DARABONBA_PTR_SET_VALUE(dailyReqCount_, dailyReqCount) };


        // domainStatus Field Functions 
        bool hasDomainStatus() const { return this->domainStatus_ != nullptr;};
        void deleteDomainStatus() { this->domainStatus_ = nullptr;};
        inline string getDomainStatus() const { DARABONBA_PTR_GET_DEFAULT(domainStatus_, "") };
        inline MailAddress& setDomainStatus(string domainStatus) { DARABONBA_PTR_SET_VALUE(domainStatus_, domainStatus) };


        // mailAddressId Field Functions 
        bool hasMailAddressId() const { return this->mailAddressId_ != nullptr;};
        void deleteMailAddressId() { this->mailAddressId_ = nullptr;};
        inline string getMailAddressId() const { DARABONBA_PTR_GET_DEFAULT(mailAddressId_, "") };
        inline MailAddress& setMailAddressId(string mailAddressId) { DARABONBA_PTR_SET_VALUE(mailAddressId_, mailAddressId) };


        // monthCount Field Functions 
        bool hasMonthCount() const { return this->monthCount_ != nullptr;};
        void deleteMonthCount() { this->monthCount_ = nullptr;};
        inline string getMonthCount() const { DARABONBA_PTR_GET_DEFAULT(monthCount_, "") };
        inline MailAddress& setMonthCount(string monthCount) { DARABONBA_PTR_SET_VALUE(monthCount_, monthCount) };


        // monthReqCount Field Functions 
        bool hasMonthReqCount() const { return this->monthReqCount_ != nullptr;};
        void deleteMonthReqCount() { this->monthReqCount_ = nullptr;};
        inline string getMonthReqCount() const { DARABONBA_PTR_GET_DEFAULT(monthReqCount_, "") };
        inline MailAddress& setMonthReqCount(string monthReqCount) { DARABONBA_PTR_SET_VALUE(monthReqCount_, monthReqCount) };


        // replyAddress Field Functions 
        bool hasReplyAddress() const { return this->replyAddress_ != nullptr;};
        void deleteReplyAddress() { this->replyAddress_ = nullptr;};
        inline string getReplyAddress() const { DARABONBA_PTR_GET_DEFAULT(replyAddress_, "") };
        inline MailAddress& setReplyAddress(string replyAddress) { DARABONBA_PTR_SET_VALUE(replyAddress_, replyAddress) };


        // replyStatus Field Functions 
        bool hasReplyStatus() const { return this->replyStatus_ != nullptr;};
        void deleteReplyStatus() { this->replyStatus_ = nullptr;};
        inline string getReplyStatus() const { DARABONBA_PTR_GET_DEFAULT(replyStatus_, "") };
        inline MailAddress& setReplyStatus(string replyStatus) { DARABONBA_PTR_SET_VALUE(replyStatus_, replyStatus) };


        // sendtype Field Functions 
        bool hasSendtype() const { return this->sendtype_ != nullptr;};
        void deleteSendtype() { this->sendtype_ = nullptr;};
        inline string getSendtype() const { DARABONBA_PTR_GET_DEFAULT(sendtype_, "") };
        inline MailAddress& setSendtype(string sendtype) { DARABONBA_PTR_SET_VALUE(sendtype_, sendtype) };


      protected:
        // Sending address
        shared_ptr<string> accountName_ {};
        // Account status, frozen: 1, normal: 0.
        shared_ptr<string> accountStatus_ {};
        shared_ptr<string> configSetId_ {};
        shared_ptr<string> configSetName_ {};
        // Creation time
        shared_ptr<string> createTime_ {};
        // Daily quota limit
        shared_ptr<string> dailyCount_ {};
        // Daily quota
        shared_ptr<string> dailyReqCount_ {};
        // Domain status, 0 indicates normal, 1 indicates abnormal.
        shared_ptr<string> domainStatus_ {};
        // Sending address ID
        shared_ptr<string> mailAddressId_ {};
        // Monthly quota limit
        shared_ptr<string> monthCount_ {};
        // Monthly quota
        shared_ptr<string> monthReqCount_ {};
        // Reply address
        shared_ptr<string> replyAddress_ {};
        // Reply address status
        shared_ptr<string> replyStatus_ {};
        // Sending address type. Values:
        // 
        // - batch: bulk email
        // - trigger: triggered email
        shared_ptr<string> sendtype_ {};
      };

      virtual bool empty() const override { return this->mailAddress_ == nullptr; };
      // mailAddress Field Functions 
      bool hasMailAddress() const { return this->mailAddress_ != nullptr;};
      void deleteMailAddress() { this->mailAddress_ = nullptr;};
      inline const vector<Data::MailAddress> & getMailAddress() const { DARABONBA_PTR_GET_CONST(mailAddress_, vector<Data::MailAddress>) };
      inline vector<Data::MailAddress> getMailAddress() { DARABONBA_PTR_GET(mailAddress_, vector<Data::MailAddress>) };
      inline Data& setMailAddress(const vector<Data::MailAddress> & mailAddress) { DARABONBA_PTR_SET_VALUE(mailAddress_, mailAddress) };
      inline Data& setMailAddress(vector<Data::MailAddress> && mailAddress) { DARABONBA_PTR_SET_RVALUE(mailAddress_, mailAddress) };


    protected:
      shared_ptr<vector<Data::MailAddress>> mailAddress_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->data_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline QueryMailAddressByParamResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryMailAddressByParamResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryMailAddressByParamResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline QueryMailAddressByParamResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryMailAddressByParamResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryMailAddressByParamResponseBody::Data) };
    inline QueryMailAddressByParamResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryMailAddressByParamResponseBody::Data) };
    inline QueryMailAddressByParamResponseBody& setData(const QueryMailAddressByParamResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryMailAddressByParamResponseBody& setData(QueryMailAddressByParamResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


  protected:
    // Current page number
    shared_ptr<int32_t> pageNumber_ {};
    // Page size
    shared_ptr<int32_t> pageSize_ {};
    // Request ID
    shared_ptr<string> requestId_ {};
    // Total count
    shared_ptr<int32_t> totalCount_ {};
    // List of sending addresses
    shared_ptr<QueryMailAddressByParamResponseBody::Data> data_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
