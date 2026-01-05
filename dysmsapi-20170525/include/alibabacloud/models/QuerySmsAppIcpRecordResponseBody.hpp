// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSMSAPPICPRECORDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYSMSAPPICPRECORDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class QuerySmsAppIcpRecordResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySmsAppIcpRecordResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySmsAppIcpRecordResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QuerySmsAppIcpRecordResponseBody() = default ;
    QuerySmsAppIcpRecordResponseBody(const QuerySmsAppIcpRecordResponseBody &) = default ;
    QuerySmsAppIcpRecordResponseBody(QuerySmsAppIcpRecordResponseBody &&) = default ;
    QuerySmsAppIcpRecordResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySmsAppIcpRecordResponseBody() = default ;
    QuerySmsAppIcpRecordResponseBody& operator=(const QuerySmsAppIcpRecordResponseBody &) = default ;
    QuerySmsAppIcpRecordResponseBody& operator=(QuerySmsAppIcpRecordResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AppApprovalDate, appApprovalDate_);
        DARABONBA_PTR_TO_JSON(AppIcpLicenseNumber, appIcpLicenseNumber_);
        DARABONBA_PTR_TO_JSON(AppIcpRecordId, appIcpRecordId_);
        DARABONBA_PTR_TO_JSON(AppIcpRecordPic, appIcpRecordPic_);
        DARABONBA_PTR_TO_JSON(AppIcpRecordPicUrl, appIcpRecordPicUrl_);
        DARABONBA_PTR_TO_JSON(AppPrincipalUnitName, appPrincipalUnitName_);
        DARABONBA_PTR_TO_JSON(AppServiceName, appServiceName_);
        DARABONBA_PTR_TO_JSON(Domain, domain_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AppApprovalDate, appApprovalDate_);
        DARABONBA_PTR_FROM_JSON(AppIcpLicenseNumber, appIcpLicenseNumber_);
        DARABONBA_PTR_FROM_JSON(AppIcpRecordId, appIcpRecordId_);
        DARABONBA_PTR_FROM_JSON(AppIcpRecordPic, appIcpRecordPic_);
        DARABONBA_PTR_FROM_JSON(AppIcpRecordPicUrl, appIcpRecordPicUrl_);
        DARABONBA_PTR_FROM_JSON(AppPrincipalUnitName, appPrincipalUnitName_);
        DARABONBA_PTR_FROM_JSON(AppServiceName, appServiceName_);
        DARABONBA_PTR_FROM_JSON(Domain, domain_);
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
      virtual bool empty() const override { return this->appApprovalDate_ == nullptr
        && this->appIcpLicenseNumber_ == nullptr && this->appIcpRecordId_ == nullptr && this->appIcpRecordPic_ == nullptr && this->appIcpRecordPicUrl_ == nullptr && this->appPrincipalUnitName_ == nullptr
        && this->appServiceName_ == nullptr && this->domain_ == nullptr; };
      // appApprovalDate Field Functions 
      bool hasAppApprovalDate() const { return this->appApprovalDate_ != nullptr;};
      void deleteAppApprovalDate() { this->appApprovalDate_ = nullptr;};
      inline string getAppApprovalDate() const { DARABONBA_PTR_GET_DEFAULT(appApprovalDate_, "") };
      inline Data& setAppApprovalDate(string appApprovalDate) { DARABONBA_PTR_SET_VALUE(appApprovalDate_, appApprovalDate) };


      // appIcpLicenseNumber Field Functions 
      bool hasAppIcpLicenseNumber() const { return this->appIcpLicenseNumber_ != nullptr;};
      void deleteAppIcpLicenseNumber() { this->appIcpLicenseNumber_ = nullptr;};
      inline string getAppIcpLicenseNumber() const { DARABONBA_PTR_GET_DEFAULT(appIcpLicenseNumber_, "") };
      inline Data& setAppIcpLicenseNumber(string appIcpLicenseNumber) { DARABONBA_PTR_SET_VALUE(appIcpLicenseNumber_, appIcpLicenseNumber) };


      // appIcpRecordId Field Functions 
      bool hasAppIcpRecordId() const { return this->appIcpRecordId_ != nullptr;};
      void deleteAppIcpRecordId() { this->appIcpRecordId_ = nullptr;};
      inline int64_t getAppIcpRecordId() const { DARABONBA_PTR_GET_DEFAULT(appIcpRecordId_, 0L) };
      inline Data& setAppIcpRecordId(int64_t appIcpRecordId) { DARABONBA_PTR_SET_VALUE(appIcpRecordId_, appIcpRecordId) };


      // appIcpRecordPic Field Functions 
      bool hasAppIcpRecordPic() const { return this->appIcpRecordPic_ != nullptr;};
      void deleteAppIcpRecordPic() { this->appIcpRecordPic_ = nullptr;};
      inline string getAppIcpRecordPic() const { DARABONBA_PTR_GET_DEFAULT(appIcpRecordPic_, "") };
      inline Data& setAppIcpRecordPic(string appIcpRecordPic) { DARABONBA_PTR_SET_VALUE(appIcpRecordPic_, appIcpRecordPic) };


      // appIcpRecordPicUrl Field Functions 
      bool hasAppIcpRecordPicUrl() const { return this->appIcpRecordPicUrl_ != nullptr;};
      void deleteAppIcpRecordPicUrl() { this->appIcpRecordPicUrl_ = nullptr;};
      inline string getAppIcpRecordPicUrl() const { DARABONBA_PTR_GET_DEFAULT(appIcpRecordPicUrl_, "") };
      inline Data& setAppIcpRecordPicUrl(string appIcpRecordPicUrl) { DARABONBA_PTR_SET_VALUE(appIcpRecordPicUrl_, appIcpRecordPicUrl) };


      // appPrincipalUnitName Field Functions 
      bool hasAppPrincipalUnitName() const { return this->appPrincipalUnitName_ != nullptr;};
      void deleteAppPrincipalUnitName() { this->appPrincipalUnitName_ = nullptr;};
      inline string getAppPrincipalUnitName() const { DARABONBA_PTR_GET_DEFAULT(appPrincipalUnitName_, "") };
      inline Data& setAppPrincipalUnitName(string appPrincipalUnitName) { DARABONBA_PTR_SET_VALUE(appPrincipalUnitName_, appPrincipalUnitName) };


      // appServiceName Field Functions 
      bool hasAppServiceName() const { return this->appServiceName_ != nullptr;};
      void deleteAppServiceName() { this->appServiceName_ = nullptr;};
      inline string getAppServiceName() const { DARABONBA_PTR_GET_DEFAULT(appServiceName_, "") };
      inline Data& setAppServiceName(string appServiceName) { DARABONBA_PTR_SET_VALUE(appServiceName_, appServiceName) };


      // domain Field Functions 
      bool hasDomain() const { return this->domain_ != nullptr;};
      void deleteDomain() { this->domain_ = nullptr;};
      inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
      inline Data& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    protected:
      // 审核通过日期，示例2025-09-01
      shared_ptr<string> appApprovalDate_ {};
      // ICP备案/许可证号
      shared_ptr<string> appIcpLicenseNumber_ {};
      // app-icp备案材料id
      shared_ptr<int64_t> appIcpRecordId_ {};
      // app-icp备案截图图片Osskey（给签名传工单用）
      shared_ptr<string> appIcpRecordPic_ {};
      // app-icp备案截图url地址
      shared_ptr<string> appIcpRecordPicUrl_ {};
      // 主办单位名称
      shared_ptr<string> appPrincipalUnitName_ {};
      // app服务名称
      shared_ptr<string> appServiceName_ {};
      // APP应用商店链接
      shared_ptr<string> domain_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline QuerySmsAppIcpRecordResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QuerySmsAppIcpRecordResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<QuerySmsAppIcpRecordResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<QuerySmsAppIcpRecordResponseBody::Data>) };
    inline vector<QuerySmsAppIcpRecordResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<QuerySmsAppIcpRecordResponseBody::Data>) };
    inline QuerySmsAppIcpRecordResponseBody& setData(const vector<QuerySmsAppIcpRecordResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QuerySmsAppIcpRecordResponseBody& setData(vector<QuerySmsAppIcpRecordResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QuerySmsAppIcpRecordResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QuerySmsAppIcpRecordResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QuerySmsAppIcpRecordResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<vector<QuerySmsAppIcpRecordResponseBody::Data>> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
