// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVECONTENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVECONTENTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SaveContentRequestContents.hpp>
#include <alibabacloud/models/SaveContentRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class SaveContentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveContentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Contents, contents_);
      DARABONBA_PTR_TO_JSON(DdFrom, ddFrom_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
    };
    friend void from_json(const Darabonba::Json& j, SaveContentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Contents, contents_);
      DARABONBA_PTR_FROM_JSON(DdFrom, ddFrom_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
    };
    SaveContentRequest() = default ;
    SaveContentRequest(const SaveContentRequest &) = default ;
    SaveContentRequest(SaveContentRequest &&) = default ;
    SaveContentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveContentRequest() = default ;
    SaveContentRequest& operator=(const SaveContentRequest &) = default ;
    SaveContentRequest& operator=(SaveContentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->contents_ != nullptr
        && this->ddFrom_ != nullptr && this->templateId_ != nullptr && this->tenantContext_ != nullptr; };
    // contents Field Functions 
    bool hasContents() const { return this->contents_ != nullptr;};
    void deleteContents() { this->contents_ = nullptr;};
    inline const vector<SaveContentRequestContents> & contents() const { DARABONBA_PTR_GET_CONST(contents_, vector<SaveContentRequestContents>) };
    inline vector<SaveContentRequestContents> contents() { DARABONBA_PTR_GET(contents_, vector<SaveContentRequestContents>) };
    inline SaveContentRequest& setContents(const vector<SaveContentRequestContents> & contents) { DARABONBA_PTR_SET_VALUE(contents_, contents) };
    inline SaveContentRequest& setContents(vector<SaveContentRequestContents> && contents) { DARABONBA_PTR_SET_RVALUE(contents_, contents) };


    // ddFrom Field Functions 
    bool hasDdFrom() const { return this->ddFrom_ != nullptr;};
    void deleteDdFrom() { this->ddFrom_ = nullptr;};
    inline string ddFrom() const { DARABONBA_PTR_GET_DEFAULT(ddFrom_, "") };
    inline SaveContentRequest& setDdFrom(string ddFrom) { DARABONBA_PTR_SET_VALUE(ddFrom_, ddFrom) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline SaveContentRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const SaveContentRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, SaveContentRequestTenantContext) };
    inline SaveContentRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, SaveContentRequestTenantContext) };
    inline SaveContentRequest& setTenantContext(const SaveContentRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline SaveContentRequest& setTenantContext(SaveContentRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<SaveContentRequestContents>> contents_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> ddFrom_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> templateId_ = nullptr;
    std::shared_ptr<SaveContentRequestTenantContext> tenantContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
