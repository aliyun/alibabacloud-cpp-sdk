// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECOMPONENTTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECOMPONENTTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ComponentTemplateUpdateCmd.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class UpdateComponentTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateComponentTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateComponentTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UpdateComponentTemplateRequest() = default ;
    UpdateComponentTemplateRequest(const UpdateComponentTemplateRequest &) = default ;
    UpdateComponentTemplateRequest(UpdateComponentTemplateRequest &&) = default ;
    UpdateComponentTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateComponentTemplateRequest() = default ;
    UpdateComponentTemplateRequest& operator=(const UpdateComponentTemplateRequest &) = default ;
    UpdateComponentTemplateRequest& operator=(UpdateComponentTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ComponentTemplateUpdateCmd & getBody() const { DARABONBA_PTR_GET_CONST(body_, ComponentTemplateUpdateCmd) };
    inline ComponentTemplateUpdateCmd getBody() { DARABONBA_PTR_GET(body_, ComponentTemplateUpdateCmd) };
    inline UpdateComponentTemplateRequest& setBody(const ComponentTemplateUpdateCmd & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateComponentTemplateRequest& setBody(ComponentTemplateUpdateCmd && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // This parameter is required.
    shared_ptr<ComponentTemplateUpdateCmd> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
