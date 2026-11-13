// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWEBFILTERTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEWEBFILTERTEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class CreateWebFilterTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWebFilterTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(WebFilterTemplateId, webFilterTemplateId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWebFilterTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(WebFilterTemplateId, webFilterTemplateId_);
    };
    CreateWebFilterTemplateResponseBody() = default ;
    CreateWebFilterTemplateResponseBody(const CreateWebFilterTemplateResponseBody &) = default ;
    CreateWebFilterTemplateResponseBody(CreateWebFilterTemplateResponseBody &&) = default ;
    CreateWebFilterTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWebFilterTemplateResponseBody() = default ;
    CreateWebFilterTemplateResponseBody& operator=(const CreateWebFilterTemplateResponseBody &) = default ;
    CreateWebFilterTemplateResponseBody& operator=(CreateWebFilterTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->webFilterTemplateId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateWebFilterTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // webFilterTemplateId Field Functions 
    bool hasWebFilterTemplateId() const { return this->webFilterTemplateId_ != nullptr;};
    void deleteWebFilterTemplateId() { this->webFilterTemplateId_ = nullptr;};
    inline string getWebFilterTemplateId() const { DARABONBA_PTR_GET_DEFAULT(webFilterTemplateId_, "") };
    inline CreateWebFilterTemplateResponseBody& setWebFilterTemplateId(string webFilterTemplateId) { DARABONBA_PTR_SET_VALUE(webFilterTemplateId_, webFilterTemplateId) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The ID of the newly created web filtering template.
    shared_ptr<string> webFilterTemplateId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
