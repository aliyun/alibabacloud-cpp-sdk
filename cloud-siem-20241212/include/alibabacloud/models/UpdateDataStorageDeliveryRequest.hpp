// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATASTORAGEDELIVERYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATASTORAGEDELIVERYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class UpdateDataStorageDeliveryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDataStorageDeliveryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(LogCode, logCode_);
      DARABONBA_PTR_TO_JSON(LogDeliveryStatus, logDeliveryStatus_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDataStorageDeliveryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(LogCode, logCode_);
      DARABONBA_PTR_FROM_JSON(LogDeliveryStatus, logDeliveryStatus_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
    };
    UpdateDataStorageDeliveryRequest() = default ;
    UpdateDataStorageDeliveryRequest(const UpdateDataStorageDeliveryRequest &) = default ;
    UpdateDataStorageDeliveryRequest(UpdateDataStorageDeliveryRequest &&) = default ;
    UpdateDataStorageDeliveryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDataStorageDeliveryRequest() = default ;
    UpdateDataStorageDeliveryRequest& operator=(const UpdateDataStorageDeliveryRequest &) = default ;
    UpdateDataStorageDeliveryRequest& operator=(UpdateDataStorageDeliveryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->logCode_ == nullptr && this->logDeliveryStatus_ == nullptr && this->regionId_ == nullptr && this->roleFor_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline UpdateDataStorageDeliveryRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // logCode Field Functions 
    bool hasLogCode() const { return this->logCode_ != nullptr;};
    void deleteLogCode() { this->logCode_ = nullptr;};
    inline string getLogCode() const { DARABONBA_PTR_GET_DEFAULT(logCode_, "") };
    inline UpdateDataStorageDeliveryRequest& setLogCode(string logCode) { DARABONBA_PTR_SET_VALUE(logCode_, logCode) };


    // logDeliveryStatus Field Functions 
    bool hasLogDeliveryStatus() const { return this->logDeliveryStatus_ != nullptr;};
    void deleteLogDeliveryStatus() { this->logDeliveryStatus_ = nullptr;};
    inline string getLogDeliveryStatus() const { DARABONBA_PTR_GET_DEFAULT(logDeliveryStatus_, "") };
    inline UpdateDataStorageDeliveryRequest& setLogDeliveryStatus(string logDeliveryStatus) { DARABONBA_PTR_SET_VALUE(logDeliveryStatus_, logDeliveryStatus) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateDataStorageDeliveryRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t getRoleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline UpdateDataStorageDeliveryRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


  protected:
    shared_ptr<string> lang_ {};
    // This parameter is required.
    shared_ptr<string> logCode_ {};
    shared_ptr<string> logDeliveryStatus_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<int64_t> roleFor_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
