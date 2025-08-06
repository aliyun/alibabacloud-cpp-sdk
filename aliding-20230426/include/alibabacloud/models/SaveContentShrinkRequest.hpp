// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVECONTENTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVECONTENTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class SaveContentShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveContentShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Contents, contentsShrink_);
      DARABONBA_PTR_TO_JSON(DdFrom, ddFrom_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContextShrink_);
    };
    friend void from_json(const Darabonba::Json& j, SaveContentShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Contents, contentsShrink_);
      DARABONBA_PTR_FROM_JSON(DdFrom, ddFrom_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContextShrink_);
    };
    SaveContentShrinkRequest() = default ;
    SaveContentShrinkRequest(const SaveContentShrinkRequest &) = default ;
    SaveContentShrinkRequest(SaveContentShrinkRequest &&) = default ;
    SaveContentShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveContentShrinkRequest() = default ;
    SaveContentShrinkRequest& operator=(const SaveContentShrinkRequest &) = default ;
    SaveContentShrinkRequest& operator=(SaveContentShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->contentsShrink_ != nullptr
        && this->ddFrom_ != nullptr && this->templateId_ != nullptr && this->tenantContextShrink_ != nullptr; };
    // contentsShrink Field Functions 
    bool hasContentsShrink() const { return this->contentsShrink_ != nullptr;};
    void deleteContentsShrink() { this->contentsShrink_ = nullptr;};
    inline string contentsShrink() const { DARABONBA_PTR_GET_DEFAULT(contentsShrink_, "") };
    inline SaveContentShrinkRequest& setContentsShrink(string contentsShrink) { DARABONBA_PTR_SET_VALUE(contentsShrink_, contentsShrink) };


    // ddFrom Field Functions 
    bool hasDdFrom() const { return this->ddFrom_ != nullptr;};
    void deleteDdFrom() { this->ddFrom_ = nullptr;};
    inline string ddFrom() const { DARABONBA_PTR_GET_DEFAULT(ddFrom_, "") };
    inline SaveContentShrinkRequest& setDdFrom(string ddFrom) { DARABONBA_PTR_SET_VALUE(ddFrom_, ddFrom) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline SaveContentShrinkRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // tenantContextShrink Field Functions 
    bool hasTenantContextShrink() const { return this->tenantContextShrink_ != nullptr;};
    void deleteTenantContextShrink() { this->tenantContextShrink_ = nullptr;};
    inline string tenantContextShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantContextShrink_, "") };
    inline SaveContentShrinkRequest& setTenantContextShrink(string tenantContextShrink) { DARABONBA_PTR_SET_VALUE(tenantContextShrink_, tenantContextShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> contentsShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> ddFrom_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> templateId_ = nullptr;
    std::shared_ptr<string> tenantContextShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
