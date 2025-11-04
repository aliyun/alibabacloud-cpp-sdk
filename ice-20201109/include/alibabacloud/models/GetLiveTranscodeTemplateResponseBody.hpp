// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLIVETRANSCODETEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETLIVETRANSCODETEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetLiveTranscodeTemplateResponseBodyTemplateContent.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetLiveTranscodeTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLiveTranscodeTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TemplateContent, templateContent_);
    };
    friend void from_json(const Darabonba::Json& j, GetLiveTranscodeTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TemplateContent, templateContent_);
    };
    GetLiveTranscodeTemplateResponseBody() = default ;
    GetLiveTranscodeTemplateResponseBody(const GetLiveTranscodeTemplateResponseBody &) = default ;
    GetLiveTranscodeTemplateResponseBody(GetLiveTranscodeTemplateResponseBody &&) = default ;
    GetLiveTranscodeTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLiveTranscodeTemplateResponseBody() = default ;
    GetLiveTranscodeTemplateResponseBody& operator=(const GetLiveTranscodeTemplateResponseBody &) = default ;
    GetLiveTranscodeTemplateResponseBody& operator=(GetLiveTranscodeTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->templateContent_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetLiveTranscodeTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // templateContent Field Functions 
    bool hasTemplateContent() const { return this->templateContent_ != nullptr;};
    void deleteTemplateContent() { this->templateContent_ = nullptr;};
    inline const GetLiveTranscodeTemplateResponseBodyTemplateContent & templateContent() const { DARABONBA_PTR_GET_CONST(templateContent_, GetLiveTranscodeTemplateResponseBodyTemplateContent) };
    inline GetLiveTranscodeTemplateResponseBodyTemplateContent templateContent() { DARABONBA_PTR_GET(templateContent_, GetLiveTranscodeTemplateResponseBodyTemplateContent) };
    inline GetLiveTranscodeTemplateResponseBody& setTemplateContent(const GetLiveTranscodeTemplateResponseBodyTemplateContent & templateContent) { DARABONBA_PTR_SET_VALUE(templateContent_, templateContent) };
    inline GetLiveTranscodeTemplateResponseBody& setTemplateContent(GetLiveTranscodeTemplateResponseBodyTemplateContent && templateContent) { DARABONBA_PTR_SET_RVALUE(templateContent_, templateContent) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The content of the template.
    std::shared_ptr<GetLiveTranscodeTemplateResponseBodyTemplateContent> templateContent_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
