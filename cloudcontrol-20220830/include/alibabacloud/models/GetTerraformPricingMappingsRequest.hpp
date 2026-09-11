// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTERRAFORMPRICINGMAPPINGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTERRAFORMPRICINGMAPPINGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudcontrol20220830
{
namespace Models
{
  class GetTerraformPricingMappingsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTerraformPricingMappingsRequest& obj) { 
      DARABONBA_ANY_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, GetTerraformPricingMappingsRequest& obj) { 
      DARABONBA_ANY_FROM_JSON(body, body_);
    };
    GetTerraformPricingMappingsRequest() = default ;
    GetTerraformPricingMappingsRequest(const GetTerraformPricingMappingsRequest &) = default ;
    GetTerraformPricingMappingsRequest(GetTerraformPricingMappingsRequest &&) = default ;
    GetTerraformPricingMappingsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTerraformPricingMappingsRequest() = default ;
    GetTerraformPricingMappingsRequest& operator=(const GetTerraformPricingMappingsRequest &) = default ;
    GetTerraformPricingMappingsRequest& operator=(GetTerraformPricingMappingsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline     const Darabonba::Json & getBody() const { DARABONBA_GET(body_) };
    Darabonba::Json & getBody() { DARABONBA_GET(body_) };
    inline GetTerraformPricingMappingsRequest& setBody(const Darabonba::Json & body) { DARABONBA_SET_VALUE(body_, body) };
    inline GetTerraformPricingMappingsRequest& setBody(Darabonba::Json && body) { DARABONBA_SET_RVALUE(body_, body) };


  protected:
    // The request body. The resourceTypes field specifies a list of Terraform resource types, such as alicloud_instance. You can specify a maximum of 200 resource types in a single request.
    Darabonba::Json body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudcontrol20220830
#endif
