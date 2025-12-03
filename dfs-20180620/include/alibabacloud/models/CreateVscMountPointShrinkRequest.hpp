// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVSCMOUNTPOINTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEVSCMOUNTPOINTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DFS20180620
{
namespace Models
{
  class CreateVscMountPointShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVscMountPointShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(InputRegionId, inputRegionId_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVscMountPointShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(InputRegionId, inputRegionId_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIdsShrink_);
    };
    CreateVscMountPointShrinkRequest() = default ;
    CreateVscMountPointShrinkRequest(const CreateVscMountPointShrinkRequest &) = default ;
    CreateVscMountPointShrinkRequest(CreateVscMountPointShrinkRequest &&) = default ;
    CreateVscMountPointShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVscMountPointShrinkRequest() = default ;
    CreateVscMountPointShrinkRequest& operator=(const CreateVscMountPointShrinkRequest &) = default ;
    CreateVscMountPointShrinkRequest& operator=(CreateVscMountPointShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->fileSystemId_ == nullptr && return this->inputRegionId_ == nullptr && return this->instanceIdsShrink_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateVscMountPointShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string fileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline CreateVscMountPointShrinkRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // inputRegionId Field Functions 
    bool hasInputRegionId() const { return this->inputRegionId_ != nullptr;};
    void deleteInputRegionId() { this->inputRegionId_ = nullptr;};
    inline string inputRegionId() const { DARABONBA_PTR_GET_DEFAULT(inputRegionId_, "") };
    inline CreateVscMountPointShrinkRequest& setInputRegionId(string inputRegionId) { DARABONBA_PTR_SET_VALUE(inputRegionId_, inputRegionId) };


    // instanceIdsShrink Field Functions 
    bool hasInstanceIdsShrink() const { return this->instanceIdsShrink_ != nullptr;};
    void deleteInstanceIdsShrink() { this->instanceIdsShrink_ = nullptr;};
    inline string instanceIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(instanceIdsShrink_, "") };
    inline CreateVscMountPointShrinkRequest& setInstanceIdsShrink(string instanceIdsShrink) { DARABONBA_PTR_SET_VALUE(instanceIdsShrink_, instanceIdsShrink) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> fileSystemId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> inputRegionId_ = nullptr;
    std::shared_ptr<string> instanceIdsShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DFS20180620
#endif
