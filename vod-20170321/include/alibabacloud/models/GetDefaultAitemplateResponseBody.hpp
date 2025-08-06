// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEFAULTAITEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDEFAULTAITEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDefaultAITemplateResponseBodyTemplateInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetDefaultAITemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDefaultAITemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TemplateInfo, templateInfo_);
    };
    friend void from_json(const Darabonba::Json& j, GetDefaultAITemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TemplateInfo, templateInfo_);
    };
    GetDefaultAITemplateResponseBody() = default ;
    GetDefaultAITemplateResponseBody(const GetDefaultAITemplateResponseBody &) = default ;
    GetDefaultAITemplateResponseBody(GetDefaultAITemplateResponseBody &&) = default ;
    GetDefaultAITemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDefaultAITemplateResponseBody() = default ;
    GetDefaultAITemplateResponseBody& operator=(const GetDefaultAITemplateResponseBody &) = default ;
    GetDefaultAITemplateResponseBody& operator=(GetDefaultAITemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->templateInfo_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDefaultAITemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // templateInfo Field Functions 
    bool hasTemplateInfo() const { return this->templateInfo_ != nullptr;};
    void deleteTemplateInfo() { this->templateInfo_ = nullptr;};
    inline const GetDefaultAITemplateResponseBodyTemplateInfo & templateInfo() const { DARABONBA_PTR_GET_CONST(templateInfo_, GetDefaultAITemplateResponseBodyTemplateInfo) };
    inline GetDefaultAITemplateResponseBodyTemplateInfo templateInfo() { DARABONBA_PTR_GET(templateInfo_, GetDefaultAITemplateResponseBodyTemplateInfo) };
    inline GetDefaultAITemplateResponseBody& setTemplateInfo(const GetDefaultAITemplateResponseBodyTemplateInfo & templateInfo) { DARABONBA_PTR_SET_VALUE(templateInfo_, templateInfo) };
    inline GetDefaultAITemplateResponseBody& setTemplateInfo(GetDefaultAITemplateResponseBodyTemplateInfo && templateInfo) { DARABONBA_PTR_SET_RVALUE(templateInfo_, templateInfo) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the AI template.
    std::shared_ptr<GetDefaultAITemplateResponseBodyTemplateInfo> templateInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
