// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETRIGGERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETRIGGERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateTriggerInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class CreateTriggerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTriggerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTriggerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreateTriggerRequest() = default ;
    CreateTriggerRequest(const CreateTriggerRequest &) = default ;
    CreateTriggerRequest(CreateTriggerRequest &&) = default ;
    CreateTriggerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTriggerRequest() = default ;
    CreateTriggerRequest& operator=(const CreateTriggerRequest &) = default ;
    CreateTriggerRequest& operator=(CreateTriggerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->body_ != nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const CreateTriggerInput & body() const { DARABONBA_PTR_GET_CONST(body_, CreateTriggerInput) };
    inline CreateTriggerInput body() { DARABONBA_PTR_GET(body_, CreateTriggerInput) };
    inline CreateTriggerRequest& setBody(const CreateTriggerInput & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateTriggerRequest& setBody(CreateTriggerInput && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // The trigger configurations.
    // 
    // This parameter is required.
    std::shared_ptr<CreateTriggerInput> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
