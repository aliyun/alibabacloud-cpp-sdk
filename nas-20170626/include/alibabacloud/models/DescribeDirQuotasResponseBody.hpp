// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDIRQUOTASRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDIRQUOTASRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeDirQuotasResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDirQuotasResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DirQuotaInfos, dirQuotaInfos_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDirQuotasResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DirQuotaInfos, dirQuotaInfos_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDirQuotasResponseBody() = default ;
    DescribeDirQuotasResponseBody(const DescribeDirQuotasResponseBody &) = default ;
    DescribeDirQuotasResponseBody(DescribeDirQuotasResponseBody &&) = default ;
    DescribeDirQuotasResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDirQuotasResponseBody() = default ;
    DescribeDirQuotasResponseBody& operator=(const DescribeDirQuotasResponseBody &) = default ;
    DescribeDirQuotasResponseBody& operator=(DescribeDirQuotasResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DirQuotaInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DirQuotaInfos& obj) { 
        DARABONBA_PTR_TO_JSON(DirInode, dirInode_);
        DARABONBA_PTR_TO_JSON(Path, path_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(UserQuotaInfos, userQuotaInfos_);
      };
      friend void from_json(const Darabonba::Json& j, DirQuotaInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(DirInode, dirInode_);
        DARABONBA_PTR_FROM_JSON(Path, path_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(UserQuotaInfos, userQuotaInfos_);
      };
      DirQuotaInfos() = default ;
      DirQuotaInfos(const DirQuotaInfos &) = default ;
      DirQuotaInfos(DirQuotaInfos &&) = default ;
      DirQuotaInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DirQuotaInfos() = default ;
      DirQuotaInfos& operator=(const DirQuotaInfos &) = default ;
      DirQuotaInfos& operator=(DirQuotaInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class UserQuotaInfos : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UserQuotaInfos& obj) { 
          DARABONBA_PTR_TO_JSON(FileCountLimit, fileCountLimit_);
          DARABONBA_PTR_TO_JSON(FileCountReal, fileCountReal_);
          DARABONBA_PTR_TO_JSON(QuotaType, quotaType_);
          DARABONBA_PTR_TO_JSON(SizeLimit, sizeLimit_);
          DARABONBA_PTR_TO_JSON(SizeReal, sizeReal_);
          DARABONBA_PTR_TO_JSON(SizeRealInByte, sizeRealInByte_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
          DARABONBA_PTR_TO_JSON(UserType, userType_);
        };
        friend void from_json(const Darabonba::Json& j, UserQuotaInfos& obj) { 
          DARABONBA_PTR_FROM_JSON(FileCountLimit, fileCountLimit_);
          DARABONBA_PTR_FROM_JSON(FileCountReal, fileCountReal_);
          DARABONBA_PTR_FROM_JSON(QuotaType, quotaType_);
          DARABONBA_PTR_FROM_JSON(SizeLimit, sizeLimit_);
          DARABONBA_PTR_FROM_JSON(SizeReal, sizeReal_);
          DARABONBA_PTR_FROM_JSON(SizeRealInByte, sizeRealInByte_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
          DARABONBA_PTR_FROM_JSON(UserType, userType_);
        };
        UserQuotaInfos() = default ;
        UserQuotaInfos(const UserQuotaInfos &) = default ;
        UserQuotaInfos(UserQuotaInfos &&) = default ;
        UserQuotaInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~UserQuotaInfos() = default ;
        UserQuotaInfos& operator=(const UserQuotaInfos &) = default ;
        UserQuotaInfos& operator=(UserQuotaInfos &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->fileCountLimit_ == nullptr
        && this->fileCountReal_ == nullptr && this->quotaType_ == nullptr && this->sizeLimit_ == nullptr && this->sizeReal_ == nullptr && this->sizeRealInByte_ == nullptr
        && this->userId_ == nullptr && this->userType_ == nullptr; };
        // fileCountLimit Field Functions 
        bool hasFileCountLimit() const { return this->fileCountLimit_ != nullptr;};
        void deleteFileCountLimit() { this->fileCountLimit_ = nullptr;};
        inline int64_t getFileCountLimit() const { DARABONBA_PTR_GET_DEFAULT(fileCountLimit_, 0L) };
        inline UserQuotaInfos& setFileCountLimit(int64_t fileCountLimit) { DARABONBA_PTR_SET_VALUE(fileCountLimit_, fileCountLimit) };


        // fileCountReal Field Functions 
        bool hasFileCountReal() const { return this->fileCountReal_ != nullptr;};
        void deleteFileCountReal() { this->fileCountReal_ = nullptr;};
        inline int64_t getFileCountReal() const { DARABONBA_PTR_GET_DEFAULT(fileCountReal_, 0L) };
        inline UserQuotaInfos& setFileCountReal(int64_t fileCountReal) { DARABONBA_PTR_SET_VALUE(fileCountReal_, fileCountReal) };


        // quotaType Field Functions 
        bool hasQuotaType() const { return this->quotaType_ != nullptr;};
        void deleteQuotaType() { this->quotaType_ = nullptr;};
        inline string getQuotaType() const { DARABONBA_PTR_GET_DEFAULT(quotaType_, "") };
        inline UserQuotaInfos& setQuotaType(string quotaType) { DARABONBA_PTR_SET_VALUE(quotaType_, quotaType) };


        // sizeLimit Field Functions 
        bool hasSizeLimit() const { return this->sizeLimit_ != nullptr;};
        void deleteSizeLimit() { this->sizeLimit_ = nullptr;};
        inline int64_t getSizeLimit() const { DARABONBA_PTR_GET_DEFAULT(sizeLimit_, 0L) };
        inline UserQuotaInfos& setSizeLimit(int64_t sizeLimit) { DARABONBA_PTR_SET_VALUE(sizeLimit_, sizeLimit) };


        // sizeReal Field Functions 
        bool hasSizeReal() const { return this->sizeReal_ != nullptr;};
        void deleteSizeReal() { this->sizeReal_ = nullptr;};
        inline int64_t getSizeReal() const { DARABONBA_PTR_GET_DEFAULT(sizeReal_, 0L) };
        inline UserQuotaInfos& setSizeReal(int64_t sizeReal) { DARABONBA_PTR_SET_VALUE(sizeReal_, sizeReal) };


        // sizeRealInByte Field Functions 
        bool hasSizeRealInByte() const { return this->sizeRealInByte_ != nullptr;};
        void deleteSizeRealInByte() { this->sizeRealInByte_ = nullptr;};
        inline int64_t getSizeRealInByte() const { DARABONBA_PTR_GET_DEFAULT(sizeRealInByte_, 0L) };
        inline UserQuotaInfos& setSizeRealInByte(int64_t sizeRealInByte) { DARABONBA_PTR_SET_VALUE(sizeRealInByte_, sizeRealInByte) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline UserQuotaInfos& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


        // userType Field Functions 
        bool hasUserType() const { return this->userType_ != nullptr;};
        void deleteUserType() { this->userType_ = nullptr;};
        inline string getUserType() const { DARABONBA_PTR_GET_DEFAULT(userType_, "") };
        inline UserQuotaInfos& setUserType(string userType) { DARABONBA_PTR_SET_VALUE(userType_, userType) };


      protected:
        // The maximum number of files that a user can create in the directory.
        shared_ptr<int64_t> fileCountLimit_ {};
        // The total number of files that a user has created in the directory.
        shared_ptr<int64_t> fileCountReal_ {};
        // The type of the quota. Valid values: Accounting and Enforcement.
        shared_ptr<string> quotaType_ {};
        // The maximum size of files that a user can create in the directory. Unit: GiB.
        shared_ptr<int64_t> sizeLimit_ {};
        // The total size of files that a user has created in the directory. Unit: GiB.
        shared_ptr<int64_t> sizeReal_ {};
        // The total size of files that a user has created in the directory. Unit: bytes.
        shared_ptr<int64_t> sizeRealInByte_ {};
        // The ID of the user that you specify to create a quota for the directory. The value depends on the value of the UserType parameter. Valid values: Uid and Gid.
        shared_ptr<string> userId_ {};
        // The type of user. Valid values: Uid, Gid, and AllUsers.
        // 
        // *   If Uid or Gid is returned, a value is returned for UserId.
        // *   If AllUsers is returned, UserId is empty.
        shared_ptr<string> userType_ {};
      };

      virtual bool empty() const override { return this->dirInode_ == nullptr
        && this->path_ == nullptr && this->status_ == nullptr && this->userQuotaInfos_ == nullptr; };
      // dirInode Field Functions 
      bool hasDirInode() const { return this->dirInode_ != nullptr;};
      void deleteDirInode() { this->dirInode_ = nullptr;};
      inline string getDirInode() const { DARABONBA_PTR_GET_DEFAULT(dirInode_, "") };
      inline DirQuotaInfos& setDirInode(string dirInode) { DARABONBA_PTR_SET_VALUE(dirInode_, dirInode) };


      // path Field Functions 
      bool hasPath() const { return this->path_ != nullptr;};
      void deletePath() { this->path_ = nullptr;};
      inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
      inline DirQuotaInfos& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline DirQuotaInfos& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // userQuotaInfos Field Functions 
      bool hasUserQuotaInfos() const { return this->userQuotaInfos_ != nullptr;};
      void deleteUserQuotaInfos() { this->userQuotaInfos_ = nullptr;};
      inline const vector<DirQuotaInfos::UserQuotaInfos> & getUserQuotaInfos() const { DARABONBA_PTR_GET_CONST(userQuotaInfos_, vector<DirQuotaInfos::UserQuotaInfos>) };
      inline vector<DirQuotaInfos::UserQuotaInfos> getUserQuotaInfos() { DARABONBA_PTR_GET(userQuotaInfos_, vector<DirQuotaInfos::UserQuotaInfos>) };
      inline DirQuotaInfos& setUserQuotaInfos(const vector<DirQuotaInfos::UserQuotaInfos> & userQuotaInfos) { DARABONBA_PTR_SET_VALUE(userQuotaInfos_, userQuotaInfos) };
      inline DirQuotaInfos& setUserQuotaInfos(vector<DirQuotaInfos::UserQuotaInfos> && userQuotaInfos) { DARABONBA_PTR_SET_RVALUE(userQuotaInfos_, userQuotaInfos) };


    protected:
      // The inode number of the directory.
      shared_ptr<string> dirInode_ {};
      // The absolute path of a directory.
      shared_ptr<string> path_ {};
      // The status of the quota created for the directory. Valid values: Initializing and Normal. The Initializing state indicates that the quota is being created. The Normal state indicates that the quota is created.
      shared_ptr<string> status_ {};
      // The information about quotas for all users.
      shared_ptr<vector<DirQuotaInfos::UserQuotaInfos>> userQuotaInfos_ {};
    };

    virtual bool empty() const override { return this->dirQuotaInfos_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // dirQuotaInfos Field Functions 
    bool hasDirQuotaInfos() const { return this->dirQuotaInfos_ != nullptr;};
    void deleteDirQuotaInfos() { this->dirQuotaInfos_ = nullptr;};
    inline const vector<DescribeDirQuotasResponseBody::DirQuotaInfos> & getDirQuotaInfos() const { DARABONBA_PTR_GET_CONST(dirQuotaInfos_, vector<DescribeDirQuotasResponseBody::DirQuotaInfos>) };
    inline vector<DescribeDirQuotasResponseBody::DirQuotaInfos> getDirQuotaInfos() { DARABONBA_PTR_GET(dirQuotaInfos_, vector<DescribeDirQuotasResponseBody::DirQuotaInfos>) };
    inline DescribeDirQuotasResponseBody& setDirQuotaInfos(const vector<DescribeDirQuotasResponseBody::DirQuotaInfos> & dirQuotaInfos) { DARABONBA_PTR_SET_VALUE(dirQuotaInfos_, dirQuotaInfos) };
    inline DescribeDirQuotasResponseBody& setDirQuotaInfos(vector<DescribeDirQuotasResponseBody::DirQuotaInfos> && dirQuotaInfos) { DARABONBA_PTR_SET_RVALUE(dirQuotaInfos_, dirQuotaInfos) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDirQuotasResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDirQuotasResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDirQuotasResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeDirQuotasResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The queried directory quotas.
    shared_ptr<vector<DescribeDirQuotasResponseBody::DirQuotaInfos>> dirQuotaInfos_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of directories.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
