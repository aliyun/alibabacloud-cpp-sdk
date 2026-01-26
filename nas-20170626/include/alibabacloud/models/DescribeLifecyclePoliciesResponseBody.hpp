// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIFECYCLEPOLICIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIFECYCLEPOLICIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeLifecyclePoliciesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLifecyclePoliciesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LifecyclePolicies, lifecyclePolicies_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLifecyclePoliciesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LifecyclePolicies, lifecyclePolicies_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeLifecyclePoliciesResponseBody() = default ;
    DescribeLifecyclePoliciesResponseBody(const DescribeLifecyclePoliciesResponseBody &) = default ;
    DescribeLifecyclePoliciesResponseBody(DescribeLifecyclePoliciesResponseBody &&) = default ;
    DescribeLifecyclePoliciesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLifecyclePoliciesResponseBody() = default ;
    DescribeLifecyclePoliciesResponseBody& operator=(const DescribeLifecyclePoliciesResponseBody &) = default ;
    DescribeLifecyclePoliciesResponseBody& operator=(DescribeLifecyclePoliciesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LifecyclePolicies : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LifecyclePolicies& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
        DARABONBA_PTR_TO_JSON(LifecyclePolicyId, lifecyclePolicyId_);
        DARABONBA_PTR_TO_JSON(LifecyclePolicyName, lifecyclePolicyName_);
        DARABONBA_PTR_TO_JSON(LifecyclePolicyType, lifecyclePolicyType_);
        DARABONBA_PTR_TO_JSON(LifecycleRuleName, lifecycleRuleName_);
        DARABONBA_PTR_TO_JSON(Path, path_);
        DARABONBA_PTR_TO_JSON(Paths, paths_);
        DARABONBA_PTR_TO_JSON(RetrieveRules, retrieveRules_);
        DARABONBA_PTR_TO_JSON(StorageType, storageType_);
        DARABONBA_PTR_TO_JSON(TransitRules, transitRules_);
      };
      friend void from_json(const Darabonba::Json& j, LifecyclePolicies& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
        DARABONBA_PTR_FROM_JSON(LifecyclePolicyId, lifecyclePolicyId_);
        DARABONBA_PTR_FROM_JSON(LifecyclePolicyName, lifecyclePolicyName_);
        DARABONBA_PTR_FROM_JSON(LifecyclePolicyType, lifecyclePolicyType_);
        DARABONBA_PTR_FROM_JSON(LifecycleRuleName, lifecycleRuleName_);
        DARABONBA_PTR_FROM_JSON(Path, path_);
        DARABONBA_PTR_FROM_JSON(Paths, paths_);
        DARABONBA_PTR_FROM_JSON(RetrieveRules, retrieveRules_);
        DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
        DARABONBA_PTR_FROM_JSON(TransitRules, transitRules_);
      };
      LifecyclePolicies() = default ;
      LifecyclePolicies(const LifecyclePolicies &) = default ;
      LifecyclePolicies(LifecyclePolicies &&) = default ;
      LifecyclePolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LifecyclePolicies() = default ;
      LifecyclePolicies& operator=(const LifecyclePolicies &) = default ;
      LifecyclePolicies& operator=(LifecyclePolicies &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TransitRules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TransitRules& obj) { 
          DARABONBA_PTR_TO_JSON(Attribute, attribute_);
          DARABONBA_PTR_TO_JSON(Threshold, threshold_);
        };
        friend void from_json(const Darabonba::Json& j, TransitRules& obj) { 
          DARABONBA_PTR_FROM_JSON(Attribute, attribute_);
          DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
        };
        TransitRules() = default ;
        TransitRules(const TransitRules &) = default ;
        TransitRules(TransitRules &&) = default ;
        TransitRules(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TransitRules() = default ;
        TransitRules& operator=(const TransitRules &) = default ;
        TransitRules& operator=(TransitRules &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->attribute_ == nullptr
        && this->threshold_ == nullptr; };
        // attribute Field Functions 
        bool hasAttribute() const { return this->attribute_ != nullptr;};
        void deleteAttribute() { this->attribute_ = nullptr;};
        inline string getAttribute() const { DARABONBA_PTR_GET_DEFAULT(attribute_, "") };
        inline TransitRules& setAttribute(string attribute) { DARABONBA_PTR_SET_VALUE(attribute_, attribute) };


        // threshold Field Functions 
        bool hasThreshold() const { return this->threshold_ != nullptr;};
        void deleteThreshold() { this->threshold_ = nullptr;};
        inline string getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, "") };
        inline TransitRules& setThreshold(string threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


      protected:
        // Attribute of the rule.
        shared_ptr<string> attribute_ {};
        // Threshold for the rule.
        shared_ptr<string> threshold_ {};
      };

      class RetrieveRules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RetrieveRules& obj) { 
          DARABONBA_PTR_TO_JSON(Attribute, attribute_);
          DARABONBA_PTR_TO_JSON(Threshold, threshold_);
        };
        friend void from_json(const Darabonba::Json& j, RetrieveRules& obj) { 
          DARABONBA_PTR_FROM_JSON(Attribute, attribute_);
          DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
        };
        RetrieveRules() = default ;
        RetrieveRules(const RetrieveRules &) = default ;
        RetrieveRules(RetrieveRules &&) = default ;
        RetrieveRules(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RetrieveRules() = default ;
        RetrieveRules& operator=(const RetrieveRules &) = default ;
        RetrieveRules& operator=(RetrieveRules &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->attribute_ == nullptr
        && this->threshold_ == nullptr; };
        // attribute Field Functions 
        bool hasAttribute() const { return this->attribute_ != nullptr;};
        void deleteAttribute() { this->attribute_ = nullptr;};
        inline string getAttribute() const { DARABONBA_PTR_GET_DEFAULT(attribute_, "") };
        inline RetrieveRules& setAttribute(string attribute) { DARABONBA_PTR_SET_VALUE(attribute_, attribute) };


        // threshold Field Functions 
        bool hasThreshold() const { return this->threshold_ != nullptr;};
        void deleteThreshold() { this->threshold_ = nullptr;};
        inline string getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, "") };
        inline RetrieveRules& setThreshold(string threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


      protected:
        // Attribute of the rule.
        shared_ptr<string> attribute_ {};
        // Threshold for the rule.
        shared_ptr<string> threshold_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->description_ == nullptr && this->fileSystemId_ == nullptr && this->lifecyclePolicyId_ == nullptr && this->lifecyclePolicyName_ == nullptr && this->lifecyclePolicyType_ == nullptr
        && this->lifecycleRuleName_ == nullptr && this->path_ == nullptr && this->paths_ == nullptr && this->retrieveRules_ == nullptr && this->storageType_ == nullptr
        && this->transitRules_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline LifecyclePolicies& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline LifecyclePolicies& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // fileSystemId Field Functions 
      bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
      void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
      inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
      inline LifecyclePolicies& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


      // lifecyclePolicyId Field Functions 
      bool hasLifecyclePolicyId() const { return this->lifecyclePolicyId_ != nullptr;};
      void deleteLifecyclePolicyId() { this->lifecyclePolicyId_ = nullptr;};
      inline string getLifecyclePolicyId() const { DARABONBA_PTR_GET_DEFAULT(lifecyclePolicyId_, "") };
      inline LifecyclePolicies& setLifecyclePolicyId(string lifecyclePolicyId) { DARABONBA_PTR_SET_VALUE(lifecyclePolicyId_, lifecyclePolicyId) };


      // lifecyclePolicyName Field Functions 
      bool hasLifecyclePolicyName() const { return this->lifecyclePolicyName_ != nullptr;};
      void deleteLifecyclePolicyName() { this->lifecyclePolicyName_ = nullptr;};
      inline string getLifecyclePolicyName() const { DARABONBA_PTR_GET_DEFAULT(lifecyclePolicyName_, "") };
      inline LifecyclePolicies& setLifecyclePolicyName(string lifecyclePolicyName) { DARABONBA_PTR_SET_VALUE(lifecyclePolicyName_, lifecyclePolicyName) };


      // lifecyclePolicyType Field Functions 
      bool hasLifecyclePolicyType() const { return this->lifecyclePolicyType_ != nullptr;};
      void deleteLifecyclePolicyType() { this->lifecyclePolicyType_ = nullptr;};
      inline string getLifecyclePolicyType() const { DARABONBA_PTR_GET_DEFAULT(lifecyclePolicyType_, "") };
      inline LifecyclePolicies& setLifecyclePolicyType(string lifecyclePolicyType) { DARABONBA_PTR_SET_VALUE(lifecyclePolicyType_, lifecyclePolicyType) };


      // lifecycleRuleName Field Functions 
      bool hasLifecycleRuleName() const { return this->lifecycleRuleName_ != nullptr;};
      void deleteLifecycleRuleName() { this->lifecycleRuleName_ = nullptr;};
      inline string getLifecycleRuleName() const { DARABONBA_PTR_GET_DEFAULT(lifecycleRuleName_, "") };
      inline LifecyclePolicies& setLifecycleRuleName(string lifecycleRuleName) { DARABONBA_PTR_SET_VALUE(lifecycleRuleName_, lifecycleRuleName) };


      // path Field Functions 
      bool hasPath() const { return this->path_ != nullptr;};
      void deletePath() { this->path_ = nullptr;};
      inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
      inline LifecyclePolicies& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


      // paths Field Functions 
      bool hasPaths() const { return this->paths_ != nullptr;};
      void deletePaths() { this->paths_ = nullptr;};
      inline const vector<string> & getPaths() const { DARABONBA_PTR_GET_CONST(paths_, vector<string>) };
      inline vector<string> getPaths() { DARABONBA_PTR_GET(paths_, vector<string>) };
      inline LifecyclePolicies& setPaths(const vector<string> & paths) { DARABONBA_PTR_SET_VALUE(paths_, paths) };
      inline LifecyclePolicies& setPaths(vector<string> && paths) { DARABONBA_PTR_SET_RVALUE(paths_, paths) };


      // retrieveRules Field Functions 
      bool hasRetrieveRules() const { return this->retrieveRules_ != nullptr;};
      void deleteRetrieveRules() { this->retrieveRules_ = nullptr;};
      inline const vector<LifecyclePolicies::RetrieveRules> & getRetrieveRules() const { DARABONBA_PTR_GET_CONST(retrieveRules_, vector<LifecyclePolicies::RetrieveRules>) };
      inline vector<LifecyclePolicies::RetrieveRules> getRetrieveRules() { DARABONBA_PTR_GET(retrieveRules_, vector<LifecyclePolicies::RetrieveRules>) };
      inline LifecyclePolicies& setRetrieveRules(const vector<LifecyclePolicies::RetrieveRules> & retrieveRules) { DARABONBA_PTR_SET_VALUE(retrieveRules_, retrieveRules) };
      inline LifecyclePolicies& setRetrieveRules(vector<LifecyclePolicies::RetrieveRules> && retrieveRules) { DARABONBA_PTR_SET_RVALUE(retrieveRules_, retrieveRules) };


      // storageType Field Functions 
      bool hasStorageType() const { return this->storageType_ != nullptr;};
      void deleteStorageType() { this->storageType_ = nullptr;};
      inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
      inline LifecyclePolicies& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


      // transitRules Field Functions 
      bool hasTransitRules() const { return this->transitRules_ != nullptr;};
      void deleteTransitRules() { this->transitRules_ = nullptr;};
      inline const vector<LifecyclePolicies::TransitRules> & getTransitRules() const { DARABONBA_PTR_GET_CONST(transitRules_, vector<LifecyclePolicies::TransitRules>) };
      inline vector<LifecyclePolicies::TransitRules> getTransitRules() { DARABONBA_PTR_GET(transitRules_, vector<LifecyclePolicies::TransitRules>) };
      inline LifecyclePolicies& setTransitRules(const vector<LifecyclePolicies::TransitRules> & transitRules) { DARABONBA_PTR_SET_VALUE(transitRules_, transitRules) };
      inline LifecyclePolicies& setTransitRules(vector<LifecyclePolicies::TransitRules> && transitRules) { DARABONBA_PTR_SET_RVALUE(transitRules_, transitRules) };


    protected:
      // The time when the lifecycle policy was created.
      // 
      // The time follows the ISO 8601 standard in the `yyyy-MM-ddTHH:mm:ssZ` format.
      shared_ptr<string> createTime_ {};
      // Description
      shared_ptr<string> description_ {};
      // The ID of the file system.
      shared_ptr<string> fileSystemId_ {};
      // The ID of the lifecycle policy.
      shared_ptr<string> lifecyclePolicyId_ {};
      // The name of the lifecycle policy.
      shared_ptr<string> lifecyclePolicyName_ {};
      // The type of the lifecycle policy.
      shared_ptr<string> lifecyclePolicyType_ {};
      // The management rule that is associated with the lifecycle policy.
      // 
      // Valid values:
      // 
      // *   DEFAULT_ATIME_14: Files that are not accessed in the last 14 days.
      // *   DEFAULT_ATIME_30: Files that are not accessed in the last 30 days.
      // *   DEFAULT_ATIME_60: Files that are not accessed in the last 60 days.
      // *   DEFAULT_ATIME_90: Files that are not accessed in the last 90 days.
      shared_ptr<string> lifecycleRuleName_ {};
      // The absolute path of a directory with which the lifecycle policy is associated.
      shared_ptr<string> path_ {};
      // The absolute paths of directories with which the lifecycle policy is associated.
      shared_ptr<vector<string>> paths_ {};
      // File data retrieval rules.
      shared_ptr<vector<LifecyclePolicies::RetrieveRules>> retrieveRules_ {};
      // The storage class.
      // 
      // *   InfrequentAccess: the IA storage class.
      // *   Archive: the Archive storage class.
      shared_ptr<string> storageType_ {};
      // Data transition rules.
      shared_ptr<vector<LifecyclePolicies::TransitRules>> transitRules_ {};
    };

    virtual bool empty() const override { return this->lifecyclePolicies_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // lifecyclePolicies Field Functions 
    bool hasLifecyclePolicies() const { return this->lifecyclePolicies_ != nullptr;};
    void deleteLifecyclePolicies() { this->lifecyclePolicies_ = nullptr;};
    inline const vector<DescribeLifecyclePoliciesResponseBody::LifecyclePolicies> & getLifecyclePolicies() const { DARABONBA_PTR_GET_CONST(lifecyclePolicies_, vector<DescribeLifecyclePoliciesResponseBody::LifecyclePolicies>) };
    inline vector<DescribeLifecyclePoliciesResponseBody::LifecyclePolicies> getLifecyclePolicies() { DARABONBA_PTR_GET(lifecyclePolicies_, vector<DescribeLifecyclePoliciesResponseBody::LifecyclePolicies>) };
    inline DescribeLifecyclePoliciesResponseBody& setLifecyclePolicies(const vector<DescribeLifecyclePoliciesResponseBody::LifecyclePolicies> & lifecyclePolicies) { DARABONBA_PTR_SET_VALUE(lifecyclePolicies_, lifecyclePolicies) };
    inline DescribeLifecyclePoliciesResponseBody& setLifecyclePolicies(vector<DescribeLifecyclePoliciesResponseBody::LifecyclePolicies> && lifecyclePolicies) { DARABONBA_PTR_SET_RVALUE(lifecyclePolicies_, lifecyclePolicies) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeLifecyclePoliciesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeLifecyclePoliciesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLifecyclePoliciesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeLifecyclePoliciesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The queried lifecycle policies.
    shared_ptr<vector<DescribeLifecyclePoliciesResponseBody::LifecyclePolicies>> lifecyclePolicies_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of lifecycle policies.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
