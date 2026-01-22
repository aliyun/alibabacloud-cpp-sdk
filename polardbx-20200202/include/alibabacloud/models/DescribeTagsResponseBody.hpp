// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETAGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETAGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeTagsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTagsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TagInfos, tagInfos_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTagsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TagInfos, tagInfos_);
    };
    DescribeTagsResponseBody() = default ;
    DescribeTagsResponseBody(const DescribeTagsResponseBody &) = default ;
    DescribeTagsResponseBody(DescribeTagsResponseBody &&) = default ;
    DescribeTagsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTagsResponseBody() = default ;
    DescribeTagsResponseBody& operator=(const DescribeTagsResponseBody &) = default ;
    DescribeTagsResponseBody& operator=(DescribeTagsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TagInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TagInfos& obj) { 
        DARABONBA_PTR_TO_JSON(DBInstanceIds, DBInstanceIds_);
        DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
        DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
      };
      friend void from_json(const Darabonba::Json& j, TagInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(DBInstanceIds, DBInstanceIds_);
        DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
        DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
      };
      TagInfos() = default ;
      TagInfos(const TagInfos &) = default ;
      TagInfos(TagInfos &&) = default ;
      TagInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TagInfos() = default ;
      TagInfos& operator=(const TagInfos &) = default ;
      TagInfos& operator=(TagInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->DBInstanceIds_ == nullptr
        && this->tagKey_ == nullptr && this->tagValue_ == nullptr; };
      // DBInstanceIds Field Functions 
      bool hasDBInstanceIds() const { return this->DBInstanceIds_ != nullptr;};
      void deleteDBInstanceIds() { this->DBInstanceIds_ = nullptr;};
      inline const vector<string> & getDBInstanceIds() const { DARABONBA_PTR_GET_CONST(DBInstanceIds_, vector<string>) };
      inline vector<string> getDBInstanceIds() { DARABONBA_PTR_GET(DBInstanceIds_, vector<string>) };
      inline TagInfos& setDBInstanceIds(const vector<string> & DBInstanceIds) { DARABONBA_PTR_SET_VALUE(DBInstanceIds_, DBInstanceIds) };
      inline TagInfos& setDBInstanceIds(vector<string> && DBInstanceIds) { DARABONBA_PTR_SET_RVALUE(DBInstanceIds_, DBInstanceIds) };


      // tagKey Field Functions 
      bool hasTagKey() const { return this->tagKey_ != nullptr;};
      void deleteTagKey() { this->tagKey_ = nullptr;};
      inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
      inline TagInfos& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


      // tagValue Field Functions 
      bool hasTagValue() const { return this->tagValue_ != nullptr;};
      void deleteTagValue() { this->tagValue_ = nullptr;};
      inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
      inline TagInfos& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


    protected:
      shared_ptr<vector<string>> DBInstanceIds_ {};
      shared_ptr<string> tagKey_ {};
      shared_ptr<string> tagValue_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->tagInfos_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTagsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tagInfos Field Functions 
    bool hasTagInfos() const { return this->tagInfos_ != nullptr;};
    void deleteTagInfos() { this->tagInfos_ = nullptr;};
    inline const vector<DescribeTagsResponseBody::TagInfos> & getTagInfos() const { DARABONBA_PTR_GET_CONST(tagInfos_, vector<DescribeTagsResponseBody::TagInfos>) };
    inline vector<DescribeTagsResponseBody::TagInfos> getTagInfos() { DARABONBA_PTR_GET(tagInfos_, vector<DescribeTagsResponseBody::TagInfos>) };
    inline DescribeTagsResponseBody& setTagInfos(const vector<DescribeTagsResponseBody::TagInfos> & tagInfos) { DARABONBA_PTR_SET_VALUE(tagInfos_, tagInfos) };
    inline DescribeTagsResponseBody& setTagInfos(vector<DescribeTagsResponseBody::TagInfos> && tagInfos) { DARABONBA_PTR_SET_RVALUE(tagInfos_, tagInfos) };


  protected:
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<DescribeTagsResponseBody::TagInfos>> tagInfos_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
