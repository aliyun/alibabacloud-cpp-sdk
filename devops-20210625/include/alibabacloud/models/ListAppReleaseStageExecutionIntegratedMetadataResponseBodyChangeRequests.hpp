// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPRELEASESTAGEEXECUTIONINTEGRATEDMETADATARESPONSEBODYCHANGEREQUESTS_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPRELEASESTAGEEXECUTIONINTEGRATEDMETADATARESPONSEBODYCHANGEREQUESTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListAppReleaseStageExecutionIntegratedMetadataResponseBodyChangeRequests : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAppReleaseStageExecutionIntegratedMetadataResponseBodyChangeRequests& obj) { 
      DARABONBA_PTR_TO_JSON(sn, sn_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(branchName, branchName_);
      DARABONBA_PTR_TO_JSON(commitId, commitId_);
      DARABONBA_PTR_TO_JSON(ownerAccountId, ownerAccountId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAppReleaseStageExecutionIntegratedMetadataResponseBodyChangeRequests& obj) { 
      DARABONBA_PTR_FROM_JSON(sn, sn_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(branchName, branchName_);
      DARABONBA_PTR_FROM_JSON(commitId, commitId_);
      DARABONBA_PTR_FROM_JSON(ownerAccountId, ownerAccountId_);
    };
    ListAppReleaseStageExecutionIntegratedMetadataResponseBodyChangeRequests() = default ;
    ListAppReleaseStageExecutionIntegratedMetadataResponseBodyChangeRequests(const ListAppReleaseStageExecutionIntegratedMetadataResponseBodyChangeRequests &) = default ;
    ListAppReleaseStageExecutionIntegratedMetadataResponseBodyChangeRequests(ListAppReleaseStageExecutionIntegratedMetadataResponseBodyChangeRequests &&) = default ;
    ListAppReleaseStageExecutionIntegratedMetadataResponseBodyChangeRequests(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAppReleaseStageExecutionIntegratedMetadataResponseBodyChangeRequests() = default ;
    ListAppReleaseStageExecutionIntegratedMetadataResponseBodyChangeRequests& operator=(const ListAppReleaseStageExecutionIntegratedMetadataResponseBodyChangeRequests &) = default ;
    ListAppReleaseStageExecutionIntegratedMetadataResponseBodyChangeRequests& operator=(ListAppReleaseStageExecutionIntegratedMetadataResponseBodyChangeRequests &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sn_ == nullptr
        && return this->name_ == nullptr && return this->branchName_ == nullptr && return this->commitId_ == nullptr && return this->ownerAccountId_ == nullptr; };
    // sn Field Functions 
    bool hasSn() const { return this->sn_ != nullptr;};
    void deleteSn() { this->sn_ = nullptr;};
    inline string sn() const { DARABONBA_PTR_GET_DEFAULT(sn_, "") };
    inline ListAppReleaseStageExecutionIntegratedMetadataResponseBodyChangeRequests& setSn(string sn) { DARABONBA_PTR_SET_VALUE(sn_, sn) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListAppReleaseStageExecutionIntegratedMetadataResponseBodyChangeRequests& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // branchName Field Functions 
    bool hasBranchName() const { return this->branchName_ != nullptr;};
    void deleteBranchName() { this->branchName_ = nullptr;};
    inline string branchName() const { DARABONBA_PTR_GET_DEFAULT(branchName_, "") };
    inline ListAppReleaseStageExecutionIntegratedMetadataResponseBodyChangeRequests& setBranchName(string branchName) { DARABONBA_PTR_SET_VALUE(branchName_, branchName) };


    // commitId Field Functions 
    bool hasCommitId() const { return this->commitId_ != nullptr;};
    void deleteCommitId() { this->commitId_ = nullptr;};
    inline string commitId() const { DARABONBA_PTR_GET_DEFAULT(commitId_, "") };
    inline ListAppReleaseStageExecutionIntegratedMetadataResponseBodyChangeRequests& setCommitId(string commitId) { DARABONBA_PTR_SET_VALUE(commitId_, commitId) };


    // ownerAccountId Field Functions 
    bool hasOwnerAccountId() const { return this->ownerAccountId_ != nullptr;};
    void deleteOwnerAccountId() { this->ownerAccountId_ = nullptr;};
    inline string ownerAccountId() const { DARABONBA_PTR_GET_DEFAULT(ownerAccountId_, "") };
    inline ListAppReleaseStageExecutionIntegratedMetadataResponseBodyChangeRequests& setOwnerAccountId(string ownerAccountId) { DARABONBA_PTR_SET_VALUE(ownerAccountId_, ownerAccountId) };


  protected:
    std::shared_ptr<string> sn_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> branchName_ = nullptr;
    std::shared_ptr<string> commitId_ = nullptr;
    std::shared_ptr<string> ownerAccountId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
