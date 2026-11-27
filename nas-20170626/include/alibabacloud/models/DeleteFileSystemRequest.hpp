// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEFILESYSTEMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEFILESYSTEMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DeleteFileSystemRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteFileSystemRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteFileSystemRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
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
    virtual bool empty() const override { return this->dryRun_ == nullptr
        && this->fileSystemId_ == nullptr; };
    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline DeleteFileSystemRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline DeleteFileSystemRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


  protected:
    // Specifies whether to perform a dry run on the request.
    shared_ptr<bool> dryRun_ {};
    // The ID of the file system that you want to delete.
    // - General-purpose NAS: 31a8e4\*\*\*\*.
    // - Extreme NAS: The ID must start with `extreme-`, such as extreme-0015\*\*\*\*.
    // - CPFS: The ID must start with `cpfs-`, such as cpfs-00cb6fa094ca\*\*\*\*.
    // 
    // This parameter is required.
    shared_ptr<string> fileSystemId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
