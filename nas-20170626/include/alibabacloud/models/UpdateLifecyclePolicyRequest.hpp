// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELIFECYCLEPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATELIFECYCLEPOLICYREQUEST_HPP_
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
  class UpdateLifecyclePolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLifecyclePolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeleteRules, deleteRules_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(LifecyclePolicyId, lifecyclePolicyId_);
      DARABONBA_PTR_TO_JSON(Paths, paths_);
      DARABONBA_PTR_TO_JSON(RetrieveRules, retrieveRules_);
      DARABONBA_PTR_TO_JSON(StorageType, storageType_);
      DARABONBA_PTR_TO_JSON(TransitRules, transitRules_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLifecyclePolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeleteRules, deleteRules_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(LifecyclePolicyId, lifecyclePolicyId_);
      DARABONBA_PTR_FROM_JSON(Paths, paths_);
      DARABONBA_PTR_FROM_JSON(RetrieveRules, retrieveRules_);
      DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
      DARABONBA_PTR_FROM_JSON(TransitRules, transitRules_);
    };
    UpdateLifecyclePolicyRequest() = default ;
    UpdateLifecyclePolicyRequest(const UpdateLifecyclePolicyRequest &) = default ;
    UpdateLifecyclePolicyRequest(UpdateLifecyclePolicyRequest &&) = default ;
    UpdateLifecyclePolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLifecyclePolicyRequest() = default ;
    UpdateLifecyclePolicyRequest& operator=(const UpdateLifecyclePolicyRequest &) = default ;
    UpdateLifecyclePolicyRequest& operator=(UpdateLifecyclePolicyRequest &&) = default ;
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
      // The attribute of the rule.
      // 
      // Valid values:
      // - Atime: the access time of the file.
      shared_ptr<string> attribute_ {};
      // The threshold of the rule.
      // 
      // Valid values:
      // - If Attribute is set to Atime, the value specifies the number of days since the file was last accessed. Valid values: 1 to 365.
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
      // The attribute of the rule.
      // 
      // Valid values:
      // - RetrieveType: the retrieval method.
      shared_ptr<string> attribute_ {};
      // The threshold of the rule.
      // 
      // Valid values:
      // - RetrieveType
      //     - AfterVisit: supported when LifecyclePolicyType is set to Auto. Indicates best-effort recall on visit.
      //     - All: supported when LifecyclePolicyType is set to OnDemand. Indicates retrieval of all data.
      shared_ptr<string> threshold_ {};
    };

    class DeleteRules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DeleteRules& obj) { 
        DARABONBA_PTR_TO_JSON(Attribute, attribute_);
        DARABONBA_PTR_TO_JSON(Threshold, threshold_);
      };
      friend void from_json(const Darabonba::Json& j, DeleteRules& obj) { 
        DARABONBA_PTR_FROM_JSON(Attribute, attribute_);
        DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
      };
      DeleteRules() = default ;
      DeleteRules(const DeleteRules &) = default ;
      DeleteRules(DeleteRules &&) = default ;
      DeleteRules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DeleteRules() = default ;
      DeleteRules& operator=(const DeleteRules &) = default ;
      DeleteRules& operator=(DeleteRules &&) = default ;
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
      inline DeleteRules& setAttribute(string attribute) { DARABONBA_PTR_SET_VALUE(attribute_, attribute) };


      // threshold Field Functions 
      bool hasThreshold() const { return this->threshold_ != nullptr;};
      void deleteThreshold() { this->threshold_ = nullptr;};
      inline string getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, "") };
      inline DeleteRules& setThreshold(string threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


    protected:
      // The attribute of the rule.
      // 
      // Valid values:
      // - Atime: the access time of the file.
      shared_ptr<string> attribute_ {};
      // The threshold of the rule.
      // 
      // Valid values:
      // - If Attribute is set to Atime, the value specifies the number of days since the file was last accessed. Valid values: 1 to 365.
      shared_ptr<string> threshold_ {};
    };

    virtual bool empty() const override { return this->deleteRules_ == nullptr
        && this->description_ == nullptr && this->fileSystemId_ == nullptr && this->lifecyclePolicyId_ == nullptr && this->paths_ == nullptr && this->retrieveRules_ == nullptr
        && this->storageType_ == nullptr && this->transitRules_ == nullptr; };
    // deleteRules Field Functions 
    bool hasDeleteRules() const { return this->deleteRules_ != nullptr;};
    void deleteDeleteRules() { this->deleteRules_ = nullptr;};
    inline const vector<UpdateLifecyclePolicyRequest::DeleteRules> & getDeleteRules() const { DARABONBA_PTR_GET_CONST(deleteRules_, vector<UpdateLifecyclePolicyRequest::DeleteRules>) };
    inline vector<UpdateLifecyclePolicyRequest::DeleteRules> getDeleteRules() { DARABONBA_PTR_GET(deleteRules_, vector<UpdateLifecyclePolicyRequest::DeleteRules>) };
    inline UpdateLifecyclePolicyRequest& setDeleteRules(const vector<UpdateLifecyclePolicyRequest::DeleteRules> & deleteRules) { DARABONBA_PTR_SET_VALUE(deleteRules_, deleteRules) };
    inline UpdateLifecyclePolicyRequest& setDeleteRules(vector<UpdateLifecyclePolicyRequest::DeleteRules> && deleteRules) { DARABONBA_PTR_SET_RVALUE(deleteRules_, deleteRules) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateLifecyclePolicyRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline UpdateLifecyclePolicyRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // lifecyclePolicyId Field Functions 
    bool hasLifecyclePolicyId() const { return this->lifecyclePolicyId_ != nullptr;};
    void deleteLifecyclePolicyId() { this->lifecyclePolicyId_ = nullptr;};
    inline string getLifecyclePolicyId() const { DARABONBA_PTR_GET_DEFAULT(lifecyclePolicyId_, "") };
    inline UpdateLifecyclePolicyRequest& setLifecyclePolicyId(string lifecyclePolicyId) { DARABONBA_PTR_SET_VALUE(lifecyclePolicyId_, lifecyclePolicyId) };


    // paths Field Functions 
    bool hasPaths() const { return this->paths_ != nullptr;};
    void deletePaths() { this->paths_ = nullptr;};
    inline const vector<string> & getPaths() const { DARABONBA_PTR_GET_CONST(paths_, vector<string>) };
    inline vector<string> getPaths() { DARABONBA_PTR_GET(paths_, vector<string>) };
    inline UpdateLifecyclePolicyRequest& setPaths(const vector<string> & paths) { DARABONBA_PTR_SET_VALUE(paths_, paths) };
    inline UpdateLifecyclePolicyRequest& setPaths(vector<string> && paths) { DARABONBA_PTR_SET_RVALUE(paths_, paths) };


    // retrieveRules Field Functions 
    bool hasRetrieveRules() const { return this->retrieveRules_ != nullptr;};
    void deleteRetrieveRules() { this->retrieveRules_ = nullptr;};
    inline const vector<UpdateLifecyclePolicyRequest::RetrieveRules> & getRetrieveRules() const { DARABONBA_PTR_GET_CONST(retrieveRules_, vector<UpdateLifecyclePolicyRequest::RetrieveRules>) };
    inline vector<UpdateLifecyclePolicyRequest::RetrieveRules> getRetrieveRules() { DARABONBA_PTR_GET(retrieveRules_, vector<UpdateLifecyclePolicyRequest::RetrieveRules>) };
    inline UpdateLifecyclePolicyRequest& setRetrieveRules(const vector<UpdateLifecyclePolicyRequest::RetrieveRules> & retrieveRules) { DARABONBA_PTR_SET_VALUE(retrieveRules_, retrieveRules) };
    inline UpdateLifecyclePolicyRequest& setRetrieveRules(vector<UpdateLifecyclePolicyRequest::RetrieveRules> && retrieveRules) { DARABONBA_PTR_SET_RVALUE(retrieveRules_, retrieveRules) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline UpdateLifecyclePolicyRequest& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


    // transitRules Field Functions 
    bool hasTransitRules() const { return this->transitRules_ != nullptr;};
    void deleteTransitRules() { this->transitRules_ = nullptr;};
    inline const vector<UpdateLifecyclePolicyRequest::TransitRules> & getTransitRules() const { DARABONBA_PTR_GET_CONST(transitRules_, vector<UpdateLifecyclePolicyRequest::TransitRules>) };
    inline vector<UpdateLifecyclePolicyRequest::TransitRules> getTransitRules() { DARABONBA_PTR_GET(transitRules_, vector<UpdateLifecyclePolicyRequest::TransitRules>) };
    inline UpdateLifecyclePolicyRequest& setTransitRules(const vector<UpdateLifecyclePolicyRequest::TransitRules> & transitRules) { DARABONBA_PTR_SET_VALUE(transitRules_, transitRules) };
    inline UpdateLifecyclePolicyRequest& setTransitRules(vector<UpdateLifecyclePolicyRequest::TransitRules> && transitRules) { DARABONBA_PTR_SET_RVALUE(transitRules_, transitRules) };


  protected:
    // The file data expiration and deletion rules.
    shared_ptr<vector<UpdateLifecyclePolicyRequest::DeleteRules>> deleteRules_ {};
    // The description of the lifecycle policy.
    // 
    // Format:
    // The description must be 3 to 64 characters in length, start with a letter, and can contain letters, digits, underscores (_), or hyphens (-).
    // > Only CPFS for Lingjun is supported.
    shared_ptr<string> description_ {};
    // The file system ID. The ID starts with bmcpfs-, such as bmcpfs-290w65p03ok64ya****.
    // > This parameter is supported only when LifecyclePolicyType is set to OnDemand in the lifecycle management policy of a CPFS for Lingjun file system.
    // 
    // This parameter is required.
    shared_ptr<string> fileSystemId_ {};
    // The ID of the lifecycle policy.
    // > This parameter is required for CPFS for Lingjun file systems.
    // 
    // This parameter is required.
    shared_ptr<string> lifecyclePolicyId_ {};
    // The absolute paths of the directories associated with the lifecycle management policy.
    shared_ptr<vector<string>> paths_ {};
    // The file data retrieval rules. You can configure up to one rule.
    // > Only CPFS for Lingjun file systems are supported.
    shared_ptr<vector<UpdateLifecyclePolicyRequest::RetrieveRules>> retrieveRules_ {};
    // The tiered storage type.
    // 
    // Valid values:
    // - InfrequentAccess: IA storage class. This is the default value.
    // - Archive: Archive storage.
    shared_ptr<string> storageType_ {};
    // The file data transit rules. You can configure up to one rule.
    // 
    // > This parameter is supported only when LifecyclePolicyType is set to Auto for a CPFS for Lingjun file system.
    shared_ptr<vector<UpdateLifecyclePolicyRequest::TransitRules>> transitRules_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
