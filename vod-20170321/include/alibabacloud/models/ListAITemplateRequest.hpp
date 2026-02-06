// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAITEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAITEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListAITemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAITemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TemplateType, templateType_);
    };
    friend void from_json(const Darabonba::Json& j, ListAITemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TemplateType, templateType_);
    };
    ListAITemplateRequest() = default ;
    ListAITemplateRequest(const ListAITemplateRequest &) = default ;
    ListAITemplateRequest(ListAITemplateRequest &&) = default ;
    ListAITemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAITemplateRequest() = default ;
    ListAITemplateRequest& operator=(const ListAITemplateRequest &) = default ;
    ListAITemplateRequest& operator=(ListAITemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->templateType_ == nullptr; };
    // templateType Field Functions 
    bool hasTemplateType() const { return this->templateType_ != nullptr;};
    void deleteTemplateType() { this->templateType_ = nullptr;};
    inline string getTemplateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
    inline ListAITemplateRequest& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


  protected:
    // The type of the AI template. Valid values:
    // 
    // *   **AIMediaAudit**: automated review
    // *   **AIImage**: smart thumbnail
    // 
    // This parameter is required.
    shared_ptr<string> templateType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
