// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PROMPTTEMPLATEITEM_HPP_
#define ALIBABACLOUD_MODELS_PROMPTTEMPLATEITEM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class PromptTemplateItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PromptTemplateItem& obj) { 
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(role, role_);
    };
    friend void from_json(const Darabonba::Json& j, PromptTemplateItem& obj) { 
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(role, role_);
    };
    PromptTemplateItem() = default ;
    PromptTemplateItem(const PromptTemplateItem &) = default ;
    PromptTemplateItem(PromptTemplateItem &&) = default ;
    PromptTemplateItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PromptTemplateItem() = default ;
    PromptTemplateItem& operator=(const PromptTemplateItem &) = default ;
    PromptTemplateItem& operator=(PromptTemplateItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && this->role_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline PromptTemplateItem& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline PromptTemplateItem& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


  protected:
    shared_ptr<string> content_ {};
    shared_ptr<string> role_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
