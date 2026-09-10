// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDMETADATACOMPONENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDMETADATACOMPONENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LHM20250116
{
namespace Models
{
  class AddMetaDataComponentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddMetaDataComponentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(categoryType, categoryType_);
      DARABONBA_PTR_TO_JSON(componentType, componentType_);
      DARABONBA_PTR_TO_JSON(dsConfig, dsConfig_);
      DARABONBA_PTR_TO_JSON(dsDesc, dsDesc_);
      DARABONBA_PTR_TO_JSON(dsId, dsId_);
      DARABONBA_PTR_TO_JSON(dsName, dsName_);
      DARABONBA_PTR_TO_JSON(dsStatus, dsStatus_);
      DARABONBA_PTR_TO_JSON(dsType, dsType_);
      DARABONBA_PTR_TO_JSON(dsVersion, dsVersion_);
    };
    friend void from_json(const Darabonba::Json& j, AddMetaDataComponentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(categoryType, categoryType_);
      DARABONBA_PTR_FROM_JSON(componentType, componentType_);
      DARABONBA_PTR_FROM_JSON(dsConfig, dsConfig_);
      DARABONBA_PTR_FROM_JSON(dsDesc, dsDesc_);
      DARABONBA_PTR_FROM_JSON(dsId, dsId_);
      DARABONBA_PTR_FROM_JSON(dsName, dsName_);
      DARABONBA_PTR_FROM_JSON(dsStatus, dsStatus_);
      DARABONBA_PTR_FROM_JSON(dsType, dsType_);
      DARABONBA_PTR_FROM_JSON(dsVersion, dsVersion_);
    };
    AddMetaDataComponentRequest() = default ;
    AddMetaDataComponentRequest(const AddMetaDataComponentRequest &) = default ;
    AddMetaDataComponentRequest(AddMetaDataComponentRequest &&) = default ;
    AddMetaDataComponentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddMetaDataComponentRequest() = default ;
    AddMetaDataComponentRequest& operator=(const AddMetaDataComponentRequest &) = default ;
    AddMetaDataComponentRequest& operator=(AddMetaDataComponentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->categoryType_ == nullptr
        && this->componentType_ == nullptr && this->dsConfig_ == nullptr && this->dsDesc_ == nullptr && this->dsId_ == nullptr && this->dsName_ == nullptr
        && this->dsStatus_ == nullptr && this->dsType_ == nullptr && this->dsVersion_ == nullptr; };
    // categoryType Field Functions 
    bool hasCategoryType() const { return this->categoryType_ != nullptr;};
    void deleteCategoryType() { this->categoryType_ = nullptr;};
    inline string getCategoryType() const { DARABONBA_PTR_GET_DEFAULT(categoryType_, "") };
    inline AddMetaDataComponentRequest& setCategoryType(string categoryType) { DARABONBA_PTR_SET_VALUE(categoryType_, categoryType) };


    // componentType Field Functions 
    bool hasComponentType() const { return this->componentType_ != nullptr;};
    void deleteComponentType() { this->componentType_ = nullptr;};
    inline int32_t getComponentType() const { DARABONBA_PTR_GET_DEFAULT(componentType_, 0) };
    inline AddMetaDataComponentRequest& setComponentType(int32_t componentType) { DARABONBA_PTR_SET_VALUE(componentType_, componentType) };


    // dsConfig Field Functions 
    bool hasDsConfig() const { return this->dsConfig_ != nullptr;};
    void deleteDsConfig() { this->dsConfig_ = nullptr;};
    inline string getDsConfig() const { DARABONBA_PTR_GET_DEFAULT(dsConfig_, "") };
    inline AddMetaDataComponentRequest& setDsConfig(string dsConfig) { DARABONBA_PTR_SET_VALUE(dsConfig_, dsConfig) };


    // dsDesc Field Functions 
    bool hasDsDesc() const { return this->dsDesc_ != nullptr;};
    void deleteDsDesc() { this->dsDesc_ = nullptr;};
    inline string getDsDesc() const { DARABONBA_PTR_GET_DEFAULT(dsDesc_, "") };
    inline AddMetaDataComponentRequest& setDsDesc(string dsDesc) { DARABONBA_PTR_SET_VALUE(dsDesc_, dsDesc) };


    // dsId Field Functions 
    bool hasDsId() const { return this->dsId_ != nullptr;};
    void deleteDsId() { this->dsId_ = nullptr;};
    inline string getDsId() const { DARABONBA_PTR_GET_DEFAULT(dsId_, "") };
    inline AddMetaDataComponentRequest& setDsId(string dsId) { DARABONBA_PTR_SET_VALUE(dsId_, dsId) };


    // dsName Field Functions 
    bool hasDsName() const { return this->dsName_ != nullptr;};
    void deleteDsName() { this->dsName_ = nullptr;};
    inline string getDsName() const { DARABONBA_PTR_GET_DEFAULT(dsName_, "") };
    inline AddMetaDataComponentRequest& setDsName(string dsName) { DARABONBA_PTR_SET_VALUE(dsName_, dsName) };


    // dsStatus Field Functions 
    bool hasDsStatus() const { return this->dsStatus_ != nullptr;};
    void deleteDsStatus() { this->dsStatus_ = nullptr;};
    inline int32_t getDsStatus() const { DARABONBA_PTR_GET_DEFAULT(dsStatus_, 0) };
    inline AddMetaDataComponentRequest& setDsStatus(int32_t dsStatus) { DARABONBA_PTR_SET_VALUE(dsStatus_, dsStatus) };


    // dsType Field Functions 
    bool hasDsType() const { return this->dsType_ != nullptr;};
    void deleteDsType() { this->dsType_ = nullptr;};
    inline string getDsType() const { DARABONBA_PTR_GET_DEFAULT(dsType_, "") };
    inline AddMetaDataComponentRequest& setDsType(string dsType) { DARABONBA_PTR_SET_VALUE(dsType_, dsType) };


    // dsVersion Field Functions 
    bool hasDsVersion() const { return this->dsVersion_ != nullptr;};
    void deleteDsVersion() { this->dsVersion_ = nullptr;};
    inline string getDsVersion() const { DARABONBA_PTR_GET_DEFAULT(dsVersion_, "") };
    inline AddMetaDataComponentRequest& setDsVersion(string dsVersion) { DARABONBA_PTR_SET_VALUE(dsVersion_, dsVersion) };


  protected:
    // The data source category. Valid values: DATASET, WORKFLOW, ENGINE.
    shared_ptr<string> categoryType_ {};
    // The role of the data source in the migration pipeline. Valid values:
    // - 0: source.
    // - 1: destination.
    shared_ptr<int32_t> componentType_ {};
    // The datasource config.
    shared_ptr<string> dsConfig_ {};
    // The description of the data source.
    shared_ptr<string> dsDesc_ {};
    // The external ID of the data source.
    shared_ptr<string> dsId_ {};
    // The name of the data source.
    shared_ptr<string> dsName_ {};
    // The connectivity status of the data source.
    shared_ptr<int32_t> dsStatus_ {};
    // The type of the data source.
    shared_ptr<string> dsType_ {};
    // The version of the data source.
    shared_ptr<string> dsVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LHM20250116
#endif
