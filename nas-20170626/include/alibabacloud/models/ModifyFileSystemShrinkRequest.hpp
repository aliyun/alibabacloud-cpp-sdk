// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYFILESYSTEMSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYFILESYSTEMSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class ModifyFileSystemShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyFileSystemShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(Options, optionsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyFileSystemShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(Options, optionsShrink_);
    };
    ModifyFileSystemShrinkRequest() = default ;
    ModifyFileSystemShrinkRequest(const ModifyFileSystemShrinkRequest &) = default ;
    ModifyFileSystemShrinkRequest(ModifyFileSystemShrinkRequest &&) = default ;
    ModifyFileSystemShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyFileSystemShrinkRequest() = default ;
    ModifyFileSystemShrinkRequest& operator=(const ModifyFileSystemShrinkRequest &) = default ;
    ModifyFileSystemShrinkRequest& operator=(ModifyFileSystemShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->fileSystemId_ == nullptr && return this->optionsShrink_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyFileSystemShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string fileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline ModifyFileSystemShrinkRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // optionsShrink Field Functions 
    bool hasOptionsShrink() const { return this->optionsShrink_ != nullptr;};
    void deleteOptionsShrink() { this->optionsShrink_ = nullptr;};
    inline string optionsShrink() const { DARABONBA_PTR_GET_DEFAULT(optionsShrink_, "") };
    inline ModifyFileSystemShrinkRequest& setOptionsShrink(string optionsShrink) { DARABONBA_PTR_SET_VALUE(optionsShrink_, optionsShrink) };


  protected:
    // The description of the file system.
    // 
    // Limits:
    // 
    // *   The description must be 2 to 128 characters in length.
    // *   It must start with a letter but cannot start with `http://` or `https://`.
    // *   The description can contain letters, digits, colons (:), underscores (_), and hyphens (-).
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the file system.
    // 
    // *   Sample ID of a General-purpose NAS file system: `31a8e4****`.
    // *   The IDs of Extreme NAS file systems must start with `extreme-`. Example: `extreme-0015****`.
    // *   The IDs of Cloud Paralleled File System (CPFS) file systems must start with `cpfs-`. Example: `cpfs-125487****`.
    // 
    // This parameter is required.
    std::shared_ptr<string> fileSystemId_ = nullptr;
    // The options.
    std::shared_ptr<string> optionsShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
