// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECHECKRUNREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECHECKRUNREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateCheckRunRequestAnnotations.hpp>
#include <alibabacloud/models/CreateCheckRunRequestOutput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class CreateCheckRunRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCheckRunRequest& obj) { 
      DARABONBA_PTR_TO_JSON(accessToken, accessToken_);
      DARABONBA_PTR_TO_JSON(annotations, annotations_);
      DARABONBA_PTR_TO_JSON(completedAt, completedAt_);
      DARABONBA_PTR_TO_JSON(conclusion, conclusion_);
      DARABONBA_PTR_TO_JSON(detailsUrl, detailsUrl_);
      DARABONBA_PTR_TO_JSON(externalId, externalId_);
      DARABONBA_PTR_TO_JSON(headSha, headSha_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(output, output_);
      DARABONBA_PTR_TO_JSON(startedAt, startedAt_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(organizationId, organizationId_);
      DARABONBA_PTR_TO_JSON(repositoryIdentity, repositoryIdentity_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCheckRunRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(accessToken, accessToken_);
      DARABONBA_PTR_FROM_JSON(annotations, annotations_);
      DARABONBA_PTR_FROM_JSON(completedAt, completedAt_);
      DARABONBA_PTR_FROM_JSON(conclusion, conclusion_);
      DARABONBA_PTR_FROM_JSON(detailsUrl, detailsUrl_);
      DARABONBA_PTR_FROM_JSON(externalId, externalId_);
      DARABONBA_PTR_FROM_JSON(headSha, headSha_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(output, output_);
      DARABONBA_PTR_FROM_JSON(startedAt, startedAt_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(organizationId, organizationId_);
      DARABONBA_PTR_FROM_JSON(repositoryIdentity, repositoryIdentity_);
    };
    CreateCheckRunRequest() = default ;
    CreateCheckRunRequest(const CreateCheckRunRequest &) = default ;
    CreateCheckRunRequest(CreateCheckRunRequest &&) = default ;
    CreateCheckRunRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCheckRunRequest() = default ;
    CreateCheckRunRequest& operator=(const CreateCheckRunRequest &) = default ;
    CreateCheckRunRequest& operator=(CreateCheckRunRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessToken_ == nullptr
        && return this->annotations_ == nullptr && return this->completedAt_ == nullptr && return this->conclusion_ == nullptr && return this->detailsUrl_ == nullptr && return this->externalId_ == nullptr
        && return this->headSha_ == nullptr && return this->name_ == nullptr && return this->output_ == nullptr && return this->startedAt_ == nullptr && return this->status_ == nullptr
        && return this->organizationId_ == nullptr && return this->repositoryIdentity_ == nullptr; };
    // accessToken Field Functions 
    bool hasAccessToken() const { return this->accessToken_ != nullptr;};
    void deleteAccessToken() { this->accessToken_ = nullptr;};
    inline string accessToken() const { DARABONBA_PTR_GET_DEFAULT(accessToken_, "") };
    inline CreateCheckRunRequest& setAccessToken(string accessToken) { DARABONBA_PTR_SET_VALUE(accessToken_, accessToken) };


    // annotations Field Functions 
    bool hasAnnotations() const { return this->annotations_ != nullptr;};
    void deleteAnnotations() { this->annotations_ = nullptr;};
    inline const vector<CreateCheckRunRequestAnnotations> & annotations() const { DARABONBA_PTR_GET_CONST(annotations_, vector<CreateCheckRunRequestAnnotations>) };
    inline vector<CreateCheckRunRequestAnnotations> annotations() { DARABONBA_PTR_GET(annotations_, vector<CreateCheckRunRequestAnnotations>) };
    inline CreateCheckRunRequest& setAnnotations(const vector<CreateCheckRunRequestAnnotations> & annotations) { DARABONBA_PTR_SET_VALUE(annotations_, annotations) };
    inline CreateCheckRunRequest& setAnnotations(vector<CreateCheckRunRequestAnnotations> && annotations) { DARABONBA_PTR_SET_RVALUE(annotations_, annotations) };


    // completedAt Field Functions 
    bool hasCompletedAt() const { return this->completedAt_ != nullptr;};
    void deleteCompletedAt() { this->completedAt_ = nullptr;};
    inline string completedAt() const { DARABONBA_PTR_GET_DEFAULT(completedAt_, "") };
    inline CreateCheckRunRequest& setCompletedAt(string completedAt) { DARABONBA_PTR_SET_VALUE(completedAt_, completedAt) };


    // conclusion Field Functions 
    bool hasConclusion() const { return this->conclusion_ != nullptr;};
    void deleteConclusion() { this->conclusion_ = nullptr;};
    inline string conclusion() const { DARABONBA_PTR_GET_DEFAULT(conclusion_, "") };
    inline CreateCheckRunRequest& setConclusion(string conclusion) { DARABONBA_PTR_SET_VALUE(conclusion_, conclusion) };


    // detailsUrl Field Functions 
    bool hasDetailsUrl() const { return this->detailsUrl_ != nullptr;};
    void deleteDetailsUrl() { this->detailsUrl_ = nullptr;};
    inline string detailsUrl() const { DARABONBA_PTR_GET_DEFAULT(detailsUrl_, "") };
    inline CreateCheckRunRequest& setDetailsUrl(string detailsUrl) { DARABONBA_PTR_SET_VALUE(detailsUrl_, detailsUrl) };


    // externalId Field Functions 
    bool hasExternalId() const { return this->externalId_ != nullptr;};
    void deleteExternalId() { this->externalId_ = nullptr;};
    inline string externalId() const { DARABONBA_PTR_GET_DEFAULT(externalId_, "") };
    inline CreateCheckRunRequest& setExternalId(string externalId) { DARABONBA_PTR_SET_VALUE(externalId_, externalId) };


    // headSha Field Functions 
    bool hasHeadSha() const { return this->headSha_ != nullptr;};
    void deleteHeadSha() { this->headSha_ = nullptr;};
    inline string headSha() const { DARABONBA_PTR_GET_DEFAULT(headSha_, "") };
    inline CreateCheckRunRequest& setHeadSha(string headSha) { DARABONBA_PTR_SET_VALUE(headSha_, headSha) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateCheckRunRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline const CreateCheckRunRequestOutput & output() const { DARABONBA_PTR_GET_CONST(output_, CreateCheckRunRequestOutput) };
    inline CreateCheckRunRequestOutput output() { DARABONBA_PTR_GET(output_, CreateCheckRunRequestOutput) };
    inline CreateCheckRunRequest& setOutput(const CreateCheckRunRequestOutput & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
    inline CreateCheckRunRequest& setOutput(CreateCheckRunRequestOutput && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


    // startedAt Field Functions 
    bool hasStartedAt() const { return this->startedAt_ != nullptr;};
    void deleteStartedAt() { this->startedAt_ = nullptr;};
    inline string startedAt() const { DARABONBA_PTR_GET_DEFAULT(startedAt_, "") };
    inline CreateCheckRunRequest& setStartedAt(string startedAt) { DARABONBA_PTR_SET_VALUE(startedAt_, startedAt) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline CreateCheckRunRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // organizationId Field Functions 
    bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
    void deleteOrganizationId() { this->organizationId_ = nullptr;};
    inline string organizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
    inline CreateCheckRunRequest& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


    // repositoryIdentity Field Functions 
    bool hasRepositoryIdentity() const { return this->repositoryIdentity_ != nullptr;};
    void deleteRepositoryIdentity() { this->repositoryIdentity_ = nullptr;};
    inline string repositoryIdentity() const { DARABONBA_PTR_GET_DEFAULT(repositoryIdentity_, "") };
    inline CreateCheckRunRequest& setRepositoryIdentity(string repositoryIdentity) { DARABONBA_PTR_SET_VALUE(repositoryIdentity_, repositoryIdentity) };


  protected:
    std::shared_ptr<string> accessToken_ = nullptr;
    std::shared_ptr<vector<CreateCheckRunRequestAnnotations>> annotations_ = nullptr;
    std::shared_ptr<string> completedAt_ = nullptr;
    std::shared_ptr<string> conclusion_ = nullptr;
    std::shared_ptr<string> detailsUrl_ = nullptr;
    std::shared_ptr<string> externalId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> headSha_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<CreateCheckRunRequestOutput> output_ = nullptr;
    std::shared_ptr<string> startedAt_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> organizationId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> repositoryIdentity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
