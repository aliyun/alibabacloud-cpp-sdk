// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETEMPLATEATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETEMPLATEATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeTemplateAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTemplateAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(template_type, templateType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTemplateAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(template_type, templateType_);
    };
    DescribeTemplateAttributeRequest() = default ;
    DescribeTemplateAttributeRequest(const DescribeTemplateAttributeRequest &) = default ;
    DescribeTemplateAttributeRequest(DescribeTemplateAttributeRequest &&) = default ;
    DescribeTemplateAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTemplateAttributeRequest() = default ;
    DescribeTemplateAttributeRequest& operator=(const DescribeTemplateAttributeRequest &) = default ;
    DescribeTemplateAttributeRequest& operator=(DescribeTemplateAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->templateType_ == nullptr; };
    // templateType Field Functions 
    bool hasTemplateType() const { return this->templateType_ != nullptr;};
    void deleteTemplateType() { this->templateType_ = nullptr;};
    inline string getTemplateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
    inline DescribeTemplateAttributeRequest& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


  protected:
    // The templatetype.
    // 
    // - If you set this parameter to `kubernetes`, the template is displayed on the Orchestration Templates page in the console.
    // 
    // - If you leave this parameter empty or set it to other values, the template is not displayed on the Orchestration Templates page in the console.
    // 
    // Settings this parameter to `kubernetes` is recommended.
    shared_ptr<string> templateType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
