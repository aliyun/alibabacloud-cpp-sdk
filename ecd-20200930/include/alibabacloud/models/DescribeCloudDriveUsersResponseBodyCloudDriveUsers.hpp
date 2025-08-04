// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDDRIVEUSERSRESPONSEBODYCLOUDDRIVEUSERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDDRIVEUSERSRESPONSEBODYCLOUDDRIVEUSERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeCloudDriveUsersResponseBodyCloudDriveUsers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudDriveUsersResponseBodyCloudDriveUsers& obj) { 
      DARABONBA_PTR_TO_JSON(DriveId, driveId_);
      DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
      DARABONBA_PTR_TO_JSON(UsedSize, usedSize_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudDriveUsersResponseBodyCloudDriveUsers& obj) { 
      DARABONBA_PTR_FROM_JSON(DriveId, driveId_);
      DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
      DARABONBA_PTR_FROM_JSON(UsedSize, usedSize_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    DescribeCloudDriveUsersResponseBodyCloudDriveUsers() = default ;
    DescribeCloudDriveUsersResponseBodyCloudDriveUsers(const DescribeCloudDriveUsersResponseBodyCloudDriveUsers &) = default ;
    DescribeCloudDriveUsersResponseBodyCloudDriveUsers(DescribeCloudDriveUsersResponseBodyCloudDriveUsers &&) = default ;
    DescribeCloudDriveUsersResponseBodyCloudDriveUsers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudDriveUsersResponseBodyCloudDriveUsers() = default ;
    DescribeCloudDriveUsersResponseBodyCloudDriveUsers& operator=(const DescribeCloudDriveUsersResponseBodyCloudDriveUsers &) = default ;
    DescribeCloudDriveUsersResponseBodyCloudDriveUsers& operator=(DescribeCloudDriveUsersResponseBodyCloudDriveUsers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->driveId_ != nullptr
        && this->endUserId_ != nullptr && this->status_ != nullptr && this->totalSize_ != nullptr && this->usedSize_ != nullptr && this->userId_ != nullptr
        && this->userName_ != nullptr; };
    // driveId Field Functions 
    bool hasDriveId() const { return this->driveId_ != nullptr;};
    void deleteDriveId() { this->driveId_ = nullptr;};
    inline string driveId() const { DARABONBA_PTR_GET_DEFAULT(driveId_, "") };
    inline DescribeCloudDriveUsersResponseBodyCloudDriveUsers& setDriveId(string driveId) { DARABONBA_PTR_SET_VALUE(driveId_, driveId) };


    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline string endUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
    inline DescribeCloudDriveUsersResponseBodyCloudDriveUsers& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeCloudDriveUsersResponseBodyCloudDriveUsers& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // totalSize Field Functions 
    bool hasTotalSize() const { return this->totalSize_ != nullptr;};
    void deleteTotalSize() { this->totalSize_ = nullptr;};
    inline int64_t totalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0L) };
    inline DescribeCloudDriveUsersResponseBodyCloudDriveUsers& setTotalSize(int64_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


    // usedSize Field Functions 
    bool hasUsedSize() const { return this->usedSize_ != nullptr;};
    void deleteUsedSize() { this->usedSize_ = nullptr;};
    inline int64_t usedSize() const { DARABONBA_PTR_GET_DEFAULT(usedSize_, 0L) };
    inline DescribeCloudDriveUsersResponseBodyCloudDriveUsers& setUsedSize(int64_t usedSize) { DARABONBA_PTR_SET_VALUE(usedSize_, usedSize) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline DescribeCloudDriveUsersResponseBodyCloudDriveUsers& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline DescribeCloudDriveUsersResponseBodyCloudDriveUsers& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    std::shared_ptr<string> driveId_ = nullptr;
    std::shared_ptr<string> endUserId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<int64_t> totalSize_ = nullptr;
    std::shared_ptr<int64_t> usedSize_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
