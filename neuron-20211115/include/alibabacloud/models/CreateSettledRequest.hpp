// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESETTLEDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESETTLEDREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SettledCreateCmd.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class CreateSettledRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSettledRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSettledRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreateSettledRequest() = default ;
    CreateSettledRequest(const CreateSettledRequest &) = default ;
    CreateSettledRequest(CreateSettledRequest &&) = default ;
    CreateSettledRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSettledRequest() = default ;
    CreateSettledRequest& operator=(const CreateSettledRequest &) = default ;
    CreateSettledRequest& operator=(CreateSettledRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const SettledCreateCmd & getBody() const { DARABONBA_PTR_GET_CONST(body_, SettledCreateCmd) };
    inline SettledCreateCmd getBody() { DARABONBA_PTR_GET(body_, SettledCreateCmd) };
    inline CreateSettledRequest& setBody(const SettledCreateCmd & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateSettledRequest& setBody(SettledCreateCmd && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<SettledCreateCmd> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
