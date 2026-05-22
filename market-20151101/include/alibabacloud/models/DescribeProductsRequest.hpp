// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRODUCTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRODUCTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Market20151101
{
namespace Models
{
  class DescribeProductsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeProductsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SearchTerm, searchTerm_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeProductsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SearchTerm, searchTerm_);
    };
    DescribeProductsRequest() = default ;
    DescribeProductsRequest(const DescribeProductsRequest &) = default ;
    DescribeProductsRequest(DescribeProductsRequest &&) = default ;
    DescribeProductsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeProductsRequest() = default ;
    DescribeProductsRequest& operator=(const DescribeProductsRequest &) = default ;
    DescribeProductsRequest& operator=(DescribeProductsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Filter : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Filter& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Filter& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Filter() = default ;
      Filter(const Filter &) = default ;
      Filter(Filter &&) = default ;
      Filter(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Filter() = default ;
      Filter& operator=(const Filter &) = default ;
      Filter& operator=(Filter &&) = default ;
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
      inline Filter& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Filter& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> key_ {};
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->filter_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->searchTerm_ == nullptr; };
    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline const vector<DescribeProductsRequest::Filter> & getFilter() const { DARABONBA_PTR_GET_CONST(filter_, vector<DescribeProductsRequest::Filter>) };
    inline vector<DescribeProductsRequest::Filter> getFilter() { DARABONBA_PTR_GET(filter_, vector<DescribeProductsRequest::Filter>) };
    inline DescribeProductsRequest& setFilter(const vector<DescribeProductsRequest::Filter> & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
    inline DescribeProductsRequest& setFilter(vector<DescribeProductsRequest::Filter> && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeProductsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeProductsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // searchTerm Field Functions 
    bool hasSearchTerm() const { return this->searchTerm_ != nullptr;};
    void deleteSearchTerm() { this->searchTerm_ = nullptr;};
    inline string getSearchTerm() const { DARABONBA_PTR_GET_DEFAULT(searchTerm_, "") };
    inline DescribeProductsRequest& setSearchTerm(string searchTerm) { DARABONBA_PTR_SET_VALUE(searchTerm_, searchTerm) };


  protected:
    shared_ptr<vector<DescribeProductsRequest::Filter>> filter_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> searchTerm_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Market20151101
#endif
