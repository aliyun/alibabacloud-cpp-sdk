// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDIRECTORYORFILEPROPERTIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDIRECTORYORFILEPROPERTIESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class GetDirectoryOrFilePropertiesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDirectoryOrFilePropertiesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(Path, path_);
    };
    friend void from_json(const Darabonba::Json& j, GetDirectoryOrFilePropertiesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
    };
    GetDirectoryOrFilePropertiesRequest() = default ;
    GetDirectoryOrFilePropertiesRequest(const GetDirectoryOrFilePropertiesRequest &) = default ;
    GetDirectoryOrFilePropertiesRequest(GetDirectoryOrFilePropertiesRequest &&) = default ;
    GetDirectoryOrFilePropertiesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDirectoryOrFilePropertiesRequest() = default ;
    GetDirectoryOrFilePropertiesRequest& operator=(const GetDirectoryOrFilePropertiesRequest &) = default ;
    GetDirectoryOrFilePropertiesRequest& operator=(GetDirectoryOrFilePropertiesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fileSystemId_ != nullptr
        && this->path_ != nullptr; };
    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string fileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline GetDirectoryOrFilePropertiesRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline GetDirectoryOrFilePropertiesRequest& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


  protected:
    // The ID of the file system.
    // 
    // This parameter is required.
    std::shared_ptr<string> fileSystemId_ = nullptr;
    // The absolute path of the directory.
    // 
    // The path must start with a forward slash (/) and must be a path that exists in the mount target.
    // 
    // This parameter is required.
    std::shared_ptr<string> path_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
