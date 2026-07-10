// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETEAMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATETEAMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/E2BTeam.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FCSandbox20260509
{
namespace Models
{
  class CreateTeamResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTeamResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(team, team_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTeamResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(team, team_);
    };
    CreateTeamResponseBody() = default ;
    CreateTeamResponseBody(const CreateTeamResponseBody &) = default ;
    CreateTeamResponseBody(CreateTeamResponseBody &&) = default ;
    CreateTeamResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTeamResponseBody() = default ;
    CreateTeamResponseBody& operator=(const CreateTeamResponseBody &) = default ;
    CreateTeamResponseBody& operator=(CreateTeamResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->team_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateTeamResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateTeamResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateTeamResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // team Field Functions 
    bool hasTeam() const { return this->team_ != nullptr;};
    void deleteTeam() { this->team_ = nullptr;};
    inline const E2BTeam & getTeam() const { DARABONBA_PTR_GET_CONST(team_, E2BTeam) };
    inline E2BTeam getTeam() { DARABONBA_PTR_GET(team_, E2BTeam) };
    inline CreateTeamResponseBody& setTeam(const E2BTeam & team) { DARABONBA_PTR_SET_VALUE(team_, team) };
    inline CreateTeamResponseBody& setTeam(E2BTeam && team) { DARABONBA_PTR_SET_RVALUE(team_, team) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<E2BTeam> team_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FCSandbox20260509
#endif
