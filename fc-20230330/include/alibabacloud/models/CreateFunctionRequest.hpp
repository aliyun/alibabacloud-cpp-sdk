// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFUNCTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEFUNCTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateFunctionInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class CreateFunctionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFunctionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFunctionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreateFunctionRequest() = default ;
    CreateFunctionRequest(const CreateFunctionRequest &) = default ;
    CreateFunctionRequest(CreateFunctionRequest &&) = default ;
    CreateFunctionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFunctionRequest() = default ;
    CreateFunctionRequest& operator=(const CreateFunctionRequest &) = default ;
    CreateFunctionRequest& operator=(CreateFunctionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const CreateFunctionInput & getBody() const { DARABONBA_PTR_GET_CONST(body_, CreateFunctionInput) };
    inline CreateFunctionInput getBody() { DARABONBA_PTR_GET(body_, CreateFunctionInput) };
    inline CreateFunctionRequest& setBody(const CreateFunctionInput & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateFunctionRequest& setBody(CreateFunctionInput && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // The information about function configurations.
    // 
    // This parameter is required.
    shared_ptr<CreateFunctionInput> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
