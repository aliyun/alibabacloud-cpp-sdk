// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECHANGEREQUESTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATECHANGEREQUESTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class CreateChangeRequestResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateChangeRequestResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(appCodeRepoSn, appCodeRepoSn_);
      DARABONBA_PTR_TO_JSON(appName, appName_);
      DARABONBA_PTR_TO_JSON(autoDeleteBranchWhenEnd, autoDeleteBranchWhenEnd_);
      DARABONBA_PTR_TO_JSON(branch, branch_);
      DARABONBA_PTR_TO_JSON(creatorAccountId, creatorAccountId_);
      DARABONBA_PTR_TO_JSON(creatorId, creatorId_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(originBranch, originBranch_);
      DARABONBA_PTR_TO_JSON(originBranchRevisionSha, originBranchRevisionSha_);
      DARABONBA_PTR_TO_JSON(ownerAccountId, ownerAccountId_);
      DARABONBA_PTR_TO_JSON(ownerId, ownerId_);
      DARABONBA_PTR_TO_JSON(sn, sn_);
      DARABONBA_PTR_TO_JSON(state, state_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateChangeRequestResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(appCodeRepoSn, appCodeRepoSn_);
      DARABONBA_PTR_FROM_JSON(appName, appName_);
      DARABONBA_PTR_FROM_JSON(autoDeleteBranchWhenEnd, autoDeleteBranchWhenEnd_);
      DARABONBA_PTR_FROM_JSON(branch, branch_);
      DARABONBA_PTR_FROM_JSON(creatorAccountId, creatorAccountId_);
      DARABONBA_PTR_FROM_JSON(creatorId, creatorId_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(originBranch, originBranch_);
      DARABONBA_PTR_FROM_JSON(originBranchRevisionSha, originBranchRevisionSha_);
      DARABONBA_PTR_FROM_JSON(ownerAccountId, ownerAccountId_);
      DARABONBA_PTR_FROM_JSON(ownerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(sn, sn_);
      DARABONBA_PTR_FROM_JSON(state, state_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    CreateChangeRequestResponseBody() = default ;
    CreateChangeRequestResponseBody(const CreateChangeRequestResponseBody &) = default ;
    CreateChangeRequestResponseBody(CreateChangeRequestResponseBody &&) = default ;
    CreateChangeRequestResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateChangeRequestResponseBody() = default ;
    CreateChangeRequestResponseBody& operator=(const CreateChangeRequestResponseBody &) = default ;
    CreateChangeRequestResponseBody& operator=(CreateChangeRequestResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appCodeRepoSn_ == nullptr
        && return this->appName_ == nullptr && return this->autoDeleteBranchWhenEnd_ == nullptr && return this->branch_ == nullptr && return this->creatorAccountId_ == nullptr && return this->creatorId_ == nullptr
        && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr && return this->name_ == nullptr && return this->originBranch_ == nullptr && return this->originBranchRevisionSha_ == nullptr
        && return this->ownerAccountId_ == nullptr && return this->ownerId_ == nullptr && return this->sn_ == nullptr && return this->state_ == nullptr && return this->type_ == nullptr; };
    // appCodeRepoSn Field Functions 
    bool hasAppCodeRepoSn() const { return this->appCodeRepoSn_ != nullptr;};
    void deleteAppCodeRepoSn() { this->appCodeRepoSn_ = nullptr;};
    inline string appCodeRepoSn() const { DARABONBA_PTR_GET_DEFAULT(appCodeRepoSn_, "") };
    inline CreateChangeRequestResponseBody& setAppCodeRepoSn(string appCodeRepoSn) { DARABONBA_PTR_SET_VALUE(appCodeRepoSn_, appCodeRepoSn) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline CreateChangeRequestResponseBody& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // autoDeleteBranchWhenEnd Field Functions 
    bool hasAutoDeleteBranchWhenEnd() const { return this->autoDeleteBranchWhenEnd_ != nullptr;};
    void deleteAutoDeleteBranchWhenEnd() { this->autoDeleteBranchWhenEnd_ = nullptr;};
    inline bool autoDeleteBranchWhenEnd() const { DARABONBA_PTR_GET_DEFAULT(autoDeleteBranchWhenEnd_, false) };
    inline CreateChangeRequestResponseBody& setAutoDeleteBranchWhenEnd(bool autoDeleteBranchWhenEnd) { DARABONBA_PTR_SET_VALUE(autoDeleteBranchWhenEnd_, autoDeleteBranchWhenEnd) };


    // branch Field Functions 
    bool hasBranch() const { return this->branch_ != nullptr;};
    void deleteBranch() { this->branch_ = nullptr;};
    inline string branch() const { DARABONBA_PTR_GET_DEFAULT(branch_, "") };
    inline CreateChangeRequestResponseBody& setBranch(string branch) { DARABONBA_PTR_SET_VALUE(branch_, branch) };


    // creatorAccountId Field Functions 
    bool hasCreatorAccountId() const { return this->creatorAccountId_ != nullptr;};
    void deleteCreatorAccountId() { this->creatorAccountId_ = nullptr;};
    inline string creatorAccountId() const { DARABONBA_PTR_GET_DEFAULT(creatorAccountId_, "") };
    inline CreateChangeRequestResponseBody& setCreatorAccountId(string creatorAccountId) { DARABONBA_PTR_SET_VALUE(creatorAccountId_, creatorAccountId) };


    // creatorId Field Functions 
    bool hasCreatorId() const { return this->creatorId_ != nullptr;};
    void deleteCreatorId() { this->creatorId_ = nullptr;};
    inline string creatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
    inline CreateChangeRequestResponseBody& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline CreateChangeRequestResponseBody& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline CreateChangeRequestResponseBody& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateChangeRequestResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // originBranch Field Functions 
    bool hasOriginBranch() const { return this->originBranch_ != nullptr;};
    void deleteOriginBranch() { this->originBranch_ = nullptr;};
    inline string originBranch() const { DARABONBA_PTR_GET_DEFAULT(originBranch_, "") };
    inline CreateChangeRequestResponseBody& setOriginBranch(string originBranch) { DARABONBA_PTR_SET_VALUE(originBranch_, originBranch) };


    // originBranchRevisionSha Field Functions 
    bool hasOriginBranchRevisionSha() const { return this->originBranchRevisionSha_ != nullptr;};
    void deleteOriginBranchRevisionSha() { this->originBranchRevisionSha_ = nullptr;};
    inline string originBranchRevisionSha() const { DARABONBA_PTR_GET_DEFAULT(originBranchRevisionSha_, "") };
    inline CreateChangeRequestResponseBody& setOriginBranchRevisionSha(string originBranchRevisionSha) { DARABONBA_PTR_SET_VALUE(originBranchRevisionSha_, originBranchRevisionSha) };


    // ownerAccountId Field Functions 
    bool hasOwnerAccountId() const { return this->ownerAccountId_ != nullptr;};
    void deleteOwnerAccountId() { this->ownerAccountId_ = nullptr;};
    inline string ownerAccountId() const { DARABONBA_PTR_GET_DEFAULT(ownerAccountId_, "") };
    inline CreateChangeRequestResponseBody& setOwnerAccountId(string ownerAccountId) { DARABONBA_PTR_SET_VALUE(ownerAccountId_, ownerAccountId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline CreateChangeRequestResponseBody& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // sn Field Functions 
    bool hasSn() const { return this->sn_ != nullptr;};
    void deleteSn() { this->sn_ = nullptr;};
    inline string sn() const { DARABONBA_PTR_GET_DEFAULT(sn_, "") };
    inline CreateChangeRequestResponseBody& setSn(string sn) { DARABONBA_PTR_SET_VALUE(sn_, sn) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline CreateChangeRequestResponseBody& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateChangeRequestResponseBody& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> appCodeRepoSn_ = nullptr;
    std::shared_ptr<string> appName_ = nullptr;
    std::shared_ptr<bool> autoDeleteBranchWhenEnd_ = nullptr;
    std::shared_ptr<string> branch_ = nullptr;
    std::shared_ptr<string> creatorAccountId_ = nullptr;
    std::shared_ptr<string> creatorId_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> originBranch_ = nullptr;
    std::shared_ptr<string> originBranchRevisionSha_ = nullptr;
    std::shared_ptr<string> ownerAccountId_ = nullptr;
    std::shared_ptr<string> ownerId_ = nullptr;
    std::shared_ptr<string> sn_ = nullptr;
    std::shared_ptr<string> state_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
