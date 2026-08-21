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
      // The category of the search tag. Valid values:
      // 
      // * sort: the sorting method
      // * categoryId: the category ID
      // * productType: the product type
      // * aliyunUid: the Alibaba Cloud account ID of the service provider that owns the product.
      shared_ptr<string> key_ {};
      // The value of the search label:
      // 
      // 
      // - sort
      //   - user_count-desc: number of transactions in the last 180 days
      //   - created_on-desc: creation time
      //   - price-desc: price
      //   - score-desc: rating
      // 
      // - categoryId 
      //   - Software Marketplace  53366009
      //     + Runtime Environment  53448001
      //     - Management & Monitoring  53690006
      //     - Website Building System  53616009
      //     - Application Development  55530001
      //     - Database  56024006
      //     - Server Software  56014009
      //     - Network Feature Software  56368007
      //     - Operating System  57742013
      //   - Service Marketplace  52734001
      //     - Data Migration  52738004
      //     - Environment Configuration  52746001
      //     - Troubleshooting  52740002
      //     - Security O&M  52732002
      //     - Custom Development  56082003
      //     - Training & Certification  57252001
      //     - Dedicated Line Access  57392001
      //     - Enterprise Services  56838014
      //     - Security Services  57004003
      //   - Website Building Marketplace  52738001
      //     - Enterprise Display  52738005
      //     - E-commerce  52750001
      //     - Mobile Website  52752001
      //     - Design  52732003
      //     - Information Portal  52744002
      //     - After-sales Service  52744003
      //     - Community Forum  55586021
      //     - Mobile Marketing  55514022
      //     - Template Website  56598032
      //     - Website Hosting  57342011
      //   - Cloud Security Marketplace  56764045
      //     + Host Security  56832023
      //     + Application Security  56846020
      //     + Data Security  56824015
      //     + Security Management  56830014
      //     + Network Security  56820014
      //   - Enterprise Applications  56832009
      //     - Office Management  56778013
      //     - Financial Management  56764034
      //     - HR Management  56780006
      //     - Sales Management  56842010
      //     - Advertising & Marketing  56842011
      //     - Foreign Trade  56790007
      //     - Cloud Communications  57602001
      //     - Supply Chain Management  57604001
      //     - Data Services  57606001
      //   - Solutions  56848023
      //     - E-commerce  56848024
      //     - Finance  56820017
      //     - Logistics  56776025
      //     - Government  56842031
      //     - Multimedia  56784018
      //     - IoT  56794026
      //     - Big Data  56792022
      //   - API Marketplace  56956004
      //     - E-commerce  56928004
      //     - Finance & Investment  57000002
      //     - Transportation & Geography  57002002
      //     - Enterprise Management  56928005
      //     - Public Affairs  57002003
      //     - Meteorology & Water Resources  57096001
      //     - Artificial Intelligence  57124001
      //     - Lifestyle Services  57126001
      //   - IoT Marketplace  201194001
      //     - Integrated Systems  201196001
      //     - Smart Hardware  201198001
      //     - Modules  201200001
      //     - Sensors  201192002
      //     - Chips  201202001
      //     - IoT Applications  201196002
      //     - IoT Services  201196003
      //   - Data Intelligence  201204005
      //     - Data Analytics & Visualization  201190008
      //     - Public Opinion Analysis  201198004
      //     - E-commerce & Marketing  201202006
      //     - Artificial Intelligence  201204006
      //     - Meteorology & Transportation  201214006
      //     - Finance & Accounting  201208013
      // - productType:
      //   - APP: application
      //   - SERVICE: service
      //   - MIRROR: image
      //   - DOWNLOAD: download
      //   - API_SERVICE: API.
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
    // The list of filter conditions.
    shared_ptr<vector<DescribeProductsRequest::Filter>> filter_ {};
    // The current page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of products to display per page.
    shared_ptr<int32_t> pageSize_ {};
    // The search keyword.
    shared_ptr<string> searchTerm_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Market20151101
#endif
