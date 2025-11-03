// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFILESETSRESPONSEBODYENTRIESENTRIE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFILESETSRESPONSEBODYENTRIESENTRIE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeFilesetsResponseBodyEntriesEntrieQuota.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeFilesetsResponseBodyEntriesEntrie : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFilesetsResponseBodyEntriesEntrie& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DeletionProtection, deletionProtection_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FileCountUsage, fileCountUsage_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(FileSystemPath, fileSystemPath_);
      DARABONBA_PTR_TO_JSON(FsetId, fsetId_);
      DARABONBA_PTR_TO_JSON(Quota, quota_);
      DARABONBA_PTR_TO_JSON(SpaceUsage, spaceUsage_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFilesetsResponseBodyEntriesEntrie& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DeletionProtection, deletionProtection_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FileCountUsage, fileCountUsage_);
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(FileSystemPath, fileSystemPath_);
      DARABONBA_PTR_FROM_JSON(FsetId, fsetId_);
      DARABONBA_PTR_FROM_JSON(Quota, quota_);
      DARABONBA_PTR_FROM_JSON(SpaceUsage, spaceUsage_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    DescribeFilesetsResponseBodyEntriesEntrie() = default ;
    DescribeFilesetsResponseBodyEntriesEntrie(const DescribeFilesetsResponseBodyEntriesEntrie &) = default ;
    DescribeFilesetsResponseBodyEntriesEntrie(DescribeFilesetsResponseBodyEntriesEntrie &&) = default ;
    DescribeFilesetsResponseBodyEntriesEntrie(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFilesetsResponseBodyEntriesEntrie() = default ;
    DescribeFilesetsResponseBodyEntriesEntrie& operator=(const DescribeFilesetsResponseBodyEntriesEntrie &) = default ;
    DescribeFilesetsResponseBodyEntriesEntrie& operator=(DescribeFilesetsResponseBodyEntriesEntrie &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->deletionProtection_ == nullptr && return this->description_ == nullptr && return this->fileCountUsage_ == nullptr && return this->fileSystemId_ == nullptr && return this->fileSystemPath_ == nullptr
        && return this->fsetId_ == nullptr && return this->quota_ == nullptr && return this->spaceUsage_ == nullptr && return this->status_ == nullptr && return this->updateTime_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeFilesetsResponseBodyEntriesEntrie& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // deletionProtection Field Functions 
    bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
    void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
    inline bool deletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, false) };
    inline DescribeFilesetsResponseBodyEntriesEntrie& setDeletionProtection(bool deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeFilesetsResponseBodyEntriesEntrie& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // fileCountUsage Field Functions 
    bool hasFileCountUsage() const { return this->fileCountUsage_ != nullptr;};
    void deleteFileCountUsage() { this->fileCountUsage_ = nullptr;};
    inline int64_t fileCountUsage() const { DARABONBA_PTR_GET_DEFAULT(fileCountUsage_, 0L) };
    inline DescribeFilesetsResponseBodyEntriesEntrie& setFileCountUsage(int64_t fileCountUsage) { DARABONBA_PTR_SET_VALUE(fileCountUsage_, fileCountUsage) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string fileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline DescribeFilesetsResponseBodyEntriesEntrie& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // fileSystemPath Field Functions 
    bool hasFileSystemPath() const { return this->fileSystemPath_ != nullptr;};
    void deleteFileSystemPath() { this->fileSystemPath_ = nullptr;};
    inline string fileSystemPath() const { DARABONBA_PTR_GET_DEFAULT(fileSystemPath_, "") };
    inline DescribeFilesetsResponseBodyEntriesEntrie& setFileSystemPath(string fileSystemPath) { DARABONBA_PTR_SET_VALUE(fileSystemPath_, fileSystemPath) };


    // fsetId Field Functions 
    bool hasFsetId() const { return this->fsetId_ != nullptr;};
    void deleteFsetId() { this->fsetId_ = nullptr;};
    inline string fsetId() const { DARABONBA_PTR_GET_DEFAULT(fsetId_, "") };
    inline DescribeFilesetsResponseBodyEntriesEntrie& setFsetId(string fsetId) { DARABONBA_PTR_SET_VALUE(fsetId_, fsetId) };


    // quota Field Functions 
    bool hasQuota() const { return this->quota_ != nullptr;};
    void deleteQuota() { this->quota_ = nullptr;};
    inline const Models::DescribeFilesetsResponseBodyEntriesEntrieQuota & quota() const { DARABONBA_PTR_GET_CONST(quota_, Models::DescribeFilesetsResponseBodyEntriesEntrieQuota) };
    inline Models::DescribeFilesetsResponseBodyEntriesEntrieQuota quota() { DARABONBA_PTR_GET(quota_, Models::DescribeFilesetsResponseBodyEntriesEntrieQuota) };
    inline DescribeFilesetsResponseBodyEntriesEntrie& setQuota(const Models::DescribeFilesetsResponseBodyEntriesEntrieQuota & quota) { DARABONBA_PTR_SET_VALUE(quota_, quota) };
    inline DescribeFilesetsResponseBodyEntriesEntrie& setQuota(Models::DescribeFilesetsResponseBodyEntriesEntrieQuota && quota) { DARABONBA_PTR_SET_RVALUE(quota_, quota) };


    // spaceUsage Field Functions 
    bool hasSpaceUsage() const { return this->spaceUsage_ != nullptr;};
    void deleteSpaceUsage() { this->spaceUsage_ = nullptr;};
    inline int64_t spaceUsage() const { DARABONBA_PTR_GET_DEFAULT(spaceUsage_, 0L) };
    inline DescribeFilesetsResponseBodyEntriesEntrie& setSpaceUsage(int64_t spaceUsage) { DARABONBA_PTR_SET_VALUE(spaceUsage_, spaceUsage) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeFilesetsResponseBodyEntriesEntrie& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline DescribeFilesetsResponseBodyEntriesEntrie& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The time when the fileset was created.
    // 
    // The time follows the ISO 8601 standard in the `yyyy-MM-ddTHH:mm:ssZ` format.
    std::shared_ptr<string> createTime_ = nullptr;
    // Specifies whether to enable deletion protection to allow you to release the fileset by using the console or by calling the [DeleteFileset](https://help.aliyun.com/document_detail/2838077.html) operation. Valid values:
    // 
    // *   true
    // *   false
    // 
    // >  This parameter can protect filesets only against manual releases, but not against automatic releases.
    std::shared_ptr<bool> deletionProtection_ = nullptr;
    // The fileset description.
    std::shared_ptr<string> description_ = nullptr;
    // The usage of the file quantity.
    // 
    // >  Only CPFS for LINGJUN V2.7.0 and later support this parameter.
    std::shared_ptr<int64_t> fileCountUsage_ = nullptr;
    // The ID of the file system.
    // 
    // *   The IDs of CPFS file systems must start with `cpfs-`. Example: cpfs-099394bd928c\\*\\*\\*\\*.
    // *   The IDs of CPFS for LINGJUN file systems must start with `bmcpfs-`. Example: bmcpfs-290w65p03ok64ya\\*\\*\\*\\*.
    // 
    // >  CPFS is not supported on the international site.
    std::shared_ptr<string> fileSystemId_ = nullptr;
    // The fileset path.
    std::shared_ptr<string> fileSystemPath_ = nullptr;
    // The fileset ID.
    std::shared_ptr<string> fsetId_ = nullptr;
    // The quota information.
    // 
    // >  Only CPFS for Lingjun V2.7.0 and later support this parameter.
    std::shared_ptr<Models::DescribeFilesetsResponseBodyEntriesEntrieQuota> quota_ = nullptr;
    // The capacity usage. Unit: bytes.
    // 
    // >  Only CPFS for LINGJUN V2.7.0 and later support this parameter.
    std::shared_ptr<int64_t> spaceUsage_ = nullptr;
    // The fileset status. Valid values:
    // 
    // *   CREATING: The fileset is being created.
    // *   CREATED: The fileset has been created and is running properly.
    // *   RELEASING: The fileset is being released.
    // *   RELEASED: The fileset has been deleted.
    std::shared_ptr<string> status_ = nullptr;
    // The time when the fileset was last updated.
    // 
    // The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format.
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
