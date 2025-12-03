// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPIPELINERESPONSEBODYPIPELINEPIPELINECONFIGSOURCESDATA_HPP_
#define ALIBABACLOUD_MODELS_GETPIPELINERESPONSEBODYPIPELINEPIPELINECONFIGSOURCESDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class GetPipelineResponseBodyPipelinePipelineConfigSourcesData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPipelineResponseBodyPipelinePipelineConfigSourcesData& obj) { 
      DARABONBA_PTR_TO_JSON(branch, branch_);
      DARABONBA_PTR_TO_JSON(cloneDepth, cloneDepth_);
      DARABONBA_PTR_TO_JSON(credentialId, credentialId_);
      DARABONBA_PTR_TO_JSON(credentialLabel, credentialLabel_);
      DARABONBA_PTR_TO_JSON(credentialType, credentialType_);
      DARABONBA_PTR_TO_JSON(events, events_);
      DARABONBA_PTR_TO_JSON(isBranchMode, isBranchMode_);
      DARABONBA_PTR_TO_JSON(isCloneDepth, isCloneDepth_);
      DARABONBA_PTR_TO_JSON(isSubmodule, isSubmodule_);
      DARABONBA_PTR_TO_JSON(isTrigger, isTrigger_);
      DARABONBA_PTR_TO_JSON(label, label_);
      DARABONBA_PTR_TO_JSON(namespace, namespace_);
      DARABONBA_PTR_TO_JSON(repo, repo_);
      DARABONBA_PTR_TO_JSON(serviceConnectionId, serviceConnectionId_);
      DARABONBA_PTR_TO_JSON(triggerFilter, triggerFilter_);
      DARABONBA_PTR_TO_JSON(webhook, webhook_);
    };
    friend void from_json(const Darabonba::Json& j, GetPipelineResponseBodyPipelinePipelineConfigSourcesData& obj) { 
      DARABONBA_PTR_FROM_JSON(branch, branch_);
      DARABONBA_PTR_FROM_JSON(cloneDepth, cloneDepth_);
      DARABONBA_PTR_FROM_JSON(credentialId, credentialId_);
      DARABONBA_PTR_FROM_JSON(credentialLabel, credentialLabel_);
      DARABONBA_PTR_FROM_JSON(credentialType, credentialType_);
      DARABONBA_PTR_FROM_JSON(events, events_);
      DARABONBA_PTR_FROM_JSON(isBranchMode, isBranchMode_);
      DARABONBA_PTR_FROM_JSON(isCloneDepth, isCloneDepth_);
      DARABONBA_PTR_FROM_JSON(isSubmodule, isSubmodule_);
      DARABONBA_PTR_FROM_JSON(isTrigger, isTrigger_);
      DARABONBA_PTR_FROM_JSON(label, label_);
      DARABONBA_PTR_FROM_JSON(namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(repo, repo_);
      DARABONBA_PTR_FROM_JSON(serviceConnectionId, serviceConnectionId_);
      DARABONBA_PTR_FROM_JSON(triggerFilter, triggerFilter_);
      DARABONBA_PTR_FROM_JSON(webhook, webhook_);
    };
    GetPipelineResponseBodyPipelinePipelineConfigSourcesData() = default ;
    GetPipelineResponseBodyPipelinePipelineConfigSourcesData(const GetPipelineResponseBodyPipelinePipelineConfigSourcesData &) = default ;
    GetPipelineResponseBodyPipelinePipelineConfigSourcesData(GetPipelineResponseBodyPipelinePipelineConfigSourcesData &&) = default ;
    GetPipelineResponseBodyPipelinePipelineConfigSourcesData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPipelineResponseBodyPipelinePipelineConfigSourcesData() = default ;
    GetPipelineResponseBodyPipelinePipelineConfigSourcesData& operator=(const GetPipelineResponseBodyPipelinePipelineConfigSourcesData &) = default ;
    GetPipelineResponseBodyPipelinePipelineConfigSourcesData& operator=(GetPipelineResponseBodyPipelinePipelineConfigSourcesData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->branch_ == nullptr
        && return this->cloneDepth_ == nullptr && return this->credentialId_ == nullptr && return this->credentialLabel_ == nullptr && return this->credentialType_ == nullptr && return this->events_ == nullptr
        && return this->isBranchMode_ == nullptr && return this->isCloneDepth_ == nullptr && return this->isSubmodule_ == nullptr && return this->isTrigger_ == nullptr && return this->label_ == nullptr
        && return this->namespace_ == nullptr && return this->repo_ == nullptr && return this->serviceConnectionId_ == nullptr && return this->triggerFilter_ == nullptr && return this->webhook_ == nullptr; };
    // branch Field Functions 
    bool hasBranch() const { return this->branch_ != nullptr;};
    void deleteBranch() { this->branch_ = nullptr;};
    inline string branch() const { DARABONBA_PTR_GET_DEFAULT(branch_, "") };
    inline GetPipelineResponseBodyPipelinePipelineConfigSourcesData& setBranch(string branch) { DARABONBA_PTR_SET_VALUE(branch_, branch) };


    // cloneDepth Field Functions 
    bool hasCloneDepth() const { return this->cloneDepth_ != nullptr;};
    void deleteCloneDepth() { this->cloneDepth_ = nullptr;};
    inline int64_t cloneDepth() const { DARABONBA_PTR_GET_DEFAULT(cloneDepth_, 0L) };
    inline GetPipelineResponseBodyPipelinePipelineConfigSourcesData& setCloneDepth(int64_t cloneDepth) { DARABONBA_PTR_SET_VALUE(cloneDepth_, cloneDepth) };


    // credentialId Field Functions 
    bool hasCredentialId() const { return this->credentialId_ != nullptr;};
    void deleteCredentialId() { this->credentialId_ = nullptr;};
    inline int64_t credentialId() const { DARABONBA_PTR_GET_DEFAULT(credentialId_, 0L) };
    inline GetPipelineResponseBodyPipelinePipelineConfigSourcesData& setCredentialId(int64_t credentialId) { DARABONBA_PTR_SET_VALUE(credentialId_, credentialId) };


    // credentialLabel Field Functions 
    bool hasCredentialLabel() const { return this->credentialLabel_ != nullptr;};
    void deleteCredentialLabel() { this->credentialLabel_ = nullptr;};
    inline string credentialLabel() const { DARABONBA_PTR_GET_DEFAULT(credentialLabel_, "") };
    inline GetPipelineResponseBodyPipelinePipelineConfigSourcesData& setCredentialLabel(string credentialLabel) { DARABONBA_PTR_SET_VALUE(credentialLabel_, credentialLabel) };


    // credentialType Field Functions 
    bool hasCredentialType() const { return this->credentialType_ != nullptr;};
    void deleteCredentialType() { this->credentialType_ = nullptr;};
    inline string credentialType() const { DARABONBA_PTR_GET_DEFAULT(credentialType_, "") };
    inline GetPipelineResponseBodyPipelinePipelineConfigSourcesData& setCredentialType(string credentialType) { DARABONBA_PTR_SET_VALUE(credentialType_, credentialType) };


    // events Field Functions 
    bool hasEvents() const { return this->events_ != nullptr;};
    void deleteEvents() { this->events_ = nullptr;};
    inline const vector<string> & events() const { DARABONBA_PTR_GET_CONST(events_, vector<string>) };
    inline vector<string> events() { DARABONBA_PTR_GET(events_, vector<string>) };
    inline GetPipelineResponseBodyPipelinePipelineConfigSourcesData& setEvents(const vector<string> & events) { DARABONBA_PTR_SET_VALUE(events_, events) };
    inline GetPipelineResponseBodyPipelinePipelineConfigSourcesData& setEvents(vector<string> && events) { DARABONBA_PTR_SET_RVALUE(events_, events) };


    // isBranchMode Field Functions 
    bool hasIsBranchMode() const { return this->isBranchMode_ != nullptr;};
    void deleteIsBranchMode() { this->isBranchMode_ = nullptr;};
    inline bool isBranchMode() const { DARABONBA_PTR_GET_DEFAULT(isBranchMode_, false) };
    inline GetPipelineResponseBodyPipelinePipelineConfigSourcesData& setIsBranchMode(bool isBranchMode) { DARABONBA_PTR_SET_VALUE(isBranchMode_, isBranchMode) };


    // isCloneDepth Field Functions 
    bool hasIsCloneDepth() const { return this->isCloneDepth_ != nullptr;};
    void deleteIsCloneDepth() { this->isCloneDepth_ = nullptr;};
    inline bool isCloneDepth() const { DARABONBA_PTR_GET_DEFAULT(isCloneDepth_, false) };
    inline GetPipelineResponseBodyPipelinePipelineConfigSourcesData& setIsCloneDepth(bool isCloneDepth) { DARABONBA_PTR_SET_VALUE(isCloneDepth_, isCloneDepth) };


    // isSubmodule Field Functions 
    bool hasIsSubmodule() const { return this->isSubmodule_ != nullptr;};
    void deleteIsSubmodule() { this->isSubmodule_ = nullptr;};
    inline bool isSubmodule() const { DARABONBA_PTR_GET_DEFAULT(isSubmodule_, false) };
    inline GetPipelineResponseBodyPipelinePipelineConfigSourcesData& setIsSubmodule(bool isSubmodule) { DARABONBA_PTR_SET_VALUE(isSubmodule_, isSubmodule) };


    // isTrigger Field Functions 
    bool hasIsTrigger() const { return this->isTrigger_ != nullptr;};
    void deleteIsTrigger() { this->isTrigger_ = nullptr;};
    inline bool isTrigger() const { DARABONBA_PTR_GET_DEFAULT(isTrigger_, false) };
    inline GetPipelineResponseBodyPipelinePipelineConfigSourcesData& setIsTrigger(bool isTrigger) { DARABONBA_PTR_SET_VALUE(isTrigger_, isTrigger) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline GetPipelineResponseBodyPipelinePipelineConfigSourcesData& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline GetPipelineResponseBodyPipelinePipelineConfigSourcesData& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // repo Field Functions 
    bool hasRepo() const { return this->repo_ != nullptr;};
    void deleteRepo() { this->repo_ = nullptr;};
    inline string repo() const { DARABONBA_PTR_GET_DEFAULT(repo_, "") };
    inline GetPipelineResponseBodyPipelinePipelineConfigSourcesData& setRepo(string repo) { DARABONBA_PTR_SET_VALUE(repo_, repo) };


    // serviceConnectionId Field Functions 
    bool hasServiceConnectionId() const { return this->serviceConnectionId_ != nullptr;};
    void deleteServiceConnectionId() { this->serviceConnectionId_ = nullptr;};
    inline int64_t serviceConnectionId() const { DARABONBA_PTR_GET_DEFAULT(serviceConnectionId_, 0L) };
    inline GetPipelineResponseBodyPipelinePipelineConfigSourcesData& setServiceConnectionId(int64_t serviceConnectionId) { DARABONBA_PTR_SET_VALUE(serviceConnectionId_, serviceConnectionId) };


    // triggerFilter Field Functions 
    bool hasTriggerFilter() const { return this->triggerFilter_ != nullptr;};
    void deleteTriggerFilter() { this->triggerFilter_ = nullptr;};
    inline string triggerFilter() const { DARABONBA_PTR_GET_DEFAULT(triggerFilter_, "") };
    inline GetPipelineResponseBodyPipelinePipelineConfigSourcesData& setTriggerFilter(string triggerFilter) { DARABONBA_PTR_SET_VALUE(triggerFilter_, triggerFilter) };


    // webhook Field Functions 
    bool hasWebhook() const { return this->webhook_ != nullptr;};
    void deleteWebhook() { this->webhook_ = nullptr;};
    inline string webhook() const { DARABONBA_PTR_GET_DEFAULT(webhook_, "") };
    inline GetPipelineResponseBodyPipelinePipelineConfigSourcesData& setWebhook(string webhook) { DARABONBA_PTR_SET_VALUE(webhook_, webhook) };


  protected:
    std::shared_ptr<string> branch_ = nullptr;
    std::shared_ptr<int64_t> cloneDepth_ = nullptr;
    // Credential Id
    std::shared_ptr<int64_t> credentialId_ = nullptr;
    // Credential Label
    std::shared_ptr<string> credentialLabel_ = nullptr;
    // Credential Type
    std::shared_ptr<string> credentialType_ = nullptr;
    std::shared_ptr<vector<string>> events_ = nullptr;
    std::shared_ptr<bool> isBranchMode_ = nullptr;
    std::shared_ptr<bool> isCloneDepth_ = nullptr;
    std::shared_ptr<bool> isSubmodule_ = nullptr;
    std::shared_ptr<bool> isTrigger_ = nullptr;
    std::shared_ptr<string> label_ = nullptr;
    std::shared_ptr<string> namespace_ = nullptr;
    std::shared_ptr<string> repo_ = nullptr;
    std::shared_ptr<int64_t> serviceConnectionId_ = nullptr;
    std::shared_ptr<string> triggerFilter_ = nullptr;
    std::shared_ptr<string> webhook_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
