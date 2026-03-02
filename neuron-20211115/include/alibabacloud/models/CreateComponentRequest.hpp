// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECOMPONENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECOMPONENTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ComponentCreateCmd.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class CreateComponentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateComponentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreateComponentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreateComponentRequest() = default ;
    CreateComponentRequest(const CreateComponentRequest &) = default ;
    CreateComponentRequest(CreateComponentRequest &&) = default ;
    CreateComponentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateComponentRequest() = default ;
    CreateComponentRequest& operator=(const CreateComponentRequest &) = default ;
    CreateComponentRequest& operator=(CreateComponentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ComponentCreateCmd & getBody() const { DARABONBA_PTR_GET_CONST(body_, ComponentCreateCmd) };
    inline ComponentCreateCmd getBody() { DARABONBA_PTR_GET(body_, ComponentCreateCmd) };
    inline CreateComponentRequest& setBody(const ComponentCreateCmd & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateComponentRequest& setBody(ComponentCreateCmd && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // This parameter is required.
    shared_ptr<ComponentCreateCmd> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
