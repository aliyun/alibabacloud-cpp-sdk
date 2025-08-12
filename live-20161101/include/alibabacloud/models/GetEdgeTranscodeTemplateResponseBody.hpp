// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEDGETRANSCODETEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETEDGETRANSCODETEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetEdgeTranscodeTemplateResponseBodyTemplate.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class GetEdgeTranscodeTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEdgeTranscodeTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Template, template_);
    };
    friend void from_json(const Darabonba::Json& j, GetEdgeTranscodeTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Template, template_);
    };
    GetEdgeTranscodeTemplateResponseBody() = default ;
    GetEdgeTranscodeTemplateResponseBody(const GetEdgeTranscodeTemplateResponseBody &) = default ;
    GetEdgeTranscodeTemplateResponseBody(GetEdgeTranscodeTemplateResponseBody &&) = default ;
    GetEdgeTranscodeTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEdgeTranscodeTemplateResponseBody() = default ;
    GetEdgeTranscodeTemplateResponseBody& operator=(const GetEdgeTranscodeTemplateResponseBody &) = default ;
    GetEdgeTranscodeTemplateResponseBody& operator=(GetEdgeTranscodeTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->template_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetEdgeTranscodeTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // template Field Functions 
    bool hasTemplate() const { return this->template_ != nullptr;};
    void deleteTemplate() { this->template_ = nullptr;};
    inline const GetEdgeTranscodeTemplateResponseBodyTemplate & _template() const { DARABONBA_PTR_GET_CONST(template_, GetEdgeTranscodeTemplateResponseBodyTemplate) };
    inline GetEdgeTranscodeTemplateResponseBodyTemplate _template() { DARABONBA_PTR_GET(template_, GetEdgeTranscodeTemplateResponseBodyTemplate) };
    inline GetEdgeTranscodeTemplateResponseBody& setTemplate(const GetEdgeTranscodeTemplateResponseBodyTemplate & _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };
    inline GetEdgeTranscodeTemplateResponseBody& setTemplate(GetEdgeTranscodeTemplateResponseBodyTemplate && _template) { DARABONBA_PTR_SET_RVALUE(template_, _template) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The details of the edge transcoding template.
    std::shared_ptr<GetEdgeTranscodeTemplateResponseBodyTemplate> template_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
