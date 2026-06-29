// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEBRANCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEBRANCHREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class UpdateBranchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateBranchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BranchId, branchId_);
      DARABONBA_PTR_TO_JSON(BranchName, branchName_);
      DARABONBA_PTR_TO_JSON(ClearExpiresAt, clearExpiresAt_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ExpiresAt, expiresAt_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(Protected, protected_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateBranchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BranchId, branchId_);
      DARABONBA_PTR_FROM_JSON(BranchName, branchName_);
      DARABONBA_PTR_FROM_JSON(ClearExpiresAt, clearExpiresAt_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ExpiresAt, expiresAt_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(Protected, protected_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    UpdateBranchRequest() = default ;
    UpdateBranchRequest(const UpdateBranchRequest &) = default ;
    UpdateBranchRequest(UpdateBranchRequest &&) = default ;
    UpdateBranchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateBranchRequest() = default ;
    UpdateBranchRequest& operator=(const UpdateBranchRequest &) = default ;
    UpdateBranchRequest& operator=(UpdateBranchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The tag key.
      shared_ptr<string> key_ {};
      // The tag value.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->branchId_ == nullptr
        && this->branchName_ == nullptr && this->clearExpiresAt_ == nullptr && this->description_ == nullptr && this->expiresAt_ == nullptr && this->projectId_ == nullptr
        && this->protected_ == nullptr && this->regionId_ == nullptr && this->tag_ == nullptr; };
    // branchId Field Functions 
    bool hasBranchId() const { return this->branchId_ != nullptr;};
    void deleteBranchId() { this->branchId_ = nullptr;};
    inline string getBranchId() const { DARABONBA_PTR_GET_DEFAULT(branchId_, "") };
    inline UpdateBranchRequest& setBranchId(string branchId) { DARABONBA_PTR_SET_VALUE(branchId_, branchId) };


    // branchName Field Functions 
    bool hasBranchName() const { return this->branchName_ != nullptr;};
    void deleteBranchName() { this->branchName_ = nullptr;};
    inline string getBranchName() const { DARABONBA_PTR_GET_DEFAULT(branchName_, "") };
    inline UpdateBranchRequest& setBranchName(string branchName) { DARABONBA_PTR_SET_VALUE(branchName_, branchName) };


    // clearExpiresAt Field Functions 
    bool hasClearExpiresAt() const { return this->clearExpiresAt_ != nullptr;};
    void deleteClearExpiresAt() { this->clearExpiresAt_ = nullptr;};
    inline bool getClearExpiresAt() const { DARABONBA_PTR_GET_DEFAULT(clearExpiresAt_, false) };
    inline UpdateBranchRequest& setClearExpiresAt(bool clearExpiresAt) { DARABONBA_PTR_SET_VALUE(clearExpiresAt_, clearExpiresAt) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateBranchRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // expiresAt Field Functions 
    bool hasExpiresAt() const { return this->expiresAt_ != nullptr;};
    void deleteExpiresAt() { this->expiresAt_ = nullptr;};
    inline string getExpiresAt() const { DARABONBA_PTR_GET_DEFAULT(expiresAt_, "") };
    inline UpdateBranchRequest& setExpiresAt(string expiresAt) { DARABONBA_PTR_SET_VALUE(expiresAt_, expiresAt) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline UpdateBranchRequest& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // protected Field Functions 
    bool hasProtected() const { return this->protected_ != nullptr;};
    void deleteProtected() { this->protected_ = nullptr;};
    inline bool getProtected() const { DARABONBA_PTR_GET_DEFAULT(protected_, false) };
    inline UpdateBranchRequest& setProtected(bool _protected) { DARABONBA_PTR_SET_VALUE(protected_, _protected) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateBranchRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<UpdateBranchRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<UpdateBranchRequest::Tag>) };
    inline vector<UpdateBranchRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<UpdateBranchRequest::Tag>) };
    inline UpdateBranchRequest& setTag(const vector<UpdateBranchRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline UpdateBranchRequest& setTag(vector<UpdateBranchRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The branch ID that uniquely identifies a Supabase branch.
    // 
    // This parameter is required.
    shared_ptr<string> branchId_ {};
    // The branch name.
    // 
    // This parameter is required.
    shared_ptr<string> branchName_ {};
    // Specifies whether to clear the branch expiration time.
    // 
    // Valid values:
    // - true: Clears ExpiresAt.
    // - false: Does not clear ExpiresAt.
    // 
    // If this parameter is not specified, the existing expiration time remains unchanged.
    shared_ptr<bool> clearExpiresAt_ {};
    // The branch description.
    shared_ptr<string> description_ {};
    // The time when the branch automatically expires and is deleted. The value is in ISO 8601 UTC format.
    shared_ptr<string> expiresAt_ {};
    // The Supabase project ID that corresponds to the primary branch.
    // 
    // This parameter is required.
    shared_ptr<string> projectId_ {};
    // Specifies whether to enable branch protection.
    // 
    // Valid values:
    // - true: Branch protection is enabled.
    // - false: Branch protection is disabled. This is the default value.
    shared_ptr<bool> protected_ {};
    // The region ID. This parameter is required when you create a primary branch. When you create a sub-branch, the region of the primary branch is inherited by default.
    shared_ptr<string> regionId_ {};
    // The list of branch tags.
    shared_ptr<vector<UpdateBranchRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
