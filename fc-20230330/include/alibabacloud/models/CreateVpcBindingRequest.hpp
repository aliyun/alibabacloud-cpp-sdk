// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVPCBINDINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEVPCBINDINGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateVpcBindingInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class CreateVpcBindingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVpcBindingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVpcBindingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreateVpcBindingRequest() = default ;
    CreateVpcBindingRequest(const CreateVpcBindingRequest &) = default ;
    CreateVpcBindingRequest(CreateVpcBindingRequest &&) = default ;
    CreateVpcBindingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVpcBindingRequest() = default ;
    CreateVpcBindingRequest& operator=(const CreateVpcBindingRequest &) = default ;
    CreateVpcBindingRequest& operator=(CreateVpcBindingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const CreateVpcBindingInput & body() const { DARABONBA_PTR_GET_CONST(body_, CreateVpcBindingInput) };
    inline CreateVpcBindingInput body() { DARABONBA_PTR_GET(body_, CreateVpcBindingInput) };
    inline CreateVpcBindingRequest& setBody(const CreateVpcBindingInput & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateVpcBindingRequest& setBody(CreateVpcBindingInput && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // The VPC binding configurations.
    // 
    // This parameter is required.
    std::shared_ptr<CreateVpcBindingInput> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
