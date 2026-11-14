// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWARMPOOLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEWARMPOOLREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateWarmPoolInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sandbox20260820
{
namespace Models
{
  class CreateWarmPoolRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWarmPoolRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWarmPoolRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreateWarmPoolRequest() = default ;
    CreateWarmPoolRequest(const CreateWarmPoolRequest &) = default ;
    CreateWarmPoolRequest(CreateWarmPoolRequest &&) = default ;
    CreateWarmPoolRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWarmPoolRequest() = default ;
    CreateWarmPoolRequest& operator=(const CreateWarmPoolRequest &) = default ;
    CreateWarmPoolRequest& operator=(CreateWarmPoolRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const CreateWarmPoolInput & getBody() const { DARABONBA_PTR_GET_CONST(body_, CreateWarmPoolInput) };
    inline CreateWarmPoolInput getBody() { DARABONBA_PTR_GET(body_, CreateWarmPoolInput) };
    inline CreateWarmPoolRequest& setBody(const CreateWarmPoolInput & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateWarmPoolRequest& setBody(CreateWarmPoolInput && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // The request body, which contains the warm pool configuration.
    shared_ptr<CreateWarmPoolInput> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sandbox20260820
#endif
