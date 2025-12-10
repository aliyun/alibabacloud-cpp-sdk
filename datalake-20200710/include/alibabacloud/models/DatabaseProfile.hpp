// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATABASEPROFILE_HPP_
#define ALIBABACLOUD_MODELS_DATABASEPROFILE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class DatabaseProfile : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DatabaseProfile& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(FileCnt, fileCnt_);
      DARABONBA_PTR_TO_JSON(FileSize, fileSize_);
      DARABONBA_PTR_TO_JSON(LatestDate, latestDate_);
      DARABONBA_PTR_TO_JSON(Location, location_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ObjectCnt, objectCnt_);
      DARABONBA_PTR_TO_JSON(ObjectSize, objectSize_);
    };
    friend void from_json(const Darabonba::Json& j, DatabaseProfile& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(FileCnt, fileCnt_);
      DARABONBA_PTR_FROM_JSON(FileSize, fileSize_);
      DARABONBA_PTR_FROM_JSON(LatestDate, latestDate_);
      DARABONBA_PTR_FROM_JSON(Location, location_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ObjectCnt, objectCnt_);
      DARABONBA_PTR_FROM_JSON(ObjectSize, objectSize_);
    };
    DatabaseProfile() = default ;
    DatabaseProfile(const DatabaseProfile &) = default ;
    DatabaseProfile(DatabaseProfile &&) = default ;
    DatabaseProfile(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DatabaseProfile() = default ;
    DatabaseProfile& operator=(const DatabaseProfile &) = default ;
    DatabaseProfile& operator=(DatabaseProfile &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->fileCnt_ == nullptr && return this->fileSize_ == nullptr && return this->latestDate_ == nullptr && return this->location_ == nullptr && return this->name_ == nullptr
        && return this->objectCnt_ == nullptr && return this->objectSize_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DatabaseProfile& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // fileCnt Field Functions 
    bool hasFileCnt() const { return this->fileCnt_ != nullptr;};
    void deleteFileCnt() { this->fileCnt_ = nullptr;};
    inline int64_t fileCnt() const { DARABONBA_PTR_GET_DEFAULT(fileCnt_, 0L) };
    inline DatabaseProfile& setFileCnt(int64_t fileCnt) { DARABONBA_PTR_SET_VALUE(fileCnt_, fileCnt) };


    // fileSize Field Functions 
    bool hasFileSize() const { return this->fileSize_ != nullptr;};
    void deleteFileSize() { this->fileSize_ = nullptr;};
    inline int64_t fileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, 0L) };
    inline DatabaseProfile& setFileSize(int64_t fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


    // latestDate Field Functions 
    bool hasLatestDate() const { return this->latestDate_ != nullptr;};
    void deleteLatestDate() { this->latestDate_ = nullptr;};
    inline string latestDate() const { DARABONBA_PTR_GET_DEFAULT(latestDate_, "") };
    inline DatabaseProfile& setLatestDate(string latestDate) { DARABONBA_PTR_SET_VALUE(latestDate_, latestDate) };


    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline string location() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
    inline DatabaseProfile& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DatabaseProfile& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // objectCnt Field Functions 
    bool hasObjectCnt() const { return this->objectCnt_ != nullptr;};
    void deleteObjectCnt() { this->objectCnt_ = nullptr;};
    inline int64_t objectCnt() const { DARABONBA_PTR_GET_DEFAULT(objectCnt_, 0L) };
    inline DatabaseProfile& setObjectCnt(int64_t objectCnt) { DARABONBA_PTR_SET_VALUE(objectCnt_, objectCnt) };


    // objectSize Field Functions 
    bool hasObjectSize() const { return this->objectSize_ != nullptr;};
    void deleteObjectSize() { this->objectSize_ = nullptr;};
    inline int64_t objectSize() const { DARABONBA_PTR_GET_DEFAULT(objectSize_, 0L) };
    inline DatabaseProfile& setObjectSize(int64_t objectSize) { DARABONBA_PTR_SET_VALUE(objectSize_, objectSize) };


  protected:
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<int64_t> fileCnt_ = nullptr;
    std::shared_ptr<int64_t> fileSize_ = nullptr;
    std::shared_ptr<string> latestDate_ = nullptr;
    std::shared_ptr<string> location_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int64_t> objectCnt_ = nullptr;
    std::shared_ptr<int64_t> objectSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
