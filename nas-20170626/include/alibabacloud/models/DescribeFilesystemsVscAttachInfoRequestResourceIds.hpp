// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFILESYSTEMSVSCATTACHINFOREQUESTRESOURCEIDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFILESYSTEMSVSCATTACHINFOREQUESTRESOURCEIDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeFilesystemsVscAttachInfoRequestResourceIds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFilesystemsVscAttachInfoRequestResourceIds& obj) { 
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(VscId, vscId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFilesystemsVscAttachInfoRequestResourceIds& obj) { 
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(VscId, vscId_);
    };
    DescribeFilesystemsVscAttachInfoRequestResourceIds() = default ;
    DescribeFilesystemsVscAttachInfoRequestResourceIds(const DescribeFilesystemsVscAttachInfoRequestResourceIds &) = default ;
    DescribeFilesystemsVscAttachInfoRequestResourceIds(DescribeFilesystemsVscAttachInfoRequestResourceIds &&) = default ;
    DescribeFilesystemsVscAttachInfoRequestResourceIds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFilesystemsVscAttachInfoRequestResourceIds() = default ;
    DescribeFilesystemsVscAttachInfoRequestResourceIds& operator=(const DescribeFilesystemsVscAttachInfoRequestResourceIds &) = default ;
    DescribeFilesystemsVscAttachInfoRequestResourceIds& operator=(DescribeFilesystemsVscAttachInfoRequestResourceIds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileSystemId_ == nullptr
        && return this->vscId_ == nullptr; };
    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string fileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline DescribeFilesystemsVscAttachInfoRequestResourceIds& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // vscId Field Functions 
    bool hasVscId() const { return this->vscId_ != nullptr;};
    void deleteVscId() { this->vscId_ = nullptr;};
    inline string vscId() const { DARABONBA_PTR_GET_DEFAULT(vscId_, "") };
    inline DescribeFilesystemsVscAttachInfoRequestResourceIds& setVscId(string vscId) { DARABONBA_PTR_SET_VALUE(vscId_, vscId) };


  protected:
    // The ID of the file system.
    std::shared_ptr<string> fileSystemId_ = nullptr;
    // The ID of the virtual storage channel.
    std::shared_ptr<string> vscId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
