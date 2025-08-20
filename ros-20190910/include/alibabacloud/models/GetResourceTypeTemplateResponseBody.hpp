// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCETYPETEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCETYPETEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class GetResourceTypeTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceTypeTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_ANY_TO_JSON(TemplateBody, templateBody_);
      DARABONBA_PTR_TO_JSON(TemplateContent, templateContent_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceTypeTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_ANY_FROM_JSON(TemplateBody, templateBody_);
      DARABONBA_PTR_FROM_JSON(TemplateContent, templateContent_);
    };
    GetResourceTypeTemplateResponseBody() = default ;
    GetResourceTypeTemplateResponseBody(const GetResourceTypeTemplateResponseBody &) = default ;
    GetResourceTypeTemplateResponseBody(GetResourceTypeTemplateResponseBody &&) = default ;
    GetResourceTypeTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceTypeTemplateResponseBody() = default ;
    GetResourceTypeTemplateResponseBody& operator=(const GetResourceTypeTemplateResponseBody &) = default ;
    GetResourceTypeTemplateResponseBody& operator=(GetResourceTypeTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->templateBody_ != nullptr && this->templateContent_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetResourceTypeTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // templateBody Field Functions 
    bool hasTemplateBody() const { return this->templateBody_ != nullptr;};
    void deleteTemplateBody() { this->templateBody_ = nullptr;};
    inline     const Darabonba::Json & templateBody() const { DARABONBA_GET(templateBody_) };
    Darabonba::Json & templateBody() { DARABONBA_GET(templateBody_) };
    inline GetResourceTypeTemplateResponseBody& setTemplateBody(const Darabonba::Json & templateBody) { DARABONBA_SET_VALUE(templateBody_, templateBody) };
    inline GetResourceTypeTemplateResponseBody& setTemplateBody(Darabonba::Json & templateBody) { DARABONBA_SET_RVALUE(templateBody_, templateBody) };


    // templateContent Field Functions 
    bool hasTemplateContent() const { return this->templateContent_ != nullptr;};
    void deleteTemplateContent() { this->templateContent_ = nullptr;};
    inline string templateContent() const { DARABONBA_PTR_GET_DEFAULT(templateContent_, "") };
    inline GetResourceTypeTemplateResponseBody& setTemplateContent(string templateContent) { DARABONBA_PTR_SET_VALUE(templateContent_, templateContent) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The structure that contains the template body. The template body must be 1 to 51,200 bytes in length. For more information, see [Template syntax](https://help.aliyun.com/document_detail/28857.html).
    // 
    // > We recommend that use TemplateContent instead of TemplateBody.
    Darabonba::Json templateBody_ = nullptr;
    // The JSON-formatted structure of the template body. For more information, see [Template syntax](https://help.aliyun.com/document_detail/28857.html).
    std::shared_ptr<string> templateContent_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
