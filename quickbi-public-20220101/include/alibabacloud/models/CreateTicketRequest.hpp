// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETICKETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETICKETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class CreateTicketRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTicketRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(AccountType, accountType_);
      DARABONBA_PTR_TO_JSON(CmptId, cmptId_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(GlobalParam, globalParam_);
      DARABONBA_PTR_TO_JSON(TicketNum, ticketNum_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(WatermarkParam, watermarkParam_);
      DARABONBA_PTR_TO_JSON(WorksId, worksId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTicketRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(AccountType, accountType_);
      DARABONBA_PTR_FROM_JSON(CmptId, cmptId_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(GlobalParam, globalParam_);
      DARABONBA_PTR_FROM_JSON(TicketNum, ticketNum_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(WatermarkParam, watermarkParam_);
      DARABONBA_PTR_FROM_JSON(WorksId, worksId_);
    };
    CreateTicketRequest() = default ;
    CreateTicketRequest(const CreateTicketRequest &) = default ;
    CreateTicketRequest(CreateTicketRequest &&) = default ;
    CreateTicketRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTicketRequest() = default ;
    CreateTicketRequest& operator=(const CreateTicketRequest &) = default ;
    CreateTicketRequest& operator=(CreateTicketRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountName_ == nullptr
        && this->accountType_ == nullptr && this->cmptId_ == nullptr && this->expireTime_ == nullptr && this->globalParam_ == nullptr && this->ticketNum_ == nullptr
        && this->userId_ == nullptr && this->watermarkParam_ == nullptr && this->worksId_ == nullptr; };
    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline CreateTicketRequest& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // accountType Field Functions 
    bool hasAccountType() const { return this->accountType_ != nullptr;};
    void deleteAccountType() { this->accountType_ = nullptr;};
    inline int32_t getAccountType() const { DARABONBA_PTR_GET_DEFAULT(accountType_, 0) };
    inline CreateTicketRequest& setAccountType(int32_t accountType) { DARABONBA_PTR_SET_VALUE(accountType_, accountType) };


    // cmptId Field Functions 
    bool hasCmptId() const { return this->cmptId_ != nullptr;};
    void deleteCmptId() { this->cmptId_ = nullptr;};
    inline string getCmptId() const { DARABONBA_PTR_GET_DEFAULT(cmptId_, "") };
    inline CreateTicketRequest& setCmptId(string cmptId) { DARABONBA_PTR_SET_VALUE(cmptId_, cmptId) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline int32_t getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0) };
    inline CreateTicketRequest& setExpireTime(int32_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // globalParam Field Functions 
    bool hasGlobalParam() const { return this->globalParam_ != nullptr;};
    void deleteGlobalParam() { this->globalParam_ = nullptr;};
    inline string getGlobalParam() const { DARABONBA_PTR_GET_DEFAULT(globalParam_, "") };
    inline CreateTicketRequest& setGlobalParam(string globalParam) { DARABONBA_PTR_SET_VALUE(globalParam_, globalParam) };


    // ticketNum Field Functions 
    bool hasTicketNum() const { return this->ticketNum_ != nullptr;};
    void deleteTicketNum() { this->ticketNum_ = nullptr;};
    inline int32_t getTicketNum() const { DARABONBA_PTR_GET_DEFAULT(ticketNum_, 0) };
    inline CreateTicketRequest& setTicketNum(int32_t ticketNum) { DARABONBA_PTR_SET_VALUE(ticketNum_, ticketNum) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline CreateTicketRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // watermarkParam Field Functions 
    bool hasWatermarkParam() const { return this->watermarkParam_ != nullptr;};
    void deleteWatermarkParam() { this->watermarkParam_ = nullptr;};
    inline string getWatermarkParam() const { DARABONBA_PTR_GET_DEFAULT(watermarkParam_, "") };
    inline CreateTicketRequest& setWatermarkParam(string watermarkParam) { DARABONBA_PTR_SET_VALUE(watermarkParam_, watermarkParam) };


    // worksId Field Functions 
    bool hasWorksId() const { return this->worksId_ != nullptr;};
    void deleteWorksId() { this->worksId_ = nullptr;};
    inline string getWorksId() const { DARABONBA_PTR_GET_DEFAULT(worksId_, "") };
    inline CreateTicketRequest& setWorksId(string worksId) { DARABONBA_PTR_SET_VALUE(worksId_, worksId) };


  protected:
    // The user\\"s account name.
    // 
    // - If the user is an Alibaba Cloud primary account **wangwu**, the format is **[Primary Account]**, for example, **wangwu**.
    // - If the user is a RAM account **zhangsan**@aliyun.cn**, the format is **[Primary Account: Sub-Account]**, for example, **wangwu:zhangsan**.
    // 
    // > Only one of UserId and AccountName needs to be filled in. If neither is filled in, it will default to binding the report\\"s Owner, and the report will be accessed with that user\\"s identity. If you need to configure row-level permissions, please refer to [Row-Level Permissions](https://help.aliyun.com/document_detail/322783.html).
    shared_ptr<string> accountName_ {};
    // The type of the user\\"s account.
    // - 1: Alibaba Cloud account
    // - 3: Quick BI self-built account
    // - 4: DingTalk
    // - 5: RAM sub-account
    // - 9: WeCom
    // - 10: Feishu
    // > If AccountName is not empty, then AccountType must also not be empty.
    shared_ptr<int32_t> accountType_ {};
    // Component ID. This is the ID of a component within the above-mentioned dashboard; other types of works do not support this.
    // Refer to [QueryWorksBloodRelationship](https://next.api.aliyun.com/api/quickbi-public/2022-01-01/QueryWorksBloodRelationship?spm=a2c4g.11186623.0.0.15615d7aWVvWAl&params={}&lang=JAVA&tab=DOC&sdkStyle=old) for the API to get the component ID.
    shared_ptr<string> cmptId_ {};
    // Expiration time
    // - Unit: minutes
    // - Default: 240
    shared_ptr<int32_t> expireTime_ {};
    // Global parameters for the report filter conditions.
    // - A string in JsonArray format.
    // 
    // > If you need to use global parameter capabilities, please contact the [Quick BI Operations Manager](https://h5-alimebot.dingtalk.com/intl/index.htm?spm=a2c4g.11186623.0.0.3da14f6chrDv9e&sourceType=ding_talk&from=DEFFB9G5KBByQkwq23wneFIOmaJ).
    shared_ptr<string> globalParam_ {};
    // The number of tickets. Each time a ticket is used, the number of tickets decreases by 1.
    // - Default value: 1
    // - Recommended value: 1
    // - Maximum value: 99999
    shared_ptr<int32_t> ticketNum_ {};
    // Quick BI\\"s UserId, which is not your Alibaba Cloud account ID.
    // You can call the [QueryUserInfoByAccount](https://next.api.aliyun.com/api/quickbi-public/2022-01-01/QueryUserInfoByAccount?spm=a2c4g.11186623.0.0.15615d7aWVvWAl&params={}&tab=DOC&sdkStyle=old) interface to obtain the UserId. An example of a UserId is fe67f61a35a94b7da1a34ba174a7****.
    // 
    // > Only one of UserId and AccountName needs to be filled in. If neither is filled in, it will default to binding the report\\"s Owner, and the report will be accessed with that user\\"s identity. If you need to configure row-level permissions, please refer to [Row-Level Permissions](https://help.aliyun.com/document_detail/322783.html).
    shared_ptr<string> userId_ {};
    // Watermark parameters for the report.
    // - Must not exceed 50 characters.
    // - When the report type is a large screen, watermark parameter passing is not supported.
    shared_ptr<string> watermarkParam_ {};
    // The ID of the report to be embedded. Currently supports dashboards, spreadsheets, data screens, self-service data retrieval, ad-hoc analysis, and data entry.
    // 
    // This parameter is required.
    shared_ptr<string> worksId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
