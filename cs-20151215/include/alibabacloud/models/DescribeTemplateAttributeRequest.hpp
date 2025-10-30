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
    inline string templateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
    inline DescribeTemplateAttributeRequest& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


  protected:
    // The type of template. The value can be a custom value.
    // 
    // *   If the parameter is set to `kubernetes`, the template is displayed on the Templates page in the console.
    // *   If the parameter is set to `compose`, the template is displayed on the Container Service - Swarm page in the console. Container Service for Swarm is deprecated.
    // *   If the value of the parameter is not `kubernetes`, the template is not displayed on the Templates page in the console. We recommend that you set the parameter to `kubernetes`.
    // 
    // Default value: `kubernetes`.
    std::shared_ptr<string> templateType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
