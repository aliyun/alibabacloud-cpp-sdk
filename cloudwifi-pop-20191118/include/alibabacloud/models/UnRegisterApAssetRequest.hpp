// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNREGISTERAPASSETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UNREGISTERAPASSETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudwifiPop20191118
{
namespace Models
{
  class UnRegisterApAssetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnRegisterApAssetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppCode, appCode_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(AssetApgroupId, assetApgroupId_);
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Mac, mac_);
      DARABONBA_PTR_TO_JSON(SerialNo, serialNo_);
      DARABONBA_PTR_TO_JSON(UseFor, useFor_);
    };
    friend void from_json(const Darabonba::Json& j, UnRegisterApAssetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppCode, appCode_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(AssetApgroupId, assetApgroupId_);
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Mac, mac_);
      DARABONBA_PTR_FROM_JSON(SerialNo, serialNo_);
      DARABONBA_PTR_FROM_JSON(UseFor, useFor_);
    };
    UnRegisterApAssetRequest() = default ;
    UnRegisterApAssetRequest(const UnRegisterApAssetRequest &) = default ;
    UnRegisterApAssetRequest(UnRegisterApAssetRequest &&) = default ;
    UnRegisterApAssetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnRegisterApAssetRequest() = default ;
    UnRegisterApAssetRequest& operator=(const UnRegisterApAssetRequest &) = default ;
    UnRegisterApAssetRequest& operator=(UnRegisterApAssetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appCode_ == nullptr
        && this->appName_ == nullptr && this->assetApgroupId_ == nullptr && this->category_ == nullptr && this->id_ == nullptr && this->mac_ == nullptr
        && this->serialNo_ == nullptr && this->useFor_ == nullptr; };
    // appCode Field Functions 
    bool hasAppCode() const { return this->appCode_ != nullptr;};
    void deleteAppCode() { this->appCode_ = nullptr;};
    inline string getAppCode() const { DARABONBA_PTR_GET_DEFAULT(appCode_, "") };
    inline UnRegisterApAssetRequest& setAppCode(string appCode) { DARABONBA_PTR_SET_VALUE(appCode_, appCode) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline UnRegisterApAssetRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // assetApgroupId Field Functions 
    bool hasAssetApgroupId() const { return this->assetApgroupId_ != nullptr;};
    void deleteAssetApgroupId() { this->assetApgroupId_ = nullptr;};
    inline int64_t getAssetApgroupId() const { DARABONBA_PTR_GET_DEFAULT(assetApgroupId_, 0L) };
    inline UnRegisterApAssetRequest& setAssetApgroupId(int64_t assetApgroupId) { DARABONBA_PTR_SET_VALUE(assetApgroupId_, assetApgroupId) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline int32_t getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, 0) };
    inline UnRegisterApAssetRequest& setCategory(int32_t category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UnRegisterApAssetRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // mac Field Functions 
    bool hasMac() const { return this->mac_ != nullptr;};
    void deleteMac() { this->mac_ = nullptr;};
    inline string getMac() const { DARABONBA_PTR_GET_DEFAULT(mac_, "") };
    inline UnRegisterApAssetRequest& setMac(string mac) { DARABONBA_PTR_SET_VALUE(mac_, mac) };


    // serialNo Field Functions 
    bool hasSerialNo() const { return this->serialNo_ != nullptr;};
    void deleteSerialNo() { this->serialNo_ = nullptr;};
    inline string getSerialNo() const { DARABONBA_PTR_GET_DEFAULT(serialNo_, "") };
    inline UnRegisterApAssetRequest& setSerialNo(string serialNo) { DARABONBA_PTR_SET_VALUE(serialNo_, serialNo) };


    // useFor Field Functions 
    bool hasUseFor() const { return this->useFor_ != nullptr;};
    void deleteUseFor() { this->useFor_ = nullptr;};
    inline int32_t getUseFor() const { DARABONBA_PTR_GET_DEFAULT(useFor_, 0) };
    inline UnRegisterApAssetRequest& setUseFor(int32_t useFor) { DARABONBA_PTR_SET_VALUE(useFor_, useFor) };


  protected:
    // This parameter is required.
    shared_ptr<string> appCode_ {};
    // This parameter is required.
    shared_ptr<string> appName_ {};
    shared_ptr<int64_t> assetApgroupId_ {};
    shared_ptr<int32_t> category_ {};
    shared_ptr<int64_t> id_ {};
    // This parameter is required.
    shared_ptr<string> mac_ {};
    shared_ptr<string> serialNo_ {};
    shared_ptr<int32_t> useFor_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudwifiPop20191118
#endif
