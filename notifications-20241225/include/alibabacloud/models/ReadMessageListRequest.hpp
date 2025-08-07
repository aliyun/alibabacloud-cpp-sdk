// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_READMESSAGELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_READMESSAGELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Notifications20241225
{
namespace Models
{
  class ReadMessageListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReadMessageListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(BizName, bizName_);
      DARABONBA_PTR_TO_JSON(CallerProtocol, callerProtocol_);
      DARABONBA_PTR_TO_JSON(ClassId, classId_);
      DARABONBA_PTR_TO_JSON(ClientSource, clientSource_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Cookies, cookies_);
      DARABONBA_PTR_TO_JSON(Loc, loc_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SrcUrl, srcUrl_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TenantCode, tenantCode_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(UidType, uidType_);
    };
    friend void from_json(const Darabonba::Json& j, ReadMessageListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(BizName, bizName_);
      DARABONBA_PTR_FROM_JSON(CallerProtocol, callerProtocol_);
      DARABONBA_PTR_FROM_JSON(ClassId, classId_);
      DARABONBA_PTR_FROM_JSON(ClientSource, clientSource_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Cookies, cookies_);
      DARABONBA_PTR_FROM_JSON(Loc, loc_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SrcUrl, srcUrl_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TenantCode, tenantCode_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(UidType, uidType_);
    };
    ReadMessageListRequest() = default ;
    ReadMessageListRequest(const ReadMessageListRequest &) = default ;
    ReadMessageListRequest(ReadMessageListRequest &&) = default ;
    ReadMessageListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReadMessageListRequest() = default ;
    ReadMessageListRequest& operator=(const ReadMessageListRequest &) = default ;
    ReadMessageListRequest& operator=(ReadMessageListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->acceptLanguage_ != nullptr
        && this->appName_ != nullptr && this->bizName_ != nullptr && this->callerProtocol_ != nullptr && this->classId_ != nullptr && this->clientSource_ != nullptr
        && this->content_ != nullptr && this->cookies_ != nullptr && this->loc_ != nullptr && this->maxResults_ != nullptr && this->nextToken_ != nullptr
        && this->page_ != nullptr && this->pageSize_ != nullptr && this->srcUrl_ != nullptr && this->status_ != nullptr && this->tenantCode_ != nullptr
        && this->title_ != nullptr && this->uidType_ != nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline ReadMessageListRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ReadMessageListRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // bizName Field Functions 
    bool hasBizName() const { return this->bizName_ != nullptr;};
    void deleteBizName() { this->bizName_ = nullptr;};
    inline string bizName() const { DARABONBA_PTR_GET_DEFAULT(bizName_, "") };
    inline ReadMessageListRequest& setBizName(string bizName) { DARABONBA_PTR_SET_VALUE(bizName_, bizName) };


    // callerProtocol Field Functions 
    bool hasCallerProtocol() const { return this->callerProtocol_ != nullptr;};
    void deleteCallerProtocol() { this->callerProtocol_ = nullptr;};
    inline string callerProtocol() const { DARABONBA_PTR_GET_DEFAULT(callerProtocol_, "") };
    inline ReadMessageListRequest& setCallerProtocol(string callerProtocol) { DARABONBA_PTR_SET_VALUE(callerProtocol_, callerProtocol) };


    // classId Field Functions 
    bool hasClassId() const { return this->classId_ != nullptr;};
    void deleteClassId() { this->classId_ = nullptr;};
    inline int64_t classId() const { DARABONBA_PTR_GET_DEFAULT(classId_, 0L) };
    inline ReadMessageListRequest& setClassId(int64_t classId) { DARABONBA_PTR_SET_VALUE(classId_, classId) };


    // clientSource Field Functions 
    bool hasClientSource() const { return this->clientSource_ != nullptr;};
    void deleteClientSource() { this->clientSource_ = nullptr;};
    inline string clientSource() const { DARABONBA_PTR_GET_DEFAULT(clientSource_, "") };
    inline ReadMessageListRequest& setClientSource(string clientSource) { DARABONBA_PTR_SET_VALUE(clientSource_, clientSource) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline ReadMessageListRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // cookies Field Functions 
    bool hasCookies() const { return this->cookies_ != nullptr;};
    void deleteCookies() { this->cookies_ = nullptr;};
    inline string cookies() const { DARABONBA_PTR_GET_DEFAULT(cookies_, "") };
    inline ReadMessageListRequest& setCookies(string cookies) { DARABONBA_PTR_SET_VALUE(cookies_, cookies) };


    // loc Field Functions 
    bool hasLoc() const { return this->loc_ != nullptr;};
    void deleteLoc() { this->loc_ = nullptr;};
    inline string loc() const { DARABONBA_PTR_GET_DEFAULT(loc_, "") };
    inline ReadMessageListRequest& setLoc(string loc) { DARABONBA_PTR_SET_VALUE(loc_, loc) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ReadMessageListRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ReadMessageListRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t page() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline ReadMessageListRequest& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ReadMessageListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // srcUrl Field Functions 
    bool hasSrcUrl() const { return this->srcUrl_ != nullptr;};
    void deleteSrcUrl() { this->srcUrl_ = nullptr;};
    inline string srcUrl() const { DARABONBA_PTR_GET_DEFAULT(srcUrl_, "") };
    inline ReadMessageListRequest& setSrcUrl(string srcUrl) { DARABONBA_PTR_SET_VALUE(srcUrl_, srcUrl) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ReadMessageListRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tenantCode Field Functions 
    bool hasTenantCode() const { return this->tenantCode_ != nullptr;};
    void deleteTenantCode() { this->tenantCode_ = nullptr;};
    inline string tenantCode() const { DARABONBA_PTR_GET_DEFAULT(tenantCode_, "") };
    inline ReadMessageListRequest& setTenantCode(string tenantCode) { DARABONBA_PTR_SET_VALUE(tenantCode_, tenantCode) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline ReadMessageListRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // uidType Field Functions 
    bool hasUidType() const { return this->uidType_ != nullptr;};
    void deleteUidType() { this->uidType_ = nullptr;};
    inline string uidType() const { DARABONBA_PTR_GET_DEFAULT(uidType_, "") };
    inline ReadMessageListRequest& setUidType(string uidType) { DARABONBA_PTR_SET_VALUE(uidType_, uidType) };


  protected:
    // 语言，默认为简体中文
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    // 系统参数，无需填写
    std::shared_ptr<string> appName_ = nullptr;
    // 系统参数，无需填写
    std::shared_ptr<string> bizName_ = nullptr;
    // 系统参数，无需填写
    std::shared_ptr<string> callerProtocol_ = nullptr;
    // 消息类目ID
    std::shared_ptr<int64_t> classId_ = nullptr;
    // 系统参数，无需填写
    std::shared_ptr<string> clientSource_ = nullptr;
    // 消息内容，用于模糊搜索
    std::shared_ptr<string> content_ = nullptr;
    // 系统参数，无需填写
    std::shared_ptr<string> cookies_ = nullptr;
    // 栏位 nav代表控制台topbar
    std::shared_ptr<string> loc_ = nullptr;
    // 系统参数，无需填写
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // 系统参数，无需填写
    std::shared_ptr<string> nextToken_ = nullptr;
    // 分页查询页码
    std::shared_ptr<int32_t> page_ = nullptr;
    // 分页查询大小
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // 系统参数，无需填写
    std::shared_ptr<string> srcUrl_ = nullptr;
    // 消息状态，已读为1，未读为0
    std::shared_ptr<int32_t> status_ = nullptr;
    // 系统参数，无需填写
    std::shared_ptr<string> tenantCode_ = nullptr;
    // 消息标题，用于模糊搜索
    std::shared_ptr<string> title_ = nullptr;
    // 系统参数，无需填写
    std::shared_ptr<string> uidType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Notifications20241225
#endif
