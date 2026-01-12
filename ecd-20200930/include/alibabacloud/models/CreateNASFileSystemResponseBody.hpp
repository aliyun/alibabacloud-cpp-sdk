// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENASFILESYSTEMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATENASFILESYSTEMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class CreateNASFileSystemResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNASFileSystemResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(FileSystemName, fileSystemName_);
      DARABONBA_PTR_TO_JSON(MountTargetDomain, mountTargetDomain_);
      DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNASFileSystemResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(FileSystemName, fileSystemName_);
      DARABONBA_PTR_FROM_JSON(MountTargetDomain, mountTargetDomain_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateNASFileSystemResponseBody() = default ;
    CreateNASFileSystemResponseBody(const CreateNASFileSystemResponseBody &) = default ;
    CreateNASFileSystemResponseBody(CreateNASFileSystemResponseBody &&) = default ;
    CreateNASFileSystemResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNASFileSystemResponseBody() = default ;
    CreateNASFileSystemResponseBody& operator=(const CreateNASFileSystemResponseBody &) = default ;
    CreateNASFileSystemResponseBody& operator=(CreateNASFileSystemResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileSystemId_ == nullptr
        && this->fileSystemName_ == nullptr && this->mountTargetDomain_ == nullptr && this->officeSiteId_ == nullptr && this->requestId_ == nullptr; };
    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline CreateNASFileSystemResponseBody& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // fileSystemName Field Functions 
    bool hasFileSystemName() const { return this->fileSystemName_ != nullptr;};
    void deleteFileSystemName() { this->fileSystemName_ = nullptr;};
    inline string getFileSystemName() const { DARABONBA_PTR_GET_DEFAULT(fileSystemName_, "") };
    inline CreateNASFileSystemResponseBody& setFileSystemName(string fileSystemName) { DARABONBA_PTR_SET_VALUE(fileSystemName_, fileSystemName) };


    // mountTargetDomain Field Functions 
    bool hasMountTargetDomain() const { return this->mountTargetDomain_ != nullptr;};
    void deleteMountTargetDomain() { this->mountTargetDomain_ = nullptr;};
    inline string getMountTargetDomain() const { DARABONBA_PTR_GET_DEFAULT(mountTargetDomain_, "") };
    inline CreateNASFileSystemResponseBody& setMountTargetDomain(string mountTargetDomain) { DARABONBA_PTR_SET_VALUE(mountTargetDomain_, mountTargetDomain) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string getOfficeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline CreateNASFileSystemResponseBody& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateNASFileSystemResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // ID of the NAS file system.
    shared_ptr<string> fileSystemId_ {};
    // Name of the NAS file system.
    shared_ptr<string> fileSystemName_ {};
    // Mount point domain.
    shared_ptr<string> mountTargetDomain_ {};
    // Workspace ID.
    shared_ptr<string> officeSiteId_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
