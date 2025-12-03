// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECHECKRUNREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECHECKRUNREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateCheckRunRequestAnnotations.hpp>
#include <alibabacloud/models/UpdateCheckRunRequestOutput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class UpdateCheckRunRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCheckRunRequest& obj) { 
      DARABONBA_PTR_TO_JSON(accessToken, accessToken_);
      DARABONBA_PTR_TO_JSON(annotations, annotations_);
      DARABONBA_PTR_TO_JSON(completedAt, completedAt_);
      DARABONBA_PTR_TO_JSON(conclusion, conclusion_);
      DARABONBA_PTR_TO_JSON(detailsUrl, detailsUrl_);
      DARABONBA_PTR_TO_JSON(externalId, externalId_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(output, output_);
      DARABONBA_PTR_TO_JSON(startedAt, startedAt_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(checkRunId, checkRunId_);
      DARABONBA_PTR_TO_JSON(organizationId, organizationId_);
      DARABONBA_PTR_TO_JSON(repositoryIdentity, repositoryIdentity_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCheckRunRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(accessToken, accessToken_);
      DARABONBA_PTR_FROM_JSON(annotations, annotations_);
      DARABONBA_PTR_FROM_JSON(completedAt, completedAt_);
      DARABONBA_PTR_FROM_JSON(conclusion, conclusion_);
      DARABONBA_PTR_FROM_JSON(detailsUrl, detailsUrl_);
      DARABONBA_PTR_FROM_JSON(externalId, externalId_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(output, output_);
      DARABONBA_PTR_FROM_JSON(startedAt, startedAt_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(checkRunId, checkRunId_);
      DARABONBA_PTR_FROM_JSON(organizationId, organizationId_);
      DARABONBA_PTR_FROM_JSON(repositoryIdentity, repositoryIdentity_);
    };
    UpdateCheckRunRequest() = default ;
    UpdateCheckRunRequest(const UpdateCheckRunRequest &) = default ;
    UpdateCheckRunRequest(UpdateCheckRunRequest &&) = default ;
    UpdateCheckRunRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCheckRunRequest() = default ;
    UpdateCheckRunRequest& operator=(const UpdateCheckRunRequest &) = default ;
    UpdateCheckRunRequest& operator=(UpdateCheckRunRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessToken_ == nullptr
        && return this->annotations_ == nullptr && return this->completedAt_ == nullptr && return this->conclusion_ == nullptr && return this->detailsUrl_ == nullptr && return this->externalId_ == nullptr
        && return this->name_ == nullptr && return this->output_ == nullptr && return this->startedAt_ == nullptr && return this->status_ == nullptr && return this->checkRunId_ == nullptr
        && return this->organizationId_ == nullptr && return this->repositoryIdentity_ == nullptr; };
    // accessToken Field Functions 
    bool hasAccessToken() const { return this->accessToken_ != nullptr;};
    void deleteAccessToken() { this->accessToken_ = nullptr;};
    inline string accessToken() const { DARABONBA_PTR_GET_DEFAULT(accessToken_, "") };
    inline UpdateCheckRunRequest& setAccessToken(string accessToken) { DARABONBA_PTR_SET_VALUE(accessToken_, accessToken) };


    // annotations Field Functions 
    bool hasAnnotations() const { return this->annotations_ != nullptr;};
    void deleteAnnotations() { this->annotations_ = nullptr;};
    inline const vector<UpdateCheckRunRequestAnnotations> & annotations() const { DARABONBA_PTR_GET_CONST(annotations_, vector<UpdateCheckRunRequestAnnotations>) };
    inline vector<UpdateCheckRunRequestAnnotations> annotations() { DARABONBA_PTR_GET(annotations_, vector<UpdateCheckRunRequestAnnotations>) };
    inline UpdateCheckRunRequest& setAnnotations(const vector<UpdateCheckRunRequestAnnotations> & annotations) { DARABONBA_PTR_SET_VALUE(annotations_, annotations) };
    inline UpdateCheckRunRequest& setAnnotations(vector<UpdateCheckRunRequestAnnotations> && annotations) { DARABONBA_PTR_SET_RVALUE(annotations_, annotations) };


    // completedAt Field Functions 
    bool hasCompletedAt() const { return this->completedAt_ != nullptr;};
    void deleteCompletedAt() { this->completedAt_ = nullptr;};
    inline string completedAt() const { DARABONBA_PTR_GET_DEFAULT(completedAt_, "") };
    inline UpdateCheckRunRequest& setCompletedAt(string completedAt) { DARABONBA_PTR_SET_VALUE(completedAt_, completedAt) };


    // conclusion Field Functions 
    bool hasConclusion() const { return this->conclusion_ != nullptr;};
    void deleteConclusion() { this->conclusion_ = nullptr;};
    inline string conclusion() const { DARABONBA_PTR_GET_DEFAULT(conclusion_, "") };
    inline UpdateCheckRunRequest& setConclusion(string conclusion) { DARABONBA_PTR_SET_VALUE(conclusion_, conclusion) };


    // detailsUrl Field Functions 
    bool hasDetailsUrl() const { return this->detailsUrl_ != nullptr;};
    void deleteDetailsUrl() { this->detailsUrl_ = nullptr;};
    inline string detailsUrl() const { DARABONBA_PTR_GET_DEFAULT(detailsUrl_, "") };
    inline UpdateCheckRunRequest& setDetailsUrl(string detailsUrl) { DARABONBA_PTR_SET_VALUE(detailsUrl_, detailsUrl) };


    // externalId Field Functions 
    bool hasExternalId() const { return this->externalId_ != nullptr;};
    void deleteExternalId() { this->externalId_ = nullptr;};
    inline string externalId() const { DARABONBA_PTR_GET_DEFAULT(externalId_, "") };
    inline UpdateCheckRunRequest& setExternalId(string externalId) { DARABONBA_PTR_SET_VALUE(externalId_, externalId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateCheckRunRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline const UpdateCheckRunRequestOutput & output() const { DARABONBA_PTR_GET_CONST(output_, UpdateCheckRunRequestOutput) };
    inline UpdateCheckRunRequestOutput output() { DARABONBA_PTR_GET(output_, UpdateCheckRunRequestOutput) };
    inline UpdateCheckRunRequest& setOutput(const UpdateCheckRunRequestOutput & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
    inline UpdateCheckRunRequest& setOutput(UpdateCheckRunRequestOutput && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


    // startedAt Field Functions 
    bool hasStartedAt() const { return this->startedAt_ != nullptr;};
    void deleteStartedAt() { this->startedAt_ = nullptr;};
    inline string startedAt() const { DARABONBA_PTR_GET_DEFAULT(startedAt_, "") };
    inline UpdateCheckRunRequest& setStartedAt(string startedAt) { DARABONBA_PTR_SET_VALUE(startedAt_, startedAt) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpdateCheckRunRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // checkRunId Field Functions 
    bool hasCheckRunId() const { return this->checkRunId_ != nullptr;};
    void deleteCheckRunId() { this->checkRunId_ = nullptr;};
    inline int64_t checkRunId() const { DARABONBA_PTR_GET_DEFAULT(checkRunId_, 0L) };
    inline UpdateCheckRunRequest& setCheckRunId(int64_t checkRunId) { DARABONBA_PTR_SET_VALUE(checkRunId_, checkRunId) };


    // organizationId Field Functions 
    bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
    void deleteOrganizationId() { this->organizationId_ = nullptr;};
    inline string organizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
    inline UpdateCheckRunRequest& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


    // repositoryIdentity Field Functions 
    bool hasRepositoryIdentity() const { return this->repositoryIdentity_ != nullptr;};
    void deleteRepositoryIdentity() { this->repositoryIdentity_ = nullptr;};
    inline string repositoryIdentity() const { DARABONBA_PTR_GET_DEFAULT(repositoryIdentity_, "") };
    inline UpdateCheckRunRequest& setRepositoryIdentity(string repositoryIdentity) { DARABONBA_PTR_SET_VALUE(repositoryIdentity_, repositoryIdentity) };


  protected:
    std::shared_ptr<string> accessToken_ = nullptr;
    std::shared_ptr<vector<UpdateCheckRunRequestAnnotations>> annotations_ = nullptr;
    std::shared_ptr<string> completedAt_ = nullptr;
    std::shared_ptr<string> conclusion_ = nullptr;
    std::shared_ptr<string> detailsUrl_ = nullptr;
    std::shared_ptr<string> externalId_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<UpdateCheckRunRequestOutput> output_ = nullptr;
    std::shared_ptr<string> startedAt_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> checkRunId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> organizationId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> repositoryIdentity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
