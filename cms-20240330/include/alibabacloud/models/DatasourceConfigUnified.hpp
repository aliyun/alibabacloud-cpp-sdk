// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATASOURCECONFIGUNIFIED_HPP_
#define ALIBABACLOUD_MODELS_DATASOURCECONFIGUNIFIED_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class DatasourceConfigUnified : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DatasourceConfigUnified& obj) { 
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(legacyRaw, legacyRaw_);
      DARABONBA_PTR_TO_JSON(legacyType, legacyType_);
      DARABONBA_PTR_TO_JSON(productCategory, productCategory_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DatasourceConfigUnified& obj) { 
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(legacyRaw, legacyRaw_);
      DARABONBA_PTR_FROM_JSON(legacyType, legacyType_);
      DARABONBA_PTR_FROM_JSON(productCategory, productCategory_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    DatasourceConfigUnified() = default ;
    DatasourceConfigUnified(const DatasourceConfigUnified &) = default ;
    DatasourceConfigUnified(DatasourceConfigUnified &&) = default ;
    DatasourceConfigUnified(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DatasourceConfigUnified() = default ;
    DatasourceConfigUnified& operator=(const DatasourceConfigUnified &) = default ;
    DatasourceConfigUnified& operator=(DatasourceConfigUnified &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->legacyRaw_ == nullptr && this->legacyType_ == nullptr && this->productCategory_ == nullptr && this->regionId_ == nullptr && this->type_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DatasourceConfigUnified& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // legacyRaw Field Functions 
    bool hasLegacyRaw() const { return this->legacyRaw_ != nullptr;};
    void deleteLegacyRaw() { this->legacyRaw_ = nullptr;};
    inline string getLegacyRaw() const { DARABONBA_PTR_GET_DEFAULT(legacyRaw_, "") };
    inline DatasourceConfigUnified& setLegacyRaw(string legacyRaw) { DARABONBA_PTR_SET_VALUE(legacyRaw_, legacyRaw) };


    // legacyType Field Functions 
    bool hasLegacyType() const { return this->legacyType_ != nullptr;};
    void deleteLegacyType() { this->legacyType_ = nullptr;};
    inline string getLegacyType() const { DARABONBA_PTR_GET_DEFAULT(legacyType_, "") };
    inline DatasourceConfigUnified& setLegacyType(string legacyType) { DARABONBA_PTR_SET_VALUE(legacyType_, legacyType) };


    // productCategory Field Functions 
    bool hasProductCategory() const { return this->productCategory_ != nullptr;};
    void deleteProductCategory() { this->productCategory_ = nullptr;};
    inline string getProductCategory() const { DARABONBA_PTR_GET_DEFAULT(productCategory_, "") };
    inline DatasourceConfigUnified& setProductCategory(string productCategory) { DARABONBA_PTR_SET_VALUE(productCategory_, productCategory) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DatasourceConfigUnified& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DatasourceConfigUnified& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The unique instance ID.
    shared_ptr<string> instanceId_ {};
    // The raw string value of the legacy configuration, used for backward compatibility.
    shared_ptr<string> legacyRaw_ {};
    // The legacy type of the data source, used for backward compatibility.
    shared_ptr<string> legacyType_ {};
    // The product category of the data source.
    shared_ptr<string> productCategory_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The type of the data source.
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
