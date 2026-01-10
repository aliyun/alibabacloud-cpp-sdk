// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMODELSERVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMODELSERVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateModelServiceInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class CreateModelServiceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateModelServiceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreateModelServiceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreateModelServiceRequest() = default ;
    CreateModelServiceRequest(const CreateModelServiceRequest &) = default ;
    CreateModelServiceRequest(CreateModelServiceRequest &&) = default ;
    CreateModelServiceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateModelServiceRequest() = default ;
    CreateModelServiceRequest& operator=(const CreateModelServiceRequest &) = default ;
    CreateModelServiceRequest& operator=(CreateModelServiceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const CreateModelServiceInput & getBody() const { DARABONBA_PTR_GET_CONST(body_, CreateModelServiceInput) };
    inline CreateModelServiceInput getBody() { DARABONBA_PTR_GET(body_, CreateModelServiceInput) };
    inline CreateModelServiceRequest& setBody(const CreateModelServiceInput & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateModelServiceRequest& setBody(CreateModelServiceInput && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<CreateModelServiceInput> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
