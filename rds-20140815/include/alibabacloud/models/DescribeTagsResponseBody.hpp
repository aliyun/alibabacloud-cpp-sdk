// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETAGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETAGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeTagsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTagsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTagsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
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
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(TagInfos, tagInfos_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(TagInfos, tagInfos_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
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
        class DBInstanceIds : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DBInstanceIds& obj) { 
            DARABONBA_PTR_TO_JSON(DBInstanceIds, DBInstanceIds_);
          };
          friend void from_json(const Darabonba::Json& j, DBInstanceIds& obj) { 
            DARABONBA_PTR_FROM_JSON(DBInstanceIds, DBInstanceIds_);
          };
          DBInstanceIds() = default ;
          DBInstanceIds(const DBInstanceIds &) = default ;
          DBInstanceIds(DBInstanceIds &&) = default ;
          DBInstanceIds(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DBInstanceIds() = default ;
          DBInstanceIds& operator=(const DBInstanceIds &) = default ;
          DBInstanceIds& operator=(DBInstanceIds &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->DBInstanceIds_ == nullptr; };
          // DBInstanceIds Field Functions 
          bool hasDBInstanceIds() const { return this->DBInstanceIds_ != nullptr;};
          void deleteDBInstanceIds() { this->DBInstanceIds_ = nullptr;};
          inline const vector<string> & getDBInstanceIds() const { DARABONBA_PTR_GET_CONST(DBInstanceIds_, vector<string>) };
          inline vector<string> getDBInstanceIds() { DARABONBA_PTR_GET(DBInstanceIds_, vector<string>) };
          inline DBInstanceIds& setDBInstanceIds(const vector<string> & DBInstanceIds) { DARABONBA_PTR_SET_VALUE(DBInstanceIds_, DBInstanceIds) };
          inline DBInstanceIds& setDBInstanceIds(vector<string> && DBInstanceIds) { DARABONBA_PTR_SET_RVALUE(DBInstanceIds_, DBInstanceIds) };


        protected:
          shared_ptr<vector<string>> DBInstanceIds_ {};
        };

        virtual bool empty() const override { return this->DBInstanceIds_ == nullptr
        && this->tagKey_ == nullptr && this->tagValue_ == nullptr; };
        // DBInstanceIds Field Functions 
        bool hasDBInstanceIds() const { return this->DBInstanceIds_ != nullptr;};
        void deleteDBInstanceIds() { this->DBInstanceIds_ = nullptr;};
        inline const TagInfos::DBInstanceIds & getDBInstanceIds() const { DARABONBA_PTR_GET_CONST(DBInstanceIds_, TagInfos::DBInstanceIds) };
        inline TagInfos::DBInstanceIds getDBInstanceIds() { DARABONBA_PTR_GET(DBInstanceIds_, TagInfos::DBInstanceIds) };
        inline TagInfos& setDBInstanceIds(const TagInfos::DBInstanceIds & dBInstanceIds) { DARABONBA_PTR_SET_VALUE(DBInstanceIds_, dBInstanceIds) };
        inline TagInfos& setDBInstanceIds(TagInfos::DBInstanceIds && dBInstanceIds) { DARABONBA_PTR_SET_RVALUE(DBInstanceIds_, dBInstanceIds) };


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
        // The IDs of the instances to which the tag is added.
        shared_ptr<TagInfos::DBInstanceIds> DBInstanceIds_ {};
        // The tag key.
        shared_ptr<string> tagKey_ {};
        // The tag value.
        shared_ptr<string> tagValue_ {};
      };

      virtual bool empty() const override { return this->tagInfos_ == nullptr; };
      // tagInfos Field Functions 
      bool hasTagInfos() const { return this->tagInfos_ != nullptr;};
      void deleteTagInfos() { this->tagInfos_ = nullptr;};
      inline const vector<Items::TagInfos> & getTagInfos() const { DARABONBA_PTR_GET_CONST(tagInfos_, vector<Items::TagInfos>) };
      inline vector<Items::TagInfos> getTagInfos() { DARABONBA_PTR_GET(tagInfos_, vector<Items::TagInfos>) };
      inline Items& setTagInfos(const vector<Items::TagInfos> & tagInfos) { DARABONBA_PTR_SET_VALUE(tagInfos_, tagInfos) };
      inline Items& setTagInfos(vector<Items::TagInfos> && tagInfos) { DARABONBA_PTR_SET_RVALUE(tagInfos_, tagInfos) };


    protected:
      shared_ptr<vector<Items::TagInfos>> tagInfos_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->requestId_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const DescribeTagsResponseBody::Items & getItems() const { DARABONBA_PTR_GET_CONST(items_, DescribeTagsResponseBody::Items) };
    inline DescribeTagsResponseBody::Items getItems() { DARABONBA_PTR_GET(items_, DescribeTagsResponseBody::Items) };
    inline DescribeTagsResponseBody& setItems(const DescribeTagsResponseBody::Items & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeTagsResponseBody& setItems(DescribeTagsResponseBody::Items && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTagsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The tags that are added to the instance.
    shared_ptr<DescribeTagsResponseBody::Items> items_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
