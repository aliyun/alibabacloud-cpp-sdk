// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACCESSKEYLASTUSEDPRODUCTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETACCESSKEYLASTUSEDPRODUCTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Actiontrail20200706
{
namespace Models
{
  class GetAccessKeyLastUsedProductsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAccessKeyLastUsedProductsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Products, products_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAccessKeyLastUsedProductsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Products, products_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAccessKeyLastUsedProductsResponseBody() = default ;
    GetAccessKeyLastUsedProductsResponseBody(const GetAccessKeyLastUsedProductsResponseBody &) = default ;
    GetAccessKeyLastUsedProductsResponseBody(GetAccessKeyLastUsedProductsResponseBody &&) = default ;
    GetAccessKeyLastUsedProductsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAccessKeyLastUsedProductsResponseBody() = default ;
    GetAccessKeyLastUsedProductsResponseBody& operator=(const GetAccessKeyLastUsedProductsResponseBody &) = default ;
    GetAccessKeyLastUsedProductsResponseBody& operator=(GetAccessKeyLastUsedProductsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Products : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Products& obj) { 
        DARABONBA_PTR_TO_JSON(Detail, detail_);
        DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
        DARABONBA_PTR_TO_JSON(ServiceNameCn, serviceNameCn_);
        DARABONBA_PTR_TO_JSON(ServiceNameEn, serviceNameEn_);
        DARABONBA_PTR_TO_JSON(Source, source_);
        DARABONBA_PTR_TO_JSON(UsedTimestamp, usedTimestamp_);
      };
      friend void from_json(const Darabonba::Json& j, Products& obj) { 
        DARABONBA_PTR_FROM_JSON(Detail, detail_);
        DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
        DARABONBA_PTR_FROM_JSON(ServiceNameCn, serviceNameCn_);
        DARABONBA_PTR_FROM_JSON(ServiceNameEn, serviceNameEn_);
        DARABONBA_PTR_FROM_JSON(Source, source_);
        DARABONBA_PTR_FROM_JSON(UsedTimestamp, usedTimestamp_);
      };
      Products() = default ;
      Products(const Products &) = default ;
      Products(Products &&) = default ;
      Products(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Products() = default ;
      Products& operator=(const Products &) = default ;
      Products& operator=(Products &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->detail_ == nullptr
        && this->serviceName_ == nullptr && this->serviceNameCn_ == nullptr && this->serviceNameEn_ == nullptr && this->source_ == nullptr && this->usedTimestamp_ == nullptr; };
      // detail Field Functions 
      bool hasDetail() const { return this->detail_ != nullptr;};
      void deleteDetail() { this->detail_ = nullptr;};
      inline string getDetail() const { DARABONBA_PTR_GET_DEFAULT(detail_, "") };
      inline Products& setDetail(string detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


      // serviceName Field Functions 
      bool hasServiceName() const { return this->serviceName_ != nullptr;};
      void deleteServiceName() { this->serviceName_ = nullptr;};
      inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
      inline Products& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


      // serviceNameCn Field Functions 
      bool hasServiceNameCn() const { return this->serviceNameCn_ != nullptr;};
      void deleteServiceNameCn() { this->serviceNameCn_ = nullptr;};
      inline string getServiceNameCn() const { DARABONBA_PTR_GET_DEFAULT(serviceNameCn_, "") };
      inline Products& setServiceNameCn(string serviceNameCn) { DARABONBA_PTR_SET_VALUE(serviceNameCn_, serviceNameCn) };


      // serviceNameEn Field Functions 
      bool hasServiceNameEn() const { return this->serviceNameEn_ != nullptr;};
      void deleteServiceNameEn() { this->serviceNameEn_ = nullptr;};
      inline string getServiceNameEn() const { DARABONBA_PTR_GET_DEFAULT(serviceNameEn_, "") };
      inline Products& setServiceNameEn(string serviceNameEn) { DARABONBA_PTR_SET_VALUE(serviceNameEn_, serviceNameEn) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline Products& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


      // usedTimestamp Field Functions 
      bool hasUsedTimestamp() const { return this->usedTimestamp_ != nullptr;};
      void deleteUsedTimestamp() { this->usedTimestamp_ = nullptr;};
      inline int64_t getUsedTimestamp() const { DARABONBA_PTR_GET_DEFAULT(usedTimestamp_, 0L) };
      inline Products& setUsedTimestamp(int64_t usedTimestamp) { DARABONBA_PTR_SET_VALUE(usedTimestamp_, usedTimestamp) };


    protected:
      // The event details.
      shared_ptr<string> detail_ {};
      // The Alibaba Cloud service.
      shared_ptr<string> serviceName_ {};
      // The Chinese name of the Alibaba Cloud service.
      shared_ptr<string> serviceNameCn_ {};
      // The English name of the Alibaba Cloud service.
      shared_ptr<string> serviceNameEn_ {};
      // The event source.
      // 
      // Valid values:
      // 
      // *   Internal
      // 
      //     <!-- -->
      // 
      //     :
      // 
      //     <!-- -->
      // 
      //     other events
      // 
      //     <!-- -->
      // 
      // *   ManagementEvent
      // 
      //     <!-- -->
      // 
      //     :
      // 
      //     <!-- -->
      // 
      //     management events
      // 
      //     <!-- -->
      // 
      // *   DataEvent
      // 
      //     <!-- -->
      // 
      //     :
      // 
      //     <!-- -->
      // 
      //     data events
      // 
      //     <!-- -->
      shared_ptr<string> source_ {};
      // A pagination token. It can be used in the next request to retrieve a new page of results. Unit: millisecond.
      shared_ptr<int64_t> usedTimestamp_ {};
    };

    virtual bool empty() const override { return this->products_ == nullptr
        && this->requestId_ == nullptr; };
    // products Field Functions 
    bool hasProducts() const { return this->products_ != nullptr;};
    void deleteProducts() { this->products_ = nullptr;};
    inline const vector<GetAccessKeyLastUsedProductsResponseBody::Products> & getProducts() const { DARABONBA_PTR_GET_CONST(products_, vector<GetAccessKeyLastUsedProductsResponseBody::Products>) };
    inline vector<GetAccessKeyLastUsedProductsResponseBody::Products> getProducts() { DARABONBA_PTR_GET(products_, vector<GetAccessKeyLastUsedProductsResponseBody::Products>) };
    inline GetAccessKeyLastUsedProductsResponseBody& setProducts(const vector<GetAccessKeyLastUsedProductsResponseBody::Products> & products) { DARABONBA_PTR_SET_VALUE(products_, products) };
    inline GetAccessKeyLastUsedProductsResponseBody& setProducts(vector<GetAccessKeyLastUsedProductsResponseBody::Products> && products) { DARABONBA_PTR_SET_RVALUE(products_, products) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAccessKeyLastUsedProductsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of returned Alibaba Cloud services.
    // 
    // This parameter is required.
    shared_ptr<vector<GetAccessKeyLastUsedProductsResponseBody::Products>> products_ {};
    // The request ID.
    // 
    // This parameter is required.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Actiontrail20200706
#endif
