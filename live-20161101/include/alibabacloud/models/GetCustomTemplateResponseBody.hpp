// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCUSTOMTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCUSTOMTEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class GetCustomTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCustomTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CustomTemplate, customTemplate_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Template, template_);
    };
    friend void from_json(const Darabonba::Json& j, GetCustomTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomTemplate, customTemplate_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Template, template_);
    };
    GetCustomTemplateResponseBody() = default ;
    GetCustomTemplateResponseBody(const GetCustomTemplateResponseBody &) = default ;
    GetCustomTemplateResponseBody(GetCustomTemplateResponseBody &&) = default ;
    GetCustomTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCustomTemplateResponseBody() = default ;
    GetCustomTemplateResponseBody& operator=(const GetCustomTemplateResponseBody &) = default ;
    GetCustomTemplateResponseBody& operator=(GetCustomTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customTemplate_ == nullptr
        && return this->requestId_ == nullptr && return this->template_ == nullptr; };
    // customTemplate Field Functions 
    bool hasCustomTemplate() const { return this->customTemplate_ != nullptr;};
    void deleteCustomTemplate() { this->customTemplate_ = nullptr;};
    inline string customTemplate() const { DARABONBA_PTR_GET_DEFAULT(customTemplate_, "") };
    inline GetCustomTemplateResponseBody& setCustomTemplate(string customTemplate) { DARABONBA_PTR_SET_VALUE(customTemplate_, customTemplate) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCustomTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // template Field Functions 
    bool hasTemplate() const { return this->template_ != nullptr;};
    void deleteTemplate() { this->template_ = nullptr;};
    inline string _template() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
    inline GetCustomTemplateResponseBody& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


  protected:
    // The configurations of the template.
    std::shared_ptr<string> customTemplate_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The name of the template.
    std::shared_ptr<string> template_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
