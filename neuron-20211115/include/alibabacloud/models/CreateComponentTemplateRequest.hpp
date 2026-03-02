// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECOMPONENTTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECOMPONENTTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ComponentTemplateCreateCmd.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class CreateComponentTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateComponentTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreateComponentTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreateComponentTemplateRequest() = default ;
    CreateComponentTemplateRequest(const CreateComponentTemplateRequest &) = default ;
    CreateComponentTemplateRequest(CreateComponentTemplateRequest &&) = default ;
    CreateComponentTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateComponentTemplateRequest() = default ;
    CreateComponentTemplateRequest& operator=(const CreateComponentTemplateRequest &) = default ;
    CreateComponentTemplateRequest& operator=(CreateComponentTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ComponentTemplateCreateCmd & getBody() const { DARABONBA_PTR_GET_CONST(body_, ComponentTemplateCreateCmd) };
    inline ComponentTemplateCreateCmd getBody() { DARABONBA_PTR_GET(body_, ComponentTemplateCreateCmd) };
    inline CreateComponentTemplateRequest& setBody(const ComponentTemplateCreateCmd & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateComponentTemplateRequest& setBody(ComponentTemplateCreateCmd && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // This parameter is required.
    shared_ptr<ComponentTemplateCreateCmd> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
