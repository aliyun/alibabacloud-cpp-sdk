// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTAGKEYSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTAGKEYSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ListTagKeysResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTagKeysResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TagKeys, tagKeys_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListTagKeysResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TagKeys, tagKeys_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListTagKeysResponseBody() = default ;
    ListTagKeysResponseBody(const ListTagKeysResponseBody &) = default ;
    ListTagKeysResponseBody(ListTagKeysResponseBody &&) = default ;
    ListTagKeysResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTagKeysResponseBody() = default ;
    ListTagKeysResponseBody& operator=(const ListTagKeysResponseBody &) = default ;
    ListTagKeysResponseBody& operator=(ListTagKeysResponseBody &&) = default ;
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
      // The total number of tag keys.
      shared_ptr<int32_t> tagCount_ {};
      // The name of the tag key.
      shared_ptr<string> tagKey_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->tagKeys_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListTagKeysResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListTagKeysResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTagKeysResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tagKeys Field Functions 
    bool hasTagKeys() const { return this->tagKeys_ != nullptr;};
    void deleteTagKeys() { this->tagKeys_ = nullptr;};
    inline const vector<ListTagKeysResponseBody::TagKeys> & getTagKeys() const { DARABONBA_PTR_GET_CONST(tagKeys_, vector<ListTagKeysResponseBody::TagKeys>) };
    inline vector<ListTagKeysResponseBody::TagKeys> getTagKeys() { DARABONBA_PTR_GET(tagKeys_, vector<ListTagKeysResponseBody::TagKeys>) };
    inline ListTagKeysResponseBody& setTagKeys(const vector<ListTagKeysResponseBody::TagKeys> & tagKeys) { DARABONBA_PTR_SET_VALUE(tagKeys_, tagKeys) };
    inline ListTagKeysResponseBody& setTagKeys(vector<ListTagKeysResponseBody::TagKeys> && tagKeys) { DARABONBA_PTR_SET_RVALUE(tagKeys_, tagKeys) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListTagKeysResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // An array that consists of tags.
    shared_ptr<vector<ListTagKeysResponseBody::TagKeys>> tagKeys_ {};
    // The total number of tags returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
