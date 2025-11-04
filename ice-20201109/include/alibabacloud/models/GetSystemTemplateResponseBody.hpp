// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSYSTEMTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSYSTEMTEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetSystemTemplateResponseBodySystemTemplate.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetSystemTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSystemTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SystemTemplate, systemTemplate_);
    };
    friend void from_json(const Darabonba::Json& j, GetSystemTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SystemTemplate, systemTemplate_);
    };
    GetSystemTemplateResponseBody() = default ;
    GetSystemTemplateResponseBody(const GetSystemTemplateResponseBody &) = default ;
    GetSystemTemplateResponseBody(GetSystemTemplateResponseBody &&) = default ;
    GetSystemTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSystemTemplateResponseBody() = default ;
    GetSystemTemplateResponseBody& operator=(const GetSystemTemplateResponseBody &) = default ;
    GetSystemTemplateResponseBody& operator=(GetSystemTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->systemTemplate_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSystemTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // systemTemplate Field Functions 
    bool hasSystemTemplate() const { return this->systemTemplate_ != nullptr;};
    void deleteSystemTemplate() { this->systemTemplate_ = nullptr;};
    inline const GetSystemTemplateResponseBodySystemTemplate & systemTemplate() const { DARABONBA_PTR_GET_CONST(systemTemplate_, GetSystemTemplateResponseBodySystemTemplate) };
    inline GetSystemTemplateResponseBodySystemTemplate systemTemplate() { DARABONBA_PTR_GET(systemTemplate_, GetSystemTemplateResponseBodySystemTemplate) };
    inline GetSystemTemplateResponseBody& setSystemTemplate(const GetSystemTemplateResponseBodySystemTemplate & systemTemplate) { DARABONBA_PTR_SET_VALUE(systemTemplate_, systemTemplate) };
    inline GetSystemTemplateResponseBody& setSystemTemplate(GetSystemTemplateResponseBodySystemTemplate && systemTemplate) { DARABONBA_PTR_SET_RVALUE(systemTemplate_, systemTemplate) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The template information.
    std::shared_ptr<GetSystemTemplateResponseBodySystemTemplate> systemTemplate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
