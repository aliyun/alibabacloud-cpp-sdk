// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCECATALOGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCECATALOGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListInstanceCatalogResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceCatalogResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Vendors, vendors_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceCatalogResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Vendors, vendors_);
    };
    ListInstanceCatalogResponseBody() = default ;
    ListInstanceCatalogResponseBody(const ListInstanceCatalogResponseBody &) = default ;
    ListInstanceCatalogResponseBody(ListInstanceCatalogResponseBody &&) = default ;
    ListInstanceCatalogResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceCatalogResponseBody() = default ;
    ListInstanceCatalogResponseBody& operator=(const ListInstanceCatalogResponseBody &) = default ;
    ListInstanceCatalogResponseBody& operator=(ListInstanceCatalogResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Vendors : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Vendors& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceTypes, instanceTypes_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Vendors& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceTypes, instanceTypes_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Vendors() = default ;
      Vendors(const Vendors &) = default ;
      Vendors(Vendors &&) = default ;
      Vendors(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Vendors() = default ;
      Vendors& operator=(const Vendors &) = default ;
      Vendors& operator=(Vendors &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class InstanceTypes : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InstanceTypes& obj) { 
          DARABONBA_PTR_TO_JSON(InstanceSubTypes, instanceSubTypes_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, InstanceTypes& obj) { 
          DARABONBA_PTR_FROM_JSON(InstanceSubTypes, instanceSubTypes_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        InstanceTypes() = default ;
        InstanceTypes(const InstanceTypes &) = default ;
        InstanceTypes(InstanceTypes &&) = default ;
        InstanceTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InstanceTypes() = default ;
        InstanceTypes& operator=(const InstanceTypes &) = default ;
        InstanceTypes& operator=(InstanceTypes &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class InstanceSubTypes : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const InstanceSubTypes& obj) { 
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, InstanceSubTypes& obj) { 
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          InstanceSubTypes() = default ;
          InstanceSubTypes(const InstanceSubTypes &) = default ;
          InstanceSubTypes(InstanceSubTypes &&) = default ;
          InstanceSubTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~InstanceSubTypes() = default ;
          InstanceSubTypes& operator=(const InstanceSubTypes &) = default ;
          InstanceSubTypes& operator=(InstanceSubTypes &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->name_ == nullptr
        && this->value_ == nullptr; };
          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline InstanceSubTypes& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline int32_t getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0) };
          inline InstanceSubTypes& setValue(int32_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The name of the asset subtype.
          shared_ptr<string> name_ {};
          // The ID of the asset subtype.
          shared_ptr<int32_t> value_ {};
        };

        virtual bool empty() const override { return this->instanceSubTypes_ == nullptr
        && this->name_ == nullptr && this->value_ == nullptr; };
        // instanceSubTypes Field Functions 
        bool hasInstanceSubTypes() const { return this->instanceSubTypes_ != nullptr;};
        void deleteInstanceSubTypes() { this->instanceSubTypes_ = nullptr;};
        inline const vector<InstanceTypes::InstanceSubTypes> & getInstanceSubTypes() const { DARABONBA_PTR_GET_CONST(instanceSubTypes_, vector<InstanceTypes::InstanceSubTypes>) };
        inline vector<InstanceTypes::InstanceSubTypes> getInstanceSubTypes() { DARABONBA_PTR_GET(instanceSubTypes_, vector<InstanceTypes::InstanceSubTypes>) };
        inline InstanceTypes& setInstanceSubTypes(const vector<InstanceTypes::InstanceSubTypes> & instanceSubTypes) { DARABONBA_PTR_SET_VALUE(instanceSubTypes_, instanceSubTypes) };
        inline InstanceTypes& setInstanceSubTypes(vector<InstanceTypes::InstanceSubTypes> && instanceSubTypes) { DARABONBA_PTR_SET_RVALUE(instanceSubTypes_, instanceSubTypes) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline InstanceTypes& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline int32_t getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0) };
        inline InstanceTypes& setValue(int32_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The asset subtypes.
        shared_ptr<vector<InstanceTypes::InstanceSubTypes>> instanceSubTypes_ {};
        // The name of the asset type.
        shared_ptr<string> name_ {};
        // The ID of the asset type. Valid values:
        // 
        // *   **0**: Elastic Compute Service (ECS)
        // *   **1**: Server Load Balancer (SLB)
        // *   **3**: ApsaraDB RDS
        // *   **4**: ApsaraDB for MongoDB (MongoDB)
        // *   **5**: Tair (Redis OSS-compatible)
        // *   **6**: Container Registry
        // *   **8**: Container Service for Kubernetes (ACK)
        // *   **9**: Virtual Private Cloud (VPC)
        // *   **11**: ActionTrail
        // *   **12**: Alibaba Cloud CDN (CDN)
        // *   **13**: Certificate Management Service (formerly SSL Certificates Service)
        // *   **14**: Alibaba Cloud DevOps
        // *   **15**: Resource Access Management (RAM)
        // *   **16**: Anti-DDoS
        // *   **17**: Web Application Firewall (WAF)
        // *   **18**: Object Storage Service (OSS)
        // *   **19**: PolarDB
        // *   **20**: ApsaraDB RDS for PostgreSQL
        // *   **21**: Microservices Engine (MSE)
        // *   **22**: Apsara File Storage NAS (NAS)
        // *   **23**: Data Security Center (DSC)
        // *   **24**: Elastic IP Address (EIP)
        // *   **25**: Identity as a Service (IDaaS) - Enterprise Identity Access Management (EIAM)
        // *   **26**: PolarDB for Xscale (PolarDB-X)
        // *   **27**: Elasticsearch
        shared_ptr<int32_t> value_ {};
      };

      virtual bool empty() const override { return this->instanceTypes_ == nullptr
        && this->name_ == nullptr && this->value_ == nullptr; };
      // instanceTypes Field Functions 
      bool hasInstanceTypes() const { return this->instanceTypes_ != nullptr;};
      void deleteInstanceTypes() { this->instanceTypes_ = nullptr;};
      inline const vector<Vendors::InstanceTypes> & getInstanceTypes() const { DARABONBA_PTR_GET_CONST(instanceTypes_, vector<Vendors::InstanceTypes>) };
      inline vector<Vendors::InstanceTypes> getInstanceTypes() { DARABONBA_PTR_GET(instanceTypes_, vector<Vendors::InstanceTypes>) };
      inline Vendors& setInstanceTypes(const vector<Vendors::InstanceTypes> & instanceTypes) { DARABONBA_PTR_SET_VALUE(instanceTypes_, instanceTypes) };
      inline Vendors& setInstanceTypes(vector<Vendors::InstanceTypes> && instanceTypes) { DARABONBA_PTR_SET_RVALUE(instanceTypes_, instanceTypes) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Vendors& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline int32_t getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0) };
      inline Vendors& setValue(int32_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The asset types.
      shared_ptr<vector<Vendors::InstanceTypes>> instanceTypes_ {};
      // The name of the service provider.
      shared_ptr<string> name_ {};
      // The ID of the service provider type. Valid values:
      // 
      // *   **0**: an asset provided by Alibaba Cloud
      // *   **1**: an asset outside Alibaba Cloud
      // *   **2**: an asset in a data center
      // *   **3**, **4**, **5**, and **7**: an asset from a third-party cloud service provider
      // *   **8**: a lightweight cloud asset
      shared_ptr<int32_t> value_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->vendors_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListInstanceCatalogResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vendors Field Functions 
    bool hasVendors() const { return this->vendors_ != nullptr;};
    void deleteVendors() { this->vendors_ = nullptr;};
    inline const vector<ListInstanceCatalogResponseBody::Vendors> & getVendors() const { DARABONBA_PTR_GET_CONST(vendors_, vector<ListInstanceCatalogResponseBody::Vendors>) };
    inline vector<ListInstanceCatalogResponseBody::Vendors> getVendors() { DARABONBA_PTR_GET(vendors_, vector<ListInstanceCatalogResponseBody::Vendors>) };
    inline ListInstanceCatalogResponseBody& setVendors(const vector<ListInstanceCatalogResponseBody::Vendors> & vendors) { DARABONBA_PTR_SET_VALUE(vendors_, vendors) };
    inline ListInstanceCatalogResponseBody& setVendors(vector<ListInstanceCatalogResponseBody::Vendors> && vendors) { DARABONBA_PTR_SET_RVALUE(vendors_, vendors) };


  protected:
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The asset types by service provider.
    shared_ptr<vector<ListInstanceCatalogResponseBody::Vendors>> vendors_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
