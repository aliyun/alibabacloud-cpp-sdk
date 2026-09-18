// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDISTILLATIONTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDISTILLATIONTEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DistillationTemplate.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAIModelGallery20250630
{
namespace Models
{
  class GetDistillationTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDistillationTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DistillationTemplate, distillationTemplate_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDistillationTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DistillationTemplate, distillationTemplate_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetDistillationTemplateResponseBody() = default ;
    GetDistillationTemplateResponseBody(const GetDistillationTemplateResponseBody &) = default ;
    GetDistillationTemplateResponseBody(GetDistillationTemplateResponseBody &&) = default ;
    GetDistillationTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDistillationTemplateResponseBody() = default ;
    GetDistillationTemplateResponseBody& operator=(const GetDistillationTemplateResponseBody &) = default ;
    GetDistillationTemplateResponseBody& operator=(GetDistillationTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->distillationTemplate_ == nullptr
        && this->requestId_ == nullptr; };
    // distillationTemplate Field Functions 
    bool hasDistillationTemplate() const { return this->distillationTemplate_ != nullptr;};
    void deleteDistillationTemplate() { this->distillationTemplate_ = nullptr;};
    inline const DistillationTemplate & getDistillationTemplate() const { DARABONBA_PTR_GET_CONST(distillationTemplate_, DistillationTemplate) };
    inline DistillationTemplate getDistillationTemplate() { DARABONBA_PTR_GET(distillationTemplate_, DistillationTemplate) };
    inline GetDistillationTemplateResponseBody& setDistillationTemplate(const DistillationTemplate & distillationTemplate) { DARABONBA_PTR_SET_VALUE(distillationTemplate_, distillationTemplate) };
    inline GetDistillationTemplateResponseBody& setDistillationTemplate(DistillationTemplate && distillationTemplate) { DARABONBA_PTR_SET_RVALUE(distillationTemplate_, distillationTemplate) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDistillationTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The distillation template details.
    shared_ptr<DistillationTemplate> distillationTemplate_ {};
    // **Request ID**
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAIModelGallery20250630
#endif
