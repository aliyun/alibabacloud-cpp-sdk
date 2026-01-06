// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEXPERIMENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEEXPERIMENTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/LabelInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class CreateExperimentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateExperimentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_TO_JSON(ArtifactUri, artifactUri_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateExperimentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_FROM_JSON(ArtifactUri, artifactUri_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    CreateExperimentRequest() = default ;
    CreateExperimentRequest(const CreateExperimentRequest &) = default ;
    CreateExperimentRequest(CreateExperimentRequest &&) = default ;
    CreateExperimentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateExperimentRequest() = default ;
    CreateExperimentRequest& operator=(const CreateExperimentRequest &) = default ;
    CreateExperimentRequest& operator=(CreateExperimentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessibility_ == nullptr
        && this->artifactUri_ == nullptr && this->labels_ == nullptr && this->name_ == nullptr && this->workspaceId_ == nullptr; };
    // accessibility Field Functions 
    bool hasAccessibility() const { return this->accessibility_ != nullptr;};
    void deleteAccessibility() { this->accessibility_ = nullptr;};
    inline string getAccessibility() const { DARABONBA_PTR_GET_DEFAULT(accessibility_, "") };
    inline CreateExperimentRequest& setAccessibility(string accessibility) { DARABONBA_PTR_SET_VALUE(accessibility_, accessibility) };


    // artifactUri Field Functions 
    bool hasArtifactUri() const { return this->artifactUri_ != nullptr;};
    void deleteArtifactUri() { this->artifactUri_ = nullptr;};
    inline string getArtifactUri() const { DARABONBA_PTR_GET_DEFAULT(artifactUri_, "") };
    inline CreateExperimentRequest& setArtifactUri(string artifactUri) { DARABONBA_PTR_SET_VALUE(artifactUri_, artifactUri) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<LabelInfo> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, vector<LabelInfo>) };
    inline vector<LabelInfo> getLabels() { DARABONBA_PTR_GET(labels_, vector<LabelInfo>) };
    inline CreateExperimentRequest& setLabels(const vector<LabelInfo> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline CreateExperimentRequest& setLabels(vector<LabelInfo> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateExperimentRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateExperimentRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The visibility of the experiment. Valid values: PRIVATE (the experiment is visible only to the creator and the Alibaba Cloud account) and PUBLIC (the experiment is visible to all users). This parameter is optional and the default value is PRIVATE.
    shared_ptr<string> accessibility_ {};
    // The default artifact output path of all jobs that are associated with the experiment. Only Object Storage Service (OSS) paths are supported.
    shared_ptr<string> artifactUri_ {};
    // The tags.
    shared_ptr<vector<LabelInfo>> labels_ {};
    // The experiment name. The name must meet the following requirements:
    // 
    // *   The name must start with a letter.
    // *   The name can contain letters, digits, underscores (_), and hyphens (-).
    // *   The name must be 1 to 63 characters in length.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The workspace ID.
    // 
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
