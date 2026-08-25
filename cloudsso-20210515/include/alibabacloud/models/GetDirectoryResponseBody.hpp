// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDIRECTORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDIRECTORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudsso20210515
{
namespace Models
{
  class GetDirectoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDirectoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Directory, directory_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDirectoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Directory, directory_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetDirectoryResponseBody() = default ;
    GetDirectoryResponseBody(const GetDirectoryResponseBody &) = default ;
    GetDirectoryResponseBody(GetDirectoryResponseBody &&) = default ;
    GetDirectoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDirectoryResponseBody() = default ;
    GetDirectoryResponseBody& operator=(const GetDirectoryResponseBody &) = default ;
    GetDirectoryResponseBody& operator=(GetDirectoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Directory : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Directory& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
        DARABONBA_PTR_TO_JSON(DirectoryName, directoryName_);
        DARABONBA_PTR_TO_JSON(Region, region_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, Directory& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
        DARABONBA_PTR_FROM_JSON(DirectoryName, directoryName_);
        DARABONBA_PTR_FROM_JSON(Region, region_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      Directory() = default ;
      Directory(const Directory &) = default ;
      Directory(Directory &&) = default ;
      Directory(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Directory() = default ;
      Directory& operator=(const Directory &) = default ;
      Directory& operator=(Directory &&) = default ;
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
      inline Directory& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // directoryId Field Functions 
      bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
      void deleteDirectoryId() { this->directoryId_ = nullptr;};
      inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
      inline Directory& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


      // directoryName Field Functions 
      bool hasDirectoryName() const { return this->directoryName_ != nullptr;};
      void deleteDirectoryName() { this->directoryName_ = nullptr;};
      inline string getDirectoryName() const { DARABONBA_PTR_GET_DEFAULT(directoryName_, "") };
      inline Directory& setDirectoryName(string directoryName) { DARABONBA_PTR_SET_VALUE(directoryName_, directoryName) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline Directory& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline Directory& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


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

    virtual bool empty() const override { return this->directory_ == nullptr
        && this->requestId_ == nullptr; };
    // directory Field Functions 
    bool hasDirectory() const { return this->directory_ != nullptr;};
    void deleteDirectory() { this->directory_ = nullptr;};
    inline const GetDirectoryResponseBody::Directory & getDirectory() const { DARABONBA_PTR_GET_CONST(directory_, GetDirectoryResponseBody::Directory) };
    inline GetDirectoryResponseBody::Directory getDirectory() { DARABONBA_PTR_GET(directory_, GetDirectoryResponseBody::Directory) };
    inline GetDirectoryResponseBody& setDirectory(const GetDirectoryResponseBody::Directory & directory) { DARABONBA_PTR_SET_VALUE(directory_, directory) };
    inline GetDirectoryResponseBody& setDirectory(GetDirectoryResponseBody::Directory && directory) { DARABONBA_PTR_SET_RVALUE(directory_, directory) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDirectoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the directory.
    shared_ptr<GetDirectoryResponseBody::Directory> directory_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudsso20210515
#endif
