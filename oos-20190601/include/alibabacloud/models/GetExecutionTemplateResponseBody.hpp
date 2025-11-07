// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEXECUTIONTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETEXECUTIONTEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetExecutionTemplateResponseBodyTemplate.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class GetExecutionTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetExecutionTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Template, template_);
    };
    friend void from_json(const Darabonba::Json& j, GetExecutionTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Template, template_);
    };
    GetExecutionTemplateResponseBody() = default ;
    GetExecutionTemplateResponseBody(const GetExecutionTemplateResponseBody &) = default ;
    GetExecutionTemplateResponseBody(GetExecutionTemplateResponseBody &&) = default ;
    GetExecutionTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetExecutionTemplateResponseBody() = default ;
    GetExecutionTemplateResponseBody& operator=(const GetExecutionTemplateResponseBody &) = default ;
    GetExecutionTemplateResponseBody& operator=(GetExecutionTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->requestId_ == nullptr && return this->template_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline GetExecutionTemplateResponseBody& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetExecutionTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // template Field Functions 
    bool hasTemplate() const { return this->template_ != nullptr;};
    void deleteTemplate() { this->template_ = nullptr;};
    inline const GetExecutionTemplateResponseBodyTemplate & _template() const { DARABONBA_PTR_GET_CONST(template_, GetExecutionTemplateResponseBodyTemplate) };
    inline GetExecutionTemplateResponseBodyTemplate _template() { DARABONBA_PTR_GET(template_, GetExecutionTemplateResponseBodyTemplate) };
    inline GetExecutionTemplateResponseBody& setTemplate(const GetExecutionTemplateResponseBodyTemplate & _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };
    inline GetExecutionTemplateResponseBody& setTemplate(GetExecutionTemplateResponseBodyTemplate && _template) { DARABONBA_PTR_SET_RVALUE(template_, _template) };


  protected:
    // The content of the template.
    std::shared_ptr<string> content_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The metadata of the template.
    std::shared_ptr<GetExecutionTemplateResponseBodyTemplate> template_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
