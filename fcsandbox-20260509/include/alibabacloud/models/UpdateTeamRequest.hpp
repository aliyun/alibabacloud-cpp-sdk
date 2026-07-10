// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETEAMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETEAMREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateTeamInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FCSandbox20260509
{
namespace Models
{
  class UpdateTeamRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTeamRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTeamRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UpdateTeamRequest() = default ;
    UpdateTeamRequest(const UpdateTeamRequest &) = default ;
    UpdateTeamRequest(UpdateTeamRequest &&) = default ;
    UpdateTeamRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTeamRequest() = default ;
    UpdateTeamRequest& operator=(const UpdateTeamRequest &) = default ;
    UpdateTeamRequest& operator=(UpdateTeamRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const UpdateTeamInput & getBody() const { DARABONBA_PTR_GET_CONST(body_, UpdateTeamInput) };
    inline UpdateTeamInput getBody() { DARABONBA_PTR_GET(body_, UpdateTeamInput) };
    inline UpdateTeamRequest& setBody(const UpdateTeamInput & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateTeamRequest& setBody(UpdateTeamInput && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<UpdateTeamInput> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FCSandbox20260509
#endif
