// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEFENSETEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEFENSETEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDefenseTemplateResponseBodyTemplate.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeDefenseTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDefenseTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Template, template_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDefenseTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Template, template_);
    };
    DescribeDefenseTemplateResponseBody() = default ;
    DescribeDefenseTemplateResponseBody(const DescribeDefenseTemplateResponseBody &) = default ;
    DescribeDefenseTemplateResponseBody(DescribeDefenseTemplateResponseBody &&) = default ;
    DescribeDefenseTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDefenseTemplateResponseBody() = default ;
    DescribeDefenseTemplateResponseBody& operator=(const DescribeDefenseTemplateResponseBody &) = default ;
    DescribeDefenseTemplateResponseBody& operator=(DescribeDefenseTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->template_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDefenseTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // template Field Functions 
    bool hasTemplate() const { return this->template_ != nullptr;};
    void deleteTemplate() { this->template_ = nullptr;};
    inline const DescribeDefenseTemplateResponseBodyTemplate & _template() const { DARABONBA_PTR_GET_CONST(template_, DescribeDefenseTemplateResponseBodyTemplate) };
    inline DescribeDefenseTemplateResponseBodyTemplate _template() { DARABONBA_PTR_GET(template_, DescribeDefenseTemplateResponseBodyTemplate) };
    inline DescribeDefenseTemplateResponseBody& setTemplate(const DescribeDefenseTemplateResponseBodyTemplate & _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };
    inline DescribeDefenseTemplateResponseBody& setTemplate(DescribeDefenseTemplateResponseBodyTemplate && _template) { DARABONBA_PTR_SET_RVALUE(template_, _template) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the template.
    std::shared_ptr<DescribeDefenseTemplateResponseBodyTemplate> template_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
