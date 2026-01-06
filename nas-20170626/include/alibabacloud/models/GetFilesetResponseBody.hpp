// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFILESETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETFILESETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class GetFilesetResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFilesetResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetFilesetResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetFilesetResponseBody() = default ;
    GetFilesetResponseBody(const GetFilesetResponseBody &) = default ;
    GetFilesetResponseBody(GetFilesetResponseBody &&) = default ;
    GetFilesetResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFilesetResponseBody() = default ;
    GetFilesetResponseBody& operator=(const GetFilesetResponseBody &) = default ;
    GetFilesetResponseBody& operator=(GetFilesetResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
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
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
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
        shared_ptr<int64_t> fileCountLimit_ {};
        shared_ptr<int64_t> sizeLimit_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->deletionProtection_ == nullptr && this->description_ == nullptr && this->fileCountUsage_ == nullptr && this->fileSystemId_ == nullptr && this->fileSystemPath_ == nullptr
        && this->fsetId_ == nullptr && this->quota_ == nullptr && this->spaceUsage_ == nullptr && this->status_ == nullptr && this->updateTime_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Data& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // deletionProtection Field Functions 
      bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
      void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
      inline bool getDeletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, false) };
      inline Data& setDeletionProtection(bool deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // fileCountUsage Field Functions 
      bool hasFileCountUsage() const { return this->fileCountUsage_ != nullptr;};
      void deleteFileCountUsage() { this->fileCountUsage_ = nullptr;};
      inline int64_t getFileCountUsage() const { DARABONBA_PTR_GET_DEFAULT(fileCountUsage_, 0L) };
      inline Data& setFileCountUsage(int64_t fileCountUsage) { DARABONBA_PTR_SET_VALUE(fileCountUsage_, fileCountUsage) };


      // fileSystemId Field Functions 
      bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
      void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
      inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
      inline Data& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


      // fileSystemPath Field Functions 
      bool hasFileSystemPath() const { return this->fileSystemPath_ != nullptr;};
      void deleteFileSystemPath() { this->fileSystemPath_ = nullptr;};
      inline string getFileSystemPath() const { DARABONBA_PTR_GET_DEFAULT(fileSystemPath_, "") };
      inline Data& setFileSystemPath(string fileSystemPath) { DARABONBA_PTR_SET_VALUE(fileSystemPath_, fileSystemPath) };


      // fsetId Field Functions 
      bool hasFsetId() const { return this->fsetId_ != nullptr;};
      void deleteFsetId() { this->fsetId_ = nullptr;};
      inline string getFsetId() const { DARABONBA_PTR_GET_DEFAULT(fsetId_, "") };
      inline Data& setFsetId(string fsetId) { DARABONBA_PTR_SET_VALUE(fsetId_, fsetId) };


      // quota Field Functions 
      bool hasQuota() const { return this->quota_ != nullptr;};
      void deleteQuota() { this->quota_ = nullptr;};
      inline const Data::Quota & getQuota() const { DARABONBA_PTR_GET_CONST(quota_, Data::Quota) };
      inline Data::Quota getQuota() { DARABONBA_PTR_GET(quota_, Data::Quota) };
      inline Data& setQuota(const Data::Quota & quota) { DARABONBA_PTR_SET_VALUE(quota_, quota) };
      inline Data& setQuota(Data::Quota && quota) { DARABONBA_PTR_SET_RVALUE(quota_, quota) };


      // spaceUsage Field Functions 
      bool hasSpaceUsage() const { return this->spaceUsage_ != nullptr;};
      void deleteSpaceUsage() { this->spaceUsage_ = nullptr;};
      inline int64_t getSpaceUsage() const { DARABONBA_PTR_GET_DEFAULT(spaceUsage_, 0L) };
      inline Data& setSpaceUsage(int64_t spaceUsage) { DARABONBA_PTR_SET_VALUE(spaceUsage_, spaceUsage) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline Data& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      shared_ptr<string> createTime_ {};
      shared_ptr<bool> deletionProtection_ {};
      shared_ptr<string> description_ {};
      shared_ptr<int64_t> fileCountUsage_ {};
      shared_ptr<string> fileSystemId_ {};
      shared_ptr<string> fileSystemPath_ {};
      shared_ptr<string> fsetId_ {};
      shared_ptr<Data::Quota> quota_ {};
      shared_ptr<int64_t> spaceUsage_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> updateTime_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetFilesetResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetFilesetResponseBody::Data) };
    inline GetFilesetResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetFilesetResponseBody::Data) };
    inline GetFilesetResponseBody& setData(const GetFilesetResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetFilesetResponseBody& setData(GetFilesetResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetFilesetResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetFilesetResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
