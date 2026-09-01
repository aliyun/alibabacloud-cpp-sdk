// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PublicTemplateRuntimeConfig.hpp>
#include <alibabacloud/models/PublicTemplateStatus.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FCSandbox20260509
{
namespace Models
{
  class GetTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(createdTime, createdTime_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(resourceGroupID, resourceGroupID_);
      DARABONBA_PTR_TO_JSON(runtimeConfig, runtimeConfig_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(teamID, teamID_);
      DARABONBA_PTR_TO_JSON(teamName, teamName_);
      DARABONBA_PTR_TO_JSON(templateID, templateID_);
    };
    friend void from_json(const Darabonba::Json& j, GetTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(createdTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(resourceGroupID, resourceGroupID_);
      DARABONBA_PTR_FROM_JSON(runtimeConfig, runtimeConfig_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(teamID, teamID_);
      DARABONBA_PTR_FROM_JSON(teamName, teamName_);
      DARABONBA_PTR_FROM_JSON(templateID, templateID_);
    };
    GetTemplateResponseBody() = default ;
    GetTemplateResponseBody(const GetTemplateResponseBody &) = default ;
    GetTemplateResponseBody(GetTemplateResponseBody &&) = default ;
    GetTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTemplateResponseBody() = default ;
    GetTemplateResponseBody& operator=(const GetTemplateResponseBody &) = default ;
    GetTemplateResponseBody& operator=(GetTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->createdTime_ == nullptr && this->message_ == nullptr && this->name_ == nullptr && this->requestId_ == nullptr && this->resourceGroupID_ == nullptr
        && this->runtimeConfig_ == nullptr && this->status_ == nullptr && this->teamID_ == nullptr && this->teamName_ == nullptr && this->templateID_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetTemplateResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline string getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
    inline GetTemplateResponseBody& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetTemplateResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetTemplateResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupID Field Functions 
    bool hasResourceGroupID() const { return this->resourceGroupID_ != nullptr;};
    void deleteResourceGroupID() { this->resourceGroupID_ = nullptr;};
    inline string getResourceGroupID() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupID_, "") };
    inline GetTemplateResponseBody& setResourceGroupID(string resourceGroupID) { DARABONBA_PTR_SET_VALUE(resourceGroupID_, resourceGroupID) };


    // runtimeConfig Field Functions 
    bool hasRuntimeConfig() const { return this->runtimeConfig_ != nullptr;};
    void deleteRuntimeConfig() { this->runtimeConfig_ = nullptr;};
    inline const PublicTemplateRuntimeConfig & getRuntimeConfig() const { DARABONBA_PTR_GET_CONST(runtimeConfig_, PublicTemplateRuntimeConfig) };
    inline PublicTemplateRuntimeConfig getRuntimeConfig() { DARABONBA_PTR_GET(runtimeConfig_, PublicTemplateRuntimeConfig) };
    inline GetTemplateResponseBody& setRuntimeConfig(const PublicTemplateRuntimeConfig & runtimeConfig) { DARABONBA_PTR_SET_VALUE(runtimeConfig_, runtimeConfig) };
    inline GetTemplateResponseBody& setRuntimeConfig(PublicTemplateRuntimeConfig && runtimeConfig) { DARABONBA_PTR_SET_RVALUE(runtimeConfig_, runtimeConfig) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline const PublicTemplateStatus & getStatus() const { DARABONBA_PTR_GET_CONST(status_, PublicTemplateStatus) };
    inline PublicTemplateStatus getStatus() { DARABONBA_PTR_GET(status_, PublicTemplateStatus) };
    inline GetTemplateResponseBody& setStatus(const PublicTemplateStatus & status) { DARABONBA_PTR_SET_VALUE(status_, status) };
    inline GetTemplateResponseBody& setStatus(PublicTemplateStatus && status) { DARABONBA_PTR_SET_RVALUE(status_, status) };


    // teamID Field Functions 
    bool hasTeamID() const { return this->teamID_ != nullptr;};
    void deleteTeamID() { this->teamID_ = nullptr;};
    inline string getTeamID() const { DARABONBA_PTR_GET_DEFAULT(teamID_, "") };
    inline GetTemplateResponseBody& setTeamID(string teamID) { DARABONBA_PTR_SET_VALUE(teamID_, teamID) };


    // teamName Field Functions 
    bool hasTeamName() const { return this->teamName_ != nullptr;};
    void deleteTeamName() { this->teamName_ = nullptr;};
    inline string getTeamName() const { DARABONBA_PTR_GET_DEFAULT(teamName_, "") };
    inline GetTemplateResponseBody& setTeamName(string teamName) { DARABONBA_PTR_SET_VALUE(teamName_, teamName) };


    // templateID Field Functions 
    bool hasTemplateID() const { return this->templateID_ != nullptr;};
    void deleteTemplateID() { this->templateID_ = nullptr;};
    inline string getTemplateID() const { DARABONBA_PTR_GET_DEFAULT(templateID_, "") };
    inline GetTemplateResponseBody& setTemplateID(string templateID) { DARABONBA_PTR_SET_VALUE(templateID_, templateID) };


  protected:
    // The error code.
    shared_ptr<string> code_ {};
    // The time when the template was created.
    shared_ptr<string> createdTime_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // The template name.
    shared_ptr<string> name_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupID_ {};
    // The runtime configuration of the template.
    shared_ptr<PublicTemplateRuntimeConfig> runtimeConfig_ {};
    // The template status.
    shared_ptr<PublicTemplateStatus> status_ {};
    // The unique identifier of the team.
    shared_ptr<string> teamID_ {};
    // The team name.
    shared_ptr<string> teamName_ {};
    // The unique identifier of the template.
    shared_ptr<string> templateID_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FCSandbox20260509
#endif
