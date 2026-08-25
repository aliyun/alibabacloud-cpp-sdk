// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDIRECTORIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDIRECTORIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudsso20210515
{
namespace Models
{
  class ListDirectoriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDirectoriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Directories, directories_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCounts, totalCounts_);
    };
    friend void from_json(const Darabonba::Json& j, ListDirectoriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Directories, directories_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCounts, totalCounts_);
    };
    ListDirectoriesResponseBody() = default ;
    ListDirectoriesResponseBody(const ListDirectoriesResponseBody &) = default ;
    ListDirectoriesResponseBody(ListDirectoriesResponseBody &&) = default ;
    ListDirectoriesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDirectoriesResponseBody() = default ;
    ListDirectoriesResponseBody& operator=(const ListDirectoriesResponseBody &) = default ;
    ListDirectoriesResponseBody& operator=(ListDirectoriesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Directories : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Directories& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
        DARABONBA_PTR_TO_JSON(DirectoryName, directoryName_);
        DARABONBA_PTR_TO_JSON(Region, region_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, Directories& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
        DARABONBA_PTR_FROM_JSON(DirectoryName, directoryName_);
        DARABONBA_PTR_FROM_JSON(Region, region_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      Directories() = default ;
      Directories(const Directories &) = default ;
      Directories(Directories &&) = default ;
      Directories(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Directories() = default ;
      Directories& operator=(const Directories &) = default ;
      Directories& operator=(Directories &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->directoryId_ == nullptr && this->directoryName_ == nullptr && this->region_ == nullptr && this->updateTime_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Directories& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // directoryId Field Functions 
      bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
      void deleteDirectoryId() { this->directoryId_ = nullptr;};
      inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
      inline Directories& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


      // directoryName Field Functions 
      bool hasDirectoryName() const { return this->directoryName_ != nullptr;};
      void deleteDirectoryName() { this->directoryName_ = nullptr;};
      inline string getDirectoryName() const { DARABONBA_PTR_GET_DEFAULT(directoryName_, "") };
      inline Directories& setDirectoryName(string directoryName) { DARABONBA_PTR_SET_VALUE(directoryName_, directoryName) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline Directories& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline Directories& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // The time when the directory was created.
      shared_ptr<string> createTime_ {};
      // The ID of the directory.
      shared_ptr<string> directoryId_ {};
      // The name of the directory.
      shared_ptr<string> directoryName_ {};
      // The region ID of the directory.
      shared_ptr<string> region_ {};
      // The time when the directory was modified.
      shared_ptr<string> updateTime_ {};
    };

    virtual bool empty() const override { return this->directories_ == nullptr
        && this->requestId_ == nullptr && this->totalCounts_ == nullptr; };
    // directories Field Functions 
    bool hasDirectories() const { return this->directories_ != nullptr;};
    void deleteDirectories() { this->directories_ = nullptr;};
    inline const vector<ListDirectoriesResponseBody::Directories> & getDirectories() const { DARABONBA_PTR_GET_CONST(directories_, vector<ListDirectoriesResponseBody::Directories>) };
    inline vector<ListDirectoriesResponseBody::Directories> getDirectories() { DARABONBA_PTR_GET(directories_, vector<ListDirectoriesResponseBody::Directories>) };
    inline ListDirectoriesResponseBody& setDirectories(const vector<ListDirectoriesResponseBody::Directories> & directories) { DARABONBA_PTR_SET_VALUE(directories_, directories) };
    inline ListDirectoriesResponseBody& setDirectories(vector<ListDirectoriesResponseBody::Directories> && directories) { DARABONBA_PTR_SET_RVALUE(directories_, directories) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDirectoriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCounts Field Functions 
    bool hasTotalCounts() const { return this->totalCounts_ != nullptr;};
    void deleteTotalCounts() { this->totalCounts_ = nullptr;};
    inline int32_t getTotalCounts() const { DARABONBA_PTR_GET_DEFAULT(totalCounts_, 0) };
    inline ListDirectoriesResponseBody& setTotalCounts(int32_t totalCounts) { DARABONBA_PTR_SET_VALUE(totalCounts_, totalCounts) };


  protected:
    // The directories.
    shared_ptr<vector<ListDirectoriesResponseBody::Directories>> directories_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The number of directories.
    shared_ptr<int32_t> totalCounts_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudsso20210515
#endif
