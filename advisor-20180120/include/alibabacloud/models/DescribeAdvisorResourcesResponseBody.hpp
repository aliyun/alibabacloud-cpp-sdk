// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEADVISORRESOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEADVISORRESOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Advisor20180120
{
namespace Models
{
  class DescribeAdvisorResourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAdvisorResourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAdvisorResourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAdvisorResourcesResponseBody() = default ;
    DescribeAdvisorResourcesResponseBody(const DescribeAdvisorResourcesResponseBody &) = default ;
    DescribeAdvisorResourcesResponseBody(DescribeAdvisorResourcesResponseBody &&) = default ;
    DescribeAdvisorResourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAdvisorResourcesResponseBody() = default ;
    DescribeAdvisorResourcesResponseBody& operator=(const DescribeAdvisorResourcesResponseBody &) = default ;
    DescribeAdvisorResourcesResponseBody& operator=(DescribeAdvisorResourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Result, result_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(Result, result_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Result : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Result& obj) { 
          DARABONBA_PTR_TO_JSON(Resource, resource_);
        };
        friend void from_json(const Darabonba::Json& j, Result& obj) { 
          DARABONBA_PTR_FROM_JSON(Resource, resource_);
        };
        Result() = default ;
        Result(const Result &) = default ;
        Result(Result &&) = default ;
        Result(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Result() = default ;
        Result& operator=(const Result &) = default ;
        Result& operator=(Result &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Resource : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Resource& obj) { 
            DARABONBA_PTR_TO_JSON(Data, data_);
            DARABONBA_PTR_TO_JSON(Product, product_);
            DARABONBA_PTR_TO_JSON(RegionId, regionId_);
            DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
            DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
          };
          friend void from_json(const Darabonba::Json& j, Resource& obj) { 
            DARABONBA_PTR_FROM_JSON(Data, data_);
            DARABONBA_PTR_FROM_JSON(Product, product_);
            DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
            DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
            DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
          };
          Resource() = default ;
          Resource(const Resource &) = default ;
          Resource(Resource &&) = default ;
          Resource(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Resource() = default ;
          Resource& operator=(const Resource &) = default ;
          Resource& operator=(Resource &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->data_ == nullptr
        && this->product_ == nullptr && this->regionId_ == nullptr && this->resourceId_ == nullptr && this->resourceName_ == nullptr; };
          // data Field Functions 
          bool hasData() const { return this->data_ != nullptr;};
          void deleteData() { this->data_ = nullptr;};
          inline string getData() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
          inline Resource& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


          // product Field Functions 
          bool hasProduct() const { return this->product_ != nullptr;};
          void deleteProduct() { this->product_ = nullptr;};
          inline string getProduct() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
          inline Resource& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


          // regionId Field Functions 
          bool hasRegionId() const { return this->regionId_ != nullptr;};
          void deleteRegionId() { this->regionId_ = nullptr;};
          inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
          inline Resource& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


          // resourceId Field Functions 
          bool hasResourceId() const { return this->resourceId_ != nullptr;};
          void deleteResourceId() { this->resourceId_ = nullptr;};
          inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
          inline Resource& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


          // resourceName Field Functions 
          bool hasResourceName() const { return this->resourceName_ != nullptr;};
          void deleteResourceName() { this->resourceName_ = nullptr;};
          inline string getResourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
          inline Resource& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


        protected:
          shared_ptr<string> data_ {};
          shared_ptr<string> product_ {};
          shared_ptr<string> regionId_ {};
          shared_ptr<string> resourceId_ {};
          shared_ptr<string> resourceName_ {};
        };

        virtual bool empty() const override { return this->resource_ == nullptr; };
        // resource Field Functions 
        bool hasResource() const { return this->resource_ != nullptr;};
        void deleteResource() { this->resource_ = nullptr;};
        inline const vector<Result::Resource> & getResource() const { DARABONBA_PTR_GET_CONST(resource_, vector<Result::Resource>) };
        inline vector<Result::Resource> getResource() { DARABONBA_PTR_GET(resource_, vector<Result::Resource>) };
        inline Result& setResource(const vector<Result::Resource> & resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };
        inline Result& setResource(vector<Result::Resource> && resource) { DARABONBA_PTR_SET_RVALUE(resource_, resource) };


      protected:
        shared_ptr<vector<Result::Resource>> resource_ {};
      };

      virtual bool empty() const override { return this->pageNo_ == nullptr
        && this->pageSize_ == nullptr && this->result_ == nullptr && this->total_ == nullptr; };
      // pageNo Field Functions 
      bool hasPageNo() const { return this->pageNo_ != nullptr;};
      void deletePageNo() { this->pageNo_ = nullptr;};
      inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
      inline Data& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline const Data::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, Data::Result) };
      inline Data::Result getResult() { DARABONBA_PTR_GET(result_, Data::Result) };
      inline Data& setResult(const Data::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
      inline Data& setResult(Data::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
      inline Data& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      shared_ptr<int32_t> pageNo_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<Data::Result> result_ {};
      shared_ptr<int32_t> total_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeAdvisorResourcesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeAdvisorResourcesResponseBody::Data) };
    inline DescribeAdvisorResourcesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeAdvisorResourcesResponseBody::Data) };
    inline DescribeAdvisorResourcesResponseBody& setData(const DescribeAdvisorResourcesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeAdvisorResourcesResponseBody& setData(DescribeAdvisorResourcesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAdvisorResourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeAdvisorResourcesResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Advisor20180120
#endif
