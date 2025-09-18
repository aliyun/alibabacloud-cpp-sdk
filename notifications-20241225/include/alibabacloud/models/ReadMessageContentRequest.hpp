// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_READMESSAGECONTENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_READMESSAGECONTENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Notifications20241225
{
namespace Models
{
  class ReadMessageContentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReadMessageContentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(BizName, bizName_);
      DARABONBA_PTR_TO_JSON(CallerProtocol, callerProtocol_);
      DARABONBA_PTR_TO_JSON(ClassId, classId_);
      DARABONBA_PTR_TO_JSON(ClientSource, clientSource_);
      DARABONBA_PTR_TO_JSON(Cookies, cookies_);
      DARABONBA_PTR_TO_JSON(GroupCode, groupCode_);
      DARABONBA_PTR_TO_JSON(History, history_);
      DARABONBA_PTR_TO_JSON(MsgId, msgId_);
      DARABONBA_PTR_TO_JSON(SrcUrl, srcUrl_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TenantCode, tenantCode_);
      DARABONBA_PTR_TO_JSON(UidType, uidType_);
    };
    friend void from_json(const Darabonba::Json& j, ReadMessageContentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(BizName, bizName_);
      DARABONBA_PTR_FROM_JSON(CallerProtocol, callerProtocol_);
      DARABONBA_PTR_FROM_JSON(ClassId, classId_);
      DARABONBA_PTR_FROM_JSON(ClientSource, clientSource_);
      DARABONBA_PTR_FROM_JSON(Cookies, cookies_);
      DARABONBA_PTR_FROM_JSON(GroupCode, groupCode_);
      DARABONBA_PTR_FROM_JSON(History, history_);
      DARABONBA_PTR_FROM_JSON(MsgId, msgId_);
      DARABONBA_PTR_FROM_JSON(SrcUrl, srcUrl_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TenantCode, tenantCode_);
      DARABONBA_PTR_FROM_JSON(UidType, uidType_);
    };
    ReadMessageContentRequest() = default ;
    ReadMessageContentRequest(const ReadMessageContentRequest &) = default ;
    ReadMessageContentRequest(ReadMessageContentRequest &&) = default ;
    ReadMessageContentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReadMessageContentRequest() = default ;
    ReadMessageContentRequest& operator=(const ReadMessageContentRequest &) = default ;
    ReadMessageContentRequest& operator=(ReadMessageContentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->acceptLanguage_ != nullptr
        && this->appName_ != nullptr && this->bizName_ != nullptr && this->callerProtocol_ != nullptr && this->classId_ != nullptr && this->clientSource_ != nullptr
        && this->cookies_ != nullptr && this->groupCode_ != nullptr && this->history_ != nullptr && this->msgId_ != nullptr && this->srcUrl_ != nullptr
        && this->status_ != nullptr && this->tenantCode_ != nullptr && this->uidType_ != nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline ReadMessageContentRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ReadMessageContentRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // bizName Field Functions 
    bool hasBizName() const { return this->bizName_ != nullptr;};
    void deleteBizName() { this->bizName_ = nullptr;};
    inline string bizName() const { DARABONBA_PTR_GET_DEFAULT(bizName_, "") };
    inline ReadMessageContentRequest& setBizName(string bizName) { DARABONBA_PTR_SET_VALUE(bizName_, bizName) };


    // callerProtocol Field Functions 
    bool hasCallerProtocol() const { return this->callerProtocol_ != nullptr;};
    void deleteCallerProtocol() { this->callerProtocol_ = nullptr;};
    inline string callerProtocol() const { DARABONBA_PTR_GET_DEFAULT(callerProtocol_, "") };
    inline ReadMessageContentRequest& setCallerProtocol(string callerProtocol) { DARABONBA_PTR_SET_VALUE(callerProtocol_, callerProtocol) };


    // classId Field Functions 
    bool hasClassId() const { return this->classId_ != nullptr;};
    void deleteClassId() { this->classId_ = nullptr;};
    inline int64_t classId() const { DARABONBA_PTR_GET_DEFAULT(classId_, 0L) };
    inline ReadMessageContentRequest& setClassId(int64_t classId) { DARABONBA_PTR_SET_VALUE(classId_, classId) };


    // clientSource Field Functions 
    bool hasClientSource() const { return this->clientSource_ != nullptr;};
    void deleteClientSource() { this->clientSource_ = nullptr;};
    inline string clientSource() const { DARABONBA_PTR_GET_DEFAULT(clientSource_, "") };
    inline ReadMessageContentRequest& setClientSource(string clientSource) { DARABONBA_PTR_SET_VALUE(clientSource_, clientSource) };


    // cookies Field Functions 
    bool hasCookies() const { return this->cookies_ != nullptr;};
    void deleteCookies() { this->cookies_ = nullptr;};
    inline string cookies() const { DARABONBA_PTR_GET_DEFAULT(cookies_, "") };
    inline ReadMessageContentRequest& setCookies(string cookies) { DARABONBA_PTR_SET_VALUE(cookies_, cookies) };


    // groupCode Field Functions 
    bool hasGroupCode() const { return this->groupCode_ != nullptr;};
    void deleteGroupCode() { this->groupCode_ = nullptr;};
    inline string groupCode() const { DARABONBA_PTR_GET_DEFAULT(groupCode_, "") };
    inline ReadMessageContentRequest& setGroupCode(string groupCode) { DARABONBA_PTR_SET_VALUE(groupCode_, groupCode) };


    // history Field Functions 
    bool hasHistory() const { return this->history_ != nullptr;};
    void deleteHistory() { this->history_ = nullptr;};
    inline bool history() const { DARABONBA_PTR_GET_DEFAULT(history_, false) };
    inline ReadMessageContentRequest& setHistory(bool history) { DARABONBA_PTR_SET_VALUE(history_, history) };


    // msgId Field Functions 
    bool hasMsgId() const { return this->msgId_ != nullptr;};
    void deleteMsgId() { this->msgId_ = nullptr;};
    inline string msgId() const { DARABONBA_PTR_GET_DEFAULT(msgId_, "") };
    inline ReadMessageContentRequest& setMsgId(string msgId) { DARABONBA_PTR_SET_VALUE(msgId_, msgId) };


    // srcUrl Field Functions 
    bool hasSrcUrl() const { return this->srcUrl_ != nullptr;};
    void deleteSrcUrl() { this->srcUrl_ = nullptr;};
    inline string srcUrl() const { DARABONBA_PTR_GET_DEFAULT(srcUrl_, "") };
    inline ReadMessageContentRequest& setSrcUrl(string srcUrl) { DARABONBA_PTR_SET_VALUE(srcUrl_, srcUrl) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ReadMessageContentRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tenantCode Field Functions 
    bool hasTenantCode() const { return this->tenantCode_ != nullptr;};
    void deleteTenantCode() { this->tenantCode_ = nullptr;};
    inline string tenantCode() const { DARABONBA_PTR_GET_DEFAULT(tenantCode_, "") };
    inline ReadMessageContentRequest& setTenantCode(string tenantCode) { DARABONBA_PTR_SET_VALUE(tenantCode_, tenantCode) };


    // uidType Field Functions 
    bool hasUidType() const { return this->uidType_ != nullptr;};
    void deleteUidType() { this->uidType_ = nullptr;};
    inline string uidType() const { DARABONBA_PTR_GET_DEFAULT(uidType_, "") };
    inline ReadMessageContentRequest& setUidType(string uidType) { DARABONBA_PTR_SET_VALUE(uidType_, uidType) };


  protected:
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    std::shared_ptr<string> appName_ = nullptr;
    std::shared_ptr<string> bizName_ = nullptr;
    std::shared_ptr<string> callerProtocol_ = nullptr;
    std::shared_ptr<int64_t> classId_ = nullptr;
    std::shared_ptr<string> clientSource_ = nullptr;
    std::shared_ptr<string> cookies_ = nullptr;
    std::shared_ptr<string> groupCode_ = nullptr;
    std::shared_ptr<bool> history_ = nullptr;
    std::shared_ptr<string> msgId_ = nullptr;
    std::shared_ptr<string> srcUrl_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<string> tenantCode_ = nullptr;
    std::shared_ptr<string> uidType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Notifications20241225
#endif
