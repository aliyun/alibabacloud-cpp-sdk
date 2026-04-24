// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDPOLARFSPATHMAPPINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDPOLARFSPATHMAPPINGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class AddPolarFsPathMappingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddPolarFsPathMappingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CustomBucketPathList, customBucketPathList_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(PolarFsInstanceId, polarFsInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, AddPolarFsPathMappingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomBucketPathList, customBucketPathList_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(PolarFsInstanceId, polarFsInstanceId_);
    };
    AddPolarFsPathMappingRequest() = default ;
    AddPolarFsPathMappingRequest(const AddPolarFsPathMappingRequest &) = default ;
    AddPolarFsPathMappingRequest(AddPolarFsPathMappingRequest &&) = default ;
    AddPolarFsPathMappingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddPolarFsPathMappingRequest() = default ;
    AddPolarFsPathMappingRequest& operator=(const AddPolarFsPathMappingRequest &) = default ;
    AddPolarFsPathMappingRequest& operator=(AddPolarFsPathMappingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CustomBucketPathList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CustomBucketPathList& obj) { 
        DARABONBA_PTR_TO_JSON(Bucket, bucket_);
        DARABONBA_PTR_TO_JSON(Path, path_);
      };
      friend void from_json(const Darabonba::Json& j, CustomBucketPathList& obj) { 
        DARABONBA_PTR_FROM_JSON(Bucket, bucket_);
        DARABONBA_PTR_FROM_JSON(Path, path_);
      };
      CustomBucketPathList() = default ;
      CustomBucketPathList(const CustomBucketPathList &) = default ;
      CustomBucketPathList(CustomBucketPathList &&) = default ;
      CustomBucketPathList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CustomBucketPathList() = default ;
      CustomBucketPathList& operator=(const CustomBucketPathList &) = default ;
      CustomBucketPathList& operator=(CustomBucketPathList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->bucket_ == nullptr
        && this->path_ == nullptr; };
      // bucket Field Functions 
      bool hasBucket() const { return this->bucket_ != nullptr;};
      void deleteBucket() { this->bucket_ = nullptr;};
      inline string getBucket() const { DARABONBA_PTR_GET_DEFAULT(bucket_, "") };
      inline CustomBucketPathList& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


      // path Field Functions 
      bool hasPath() const { return this->path_ != nullptr;};
      void deletePath() { this->path_ = nullptr;};
      inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
      inline CustomBucketPathList& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    protected:
      shared_ptr<string> bucket_ {};
      shared_ptr<string> path_ {};
    };

    virtual bool empty() const override { return this->customBucketPathList_ == nullptr
        && this->DBClusterId_ == nullptr && this->polarFsInstanceId_ == nullptr; };
    // customBucketPathList Field Functions 
    bool hasCustomBucketPathList() const { return this->customBucketPathList_ != nullptr;};
    void deleteCustomBucketPathList() { this->customBucketPathList_ = nullptr;};
    inline const vector<AddPolarFsPathMappingRequest::CustomBucketPathList> & getCustomBucketPathList() const { DARABONBA_PTR_GET_CONST(customBucketPathList_, vector<AddPolarFsPathMappingRequest::CustomBucketPathList>) };
    inline vector<AddPolarFsPathMappingRequest::CustomBucketPathList> getCustomBucketPathList() { DARABONBA_PTR_GET(customBucketPathList_, vector<AddPolarFsPathMappingRequest::CustomBucketPathList>) };
    inline AddPolarFsPathMappingRequest& setCustomBucketPathList(const vector<AddPolarFsPathMappingRequest::CustomBucketPathList> & customBucketPathList) { DARABONBA_PTR_SET_VALUE(customBucketPathList_, customBucketPathList) };
    inline AddPolarFsPathMappingRequest& setCustomBucketPathList(vector<AddPolarFsPathMappingRequest::CustomBucketPathList> && customBucketPathList) { DARABONBA_PTR_SET_RVALUE(customBucketPathList_, customBucketPathList) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline AddPolarFsPathMappingRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // polarFsInstanceId Field Functions 
    bool hasPolarFsInstanceId() const { return this->polarFsInstanceId_ != nullptr;};
    void deletePolarFsInstanceId() { this->polarFsInstanceId_ = nullptr;};
    inline string getPolarFsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(polarFsInstanceId_, "") };
    inline AddPolarFsPathMappingRequest& setPolarFsInstanceId(string polarFsInstanceId) { DARABONBA_PTR_SET_VALUE(polarFsInstanceId_, polarFsInstanceId) };


  protected:
    shared_ptr<vector<AddPolarFsPathMappingRequest::CustomBucketPathList>> customBucketPathList_ {};
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // This parameter is required.
    shared_ptr<string> polarFsInstanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
