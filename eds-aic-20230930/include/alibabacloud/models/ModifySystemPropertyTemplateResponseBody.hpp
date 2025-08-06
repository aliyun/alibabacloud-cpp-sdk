// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSYSTEMPROPERTYTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSYSTEMPROPERTYTEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class ModifySystemPropertyTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifySystemPropertyTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifySystemPropertyTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    ModifySystemPropertyTemplateResponseBody() = default ;
    ModifySystemPropertyTemplateResponseBody(const ModifySystemPropertyTemplateResponseBody &) = default ;
    ModifySystemPropertyTemplateResponseBody(ModifySystemPropertyTemplateResponseBody &&) = default ;
    ModifySystemPropertyTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifySystemPropertyTemplateResponseBody() = default ;
    ModifySystemPropertyTemplateResponseBody& operator=(const ModifySystemPropertyTemplateResponseBody &) = default ;
    ModifySystemPropertyTemplateResponseBody& operator=(ModifySystemPropertyTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->templateId_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifySystemPropertyTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline ModifySystemPropertyTemplateResponseBody& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> templateId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
