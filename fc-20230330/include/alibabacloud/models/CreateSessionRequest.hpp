// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESESSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESESSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateSessionInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class CreateSessionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSessionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
      DARABONBA_PTR_TO_JSON(qualifier, qualifier_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSessionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
      DARABONBA_PTR_FROM_JSON(qualifier, qualifier_);
    };
    CreateSessionRequest() = default ;
    CreateSessionRequest(const CreateSessionRequest &) = default ;
    CreateSessionRequest(CreateSessionRequest &&) = default ;
    CreateSessionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSessionRequest() = default ;
    CreateSessionRequest& operator=(const CreateSessionRequest &) = default ;
    CreateSessionRequest& operator=(CreateSessionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr
        && this->qualifier_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const CreateSessionInput & getBody() const { DARABONBA_PTR_GET_CONST(body_, CreateSessionInput) };
    inline CreateSessionInput getBody() { DARABONBA_PTR_GET(body_, CreateSessionInput) };
    inline CreateSessionRequest& setBody(const CreateSessionInput & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateSessionRequest& setBody(CreateSessionInput && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // qualifier Field Functions 
    bool hasQualifier() const { return this->qualifier_ != nullptr;};
    void deleteQualifier() { this->qualifier_ = nullptr;};
    inline string getQualifier() const { DARABONBA_PTR_GET_DEFAULT(qualifier_, "") };
    inline CreateSessionRequest& setQualifier(string qualifier) { DARABONBA_PTR_SET_VALUE(qualifier_, qualifier) };


  protected:
    // Creates session configurations.
    shared_ptr<CreateSessionInput> body_ {};
    // Specifies the version or alias to which the sesion belongs.
    shared_ptr<string> qualifier_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
