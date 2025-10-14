// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEREPORTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEREPORTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateReportRequestContents.hpp>
#include <alibabacloud/models/CreateReportRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateReportRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateReportRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Contents, contents_);
      DARABONBA_PTR_TO_JSON(DdFrom, ddFrom_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_TO_JSON(ToChat, toChat_);
      DARABONBA_PTR_TO_JSON(ToCids, toCids_);
      DARABONBA_PTR_TO_JSON(ToUserids, toUserids_);
    };
    friend void from_json(const Darabonba::Json& j, CreateReportRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Contents, contents_);
      DARABONBA_PTR_FROM_JSON(DdFrom, ddFrom_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_FROM_JSON(ToChat, toChat_);
      DARABONBA_PTR_FROM_JSON(ToCids, toCids_);
      DARABONBA_PTR_FROM_JSON(ToUserids, toUserids_);
    };
    CreateReportRequest() = default ;
    CreateReportRequest(const CreateReportRequest &) = default ;
    CreateReportRequest(CreateReportRequest &&) = default ;
    CreateReportRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateReportRequest() = default ;
    CreateReportRequest& operator=(const CreateReportRequest &) = default ;
    CreateReportRequest& operator=(CreateReportRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contents_ == nullptr
        && return this->ddFrom_ == nullptr && return this->templateId_ == nullptr && return this->tenantContext_ == nullptr && return this->toChat_ == nullptr && return this->toCids_ == nullptr
        && return this->toUserids_ == nullptr; };
    // contents Field Functions 
    bool hasContents() const { return this->contents_ != nullptr;};
    void deleteContents() { this->contents_ = nullptr;};
    inline const vector<CreateReportRequestContents> & contents() const { DARABONBA_PTR_GET_CONST(contents_, vector<CreateReportRequestContents>) };
    inline vector<CreateReportRequestContents> contents() { DARABONBA_PTR_GET(contents_, vector<CreateReportRequestContents>) };
    inline CreateReportRequest& setContents(const vector<CreateReportRequestContents> & contents) { DARABONBA_PTR_SET_VALUE(contents_, contents) };
    inline CreateReportRequest& setContents(vector<CreateReportRequestContents> && contents) { DARABONBA_PTR_SET_RVALUE(contents_, contents) };


    // ddFrom Field Functions 
    bool hasDdFrom() const { return this->ddFrom_ != nullptr;};
    void deleteDdFrom() { this->ddFrom_ = nullptr;};
    inline string ddFrom() const { DARABONBA_PTR_GET_DEFAULT(ddFrom_, "") };
    inline CreateReportRequest& setDdFrom(string ddFrom) { DARABONBA_PTR_SET_VALUE(ddFrom_, ddFrom) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline CreateReportRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const CreateReportRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, CreateReportRequestTenantContext) };
    inline CreateReportRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, CreateReportRequestTenantContext) };
    inline CreateReportRequest& setTenantContext(const CreateReportRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline CreateReportRequest& setTenantContext(CreateReportRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


    // toChat Field Functions 
    bool hasToChat() const { return this->toChat_ != nullptr;};
    void deleteToChat() { this->toChat_ = nullptr;};
    inline bool toChat() const { DARABONBA_PTR_GET_DEFAULT(toChat_, false) };
    inline CreateReportRequest& setToChat(bool toChat) { DARABONBA_PTR_SET_VALUE(toChat_, toChat) };


    // toCids Field Functions 
    bool hasToCids() const { return this->toCids_ != nullptr;};
    void deleteToCids() { this->toCids_ = nullptr;};
    inline const vector<string> & toCids() const { DARABONBA_PTR_GET_CONST(toCids_, vector<string>) };
    inline vector<string> toCids() { DARABONBA_PTR_GET(toCids_, vector<string>) };
    inline CreateReportRequest& setToCids(const vector<string> & toCids) { DARABONBA_PTR_SET_VALUE(toCids_, toCids) };
    inline CreateReportRequest& setToCids(vector<string> && toCids) { DARABONBA_PTR_SET_RVALUE(toCids_, toCids) };


    // toUserids Field Functions 
    bool hasToUserids() const { return this->toUserids_ != nullptr;};
    void deleteToUserids() { this->toUserids_ = nullptr;};
    inline const vector<string> & toUserids() const { DARABONBA_PTR_GET_CONST(toUserids_, vector<string>) };
    inline vector<string> toUserids() { DARABONBA_PTR_GET(toUserids_, vector<string>) };
    inline CreateReportRequest& setToUserids(const vector<string> & toUserids) { DARABONBA_PTR_SET_VALUE(toUserids_, toUserids) };
    inline CreateReportRequest& setToUserids(vector<string> && toUserids) { DARABONBA_PTR_SET_RVALUE(toUserids_, toUserids) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<CreateReportRequestContents>> contents_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> ddFrom_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> templateId_ = nullptr;
    std::shared_ptr<CreateReportRequestTenantContext> tenantContext_ = nullptr;
    // This parameter is required.
    std::shared_ptr<bool> toChat_ = nullptr;
    std::shared_ptr<vector<string>> toCids_ = nullptr;
    std::shared_ptr<vector<string>> toUserids_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
