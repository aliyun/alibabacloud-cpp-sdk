// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATASTORAGEITEM_HPP_
#define ALIBABACLOUD_MODELS_DATASTORAGEITEM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class DataStorageItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DataStorageItem& obj) { 
      DARABONBA_PTR_TO_JSON(dataType, dataType_);
      DARABONBA_PTR_TO_JSON(project, project_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(storeName, storeName_);
      DARABONBA_PTR_TO_JSON(storeType, storeType_);
    };
    friend void from_json(const Darabonba::Json& j, DataStorageItem& obj) { 
      DARABONBA_PTR_FROM_JSON(dataType, dataType_);
      DARABONBA_PTR_FROM_JSON(project, project_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(storeName, storeName_);
      DARABONBA_PTR_FROM_JSON(storeType, storeType_);
    };
    DataStorageItem() = default ;
    DataStorageItem(const DataStorageItem &) = default ;
    DataStorageItem(DataStorageItem &&) = default ;
    DataStorageItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DataStorageItem() = default ;
    DataStorageItem& operator=(const DataStorageItem &) = default ;
    DataStorageItem& operator=(DataStorageItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataType_ != nullptr
        && this->project_ != nullptr && this->regionId_ != nullptr && this->storeName_ != nullptr && this->storeType_ != nullptr; };
    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline string dataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
    inline DataStorageItem& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // project Field Functions 
    bool hasProject() const { return this->project_ != nullptr;};
    void deleteProject() { this->project_ = nullptr;};
    inline string project() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
    inline DataStorageItem& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DataStorageItem& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // storeName Field Functions 
    bool hasStoreName() const { return this->storeName_ != nullptr;};
    void deleteStoreName() { this->storeName_ = nullptr;};
    inline string storeName() const { DARABONBA_PTR_GET_DEFAULT(storeName_, "") };
    inline DataStorageItem& setStoreName(string storeName) { DARABONBA_PTR_SET_VALUE(storeName_, storeName) };


    // storeType Field Functions 
    bool hasStoreType() const { return this->storeType_ != nullptr;};
    void deleteStoreType() { this->storeType_ = nullptr;};
    inline string storeType() const { DARABONBA_PTR_GET_DEFAULT(storeType_, "") };
    inline DataStorageItem& setStoreType(string storeType) { DARABONBA_PTR_SET_VALUE(storeType_, storeType) };


  protected:
    std::shared_ptr<string> dataType_ = nullptr;
    std::shared_ptr<string> project_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> storeName_ = nullptr;
    std::shared_ptr<string> storeType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
