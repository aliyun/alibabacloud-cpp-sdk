// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETADVANCEDQUERYTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETADVANCEDQUERYTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Actiontrail20200706
{
namespace Models
{
  class GetAdvancedQueryTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAdvancedQueryTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAdvancedQueryTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    GetAdvancedQueryTemplateRequest() = default ;
    GetAdvancedQueryTemplateRequest(const GetAdvancedQueryTemplateRequest &) = default ;
    GetAdvancedQueryTemplateRequest(GetAdvancedQueryTemplateRequest &&) = default ;
    GetAdvancedQueryTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAdvancedQueryTemplateRequest() = default ;
    GetAdvancedQueryTemplateRequest& operator=(const GetAdvancedQueryTemplateRequest &) = default ;
    GetAdvancedQueryTemplateRequest& operator=(GetAdvancedQueryTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->templateId_ != nullptr; };
    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline GetAdvancedQueryTemplateRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> templateId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Actiontrail20200706
#endif
