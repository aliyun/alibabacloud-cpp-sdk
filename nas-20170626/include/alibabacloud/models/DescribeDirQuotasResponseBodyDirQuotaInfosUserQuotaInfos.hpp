// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDIRQUOTASRESPONSEBODYDIRQUOTAINFOSUSERQUOTAINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDIRQUOTASRESPONSEBODYDIRQUOTAINFOSUSERQUOTAINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeDirQuotasResponseBodyDirQuotaInfosUserQuotaInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDirQuotasResponseBodyDirQuotaInfosUserQuotaInfos& obj) { 
      DARABONBA_PTR_TO_JSON(FileCountLimit, fileCountLimit_);
      DARABONBA_PTR_TO_JSON(FileCountReal, fileCountReal_);
      DARABONBA_PTR_TO_JSON(QuotaType, quotaType_);
      DARABONBA_PTR_TO_JSON(SizeLimit, sizeLimit_);
      DARABONBA_PTR_TO_JSON(SizeReal, sizeReal_);
      DARABONBA_PTR_TO_JSON(SizeRealInByte, sizeRealInByte_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(UserType, userType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDirQuotasResponseBodyDirQuotaInfosUserQuotaInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(FileCountLimit, fileCountLimit_);
      DARABONBA_PTR_FROM_JSON(FileCountReal, fileCountReal_);
      DARABONBA_PTR_FROM_JSON(QuotaType, quotaType_);
      DARABONBA_PTR_FROM_JSON(SizeLimit, sizeLimit_);
      DARABONBA_PTR_FROM_JSON(SizeReal, sizeReal_);
      DARABONBA_PTR_FROM_JSON(SizeRealInByte, sizeRealInByte_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(UserType, userType_);
    };
    DescribeDirQuotasResponseBodyDirQuotaInfosUserQuotaInfos() = default ;
    DescribeDirQuotasResponseBodyDirQuotaInfosUserQuotaInfos(const DescribeDirQuotasResponseBodyDirQuotaInfosUserQuotaInfos &) = default ;
    DescribeDirQuotasResponseBodyDirQuotaInfosUserQuotaInfos(DescribeDirQuotasResponseBodyDirQuotaInfosUserQuotaInfos &&) = default ;
    DescribeDirQuotasResponseBodyDirQuotaInfosUserQuotaInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDirQuotasResponseBodyDirQuotaInfosUserQuotaInfos() = default ;
    DescribeDirQuotasResponseBodyDirQuotaInfosUserQuotaInfos& operator=(const DescribeDirQuotasResponseBodyDirQuotaInfosUserQuotaInfos &) = default ;
    DescribeDirQuotasResponseBodyDirQuotaInfosUserQuotaInfos& operator=(DescribeDirQuotasResponseBodyDirQuotaInfosUserQuotaInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fileCountLimit_ != nullptr
        && this->fileCountReal_ != nullptr && this->quotaType_ != nullptr && this->sizeLimit_ != nullptr && this->sizeReal_ != nullptr && this->sizeRealInByte_ != nullptr
        && this->userId_ != nullptr && this->userType_ != nullptr; };
    // fileCountLimit Field Functions 
    bool hasFileCountLimit() const { return this->fileCountLimit_ != nullptr;};
    void deleteFileCountLimit() { this->fileCountLimit_ = nullptr;};
    inline int64_t fileCountLimit() const { DARABONBA_PTR_GET_DEFAULT(fileCountLimit_, 0L) };
    inline DescribeDirQuotasResponseBodyDirQuotaInfosUserQuotaInfos& setFileCountLimit(int64_t fileCountLimit) { DARABONBA_PTR_SET_VALUE(fileCountLimit_, fileCountLimit) };


    // fileCountReal Field Functions 
    bool hasFileCountReal() const { return this->fileCountReal_ != nullptr;};
    void deleteFileCountReal() { this->fileCountReal_ = nullptr;};
    inline int64_t fileCountReal() const { DARABONBA_PTR_GET_DEFAULT(fileCountReal_, 0L) };
    inline DescribeDirQuotasResponseBodyDirQuotaInfosUserQuotaInfos& setFileCountReal(int64_t fileCountReal) { DARABONBA_PTR_SET_VALUE(fileCountReal_, fileCountReal) };


    // quotaType Field Functions 
    bool hasQuotaType() const { return this->quotaType_ != nullptr;};
    void deleteQuotaType() { this->quotaType_ = nullptr;};
    inline string quotaType() const { DARABONBA_PTR_GET_DEFAULT(quotaType_, "") };
    inline DescribeDirQuotasResponseBodyDirQuotaInfosUserQuotaInfos& setQuotaType(string quotaType) { DARABONBA_PTR_SET_VALUE(quotaType_, quotaType) };


    // sizeLimit Field Functions 
    bool hasSizeLimit() const { return this->sizeLimit_ != nullptr;};
    void deleteSizeLimit() { this->sizeLimit_ = nullptr;};
    inline int64_t sizeLimit() const { DARABONBA_PTR_GET_DEFAULT(sizeLimit_, 0L) };
    inline DescribeDirQuotasResponseBodyDirQuotaInfosUserQuotaInfos& setSizeLimit(int64_t sizeLimit) { DARABONBA_PTR_SET_VALUE(sizeLimit_, sizeLimit) };


    // sizeReal Field Functions 
    bool hasSizeReal() const { return this->sizeReal_ != nullptr;};
    void deleteSizeReal() { this->sizeReal_ = nullptr;};
    inline int64_t sizeReal() const { DARABONBA_PTR_GET_DEFAULT(sizeReal_, 0L) };
    inline DescribeDirQuotasResponseBodyDirQuotaInfosUserQuotaInfos& setSizeReal(int64_t sizeReal) { DARABONBA_PTR_SET_VALUE(sizeReal_, sizeReal) };


    // sizeRealInByte Field Functions 
    bool hasSizeRealInByte() const { return this->sizeRealInByte_ != nullptr;};
    void deleteSizeRealInByte() { this->sizeRealInByte_ = nullptr;};
    inline int64_t sizeRealInByte() const { DARABONBA_PTR_GET_DEFAULT(sizeRealInByte_, 0L) };
    inline DescribeDirQuotasResponseBodyDirQuotaInfosUserQuotaInfos& setSizeRealInByte(int64_t sizeRealInByte) { DARABONBA_PTR_SET_VALUE(sizeRealInByte_, sizeRealInByte) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline DescribeDirQuotasResponseBodyDirQuotaInfosUserQuotaInfos& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userType Field Functions 
    bool hasUserType() const { return this->userType_ != nullptr;};
    void deleteUserType() { this->userType_ = nullptr;};
    inline string userType() const { DARABONBA_PTR_GET_DEFAULT(userType_, "") };
    inline DescribeDirQuotasResponseBodyDirQuotaInfosUserQuotaInfos& setUserType(string userType) { DARABONBA_PTR_SET_VALUE(userType_, userType) };


  protected:
    // The maximum number of files that a user can create in the directory.
    std::shared_ptr<int64_t> fileCountLimit_ = nullptr;
    // The total number of files that a user has created in the directory.
    std::shared_ptr<int64_t> fileCountReal_ = nullptr;
    // The type of the quota. Valid values: Accounting and Enforcement.
    std::shared_ptr<string> quotaType_ = nullptr;
    // The maximum size of files that a user can create in the directory. Unit: GiB.
    std::shared_ptr<int64_t> sizeLimit_ = nullptr;
    // The total size of files that a user has created in the directory. Unit: GiB.
    std::shared_ptr<int64_t> sizeReal_ = nullptr;
    // The total size of files that a user has created in the directory. Unit: bytes.
    std::shared_ptr<int64_t> sizeRealInByte_ = nullptr;
    // The ID of the user that you specify to create a quota for the directory. The value depends on the value of the UserType parameter. Valid values: Uid and Gid.
    std::shared_ptr<string> userId_ = nullptr;
    // The type of user. Valid values: Uid, Gid, and AllUsers.
    // 
    // *   If Uid or Gid is returned, a value is returned for UserId.
    // *   If AllUsers is returned, UserId is empty.
    std::shared_ptr<string> userType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
