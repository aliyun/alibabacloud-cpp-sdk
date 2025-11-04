// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetTemplateResponseBodyTemplate.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Template, template_);
    };
    friend void from_json(const Darabonba::Json& j, GetTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Template, template_);
    };
    GetTemplateResponseBody() = default ;
    GetTemplateResponseBody(const GetTemplateResponseBody &) = default ;
    GetTemplateResponseBody(GetTemplateResponseBody &&) = default ;
    GetTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTemplateResponseBody() = default ;
    GetTemplateResponseBody& operator=(const GetTemplateResponseBody &) = default ;
    GetTemplateResponseBody& operator=(GetTemplateResponseBody &&) = default ;
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
    inline GetTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // template Field Functions 
    bool hasTemplate() const { return this->template_ != nullptr;};
    void deleteTemplate() { this->template_ = nullptr;};
    inline const GetTemplateResponseBodyTemplate & _template() const { DARABONBA_PTR_GET_CONST(template_, GetTemplateResponseBodyTemplate) };
    inline GetTemplateResponseBodyTemplate _template() { DARABONBA_PTR_GET(template_, GetTemplateResponseBodyTemplate) };
    inline GetTemplateResponseBody& setTemplate(const GetTemplateResponseBodyTemplate & _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };
    inline GetTemplateResponseBody& setTemplate(GetTemplateResponseBodyTemplate && _template) { DARABONBA_PTR_SET_RVALUE(template_, _template) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The template information.
    std::shared_ptr<GetTemplateResponseBodyTemplate> template_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
