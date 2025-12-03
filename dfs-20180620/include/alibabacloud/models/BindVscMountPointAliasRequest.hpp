// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BINDVSCMOUNTPOINTALIASREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BINDVSCMOUNTPOINTALIASREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DFS20180620
{
namespace Models
{
  class BindVscMountPointAliasRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BindVscMountPointAliasRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AliasPrefix, aliasPrefix_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(InputRegionId, inputRegionId_);
      DARABONBA_PTR_TO_JSON(MountPointId, mountPointId_);
    };
    friend void from_json(const Darabonba::Json& j, BindVscMountPointAliasRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AliasPrefix, aliasPrefix_);
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(InputRegionId, inputRegionId_);
      DARABONBA_PTR_FROM_JSON(MountPointId, mountPointId_);
    };
    BindVscMountPointAliasRequest() = default ;
    BindVscMountPointAliasRequest(const BindVscMountPointAliasRequest &) = default ;
    BindVscMountPointAliasRequest(BindVscMountPointAliasRequest &&) = default ;
    BindVscMountPointAliasRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BindVscMountPointAliasRequest() = default ;
    BindVscMountPointAliasRequest& operator=(const BindVscMountPointAliasRequest &) = default ;
    BindVscMountPointAliasRequest& operator=(BindVscMountPointAliasRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliasPrefix_ == nullptr
        && return this->fileSystemId_ == nullptr && return this->inputRegionId_ == nullptr && return this->mountPointId_ == nullptr; };
    // aliasPrefix Field Functions 
    bool hasAliasPrefix() const { return this->aliasPrefix_ != nullptr;};
    void deleteAliasPrefix() { this->aliasPrefix_ = nullptr;};
    inline string aliasPrefix() const { DARABONBA_PTR_GET_DEFAULT(aliasPrefix_, "") };
    inline BindVscMountPointAliasRequest& setAliasPrefix(string aliasPrefix) { DARABONBA_PTR_SET_VALUE(aliasPrefix_, aliasPrefix) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string fileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline BindVscMountPointAliasRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // inputRegionId Field Functions 
    bool hasInputRegionId() const { return this->inputRegionId_ != nullptr;};
    void deleteInputRegionId() { this->inputRegionId_ = nullptr;};
    inline string inputRegionId() const { DARABONBA_PTR_GET_DEFAULT(inputRegionId_, "") };
    inline BindVscMountPointAliasRequest& setInputRegionId(string inputRegionId) { DARABONBA_PTR_SET_VALUE(inputRegionId_, inputRegionId) };


    // mountPointId Field Functions 
    bool hasMountPointId() const { return this->mountPointId_ != nullptr;};
    void deleteMountPointId() { this->mountPointId_ = nullptr;};
    inline string mountPointId() const { DARABONBA_PTR_GET_DEFAULT(mountPointId_, "") };
    inline BindVscMountPointAliasRequest& setMountPointId(string mountPointId) { DARABONBA_PTR_SET_VALUE(mountPointId_, mountPointId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> aliasPrefix_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> fileSystemId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> inputRegionId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> mountPointId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DFS20180620
#endif
