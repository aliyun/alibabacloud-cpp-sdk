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
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(LifecyclePolicyId, lifecyclePolicyId_);
      DARABONBA_PTR_TO_JSON(Paths, paths_);
      DARABONBA_PTR_TO_JSON(RetrieveRules, retrieveRules_);
      DARABONBA_PTR_TO_JSON(StorageType, storageType_);
      DARABONBA_PTR_TO_JSON(TransitRules, transitRules_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLifecyclePolicyRequest& obj) { 
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
      shared_ptr<string> attribute_ {};
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
      shared_ptr<string> attribute_ {};
      shared_ptr<string> threshold_ {};
    };

    virtual bool empty() const override { return this->description_ == nullptr
        && this->fileSystemId_ == nullptr && this->lifecyclePolicyId_ == nullptr && this->paths_ == nullptr && this->retrieveRules_ == nullptr && this->storageType_ == nullptr
        && this->transitRules_ == nullptr; };
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
    shared_ptr<string> description_ {};
    // This parameter is required.
    shared_ptr<string> fileSystemId_ {};
    // This parameter is required.
    shared_ptr<string> lifecyclePolicyId_ {};
    shared_ptr<vector<string>> paths_ {};
    shared_ptr<vector<UpdateLifecyclePolicyRequest::RetrieveRules>> retrieveRules_ {};
    shared_ptr<string> storageType_ {};
    shared_ptr<vector<UpdateLifecyclePolicyRequest::TransitRules>> transitRules_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
