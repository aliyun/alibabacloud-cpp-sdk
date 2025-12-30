// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLOUDDRIVESERVICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATECLOUDDRIVESERVICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class CreateCloudDriveServiceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCloudDriveServiceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CdsId, cdsId_);
      DARABONBA_PTR_TO_JSON(CdsName, cdsName_);
      DARABONBA_PTR_TO_JSON(CenId, cenId_);
      DARABONBA_PTR_TO_JSON(ConflictCdsAndOrder, conflictCdsAndOrder_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(MaxSize, maxSize_);
      DARABONBA_PTR_TO_JSON(OfficeSiteType, officeSiteType_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCloudDriveServiceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CdsId, cdsId_);
      DARABONBA_PTR_FROM_JSON(CdsName, cdsName_);
      DARABONBA_PTR_FROM_JSON(CenId, cenId_);
      DARABONBA_PTR_FROM_JSON(ConflictCdsAndOrder, conflictCdsAndOrder_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(MaxSize, maxSize_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteType, officeSiteType_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateCloudDriveServiceResponseBody() = default ;
    CreateCloudDriveServiceResponseBody(const CreateCloudDriveServiceResponseBody &) = default ;
    CreateCloudDriveServiceResponseBody(CreateCloudDriveServiceResponseBody &&) = default ;
    CreateCloudDriveServiceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCloudDriveServiceResponseBody() = default ;
    CreateCloudDriveServiceResponseBody& operator=(const CreateCloudDriveServiceResponseBody &) = default ;
    CreateCloudDriveServiceResponseBody& operator=(CreateCloudDriveServiceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ConflictCdsAndOrder : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ConflictCdsAndOrder& obj) { 
        DARABONBA_PTR_TO_JSON(ConflictCds, conflictCds_);
        DARABONBA_PTR_TO_JSON(ConflictOrder, conflictOrder_);
      };
      friend void from_json(const Darabonba::Json& j, ConflictCdsAndOrder& obj) { 
        DARABONBA_PTR_FROM_JSON(ConflictCds, conflictCds_);
        DARABONBA_PTR_FROM_JSON(ConflictOrder, conflictOrder_);
      };
      ConflictCdsAndOrder() = default ;
      ConflictCdsAndOrder(const ConflictCdsAndOrder &) = default ;
      ConflictCdsAndOrder(ConflictCdsAndOrder &&) = default ;
      ConflictCdsAndOrder(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ConflictCdsAndOrder() = default ;
      ConflictCdsAndOrder& operator=(const ConflictCdsAndOrder &) = default ;
      ConflictCdsAndOrder& operator=(ConflictCdsAndOrder &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ConflictOrder : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ConflictOrder& obj) { 
          DARABONBA_PTR_TO_JSON(CdsId, cdsId_);
          DARABONBA_PTR_TO_JSON(OrderId, orderId_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        };
        friend void from_json(const Darabonba::Json& j, ConflictOrder& obj) { 
          DARABONBA_PTR_FROM_JSON(CdsId, cdsId_);
          DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        };
        ConflictOrder() = default ;
        ConflictOrder(const ConflictOrder &) = default ;
        ConflictOrder(ConflictOrder &&) = default ;
        ConflictOrder(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ConflictOrder() = default ;
        ConflictOrder& operator=(const ConflictOrder &) = default ;
        ConflictOrder& operator=(ConflictOrder &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cdsId_ == nullptr
        && this->orderId_ == nullptr && this->regionId_ == nullptr; };
        // cdsId Field Functions 
        bool hasCdsId() const { return this->cdsId_ != nullptr;};
        void deleteCdsId() { this->cdsId_ = nullptr;};
        inline string getCdsId() const { DARABONBA_PTR_GET_DEFAULT(cdsId_, "") };
        inline ConflictOrder& setCdsId(string cdsId) { DARABONBA_PTR_SET_VALUE(cdsId_, cdsId) };


        // orderId Field Functions 
        bool hasOrderId() const { return this->orderId_ != nullptr;};
        void deleteOrderId() { this->orderId_ = nullptr;};
        inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
        inline ConflictOrder& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline ConflictOrder& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      protected:
        // The ID of the enterprise drive. The enterprise drive cannot be used if the order is unpaid.
        shared_ptr<string> cdsId_ {};
        // The ID of the order. You can obtain an order ID on the **Orders** page in the Expenses and Costs console.
        shared_ptr<string> orderId_ {};
        // The ID of the region.
        shared_ptr<string> regionId_ {};
      };

      class ConflictCds : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ConflictCds& obj) { 
          DARABONBA_PTR_TO_JSON(CdsId, cdsId_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        };
        friend void from_json(const Darabonba::Json& j, ConflictCds& obj) { 
          DARABONBA_PTR_FROM_JSON(CdsId, cdsId_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        };
        ConflictCds() = default ;
        ConflictCds(const ConflictCds &) = default ;
        ConflictCds(ConflictCds &&) = default ;
        ConflictCds(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ConflictCds() = default ;
        ConflictCds& operator=(const ConflictCds &) = default ;
        ConflictCds& operator=(ConflictCds &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cdsId_ == nullptr
        && this->regionId_ == nullptr; };
        // cdsId Field Functions 
        bool hasCdsId() const { return this->cdsId_ != nullptr;};
        void deleteCdsId() { this->cdsId_ = nullptr;};
        inline string getCdsId() const { DARABONBA_PTR_GET_DEFAULT(cdsId_, "") };
        inline ConflictCds& setCdsId(string cdsId) { DARABONBA_PTR_SET_VALUE(cdsId_, cdsId) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline ConflictCds& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      protected:
        // The ID of the enterprise drive.
        shared_ptr<string> cdsId_ {};
        // The ID of the region. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) operation to query the list of regions where Elastic Desktop Service (EDS) Enterprise is available.
        shared_ptr<string> regionId_ {};
      };

      virtual bool empty() const override { return this->conflictCds_ == nullptr
        && this->conflictOrder_ == nullptr; };
      // conflictCds Field Functions 
      bool hasConflictCds() const { return this->conflictCds_ != nullptr;};
      void deleteConflictCds() { this->conflictCds_ = nullptr;};
      inline const vector<ConflictCdsAndOrder::ConflictCds> & getConflictCds() const { DARABONBA_PTR_GET_CONST(conflictCds_, vector<ConflictCdsAndOrder::ConflictCds>) };
      inline vector<ConflictCdsAndOrder::ConflictCds> getConflictCds() { DARABONBA_PTR_GET(conflictCds_, vector<ConflictCdsAndOrder::ConflictCds>) };
      inline ConflictCdsAndOrder& setConflictCds(const vector<ConflictCdsAndOrder::ConflictCds> & conflictCds) { DARABONBA_PTR_SET_VALUE(conflictCds_, conflictCds) };
      inline ConflictCdsAndOrder& setConflictCds(vector<ConflictCdsAndOrder::ConflictCds> && conflictCds) { DARABONBA_PTR_SET_RVALUE(conflictCds_, conflictCds) };


      // conflictOrder Field Functions 
      bool hasConflictOrder() const { return this->conflictOrder_ != nullptr;};
      void deleteConflictOrder() { this->conflictOrder_ = nullptr;};
      inline const vector<ConflictCdsAndOrder::ConflictOrder> & getConflictOrder() const { DARABONBA_PTR_GET_CONST(conflictOrder_, vector<ConflictCdsAndOrder::ConflictOrder>) };
      inline vector<ConflictCdsAndOrder::ConflictOrder> getConflictOrder() { DARABONBA_PTR_GET(conflictOrder_, vector<ConflictCdsAndOrder::ConflictOrder>) };
      inline ConflictCdsAndOrder& setConflictOrder(const vector<ConflictCdsAndOrder::ConflictOrder> & conflictOrder) { DARABONBA_PTR_SET_VALUE(conflictOrder_, conflictOrder) };
      inline ConflictCdsAndOrder& setConflictOrder(vector<ConflictCdsAndOrder::ConflictOrder> && conflictOrder) { DARABONBA_PTR_SET_RVALUE(conflictOrder_, conflictOrder) };


    protected:
      // The conflicting enterprise drive.
      shared_ptr<vector<ConflictCdsAndOrder::ConflictCds>> conflictCds_ {};
      // The subscription orders of the conflicting enterprise drives that are unpaid.
      shared_ptr<vector<ConflictCdsAndOrder::ConflictOrder>> conflictOrder_ {};
    };

    virtual bool empty() const override { return this->cdsId_ == nullptr
        && this->cdsName_ == nullptr && this->cenId_ == nullptr && this->conflictCdsAndOrder_ == nullptr && this->domainName_ == nullptr && this->errorCode_ == nullptr
        && this->maxSize_ == nullptr && this->officeSiteType_ == nullptr && this->orderId_ == nullptr && this->requestId_ == nullptr; };
    // cdsId Field Functions 
    bool hasCdsId() const { return this->cdsId_ != nullptr;};
    void deleteCdsId() { this->cdsId_ = nullptr;};
    inline string getCdsId() const { DARABONBA_PTR_GET_DEFAULT(cdsId_, "") };
    inline CreateCloudDriveServiceResponseBody& setCdsId(string cdsId) { DARABONBA_PTR_SET_VALUE(cdsId_, cdsId) };


    // cdsName Field Functions 
    bool hasCdsName() const { return this->cdsName_ != nullptr;};
    void deleteCdsName() { this->cdsName_ = nullptr;};
    inline string getCdsName() const { DARABONBA_PTR_GET_DEFAULT(cdsName_, "") };
    inline CreateCloudDriveServiceResponseBody& setCdsName(string cdsName) { DARABONBA_PTR_SET_VALUE(cdsName_, cdsName) };


    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string getCenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline CreateCloudDriveServiceResponseBody& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // conflictCdsAndOrder Field Functions 
    bool hasConflictCdsAndOrder() const { return this->conflictCdsAndOrder_ != nullptr;};
    void deleteConflictCdsAndOrder() { this->conflictCdsAndOrder_ = nullptr;};
    inline const CreateCloudDriveServiceResponseBody::ConflictCdsAndOrder & getConflictCdsAndOrder() const { DARABONBA_PTR_GET_CONST(conflictCdsAndOrder_, CreateCloudDriveServiceResponseBody::ConflictCdsAndOrder) };
    inline CreateCloudDriveServiceResponseBody::ConflictCdsAndOrder getConflictCdsAndOrder() { DARABONBA_PTR_GET(conflictCdsAndOrder_, CreateCloudDriveServiceResponseBody::ConflictCdsAndOrder) };
    inline CreateCloudDriveServiceResponseBody& setConflictCdsAndOrder(const CreateCloudDriveServiceResponseBody::ConflictCdsAndOrder & conflictCdsAndOrder) { DARABONBA_PTR_SET_VALUE(conflictCdsAndOrder_, conflictCdsAndOrder) };
    inline CreateCloudDriveServiceResponseBody& setConflictCdsAndOrder(CreateCloudDriveServiceResponseBody::ConflictCdsAndOrder && conflictCdsAndOrder) { DARABONBA_PTR_SET_RVALUE(conflictCdsAndOrder_, conflictCdsAndOrder) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline CreateCloudDriveServiceResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline CreateCloudDriveServiceResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // maxSize Field Functions 
    bool hasMaxSize() const { return this->maxSize_ != nullptr;};
    void deleteMaxSize() { this->maxSize_ = nullptr;};
    inline string getMaxSize() const { DARABONBA_PTR_GET_DEFAULT(maxSize_, "") };
    inline CreateCloudDriveServiceResponseBody& setMaxSize(string maxSize) { DARABONBA_PTR_SET_VALUE(maxSize_, maxSize) };


    // officeSiteType Field Functions 
    bool hasOfficeSiteType() const { return this->officeSiteType_ != nullptr;};
    void deleteOfficeSiteType() { this->officeSiteType_ = nullptr;};
    inline string getOfficeSiteType() const { DARABONBA_PTR_GET_DEFAULT(officeSiteType_, "") };
    inline CreateCloudDriveServiceResponseBody& setOfficeSiteType(string officeSiteType) { DARABONBA_PTR_SET_VALUE(officeSiteType_, officeSiteType) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline CreateCloudDriveServiceResponseBody& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateCloudDriveServiceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the enterprise drive.
    shared_ptr<string> cdsId_ {};
    // The name of the cloud disk that is created in Cloud Drive Service.
    shared_ptr<string> cdsName_ {};
    // The ID of the CEN instance.
    // 
    // >  To allow end users to connect to cloud computers via virtual private clouds (VPCs), attach your office network to a CEN instance. The CEN instance connects to your on-premises network through VPN Gateway or Express Connect.
    shared_ptr<string> cenId_ {};
    // The existing enterprise drive or its order that conflicts with the enterprise drive being created.
    shared_ptr<CreateCloudDriveServiceResponseBody::ConflictCdsAndOrder> conflictCdsAndOrder_ {};
    // The domain name of the enterprise AD office network.
    shared_ptr<string> domainName_ {};
    // The error code.
    shared_ptr<string> errorCode_ {};
    // The maximum storage capacity of the enterprise drive. Unit: bytes.
    shared_ptr<string> maxSize_ {};
    // The type of the office network.
    // 
    // Valid values:
    // 
    // *   SIMPLE: convenience office network.
    // *   AD_CONNECTOR: enterprise AD office network.
    shared_ptr<string> officeSiteType_ {};
    // The ID of the order. You can obtain an order ID on the Orders page in the Expenses and Costs console.
    shared_ptr<string> orderId_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
