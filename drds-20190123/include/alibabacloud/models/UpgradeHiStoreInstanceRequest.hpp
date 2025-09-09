// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPGRADEHISTOREINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPGRADEHISTOREINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class UpgradeHiStoreInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpgradeHiStoreInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DrdsInstanceId, drdsInstanceId_);
      DARABONBA_PTR_TO_JSON(HistoreInstanceId, historeInstanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, UpgradeHiStoreInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DrdsInstanceId, drdsInstanceId_);
      DARABONBA_PTR_FROM_JSON(HistoreInstanceId, historeInstanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    UpgradeHiStoreInstanceRequest() = default ;
    UpgradeHiStoreInstanceRequest(const UpgradeHiStoreInstanceRequest &) = default ;
    UpgradeHiStoreInstanceRequest(UpgradeHiStoreInstanceRequest &&) = default ;
    UpgradeHiStoreInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpgradeHiStoreInstanceRequest() = default ;
    UpgradeHiStoreInstanceRequest& operator=(const UpgradeHiStoreInstanceRequest &) = default ;
    UpgradeHiStoreInstanceRequest& operator=(UpgradeHiStoreInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->drdsInstanceId_ != nullptr
        && this->historeInstanceId_ != nullptr && this->regionId_ != nullptr; };
    // drdsInstanceId Field Functions 
    bool hasDrdsInstanceId() const { return this->drdsInstanceId_ != nullptr;};
    void deleteDrdsInstanceId() { this->drdsInstanceId_ = nullptr;};
    inline string drdsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(drdsInstanceId_, "") };
    inline UpgradeHiStoreInstanceRequest& setDrdsInstanceId(string drdsInstanceId) { DARABONBA_PTR_SET_VALUE(drdsInstanceId_, drdsInstanceId) };


    // historeInstanceId Field Functions 
    bool hasHistoreInstanceId() const { return this->historeInstanceId_ != nullptr;};
    void deleteHistoreInstanceId() { this->historeInstanceId_ = nullptr;};
    inline string historeInstanceId() const { DARABONBA_PTR_GET_DEFAULT(historeInstanceId_, "") };
    inline UpgradeHiStoreInstanceRequest& setHistoreInstanceId(string historeInstanceId) { DARABONBA_PTR_SET_VALUE(historeInstanceId_, historeInstanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpgradeHiStoreInstanceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the PolarDB-X 1.0 instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> drdsInstanceId_ = nullptr;
    // The ID of the column-oriented storage instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> historeInstanceId_ = nullptr;
    // The ID of the region.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
