// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELIFECYCLEPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATELIFECYCLEPOLICYREQUEST_HPP_
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
  class CreateLifecyclePolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLifecyclePolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(LifecyclePolicyName, lifecyclePolicyName_);
      DARABONBA_PTR_TO_JSON(LifecyclePolicyType, lifecyclePolicyType_);
      DARABONBA_PTR_TO_JSON(LifecycleRuleName, lifecycleRuleName_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(Paths, paths_);
      DARABONBA_PTR_TO_JSON(RetrieveRules, retrieveRules_);
      DARABONBA_PTR_TO_JSON(StorageType, storageType_);
      DARABONBA_PTR_TO_JSON(TransitRules, transitRules_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLifecyclePolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(LifecyclePolicyName, lifecyclePolicyName_);
      DARABONBA_PTR_FROM_JSON(LifecyclePolicyType, lifecyclePolicyType_);
      DARABONBA_PTR_FROM_JSON(LifecycleRuleName, lifecycleRuleName_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(Paths, paths_);
      DARABONBA_PTR_FROM_JSON(RetrieveRules, retrieveRules_);
      DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
      DARABONBA_PTR_FROM_JSON(TransitRules, transitRules_);
    };
    CreateLifecyclePolicyRequest() = default ;
    CreateLifecyclePolicyRequest(const CreateLifecyclePolicyRequest &) = default ;
    CreateLifecyclePolicyRequest(CreateLifecyclePolicyRequest &&) = default ;
    CreateLifecyclePolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLifecyclePolicyRequest() = default ;
    CreateLifecyclePolicyRequest& operator=(const CreateLifecyclePolicyRequest &) = default ;
    CreateLifecyclePolicyRequest& operator=(CreateLifecyclePolicyRequest &&) = default ;
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
      // 
      // Valid values:
      // 
      // *   Atime: the access time of the file.
      shared_ptr<string> attribute_ {};
      // Threshold for the rule.
      // 
      // Valid values:
      // 
      // *   If Attribute is set to Atime, this value represents the number of days since the file was last accessed. Valid values: [1, 365].
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
      // The attribute of the rule. Valid value:
      // 
      // *   RetrieveType: the retrieval method.
      shared_ptr<string> attribute_ {};
      // The threshold of the rule. Valid values:
      // 
      // *   RetrieveType
      // 
      //     *   AfterVisit: Supported when LifecyclePolicyType is Auto. Represents a best-effort recall on access.
      //     *   All: Supported when LifecyclePolicyType is OnDemand. Represents retrieving all data.
      shared_ptr<string> threshold_ {};
    };

    virtual bool empty() const override { return this->description_ == nullptr
        && this->fileSystemId_ == nullptr && this->lifecyclePolicyName_ == nullptr && this->lifecyclePolicyType_ == nullptr && this->lifecycleRuleName_ == nullptr && this->path_ == nullptr
        && this->paths_ == nullptr && this->retrieveRules_ == nullptr && this->storageType_ == nullptr && this->transitRules_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateLifecyclePolicyRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline CreateLifecyclePolicyRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // lifecyclePolicyName Field Functions 
    bool hasLifecyclePolicyName() const { return this->lifecyclePolicyName_ != nullptr;};
    void deleteLifecyclePolicyName() { this->lifecyclePolicyName_ = nullptr;};
    inline string getLifecyclePolicyName() const { DARABONBA_PTR_GET_DEFAULT(lifecyclePolicyName_, "") };
    inline CreateLifecyclePolicyRequest& setLifecyclePolicyName(string lifecyclePolicyName) { DARABONBA_PTR_SET_VALUE(lifecyclePolicyName_, lifecyclePolicyName) };


    // lifecyclePolicyType Field Functions 
    bool hasLifecyclePolicyType() const { return this->lifecyclePolicyType_ != nullptr;};
    void deleteLifecyclePolicyType() { this->lifecyclePolicyType_ = nullptr;};
    inline string getLifecyclePolicyType() const { DARABONBA_PTR_GET_DEFAULT(lifecyclePolicyType_, "") };
    inline CreateLifecyclePolicyRequest& setLifecyclePolicyType(string lifecyclePolicyType) { DARABONBA_PTR_SET_VALUE(lifecyclePolicyType_, lifecyclePolicyType) };


    // lifecycleRuleName Field Functions 
    bool hasLifecycleRuleName() const { return this->lifecycleRuleName_ != nullptr;};
    void deleteLifecycleRuleName() { this->lifecycleRuleName_ = nullptr;};
    inline string getLifecycleRuleName() const { DARABONBA_PTR_GET_DEFAULT(lifecycleRuleName_, "") };
    inline CreateLifecyclePolicyRequest& setLifecycleRuleName(string lifecycleRuleName) { DARABONBA_PTR_SET_VALUE(lifecycleRuleName_, lifecycleRuleName) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline CreateLifecyclePolicyRequest& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // paths Field Functions 
    bool hasPaths() const { return this->paths_ != nullptr;};
    void deletePaths() { this->paths_ = nullptr;};
    inline const vector<string> & getPaths() const { DARABONBA_PTR_GET_CONST(paths_, vector<string>) };
    inline vector<string> getPaths() { DARABONBA_PTR_GET(paths_, vector<string>) };
    inline CreateLifecyclePolicyRequest& setPaths(const vector<string> & paths) { DARABONBA_PTR_SET_VALUE(paths_, paths) };
    inline CreateLifecyclePolicyRequest& setPaths(vector<string> && paths) { DARABONBA_PTR_SET_RVALUE(paths_, paths) };


    // retrieveRules Field Functions 
    bool hasRetrieveRules() const { return this->retrieveRules_ != nullptr;};
    void deleteRetrieveRules() { this->retrieveRules_ = nullptr;};
    inline const vector<CreateLifecyclePolicyRequest::RetrieveRules> & getRetrieveRules() const { DARABONBA_PTR_GET_CONST(retrieveRules_, vector<CreateLifecyclePolicyRequest::RetrieveRules>) };
    inline vector<CreateLifecyclePolicyRequest::RetrieveRules> getRetrieveRules() { DARABONBA_PTR_GET(retrieveRules_, vector<CreateLifecyclePolicyRequest::RetrieveRules>) };
    inline CreateLifecyclePolicyRequest& setRetrieveRules(const vector<CreateLifecyclePolicyRequest::RetrieveRules> & retrieveRules) { DARABONBA_PTR_SET_VALUE(retrieveRules_, retrieveRules) };
    inline CreateLifecyclePolicyRequest& setRetrieveRules(vector<CreateLifecyclePolicyRequest::RetrieveRules> && retrieveRules) { DARABONBA_PTR_SET_RVALUE(retrieveRules_, retrieveRules) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline CreateLifecyclePolicyRequest& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


    // transitRules Field Functions 
    bool hasTransitRules() const { return this->transitRules_ != nullptr;};
    void deleteTransitRules() { this->transitRules_ = nullptr;};
    inline const vector<CreateLifecyclePolicyRequest::TransitRules> & getTransitRules() const { DARABONBA_PTR_GET_CONST(transitRules_, vector<CreateLifecyclePolicyRequest::TransitRules>) };
    inline vector<CreateLifecyclePolicyRequest::TransitRules> getTransitRules() { DARABONBA_PTR_GET(transitRules_, vector<CreateLifecyclePolicyRequest::TransitRules>) };
    inline CreateLifecyclePolicyRequest& setTransitRules(const vector<CreateLifecyclePolicyRequest::TransitRules> & transitRules) { DARABONBA_PTR_SET_VALUE(transitRules_, transitRules) };
    inline CreateLifecyclePolicyRequest& setTransitRules(vector<CreateLifecyclePolicyRequest::TransitRules> && transitRules) { DARABONBA_PTR_SET_RVALUE(transitRules_, transitRules) };


  protected:
    // The description of the lifecycle policy.
    // 
    // Format: The name must be 3 to 64 characters in length and must start with a letter. It can contain letters, digits, underscores (_), and hyphens (-).
    // 
    // >  Only CPFS for Lingjun supports this parameter.
    shared_ptr<string> description_ {};
    // The ID of the file system.
    // 
    // This parameter is required.
    shared_ptr<string> fileSystemId_ {};
    // The name of the lifecycle policy. The name must be 3 to 64 characters in length and must start with a letter. It can contain letters, digits, underscores (_), and hyphens (-).
    // 
    // >  Required for General-purpose NAS.
    shared_ptr<string> lifecyclePolicyName_ {};
    // The policy type.
    // 
    // *   Auto (default): The job is automatically triggered.
    // *   OnDemand: On-demand execution.
    shared_ptr<string> lifecyclePolicyType_ {};
    // The management rule associated with the lifecycle policy. Only General-purpose NAS supports this parameter.
    // 
    // Valid values:
    // 
    // *   DEFAULT_ATIME_14: Files not accessed for 14 days.
    // *   DEFAULT_ATIME_30: Files not accessed for 30 days.
    // *   DEFAULT_ATIME_60: Files not accessed for 60 days.
    // *   DEFAULT_ATIME_90: Files not accessed for 90 days.
    // *   DEFAULT_ATIME_180: Files not accessed for 180 days. DEFAULT_ATIME_180 is supported only when the StorageType parameter is set to Archive.
    // 
    // > 
    // 
    // *   If an IA policy already exists for the directory, the new archive policy must have a longer transition period.
    // 
    // *   Only General-purpose NAS supports this parameter.
    shared_ptr<string> lifecycleRuleName_ {};
    // The absolute path of the directory associated with the lifecycle policy. Only General-purpose NAS supports this parameter.
    // 
    // *   Single value only. The path must start with a forward slash (/) and must be a path that exists in the mount target.
    // 
    // >  We recommend configuring the Paths.N parameter so that you can associate the policy with multiple directories at a time.
    // 
    // *   Path and Paths are mutually exclusive. You must specify one.
    shared_ptr<string> path_ {};
    // The absolute paths of the directories associated with the lifecycle policy.
    shared_ptr<vector<string>> paths_ {};
    // The file data retrieval rule. Only one rule can be configured.
    // 
    // >  Only CPFS for Lingjun supports this parameter.
    shared_ptr<vector<CreateLifecyclePolicyRequest::RetrieveRules>> retrieveRules_ {};
    // The storage class.
    // 
    // *   InfrequentAccess: the Infrequent Access (IA) storage class.
    // *   Archive: the Archive storage class.
    // 
    // >  General-purpose NAS supports InfrequentAccess and Archive. CPFS for Lingjun only supports InfrequentAccess.
    // 
    // This parameter is required.
    shared_ptr<string> storageType_ {};
    // The data transition rule. Only one rule can be configured.
    // 
    // >  Supported only for CPFS for Lingjun file systems with LifecyclePolicyType set to Auto.
    shared_ptr<vector<CreateLifecyclePolicyRequest::TransitRules>> transitRules_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
