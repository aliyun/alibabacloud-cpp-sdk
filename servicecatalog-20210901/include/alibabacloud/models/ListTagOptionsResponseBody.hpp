// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTAGOPTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTAGOPTIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicecatalog20210901
{
namespace Models
{
  class ListTagOptionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTagOptionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TagOptionDetails, tagOptionDetails_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListTagOptionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TagOptionDetails, tagOptionDetails_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListTagOptionsResponseBody() = default ;
    ListTagOptionsResponseBody(const ListTagOptionsResponseBody &) = default ;
    ListTagOptionsResponseBody(ListTagOptionsResponseBody &&) = default ;
    ListTagOptionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTagOptionsResponseBody() = default ;
    ListTagOptionsResponseBody& operator=(const ListTagOptionsResponseBody &) = default ;
    ListTagOptionsResponseBody& operator=(ListTagOptionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TagOptionDetails : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TagOptionDetails& obj) { 
        DARABONBA_PTR_TO_JSON(Active, active_);
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Owner, owner_);
        DARABONBA_PTR_TO_JSON(TagOptionId, tagOptionId_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, TagOptionDetails& obj) { 
        DARABONBA_PTR_FROM_JSON(Active, active_);
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Owner, owner_);
        DARABONBA_PTR_FROM_JSON(TagOptionId, tagOptionId_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      TagOptionDetails() = default ;
      TagOptionDetails(const TagOptionDetails &) = default ;
      TagOptionDetails(TagOptionDetails &&) = default ;
      TagOptionDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TagOptionDetails() = default ;
      TagOptionDetails& operator=(const TagOptionDetails &) = default ;
      TagOptionDetails& operator=(TagOptionDetails &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->active_ == nullptr
        && this->key_ == nullptr && this->owner_ == nullptr && this->tagOptionId_ == nullptr && this->value_ == nullptr; };
      // active Field Functions 
      bool hasActive() const { return this->active_ != nullptr;};
      void deleteActive() { this->active_ = nullptr;};
      inline bool getActive() const { DARABONBA_PTR_GET_DEFAULT(active_, false) };
      inline TagOptionDetails& setActive(bool active) { DARABONBA_PTR_SET_VALUE(active_, active) };


      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline TagOptionDetails& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // owner Field Functions 
      bool hasOwner() const { return this->owner_ != nullptr;};
      void deleteOwner() { this->owner_ = nullptr;};
      inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
      inline TagOptionDetails& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


      // tagOptionId Field Functions 
      bool hasTagOptionId() const { return this->tagOptionId_ != nullptr;};
      void deleteTagOptionId() { this->tagOptionId_ = nullptr;};
      inline string getTagOptionId() const { DARABONBA_PTR_GET_DEFAULT(tagOptionId_, "") };
      inline TagOptionDetails& setTagOptionId(string tagOptionId) { DARABONBA_PTR_SET_VALUE(tagOptionId_, tagOptionId) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline TagOptionDetails& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // Indicates whether the tag option is enabled. Valid values:
      // 
      // *   true
      // *   false
      shared_ptr<bool> active_ {};
      // The key of the tag option.
      shared_ptr<string> key_ {};
      // The ID of the Alibaba Cloud account to which the tag option belongs.
      shared_ptr<string> owner_ {};
      // The ID of the tag option.
      shared_ptr<string> tagOptionId_ {};
      // The value of the tag option.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->nextToken_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->tagOptionDetails_ == nullptr && this->totalCount_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTagOptionsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListTagOptionsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListTagOptionsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTagOptionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tagOptionDetails Field Functions 
    bool hasTagOptionDetails() const { return this->tagOptionDetails_ != nullptr;};
    void deleteTagOptionDetails() { this->tagOptionDetails_ = nullptr;};
    inline const vector<ListTagOptionsResponseBody::TagOptionDetails> & getTagOptionDetails() const { DARABONBA_PTR_GET_CONST(tagOptionDetails_, vector<ListTagOptionsResponseBody::TagOptionDetails>) };
    inline vector<ListTagOptionsResponseBody::TagOptionDetails> getTagOptionDetails() { DARABONBA_PTR_GET(tagOptionDetails_, vector<ListTagOptionsResponseBody::TagOptionDetails>) };
    inline ListTagOptionsResponseBody& setTagOptionDetails(const vector<ListTagOptionsResponseBody::TagOptionDetails> & tagOptionDetails) { DARABONBA_PTR_SET_VALUE(tagOptionDetails_, tagOptionDetails) };
    inline ListTagOptionsResponseBody& setTagOptionDetails(vector<ListTagOptionsResponseBody::TagOptionDetails> && tagOptionDetails) { DARABONBA_PTR_SET_RVALUE(tagOptionDetails_, tagOptionDetails) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListTagOptionsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<string> nextToken_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    // 
    // Valid values: 1 to 100. Minimum value: 1. Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // An array that consists of the details of the tag option.
    shared_ptr<vector<ListTagOptionsResponseBody::TagOptionDetails>> tagOptionDetails_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicecatalog20210901
#endif
