// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELIFECYCLERETRIEVEJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATELIFECYCLERETRIEVEJOBREQUEST_HPP_
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
  class CreateLifecycleRetrieveJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLifecycleRetrieveJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(Paths, paths_);
      DARABONBA_PTR_TO_JSON(StorageType, storageType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLifecycleRetrieveJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(Paths, paths_);
      DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
    };
    CreateLifecycleRetrieveJobRequest() = default ;
    CreateLifecycleRetrieveJobRequest(const CreateLifecycleRetrieveJobRequest &) = default ;
    CreateLifecycleRetrieveJobRequest(CreateLifecycleRetrieveJobRequest &&) = default ;
    CreateLifecycleRetrieveJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLifecycleRetrieveJobRequest() = default ;
    CreateLifecycleRetrieveJobRequest& operator=(const CreateLifecycleRetrieveJobRequest &) = default ;
    CreateLifecycleRetrieveJobRequest& operator=(CreateLifecycleRetrieveJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fileSystemId_ != nullptr
        && this->paths_ != nullptr && this->storageType_ != nullptr; };
    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string fileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline CreateLifecycleRetrieveJobRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // paths Field Functions 
    bool hasPaths() const { return this->paths_ != nullptr;};
    void deletePaths() { this->paths_ = nullptr;};
    inline const vector<string> & paths() const { DARABONBA_PTR_GET_CONST(paths_, vector<string>) };
    inline vector<string> paths() { DARABONBA_PTR_GET(paths_, vector<string>) };
    inline CreateLifecycleRetrieveJobRequest& setPaths(const vector<string> & paths) { DARABONBA_PTR_SET_VALUE(paths_, paths) };
    inline CreateLifecycleRetrieveJobRequest& setPaths(vector<string> && paths) { DARABONBA_PTR_SET_RVALUE(paths_, paths) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string storageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline CreateLifecycleRetrieveJobRequest& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


  protected:
    // The ID of the file system.
    // 
    // This parameter is required.
    std::shared_ptr<string> fileSystemId_ = nullptr;
    // The directories or files that you want to retrieve. You can specify a maximum of 10 paths.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> paths_ = nullptr;
    // The storage class.
    // 
    // *   InfrequentAccess (default): the Infrequent Access (IA) storage class.
    // *   Archive: the Archive storage class.
    std::shared_ptr<string> storageType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
