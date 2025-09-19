// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTLOGPAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTLOGPAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeEventLogPageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventLogPageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(accountIdPRP, accountIdPRP_);
      DARABONBA_PTR_TO_JSON(beginTime, beginTime_);
      DARABONBA_PTR_TO_JSON(condition1AL, condition1AL_);
      DARABONBA_PTR_TO_JSON(condition2AL, condition2AL_);
      DARABONBA_PTR_TO_JSON(condition3AL, condition3AL_);
      DARABONBA_PTR_TO_JSON(currentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(deviceTypeLRP, deviceTypeLRP_);
      DARABONBA_PTR_TO_JSON(emailPRP, emailPRP_);
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(failReasonLRP, failReasonLRP_);
      DARABONBA_PTR_TO_JSON(ipPRP, ipPRP_);
      DARABONBA_PTR_TO_JSON(loginResultARP, loginResultARP_);
      DARABONBA_PTR_TO_JSON(loginTypeLRP, loginTypeLRP_);
      DARABONBA_PTR_TO_JSON(macPRP, macPRP_);
      DARABONBA_PTR_TO_JSON(mobilePRP, mobilePRP_);
      DARABONBA_PTR_TO_JSON(nickNamePRP, nickNamePRP_);
      DARABONBA_PTR_TO_JSON(operateSourceLRP, operateSourceLRP_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(referPRP, referPRP_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
      DARABONBA_PTR_TO_JSON(registerIpPRP, registerIpPRP_);
      DARABONBA_PTR_TO_JSON(reqIdPBS, reqIdPBS_);
      DARABONBA_PTR_TO_JSON(scoreEBS, scoreEBS_);
      DARABONBA_PTR_TO_JSON(scoreSBS, scoreSBS_);
      DARABONBA_PTR_TO_JSON(serviceABS, serviceABS_);
      DARABONBA_PTR_TO_JSON(tagsLBS, tagsLBS_);
      DARABONBA_PTR_TO_JSON(umidPDI, umidPDI_);
      DARABONBA_PTR_TO_JSON(userAgentPRP, userAgentPRP_);
      DARABONBA_PTR_TO_JSON(userNameTypeLRP, userNameTypeLRP_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventLogPageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(accountIdPRP, accountIdPRP_);
      DARABONBA_PTR_FROM_JSON(beginTime, beginTime_);
      DARABONBA_PTR_FROM_JSON(condition1AL, condition1AL_);
      DARABONBA_PTR_FROM_JSON(condition2AL, condition2AL_);
      DARABONBA_PTR_FROM_JSON(condition3AL, condition3AL_);
      DARABONBA_PTR_FROM_JSON(currentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(deviceTypeLRP, deviceTypeLRP_);
      DARABONBA_PTR_FROM_JSON(emailPRP, emailPRP_);
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(failReasonLRP, failReasonLRP_);
      DARABONBA_PTR_FROM_JSON(ipPRP, ipPRP_);
      DARABONBA_PTR_FROM_JSON(loginResultARP, loginResultARP_);
      DARABONBA_PTR_FROM_JSON(loginTypeLRP, loginTypeLRP_);
      DARABONBA_PTR_FROM_JSON(macPRP, macPRP_);
      DARABONBA_PTR_FROM_JSON(mobilePRP, mobilePRP_);
      DARABONBA_PTR_FROM_JSON(nickNamePRP, nickNamePRP_);
      DARABONBA_PTR_FROM_JSON(operateSourceLRP, operateSourceLRP_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(referPRP, referPRP_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
      DARABONBA_PTR_FROM_JSON(registerIpPRP, registerIpPRP_);
      DARABONBA_PTR_FROM_JSON(reqIdPBS, reqIdPBS_);
      DARABONBA_PTR_FROM_JSON(scoreEBS, scoreEBS_);
      DARABONBA_PTR_FROM_JSON(scoreSBS, scoreSBS_);
      DARABONBA_PTR_FROM_JSON(serviceABS, serviceABS_);
      DARABONBA_PTR_FROM_JSON(tagsLBS, tagsLBS_);
      DARABONBA_PTR_FROM_JSON(umidPDI, umidPDI_);
      DARABONBA_PTR_FROM_JSON(userAgentPRP, userAgentPRP_);
      DARABONBA_PTR_FROM_JSON(userNameTypeLRP, userNameTypeLRP_);
    };
    DescribeEventLogPageRequest() = default ;
    DescribeEventLogPageRequest(const DescribeEventLogPageRequest &) = default ;
    DescribeEventLogPageRequest(DescribeEventLogPageRequest &&) = default ;
    DescribeEventLogPageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventLogPageRequest() = default ;
    DescribeEventLogPageRequest& operator=(const DescribeEventLogPageRequest &) = default ;
    DescribeEventLogPageRequest& operator=(DescribeEventLogPageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->lang_ != nullptr
        && this->accountIdPRP_ != nullptr && this->beginTime_ != nullptr && this->condition1AL_ != nullptr && this->condition2AL_ != nullptr && this->condition3AL_ != nullptr
        && this->currentPage_ != nullptr && this->deviceTypeLRP_ != nullptr && this->emailPRP_ != nullptr && this->endTime_ != nullptr && this->failReasonLRP_ != nullptr
        && this->ipPRP_ != nullptr && this->loginResultARP_ != nullptr && this->loginTypeLRP_ != nullptr && this->macPRP_ != nullptr && this->mobilePRP_ != nullptr
        && this->nickNamePRP_ != nullptr && this->operateSourceLRP_ != nullptr && this->pageSize_ != nullptr && this->referPRP_ != nullptr && this->regId_ != nullptr
        && this->registerIpPRP_ != nullptr && this->reqIdPBS_ != nullptr && this->scoreEBS_ != nullptr && this->scoreSBS_ != nullptr && this->serviceABS_ != nullptr
        && this->tagsLBS_ != nullptr && this->umidPDI_ != nullptr && this->userAgentPRP_ != nullptr && this->userNameTypeLRP_ != nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeEventLogPageRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // accountIdPRP Field Functions 
    bool hasAccountIdPRP() const { return this->accountIdPRP_ != nullptr;};
    void deleteAccountIdPRP() { this->accountIdPRP_ = nullptr;};
    inline string accountIdPRP() const { DARABONBA_PTR_GET_DEFAULT(accountIdPRP_, "") };
    inline DescribeEventLogPageRequest& setAccountIdPRP(string accountIdPRP) { DARABONBA_PTR_SET_VALUE(accountIdPRP_, accountIdPRP) };


    // beginTime Field Functions 
    bool hasBeginTime() const { return this->beginTime_ != nullptr;};
    void deleteBeginTime() { this->beginTime_ = nullptr;};
    inline int64_t beginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, 0L) };
    inline DescribeEventLogPageRequest& setBeginTime(int64_t beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


    // condition1AL Field Functions 
    bool hasCondition1AL() const { return this->condition1AL_ != nullptr;};
    void deleteCondition1AL() { this->condition1AL_ = nullptr;};
    inline string condition1AL() const { DARABONBA_PTR_GET_DEFAULT(condition1AL_, "") };
    inline DescribeEventLogPageRequest& setCondition1AL(string condition1AL) { DARABONBA_PTR_SET_VALUE(condition1AL_, condition1AL) };


    // condition2AL Field Functions 
    bool hasCondition2AL() const { return this->condition2AL_ != nullptr;};
    void deleteCondition2AL() { this->condition2AL_ = nullptr;};
    inline string condition2AL() const { DARABONBA_PTR_GET_DEFAULT(condition2AL_, "") };
    inline DescribeEventLogPageRequest& setCondition2AL(string condition2AL) { DARABONBA_PTR_SET_VALUE(condition2AL_, condition2AL) };


    // condition3AL Field Functions 
    bool hasCondition3AL() const { return this->condition3AL_ != nullptr;};
    void deleteCondition3AL() { this->condition3AL_ = nullptr;};
    inline string condition3AL() const { DARABONBA_PTR_GET_DEFAULT(condition3AL_, "") };
    inline DescribeEventLogPageRequest& setCondition3AL(string condition3AL) { DARABONBA_PTR_SET_VALUE(condition3AL_, condition3AL) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeEventLogPageRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // deviceTypeLRP Field Functions 
    bool hasDeviceTypeLRP() const { return this->deviceTypeLRP_ != nullptr;};
    void deleteDeviceTypeLRP() { this->deviceTypeLRP_ = nullptr;};
    inline string deviceTypeLRP() const { DARABONBA_PTR_GET_DEFAULT(deviceTypeLRP_, "") };
    inline DescribeEventLogPageRequest& setDeviceTypeLRP(string deviceTypeLRP) { DARABONBA_PTR_SET_VALUE(deviceTypeLRP_, deviceTypeLRP) };


    // emailPRP Field Functions 
    bool hasEmailPRP() const { return this->emailPRP_ != nullptr;};
    void deleteEmailPRP() { this->emailPRP_ = nullptr;};
    inline string emailPRP() const { DARABONBA_PTR_GET_DEFAULT(emailPRP_, "") };
    inline DescribeEventLogPageRequest& setEmailPRP(string emailPRP) { DARABONBA_PTR_SET_VALUE(emailPRP_, emailPRP) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeEventLogPageRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // failReasonLRP Field Functions 
    bool hasFailReasonLRP() const { return this->failReasonLRP_ != nullptr;};
    void deleteFailReasonLRP() { this->failReasonLRP_ = nullptr;};
    inline string failReasonLRP() const { DARABONBA_PTR_GET_DEFAULT(failReasonLRP_, "") };
    inline DescribeEventLogPageRequest& setFailReasonLRP(string failReasonLRP) { DARABONBA_PTR_SET_VALUE(failReasonLRP_, failReasonLRP) };


    // ipPRP Field Functions 
    bool hasIpPRP() const { return this->ipPRP_ != nullptr;};
    void deleteIpPRP() { this->ipPRP_ = nullptr;};
    inline string ipPRP() const { DARABONBA_PTR_GET_DEFAULT(ipPRP_, "") };
    inline DescribeEventLogPageRequest& setIpPRP(string ipPRP) { DARABONBA_PTR_SET_VALUE(ipPRP_, ipPRP) };


    // loginResultARP Field Functions 
    bool hasLoginResultARP() const { return this->loginResultARP_ != nullptr;};
    void deleteLoginResultARP() { this->loginResultARP_ = nullptr;};
    inline string loginResultARP() const { DARABONBA_PTR_GET_DEFAULT(loginResultARP_, "") };
    inline DescribeEventLogPageRequest& setLoginResultARP(string loginResultARP) { DARABONBA_PTR_SET_VALUE(loginResultARP_, loginResultARP) };


    // loginTypeLRP Field Functions 
    bool hasLoginTypeLRP() const { return this->loginTypeLRP_ != nullptr;};
    void deleteLoginTypeLRP() { this->loginTypeLRP_ = nullptr;};
    inline string loginTypeLRP() const { DARABONBA_PTR_GET_DEFAULT(loginTypeLRP_, "") };
    inline DescribeEventLogPageRequest& setLoginTypeLRP(string loginTypeLRP) { DARABONBA_PTR_SET_VALUE(loginTypeLRP_, loginTypeLRP) };


    // macPRP Field Functions 
    bool hasMacPRP() const { return this->macPRP_ != nullptr;};
    void deleteMacPRP() { this->macPRP_ = nullptr;};
    inline string macPRP() const { DARABONBA_PTR_GET_DEFAULT(macPRP_, "") };
    inline DescribeEventLogPageRequest& setMacPRP(string macPRP) { DARABONBA_PTR_SET_VALUE(macPRP_, macPRP) };


    // mobilePRP Field Functions 
    bool hasMobilePRP() const { return this->mobilePRP_ != nullptr;};
    void deleteMobilePRP() { this->mobilePRP_ = nullptr;};
    inline string mobilePRP() const { DARABONBA_PTR_GET_DEFAULT(mobilePRP_, "") };
    inline DescribeEventLogPageRequest& setMobilePRP(string mobilePRP) { DARABONBA_PTR_SET_VALUE(mobilePRP_, mobilePRP) };


    // nickNamePRP Field Functions 
    bool hasNickNamePRP() const { return this->nickNamePRP_ != nullptr;};
    void deleteNickNamePRP() { this->nickNamePRP_ = nullptr;};
    inline string nickNamePRP() const { DARABONBA_PTR_GET_DEFAULT(nickNamePRP_, "") };
    inline DescribeEventLogPageRequest& setNickNamePRP(string nickNamePRP) { DARABONBA_PTR_SET_VALUE(nickNamePRP_, nickNamePRP) };


    // operateSourceLRP Field Functions 
    bool hasOperateSourceLRP() const { return this->operateSourceLRP_ != nullptr;};
    void deleteOperateSourceLRP() { this->operateSourceLRP_ = nullptr;};
    inline string operateSourceLRP() const { DARABONBA_PTR_GET_DEFAULT(operateSourceLRP_, "") };
    inline DescribeEventLogPageRequest& setOperateSourceLRP(string operateSourceLRP) { DARABONBA_PTR_SET_VALUE(operateSourceLRP_, operateSourceLRP) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeEventLogPageRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // referPRP Field Functions 
    bool hasReferPRP() const { return this->referPRP_ != nullptr;};
    void deleteReferPRP() { this->referPRP_ = nullptr;};
    inline string referPRP() const { DARABONBA_PTR_GET_DEFAULT(referPRP_, "") };
    inline DescribeEventLogPageRequest& setReferPRP(string referPRP) { DARABONBA_PTR_SET_VALUE(referPRP_, referPRP) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string regId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline DescribeEventLogPageRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // registerIpPRP Field Functions 
    bool hasRegisterIpPRP() const { return this->registerIpPRP_ != nullptr;};
    void deleteRegisterIpPRP() { this->registerIpPRP_ = nullptr;};
    inline string registerIpPRP() const { DARABONBA_PTR_GET_DEFAULT(registerIpPRP_, "") };
    inline DescribeEventLogPageRequest& setRegisterIpPRP(string registerIpPRP) { DARABONBA_PTR_SET_VALUE(registerIpPRP_, registerIpPRP) };


    // reqIdPBS Field Functions 
    bool hasReqIdPBS() const { return this->reqIdPBS_ != nullptr;};
    void deleteReqIdPBS() { this->reqIdPBS_ = nullptr;};
    inline string reqIdPBS() const { DARABONBA_PTR_GET_DEFAULT(reqIdPBS_, "") };
    inline DescribeEventLogPageRequest& setReqIdPBS(string reqIdPBS) { DARABONBA_PTR_SET_VALUE(reqIdPBS_, reqIdPBS) };


    // scoreEBS Field Functions 
    bool hasScoreEBS() const { return this->scoreEBS_ != nullptr;};
    void deleteScoreEBS() { this->scoreEBS_ = nullptr;};
    inline int32_t scoreEBS() const { DARABONBA_PTR_GET_DEFAULT(scoreEBS_, 0) };
    inline DescribeEventLogPageRequest& setScoreEBS(int32_t scoreEBS) { DARABONBA_PTR_SET_VALUE(scoreEBS_, scoreEBS) };


    // scoreSBS Field Functions 
    bool hasScoreSBS() const { return this->scoreSBS_ != nullptr;};
    void deleteScoreSBS() { this->scoreSBS_ = nullptr;};
    inline int32_t scoreSBS() const { DARABONBA_PTR_GET_DEFAULT(scoreSBS_, 0) };
    inline DescribeEventLogPageRequest& setScoreSBS(int32_t scoreSBS) { DARABONBA_PTR_SET_VALUE(scoreSBS_, scoreSBS) };


    // serviceABS Field Functions 
    bool hasServiceABS() const { return this->serviceABS_ != nullptr;};
    void deleteServiceABS() { this->serviceABS_ = nullptr;};
    inline string serviceABS() const { DARABONBA_PTR_GET_DEFAULT(serviceABS_, "") };
    inline DescribeEventLogPageRequest& setServiceABS(string serviceABS) { DARABONBA_PTR_SET_VALUE(serviceABS_, serviceABS) };


    // tagsLBS Field Functions 
    bool hasTagsLBS() const { return this->tagsLBS_ != nullptr;};
    void deleteTagsLBS() { this->tagsLBS_ = nullptr;};
    inline string tagsLBS() const { DARABONBA_PTR_GET_DEFAULT(tagsLBS_, "") };
    inline DescribeEventLogPageRequest& setTagsLBS(string tagsLBS) { DARABONBA_PTR_SET_VALUE(tagsLBS_, tagsLBS) };


    // umidPDI Field Functions 
    bool hasUmidPDI() const { return this->umidPDI_ != nullptr;};
    void deleteUmidPDI() { this->umidPDI_ = nullptr;};
    inline string umidPDI() const { DARABONBA_PTR_GET_DEFAULT(umidPDI_, "") };
    inline DescribeEventLogPageRequest& setUmidPDI(string umidPDI) { DARABONBA_PTR_SET_VALUE(umidPDI_, umidPDI) };


    // userAgentPRP Field Functions 
    bool hasUserAgentPRP() const { return this->userAgentPRP_ != nullptr;};
    void deleteUserAgentPRP() { this->userAgentPRP_ = nullptr;};
    inline string userAgentPRP() const { DARABONBA_PTR_GET_DEFAULT(userAgentPRP_, "") };
    inline DescribeEventLogPageRequest& setUserAgentPRP(string userAgentPRP) { DARABONBA_PTR_SET_VALUE(userAgentPRP_, userAgentPRP) };


    // userNameTypeLRP Field Functions 
    bool hasUserNameTypeLRP() const { return this->userNameTypeLRP_ != nullptr;};
    void deleteUserNameTypeLRP() { this->userNameTypeLRP_ = nullptr;};
    inline string userNameTypeLRP() const { DARABONBA_PTR_GET_DEFAULT(userNameTypeLRP_, "") };
    inline DescribeEventLogPageRequest& setUserNameTypeLRP(string userNameTypeLRP) { DARABONBA_PTR_SET_VALUE(userNameTypeLRP_, userNameTypeLRP) };


  protected:
    // Set the language type for request and response messages, default value is **zh**. Values:
    // - **zh**: Chinese
    // - **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // Account ID (request_param.accountId), up to 50 characters, supports “*” and “?” wildcards.
    std::shared_ptr<string> accountIdPRP_ = nullptr;
    // Start timestamp of the log. Unit: milliseconds.
    std::shared_ptr<int64_t> beginTime_ = nullptr;
    // Full-text match 1, cannot exceed 30 characters.
    std::shared_ptr<string> condition1AL_ = nullptr;
    // Full-text match 2, cannot exceed 30 characters.
    std::shared_ptr<string> condition2AL_ = nullptr;
    // Full-text match 3, cannot exceed 30 characters.
    std::shared_ptr<string> condition3AL_ = nullptr;
    // Current page number.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // Device type (request_param.deviceType), examples: 1. PC, 2. MOBILE.
    std::shared_ptr<string> deviceTypeLRP_ = nullptr;
    // Email (request_param.email), up to 100 characters, supports “*” and “?” wildcards.
    std::shared_ptr<string> emailPRP_ = nullptr;
    // End time, accurate to milliseconds (ms).
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // Login failure reason (-request_param.failReason).
    std::shared_ptr<string> failReasonLRP_ = nullptr;
    // IP (request_param.ip), up to 20 characters, supports “*” and “?” wildcards.
    std::shared_ptr<string> ipPRP_ = nullptr;
    // Login success indicator (request_param.loginResult).
    std::shared_ptr<string> loginResultARP_ = nullptr;
    // Login verification method (-request_param.loginType).
    std::shared_ptr<string> loginTypeLRP_ = nullptr;
    // Device MAC address (-request_param.mac), up to 30 characters, supports “*” and “?” wildcards.
    std::shared_ptr<string> macPRP_ = nullptr;
    // Phone number (supports MD5 request_param.mobile/request_param.mobileMd5), up to 30 characters, supports “*” and “?” wildcards, searchable by mobile and mobileMd5 fields.
    std::shared_ptr<string> mobilePRP_ = nullptr;
    // Account nickname (request_param.nickName), up to 50 characters, supports “*” and “?” wildcards.
    std::shared_ptr<string> nickNamePRP_ = nullptr;
    // Operation source (request_param.operateSource), examples: 1. PC, 2. H5, 3. App.
    std::shared_ptr<string> operateSourceLRP_ = nullptr;
    // Number of items per page, default value is 10.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // Referer (-request_param.refer), up to 50 characters, supports “*” and “?” wildcards.
    std::shared_ptr<string> referPRP_ = nullptr;
    // Region code.
    std::shared_ptr<string> regId_ = nullptr;
    // Account registration IP (request_param.registerIp), up to 20 characters, supports “*” and “?” wildcards.
    std::shared_ptr<string> registerIpPRP_ = nullptr;
    // Request ID.
    std::shared_ptr<string> reqIdPBS_ = nullptr;
    // End value of the score range (score), only non-negative integers are allowed, and the right interval must be greater than the left interval, with both intervals being closed.
    std::shared_ptr<int32_t> scoreEBS_ = nullptr;
    // Starting value of the score range (score), only non-negative integers are allowed, the right interval must be greater than the left interval, both intervals are inclusive.
    std::shared_ptr<int32_t> scoreSBS_ = nullptr;
    // Event name (instance_id).
    std::shared_ptr<string> serviceABS_ = nullptr;
    // Risk tags (tags), data source DescribeTagsList.
    std::shared_ptr<string> tagsLBS_ = nullptr;
    // Device ID (device_info.umid).
    std::shared_ptr<string> umidPDI_ = nullptr;
    // User agent (-request_param.userAgent), up to 50 characters, supports “*” and “?” wildcards.
    std::shared_ptr<string> userAgentPRP_ = nullptr;
    // Username type, login scenario (-request_param.userNameType).
    std::shared_ptr<string> userNameTypeLRP_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
