// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPLICATIONTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAPPLICATIONTEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetApplicationTemplateResponseBodyApplicationTemplate.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetApplicationTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApplicationTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationTemplate, applicationTemplate_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetApplicationTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationTemplate, applicationTemplate_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetApplicationTemplateResponseBody() = default ;
    GetApplicationTemplateResponseBody(const GetApplicationTemplateResponseBody &) = default ;
    GetApplicationTemplateResponseBody(GetApplicationTemplateResponseBody &&) = default ;
    GetApplicationTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApplicationTemplateResponseBody() = default ;
    GetApplicationTemplateResponseBody& operator=(const GetApplicationTemplateResponseBody &) = default ;
    GetApplicationTemplateResponseBody& operator=(GetApplicationTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationTemplate_ == nullptr
        && return this->requestId_ == nullptr; };
    // applicationTemplate Field Functions 
    bool hasApplicationTemplate() const { return this->applicationTemplate_ != nullptr;};
    void deleteApplicationTemplate() { this->applicationTemplate_ = nullptr;};
    inline const GetApplicationTemplateResponseBodyApplicationTemplate & applicationTemplate() const { DARABONBA_PTR_GET_CONST(applicationTemplate_, GetApplicationTemplateResponseBodyApplicationTemplate) };
    inline GetApplicationTemplateResponseBodyApplicationTemplate applicationTemplate() { DARABONBA_PTR_GET(applicationTemplate_, GetApplicationTemplateResponseBodyApplicationTemplate) };
    inline GetApplicationTemplateResponseBody& setApplicationTemplate(const GetApplicationTemplateResponseBodyApplicationTemplate & applicationTemplate) { DARABONBA_PTR_SET_VALUE(applicationTemplate_, applicationTemplate) };
    inline GetApplicationTemplateResponseBody& setApplicationTemplate(GetApplicationTemplateResponseBodyApplicationTemplate && applicationTemplate) { DARABONBA_PTR_SET_RVALUE(applicationTemplate_, applicationTemplate) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetApplicationTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<GetApplicationTemplateResponseBodyApplicationTemplate> applicationTemplate_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
