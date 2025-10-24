// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROJECTRESPONSEBODYDATAPROPERTIESEXTERNALPROJECTPROPERTIES_HPP_
#define ALIBABACLOUD_MODELS_GETPROJECTRESPONSEBODYDATAPROPERTIESEXTERNALPROJECTPROPERTIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class GetProjectResponseBodyDataPropertiesExternalProjectProperties : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetProjectResponseBodyDataPropertiesExternalProjectProperties& obj) { 
      DARABONBA_PTR_TO_JSON(externalCatalogId, externalCatalogId_);
      DARABONBA_PTR_TO_JSON(foreignServerName, foreignServerName_);
      DARABONBA_PTR_TO_JSON(foreignServerType, foreignServerType_);
      DARABONBA_PTR_TO_JSON(isExternalCatalogBound, isExternalCatalogBound_);
      DARABONBA_PTR_TO_JSON(tableFormat, tableFormat_);
      DARABONBA_PTR_TO_JSON(warehouse, warehouse_);
    };
    friend void from_json(const Darabonba::Json& j, GetProjectResponseBodyDataPropertiesExternalProjectProperties& obj) { 
      DARABONBA_PTR_FROM_JSON(externalCatalogId, externalCatalogId_);
      DARABONBA_PTR_FROM_JSON(foreignServerName, foreignServerName_);
      DARABONBA_PTR_FROM_JSON(foreignServerType, foreignServerType_);
      DARABONBA_PTR_FROM_JSON(isExternalCatalogBound, isExternalCatalogBound_);
      DARABONBA_PTR_FROM_JSON(tableFormat, tableFormat_);
      DARABONBA_PTR_FROM_JSON(warehouse, warehouse_);
    };
    GetProjectResponseBodyDataPropertiesExternalProjectProperties() = default ;
    GetProjectResponseBodyDataPropertiesExternalProjectProperties(const GetProjectResponseBodyDataPropertiesExternalProjectProperties &) = default ;
    GetProjectResponseBodyDataPropertiesExternalProjectProperties(GetProjectResponseBodyDataPropertiesExternalProjectProperties &&) = default ;
    GetProjectResponseBodyDataPropertiesExternalProjectProperties(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetProjectResponseBodyDataPropertiesExternalProjectProperties() = default ;
    GetProjectResponseBodyDataPropertiesExternalProjectProperties& operator=(const GetProjectResponseBodyDataPropertiesExternalProjectProperties &) = default ;
    GetProjectResponseBodyDataPropertiesExternalProjectProperties& operator=(GetProjectResponseBodyDataPropertiesExternalProjectProperties &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->externalCatalogId_ == nullptr
        && return this->foreignServerName_ == nullptr && return this->foreignServerType_ == nullptr && return this->isExternalCatalogBound_ == nullptr && return this->tableFormat_ == nullptr && return this->warehouse_ == nullptr; };
    // externalCatalogId Field Functions 
    bool hasExternalCatalogId() const { return this->externalCatalogId_ != nullptr;};
    void deleteExternalCatalogId() { this->externalCatalogId_ = nullptr;};
    inline string externalCatalogId() const { DARABONBA_PTR_GET_DEFAULT(externalCatalogId_, "") };
    inline GetProjectResponseBodyDataPropertiesExternalProjectProperties& setExternalCatalogId(string externalCatalogId) { DARABONBA_PTR_SET_VALUE(externalCatalogId_, externalCatalogId) };


    // foreignServerName Field Functions 
    bool hasForeignServerName() const { return this->foreignServerName_ != nullptr;};
    void deleteForeignServerName() { this->foreignServerName_ = nullptr;};
    inline string foreignServerName() const { DARABONBA_PTR_GET_DEFAULT(foreignServerName_, "") };
    inline GetProjectResponseBodyDataPropertiesExternalProjectProperties& setForeignServerName(string foreignServerName) { DARABONBA_PTR_SET_VALUE(foreignServerName_, foreignServerName) };


    // foreignServerType Field Functions 
    bool hasForeignServerType() const { return this->foreignServerType_ != nullptr;};
    void deleteForeignServerType() { this->foreignServerType_ = nullptr;};
    inline string foreignServerType() const { DARABONBA_PTR_GET_DEFAULT(foreignServerType_, "") };
    inline GetProjectResponseBodyDataPropertiesExternalProjectProperties& setForeignServerType(string foreignServerType) { DARABONBA_PTR_SET_VALUE(foreignServerType_, foreignServerType) };


    // isExternalCatalogBound Field Functions 
    bool hasIsExternalCatalogBound() const { return this->isExternalCatalogBound_ != nullptr;};
    void deleteIsExternalCatalogBound() { this->isExternalCatalogBound_ = nullptr;};
    inline string isExternalCatalogBound() const { DARABONBA_PTR_GET_DEFAULT(isExternalCatalogBound_, "") };
    inline GetProjectResponseBodyDataPropertiesExternalProjectProperties& setIsExternalCatalogBound(string isExternalCatalogBound) { DARABONBA_PTR_SET_VALUE(isExternalCatalogBound_, isExternalCatalogBound) };


    // tableFormat Field Functions 
    bool hasTableFormat() const { return this->tableFormat_ != nullptr;};
    void deleteTableFormat() { this->tableFormat_ = nullptr;};
    inline string tableFormat() const { DARABONBA_PTR_GET_DEFAULT(tableFormat_, "") };
    inline GetProjectResponseBodyDataPropertiesExternalProjectProperties& setTableFormat(string tableFormat) { DARABONBA_PTR_SET_VALUE(tableFormat_, tableFormat) };


    // warehouse Field Functions 
    bool hasWarehouse() const { return this->warehouse_ != nullptr;};
    void deleteWarehouse() { this->warehouse_ = nullptr;};
    inline string warehouse() const { DARABONBA_PTR_GET_DEFAULT(warehouse_, "") };
    inline GetProjectResponseBodyDataPropertiesExternalProjectProperties& setWarehouse(string warehouse) { DARABONBA_PTR_SET_VALUE(warehouse_, warehouse) };


  protected:
    std::shared_ptr<string> externalCatalogId_ = nullptr;
    std::shared_ptr<string> foreignServerName_ = nullptr;
    std::shared_ptr<string> foreignServerType_ = nullptr;
    // Indicates whether the external project is an external project for [data lakehouse solution 2.0](https://www.alibabacloud.com/help/zh/maxcompute/user-guide/lake-warehouse-integrated-2-0-use-guide).
    std::shared_ptr<string> isExternalCatalogBound_ = nullptr;
    std::shared_ptr<string> tableFormat_ = nullptr;
    std::shared_ptr<string> warehouse_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
