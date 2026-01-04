// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETAGKEYSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETAGKEYSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeTagKeysResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTagKeysResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TagKeys, tagKeys_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTagKeysResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TagKeys, tagKeys_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeTagKeysResponseBody() = default ;
    DescribeTagKeysResponseBody(const DescribeTagKeysResponseBody &) = default ;
    DescribeTagKeysResponseBody(DescribeTagKeysResponseBody &&) = default ;
    DescribeTagKeysResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTagKeysResponseBody() = default ;
    DescribeTagKeysResponseBody& operator=(const DescribeTagKeysResponseBody &) = default ;
    DescribeTagKeysResponseBody& operator=(DescribeTagKeysResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TagKeys : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TagKeys& obj) { 
        DARABONBA_PTR_TO_JSON(TagCount, tagCount_);
        DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
      };
      friend void from_json(const Darabonba::Json& j, TagKeys& obj) { 
        DARABONBA_PTR_FROM_JSON(TagCount, tagCount_);
        DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
      };
      TagKeys() = default ;
      TagKeys(const TagKeys &) = default ;
      TagKeys(TagKeys &&) = default ;
      TagKeys(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TagKeys() = default ;
      TagKeys& operator=(const TagKeys &) = default ;
      TagKeys& operator=(TagKeys &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->tagCount_ == nullptr
        && this->tagKey_ == nullptr; };
      // tagCount Field Functions 
      bool hasTagCount() const { return this->tagCount_ != nullptr;};
      void deleteTagCount() { this->tagCount_ = nullptr;};
      inline int32_t getTagCount() const { DARABONBA_PTR_GET_DEFAULT(tagCount_, 0) };
      inline TagKeys& setTagCount(int32_t tagCount) { DARABONBA_PTR_SET_VALUE(tagCount_, tagCount) };


      // tagKey Field Functions 
      bool hasTagKey() const { return this->tagKey_ != nullptr;};
      void deleteTagKey() { this->tagKey_ = nullptr;};
      inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
      inline TagKeys& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


    protected:
      // The number of Anti-DDoS Proxy (Chinese Mainland) instances to which the tag key is added.
      shared_ptr<int32_t> tagCount_ {};
      // The tag key.
      shared_ptr<string> tagKey_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->tagKeys_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeTagKeysResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeTagKeysResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTagKeysResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tagKeys Field Functions 
    bool hasTagKeys() const { return this->tagKeys_ != nullptr;};
    void deleteTagKeys() { this->tagKeys_ = nullptr;};
    inline const vector<DescribeTagKeysResponseBody::TagKeys> & getTagKeys() const { DARABONBA_PTR_GET_CONST(tagKeys_, vector<DescribeTagKeysResponseBody::TagKeys>) };
    inline vector<DescribeTagKeysResponseBody::TagKeys> getTagKeys() { DARABONBA_PTR_GET(tagKeys_, vector<DescribeTagKeysResponseBody::TagKeys>) };
    inline DescribeTagKeysResponseBody& setTagKeys(const vector<DescribeTagKeysResponseBody::TagKeys> & tagKeys) { DARABONBA_PTR_SET_VALUE(tagKeys_, tagKeys) };
    inline DescribeTagKeysResponseBody& setTagKeys(vector<DescribeTagKeysResponseBody::TagKeys> && tagKeys) { DARABONBA_PTR_SET_RVALUE(tagKeys_, tagKeys) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeTagKeysResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned on each page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The details about the tag keys.
    shared_ptr<vector<DescribeTagKeysResponseBody::TagKeys>> tagKeys_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
