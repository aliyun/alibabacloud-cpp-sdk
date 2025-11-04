// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECUSTOMTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATECUSTOMTEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateCustomTemplateResponseBodyCustomTemplate.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class CreateCustomTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCustomTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CustomTemplate, customTemplate_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCustomTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomTemplate, customTemplate_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateCustomTemplateResponseBody() = default ;
    CreateCustomTemplateResponseBody(const CreateCustomTemplateResponseBody &) = default ;
    CreateCustomTemplateResponseBody(CreateCustomTemplateResponseBody &&) = default ;
    CreateCustomTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCustomTemplateResponseBody() = default ;
    CreateCustomTemplateResponseBody& operator=(const CreateCustomTemplateResponseBody &) = default ;
    CreateCustomTemplateResponseBody& operator=(CreateCustomTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customTemplate_ == nullptr
        && return this->requestId_ == nullptr; };
    // customTemplate Field Functions 
    bool hasCustomTemplate() const { return this->customTemplate_ != nullptr;};
    void deleteCustomTemplate() { this->customTemplate_ = nullptr;};
    inline const CreateCustomTemplateResponseBodyCustomTemplate & customTemplate() const { DARABONBA_PTR_GET_CONST(customTemplate_, CreateCustomTemplateResponseBodyCustomTemplate) };
    inline CreateCustomTemplateResponseBodyCustomTemplate customTemplate() { DARABONBA_PTR_GET(customTemplate_, CreateCustomTemplateResponseBodyCustomTemplate) };
    inline CreateCustomTemplateResponseBody& setCustomTemplate(const CreateCustomTemplateResponseBodyCustomTemplate & customTemplate) { DARABONBA_PTR_SET_VALUE(customTemplate_, customTemplate) };
    inline CreateCustomTemplateResponseBody& setCustomTemplate(CreateCustomTemplateResponseBodyCustomTemplate && customTemplate) { DARABONBA_PTR_SET_RVALUE(customTemplate_, customTemplate) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateCustomTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The template information.
    std::shared_ptr<CreateCustomTemplateResponseBodyCustomTemplate> customTemplate_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
