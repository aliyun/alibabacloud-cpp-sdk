// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETEAMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETEAMREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateTeamInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FCSandbox20260509
{
namespace Models
{
  class CreateTeamRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTeamRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTeamRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreateTeamRequest() = default ;
    CreateTeamRequest(const CreateTeamRequest &) = default ;
    CreateTeamRequest(CreateTeamRequest &&) = default ;
    CreateTeamRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTeamRequest() = default ;
    CreateTeamRequest& operator=(const CreateTeamRequest &) = default ;
    CreateTeamRequest& operator=(CreateTeamRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const CreateTeamInput & getBody() const { DARABONBA_PTR_GET_CONST(body_, CreateTeamInput) };
    inline CreateTeamInput getBody() { DARABONBA_PTR_GET(body_, CreateTeamInput) };
    inline CreateTeamRequest& setBody(const CreateTeamInput & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateTeamRequest& setBody(CreateTeamInput && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<CreateTeamInput> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FCSandbox20260509
#endif
