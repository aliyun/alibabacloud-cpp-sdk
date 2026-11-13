// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPLICATIONTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPLICATIONTEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class CreateApplicationTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateApplicationTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationTemplateId, applicationTemplateId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateApplicationTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationTemplateId, applicationTemplateId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateApplicationTemplateResponseBody() = default ;
    CreateApplicationTemplateResponseBody(const CreateApplicationTemplateResponseBody &) = default ;
    CreateApplicationTemplateResponseBody(CreateApplicationTemplateResponseBody &&) = default ;
    CreateApplicationTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateApplicationTemplateResponseBody() = default ;
    CreateApplicationTemplateResponseBody& operator=(const CreateApplicationTemplateResponseBody &) = default ;
    CreateApplicationTemplateResponseBody& operator=(CreateApplicationTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationTemplateId_ == nullptr
        && this->requestId_ == nullptr; };
    // applicationTemplateId Field Functions 
    bool hasApplicationTemplateId() const { return this->applicationTemplateId_ != nullptr;};
    void deleteApplicationTemplateId() { this->applicationTemplateId_ = nullptr;};
    inline string getApplicationTemplateId() const { DARABONBA_PTR_GET_DEFAULT(applicationTemplateId_, "") };
    inline CreateApplicationTemplateResponseBody& setApplicationTemplateId(string applicationTemplateId) { DARABONBA_PTR_SET_VALUE(applicationTemplateId_, applicationTemplateId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateApplicationTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the newly created application template.
    shared_ptr<string> applicationTemplateId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
