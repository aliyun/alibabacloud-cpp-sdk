// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEHEALTHCHECKTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEHEALTHCHECKTEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class CreateHealthCheckTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateHealthCheckTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(HealthCheckTemplateId, healthCheckTemplateId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateHealthCheckTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(HealthCheckTemplateId, healthCheckTemplateId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateHealthCheckTemplateResponseBody() = default ;
    CreateHealthCheckTemplateResponseBody(const CreateHealthCheckTemplateResponseBody &) = default ;
    CreateHealthCheckTemplateResponseBody(CreateHealthCheckTemplateResponseBody &&) = default ;
    CreateHealthCheckTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateHealthCheckTemplateResponseBody() = default ;
    CreateHealthCheckTemplateResponseBody& operator=(const CreateHealthCheckTemplateResponseBody &) = default ;
    CreateHealthCheckTemplateResponseBody& operator=(CreateHealthCheckTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->healthCheckTemplateId_ != nullptr
        && this->requestId_ != nullptr; };
    // healthCheckTemplateId Field Functions 
    bool hasHealthCheckTemplateId() const { return this->healthCheckTemplateId_ != nullptr;};
    void deleteHealthCheckTemplateId() { this->healthCheckTemplateId_ = nullptr;};
    inline string healthCheckTemplateId() const { DARABONBA_PTR_GET_DEFAULT(healthCheckTemplateId_, "") };
    inline CreateHealthCheckTemplateResponseBody& setHealthCheckTemplateId(string healthCheckTemplateId) { DARABONBA_PTR_SET_VALUE(healthCheckTemplateId_, healthCheckTemplateId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateHealthCheckTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the health check template.
    std::shared_ptr<string> healthCheckTemplateId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
