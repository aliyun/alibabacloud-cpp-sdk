// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTATTACHEDOSSBUCKETSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTATTACHEDOSSBUCKETSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class ListAttachedOSSBucketsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAttachedOSSBucketsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AttachedOSSBuckets, attachedOSSBuckets_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAttachedOSSBucketsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AttachedOSSBuckets, attachedOSSBuckets_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAttachedOSSBucketsResponseBody() = default ;
    ListAttachedOSSBucketsResponseBody(const ListAttachedOSSBucketsResponseBody &) = default ;
    ListAttachedOSSBucketsResponseBody(ListAttachedOSSBucketsResponseBody &&) = default ;
    ListAttachedOSSBucketsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAttachedOSSBucketsResponseBody() = default ;
    ListAttachedOSSBucketsResponseBody& operator=(const ListAttachedOSSBucketsResponseBody &) = default ;
    ListAttachedOSSBucketsResponseBody& operator=(ListAttachedOSSBucketsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AttachedOSSBuckets : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AttachedOSSBuckets& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(OSSBucket, OSSBucket_);
        DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
        DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, AttachedOSSBuckets& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(OSSBucket, OSSBucket_);
        DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
        DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      AttachedOSSBuckets() = default ;
      AttachedOSSBuckets(const AttachedOSSBuckets &) = default ;
      AttachedOSSBuckets(AttachedOSSBuckets &&) = default ;
      AttachedOSSBuckets(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AttachedOSSBuckets() = default ;
      AttachedOSSBuckets& operator=(const AttachedOSSBuckets &) = default ;
      AttachedOSSBuckets& operator=(AttachedOSSBuckets &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->description_ == nullptr && this->OSSBucket_ == nullptr && this->ownerId_ == nullptr && this->projectName_ == nullptr && this->updateTime_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline AttachedOSSBuckets& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline AttachedOSSBuckets& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // OSSBucket Field Functions 
      bool hasOSSBucket() const { return this->OSSBucket_ != nullptr;};
      void deleteOSSBucket() { this->OSSBucket_ = nullptr;};
      inline string getOSSBucket() const { DARABONBA_PTR_GET_DEFAULT(OSSBucket_, "") };
      inline AttachedOSSBuckets& setOSSBucket(string OSSBucket) { DARABONBA_PTR_SET_VALUE(OSSBucket_, OSSBucket) };


      // ownerId Field Functions 
      bool hasOwnerId() const { return this->ownerId_ != nullptr;};
      void deleteOwnerId() { this->ownerId_ = nullptr;};
      inline string getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
      inline AttachedOSSBuckets& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


      // projectName Field Functions 
      bool hasProjectName() const { return this->projectName_ != nullptr;};
      void deleteProjectName() { this->projectName_ = nullptr;};
      inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
      inline AttachedOSSBuckets& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline AttachedOSSBuckets& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // Timestamp of the project creation time, formatted as RFC3339Nano.
      shared_ptr<string> createTime_ {};
      // Description
      shared_ptr<string> description_ {};
      // OSS Bucket name.
      shared_ptr<string> OSSBucket_ {};
      // User ID.
      shared_ptr<string> ownerId_ {};
      // Project name.
      shared_ptr<string> projectName_ {};
      // Timestamp of the project modification time, formatted as RFC3339Nano.
      shared_ptr<string> updateTime_ {};
    };

    virtual bool empty() const override { return this->attachedOSSBuckets_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // attachedOSSBuckets Field Functions 
    bool hasAttachedOSSBuckets() const { return this->attachedOSSBuckets_ != nullptr;};
    void deleteAttachedOSSBuckets() { this->attachedOSSBuckets_ = nullptr;};
    inline const vector<ListAttachedOSSBucketsResponseBody::AttachedOSSBuckets> & getAttachedOSSBuckets() const { DARABONBA_PTR_GET_CONST(attachedOSSBuckets_, vector<ListAttachedOSSBucketsResponseBody::AttachedOSSBuckets>) };
    inline vector<ListAttachedOSSBucketsResponseBody::AttachedOSSBuckets> getAttachedOSSBuckets() { DARABONBA_PTR_GET(attachedOSSBuckets_, vector<ListAttachedOSSBucketsResponseBody::AttachedOSSBuckets>) };
    inline ListAttachedOSSBucketsResponseBody& setAttachedOSSBuckets(const vector<ListAttachedOSSBucketsResponseBody::AttachedOSSBuckets> & attachedOSSBuckets) { DARABONBA_PTR_SET_VALUE(attachedOSSBuckets_, attachedOSSBuckets) };
    inline ListAttachedOSSBucketsResponseBody& setAttachedOSSBuckets(vector<ListAttachedOSSBucketsResponseBody::AttachedOSSBuckets> && attachedOSSBuckets) { DARABONBA_PTR_SET_RVALUE(attachedOSSBuckets_, attachedOSSBuckets) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAttachedOSSBucketsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAttachedOSSBucketsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // List of bound OSS Buckets.
    shared_ptr<vector<ListAttachedOSSBucketsResponseBody::AttachedOSSBuckets>> attachedOSSBuckets_ {};
    // Pagination token. When the total number of tasks in the list exceeds the set MaxResults, this token is used for pagination. This parameter has a value only when not all matching task lists are returned.
    // 
    // Use this value as NextToken in the next call to return the subsequent task list.
    shared_ptr<string> nextToken_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
