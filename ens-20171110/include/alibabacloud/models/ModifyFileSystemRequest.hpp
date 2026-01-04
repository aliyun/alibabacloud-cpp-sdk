// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYFILESYSTEMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYFILESYSTEMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class ModifyFileSystemRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyFileSystemRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyFileSystemRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
    };
    ModifyFileSystemRequest() = default ;
    ModifyFileSystemRequest(const ModifyFileSystemRequest &) = default ;
    ModifyFileSystemRequest(ModifyFileSystemRequest &&) = default ;
    ModifyFileSystemRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyFileSystemRequest() = default ;
    ModifyFileSystemRequest& operator=(const ModifyFileSystemRequest &) = default ;
    ModifyFileSystemRequest& operator=(ModifyFileSystemRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->ensRegionId_ == nullptr && this->fileSystemId_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyFileSystemRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // ensRegionId Field Functions 
    bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
    void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
    inline string getEnsRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
    inline ModifyFileSystemRequest& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline ModifyFileSystemRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


  protected:
    // The description of the file system.
    // 
    // This parameter is required.
    shared_ptr<string> description_ {};
    // The ID of the edge node.
    // 
    // This parameter is required.
    shared_ptr<string> ensRegionId_ {};
    // The ID of the file system.
    // 
    // This parameter is required.
    shared_ptr<string> fileSystemId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
