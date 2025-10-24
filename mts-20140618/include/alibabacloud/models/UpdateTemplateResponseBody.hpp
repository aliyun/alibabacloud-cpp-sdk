// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATETEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateTemplateResponseBodyTemplate.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class UpdateTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Template, template_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Template, template_);
    };
    UpdateTemplateResponseBody() = default ;
    UpdateTemplateResponseBody(const UpdateTemplateResponseBody &) = default ;
    UpdateTemplateResponseBody(UpdateTemplateResponseBody &&) = default ;
    UpdateTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTemplateResponseBody() = default ;
    UpdateTemplateResponseBody& operator=(const UpdateTemplateResponseBody &) = default ;
    UpdateTemplateResponseBody& operator=(UpdateTemplateResponseBody &&) = default ;
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
    inline UpdateTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // template Field Functions 
    bool hasTemplate() const { return this->template_ != nullptr;};
    void deleteTemplate() { this->template_ = nullptr;};
    inline const UpdateTemplateResponseBodyTemplate & _template() const { DARABONBA_PTR_GET_CONST(template_, UpdateTemplateResponseBodyTemplate) };
    inline UpdateTemplateResponseBodyTemplate _template() { DARABONBA_PTR_GET(template_, UpdateTemplateResponseBodyTemplate) };
    inline UpdateTemplateResponseBody& setTemplate(const UpdateTemplateResponseBodyTemplate & _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };
    inline UpdateTemplateResponseBody& setTemplate(UpdateTemplateResponseBodyTemplate && _template) { DARABONBA_PTR_SET_RVALUE(template_, _template) };


  protected:
    // The type of the transcoding template.
    std::shared_ptr<string> requestId_ = nullptr;
    // The type of the transcoding template.
    std::shared_ptr<UpdateTemplateResponseBodyTemplate> template_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
