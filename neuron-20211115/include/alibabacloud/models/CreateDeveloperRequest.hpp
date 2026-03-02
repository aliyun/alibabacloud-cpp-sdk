// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDEVELOPERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDEVELOPERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/Developer.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class CreateDeveloperRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDeveloperRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDeveloperRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreateDeveloperRequest() = default ;
    CreateDeveloperRequest(const CreateDeveloperRequest &) = default ;
    CreateDeveloperRequest(CreateDeveloperRequest &&) = default ;
    CreateDeveloperRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDeveloperRequest() = default ;
    CreateDeveloperRequest& operator=(const CreateDeveloperRequest &) = default ;
    CreateDeveloperRequest& operator=(CreateDeveloperRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const Developer & getBody() const { DARABONBA_PTR_GET_CONST(body_, Developer) };
    inline Developer getBody() { DARABONBA_PTR_GET(body_, Developer) };
    inline CreateDeveloperRequest& setBody(const Developer & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateDeveloperRequest& setBody(Developer && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // This parameter is required.
    shared_ptr<Developer> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
