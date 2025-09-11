// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFILESYSTEMSVSCATTACHINFORESPONSEBODYVSCATTACHINFOVSCATTACHINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFILESYSTEMSVSCATTACHINFORESPONSEBODYVSCATTACHINFOVSCATTACHINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeFilesystemsVscAttachInfoResponseBodyVscAttachInfoVscAttachInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFilesystemsVscAttachInfoResponseBodyVscAttachInfoVscAttachInfo& obj) { 
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(VscId, vscId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFilesystemsVscAttachInfoResponseBodyVscAttachInfoVscAttachInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(VscId, vscId_);
    };
    DescribeFilesystemsVscAttachInfoResponseBodyVscAttachInfoVscAttachInfo() = default ;
    DescribeFilesystemsVscAttachInfoResponseBodyVscAttachInfoVscAttachInfo(const DescribeFilesystemsVscAttachInfoResponseBodyVscAttachInfoVscAttachInfo &) = default ;
    DescribeFilesystemsVscAttachInfoResponseBodyVscAttachInfoVscAttachInfo(DescribeFilesystemsVscAttachInfoResponseBodyVscAttachInfoVscAttachInfo &&) = default ;
    DescribeFilesystemsVscAttachInfoResponseBodyVscAttachInfoVscAttachInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFilesystemsVscAttachInfoResponseBodyVscAttachInfoVscAttachInfo() = default ;
    DescribeFilesystemsVscAttachInfoResponseBodyVscAttachInfoVscAttachInfo& operator=(const DescribeFilesystemsVscAttachInfoResponseBodyVscAttachInfoVscAttachInfo &) = default ;
    DescribeFilesystemsVscAttachInfoResponseBodyVscAttachInfoVscAttachInfo& operator=(DescribeFilesystemsVscAttachInfoResponseBodyVscAttachInfoVscAttachInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fileSystemId_ != nullptr
        && this->status_ != nullptr && this->vscId_ != nullptr; };
    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string fileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline DescribeFilesystemsVscAttachInfoResponseBodyVscAttachInfoVscAttachInfo& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeFilesystemsVscAttachInfoResponseBodyVscAttachInfoVscAttachInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // vscId Field Functions 
    bool hasVscId() const { return this->vscId_ != nullptr;};
    void deleteVscId() { this->vscId_ = nullptr;};
    inline string vscId() const { DARABONBA_PTR_GET_DEFAULT(vscId_, "") };
    inline DescribeFilesystemsVscAttachInfoResponseBodyVscAttachInfoVscAttachInfo& setVscId(string vscId) { DARABONBA_PTR_SET_VALUE(vscId_, vscId) };


  protected:
    // The ID of the file system.
    std::shared_ptr<string> fileSystemId_ = nullptr;
    // The association status of the file system and virtual channel. Valid values:
    // 
    // *   Attaching: The association is being made.
    // *   Attached: The association is complete.
    // *   Detaching: The association is being canceled.
    // *   Detached: The association is canceled.
    // *   Failed: The association failed.
    std::shared_ptr<string> status_ = nullptr;
    // The ID of the virtual storage channel.
    std::shared_ptr<string> vscId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
