// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEREGISTEREDLOCATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEREGISTEREDLOCATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class UpdateRegisteredLocationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRegisteredLocationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InventoryCollectEnabled, inventoryCollectEnabled_);
      DARABONBA_PTR_TO_JSON(LocationId, locationId_);
      DARABONBA_PTR_TO_JSON(OssLogCollectEnabled, ossLogCollectEnabled_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRegisteredLocationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InventoryCollectEnabled, inventoryCollectEnabled_);
      DARABONBA_PTR_FROM_JSON(LocationId, locationId_);
      DARABONBA_PTR_FROM_JSON(OssLogCollectEnabled, ossLogCollectEnabled_);
    };
    UpdateRegisteredLocationRequest() = default ;
    UpdateRegisteredLocationRequest(const UpdateRegisteredLocationRequest &) = default ;
    UpdateRegisteredLocationRequest(UpdateRegisteredLocationRequest &&) = default ;
    UpdateRegisteredLocationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRegisteredLocationRequest() = default ;
    UpdateRegisteredLocationRequest& operator=(const UpdateRegisteredLocationRequest &) = default ;
    UpdateRegisteredLocationRequest& operator=(UpdateRegisteredLocationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->inventoryCollectEnabled_ == nullptr
        && return this->locationId_ == nullptr && return this->ossLogCollectEnabled_ == nullptr; };
    // inventoryCollectEnabled Field Functions 
    bool hasInventoryCollectEnabled() const { return this->inventoryCollectEnabled_ != nullptr;};
    void deleteInventoryCollectEnabled() { this->inventoryCollectEnabled_ = nullptr;};
    inline bool inventoryCollectEnabled() const { DARABONBA_PTR_GET_DEFAULT(inventoryCollectEnabled_, false) };
    inline UpdateRegisteredLocationRequest& setInventoryCollectEnabled(bool inventoryCollectEnabled) { DARABONBA_PTR_SET_VALUE(inventoryCollectEnabled_, inventoryCollectEnabled) };


    // locationId Field Functions 
    bool hasLocationId() const { return this->locationId_ != nullptr;};
    void deleteLocationId() { this->locationId_ = nullptr;};
    inline string locationId() const { DARABONBA_PTR_GET_DEFAULT(locationId_, "") };
    inline UpdateRegisteredLocationRequest& setLocationId(string locationId) { DARABONBA_PTR_SET_VALUE(locationId_, locationId) };


    // ossLogCollectEnabled Field Functions 
    bool hasOssLogCollectEnabled() const { return this->ossLogCollectEnabled_ != nullptr;};
    void deleteOssLogCollectEnabled() { this->ossLogCollectEnabled_ = nullptr;};
    inline bool ossLogCollectEnabled() const { DARABONBA_PTR_GET_DEFAULT(ossLogCollectEnabled_, false) };
    inline UpdateRegisteredLocationRequest& setOssLogCollectEnabled(bool ossLogCollectEnabled) { DARABONBA_PTR_SET_VALUE(ossLogCollectEnabled_, ossLogCollectEnabled) };


  protected:
    // Whether to enable OSS bucket inventory
    std::shared_ptr<bool> inventoryCollectEnabled_ = nullptr;
    // Location ID
    // 
    // >  You can call the RegisterLocation operation to obtain the Location ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> locationId_ = nullptr;
    // Whether to enable OSS log storage
    std::shared_ptr<bool> ossLogCollectEnabled_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
