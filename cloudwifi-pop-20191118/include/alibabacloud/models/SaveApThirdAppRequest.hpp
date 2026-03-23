// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEAPTHIRDAPPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVEAPTHIRDAPPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudwifiPop20191118
{
namespace Models
{
  class SaveApThirdAppRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveApThirdAppRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddStyle, addStyle_);
      DARABONBA_PTR_TO_JSON(ApAssetId, apAssetId_);
      DARABONBA_PTR_TO_JSON(AppCode, appCode_);
      DARABONBA_PTR_TO_JSON(AppData, appData_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Mac, mac_);
      DARABONBA_PTR_TO_JSON(ThirdAppName, thirdAppName_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, SaveApThirdAppRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddStyle, addStyle_);
      DARABONBA_PTR_FROM_JSON(ApAssetId, apAssetId_);
      DARABONBA_PTR_FROM_JSON(AppCode, appCode_);
      DARABONBA_PTR_FROM_JSON(AppData, appData_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Mac, mac_);
      DARABONBA_PTR_FROM_JSON(ThirdAppName, thirdAppName_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    SaveApThirdAppRequest() = default ;
    SaveApThirdAppRequest(const SaveApThirdAppRequest &) = default ;
    SaveApThirdAppRequest(SaveApThirdAppRequest &&) = default ;
    SaveApThirdAppRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveApThirdAppRequest() = default ;
    SaveApThirdAppRequest& operator=(const SaveApThirdAppRequest &) = default ;
    SaveApThirdAppRequest& operator=(SaveApThirdAppRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addStyle_ == nullptr
        && this->apAssetId_ == nullptr && this->appCode_ == nullptr && this->appData_ == nullptr && this->appName_ == nullptr && this->category_ == nullptr
        && this->id_ == nullptr && this->mac_ == nullptr && this->thirdAppName_ == nullptr && this->version_ == nullptr; };
    // addStyle Field Functions 
    bool hasAddStyle() const { return this->addStyle_ != nullptr;};
    void deleteAddStyle() { this->addStyle_ = nullptr;};
    inline int32_t getAddStyle() const { DARABONBA_PTR_GET_DEFAULT(addStyle_, 0) };
    inline SaveApThirdAppRequest& setAddStyle(int32_t addStyle) { DARABONBA_PTR_SET_VALUE(addStyle_, addStyle) };


    // apAssetId Field Functions 
    bool hasApAssetId() const { return this->apAssetId_ != nullptr;};
    void deleteApAssetId() { this->apAssetId_ = nullptr;};
    inline int64_t getApAssetId() const { DARABONBA_PTR_GET_DEFAULT(apAssetId_, 0L) };
    inline SaveApThirdAppRequest& setApAssetId(int64_t apAssetId) { DARABONBA_PTR_SET_VALUE(apAssetId_, apAssetId) };


    // appCode Field Functions 
    bool hasAppCode() const { return this->appCode_ != nullptr;};
    void deleteAppCode() { this->appCode_ = nullptr;};
    inline string getAppCode() const { DARABONBA_PTR_GET_DEFAULT(appCode_, "") };
    inline SaveApThirdAppRequest& setAppCode(string appCode) { DARABONBA_PTR_SET_VALUE(appCode_, appCode) };


    // appData Field Functions 
    bool hasAppData() const { return this->appData_ != nullptr;};
    void deleteAppData() { this->appData_ = nullptr;};
    inline string getAppData() const { DARABONBA_PTR_GET_DEFAULT(appData_, "") };
    inline SaveApThirdAppRequest& setAppData(string appData) { DARABONBA_PTR_SET_VALUE(appData_, appData) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline SaveApThirdAppRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline int32_t getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, 0) };
    inline SaveApThirdAppRequest& setCategory(int32_t category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline SaveApThirdAppRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // mac Field Functions 
    bool hasMac() const { return this->mac_ != nullptr;};
    void deleteMac() { this->mac_ = nullptr;};
    inline string getMac() const { DARABONBA_PTR_GET_DEFAULT(mac_, "") };
    inline SaveApThirdAppRequest& setMac(string mac) { DARABONBA_PTR_SET_VALUE(mac_, mac) };


    // thirdAppName Field Functions 
    bool hasThirdAppName() const { return this->thirdAppName_ != nullptr;};
    void deleteThirdAppName() { this->thirdAppName_ = nullptr;};
    inline string getThirdAppName() const { DARABONBA_PTR_GET_DEFAULT(thirdAppName_, "") };
    inline SaveApThirdAppRequest& setThirdAppName(string thirdAppName) { DARABONBA_PTR_SET_VALUE(thirdAppName_, thirdAppName) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline SaveApThirdAppRequest& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    shared_ptr<int32_t> addStyle_ {};
    shared_ptr<int64_t> apAssetId_ {};
    // This parameter is required.
    shared_ptr<string> appCode_ {};
    shared_ptr<string> appData_ {};
    // This parameter is required.
    shared_ptr<string> appName_ {};
    shared_ptr<int32_t> category_ {};
    shared_ptr<int64_t> id_ {};
    // This parameter is required.
    shared_ptr<string> mac_ {};
    shared_ptr<string> thirdAppName_ {};
    shared_ptr<string> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudwifiPop20191118
#endif
