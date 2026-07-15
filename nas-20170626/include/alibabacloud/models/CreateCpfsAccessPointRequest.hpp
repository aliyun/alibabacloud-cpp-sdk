// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECPFSACCESSPOINTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECPFSACCESSPOINTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class CreateCpfsAccessPointRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCpfsAccessPointRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RootDirectory, rootDirectory_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCpfsAccessPointRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RootDirectory, rootDirectory_);
    };
    CreateCpfsAccessPointRequest() = default ;
    CreateCpfsAccessPointRequest(const CreateCpfsAccessPointRequest &) = default ;
    CreateCpfsAccessPointRequest(CreateCpfsAccessPointRequest &&) = default ;
    CreateCpfsAccessPointRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCpfsAccessPointRequest() = default ;
    CreateCpfsAccessPointRequest& operator=(const CreateCpfsAccessPointRequest &) = default ;
    CreateCpfsAccessPointRequest& operator=(CreateCpfsAccessPointRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RootDirectory : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RootDirectory& obj) { 
        DARABONBA_PTR_TO_JSON(RootPath, rootPath_);
      };
      friend void from_json(const Darabonba::Json& j, RootDirectory& obj) { 
        DARABONBA_PTR_FROM_JSON(RootPath, rootPath_);
      };
      RootDirectory() = default ;
      RootDirectory(const RootDirectory &) = default ;
      RootDirectory(RootDirectory &&) = default ;
      RootDirectory(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RootDirectory() = default ;
      RootDirectory& operator=(const RootDirectory &) = default ;
      RootDirectory& operator=(RootDirectory &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->rootPath_ == nullptr; };
      // rootPath Field Functions 
      bool hasRootPath() const { return this->rootPath_ != nullptr;};
      void deleteRootPath() { this->rootPath_ = nullptr;};
      inline string getRootPath() const { DARABONBA_PTR_GET_DEFAULT(rootPath_, "") };
      inline RootDirectory& setRootPath(string rootPath) { DARABONBA_PTR_SET_VALUE(rootPath_, rootPath) };


    protected:
      shared_ptr<string> rootPath_ {};
    };

    virtual bool empty() const override { return this->description_ == nullptr
        && this->fileSystemId_ == nullptr && this->regionId_ == nullptr && this->rootDirectory_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateCpfsAccessPointRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline CreateCpfsAccessPointRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateCpfsAccessPointRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // rootDirectory Field Functions 
    bool hasRootDirectory() const { return this->rootDirectory_ != nullptr;};
    void deleteRootDirectory() { this->rootDirectory_ = nullptr;};
    inline const CreateCpfsAccessPointRequest::RootDirectory & getRootDirectory() const { DARABONBA_PTR_GET_CONST(rootDirectory_, CreateCpfsAccessPointRequest::RootDirectory) };
    inline CreateCpfsAccessPointRequest::RootDirectory getRootDirectory() { DARABONBA_PTR_GET(rootDirectory_, CreateCpfsAccessPointRequest::RootDirectory) };
    inline CreateCpfsAccessPointRequest& setRootDirectory(const CreateCpfsAccessPointRequest::RootDirectory & rootDirectory) { DARABONBA_PTR_SET_VALUE(rootDirectory_, rootDirectory) };
    inline CreateCpfsAccessPointRequest& setRootDirectory(CreateCpfsAccessPointRequest::RootDirectory && rootDirectory) { DARABONBA_PTR_SET_RVALUE(rootDirectory_, rootDirectory) };


  protected:
    shared_ptr<string> description_ {};
    // This parameter is required.
    shared_ptr<string> fileSystemId_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<CreateCpfsAccessPointRequest::RootDirectory> rootDirectory_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
