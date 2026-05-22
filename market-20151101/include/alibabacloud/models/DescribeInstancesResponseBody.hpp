// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODY_HPP_
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
  class DescribeInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceItems, instanceItems_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceItems, instanceItems_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeInstancesResponseBody() = default ;
    DescribeInstancesResponseBody(const DescribeInstancesResponseBody &) = default ;
    DescribeInstancesResponseBody(DescribeInstancesResponseBody &&) = default ;
    DescribeInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstancesResponseBody() = default ;
    DescribeInstancesResponseBody& operator=(const DescribeInstancesResponseBody &) = default ;
    DescribeInstancesResponseBody& operator=(DescribeInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InstanceItems : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceItems& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceItem, instanceItem_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceItems& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceItem, instanceItem_);
      };
      InstanceItems() = default ;
      InstanceItems(const InstanceItems &) = default ;
      InstanceItems(InstanceItems &&) = default ;
      InstanceItems(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceItems() = default ;
      InstanceItems& operator=(const InstanceItems &) = default ;
      InstanceItems& operator=(InstanceItems &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class InstanceItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InstanceItem& obj) { 
          DARABONBA_PTR_TO_JSON(ApiJson, apiJson_);
          DARABONBA_PTR_TO_JSON(AppJson, appJson_);
          DARABONBA_PTR_TO_JSON(BeganOn, beganOn_);
          DARABONBA_PTR_TO_JSON(CreatedOn, createdOn_);
          DARABONBA_PTR_TO_JSON(EndOn, endOn_);
          DARABONBA_PTR_TO_JSON(ExtendJson, extendJson_);
          DARABONBA_PTR_TO_JSON(HostJson, hostJson_);
          DARABONBA_PTR_TO_JSON(IdaasJson, idaasJson_);
          DARABONBA_PTR_TO_JSON(ImageJson, imageJson_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(OrderId, orderId_);
          DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
          DARABONBA_PTR_TO_JSON(ProductName, productName_);
          DARABONBA_PTR_TO_JSON(ProductSkuCode, productSkuCode_);
          DARABONBA_PTR_TO_JSON(ProductType, productType_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(SupplierName, supplierName_);
        };
        friend void from_json(const Darabonba::Json& j, InstanceItem& obj) { 
          DARABONBA_PTR_FROM_JSON(ApiJson, apiJson_);
          DARABONBA_PTR_FROM_JSON(AppJson, appJson_);
          DARABONBA_PTR_FROM_JSON(BeganOn, beganOn_);
          DARABONBA_PTR_FROM_JSON(CreatedOn, createdOn_);
          DARABONBA_PTR_FROM_JSON(EndOn, endOn_);
          DARABONBA_PTR_FROM_JSON(ExtendJson, extendJson_);
          DARABONBA_PTR_FROM_JSON(HostJson, hostJson_);
          DARABONBA_PTR_FROM_JSON(IdaasJson, idaasJson_);
          DARABONBA_PTR_FROM_JSON(ImageJson, imageJson_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
          DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
          DARABONBA_PTR_FROM_JSON(ProductName, productName_);
          DARABONBA_PTR_FROM_JSON(ProductSkuCode, productSkuCode_);
          DARABONBA_PTR_FROM_JSON(ProductType, productType_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(SupplierName, supplierName_);
        };
        InstanceItem() = default ;
        InstanceItem(const InstanceItem &) = default ;
        InstanceItem(InstanceItem &&) = default ;
        InstanceItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InstanceItem() = default ;
        InstanceItem& operator=(const InstanceItem &) = default ;
        InstanceItem& operator=(InstanceItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->apiJson_ == nullptr
        && this->appJson_ == nullptr && this->beganOn_ == nullptr && this->createdOn_ == nullptr && this->endOn_ == nullptr && this->extendJson_ == nullptr
        && this->hostJson_ == nullptr && this->idaasJson_ == nullptr && this->imageJson_ == nullptr && this->instanceId_ == nullptr && this->orderId_ == nullptr
        && this->productCode_ == nullptr && this->productName_ == nullptr && this->productSkuCode_ == nullptr && this->productType_ == nullptr && this->status_ == nullptr
        && this->supplierName_ == nullptr; };
        // apiJson Field Functions 
        bool hasApiJson() const { return this->apiJson_ != nullptr;};
        void deleteApiJson() { this->apiJson_ = nullptr;};
        inline string getApiJson() const { DARABONBA_PTR_GET_DEFAULT(apiJson_, "") };
        inline InstanceItem& setApiJson(string apiJson) { DARABONBA_PTR_SET_VALUE(apiJson_, apiJson) };


        // appJson Field Functions 
        bool hasAppJson() const { return this->appJson_ != nullptr;};
        void deleteAppJson() { this->appJson_ = nullptr;};
        inline string getAppJson() const { DARABONBA_PTR_GET_DEFAULT(appJson_, "") };
        inline InstanceItem& setAppJson(string appJson) { DARABONBA_PTR_SET_VALUE(appJson_, appJson) };


        // beganOn Field Functions 
        bool hasBeganOn() const { return this->beganOn_ != nullptr;};
        void deleteBeganOn() { this->beganOn_ = nullptr;};
        inline int64_t getBeganOn() const { DARABONBA_PTR_GET_DEFAULT(beganOn_, 0L) };
        inline InstanceItem& setBeganOn(int64_t beganOn) { DARABONBA_PTR_SET_VALUE(beganOn_, beganOn) };


        // createdOn Field Functions 
        bool hasCreatedOn() const { return this->createdOn_ != nullptr;};
        void deleteCreatedOn() { this->createdOn_ = nullptr;};
        inline int64_t getCreatedOn() const { DARABONBA_PTR_GET_DEFAULT(createdOn_, 0L) };
        inline InstanceItem& setCreatedOn(int64_t createdOn) { DARABONBA_PTR_SET_VALUE(createdOn_, createdOn) };


        // endOn Field Functions 
        bool hasEndOn() const { return this->endOn_ != nullptr;};
        void deleteEndOn() { this->endOn_ = nullptr;};
        inline int64_t getEndOn() const { DARABONBA_PTR_GET_DEFAULT(endOn_, 0L) };
        inline InstanceItem& setEndOn(int64_t endOn) { DARABONBA_PTR_SET_VALUE(endOn_, endOn) };


        // extendJson Field Functions 
        bool hasExtendJson() const { return this->extendJson_ != nullptr;};
        void deleteExtendJson() { this->extendJson_ = nullptr;};
        inline string getExtendJson() const { DARABONBA_PTR_GET_DEFAULT(extendJson_, "") };
        inline InstanceItem& setExtendJson(string extendJson) { DARABONBA_PTR_SET_VALUE(extendJson_, extendJson) };


        // hostJson Field Functions 
        bool hasHostJson() const { return this->hostJson_ != nullptr;};
        void deleteHostJson() { this->hostJson_ = nullptr;};
        inline string getHostJson() const { DARABONBA_PTR_GET_DEFAULT(hostJson_, "") };
        inline InstanceItem& setHostJson(string hostJson) { DARABONBA_PTR_SET_VALUE(hostJson_, hostJson) };


        // idaasJson Field Functions 
        bool hasIdaasJson() const { return this->idaasJson_ != nullptr;};
        void deleteIdaasJson() { this->idaasJson_ = nullptr;};
        inline string getIdaasJson() const { DARABONBA_PTR_GET_DEFAULT(idaasJson_, "") };
        inline InstanceItem& setIdaasJson(string idaasJson) { DARABONBA_PTR_SET_VALUE(idaasJson_, idaasJson) };


        // imageJson Field Functions 
        bool hasImageJson() const { return this->imageJson_ != nullptr;};
        void deleteImageJson() { this->imageJson_ = nullptr;};
        inline string getImageJson() const { DARABONBA_PTR_GET_DEFAULT(imageJson_, "") };
        inline InstanceItem& setImageJson(string imageJson) { DARABONBA_PTR_SET_VALUE(imageJson_, imageJson) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline int64_t getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0L) };
        inline InstanceItem& setInstanceId(int64_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // orderId Field Functions 
        bool hasOrderId() const { return this->orderId_ != nullptr;};
        void deleteOrderId() { this->orderId_ = nullptr;};
        inline int64_t getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
        inline InstanceItem& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


        // productCode Field Functions 
        bool hasProductCode() const { return this->productCode_ != nullptr;};
        void deleteProductCode() { this->productCode_ = nullptr;};
        inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
        inline InstanceItem& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


        // productName Field Functions 
        bool hasProductName() const { return this->productName_ != nullptr;};
        void deleteProductName() { this->productName_ = nullptr;};
        inline string getProductName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
        inline InstanceItem& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


        // productSkuCode Field Functions 
        bool hasProductSkuCode() const { return this->productSkuCode_ != nullptr;};
        void deleteProductSkuCode() { this->productSkuCode_ = nullptr;};
        inline string getProductSkuCode() const { DARABONBA_PTR_GET_DEFAULT(productSkuCode_, "") };
        inline InstanceItem& setProductSkuCode(string productSkuCode) { DARABONBA_PTR_SET_VALUE(productSkuCode_, productSkuCode) };


        // productType Field Functions 
        bool hasProductType() const { return this->productType_ != nullptr;};
        void deleteProductType() { this->productType_ = nullptr;};
        inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
        inline InstanceItem& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline InstanceItem& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // supplierName Field Functions 
        bool hasSupplierName() const { return this->supplierName_ != nullptr;};
        void deleteSupplierName() { this->supplierName_ = nullptr;};
        inline string getSupplierName() const { DARABONBA_PTR_GET_DEFAULT(supplierName_, "") };
        inline InstanceItem& setSupplierName(string supplierName) { DARABONBA_PTR_SET_VALUE(supplierName_, supplierName) };


      protected:
        shared_ptr<string> apiJson_ {};
        shared_ptr<string> appJson_ {};
        shared_ptr<int64_t> beganOn_ {};
        shared_ptr<int64_t> createdOn_ {};
        shared_ptr<int64_t> endOn_ {};
        shared_ptr<string> extendJson_ {};
        shared_ptr<string> hostJson_ {};
        shared_ptr<string> idaasJson_ {};
        shared_ptr<string> imageJson_ {};
        shared_ptr<int64_t> instanceId_ {};
        shared_ptr<int64_t> orderId_ {};
        shared_ptr<string> productCode_ {};
        shared_ptr<string> productName_ {};
        shared_ptr<string> productSkuCode_ {};
        shared_ptr<string> productType_ {};
        shared_ptr<string> status_ {};
        shared_ptr<string> supplierName_ {};
      };

      virtual bool empty() const override { return this->instanceItem_ == nullptr; };
      // instanceItem Field Functions 
      bool hasInstanceItem() const { return this->instanceItem_ != nullptr;};
      void deleteInstanceItem() { this->instanceItem_ = nullptr;};
      inline const vector<InstanceItems::InstanceItem> & getInstanceItem() const { DARABONBA_PTR_GET_CONST(instanceItem_, vector<InstanceItems::InstanceItem>) };
      inline vector<InstanceItems::InstanceItem> getInstanceItem() { DARABONBA_PTR_GET(instanceItem_, vector<InstanceItems::InstanceItem>) };
      inline InstanceItems& setInstanceItem(const vector<InstanceItems::InstanceItem> & instanceItem) { DARABONBA_PTR_SET_VALUE(instanceItem_, instanceItem) };
      inline InstanceItems& setInstanceItem(vector<InstanceItems::InstanceItem> && instanceItem) { DARABONBA_PTR_SET_RVALUE(instanceItem_, instanceItem) };


    protected:
      shared_ptr<vector<InstanceItems::InstanceItem>> instanceItem_ {};
    };

    virtual bool empty() const override { return this->instanceItems_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // instanceItems Field Functions 
    bool hasInstanceItems() const { return this->instanceItems_ != nullptr;};
    void deleteInstanceItems() { this->instanceItems_ = nullptr;};
    inline const DescribeInstancesResponseBody::InstanceItems & getInstanceItems() const { DARABONBA_PTR_GET_CONST(instanceItems_, DescribeInstancesResponseBody::InstanceItems) };
    inline DescribeInstancesResponseBody::InstanceItems getInstanceItems() { DARABONBA_PTR_GET(instanceItems_, DescribeInstancesResponseBody::InstanceItems) };
    inline DescribeInstancesResponseBody& setInstanceItems(const DescribeInstancesResponseBody::InstanceItems & instanceItems) { DARABONBA_PTR_SET_VALUE(instanceItems_, instanceItems) };
    inline DescribeInstancesResponseBody& setInstanceItems(DescribeInstancesResponseBody::InstanceItems && instanceItems) { DARABONBA_PTR_SET_RVALUE(instanceItems_, instanceItems) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeInstancesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeInstancesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeInstancesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<DescribeInstancesResponseBody::InstanceItems> instanceItems_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Market20151101
#endif
