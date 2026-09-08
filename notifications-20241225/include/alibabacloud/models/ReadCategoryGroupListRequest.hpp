// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_READCATEGORYGROUPLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_READCATEGORYGROUPLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Notifications20241225
{
namespace Models
{
  class ReadCategoryGroupListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReadCategoryGroupListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(BizName, bizName_);
      DARABONBA_PTR_TO_JSON(CallerProtocol, callerProtocol_);
      DARABONBA_PTR_TO_JSON(ChannelGroupCode, channelGroupCode_);
      DARABONBA_PTR_TO_JSON(ClientSource, clientSource_);
      DARABONBA_PTR_TO_JSON(Cookies, cookies_);
      DARABONBA_PTR_TO_JSON(SrcUrl, srcUrl_);
      DARABONBA_PTR_TO_JSON(TenantCode, tenantCode_);
      DARABONBA_PTR_TO_JSON(UidType, uidType_);
    };
    friend void from_json(const Darabonba::Json& j, ReadCategoryGroupListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(BizName, bizName_);
      DARABONBA_PTR_FROM_JSON(CallerProtocol, callerProtocol_);
      DARABONBA_PTR_FROM_JSON(ChannelGroupCode, channelGroupCode_);
      DARABONBA_PTR_FROM_JSON(ClientSource, clientSource_);
      DARABONBA_PTR_FROM_JSON(Cookies, cookies_);
      DARABONBA_PTR_FROM_JSON(SrcUrl, srcUrl_);
      DARABONBA_PTR_FROM_JSON(TenantCode, tenantCode_);
      DARABONBA_PTR_FROM_JSON(UidType, uidType_);
    };
    ReadCategoryGroupListRequest() = default ;
    ReadCategoryGroupListRequest(const ReadCategoryGroupListRequest &) = default ;
    ReadCategoryGroupListRequest(ReadCategoryGroupListRequest &&) = default ;
    ReadCategoryGroupListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReadCategoryGroupListRequest() = default ;
    ReadCategoryGroupListRequest& operator=(const ReadCategoryGroupListRequest &) = default ;
    ReadCategoryGroupListRequest& operator=(ReadCategoryGroupListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->appName_ == nullptr && this->bizName_ == nullptr && this->callerProtocol_ == nullptr && this->channelGroupCode_ == nullptr && this->clientSource_ == nullptr
        && this->cookies_ == nullptr && this->srcUrl_ == nullptr && this->tenantCode_ == nullptr && this->uidType_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline ReadCategoryGroupListRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ReadCategoryGroupListRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // bizName Field Functions 
    bool hasBizName() const { return this->bizName_ != nullptr;};
    void deleteBizName() { this->bizName_ = nullptr;};
    inline string getBizName() const { DARABONBA_PTR_GET_DEFAULT(bizName_, "") };
    inline ReadCategoryGroupListRequest& setBizName(string bizName) { DARABONBA_PTR_SET_VALUE(bizName_, bizName) };


    // callerProtocol Field Functions 
    bool hasCallerProtocol() const { return this->callerProtocol_ != nullptr;};
    void deleteCallerProtocol() { this->callerProtocol_ = nullptr;};
    inline string getCallerProtocol() const { DARABONBA_PTR_GET_DEFAULT(callerProtocol_, "") };
    inline ReadCategoryGroupListRequest& setCallerProtocol(string callerProtocol) { DARABONBA_PTR_SET_VALUE(callerProtocol_, callerProtocol) };


    // channelGroupCode Field Functions 
    bool hasChannelGroupCode() const { return this->channelGroupCode_ != nullptr;};
    void deleteChannelGroupCode() { this->channelGroupCode_ = nullptr;};
    inline string getChannelGroupCode() const { DARABONBA_PTR_GET_DEFAULT(channelGroupCode_, "") };
    inline ReadCategoryGroupListRequest& setChannelGroupCode(string channelGroupCode) { DARABONBA_PTR_SET_VALUE(channelGroupCode_, channelGroupCode) };


    // clientSource Field Functions 
    bool hasClientSource() const { return this->clientSource_ != nullptr;};
    void deleteClientSource() { this->clientSource_ = nullptr;};
    inline string getClientSource() const { DARABONBA_PTR_GET_DEFAULT(clientSource_, "") };
    inline ReadCategoryGroupListRequest& setClientSource(string clientSource) { DARABONBA_PTR_SET_VALUE(clientSource_, clientSource) };


    // cookies Field Functions 
    bool hasCookies() const { return this->cookies_ != nullptr;};
    void deleteCookies() { this->cookies_ = nullptr;};
    inline string getCookies() const { DARABONBA_PTR_GET_DEFAULT(cookies_, "") };
    inline ReadCategoryGroupListRequest& setCookies(string cookies) { DARABONBA_PTR_SET_VALUE(cookies_, cookies) };


    // srcUrl Field Functions 
    bool hasSrcUrl() const { return this->srcUrl_ != nullptr;};
    void deleteSrcUrl() { this->srcUrl_ = nullptr;};
    inline string getSrcUrl() const { DARABONBA_PTR_GET_DEFAULT(srcUrl_, "") };
    inline ReadCategoryGroupListRequest& setSrcUrl(string srcUrl) { DARABONBA_PTR_SET_VALUE(srcUrl_, srcUrl) };


    // tenantCode Field Functions 
    bool hasTenantCode() const { return this->tenantCode_ != nullptr;};
    void deleteTenantCode() { this->tenantCode_ = nullptr;};
    inline string getTenantCode() const { DARABONBA_PTR_GET_DEFAULT(tenantCode_, "") };
    inline ReadCategoryGroupListRequest& setTenantCode(string tenantCode) { DARABONBA_PTR_SET_VALUE(tenantCode_, tenantCode) };


    // uidType Field Functions 
    bool hasUidType() const { return this->uidType_ != nullptr;};
    void deleteUidType() { this->uidType_ = nullptr;};
    inline string getUidType() const { DARABONBA_PTR_GET_DEFAULT(uidType_, "") };
    inline ReadCategoryGroupListRequest& setUidType(string uidType) { DARABONBA_PTR_SET_VALUE(uidType_, uidType) };


  protected:
    // The language. Automatically passed through by the browser and can be manually overridden.
    shared_ptr<string> acceptLanguage_ {};
    // Ignore. No need to pass for now. Application name of the requester.
    shared_ptr<string> appName_ {};
    // Ignore. No need to pass for now. Business line of the requester.
    shared_ptr<string> bizName_ {};
    // Ignore. No need to pass for now. Request protocol type.
    shared_ptr<string> callerProtocol_ {};
    // The channel group.
    shared_ptr<string> channelGroupCode_ {};
    // Ignore. No need to pass for now. Operation terminal source.
    shared_ptr<string> clientSource_ {};
    // Ignore. No need to pass for now. User cookies.
    shared_ptr<string> cookies_ {};
    // Ignore. No need to pass for now. Source page URL.
    shared_ptr<string> srcUrl_ {};
    // Ignore. No need to pass for now. Tenant information.
    shared_ptr<string> tenantCode_ {};
    // Ignore. No need to pass for now. User type.
    shared_ptr<string> uidType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Notifications20241225
#endif
