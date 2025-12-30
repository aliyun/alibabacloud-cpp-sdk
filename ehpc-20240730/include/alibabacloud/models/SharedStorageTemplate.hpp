// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SHAREDSTORAGETEMPLATE_HPP_
#define ALIBABACLOUD_MODELS_SHAREDSTORAGETEMPLATE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class SharedStorageTemplate : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SharedStorageTemplate& obj) { 
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(MountDirectory, mountDirectory_);
      DARABONBA_PTR_TO_JSON(MountOptions, mountOptions_);
      DARABONBA_PTR_TO_JSON(MountTargetDomain, mountTargetDomain_);
      DARABONBA_PTR_TO_JSON(NASDirectory, NASDirectory_);
      DARABONBA_PTR_TO_JSON(ProtocolType, protocolType_);
    };
    friend void from_json(const Darabonba::Json& j, SharedStorageTemplate& obj) { 
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(MountDirectory, mountDirectory_);
      DARABONBA_PTR_FROM_JSON(MountOptions, mountOptions_);
      DARABONBA_PTR_FROM_JSON(MountTargetDomain, mountTargetDomain_);
      DARABONBA_PTR_FROM_JSON(NASDirectory, NASDirectory_);
      DARABONBA_PTR_FROM_JSON(ProtocolType, protocolType_);
    };
    SharedStorageTemplate() = default ;
    SharedStorageTemplate(const SharedStorageTemplate &) = default ;
    SharedStorageTemplate(SharedStorageTemplate &&) = default ;
    SharedStorageTemplate(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SharedStorageTemplate() = default ;
    SharedStorageTemplate& operator=(const SharedStorageTemplate &) = default ;
    SharedStorageTemplate& operator=(SharedStorageTemplate &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileSystemId_ == nullptr
        && this->mountDirectory_ == nullptr && this->mountOptions_ == nullptr && this->mountTargetDomain_ == nullptr && this->NASDirectory_ == nullptr && this->protocolType_ == nullptr; };
    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline SharedStorageTemplate& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // mountDirectory Field Functions 
    bool hasMountDirectory() const { return this->mountDirectory_ != nullptr;};
    void deleteMountDirectory() { this->mountDirectory_ = nullptr;};
    inline string getMountDirectory() const { DARABONBA_PTR_GET_DEFAULT(mountDirectory_, "") };
    inline SharedStorageTemplate& setMountDirectory(string mountDirectory) { DARABONBA_PTR_SET_VALUE(mountDirectory_, mountDirectory) };


    // mountOptions Field Functions 
    bool hasMountOptions() const { return this->mountOptions_ != nullptr;};
    void deleteMountOptions() { this->mountOptions_ = nullptr;};
    inline string getMountOptions() const { DARABONBA_PTR_GET_DEFAULT(mountOptions_, "") };
    inline SharedStorageTemplate& setMountOptions(string mountOptions) { DARABONBA_PTR_SET_VALUE(mountOptions_, mountOptions) };


    // mountTargetDomain Field Functions 
    bool hasMountTargetDomain() const { return this->mountTargetDomain_ != nullptr;};
    void deleteMountTargetDomain() { this->mountTargetDomain_ = nullptr;};
    inline string getMountTargetDomain() const { DARABONBA_PTR_GET_DEFAULT(mountTargetDomain_, "") };
    inline SharedStorageTemplate& setMountTargetDomain(string mountTargetDomain) { DARABONBA_PTR_SET_VALUE(mountTargetDomain_, mountTargetDomain) };


    // NASDirectory Field Functions 
    bool hasNASDirectory() const { return this->NASDirectory_ != nullptr;};
    void deleteNASDirectory() { this->NASDirectory_ = nullptr;};
    inline string getNASDirectory() const { DARABONBA_PTR_GET_DEFAULT(NASDirectory_, "") };
    inline SharedStorageTemplate& setNASDirectory(string NASDirectory) { DARABONBA_PTR_SET_VALUE(NASDirectory_, NASDirectory) };


    // protocolType Field Functions 
    bool hasProtocolType() const { return this->protocolType_ != nullptr;};
    void deleteProtocolType() { this->protocolType_ = nullptr;};
    inline string getProtocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, "") };
    inline SharedStorageTemplate& setProtocolType(string protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


  protected:
    shared_ptr<string> fileSystemId_ {};
    shared_ptr<string> mountDirectory_ {};
    shared_ptr<string> mountOptions_ {};
    shared_ptr<string> mountTargetDomain_ {};
    shared_ptr<string> NASDirectory_ {};
    shared_ptr<string> protocolType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
