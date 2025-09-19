// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCECATALOGRESPONSEBODYVENDORS_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCECATALOGRESPONSEBODYVENDORS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListInstanceCatalogResponseBodyVendorsInstanceTypes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListInstanceCatalogResponseBodyVendors : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceCatalogResponseBodyVendors& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceTypes, instanceTypes_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceCatalogResponseBodyVendors& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceTypes, instanceTypes_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    ListInstanceCatalogResponseBodyVendors() = default ;
    ListInstanceCatalogResponseBodyVendors(const ListInstanceCatalogResponseBodyVendors &) = default ;
    ListInstanceCatalogResponseBodyVendors(ListInstanceCatalogResponseBodyVendors &&) = default ;
    ListInstanceCatalogResponseBodyVendors(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceCatalogResponseBodyVendors() = default ;
    ListInstanceCatalogResponseBodyVendors& operator=(const ListInstanceCatalogResponseBodyVendors &) = default ;
    ListInstanceCatalogResponseBodyVendors& operator=(ListInstanceCatalogResponseBodyVendors &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceTypes_ != nullptr
        && this->name_ != nullptr && this->value_ != nullptr; };
    // instanceTypes Field Functions 
    bool hasInstanceTypes() const { return this->instanceTypes_ != nullptr;};
    void deleteInstanceTypes() { this->instanceTypes_ = nullptr;};
    inline const vector<Models::ListInstanceCatalogResponseBodyVendorsInstanceTypes> & instanceTypes() const { DARABONBA_PTR_GET_CONST(instanceTypes_, vector<Models::ListInstanceCatalogResponseBodyVendorsInstanceTypes>) };
    inline vector<Models::ListInstanceCatalogResponseBodyVendorsInstanceTypes> instanceTypes() { DARABONBA_PTR_GET(instanceTypes_, vector<Models::ListInstanceCatalogResponseBodyVendorsInstanceTypes>) };
    inline ListInstanceCatalogResponseBodyVendors& setInstanceTypes(const vector<Models::ListInstanceCatalogResponseBodyVendorsInstanceTypes> & instanceTypes) { DARABONBA_PTR_SET_VALUE(instanceTypes_, instanceTypes) };
    inline ListInstanceCatalogResponseBodyVendors& setInstanceTypes(vector<Models::ListInstanceCatalogResponseBodyVendorsInstanceTypes> && instanceTypes) { DARABONBA_PTR_SET_RVALUE(instanceTypes_, instanceTypes) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListInstanceCatalogResponseBodyVendors& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline int32_t value() const { DARABONBA_PTR_GET_DEFAULT(value_, 0) };
    inline ListInstanceCatalogResponseBodyVendors& setValue(int32_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The asset types.
    std::shared_ptr<vector<Models::ListInstanceCatalogResponseBodyVendorsInstanceTypes>> instanceTypes_ = nullptr;
    // The name of the service provider.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the service provider type. Valid values:
    // 
    // *   **0**: an asset provided by Alibaba Cloud
    // *   **1**: an asset outside Alibaba Cloud
    // *   **2**: an asset in a data center
    // *   **3**, **4**, **5**, and **7**: an asset from a third-party cloud service provider
    // *   **8**: a lightweight cloud asset
    std::shared_ptr<int32_t> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
