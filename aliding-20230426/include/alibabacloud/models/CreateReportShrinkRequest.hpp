// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEREPORTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEREPORTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateReportShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateReportShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Contents, contentsShrink_);
      DARABONBA_PTR_TO_JSON(DdFrom, ddFrom_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_TO_JSON(ToChat, toChat_);
      DARABONBA_PTR_TO_JSON(ToCids, toCidsShrink_);
      DARABONBA_PTR_TO_JSON(ToUserids, toUseridsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateReportShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Contents, contentsShrink_);
      DARABONBA_PTR_FROM_JSON(DdFrom, ddFrom_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_FROM_JSON(ToChat, toChat_);
      DARABONBA_PTR_FROM_JSON(ToCids, toCidsShrink_);
      DARABONBA_PTR_FROM_JSON(ToUserids, toUseridsShrink_);
    };
    CreateReportShrinkRequest() = default ;
    CreateReportShrinkRequest(const CreateReportShrinkRequest &) = default ;
    CreateReportShrinkRequest(CreateReportShrinkRequest &&) = default ;
    CreateReportShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateReportShrinkRequest() = default ;
    CreateReportShrinkRequest& operator=(const CreateReportShrinkRequest &) = default ;
    CreateReportShrinkRequest& operator=(CreateReportShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contentsShrink_ == nullptr
        && this->ddFrom_ == nullptr && this->templateId_ == nullptr && this->tenantContextShrink_ == nullptr && this->toChat_ == nullptr && this->toCidsShrink_ == nullptr
        && this->toUseridsShrink_ == nullptr; };
    // contentsShrink Field Functions 
    bool hasContentsShrink() const { return this->contentsShrink_ != nullptr;};
    void deleteContentsShrink() { this->contentsShrink_ = nullptr;};
    inline string getContentsShrink() const { DARABONBA_PTR_GET_DEFAULT(contentsShrink_, "") };
    inline CreateReportShrinkRequest& setContentsShrink(string contentsShrink) { DARABONBA_PTR_SET_VALUE(contentsShrink_, contentsShrink) };


    // ddFrom Field Functions 
    bool hasDdFrom() const { return this->ddFrom_ != nullptr;};
    void deleteDdFrom() { this->ddFrom_ = nullptr;};
    inline string getDdFrom() const { DARABONBA_PTR_GET_DEFAULT(ddFrom_, "") };
    inline CreateReportShrinkRequest& setDdFrom(string ddFrom) { DARABONBA_PTR_SET_VALUE(ddFrom_, ddFrom) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline CreateReportShrinkRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // tenantContextShrink Field Functions 
    bool hasTenantContextShrink() const { return this->tenantContextShrink_ != nullptr;};
    void deleteTenantContextShrink() { this->tenantContextShrink_ = nullptr;};
    inline string getTenantContextShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantContextShrink_, "") };
    inline CreateReportShrinkRequest& setTenantContextShrink(string tenantContextShrink) { DARABONBA_PTR_SET_VALUE(tenantContextShrink_, tenantContextShrink) };


    // toChat Field Functions 
    bool hasToChat() const { return this->toChat_ != nullptr;};
    void deleteToChat() { this->toChat_ = nullptr;};
    inline bool getToChat() const { DARABONBA_PTR_GET_DEFAULT(toChat_, false) };
    inline CreateReportShrinkRequest& setToChat(bool toChat) { DARABONBA_PTR_SET_VALUE(toChat_, toChat) };


    // toCidsShrink Field Functions 
    bool hasToCidsShrink() const { return this->toCidsShrink_ != nullptr;};
    void deleteToCidsShrink() { this->toCidsShrink_ = nullptr;};
    inline string getToCidsShrink() const { DARABONBA_PTR_GET_DEFAULT(toCidsShrink_, "") };
    inline CreateReportShrinkRequest& setToCidsShrink(string toCidsShrink) { DARABONBA_PTR_SET_VALUE(toCidsShrink_, toCidsShrink) };


    // toUseridsShrink Field Functions 
    bool hasToUseridsShrink() const { return this->toUseridsShrink_ != nullptr;};
    void deleteToUseridsShrink() { this->toUseridsShrink_ = nullptr;};
    inline string getToUseridsShrink() const { DARABONBA_PTR_GET_DEFAULT(toUseridsShrink_, "") };
    inline CreateReportShrinkRequest& setToUseridsShrink(string toUseridsShrink) { DARABONBA_PTR_SET_VALUE(toUseridsShrink_, toUseridsShrink) };


  protected:
    // This parameter is required.
    shared_ptr<string> contentsShrink_ {};
    // This parameter is required.
    shared_ptr<string> ddFrom_ {};
    // This parameter is required.
    shared_ptr<string> templateId_ {};
    shared_ptr<string> tenantContextShrink_ {};
    // This parameter is required.
    shared_ptr<bool> toChat_ {};
    shared_ptr<string> toCidsShrink_ {};
    shared_ptr<string> toUseridsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
