// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBRANCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEBRANCHREQUEST_HPP_
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
  class CreateBranchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBranchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BranchName, branchName_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ExpiresAt, expiresAt_);
      DARABONBA_PTR_TO_JSON(InitSource, initSource_);
      DARABONBA_PTR_TO_JSON(ParentBranchId, parentBranchId_);
      DARABONBA_PTR_TO_JSON(ParentLsn, parentLsn_);
      DARABONBA_PTR_TO_JSON(ParentTimestamp, parentTimestamp_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(Protected, protected_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBranchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BranchName, branchName_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ExpiresAt, expiresAt_);
      DARABONBA_PTR_FROM_JSON(InitSource, initSource_);
      DARABONBA_PTR_FROM_JSON(ParentBranchId, parentBranchId_);
      DARABONBA_PTR_FROM_JSON(ParentLsn, parentLsn_);
      DARABONBA_PTR_FROM_JSON(ParentTimestamp, parentTimestamp_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(Protected, protected_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    CreateBranchRequest() = default ;
    CreateBranchRequest(const CreateBranchRequest &) = default ;
    CreateBranchRequest(CreateBranchRequest &&) = default ;
    CreateBranchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBranchRequest() = default ;
    CreateBranchRequest& operator=(const CreateBranchRequest &) = default ;
    CreateBranchRequest& operator=(CreateBranchRequest &&) = default ;
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

    virtual bool empty() const override { return this->branchName_ == nullptr
        && this->clientToken_ == nullptr && this->description_ == nullptr && this->expiresAt_ == nullptr && this->initSource_ == nullptr && this->parentBranchId_ == nullptr
        && this->parentLsn_ == nullptr && this->parentTimestamp_ == nullptr && this->projectId_ == nullptr && this->protected_ == nullptr && this->regionId_ == nullptr
        && this->tag_ == nullptr; };
    // branchName Field Functions 
    bool hasBranchName() const { return this->branchName_ != nullptr;};
    void deleteBranchName() { this->branchName_ = nullptr;};
    inline string getBranchName() const { DARABONBA_PTR_GET_DEFAULT(branchName_, "") };
    inline CreateBranchRequest& setBranchName(string branchName) { DARABONBA_PTR_SET_VALUE(branchName_, branchName) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateBranchRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateBranchRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // expiresAt Field Functions 
    bool hasExpiresAt() const { return this->expiresAt_ != nullptr;};
    void deleteExpiresAt() { this->expiresAt_ = nullptr;};
    inline string getExpiresAt() const { DARABONBA_PTR_GET_DEFAULT(expiresAt_, "") };
    inline CreateBranchRequest& setExpiresAt(string expiresAt) { DARABONBA_PTR_SET_VALUE(expiresAt_, expiresAt) };


    // initSource Field Functions 
    bool hasInitSource() const { return this->initSource_ != nullptr;};
    void deleteInitSource() { this->initSource_ = nullptr;};
    inline string getInitSource() const { DARABONBA_PTR_GET_DEFAULT(initSource_, "") };
    inline CreateBranchRequest& setInitSource(string initSource) { DARABONBA_PTR_SET_VALUE(initSource_, initSource) };


    // parentBranchId Field Functions 
    bool hasParentBranchId() const { return this->parentBranchId_ != nullptr;};
    void deleteParentBranchId() { this->parentBranchId_ = nullptr;};
    inline string getParentBranchId() const { DARABONBA_PTR_GET_DEFAULT(parentBranchId_, "") };
    inline CreateBranchRequest& setParentBranchId(string parentBranchId) { DARABONBA_PTR_SET_VALUE(parentBranchId_, parentBranchId) };


    // parentLsn Field Functions 
    bool hasParentLsn() const { return this->parentLsn_ != nullptr;};
    void deleteParentLsn() { this->parentLsn_ = nullptr;};
    inline string getParentLsn() const { DARABONBA_PTR_GET_DEFAULT(parentLsn_, "") };
    inline CreateBranchRequest& setParentLsn(string parentLsn) { DARABONBA_PTR_SET_VALUE(parentLsn_, parentLsn) };


    // parentTimestamp Field Functions 
    bool hasParentTimestamp() const { return this->parentTimestamp_ != nullptr;};
    void deleteParentTimestamp() { this->parentTimestamp_ = nullptr;};
    inline string getParentTimestamp() const { DARABONBA_PTR_GET_DEFAULT(parentTimestamp_, "") };
    inline CreateBranchRequest& setParentTimestamp(string parentTimestamp) { DARABONBA_PTR_SET_VALUE(parentTimestamp_, parentTimestamp) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline CreateBranchRequest& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // protected Field Functions 
    bool hasProtected() const { return this->protected_ != nullptr;};
    void deleteProtected() { this->protected_ = nullptr;};
    inline bool getProtected() const { DARABONBA_PTR_GET_DEFAULT(protected_, false) };
    inline CreateBranchRequest& setProtected(bool _protected) { DARABONBA_PTR_SET_VALUE(protected_, _protected) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateBranchRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateBranchRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateBranchRequest::Tag>) };
    inline vector<CreateBranchRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateBranchRequest::Tag>) };
    inline CreateBranchRequest& setTag(const vector<CreateBranchRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateBranchRequest& setTag(vector<CreateBranchRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The branch name.
    // 
    // This parameter is required.
    shared_ptr<string> branchName_ {};
    // The client idempotency token. This token ensures the idempotence of retry requests.
    shared_ptr<string> clientToken_ {};
    // The branch description.
    shared_ptr<string> description_ {};
    // The time at which the branch automatically expires and is deleted. The value is in ISO 8601 UTC format.
    shared_ptr<string> expiresAt_ {};
    // The initialization source of the branch.
    // 
    // Valid values:
    // - ParentData: copies the schema and data from the parent branch. This is the default value.
    // - SchemaOnly: copies only the schema structure.
    shared_ptr<string> initSource_ {};
    // The parent branch ID. This parameter specifies the parent branch for the new branch or query condition.
    // 
    // This parameter is required.
    shared_ptr<string> parentBranchId_ {};
    // The log sequence number (LSN) from the parent branch at which the branch is created.
    shared_ptr<string> parentLsn_ {};
    // The point in time for data synchronization from the parent branch when creating the branch. The value is in ISO 8601 UTC format.
    // 
    // Default value: the current time.
    shared_ptr<string> parentTimestamp_ {};
    // The Supabase project ID that corresponds to the primary branch.
    // 
    // This parameter is required.
    shared_ptr<string> projectId_ {};
    // Specifies whether to enable branch protection.
    // 
    // Valid values:
    // - true: Enables branch protection.
    // - false: Disables branch protection. This is the default value.
    shared_ptr<bool> protected_ {};
    // The region ID. This parameter is required when you create a primary branch. When you create a child branch, the region is inherited from the primary branch by default.
    shared_ptr<string> regionId_ {};
    // The list of branch tags.
    shared_ptr<vector<CreateBranchRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
