// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETAGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETAGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class DescribeTagsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTagsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TagSets, tagSets_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTagsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TagSets, tagSets_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
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
    class TagSets : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TagSets& obj) { 
        DARABONBA_PTR_TO_JSON(TagSet, tagSet_);
      };
      friend void from_json(const Darabonba::Json& j, TagSets& obj) { 
        DARABONBA_PTR_FROM_JSON(TagSet, tagSet_);
      };
      TagSets() = default ;
      TagSets(const TagSets &) = default ;
      TagSets(TagSets &&) = default ;
      TagSets(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TagSets() = default ;
      TagSets& operator=(const TagSets &) = default ;
      TagSets& operator=(TagSets &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TagSet : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TagSet& obj) { 
          DARABONBA_PTR_TO_JSON(InstanceCount, instanceCount_);
          DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
          DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
        };
        friend void from_json(const Darabonba::Json& j, TagSet& obj) { 
          DARABONBA_PTR_FROM_JSON(InstanceCount, instanceCount_);
          DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
          DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
        };
        TagSet() = default ;
        TagSet(const TagSet &) = default ;
        TagSet(TagSet &&) = default ;
        TagSet(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TagSet() = default ;
        TagSet& operator=(const TagSet &) = default ;
        TagSet& operator=(TagSet &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->instanceCount_ == nullptr
        && this->tagKey_ == nullptr && this->tagValue_ == nullptr; };
        // instanceCount Field Functions 
        bool hasInstanceCount() const { return this->instanceCount_ != nullptr;};
        void deleteInstanceCount() { this->instanceCount_ = nullptr;};
        inline int32_t getInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(instanceCount_, 0) };
        inline TagSet& setInstanceCount(int32_t instanceCount) { DARABONBA_PTR_SET_VALUE(instanceCount_, instanceCount) };


        // tagKey Field Functions 
        bool hasTagKey() const { return this->tagKey_ != nullptr;};
        void deleteTagKey() { this->tagKey_ = nullptr;};
        inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
        inline TagSet& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


        // tagValue Field Functions 
        bool hasTagValue() const { return this->tagValue_ != nullptr;};
        void deleteTagValue() { this->tagValue_ = nullptr;};
        inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
        inline TagSet& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


      protected:
        shared_ptr<int32_t> instanceCount_ {};
        shared_ptr<string> tagKey_ {};
        shared_ptr<string> tagValue_ {};
      };

      virtual bool empty() const override { return this->tagSet_ == nullptr; };
      // tagSet Field Functions 
      bool hasTagSet() const { return this->tagSet_ != nullptr;};
      void deleteTagSet() { this->tagSet_ = nullptr;};
      inline const vector<TagSets::TagSet> & getTagSet() const { DARABONBA_PTR_GET_CONST(tagSet_, vector<TagSets::TagSet>) };
      inline vector<TagSets::TagSet> getTagSet() { DARABONBA_PTR_GET(tagSet_, vector<TagSets::TagSet>) };
      inline TagSets& setTagSet(const vector<TagSets::TagSet> & tagSet) { DARABONBA_PTR_SET_VALUE(tagSet_, tagSet) };
      inline TagSets& setTagSet(vector<TagSets::TagSet> && tagSet) { DARABONBA_PTR_SET_RVALUE(tagSet_, tagSet) };


    protected:
      shared_ptr<vector<TagSets::TagSet>> tagSet_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->tagSets_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeTagsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeTagsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTagsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tagSets Field Functions 
    bool hasTagSets() const { return this->tagSets_ != nullptr;};
    void deleteTagSets() { this->tagSets_ = nullptr;};
    inline const DescribeTagsResponseBody::TagSets & getTagSets() const { DARABONBA_PTR_GET_CONST(tagSets_, DescribeTagsResponseBody::TagSets) };
    inline DescribeTagsResponseBody::TagSets getTagSets() { DARABONBA_PTR_GET(tagSets_, DescribeTagsResponseBody::TagSets) };
    inline DescribeTagsResponseBody& setTagSets(const DescribeTagsResponseBody::TagSets & tagSets) { DARABONBA_PTR_SET_VALUE(tagSets_, tagSets) };
    inline DescribeTagsResponseBody& setTagSets(DescribeTagsResponseBody::TagSets && tagSets) { DARABONBA_PTR_SET_RVALUE(tagSets_, tagSets) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeTagsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The number of the returned page. Minimum value: 1. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page. Default value: 50. Maximum value: 100.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    shared_ptr<DescribeTagsResponseBody::TagSets> tagSets_ {};
    // The number of instances returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
