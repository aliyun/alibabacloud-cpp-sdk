// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCESSPOINTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCESSPOINTSREQUEST_HPP_
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
  class DescribeAccessPointsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccessPointsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessGroup, accessGroup_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccessPointsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessGroup, accessGroup_);
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeAccessPointsRequest() = default ;
    DescribeAccessPointsRequest(const DescribeAccessPointsRequest &) = default ;
    DescribeAccessPointsRequest(DescribeAccessPointsRequest &&) = default ;
    DescribeAccessPointsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccessPointsRequest() = default ;
    DescribeAccessPointsRequest& operator=(const DescribeAccessPointsRequest &) = default ;
    DescribeAccessPointsRequest& operator=(DescribeAccessPointsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The key of the tag.
      // 
      // Limits:
      // 
      // *   Valid values of N: 1 to 20.
      // *   Maximum length is 128 characters.
      // *   Cannot start with aliyun or acs:.
      // *   Cannot contain http:// or https://.
      shared_ptr<string> key_ {};
      // The value of the tag.
      // 
      // Limits:
      // 
      // *   Valid values of N: 1 to 20.
      // *   Maximum length is 128 characters.
      // *   Cannot start with aliyun or acs:.
      // *   Cannot contain http:// or https://.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->accessGroup_ == nullptr
        && this->fileSystemId_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->tag_ == nullptr; };
    // accessGroup Field Functions 
    bool hasAccessGroup() const { return this->accessGroup_ != nullptr;};
    void deleteAccessGroup() { this->accessGroup_ = nullptr;};
    inline string getAccessGroup() const { DARABONBA_PTR_GET_DEFAULT(accessGroup_, "") };
    inline DescribeAccessPointsRequest& setAccessGroup(string accessGroup) { DARABONBA_PTR_SET_VALUE(accessGroup_, accessGroup) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline DescribeAccessPointsRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeAccessPointsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeAccessPointsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<DescribeAccessPointsRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<DescribeAccessPointsRequest::Tag>) };
    inline vector<DescribeAccessPointsRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<DescribeAccessPointsRequest::Tag>) };
    inline DescribeAccessPointsRequest& setTag(const vector<DescribeAccessPointsRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeAccessPointsRequest& setTag(vector<DescribeAccessPointsRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The name of the permission group.
    // 
    // This parameter is required for a General-purpose NAS file system.
    // 
    // The default permission group for virtual private clouds (VPCs) is named DEFAULT_VPC_GROUP_NAME.
    shared_ptr<string> accessGroup_ {};
    // The ID of the file system.
    shared_ptr<string> fileSystemId_ {};
    // The number of results for each query.
    // 
    // Valid values: 10 to 100. Default value: 10.
    shared_ptr<int32_t> maxResults_ {};
    // The token used to retrieve the next page of results. Do not specify this parameter for the first request. For subsequent requests, set this value to the NextToken returned in the previous response.
    shared_ptr<string> nextToken_ {};
    // The tags of the access point.
    shared_ptr<vector<DescribeAccessPointsRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
