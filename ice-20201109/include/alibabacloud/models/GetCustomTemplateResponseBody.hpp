// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCUSTOMTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCUSTOMTEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetCustomTemplateResponseBodyCustomTemplate.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetCustomTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCustomTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CustomTemplate, customTemplate_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCustomTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomTemplate, customTemplate_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
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
    virtual bool empty() const override { this->customTemplate_ != nullptr
        && this->requestId_ != nullptr; };
    // customTemplate Field Functions 
    bool hasCustomTemplate() const { return this->customTemplate_ != nullptr;};
    void deleteCustomTemplate() { this->customTemplate_ = nullptr;};
    inline const GetCustomTemplateResponseBodyCustomTemplate & customTemplate() const { DARABONBA_PTR_GET_CONST(customTemplate_, GetCustomTemplateResponseBodyCustomTemplate) };
    inline GetCustomTemplateResponseBodyCustomTemplate customTemplate() { DARABONBA_PTR_GET(customTemplate_, GetCustomTemplateResponseBodyCustomTemplate) };
    inline GetCustomTemplateResponseBody& setCustomTemplate(const GetCustomTemplateResponseBodyCustomTemplate & customTemplate) { DARABONBA_PTR_SET_VALUE(customTemplate_, customTemplate) };
    inline GetCustomTemplateResponseBody& setCustomTemplate(GetCustomTemplateResponseBodyCustomTemplate && customTemplate) { DARABONBA_PTR_SET_RVALUE(customTemplate_, customTemplate) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCustomTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The template information.
    std::shared_ptr<GetCustomTemplateResponseBodyCustomTemplate> customTemplate_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
