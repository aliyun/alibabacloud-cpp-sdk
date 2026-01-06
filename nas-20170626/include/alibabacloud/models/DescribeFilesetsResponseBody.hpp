// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFILESETSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFILESETSRESPONSEBODY_HPP_
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
  class DescribeFilesetsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFilesetsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Entries, entries_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFilesetsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Entries, entries_);
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeFilesetsResponseBody() = default ;
    DescribeFilesetsResponseBody(const DescribeFilesetsResponseBody &) = default ;
    DescribeFilesetsResponseBody(DescribeFilesetsResponseBody &&) = default ;
    DescribeFilesetsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFilesetsResponseBody() = default ;
    DescribeFilesetsResponseBody& operator=(const DescribeFilesetsResponseBody &) = default ;
    DescribeFilesetsResponseBody& operator=(DescribeFilesetsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Entries : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Entries& obj) { 
        DARABONBA_PTR_TO_JSON(Entrie, entrie_);
      };
      friend void from_json(const Darabonba::Json& j, Entries& obj) { 
        DARABONBA_PTR_FROM_JSON(Entrie, entrie_);
      };
      Entries() = default ;
      Entries(const Entries &) = default ;
      Entries(Entries &&) = default ;
      Entries(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Entries() = default ;
      Entries& operator=(const Entries &) = default ;
      Entries& operator=(Entries &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Entrie : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Entrie& obj) { 
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
        friend void from_json(const Darabonba::Json& j, Entrie& obj) { 
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
        Entrie() = default ;
        Entrie(const Entrie &) = default ;
        Entrie(Entrie &&) = default ;
        Entrie(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Entrie() = default ;
        Entrie& operator=(const Entrie &) = default ;
        Entrie& operator=(Entrie &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Quota : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Quota& obj) { 
            DARABONBA_PTR_TO_JSON(FileCountLimit, fileCountLimit_);
            DARABONBA_PTR_TO_JSON(SizeLimit, sizeLimit_);
          };
          friend void from_json(const Darabonba::Json& j, Quota& obj) { 
            DARABONBA_PTR_FROM_JSON(FileCountLimit, fileCountLimit_);
            DARABONBA_PTR_FROM_JSON(SizeLimit, sizeLimit_);
          };
          Quota() = default ;
          Quota(const Quota &) = default ;
          Quota(Quota &&) = default ;
          Quota(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Quota() = default ;
          Quota& operator=(const Quota &) = default ;
          Quota& operator=(Quota &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->fileCountLimit_ == nullptr
        && this->sizeLimit_ == nullptr; };
          // fileCountLimit Field Functions 
          bool hasFileCountLimit() const { return this->fileCountLimit_ != nullptr;};
          void deleteFileCountLimit() { this->fileCountLimit_ = nullptr;};
          inline int64_t getFileCountLimit() const { DARABONBA_PTR_GET_DEFAULT(fileCountLimit_, 0L) };
          inline Quota& setFileCountLimit(int64_t fileCountLimit) { DARABONBA_PTR_SET_VALUE(fileCountLimit_, fileCountLimit) };


          // sizeLimit Field Functions 
          bool hasSizeLimit() const { return this->sizeLimit_ != nullptr;};
          void deleteSizeLimit() { this->sizeLimit_ = nullptr;};
          inline int64_t getSizeLimit() const { DARABONBA_PTR_GET_DEFAULT(sizeLimit_, 0L) };
          inline Quota& setSizeLimit(int64_t sizeLimit) { DARABONBA_PTR_SET_VALUE(sizeLimit_, sizeLimit) };


        protected:
          // The file quantity quota. Valid values:
          // 
          // *   Minimum value: 10000.
          // *   Maximum value: 10000000000.
          shared_ptr<int64_t> fileCountLimit_ {};
          // The capacity quota. Unit: bytes.
          // 
          // *   Minimum value: 10737418240 (10 GiB).
          // *   Step size: 1073741824 (1 GiB).
          shared_ptr<int64_t> sizeLimit_ {};
        };

        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->deletionProtection_ == nullptr && this->description_ == nullptr && this->fileCountUsage_ == nullptr && this->fileSystemId_ == nullptr && this->fileSystemPath_ == nullptr
        && this->fsetId_ == nullptr && this->quota_ == nullptr && this->spaceUsage_ == nullptr && this->status_ == nullptr && this->updateTime_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline Entrie& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // deletionProtection Field Functions 
        bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
        void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
        inline bool getDeletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, false) };
        inline Entrie& setDeletionProtection(bool deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Entrie& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // fileCountUsage Field Functions 
        bool hasFileCountUsage() const { return this->fileCountUsage_ != nullptr;};
        void deleteFileCountUsage() { this->fileCountUsage_ = nullptr;};
        inline int64_t getFileCountUsage() const { DARABONBA_PTR_GET_DEFAULT(fileCountUsage_, 0L) };
        inline Entrie& setFileCountUsage(int64_t fileCountUsage) { DARABONBA_PTR_SET_VALUE(fileCountUsage_, fileCountUsage) };


        // fileSystemId Field Functions 
        bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
        void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
        inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
        inline Entrie& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


        // fileSystemPath Field Functions 
        bool hasFileSystemPath() const { return this->fileSystemPath_ != nullptr;};
        void deleteFileSystemPath() { this->fileSystemPath_ = nullptr;};
        inline string getFileSystemPath() const { DARABONBA_PTR_GET_DEFAULT(fileSystemPath_, "") };
        inline Entrie& setFileSystemPath(string fileSystemPath) { DARABONBA_PTR_SET_VALUE(fileSystemPath_, fileSystemPath) };


        // fsetId Field Functions 
        bool hasFsetId() const { return this->fsetId_ != nullptr;};
        void deleteFsetId() { this->fsetId_ = nullptr;};
        inline string getFsetId() const { DARABONBA_PTR_GET_DEFAULT(fsetId_, "") };
        inline Entrie& setFsetId(string fsetId) { DARABONBA_PTR_SET_VALUE(fsetId_, fsetId) };


        // quota Field Functions 
        bool hasQuota() const { return this->quota_ != nullptr;};
        void deleteQuota() { this->quota_ = nullptr;};
        inline const Entrie::Quota & getQuota() const { DARABONBA_PTR_GET_CONST(quota_, Entrie::Quota) };
        inline Entrie::Quota getQuota() { DARABONBA_PTR_GET(quota_, Entrie::Quota) };
        inline Entrie& setQuota(const Entrie::Quota & quota) { DARABONBA_PTR_SET_VALUE(quota_, quota) };
        inline Entrie& setQuota(Entrie::Quota && quota) { DARABONBA_PTR_SET_RVALUE(quota_, quota) };


        // spaceUsage Field Functions 
        bool hasSpaceUsage() const { return this->spaceUsage_ != nullptr;};
        void deleteSpaceUsage() { this->spaceUsage_ = nullptr;};
        inline int64_t getSpaceUsage() const { DARABONBA_PTR_GET_DEFAULT(spaceUsage_, 0L) };
        inline Entrie& setSpaceUsage(int64_t spaceUsage) { DARABONBA_PTR_SET_VALUE(spaceUsage_, spaceUsage) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Entrie& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
        inline Entrie& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      protected:
        // The time when the fileset was created.
        // 
        // The time follows the ISO 8601 standard in the `yyyy-MM-ddTHH:mm:ssZ` format.
        shared_ptr<string> createTime_ {};
        // Specifies whether to enable deletion protection to allow you to release the fileset by using the console or by calling the [DeleteFileset](https://help.aliyun.com/document_detail/2402263.html) operation. Valid values:
        // 
        // *   true: enables release protection.
        // *   false: disables release protection.
        // 
        // > This parameter can protect filesets only against manual releases, but not against automatic releases.
        shared_ptr<bool> deletionProtection_ {};
        // The fileset description.
        shared_ptr<string> description_ {};
        // The usage of the file quantity.
        // 
        // >  Only CPFS for LINGJUN V2.7.0 and later support this parameter.
        shared_ptr<int64_t> fileCountUsage_ {};
        // The ID of the file system.
        // 
        // *   The IDs of CPFS file systems must start with `cpfs-`. Example: cpfs-099394bd928c\\*\\*\\*\\*.
        // *   The IDs of CPFS for LINGJUN file systems must start with `bmcpfs-`. Example: bmcpfs-290w65p03ok64ya\\*\\*\\*\\*.
        shared_ptr<string> fileSystemId_ {};
        // The fileset path.
        shared_ptr<string> fileSystemPath_ {};
        // The fileset ID.
        shared_ptr<string> fsetId_ {};
        // The quota information.
        // 
        // >  Only CPFS for Lingjun V2.7.0 and later support this parameter.
        shared_ptr<Entrie::Quota> quota_ {};
        // The capacity usage. Unit: bytes.
        // 
        // >  Only CPFS for LINGJUN V2.7.0 and later support this parameter.
        shared_ptr<int64_t> spaceUsage_ {};
        // The fileset status. Valid values:
        // 
        // *   CREATING: The fileset is being created.
        // *   CREATED: The fileset has been created and is running properly.
        // *   RELEASING: The fileset is being released.
        // *   RELEASED: The fileset has been deleted.
        shared_ptr<string> status_ {};
        // The time when the fileset was last updated.
        // 
        // The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format.
        shared_ptr<string> updateTime_ {};
      };

      virtual bool empty() const override { return this->entrie_ == nullptr; };
      // entrie Field Functions 
      bool hasEntrie() const { return this->entrie_ != nullptr;};
      void deleteEntrie() { this->entrie_ = nullptr;};
      inline const vector<Entries::Entrie> & getEntrie() const { DARABONBA_PTR_GET_CONST(entrie_, vector<Entries::Entrie>) };
      inline vector<Entries::Entrie> getEntrie() { DARABONBA_PTR_GET(entrie_, vector<Entries::Entrie>) };
      inline Entries& setEntrie(const vector<Entries::Entrie> & entrie) { DARABONBA_PTR_SET_VALUE(entrie_, entrie) };
      inline Entries& setEntrie(vector<Entries::Entrie> && entrie) { DARABONBA_PTR_SET_RVALUE(entrie_, entrie) };


    protected:
      shared_ptr<vector<Entries::Entrie>> entrie_ {};
    };

    virtual bool empty() const override { return this->entries_ == nullptr
        && this->fileSystemId_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // entries Field Functions 
    bool hasEntries() const { return this->entries_ != nullptr;};
    void deleteEntries() { this->entries_ = nullptr;};
    inline const DescribeFilesetsResponseBody::Entries & getEntries() const { DARABONBA_PTR_GET_CONST(entries_, DescribeFilesetsResponseBody::Entries) };
    inline DescribeFilesetsResponseBody::Entries getEntries() { DARABONBA_PTR_GET(entries_, DescribeFilesetsResponseBody::Entries) };
    inline DescribeFilesetsResponseBody& setEntries(const DescribeFilesetsResponseBody::Entries & entries) { DARABONBA_PTR_SET_VALUE(entries_, entries) };
    inline DescribeFilesetsResponseBody& setEntries(DescribeFilesetsResponseBody::Entries && entries) { DARABONBA_PTR_SET_RVALUE(entries_, entries) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline DescribeFilesetsResponseBody& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeFilesetsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeFilesetsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The fileset information.
    shared_ptr<DescribeFilesetsResponseBody::Entries> entries_ {};
    // The ID of the file system.
    // 
    // *   The IDs of CPFS file systems must start with `cpfs-`. Example: cpfs-099394bd928c\\*\\*\\*\\*.
    // *   The IDs of CPFS for LINGJUN file systems must start with `bmcpfs-`. Example: bmcpfs-290w65p03ok64ya\\*\\*\\*\\*.
    shared_ptr<string> fileSystemId_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
