// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCECATALOGRESPONSEBODYVENDORSINSTANCETYPES_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCECATALOGRESPONSEBODYVENDORSINSTANCETYPES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListInstanceCatalogResponseBodyVendorsInstanceTypesInstanceSubTypes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListInstanceCatalogResponseBodyVendorsInstanceTypes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceCatalogResponseBodyVendorsInstanceTypes& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceSubTypes, instanceSubTypes_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceCatalogResponseBodyVendorsInstanceTypes& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceSubTypes, instanceSubTypes_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    ListInstanceCatalogResponseBodyVendorsInstanceTypes() = default ;
    ListInstanceCatalogResponseBodyVendorsInstanceTypes(const ListInstanceCatalogResponseBodyVendorsInstanceTypes &) = default ;
    ListInstanceCatalogResponseBodyVendorsInstanceTypes(ListInstanceCatalogResponseBodyVendorsInstanceTypes &&) = default ;
    ListInstanceCatalogResponseBodyVendorsInstanceTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceCatalogResponseBodyVendorsInstanceTypes() = default ;
    ListInstanceCatalogResponseBodyVendorsInstanceTypes& operator=(const ListInstanceCatalogResponseBodyVendorsInstanceTypes &) = default ;
    ListInstanceCatalogResponseBodyVendorsInstanceTypes& operator=(ListInstanceCatalogResponseBodyVendorsInstanceTypes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceSubTypes_ == nullptr
        && return this->name_ == nullptr && return this->value_ == nullptr; };
    // instanceSubTypes Field Functions 
    bool hasInstanceSubTypes() const { return this->instanceSubTypes_ != nullptr;};
    void deleteInstanceSubTypes() { this->instanceSubTypes_ = nullptr;};
    inline const vector<Models::ListInstanceCatalogResponseBodyVendorsInstanceTypesInstanceSubTypes> & instanceSubTypes() const { DARABONBA_PTR_GET_CONST(instanceSubTypes_, vector<Models::ListInstanceCatalogResponseBodyVendorsInstanceTypesInstanceSubTypes>) };
    inline vector<Models::ListInstanceCatalogResponseBodyVendorsInstanceTypesInstanceSubTypes> instanceSubTypes() { DARABONBA_PTR_GET(instanceSubTypes_, vector<Models::ListInstanceCatalogResponseBodyVendorsInstanceTypesInstanceSubTypes>) };
    inline ListInstanceCatalogResponseBodyVendorsInstanceTypes& setInstanceSubTypes(const vector<Models::ListInstanceCatalogResponseBodyVendorsInstanceTypesInstanceSubTypes> & instanceSubTypes) { DARABONBA_PTR_SET_VALUE(instanceSubTypes_, instanceSubTypes) };
    inline ListInstanceCatalogResponseBodyVendorsInstanceTypes& setInstanceSubTypes(vector<Models::ListInstanceCatalogResponseBodyVendorsInstanceTypesInstanceSubTypes> && instanceSubTypes) { DARABONBA_PTR_SET_RVALUE(instanceSubTypes_, instanceSubTypes) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListInstanceCatalogResponseBodyVendorsInstanceTypes& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline int32_t value() const { DARABONBA_PTR_GET_DEFAULT(value_, 0) };
    inline ListInstanceCatalogResponseBodyVendorsInstanceTypes& setValue(int32_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The asset subtypes.
    std::shared_ptr<vector<Models::ListInstanceCatalogResponseBodyVendorsInstanceTypesInstanceSubTypes>> instanceSubTypes_ = nullptr;
    // The name of the asset type.
    std::shared_ptr<string> name_ = nullptr;
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
    std::shared_ptr<int32_t> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
