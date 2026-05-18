// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATETEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class CreateTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    CreateTemplateResponseBody() = default ;
    CreateTemplateResponseBody(const CreateTemplateResponseBody &) = default ;
    CreateTemplateResponseBody(CreateTemplateResponseBody &&) = default ;
    CreateTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTemplateResponseBody() = default ;
    CreateTemplateResponseBody& operator=(const CreateTemplateResponseBody &) = default ;
    CreateTemplateResponseBody& operator=(CreateTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->templateId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline int32_t getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0) };
    inline CreateTemplateResponseBody& setTemplateId(int32_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    // idoftherequest
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> templateId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
