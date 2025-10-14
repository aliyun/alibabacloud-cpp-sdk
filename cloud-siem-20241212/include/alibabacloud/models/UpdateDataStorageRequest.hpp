// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATASTORAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATASTORAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class UpdateDataStorageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDataStorageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataStorageRegionId, dataStorageRegionId_);
      DARABONBA_PTR_TO_JSON(DeliveryStatus, deliveryStatus_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDataStorageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataStorageRegionId, dataStorageRegionId_);
      DARABONBA_PTR_FROM_JSON(DeliveryStatus, deliveryStatus_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
    };
    UpdateDataStorageRequest() = default ;
    UpdateDataStorageRequest(const UpdateDataStorageRequest &) = default ;
    UpdateDataStorageRequest(UpdateDataStorageRequest &&) = default ;
    UpdateDataStorageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDataStorageRequest() = default ;
    UpdateDataStorageRequest& operator=(const UpdateDataStorageRequest &) = default ;
    UpdateDataStorageRequest& operator=(UpdateDataStorageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataStorageRegionId_ == nullptr
        && return this->deliveryStatus_ == nullptr && return this->lang_ == nullptr && return this->regionId_ == nullptr && return this->roleFor_ == nullptr; };
    // dataStorageRegionId Field Functions 
    bool hasDataStorageRegionId() const { return this->dataStorageRegionId_ != nullptr;};
    void deleteDataStorageRegionId() { this->dataStorageRegionId_ = nullptr;};
    inline string dataStorageRegionId() const { DARABONBA_PTR_GET_DEFAULT(dataStorageRegionId_, "") };
    inline UpdateDataStorageRequest& setDataStorageRegionId(string dataStorageRegionId) { DARABONBA_PTR_SET_VALUE(dataStorageRegionId_, dataStorageRegionId) };


    // deliveryStatus Field Functions 
    bool hasDeliveryStatus() const { return this->deliveryStatus_ != nullptr;};
    void deleteDeliveryStatus() { this->deliveryStatus_ = nullptr;};
    inline string deliveryStatus() const { DARABONBA_PTR_GET_DEFAULT(deliveryStatus_, "") };
    inline UpdateDataStorageRequest& setDeliveryStatus(string deliveryStatus) { DARABONBA_PTR_SET_VALUE(deliveryStatus_, deliveryStatus) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline UpdateDataStorageRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateDataStorageRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t roleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline UpdateDataStorageRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> dataStorageRegionId_ = nullptr;
    std::shared_ptr<string> deliveryStatus_ = nullptr;
    std::shared_ptr<string> lang_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<int64_t> roleFor_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
