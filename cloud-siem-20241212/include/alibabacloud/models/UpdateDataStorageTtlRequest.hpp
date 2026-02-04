// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATASTORAGETTLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATASTORAGETTLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class UpdateDataStorageTtlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDataStorageTtlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(LogStoreColdTtl, logStoreColdTtl_);
      DARABONBA_PTR_TO_JSON(LogStoreHotTtl, logStoreHotTtl_);
      DARABONBA_PTR_TO_JSON(LogStoreName, logStoreName_);
      DARABONBA_PTR_TO_JSON(LogStoreTtl, logStoreTtl_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDataStorageTtlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(LogStoreColdTtl, logStoreColdTtl_);
      DARABONBA_PTR_FROM_JSON(LogStoreHotTtl, logStoreHotTtl_);
      DARABONBA_PTR_FROM_JSON(LogStoreName, logStoreName_);
      DARABONBA_PTR_FROM_JSON(LogStoreTtl, logStoreTtl_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
    };
    UpdateDataStorageTtlRequest() = default ;
    UpdateDataStorageTtlRequest(const UpdateDataStorageTtlRequest &) = default ;
    UpdateDataStorageTtlRequest(UpdateDataStorageTtlRequest &&) = default ;
    UpdateDataStorageTtlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDataStorageTtlRequest() = default ;
    UpdateDataStorageTtlRequest& operator=(const UpdateDataStorageTtlRequest &) = default ;
    UpdateDataStorageTtlRequest& operator=(UpdateDataStorageTtlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->logStoreColdTtl_ == nullptr && this->logStoreHotTtl_ == nullptr && this->logStoreName_ == nullptr && this->logStoreTtl_ == nullptr && this->regionId_ == nullptr
        && this->roleFor_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline UpdateDataStorageTtlRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // logStoreColdTtl Field Functions 
    bool hasLogStoreColdTtl() const { return this->logStoreColdTtl_ != nullptr;};
    void deleteLogStoreColdTtl() { this->logStoreColdTtl_ = nullptr;};
    inline string getLogStoreColdTtl() const { DARABONBA_PTR_GET_DEFAULT(logStoreColdTtl_, "") };
    inline UpdateDataStorageTtlRequest& setLogStoreColdTtl(string logStoreColdTtl) { DARABONBA_PTR_SET_VALUE(logStoreColdTtl_, logStoreColdTtl) };


    // logStoreHotTtl Field Functions 
    bool hasLogStoreHotTtl() const { return this->logStoreHotTtl_ != nullptr;};
    void deleteLogStoreHotTtl() { this->logStoreHotTtl_ = nullptr;};
    inline string getLogStoreHotTtl() const { DARABONBA_PTR_GET_DEFAULT(logStoreHotTtl_, "") };
    inline UpdateDataStorageTtlRequest& setLogStoreHotTtl(string logStoreHotTtl) { DARABONBA_PTR_SET_VALUE(logStoreHotTtl_, logStoreHotTtl) };


    // logStoreName Field Functions 
    bool hasLogStoreName() const { return this->logStoreName_ != nullptr;};
    void deleteLogStoreName() { this->logStoreName_ = nullptr;};
    inline string getLogStoreName() const { DARABONBA_PTR_GET_DEFAULT(logStoreName_, "") };
    inline UpdateDataStorageTtlRequest& setLogStoreName(string logStoreName) { DARABONBA_PTR_SET_VALUE(logStoreName_, logStoreName) };


    // logStoreTtl Field Functions 
    bool hasLogStoreTtl() const { return this->logStoreTtl_ != nullptr;};
    void deleteLogStoreTtl() { this->logStoreTtl_ = nullptr;};
    inline string getLogStoreTtl() const { DARABONBA_PTR_GET_DEFAULT(logStoreTtl_, "") };
    inline UpdateDataStorageTtlRequest& setLogStoreTtl(string logStoreTtl) { DARABONBA_PTR_SET_VALUE(logStoreTtl_, logStoreTtl) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateDataStorageTtlRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t getRoleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline UpdateDataStorageTtlRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


  protected:
    shared_ptr<string> lang_ {};
    shared_ptr<string> logStoreColdTtl_ {};
    shared_ptr<string> logStoreHotTtl_ {};
    shared_ptr<string> logStoreName_ {};
    shared_ptr<string> logStoreTtl_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<int64_t> roleFor_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
