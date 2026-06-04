// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMETAENTITIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMETAENTITIESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListMetaEntitiesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMetaEntitiesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AttributeFilters, attributeFilters_);
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(CustomAttributeFilters, customAttributeFilters_);
      DARABONBA_PTR_TO_JSON(EntityType, entityType_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
    };
    friend void from_json(const Darabonba::Json& j, ListMetaEntitiesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AttributeFilters, attributeFilters_);
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(CustomAttributeFilters, customAttributeFilters_);
      DARABONBA_PTR_FROM_JSON(EntityType, entityType_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
    };
    ListMetaEntitiesRequest() = default ;
    ListMetaEntitiesRequest(const ListMetaEntitiesRequest &) = default ;
    ListMetaEntitiesRequest(ListMetaEntitiesRequest &&) = default ;
    ListMetaEntitiesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMetaEntitiesRequest() = default ;
    ListMetaEntitiesRequest& operator=(const ListMetaEntitiesRequest &) = default ;
    ListMetaEntitiesRequest& operator=(ListMetaEntitiesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CustomAttributeFilters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CustomAttributeFilters& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Values, values_);
      };
      friend void from_json(const Darabonba::Json& j, CustomAttributeFilters& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Values, values_);
      };
      CustomAttributeFilters() = default ;
      CustomAttributeFilters(const CustomAttributeFilters &) = default ;
      CustomAttributeFilters(CustomAttributeFilters &&) = default ;
      CustomAttributeFilters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CustomAttributeFilters() = default ;
      CustomAttributeFilters& operator=(const CustomAttributeFilters &) = default ;
      CustomAttributeFilters& operator=(CustomAttributeFilters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->values_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline CustomAttributeFilters& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // values Field Functions 
      bool hasValues() const { return this->values_ != nullptr;};
      void deleteValues() { this->values_ = nullptr;};
      inline const vector<string> & getValues() const { DARABONBA_PTR_GET_CONST(values_, vector<string>) };
      inline vector<string> getValues() { DARABONBA_PTR_GET(values_, vector<string>) };
      inline CustomAttributeFilters& setValues(const vector<string> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
      inline CustomAttributeFilters& setValues(vector<string> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


    protected:
      // This parameter is required.
      shared_ptr<string> key_ {};
      shared_ptr<vector<string>> values_ {};
    };

    class AttributeFilters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AttributeFilters& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Values, values_);
      };
      friend void from_json(const Darabonba::Json& j, AttributeFilters& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Values, values_);
      };
      AttributeFilters() = default ;
      AttributeFilters(const AttributeFilters &) = default ;
      AttributeFilters(AttributeFilters &&) = default ;
      AttributeFilters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AttributeFilters() = default ;
      AttributeFilters& operator=(const AttributeFilters &) = default ;
      AttributeFilters& operator=(AttributeFilters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->values_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline AttributeFilters& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // values Field Functions 
      bool hasValues() const { return this->values_ != nullptr;};
      void deleteValues() { this->values_ = nullptr;};
      inline const vector<string> & getValues() const { DARABONBA_PTR_GET_CONST(values_, vector<string>) };
      inline vector<string> getValues() { DARABONBA_PTR_GET(values_, vector<string>) };
      inline AttributeFilters& setValues(const vector<string> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
      inline AttributeFilters& setValues(vector<string> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


    protected:
      // This parameter is required.
      shared_ptr<string> key_ {};
      shared_ptr<vector<string>> values_ {};
    };

    virtual bool empty() const override { return this->attributeFilters_ == nullptr
        && this->comment_ == nullptr && this->customAttributeFilters_ == nullptr && this->entityType_ == nullptr && this->maxResults_ == nullptr && this->name_ == nullptr
        && this->nextToken_ == nullptr && this->order_ == nullptr && this->sortBy_ == nullptr; };
    // attributeFilters Field Functions 
    bool hasAttributeFilters() const { return this->attributeFilters_ != nullptr;};
    void deleteAttributeFilters() { this->attributeFilters_ = nullptr;};
    inline const vector<ListMetaEntitiesRequest::AttributeFilters> & getAttributeFilters() const { DARABONBA_PTR_GET_CONST(attributeFilters_, vector<ListMetaEntitiesRequest::AttributeFilters>) };
    inline vector<ListMetaEntitiesRequest::AttributeFilters> getAttributeFilters() { DARABONBA_PTR_GET(attributeFilters_, vector<ListMetaEntitiesRequest::AttributeFilters>) };
    inline ListMetaEntitiesRequest& setAttributeFilters(const vector<ListMetaEntitiesRequest::AttributeFilters> & attributeFilters) { DARABONBA_PTR_SET_VALUE(attributeFilters_, attributeFilters) };
    inline ListMetaEntitiesRequest& setAttributeFilters(vector<ListMetaEntitiesRequest::AttributeFilters> && attributeFilters) { DARABONBA_PTR_SET_RVALUE(attributeFilters_, attributeFilters) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline ListMetaEntitiesRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // customAttributeFilters Field Functions 
    bool hasCustomAttributeFilters() const { return this->customAttributeFilters_ != nullptr;};
    void deleteCustomAttributeFilters() { this->customAttributeFilters_ = nullptr;};
    inline const vector<ListMetaEntitiesRequest::CustomAttributeFilters> & getCustomAttributeFilters() const { DARABONBA_PTR_GET_CONST(customAttributeFilters_, vector<ListMetaEntitiesRequest::CustomAttributeFilters>) };
    inline vector<ListMetaEntitiesRequest::CustomAttributeFilters> getCustomAttributeFilters() { DARABONBA_PTR_GET(customAttributeFilters_, vector<ListMetaEntitiesRequest::CustomAttributeFilters>) };
    inline ListMetaEntitiesRequest& setCustomAttributeFilters(const vector<ListMetaEntitiesRequest::CustomAttributeFilters> & customAttributeFilters) { DARABONBA_PTR_SET_VALUE(customAttributeFilters_, customAttributeFilters) };
    inline ListMetaEntitiesRequest& setCustomAttributeFilters(vector<ListMetaEntitiesRequest::CustomAttributeFilters> && customAttributeFilters) { DARABONBA_PTR_SET_RVALUE(customAttributeFilters_, customAttributeFilters) };


    // entityType Field Functions 
    bool hasEntityType() const { return this->entityType_ != nullptr;};
    void deleteEntityType() { this->entityType_ = nullptr;};
    inline string getEntityType() const { DARABONBA_PTR_GET_DEFAULT(entityType_, "") };
    inline ListMetaEntitiesRequest& setEntityType(string entityType) { DARABONBA_PTR_SET_VALUE(entityType_, entityType) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListMetaEntitiesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListMetaEntitiesRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListMetaEntitiesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline ListMetaEntitiesRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string getSortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListMetaEntitiesRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


  protected:
    shared_ptr<vector<ListMetaEntitiesRequest::AttributeFilters>> attributeFilters_ {};
    shared_ptr<string> comment_ {};
    shared_ptr<vector<ListMetaEntitiesRequest::CustomAttributeFilters>> customAttributeFilters_ {};
    // This parameter is required.
    shared_ptr<string> entityType_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> order_ {};
    shared_ptr<string> sortBy_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
