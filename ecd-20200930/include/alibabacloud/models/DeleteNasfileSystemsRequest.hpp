// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETENASFILESYSTEMSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETENASFILESYSTEMSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DeleteNASFileSystemsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteNASFileSystemsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteNASFileSystemsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteNASFileSystemsRequest() = default ;
    DeleteNASFileSystemsRequest(const DeleteNASFileSystemsRequest &) = default ;
    DeleteNASFileSystemsRequest(DeleteNASFileSystemsRequest &&) = default ;
    DeleteNASFileSystemsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteNASFileSystemsRequest() = default ;
    DeleteNASFileSystemsRequest& operator=(const DeleteNASFileSystemsRequest &) = default ;
    DeleteNASFileSystemsRequest& operator=(DeleteNASFileSystemsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fileSystemId_ != nullptr
        && this->regionId_ != nullptr; };
    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline const vector<string> & fileSystemId() const { DARABONBA_PTR_GET_CONST(fileSystemId_, vector<string>) };
    inline vector<string> fileSystemId() { DARABONBA_PTR_GET(fileSystemId_, vector<string>) };
    inline DeleteNASFileSystemsRequest& setFileSystemId(const vector<string> & fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };
    inline DeleteNASFileSystemsRequest& setFileSystemId(vector<string> && fileSystemId) { DARABONBA_PTR_SET_RVALUE(fileSystemId_, fileSystemId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteNASFileSystemsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The IDs of the NAS file systems that you want to delete.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> fileSystemId_ = nullptr;
    // The region ID of the NAS file system that you want to delete.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
