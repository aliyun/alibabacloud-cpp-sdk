// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPLICATIONTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAPPLICATIONTEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetApplicationTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApplicationTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationTemplate, applicationTemplate_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetApplicationTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationTemplate, applicationTemplate_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetApplicationTemplateResponseBody() = default ;
    GetApplicationTemplateResponseBody(const GetApplicationTemplateResponseBody &) = default ;
    GetApplicationTemplateResponseBody(GetApplicationTemplateResponseBody &&) = default ;
    GetApplicationTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApplicationTemplateResponseBody() = default ;
    GetApplicationTemplateResponseBody& operator=(const GetApplicationTemplateResponseBody &) = default ;
    GetApplicationTemplateResponseBody& operator=(GetApplicationTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ApplicationTemplate : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ApplicationTemplate& obj) { 
        DARABONBA_PTR_TO_JSON(ApplicationTemplateId, applicationTemplateId_);
        DARABONBA_PTR_TO_JSON(ApplicationTemplateName, applicationTemplateName_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(HelpDocumentUrl, helpDocumentUrl_);
        DARABONBA_PTR_TO_JSON(LogoUrl, logoUrl_);
        DARABONBA_PTR_TO_JSON(ManagedServiceCode, managedServiceCode_);
        DARABONBA_PTR_TO_JSON(SaleInfo, saleInfo_);
        DARABONBA_PTR_TO_JSON(ServiceConsoleUrl, serviceConsoleUrl_);
        DARABONBA_PTR_TO_JSON(ServiceManaged, serviceManaged_);
        DARABONBA_PTR_TO_JSON(SsoTypes, ssoTypes_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, ApplicationTemplate& obj) { 
        DARABONBA_PTR_FROM_JSON(ApplicationTemplateId, applicationTemplateId_);
        DARABONBA_PTR_FROM_JSON(ApplicationTemplateName, applicationTemplateName_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(HelpDocumentUrl, helpDocumentUrl_);
        DARABONBA_PTR_FROM_JSON(LogoUrl, logoUrl_);
        DARABONBA_PTR_FROM_JSON(ManagedServiceCode, managedServiceCode_);
        DARABONBA_PTR_FROM_JSON(SaleInfo, saleInfo_);
        DARABONBA_PTR_FROM_JSON(ServiceConsoleUrl, serviceConsoleUrl_);
        DARABONBA_PTR_FROM_JSON(ServiceManaged, serviceManaged_);
        DARABONBA_PTR_FROM_JSON(SsoTypes, ssoTypes_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      ApplicationTemplate() = default ;
      ApplicationTemplate(const ApplicationTemplate &) = default ;
      ApplicationTemplate(ApplicationTemplate &&) = default ;
      ApplicationTemplate(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ApplicationTemplate() = default ;
      ApplicationTemplate& operator=(const ApplicationTemplate &) = default ;
      ApplicationTemplate& operator=(ApplicationTemplate &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SaleInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SaleInfo& obj) { 
          DARABONBA_PTR_TO_JSON(AlwaysFree, alwaysFree_);
        };
        friend void from_json(const Darabonba::Json& j, SaleInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(AlwaysFree, alwaysFree_);
        };
        SaleInfo() = default ;
        SaleInfo(const SaleInfo &) = default ;
        SaleInfo(SaleInfo &&) = default ;
        SaleInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SaleInfo() = default ;
        SaleInfo& operator=(const SaleInfo &) = default ;
        SaleInfo& operator=(SaleInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->alwaysFree_ == nullptr; };
        // alwaysFree Field Functions 
        bool hasAlwaysFree() const { return this->alwaysFree_ != nullptr;};
        void deleteAlwaysFree() { this->alwaysFree_ = nullptr;};
        inline bool getAlwaysFree() const { DARABONBA_PTR_GET_DEFAULT(alwaysFree_, false) };
        inline SaleInfo& setAlwaysFree(bool alwaysFree) { DARABONBA_PTR_SET_VALUE(alwaysFree_, alwaysFree) };


      protected:
        // 是否永久免费
        shared_ptr<bool> alwaysFree_ {};
      };

      virtual bool empty() const override { return this->applicationTemplateId_ == nullptr
        && this->applicationTemplateName_ == nullptr && this->createTime_ == nullptr && this->description_ == nullptr && this->helpDocumentUrl_ == nullptr && this->logoUrl_ == nullptr
        && this->managedServiceCode_ == nullptr && this->saleInfo_ == nullptr && this->serviceConsoleUrl_ == nullptr && this->serviceManaged_ == nullptr && this->ssoTypes_ == nullptr
        && this->updateTime_ == nullptr; };
      // applicationTemplateId Field Functions 
      bool hasApplicationTemplateId() const { return this->applicationTemplateId_ != nullptr;};
      void deleteApplicationTemplateId() { this->applicationTemplateId_ = nullptr;};
      inline string getApplicationTemplateId() const { DARABONBA_PTR_GET_DEFAULT(applicationTemplateId_, "") };
      inline ApplicationTemplate& setApplicationTemplateId(string applicationTemplateId) { DARABONBA_PTR_SET_VALUE(applicationTemplateId_, applicationTemplateId) };


      // applicationTemplateName Field Functions 
      bool hasApplicationTemplateName() const { return this->applicationTemplateName_ != nullptr;};
      void deleteApplicationTemplateName() { this->applicationTemplateName_ = nullptr;};
      inline string getApplicationTemplateName() const { DARABONBA_PTR_GET_DEFAULT(applicationTemplateName_, "") };
      inline ApplicationTemplate& setApplicationTemplateName(string applicationTemplateName) { DARABONBA_PTR_SET_VALUE(applicationTemplateName_, applicationTemplateName) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline ApplicationTemplate& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ApplicationTemplate& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // helpDocumentUrl Field Functions 
      bool hasHelpDocumentUrl() const { return this->helpDocumentUrl_ != nullptr;};
      void deleteHelpDocumentUrl() { this->helpDocumentUrl_ = nullptr;};
      inline string getHelpDocumentUrl() const { DARABONBA_PTR_GET_DEFAULT(helpDocumentUrl_, "") };
      inline ApplicationTemplate& setHelpDocumentUrl(string helpDocumentUrl) { DARABONBA_PTR_SET_VALUE(helpDocumentUrl_, helpDocumentUrl) };


      // logoUrl Field Functions 
      bool hasLogoUrl() const { return this->logoUrl_ != nullptr;};
      void deleteLogoUrl() { this->logoUrl_ = nullptr;};
      inline string getLogoUrl() const { DARABONBA_PTR_GET_DEFAULT(logoUrl_, "") };
      inline ApplicationTemplate& setLogoUrl(string logoUrl) { DARABONBA_PTR_SET_VALUE(logoUrl_, logoUrl) };


      // managedServiceCode Field Functions 
      bool hasManagedServiceCode() const { return this->managedServiceCode_ != nullptr;};
      void deleteManagedServiceCode() { this->managedServiceCode_ = nullptr;};
      inline string getManagedServiceCode() const { DARABONBA_PTR_GET_DEFAULT(managedServiceCode_, "") };
      inline ApplicationTemplate& setManagedServiceCode(string managedServiceCode) { DARABONBA_PTR_SET_VALUE(managedServiceCode_, managedServiceCode) };


      // saleInfo Field Functions 
      bool hasSaleInfo() const { return this->saleInfo_ != nullptr;};
      void deleteSaleInfo() { this->saleInfo_ = nullptr;};
      inline const ApplicationTemplate::SaleInfo & getSaleInfo() const { DARABONBA_PTR_GET_CONST(saleInfo_, ApplicationTemplate::SaleInfo) };
      inline ApplicationTemplate::SaleInfo getSaleInfo() { DARABONBA_PTR_GET(saleInfo_, ApplicationTemplate::SaleInfo) };
      inline ApplicationTemplate& setSaleInfo(const ApplicationTemplate::SaleInfo & saleInfo) { DARABONBA_PTR_SET_VALUE(saleInfo_, saleInfo) };
      inline ApplicationTemplate& setSaleInfo(ApplicationTemplate::SaleInfo && saleInfo) { DARABONBA_PTR_SET_RVALUE(saleInfo_, saleInfo) };


      // serviceConsoleUrl Field Functions 
      bool hasServiceConsoleUrl() const { return this->serviceConsoleUrl_ != nullptr;};
      void deleteServiceConsoleUrl() { this->serviceConsoleUrl_ = nullptr;};
      inline string getServiceConsoleUrl() const { DARABONBA_PTR_GET_DEFAULT(serviceConsoleUrl_, "") };
      inline ApplicationTemplate& setServiceConsoleUrl(string serviceConsoleUrl) { DARABONBA_PTR_SET_VALUE(serviceConsoleUrl_, serviceConsoleUrl) };


      // serviceManaged Field Functions 
      bool hasServiceManaged() const { return this->serviceManaged_ != nullptr;};
      void deleteServiceManaged() { this->serviceManaged_ = nullptr;};
      inline bool getServiceManaged() const { DARABONBA_PTR_GET_DEFAULT(serviceManaged_, false) };
      inline ApplicationTemplate& setServiceManaged(bool serviceManaged) { DARABONBA_PTR_SET_VALUE(serviceManaged_, serviceManaged) };


      // ssoTypes Field Functions 
      bool hasSsoTypes() const { return this->ssoTypes_ != nullptr;};
      void deleteSsoTypes() { this->ssoTypes_ = nullptr;};
      inline const vector<string> & getSsoTypes() const { DARABONBA_PTR_GET_CONST(ssoTypes_, vector<string>) };
      inline vector<string> getSsoTypes() { DARABONBA_PTR_GET(ssoTypes_, vector<string>) };
      inline ApplicationTemplate& setSsoTypes(const vector<string> & ssoTypes) { DARABONBA_PTR_SET_VALUE(ssoTypes_, ssoTypes) };
      inline ApplicationTemplate& setSsoTypes(vector<string> && ssoTypes) { DARABONBA_PTR_SET_RVALUE(ssoTypes_, ssoTypes) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline ApplicationTemplate& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // 应用模板Id
      shared_ptr<string> applicationTemplateId_ {};
      // 应用模板名称
      shared_ptr<string> applicationTemplateName_ {};
      // 应用模板创建时间
      shared_ptr<int64_t> createTime_ {};
      // 应用模板描述信息
      shared_ptr<string> description_ {};
      // 应用模板对应帮助文档地址
      shared_ptr<string> helpDocumentUrl_ {};
      // 应用模板Logo地址
      shared_ptr<string> logoUrl_ {};
      // 托管应用模板的云产品ServiceCode。当且仅当ServiceManaged为true是返回。
      shared_ptr<string> managedServiceCode_ {};
      // 应用模板售卖信息
      shared_ptr<ApplicationTemplate::SaleInfo> saleInfo_ {};
      // 托管应用模板的云产品控制台地址。当且仅当ServiceManaged为true是返回。
      shared_ptr<string> serviceConsoleUrl_ {};
      // 应用模板是否被云产品托管。
      shared_ptr<bool> serviceManaged_ {};
      // 支持SSO协议
      shared_ptr<vector<string>> ssoTypes_ {};
      // 应用模板更新时间
      shared_ptr<int64_t> updateTime_ {};
    };

    virtual bool empty() const override { return this->applicationTemplate_ == nullptr
        && this->requestId_ == nullptr; };
    // applicationTemplate Field Functions 
    bool hasApplicationTemplate() const { return this->applicationTemplate_ != nullptr;};
    void deleteApplicationTemplate() { this->applicationTemplate_ = nullptr;};
    inline const GetApplicationTemplateResponseBody::ApplicationTemplate & getApplicationTemplate() const { DARABONBA_PTR_GET_CONST(applicationTemplate_, GetApplicationTemplateResponseBody::ApplicationTemplate) };
    inline GetApplicationTemplateResponseBody::ApplicationTemplate getApplicationTemplate() { DARABONBA_PTR_GET(applicationTemplate_, GetApplicationTemplateResponseBody::ApplicationTemplate) };
    inline GetApplicationTemplateResponseBody& setApplicationTemplate(const GetApplicationTemplateResponseBody::ApplicationTemplate & applicationTemplate) { DARABONBA_PTR_SET_VALUE(applicationTemplate_, applicationTemplate) };
    inline GetApplicationTemplateResponseBody& setApplicationTemplate(GetApplicationTemplateResponseBody::ApplicationTemplate && applicationTemplate) { DARABONBA_PTR_SET_RVALUE(applicationTemplate_, applicationTemplate) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetApplicationTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetApplicationTemplateResponseBody::ApplicationTemplate> applicationTemplate_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
