// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPLICATIONTEMPLATERESPONSEBODYAPPLICATIONTEMPLATE_HPP_
#define ALIBABACLOUD_MODELS_GETAPPLICATIONTEMPLATERESPONSEBODYAPPLICATIONTEMPLATE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetApplicationTemplateResponseBodyApplicationTemplateSaleInfo.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetApplicationTemplateResponseBodyApplicationTemplate : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApplicationTemplateResponseBodyApplicationTemplate& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GetApplicationTemplateResponseBodyApplicationTemplate& obj) { 
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
    GetApplicationTemplateResponseBodyApplicationTemplate() = default ;
    GetApplicationTemplateResponseBodyApplicationTemplate(const GetApplicationTemplateResponseBodyApplicationTemplate &) = default ;
    GetApplicationTemplateResponseBodyApplicationTemplate(GetApplicationTemplateResponseBodyApplicationTemplate &&) = default ;
    GetApplicationTemplateResponseBodyApplicationTemplate(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApplicationTemplateResponseBodyApplicationTemplate() = default ;
    GetApplicationTemplateResponseBodyApplicationTemplate& operator=(const GetApplicationTemplateResponseBodyApplicationTemplate &) = default ;
    GetApplicationTemplateResponseBodyApplicationTemplate& operator=(GetApplicationTemplateResponseBodyApplicationTemplate &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationTemplateId_ == nullptr
        && return this->applicationTemplateName_ == nullptr && return this->createTime_ == nullptr && return this->description_ == nullptr && return this->helpDocumentUrl_ == nullptr && return this->logoUrl_ == nullptr
        && return this->managedServiceCode_ == nullptr && return this->saleInfo_ == nullptr && return this->serviceConsoleUrl_ == nullptr && return this->serviceManaged_ == nullptr && return this->ssoTypes_ == nullptr
        && return this->updateTime_ == nullptr; };
    // applicationTemplateId Field Functions 
    bool hasApplicationTemplateId() const { return this->applicationTemplateId_ != nullptr;};
    void deleteApplicationTemplateId() { this->applicationTemplateId_ = nullptr;};
    inline string applicationTemplateId() const { DARABONBA_PTR_GET_DEFAULT(applicationTemplateId_, "") };
    inline GetApplicationTemplateResponseBodyApplicationTemplate& setApplicationTemplateId(string applicationTemplateId) { DARABONBA_PTR_SET_VALUE(applicationTemplateId_, applicationTemplateId) };


    // applicationTemplateName Field Functions 
    bool hasApplicationTemplateName() const { return this->applicationTemplateName_ != nullptr;};
    void deleteApplicationTemplateName() { this->applicationTemplateName_ = nullptr;};
    inline string applicationTemplateName() const { DARABONBA_PTR_GET_DEFAULT(applicationTemplateName_, "") };
    inline GetApplicationTemplateResponseBodyApplicationTemplate& setApplicationTemplateName(string applicationTemplateName) { DARABONBA_PTR_SET_VALUE(applicationTemplateName_, applicationTemplateName) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline GetApplicationTemplateResponseBodyApplicationTemplate& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetApplicationTemplateResponseBodyApplicationTemplate& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // helpDocumentUrl Field Functions 
    bool hasHelpDocumentUrl() const { return this->helpDocumentUrl_ != nullptr;};
    void deleteHelpDocumentUrl() { this->helpDocumentUrl_ = nullptr;};
    inline string helpDocumentUrl() const { DARABONBA_PTR_GET_DEFAULT(helpDocumentUrl_, "") };
    inline GetApplicationTemplateResponseBodyApplicationTemplate& setHelpDocumentUrl(string helpDocumentUrl) { DARABONBA_PTR_SET_VALUE(helpDocumentUrl_, helpDocumentUrl) };


    // logoUrl Field Functions 
    bool hasLogoUrl() const { return this->logoUrl_ != nullptr;};
    void deleteLogoUrl() { this->logoUrl_ = nullptr;};
    inline string logoUrl() const { DARABONBA_PTR_GET_DEFAULT(logoUrl_, "") };
    inline GetApplicationTemplateResponseBodyApplicationTemplate& setLogoUrl(string logoUrl) { DARABONBA_PTR_SET_VALUE(logoUrl_, logoUrl) };


    // managedServiceCode Field Functions 
    bool hasManagedServiceCode() const { return this->managedServiceCode_ != nullptr;};
    void deleteManagedServiceCode() { this->managedServiceCode_ = nullptr;};
    inline string managedServiceCode() const { DARABONBA_PTR_GET_DEFAULT(managedServiceCode_, "") };
    inline GetApplicationTemplateResponseBodyApplicationTemplate& setManagedServiceCode(string managedServiceCode) { DARABONBA_PTR_SET_VALUE(managedServiceCode_, managedServiceCode) };


    // saleInfo Field Functions 
    bool hasSaleInfo() const { return this->saleInfo_ != nullptr;};
    void deleteSaleInfo() { this->saleInfo_ = nullptr;};
    inline const Models::GetApplicationTemplateResponseBodyApplicationTemplateSaleInfo & saleInfo() const { DARABONBA_PTR_GET_CONST(saleInfo_, Models::GetApplicationTemplateResponseBodyApplicationTemplateSaleInfo) };
    inline Models::GetApplicationTemplateResponseBodyApplicationTemplateSaleInfo saleInfo() { DARABONBA_PTR_GET(saleInfo_, Models::GetApplicationTemplateResponseBodyApplicationTemplateSaleInfo) };
    inline GetApplicationTemplateResponseBodyApplicationTemplate& setSaleInfo(const Models::GetApplicationTemplateResponseBodyApplicationTemplateSaleInfo & saleInfo) { DARABONBA_PTR_SET_VALUE(saleInfo_, saleInfo) };
    inline GetApplicationTemplateResponseBodyApplicationTemplate& setSaleInfo(Models::GetApplicationTemplateResponseBodyApplicationTemplateSaleInfo && saleInfo) { DARABONBA_PTR_SET_RVALUE(saleInfo_, saleInfo) };


    // serviceConsoleUrl Field Functions 
    bool hasServiceConsoleUrl() const { return this->serviceConsoleUrl_ != nullptr;};
    void deleteServiceConsoleUrl() { this->serviceConsoleUrl_ = nullptr;};
    inline string serviceConsoleUrl() const { DARABONBA_PTR_GET_DEFAULT(serviceConsoleUrl_, "") };
    inline GetApplicationTemplateResponseBodyApplicationTemplate& setServiceConsoleUrl(string serviceConsoleUrl) { DARABONBA_PTR_SET_VALUE(serviceConsoleUrl_, serviceConsoleUrl) };


    // serviceManaged Field Functions 
    bool hasServiceManaged() const { return this->serviceManaged_ != nullptr;};
    void deleteServiceManaged() { this->serviceManaged_ = nullptr;};
    inline bool serviceManaged() const { DARABONBA_PTR_GET_DEFAULT(serviceManaged_, false) };
    inline GetApplicationTemplateResponseBodyApplicationTemplate& setServiceManaged(bool serviceManaged) { DARABONBA_PTR_SET_VALUE(serviceManaged_, serviceManaged) };


    // ssoTypes Field Functions 
    bool hasSsoTypes() const { return this->ssoTypes_ != nullptr;};
    void deleteSsoTypes() { this->ssoTypes_ = nullptr;};
    inline const vector<string> & ssoTypes() const { DARABONBA_PTR_GET_CONST(ssoTypes_, vector<string>) };
    inline vector<string> ssoTypes() { DARABONBA_PTR_GET(ssoTypes_, vector<string>) };
    inline GetApplicationTemplateResponseBodyApplicationTemplate& setSsoTypes(const vector<string> & ssoTypes) { DARABONBA_PTR_SET_VALUE(ssoTypes_, ssoTypes) };
    inline GetApplicationTemplateResponseBodyApplicationTemplate& setSsoTypes(vector<string> && ssoTypes) { DARABONBA_PTR_SET_RVALUE(ssoTypes_, ssoTypes) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline GetApplicationTemplateResponseBodyApplicationTemplate& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // 应用模板Id
    std::shared_ptr<string> applicationTemplateId_ = nullptr;
    // 应用模板名称
    std::shared_ptr<string> applicationTemplateName_ = nullptr;
    // 应用模板创建时间
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // 应用模板描述信息
    std::shared_ptr<string> description_ = nullptr;
    // 应用模板对应帮助文档地址
    std::shared_ptr<string> helpDocumentUrl_ = nullptr;
    // 应用模板Logo地址
    std::shared_ptr<string> logoUrl_ = nullptr;
    // 托管应用模板的云产品ServiceCode。当且仅当ServiceManaged为true是返回。
    std::shared_ptr<string> managedServiceCode_ = nullptr;
    // 应用模板售卖信息
    std::shared_ptr<Models::GetApplicationTemplateResponseBodyApplicationTemplateSaleInfo> saleInfo_ = nullptr;
    // 托管应用模板的云产品控制台地址。当且仅当ServiceManaged为true是返回。
    std::shared_ptr<string> serviceConsoleUrl_ = nullptr;
    // 应用模板是否被云产品托管。
    std::shared_ptr<bool> serviceManaged_ = nullptr;
    // 支持SSO协议
    std::shared_ptr<vector<string>> ssoTypes_ = nullptr;
    // 应用模板更新时间
    std::shared_ptr<int64_t> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
