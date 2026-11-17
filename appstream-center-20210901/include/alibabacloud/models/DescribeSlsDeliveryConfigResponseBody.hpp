// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESLSDELIVERYCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESLSDELIVERYCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class DescribeSlsDeliveryConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSlsDeliveryConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DeliveryConfigs, deliveryConfigs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSlsDeliveryConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DeliveryConfigs, deliveryConfigs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeSlsDeliveryConfigResponseBody() = default ;
    DescribeSlsDeliveryConfigResponseBody(const DescribeSlsDeliveryConfigResponseBody &) = default ;
    DescribeSlsDeliveryConfigResponseBody(DescribeSlsDeliveryConfigResponseBody &&) = default ;
    DescribeSlsDeliveryConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSlsDeliveryConfigResponseBody() = default ;
    DescribeSlsDeliveryConfigResponseBody& operator=(const DescribeSlsDeliveryConfigResponseBody &) = default ;
    DescribeSlsDeliveryConfigResponseBody& operator=(DescribeSlsDeliveryConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DeliveryConfigs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DeliveryConfigs& obj) { 
        DARABONBA_PTR_TO_JSON(LogStores, logStores_);
        DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
        DARABONBA_PTR_TO_JSON(SlsRegionId, slsRegionId_);
      };
      friend void from_json(const Darabonba::Json& j, DeliveryConfigs& obj) { 
        DARABONBA_PTR_FROM_JSON(LogStores, logStores_);
        DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
        DARABONBA_PTR_FROM_JSON(SlsRegionId, slsRegionId_);
      };
      DeliveryConfigs() = default ;
      DeliveryConfigs(const DeliveryConfigs &) = default ;
      DeliveryConfigs(DeliveryConfigs &&) = default ;
      DeliveryConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DeliveryConfigs() = default ;
      DeliveryConfigs& operator=(const DeliveryConfigs &) = default ;
      DeliveryConfigs& operator=(DeliveryConfigs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class LogStores : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LogStores& obj) { 
          DARABONBA_PTR_TO_JSON(DeliveryScopes, deliveryScopes_);
          DARABONBA_PTR_TO_JSON(LogStoreName, logStoreName_);
          DARABONBA_PTR_TO_JSON(Ttl, ttl_);
        };
        friend void from_json(const Darabonba::Json& j, LogStores& obj) { 
          DARABONBA_PTR_FROM_JSON(DeliveryScopes, deliveryScopes_);
          DARABONBA_PTR_FROM_JSON(LogStoreName, logStoreName_);
          DARABONBA_PTR_FROM_JSON(Ttl, ttl_);
        };
        LogStores() = default ;
        LogStores(const LogStores &) = default ;
        LogStores(LogStores &&) = default ;
        LogStores(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LogStores() = default ;
        LogStores& operator=(const LogStores &) = default ;
        LogStores& operator=(LogStores &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class DeliveryScopes : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DeliveryScopes& obj) { 
            DARABONBA_PTR_TO_JSON(ProductType, productType_);
            DARABONBA_PTR_TO_JSON(Status, status_);
          };
          friend void from_json(const Darabonba::Json& j, DeliveryScopes& obj) { 
            DARABONBA_PTR_FROM_JSON(ProductType, productType_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
          };
          DeliveryScopes() = default ;
          DeliveryScopes(const DeliveryScopes &) = default ;
          DeliveryScopes(DeliveryScopes &&) = default ;
          DeliveryScopes(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DeliveryScopes() = default ;
          DeliveryScopes& operator=(const DeliveryScopes &) = default ;
          DeliveryScopes& operator=(DeliveryScopes &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->productType_ == nullptr
        && this->status_ == nullptr; };
          // productType Field Functions 
          bool hasProductType() const { return this->productType_ != nullptr;};
          void deleteProductType() { this->productType_ = nullptr;};
          inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
          inline DeliveryScopes& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
          inline DeliveryScopes& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        protected:
          // The product type of the delivery scope. For example, `WuyingServer` indicates Enterprise Edition workstations.
          shared_ptr<string> productType_ {};
          // The current status of the delivery configuration. Valid values:
          // - `Stopped`: Delivery is stopped.
          // - `Enabled`: Delivery is enabled.
          // - `AbnormalLogstoreDeleted`: The destination Logstore is deleted, and delivery is abnormal.
          // - `AbnormalProjectDeleted`: The destination project is deleted, and delivery is abnormal.
          shared_ptr<string> status_ {};
        };

        virtual bool empty() const override { return this->deliveryScopes_ == nullptr
        && this->logStoreName_ == nullptr && this->ttl_ == nullptr; };
        // deliveryScopes Field Functions 
        bool hasDeliveryScopes() const { return this->deliveryScopes_ != nullptr;};
        void deleteDeliveryScopes() { this->deliveryScopes_ = nullptr;};
        inline const vector<LogStores::DeliveryScopes> & getDeliveryScopes() const { DARABONBA_PTR_GET_CONST(deliveryScopes_, vector<LogStores::DeliveryScopes>) };
        inline vector<LogStores::DeliveryScopes> getDeliveryScopes() { DARABONBA_PTR_GET(deliveryScopes_, vector<LogStores::DeliveryScopes>) };
        inline LogStores& setDeliveryScopes(const vector<LogStores::DeliveryScopes> & deliveryScopes) { DARABONBA_PTR_SET_VALUE(deliveryScopes_, deliveryScopes) };
        inline LogStores& setDeliveryScopes(vector<LogStores::DeliveryScopes> && deliveryScopes) { DARABONBA_PTR_SET_RVALUE(deliveryScopes_, deliveryScopes) };


        // logStoreName Field Functions 
        bool hasLogStoreName() const { return this->logStoreName_ != nullptr;};
        void deleteLogStoreName() { this->logStoreName_ = nullptr;};
        inline string getLogStoreName() const { DARABONBA_PTR_GET_DEFAULT(logStoreName_, "") };
        inline LogStores& setLogStoreName(string logStoreName) { DARABONBA_PTR_SET_VALUE(logStoreName_, logStoreName) };


        // ttl Field Functions 
        bool hasTtl() const { return this->ttl_ != nullptr;};
        void deleteTtl() { this->ttl_ = nullptr;};
        inline int32_t getTtl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, 0) };
        inline LogStores& setTtl(int32_t ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


      protected:
        // The product delivery scopes of the Logstore and the delivery status of each scope.
        shared_ptr<vector<LogStores::DeliveryScopes>> deliveryScopes_ {};
        // The name of the destination SLS Logstore.
        shared_ptr<string> logStoreName_ {};
        // The data retention period configured for the destination Logstore, in days.
        shared_ptr<int32_t> ttl_ {};
      };

      virtual bool empty() const override { return this->logStores_ == nullptr
        && this->projectName_ == nullptr && this->slsRegionId_ == nullptr; };
      // logStores Field Functions 
      bool hasLogStores() const { return this->logStores_ != nullptr;};
      void deleteLogStores() { this->logStores_ = nullptr;};
      inline const vector<DeliveryConfigs::LogStores> & getLogStores() const { DARABONBA_PTR_GET_CONST(logStores_, vector<DeliveryConfigs::LogStores>) };
      inline vector<DeliveryConfigs::LogStores> getLogStores() { DARABONBA_PTR_GET(logStores_, vector<DeliveryConfigs::LogStores>) };
      inline DeliveryConfigs& setLogStores(const vector<DeliveryConfigs::LogStores> & logStores) { DARABONBA_PTR_SET_VALUE(logStores_, logStores) };
      inline DeliveryConfigs& setLogStores(vector<DeliveryConfigs::LogStores> && logStores) { DARABONBA_PTR_SET_RVALUE(logStores_, logStores) };


      // projectName Field Functions 
      bool hasProjectName() const { return this->projectName_ != nullptr;};
      void deleteProjectName() { this->projectName_ = nullptr;};
      inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
      inline DeliveryConfigs& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


      // slsRegionId Field Functions 
      bool hasSlsRegionId() const { return this->slsRegionId_ != nullptr;};
      void deleteSlsRegionId() { this->slsRegionId_ = nullptr;};
      inline string getSlsRegionId() const { DARABONBA_PTR_GET_DEFAULT(slsRegionId_, "") };
      inline DeliveryConfigs& setSlsRegionId(string slsRegionId) { DARABONBA_PTR_SET_VALUE(slsRegionId_, slsRegionId) };


    protected:
      // The list of Logstore delivery configurations under the project.
      shared_ptr<vector<DeliveryConfigs::LogStores>> logStores_ {};
      // The name of the destination SLS project.
      shared_ptr<string> projectName_ {};
      // The ID of the region where the destination SLS project is located.
      shared_ptr<string> slsRegionId_ {};
    };

    virtual bool empty() const override { return this->deliveryConfigs_ == nullptr
        && this->requestId_ == nullptr; };
    // deliveryConfigs Field Functions 
    bool hasDeliveryConfigs() const { return this->deliveryConfigs_ != nullptr;};
    void deleteDeliveryConfigs() { this->deliveryConfigs_ = nullptr;};
    inline const vector<DescribeSlsDeliveryConfigResponseBody::DeliveryConfigs> & getDeliveryConfigs() const { DARABONBA_PTR_GET_CONST(deliveryConfigs_, vector<DescribeSlsDeliveryConfigResponseBody::DeliveryConfigs>) };
    inline vector<DescribeSlsDeliveryConfigResponseBody::DeliveryConfigs> getDeliveryConfigs() { DARABONBA_PTR_GET(deliveryConfigs_, vector<DescribeSlsDeliveryConfigResponseBody::DeliveryConfigs>) };
    inline DescribeSlsDeliveryConfigResponseBody& setDeliveryConfigs(const vector<DescribeSlsDeliveryConfigResponseBody::DeliveryConfigs> & deliveryConfigs) { DARABONBA_PTR_SET_VALUE(deliveryConfigs_, deliveryConfigs) };
    inline DescribeSlsDeliveryConfigResponseBody& setDeliveryConfigs(vector<DescribeSlsDeliveryConfigResponseBody::DeliveryConfigs> && deliveryConfigs) { DARABONBA_PTR_SET_RVALUE(deliveryConfigs_, deliveryConfigs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSlsDeliveryConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of delivery configurations that match the filter conditions. If no configurations match the conditions, an empty list is returned.
    shared_ptr<vector<DescribeSlsDeliveryConfigResponseBody::DeliveryConfigs>> deliveryConfigs_ {};
    // The request ID used to locate the current call.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
