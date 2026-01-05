// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHEALTHCHECKTEMPLATEATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETHEALTHCHECKTEMPLATEATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class GetHealthCheckTemplateAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHealthCheckTemplateAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HealthCheckTemplateId, healthCheckTemplateId_);
    };
    friend void from_json(const Darabonba::Json& j, GetHealthCheckTemplateAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HealthCheckTemplateId, healthCheckTemplateId_);
    };
    GetHealthCheckTemplateAttributeRequest() = default ;
    GetHealthCheckTemplateAttributeRequest(const GetHealthCheckTemplateAttributeRequest &) = default ;
    GetHealthCheckTemplateAttributeRequest(GetHealthCheckTemplateAttributeRequest &&) = default ;
    GetHealthCheckTemplateAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHealthCheckTemplateAttributeRequest() = default ;
    GetHealthCheckTemplateAttributeRequest& operator=(const GetHealthCheckTemplateAttributeRequest &) = default ;
    GetHealthCheckTemplateAttributeRequest& operator=(GetHealthCheckTemplateAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->healthCheckTemplateId_ == nullptr; };
    // healthCheckTemplateId Field Functions 
    bool hasHealthCheckTemplateId() const { return this->healthCheckTemplateId_ != nullptr;};
    void deleteHealthCheckTemplateId() { this->healthCheckTemplateId_ = nullptr;};
    inline string getHealthCheckTemplateId() const { DARABONBA_PTR_GET_DEFAULT(healthCheckTemplateId_, "") };
    inline GetHealthCheckTemplateAttributeRequest& setHealthCheckTemplateId(string healthCheckTemplateId) { DARABONBA_PTR_SET_VALUE(healthCheckTemplateId_, healthCheckTemplateId) };


  protected:
    // The ID of the health check template.
    // 
    // This parameter is required.
    shared_ptr<string> healthCheckTemplateId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
