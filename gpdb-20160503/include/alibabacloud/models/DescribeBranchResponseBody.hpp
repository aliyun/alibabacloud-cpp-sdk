// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBRANCHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBRANCHRESPONSEBODY_HPP_
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
  class DescribeBranchResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBranchResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Branch, branch_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBranchResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Branch, branch_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeBranchResponseBody() = default ;
    DescribeBranchResponseBody(const DescribeBranchResponseBody &) = default ;
    DescribeBranchResponseBody(DescribeBranchResponseBody &&) = default ;
    DescribeBranchResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBranchResponseBody() = default ;
    DescribeBranchResponseBody& operator=(const DescribeBranchResponseBody &) = default ;
    DescribeBranchResponseBody& operator=(DescribeBranchResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Branch : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Branch& obj) { 
        DARABONBA_PTR_TO_JSON(BranchId, branchId_);
        DARABONBA_PTR_TO_JSON(BranchName, branchName_);
        DARABONBA_PTR_TO_JSON(ComputeEndpoint, computeEndpoint_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(ExpiresAt, expiresAt_);
        DARABONBA_PTR_TO_JSON(InitSource, initSource_);
        DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
        DARABONBA_PTR_TO_JSON(ParentBranchId, parentBranchId_);
        DARABONBA_PTR_TO_JSON(ParentBranchName, parentBranchName_);
        DARABONBA_PTR_TO_JSON(ParentLSN, parentLSN_);
        DARABONBA_PTR_TO_JSON(ParentTimestamp, parentTimestamp_);
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
        DARABONBA_PTR_TO_JSON(Protected, protected_);
        DARABONBA_PTR_TO_JSON(ServiceType, serviceType_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
      };
      friend void from_json(const Darabonba::Json& j, Branch& obj) { 
        DARABONBA_PTR_FROM_JSON(BranchId, branchId_);
        DARABONBA_PTR_FROM_JSON(BranchName, branchName_);
        DARABONBA_PTR_FROM_JSON(ComputeEndpoint, computeEndpoint_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(ExpiresAt, expiresAt_);
        DARABONBA_PTR_FROM_JSON(InitSource, initSource_);
        DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
        DARABONBA_PTR_FROM_JSON(ParentBranchId, parentBranchId_);
        DARABONBA_PTR_FROM_JSON(ParentBranchName, parentBranchName_);
        DARABONBA_PTR_FROM_JSON(ParentLSN, parentLSN_);
        DARABONBA_PTR_FROM_JSON(ParentTimestamp, parentTimestamp_);
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
        DARABONBA_PTR_FROM_JSON(Protected, protected_);
        DARABONBA_PTR_FROM_JSON(ServiceType, serviceType_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
      };
      Branch() = default ;
      Branch(const Branch &) = default ;
      Branch(Branch &&) = default ;
      Branch(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Branch() = default ;
      Branch& operator=(const Branch &) = default ;
      Branch& operator=(Branch &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Tags() = default ;
        Tags(const Tags &) = default ;
        Tags(Tags &&) = default ;
        Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tags() = default ;
        Tags& operator=(const Tags &) = default ;
        Tags& operator=(Tags &&) = default ;
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
        inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The tag key.
        shared_ptr<string> key_ {};
        // The tag value.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->branchId_ == nullptr
        && this->branchName_ == nullptr && this->computeEndpoint_ == nullptr && this->createTime_ == nullptr && this->description_ == nullptr && this->expiresAt_ == nullptr
        && this->initSource_ == nullptr && this->isDefault_ == nullptr && this->parentBranchId_ == nullptr && this->parentBranchName_ == nullptr && this->parentLSN_ == nullptr
        && this->parentTimestamp_ == nullptr && this->projectId_ == nullptr && this->protected_ == nullptr && this->serviceType_ == nullptr && this->status_ == nullptr
        && this->tags_ == nullptr; };
      // branchId Field Functions 
      bool hasBranchId() const { return this->branchId_ != nullptr;};
      void deleteBranchId() { this->branchId_ = nullptr;};
      inline string getBranchId() const { DARABONBA_PTR_GET_DEFAULT(branchId_, "") };
      inline Branch& setBranchId(string branchId) { DARABONBA_PTR_SET_VALUE(branchId_, branchId) };


      // branchName Field Functions 
      bool hasBranchName() const { return this->branchName_ != nullptr;};
      void deleteBranchName() { this->branchName_ = nullptr;};
      inline string getBranchName() const { DARABONBA_PTR_GET_DEFAULT(branchName_, "") };
      inline Branch& setBranchName(string branchName) { DARABONBA_PTR_SET_VALUE(branchName_, branchName) };


      // computeEndpoint Field Functions 
      bool hasComputeEndpoint() const { return this->computeEndpoint_ != nullptr;};
      void deleteComputeEndpoint() { this->computeEndpoint_ = nullptr;};
      inline string getComputeEndpoint() const { DARABONBA_PTR_GET_DEFAULT(computeEndpoint_, "") };
      inline Branch& setComputeEndpoint(string computeEndpoint) { DARABONBA_PTR_SET_VALUE(computeEndpoint_, computeEndpoint) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Branch& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Branch& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // expiresAt Field Functions 
      bool hasExpiresAt() const { return this->expiresAt_ != nullptr;};
      void deleteExpiresAt() { this->expiresAt_ = nullptr;};
      inline string getExpiresAt() const { DARABONBA_PTR_GET_DEFAULT(expiresAt_, "") };
      inline Branch& setExpiresAt(string expiresAt) { DARABONBA_PTR_SET_VALUE(expiresAt_, expiresAt) };


      // initSource Field Functions 
      bool hasInitSource() const { return this->initSource_ != nullptr;};
      void deleteInitSource() { this->initSource_ = nullptr;};
      inline string getInitSource() const { DARABONBA_PTR_GET_DEFAULT(initSource_, "") };
      inline Branch& setInitSource(string initSource) { DARABONBA_PTR_SET_VALUE(initSource_, initSource) };


      // isDefault Field Functions 
      bool hasIsDefault() const { return this->isDefault_ != nullptr;};
      void deleteIsDefault() { this->isDefault_ = nullptr;};
      inline bool getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
      inline Branch& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


      // parentBranchId Field Functions 
      bool hasParentBranchId() const { return this->parentBranchId_ != nullptr;};
      void deleteParentBranchId() { this->parentBranchId_ = nullptr;};
      inline string getParentBranchId() const { DARABONBA_PTR_GET_DEFAULT(parentBranchId_, "") };
      inline Branch& setParentBranchId(string parentBranchId) { DARABONBA_PTR_SET_VALUE(parentBranchId_, parentBranchId) };


      // parentBranchName Field Functions 
      bool hasParentBranchName() const { return this->parentBranchName_ != nullptr;};
      void deleteParentBranchName() { this->parentBranchName_ = nullptr;};
      inline string getParentBranchName() const { DARABONBA_PTR_GET_DEFAULT(parentBranchName_, "") };
      inline Branch& setParentBranchName(string parentBranchName) { DARABONBA_PTR_SET_VALUE(parentBranchName_, parentBranchName) };


      // parentLSN Field Functions 
      bool hasParentLSN() const { return this->parentLSN_ != nullptr;};
      void deleteParentLSN() { this->parentLSN_ = nullptr;};
      inline string getParentLSN() const { DARABONBA_PTR_GET_DEFAULT(parentLSN_, "") };
      inline Branch& setParentLSN(string parentLSN) { DARABONBA_PTR_SET_VALUE(parentLSN_, parentLSN) };


      // parentTimestamp Field Functions 
      bool hasParentTimestamp() const { return this->parentTimestamp_ != nullptr;};
      void deleteParentTimestamp() { this->parentTimestamp_ = nullptr;};
      inline string getParentTimestamp() const { DARABONBA_PTR_GET_DEFAULT(parentTimestamp_, "") };
      inline Branch& setParentTimestamp(string parentTimestamp) { DARABONBA_PTR_SET_VALUE(parentTimestamp_, parentTimestamp) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
      inline Branch& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      // protected Field Functions 
      bool hasProtected() const { return this->protected_ != nullptr;};
      void deleteProtected() { this->protected_ = nullptr;};
      inline bool getProtected() const { DARABONBA_PTR_GET_DEFAULT(protected_, false) };
      inline Branch& setProtected(bool _protected) { DARABONBA_PTR_SET_VALUE(protected_, _protected) };


      // serviceType Field Functions 
      bool hasServiceType() const { return this->serviceType_ != nullptr;};
      void deleteServiceType() { this->serviceType_ = nullptr;};
      inline string getServiceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
      inline Branch& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Branch& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<Branch::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Branch::Tags>) };
      inline vector<Branch::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Branch::Tags>) };
      inline Branch& setTags(const vector<Branch::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Branch& setTags(vector<Branch::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    protected:
      // The branch ID, which uniquely identifies a Supabase branch.
      shared_ptr<string> branchId_ {};
      // The branch name.
      shared_ptr<string> branchName_ {};
      // The connection information of the compute node associated with the branch.
      shared_ptr<string> computeEndpoint_ {};
      // The time when the branch was created, in ISO 8601 UTC format.
      shared_ptr<string> createTime_ {};
      // The branch description.
      shared_ptr<string> description_ {};
      // The time when the branch expires and is automatically deleted, in ISO 8601 UTC format.
      shared_ptr<string> expiresAt_ {};
      // The initialization source of the branch.
      // 
      // Valid values:
      // - ParentData: Copies the schema and data from the parent branch. This is the default value.
      // - SchemaOnly: Copies only the schema structure.
      shared_ptr<string> initSource_ {};
      // Indicates whether this is the default branch.
      shared_ptr<bool> isDefault_ {};
      // The parent branch ID, which specifies the parent branch of a new branch or a query condition.
      shared_ptr<string> parentBranchId_ {};
      // The parent branch name. This value is empty or displayed as - for the primary branch.
      shared_ptr<string> parentBranchName_ {};
      // The Log Sequence Number (LSN) of the parent branch at the time this branch was created.
      shared_ptr<string> parentLSN_ {};
      // The data synchronization point in time selected from the parent branch when this branch was created, in ISO 8601 UTC format.
      // 
      // Note:
      // - For child branches, this value indicates the point in time of the parent branch selected during creation.
      // - If no parent branch exists, the value 1970-01-01T00:00:00.000Z is returned.
      shared_ptr<string> parentTimestamp_ {};
      // The Supabase project ID that corresponds to the primary branch.
      shared_ptr<string> projectId_ {};
      // Indicates whether branch protection is enabled. A value of true indicates that branch protection is enabled. A value of false indicates that branch protection is disabled.
      shared_ptr<bool> protected_ {};
      // The service type.
      // 
      // Valid values:
      // - Supabase: Supabase service.
      // - Memory: Memory service.
      shared_ptr<string> serviceType_ {};
      // The branch status.
      shared_ptr<string> status_ {};
      // The list of branch tags.
      shared_ptr<vector<Branch::Tags>> tags_ {};
    };

    virtual bool empty() const override { return this->branch_ == nullptr
        && this->requestId_ == nullptr; };
    // branch Field Functions 
    bool hasBranch() const { return this->branch_ != nullptr;};
    void deleteBranch() { this->branch_ = nullptr;};
    inline const DescribeBranchResponseBody::Branch & getBranch() const { DARABONBA_PTR_GET_CONST(branch_, DescribeBranchResponseBody::Branch) };
    inline DescribeBranchResponseBody::Branch getBranch() { DARABONBA_PTR_GET(branch_, DescribeBranchResponseBody::Branch) };
    inline DescribeBranchResponseBody& setBranch(const DescribeBranchResponseBody::Branch & branch) { DARABONBA_PTR_SET_VALUE(branch_, branch) };
    inline DescribeBranchResponseBody& setBranch(DescribeBranchResponseBody::Branch && branch) { DARABONBA_PTR_SET_RVALUE(branch_, branch) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBranchResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The branch list. Each element represents a Supabase branch.
    shared_ptr<DescribeBranchResponseBody::Branch> branch_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
