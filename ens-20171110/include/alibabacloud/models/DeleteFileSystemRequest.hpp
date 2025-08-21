// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEFILESYSTEMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEFILESYSTEMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DeleteFileSystemRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteFileSystemRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteFileSystemRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
    };
    DeleteFileSystemRequest() = default ;
    DeleteFileSystemRequest(const DeleteFileSystemRequest &) = default ;
    DeleteFileSystemRequest(DeleteFileSystemRequest &&) = default ;
    DeleteFileSystemRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteFileSystemRequest() = default ;
    DeleteFileSystemRequest& operator=(const DeleteFileSystemRequest &) = default ;
    DeleteFileSystemRequest& operator=(DeleteFileSystemRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ensRegionId_ != nullptr
        && this->fileSystemId_ != nullptr; };
    // ensRegionId Field Functions 
    bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
    void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
    inline string ensRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
    inline DeleteFileSystemRequest& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string fileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline DeleteFileSystemRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


  protected:
    // The ID of the edge node.
    // 
    // This parameter is required.
    std::shared_ptr<string> ensRegionId_ = nullptr;
    // The ID of the file system that you want to delete.
    // 
    // This parameter is required.
    std::shared_ptr<string> fileSystemId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
