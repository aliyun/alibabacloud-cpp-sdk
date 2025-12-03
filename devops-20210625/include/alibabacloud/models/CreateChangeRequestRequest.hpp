// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECHANGEREQUESTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECHANGEREQUESTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class CreateChangeRequestRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateChangeRequestRequest& obj) { 
      DARABONBA_PTR_TO_JSON(appCodeRepoSn, appCodeRepoSn_);
      DARABONBA_PTR_TO_JSON(autoDeleteBranchWhenEnd, autoDeleteBranchWhenEnd_);
      DARABONBA_PTR_TO_JSON(branchName, branchName_);
      DARABONBA_PTR_TO_JSON(createBranch, createBranch_);
      DARABONBA_PTR_TO_JSON(ownerAccountId, ownerAccountId_);
      DARABONBA_PTR_TO_JSON(ownerId, ownerId_);
      DARABONBA_PTR_TO_JSON(title, title_);
      DARABONBA_PTR_TO_JSON(organizationId, organizationId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateChangeRequestRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(appCodeRepoSn, appCodeRepoSn_);
      DARABONBA_PTR_FROM_JSON(autoDeleteBranchWhenEnd, autoDeleteBranchWhenEnd_);
      DARABONBA_PTR_FROM_JSON(branchName, branchName_);
      DARABONBA_PTR_FROM_JSON(createBranch, createBranch_);
      DARABONBA_PTR_FROM_JSON(ownerAccountId, ownerAccountId_);
      DARABONBA_PTR_FROM_JSON(ownerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(title, title_);
      DARABONBA_PTR_FROM_JSON(organizationId, organizationId_);
    };
    CreateChangeRequestRequest() = default ;
    CreateChangeRequestRequest(const CreateChangeRequestRequest &) = default ;
    CreateChangeRequestRequest(CreateChangeRequestRequest &&) = default ;
    CreateChangeRequestRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateChangeRequestRequest() = default ;
    CreateChangeRequestRequest& operator=(const CreateChangeRequestRequest &) = default ;
    CreateChangeRequestRequest& operator=(CreateChangeRequestRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appCodeRepoSn_ == nullptr
        && return this->autoDeleteBranchWhenEnd_ == nullptr && return this->branchName_ == nullptr && return this->createBranch_ == nullptr && return this->ownerAccountId_ == nullptr && return this->ownerId_ == nullptr
        && return this->title_ == nullptr && return this->organizationId_ == nullptr; };
    // appCodeRepoSn Field Functions 
    bool hasAppCodeRepoSn() const { return this->appCodeRepoSn_ != nullptr;};
    void deleteAppCodeRepoSn() { this->appCodeRepoSn_ = nullptr;};
    inline string appCodeRepoSn() const { DARABONBA_PTR_GET_DEFAULT(appCodeRepoSn_, "") };
    inline CreateChangeRequestRequest& setAppCodeRepoSn(string appCodeRepoSn) { DARABONBA_PTR_SET_VALUE(appCodeRepoSn_, appCodeRepoSn) };


    // autoDeleteBranchWhenEnd Field Functions 
    bool hasAutoDeleteBranchWhenEnd() const { return this->autoDeleteBranchWhenEnd_ != nullptr;};
    void deleteAutoDeleteBranchWhenEnd() { this->autoDeleteBranchWhenEnd_ = nullptr;};
    inline bool autoDeleteBranchWhenEnd() const { DARABONBA_PTR_GET_DEFAULT(autoDeleteBranchWhenEnd_, false) };
    inline CreateChangeRequestRequest& setAutoDeleteBranchWhenEnd(bool autoDeleteBranchWhenEnd) { DARABONBA_PTR_SET_VALUE(autoDeleteBranchWhenEnd_, autoDeleteBranchWhenEnd) };


    // branchName Field Functions 
    bool hasBranchName() const { return this->branchName_ != nullptr;};
    void deleteBranchName() { this->branchName_ = nullptr;};
    inline string branchName() const { DARABONBA_PTR_GET_DEFAULT(branchName_, "") };
    inline CreateChangeRequestRequest& setBranchName(string branchName) { DARABONBA_PTR_SET_VALUE(branchName_, branchName) };


    // createBranch Field Functions 
    bool hasCreateBranch() const { return this->createBranch_ != nullptr;};
    void deleteCreateBranch() { this->createBranch_ = nullptr;};
    inline bool createBranch() const { DARABONBA_PTR_GET_DEFAULT(createBranch_, false) };
    inline CreateChangeRequestRequest& setCreateBranch(bool createBranch) { DARABONBA_PTR_SET_VALUE(createBranch_, createBranch) };


    // ownerAccountId Field Functions 
    bool hasOwnerAccountId() const { return this->ownerAccountId_ != nullptr;};
    void deleteOwnerAccountId() { this->ownerAccountId_ = nullptr;};
    inline string ownerAccountId() const { DARABONBA_PTR_GET_DEFAULT(ownerAccountId_, "") };
    inline CreateChangeRequestRequest& setOwnerAccountId(string ownerAccountId) { DARABONBA_PTR_SET_VALUE(ownerAccountId_, ownerAccountId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline CreateChangeRequestRequest& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline CreateChangeRequestRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // organizationId Field Functions 
    bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
    void deleteOrganizationId() { this->organizationId_ = nullptr;};
    inline string organizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
    inline CreateChangeRequestRequest& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appCodeRepoSn_ = nullptr;
    std::shared_ptr<bool> autoDeleteBranchWhenEnd_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> branchName_ = nullptr;
    std::shared_ptr<bool> createBranch_ = nullptr;
    std::shared_ptr<string> ownerAccountId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> ownerId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<string> organizationId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
