// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVERGROUPSERVERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVERGROUPSERVERSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class ListServerGroupServersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServerGroupServersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ServerGroupId, serverGroupId_);
      DARABONBA_PTR_TO_JSON(ServerIds, serverIds_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, ListServerGroupServersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ServerGroupId, serverGroupId_);
      DARABONBA_PTR_FROM_JSON(ServerIds, serverIds_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    ListServerGroupServersRequest() = default ;
    ListServerGroupServersRequest(const ListServerGroupServersRequest &) = default ;
    ListServerGroupServersRequest(ListServerGroupServersRequest &&) = default ;
    ListServerGroupServersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServerGroupServersRequest() = default ;
    ListServerGroupServersRequest& operator=(const ListServerGroupServersRequest &) = default ;
    ListServerGroupServersRequest& operator=(ListServerGroupServersRequest &&) = default ;
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
      // The tag key. You can specify up to 10 tag keys.
      // 
      // The tag key can be up to 64 characters in length, and cannot contain `http://` or `https://`. It cannot start with `aliyun` or `acs:`.
      shared_ptr<string> key_ {};
      // The tag value. You can specify up to 10 tag values.
      // 
      // The tag value can be up to 128 characters in length, and cannot contain `http://` or `https://`. It cannot start with `aliyun` or `acs:`.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->serverGroupId_ == nullptr && this->serverIds_ == nullptr && this->tag_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListServerGroupServersRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListServerGroupServersRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // serverGroupId Field Functions 
    bool hasServerGroupId() const { return this->serverGroupId_ != nullptr;};
    void deleteServerGroupId() { this->serverGroupId_ = nullptr;};
    inline string getServerGroupId() const { DARABONBA_PTR_GET_DEFAULT(serverGroupId_, "") };
    inline ListServerGroupServersRequest& setServerGroupId(string serverGroupId) { DARABONBA_PTR_SET_VALUE(serverGroupId_, serverGroupId) };


    // serverIds Field Functions 
    bool hasServerIds() const { return this->serverIds_ != nullptr;};
    void deleteServerIds() { this->serverIds_ = nullptr;};
    inline const vector<string> & getServerIds() const { DARABONBA_PTR_GET_CONST(serverIds_, vector<string>) };
    inline vector<string> getServerIds() { DARABONBA_PTR_GET(serverIds_, vector<string>) };
    inline ListServerGroupServersRequest& setServerIds(const vector<string> & serverIds) { DARABONBA_PTR_SET_VALUE(serverIds_, serverIds) };
    inline ListServerGroupServersRequest& setServerIds(vector<string> && serverIds) { DARABONBA_PTR_SET_RVALUE(serverIds_, serverIds) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<ListServerGroupServersRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<ListServerGroupServersRequest::Tag>) };
    inline vector<ListServerGroupServersRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<ListServerGroupServersRequest::Tag>) };
    inline ListServerGroupServersRequest& setTag(const vector<ListServerGroupServersRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline ListServerGroupServersRequest& setTag(vector<ListServerGroupServersRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The maximum number of entries to return. Valid values: **1** to **100**. If you do not specify a value, the default value **20** is used.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token that is used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   You do not need to specify this parameter for the first request.
    // *   You must specify the token that is obtained from the previous query as the value of **NextToken**.
    shared_ptr<string> nextToken_ {};
    // The server group ID.
    shared_ptr<string> serverGroupId_ {};
    // The IDs of the servers.
    shared_ptr<vector<string>> serverIds_ {};
    // The tags that are added to the server group. You can specify up to 10 tags in each call.
    shared_ptr<vector<ListServerGroupServersRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
