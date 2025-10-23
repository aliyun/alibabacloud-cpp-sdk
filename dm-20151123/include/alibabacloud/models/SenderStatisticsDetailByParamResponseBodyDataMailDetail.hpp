// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDERSTATISTICSDETAILBYPARAMRESPONSEBODYDATAMAILDETAIL_HPP_
#define ALIBABACLOUD_MODELS_SENDERSTATISTICSDETAILBYPARAMRESPONSEBODYDATAMAILDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class SenderStatisticsDetailByParamResponseBodyDataMailDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SenderStatisticsDetailByParamResponseBodyDataMailDetail& obj) { 
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
    friend void from_json(const Darabonba::Json& j, SenderStatisticsDetailByParamResponseBodyDataMailDetail& obj) { 
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
    SenderStatisticsDetailByParamResponseBodyDataMailDetail() = default ;
    SenderStatisticsDetailByParamResponseBodyDataMailDetail(const SenderStatisticsDetailByParamResponseBodyDataMailDetail &) = default ;
    SenderStatisticsDetailByParamResponseBodyDataMailDetail(SenderStatisticsDetailByParamResponseBodyDataMailDetail &&) = default ;
    SenderStatisticsDetailByParamResponseBodyDataMailDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SenderStatisticsDetailByParamResponseBodyDataMailDetail() = default ;
    SenderStatisticsDetailByParamResponseBodyDataMailDetail& operator=(const SenderStatisticsDetailByParamResponseBodyDataMailDetail &) = default ;
    SenderStatisticsDetailByParamResponseBodyDataMailDetail& operator=(SenderStatisticsDetailByParamResponseBodyDataMailDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountName_ == nullptr
        && return this->configSetId_ == nullptr && return this->configSetName_ == nullptr && return this->errorClassification_ == nullptr && return this->ipPoolId_ == nullptr && return this->ipPoolName_ == nullptr
        && return this->lastUpdateTime_ == nullptr && return this->message_ == nullptr && return this->status_ == nullptr && return this->subject_ == nullptr && return this->toAddress_ == nullptr
        && return this->utcLastUpdateTime_ == nullptr; };
    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string accountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline SenderStatisticsDetailByParamResponseBodyDataMailDetail& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // configSetId Field Functions 
    bool hasConfigSetId() const { return this->configSetId_ != nullptr;};
    void deleteConfigSetId() { this->configSetId_ = nullptr;};
    inline string configSetId() const { DARABONBA_PTR_GET_DEFAULT(configSetId_, "") };
    inline SenderStatisticsDetailByParamResponseBodyDataMailDetail& setConfigSetId(string configSetId) { DARABONBA_PTR_SET_VALUE(configSetId_, configSetId) };


    // configSetName Field Functions 
    bool hasConfigSetName() const { return this->configSetName_ != nullptr;};
    void deleteConfigSetName() { this->configSetName_ = nullptr;};
    inline string configSetName() const { DARABONBA_PTR_GET_DEFAULT(configSetName_, "") };
    inline SenderStatisticsDetailByParamResponseBodyDataMailDetail& setConfigSetName(string configSetName) { DARABONBA_PTR_SET_VALUE(configSetName_, configSetName) };


    // errorClassification Field Functions 
    bool hasErrorClassification() const { return this->errorClassification_ != nullptr;};
    void deleteErrorClassification() { this->errorClassification_ = nullptr;};
    inline string errorClassification() const { DARABONBA_PTR_GET_DEFAULT(errorClassification_, "") };
    inline SenderStatisticsDetailByParamResponseBodyDataMailDetail& setErrorClassification(string errorClassification) { DARABONBA_PTR_SET_VALUE(errorClassification_, errorClassification) };


    // ipPoolId Field Functions 
    bool hasIpPoolId() const { return this->ipPoolId_ != nullptr;};
    void deleteIpPoolId() { this->ipPoolId_ = nullptr;};
    inline string ipPoolId() const { DARABONBA_PTR_GET_DEFAULT(ipPoolId_, "") };
    inline SenderStatisticsDetailByParamResponseBodyDataMailDetail& setIpPoolId(string ipPoolId) { DARABONBA_PTR_SET_VALUE(ipPoolId_, ipPoolId) };


    // ipPoolName Field Functions 
    bool hasIpPoolName() const { return this->ipPoolName_ != nullptr;};
    void deleteIpPoolName() { this->ipPoolName_ = nullptr;};
    inline string ipPoolName() const { DARABONBA_PTR_GET_DEFAULT(ipPoolName_, "") };
    inline SenderStatisticsDetailByParamResponseBodyDataMailDetail& setIpPoolName(string ipPoolName) { DARABONBA_PTR_SET_VALUE(ipPoolName_, ipPoolName) };


    // lastUpdateTime Field Functions 
    bool hasLastUpdateTime() const { return this->lastUpdateTime_ != nullptr;};
    void deleteLastUpdateTime() { this->lastUpdateTime_ = nullptr;};
    inline string lastUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(lastUpdateTime_, "") };
    inline SenderStatisticsDetailByParamResponseBodyDataMailDetail& setLastUpdateTime(string lastUpdateTime) { DARABONBA_PTR_SET_VALUE(lastUpdateTime_, lastUpdateTime) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline SenderStatisticsDetailByParamResponseBodyDataMailDetail& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline SenderStatisticsDetailByParamResponseBodyDataMailDetail& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // subject Field Functions 
    bool hasSubject() const { return this->subject_ != nullptr;};
    void deleteSubject() { this->subject_ = nullptr;};
    inline string subject() const { DARABONBA_PTR_GET_DEFAULT(subject_, "") };
    inline SenderStatisticsDetailByParamResponseBodyDataMailDetail& setSubject(string subject) { DARABONBA_PTR_SET_VALUE(subject_, subject) };


    // toAddress Field Functions 
    bool hasToAddress() const { return this->toAddress_ != nullptr;};
    void deleteToAddress() { this->toAddress_ = nullptr;};
    inline string toAddress() const { DARABONBA_PTR_GET_DEFAULT(toAddress_, "") };
    inline SenderStatisticsDetailByParamResponseBodyDataMailDetail& setToAddress(string toAddress) { DARABONBA_PTR_SET_VALUE(toAddress_, toAddress) };


    // utcLastUpdateTime Field Functions 
    bool hasUtcLastUpdateTime() const { return this->utcLastUpdateTime_ != nullptr;};
    void deleteUtcLastUpdateTime() { this->utcLastUpdateTime_ = nullptr;};
    inline string utcLastUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(utcLastUpdateTime_, "") };
    inline SenderStatisticsDetailByParamResponseBodyDataMailDetail& setUtcLastUpdateTime(string utcLastUpdateTime) { DARABONBA_PTR_SET_VALUE(utcLastUpdateTime_, utcLastUpdateTime) };


  protected:
    // Sending address
    std::shared_ptr<string> accountName_ = nullptr;
    std::shared_ptr<string> configSetId_ = nullptr;
    std::shared_ptr<string> configSetName_ = nullptr;
    // Detailed classification of error reasons: - SendOk - SmtpNxBox
    // etc.
    std::shared_ptr<string> errorClassification_ = nullptr;
    std::shared_ptr<string> ipPoolId_ = nullptr;
    std::shared_ptr<string> ipPoolName_ = nullptr;
    // Update time
    std::shared_ptr<string> lastUpdateTime_ = nullptr;
    // Delivery detail information
    std::shared_ptr<string> message_ = nullptr;
    // Delivery status: 0 Success, 2 Invalid Address, 3 Spam, 4 Other Failures
    std::shared_ptr<int32_t> status_ = nullptr;
    // Email subject
    std::shared_ptr<string> subject_ = nullptr;
    // Recipient address
    std::shared_ptr<string> toAddress_ = nullptr;
    // UTC formatted update time
    std::shared_ptr<string> utcLastUpdateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
