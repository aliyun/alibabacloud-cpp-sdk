// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDERSTATISTICSDETAILBYPARAMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SENDERSTATISTICSDETAILBYPARAMRESPONSEBODY_HPP_
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
  class SenderStatisticsDetailByParamResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SenderStatisticsDetailByParamResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextStart, nextStart_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(data, data_);
    };
    friend void from_json(const Darabonba::Json& j, SenderStatisticsDetailByParamResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextStart, nextStart_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(data, data_);
    };
    SenderStatisticsDetailByParamResponseBody() = default ;
    SenderStatisticsDetailByParamResponseBody(const SenderStatisticsDetailByParamResponseBody &) = default ;
    SenderStatisticsDetailByParamResponseBody(SenderStatisticsDetailByParamResponseBody &&) = default ;
    SenderStatisticsDetailByParamResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SenderStatisticsDetailByParamResponseBody() = default ;
    SenderStatisticsDetailByParamResponseBody& operator=(const SenderStatisticsDetailByParamResponseBody &) = default ;
    SenderStatisticsDetailByParamResponseBody& operator=(SenderStatisticsDetailByParamResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(mailDetail, mailDetail_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(mailDetail, mailDetail_);
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
      class MailDetail : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MailDetail& obj) { 
          DARABONBA_PTR_TO_JSON(AccountName, accountName_);
          DARABONBA_PTR_TO_JSON(ConfigSetId, configSetId_);
          DARABONBA_PTR_TO_JSON(ConfigSetName, configSetName_);
          DARABONBA_PTR_TO_JSON(ErrorClassification, errorClassification_);
          DARABONBA_PTR_TO_JSON(IpPoolId, ipPoolId_);
          DARABONBA_PTR_TO_JSON(IpPoolName, ipPoolName_);
          DARABONBA_PTR_TO_JSON(LastUpdateTime, lastUpdateTime_);
          DARABONBA_PTR_TO_JSON(Message, message_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Subject, subject_);
          DARABONBA_PTR_TO_JSON(ToAddress, toAddress_);
          DARABONBA_PTR_TO_JSON(UtcLastUpdateTime, utcLastUpdateTime_);
        };
        friend void from_json(const Darabonba::Json& j, MailDetail& obj) { 
          DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
          DARABONBA_PTR_FROM_JSON(ConfigSetId, configSetId_);
          DARABONBA_PTR_FROM_JSON(ConfigSetName, configSetName_);
          DARABONBA_PTR_FROM_JSON(ErrorClassification, errorClassification_);
          DARABONBA_PTR_FROM_JSON(IpPoolId, ipPoolId_);
          DARABONBA_PTR_FROM_JSON(IpPoolName, ipPoolName_);
          DARABONBA_PTR_FROM_JSON(LastUpdateTime, lastUpdateTime_);
          DARABONBA_PTR_FROM_JSON(Message, message_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Subject, subject_);
          DARABONBA_PTR_FROM_JSON(ToAddress, toAddress_);
          DARABONBA_PTR_FROM_JSON(UtcLastUpdateTime, utcLastUpdateTime_);
        };
        MailDetail() = default ;
        MailDetail(const MailDetail &) = default ;
        MailDetail(MailDetail &&) = default ;
        MailDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MailDetail() = default ;
        MailDetail& operator=(const MailDetail &) = default ;
        MailDetail& operator=(MailDetail &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->accountName_ == nullptr
        && this->configSetId_ == nullptr && this->configSetName_ == nullptr && this->errorClassification_ == nullptr && this->ipPoolId_ == nullptr && this->ipPoolName_ == nullptr
        && this->lastUpdateTime_ == nullptr && this->message_ == nullptr && this->status_ == nullptr && this->subject_ == nullptr && this->toAddress_ == nullptr
        && this->utcLastUpdateTime_ == nullptr; };
        // accountName Field Functions 
        bool hasAccountName() const { return this->accountName_ != nullptr;};
        void deleteAccountName() { this->accountName_ = nullptr;};
        inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
        inline MailDetail& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


        // configSetId Field Functions 
        bool hasConfigSetId() const { return this->configSetId_ != nullptr;};
        void deleteConfigSetId() { this->configSetId_ = nullptr;};
        inline string getConfigSetId() const { DARABONBA_PTR_GET_DEFAULT(configSetId_, "") };
        inline MailDetail& setConfigSetId(string configSetId) { DARABONBA_PTR_SET_VALUE(configSetId_, configSetId) };


        // configSetName Field Functions 
        bool hasConfigSetName() const { return this->configSetName_ != nullptr;};
        void deleteConfigSetName() { this->configSetName_ = nullptr;};
        inline string getConfigSetName() const { DARABONBA_PTR_GET_DEFAULT(configSetName_, "") };
        inline MailDetail& setConfigSetName(string configSetName) { DARABONBA_PTR_SET_VALUE(configSetName_, configSetName) };


        // errorClassification Field Functions 
        bool hasErrorClassification() const { return this->errorClassification_ != nullptr;};
        void deleteErrorClassification() { this->errorClassification_ = nullptr;};
        inline string getErrorClassification() const { DARABONBA_PTR_GET_DEFAULT(errorClassification_, "") };
        inline MailDetail& setErrorClassification(string errorClassification) { DARABONBA_PTR_SET_VALUE(errorClassification_, errorClassification) };


        // ipPoolId Field Functions 
        bool hasIpPoolId() const { return this->ipPoolId_ != nullptr;};
        void deleteIpPoolId() { this->ipPoolId_ = nullptr;};
        inline string getIpPoolId() const { DARABONBA_PTR_GET_DEFAULT(ipPoolId_, "") };
        inline MailDetail& setIpPoolId(string ipPoolId) { DARABONBA_PTR_SET_VALUE(ipPoolId_, ipPoolId) };


        // ipPoolName Field Functions 
        bool hasIpPoolName() const { return this->ipPoolName_ != nullptr;};
        void deleteIpPoolName() { this->ipPoolName_ = nullptr;};
        inline string getIpPoolName() const { DARABONBA_PTR_GET_DEFAULT(ipPoolName_, "") };
        inline MailDetail& setIpPoolName(string ipPoolName) { DARABONBA_PTR_SET_VALUE(ipPoolName_, ipPoolName) };


        // lastUpdateTime Field Functions 
        bool hasLastUpdateTime() const { return this->lastUpdateTime_ != nullptr;};
        void deleteLastUpdateTime() { this->lastUpdateTime_ = nullptr;};
        inline string getLastUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(lastUpdateTime_, "") };
        inline MailDetail& setLastUpdateTime(string lastUpdateTime) { DARABONBA_PTR_SET_VALUE(lastUpdateTime_, lastUpdateTime) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline MailDetail& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
        inline MailDetail& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // subject Field Functions 
        bool hasSubject() const { return this->subject_ != nullptr;};
        void deleteSubject() { this->subject_ = nullptr;};
        inline string getSubject() const { DARABONBA_PTR_GET_DEFAULT(subject_, "") };
        inline MailDetail& setSubject(string subject) { DARABONBA_PTR_SET_VALUE(subject_, subject) };


        // toAddress Field Functions 
        bool hasToAddress() const { return this->toAddress_ != nullptr;};
        void deleteToAddress() { this->toAddress_ = nullptr;};
        inline string getToAddress() const { DARABONBA_PTR_GET_DEFAULT(toAddress_, "") };
        inline MailDetail& setToAddress(string toAddress) { DARABONBA_PTR_SET_VALUE(toAddress_, toAddress) };


        // utcLastUpdateTime Field Functions 
        bool hasUtcLastUpdateTime() const { return this->utcLastUpdateTime_ != nullptr;};
        void deleteUtcLastUpdateTime() { this->utcLastUpdateTime_ = nullptr;};
        inline string getUtcLastUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(utcLastUpdateTime_, "") };
        inline MailDetail& setUtcLastUpdateTime(string utcLastUpdateTime) { DARABONBA_PTR_SET_VALUE(utcLastUpdateTime_, utcLastUpdateTime) };


      protected:
        // Sending address
        shared_ptr<string> accountName_ {};
        shared_ptr<string> configSetId_ {};
        shared_ptr<string> configSetName_ {};
        // Detailed classification of error reasons: - SendOk - SmtpNxBox
        // etc.
        shared_ptr<string> errorClassification_ {};
        shared_ptr<string> ipPoolId_ {};
        shared_ptr<string> ipPoolName_ {};
        // Update time
        shared_ptr<string> lastUpdateTime_ {};
        // Delivery detail information
        shared_ptr<string> message_ {};
        // Delivery status: 0 Success, 2 Invalid Address, 3 Spam, 4 Other Failures
        shared_ptr<int32_t> status_ {};
        // Email subject
        shared_ptr<string> subject_ {};
        // Recipient address
        shared_ptr<string> toAddress_ {};
        // UTC formatted update time
        shared_ptr<string> utcLastUpdateTime_ {};
      };

      virtual bool empty() const override { return this->mailDetail_ == nullptr; };
      // mailDetail Field Functions 
      bool hasMailDetail() const { return this->mailDetail_ != nullptr;};
      void deleteMailDetail() { this->mailDetail_ = nullptr;};
      inline const vector<Data::MailDetail> & getMailDetail() const { DARABONBA_PTR_GET_CONST(mailDetail_, vector<Data::MailDetail>) };
      inline vector<Data::MailDetail> getMailDetail() { DARABONBA_PTR_GET(mailDetail_, vector<Data::MailDetail>) };
      inline Data& setMailDetail(const vector<Data::MailDetail> & mailDetail) { DARABONBA_PTR_SET_VALUE(mailDetail_, mailDetail) };
      inline Data& setMailDetail(vector<Data::MailDetail> && mailDetail) { DARABONBA_PTR_SET_RVALUE(mailDetail_, mailDetail) };


    protected:
      shared_ptr<vector<Data::MailDetail>> mailDetail_ {};
    };

    virtual bool empty() const override { return this->nextStart_ == nullptr
        && this->requestId_ == nullptr && this->data_ == nullptr; };
    // nextStart Field Functions 
    bool hasNextStart() const { return this->nextStart_ != nullptr;};
    void deleteNextStart() { this->nextStart_ = nullptr;};
    inline string getNextStart() const { DARABONBA_PTR_GET_DEFAULT(nextStart_, "") };
    inline SenderStatisticsDetailByParamResponseBody& setNextStart(string nextStart) { DARABONBA_PTR_SET_VALUE(nextStart_, nextStart) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SenderStatisticsDetailByParamResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const SenderStatisticsDetailByParamResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, SenderStatisticsDetailByParamResponseBody::Data) };
    inline SenderStatisticsDetailByParamResponseBody::Data getData() { DARABONBA_PTR_GET(data_, SenderStatisticsDetailByParamResponseBody::Data) };
    inline SenderStatisticsDetailByParamResponseBody& setData(const SenderStatisticsDetailByParamResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline SenderStatisticsDetailByParamResponseBody& setData(SenderStatisticsDetailByParamResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


  protected:
    // Used for pagination. If there are more results, set this returned value to the NextStart in the next request.
    shared_ptr<string> nextStart_ {};
    // Request ID
    shared_ptr<string> requestId_ {};
    // Detailed records
    shared_ptr<SenderStatisticsDetailByParamResponseBody::Data> data_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
