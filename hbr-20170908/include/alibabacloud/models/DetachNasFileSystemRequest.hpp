// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETACHNASFILESYSTEMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DETACHNASFILESYSTEMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DetachNasFileSystemRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetachNasFileSystemRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CrossAccountRoleName, crossAccountRoleName_);
      DARABONBA_PTR_TO_JSON(CrossAccountType, crossAccountType_);
      DARABONBA_PTR_TO_JSON(CrossAccountUserId, crossAccountUserId_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
    };
    friend void from_json(const Darabonba::Json& j, DetachNasFileSystemRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CrossAccountRoleName, crossAccountRoleName_);
      DARABONBA_PTR_FROM_JSON(CrossAccountType, crossAccountType_);
      DARABONBA_PTR_FROM_JSON(CrossAccountUserId, crossAccountUserId_);
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
    };
    DetachNasFileSystemRequest() = default ;
    DetachNasFileSystemRequest(const DetachNasFileSystemRequest &) = default ;
    DetachNasFileSystemRequest(DetachNasFileSystemRequest &&) = default ;
    DetachNasFileSystemRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetachNasFileSystemRequest() = default ;
    DetachNasFileSystemRequest& operator=(const DetachNasFileSystemRequest &) = default ;
    DetachNasFileSystemRequest& operator=(DetachNasFileSystemRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->crossAccountRoleName_ != nullptr && this->crossAccountType_ != nullptr && this->crossAccountUserId_ != nullptr && this->fileSystemId_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DetachNasFileSystemRequest& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // crossAccountRoleName Field Functions 
    bool hasCrossAccountRoleName() const { return this->crossAccountRoleName_ != nullptr;};
    void deleteCrossAccountRoleName() { this->crossAccountRoleName_ = nullptr;};
    inline string crossAccountRoleName() const { DARABONBA_PTR_GET_DEFAULT(crossAccountRoleName_, "") };
    inline DetachNasFileSystemRequest& setCrossAccountRoleName(string crossAccountRoleName) { DARABONBA_PTR_SET_VALUE(crossAccountRoleName_, crossAccountRoleName) };


    // crossAccountType Field Functions 
    bool hasCrossAccountType() const { return this->crossAccountType_ != nullptr;};
    void deleteCrossAccountType() { this->crossAccountType_ = nullptr;};
    inline string crossAccountType() const { DARABONBA_PTR_GET_DEFAULT(crossAccountType_, "") };
    inline DetachNasFileSystemRequest& setCrossAccountType(string crossAccountType) { DARABONBA_PTR_SET_VALUE(crossAccountType_, crossAccountType) };


    // crossAccountUserId Field Functions 
    bool hasCrossAccountUserId() const { return this->crossAccountUserId_ != nullptr;};
    void deleteCrossAccountUserId() { this->crossAccountUserId_ = nullptr;};
    inline int64_t crossAccountUserId() const { DARABONBA_PTR_GET_DEFAULT(crossAccountUserId_, 0L) };
    inline DetachNasFileSystemRequest& setCrossAccountUserId(int64_t crossAccountUserId) { DARABONBA_PTR_SET_VALUE(crossAccountUserId_, crossAccountUserId) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string fileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline DetachNasFileSystemRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


  protected:
    // The time when the file system was created. The value must be a UNIX timestamp. Unit: seconds.
    // 
    // This parameter is required.
    std::shared_ptr<string> createTime_ = nullptr;
    // The name of the RAM role that is created within the source Alibaba Cloud account and assigned to the current Alibaba Cloud account to authorize the current Alibaba Cloud account to back up and restore data across Alibaba Cloud accounts.
    std::shared_ptr<string> crossAccountRoleName_ = nullptr;
    // Specifies whether data is backed up and restored within the same Alibaba Cloud account or across Alibaba Cloud accounts. Valid values:
    // 
    // *   SELF_ACCOUNT: Data is backed up and restored within the same Alibaba Cloud account.
    // *   CROSS_ACCOUNT: Data is backed up and restored across Alibaba Cloud accounts.
    std::shared_ptr<string> crossAccountType_ = nullptr;
    // The ID of the source Alibaba Cloud account that authorizes the current Alibaba Cloud account to back up and restore data across Alibaba Cloud accounts.
    std::shared_ptr<int64_t> crossAccountUserId_ = nullptr;
    // The ID of the file system.
    // 
    // This parameter is required.
    std::shared_ptr<string> fileSystemId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
