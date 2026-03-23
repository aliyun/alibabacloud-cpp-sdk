// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELAPTHIRDAPPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELAPTHIRDAPPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudwifiPop20191118
{
namespace Models
{
  class DelApThirdAppRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DelApThirdAppRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApAssetId, apAssetId_);
      DARABONBA_PTR_TO_JSON(AppCode, appCode_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Mac, mac_);
    };
    friend void from_json(const Darabonba::Json& j, DelApThirdAppRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApAssetId, apAssetId_);
      DARABONBA_PTR_FROM_JSON(AppCode, appCode_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Mac, mac_);
    };
    DelApThirdAppRequest() = default ;
    DelApThirdAppRequest(const DelApThirdAppRequest &) = default ;
    DelApThirdAppRequest(DelApThirdAppRequest &&) = default ;
    DelApThirdAppRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DelApThirdAppRequest() = default ;
    DelApThirdAppRequest& operator=(const DelApThirdAppRequest &) = default ;
    DelApThirdAppRequest& operator=(DelApThirdAppRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apAssetId_ == nullptr
        && this->appCode_ == nullptr && this->appName_ == nullptr && this->id_ == nullptr && this->mac_ == nullptr; };
    // apAssetId Field Functions 
    bool hasApAssetId() const { return this->apAssetId_ != nullptr;};
    void deleteApAssetId() { this->apAssetId_ = nullptr;};
    inline int64_t getApAssetId() const { DARABONBA_PTR_GET_DEFAULT(apAssetId_, 0L) };
    inline DelApThirdAppRequest& setApAssetId(int64_t apAssetId) { DARABONBA_PTR_SET_VALUE(apAssetId_, apAssetId) };


    // appCode Field Functions 
    bool hasAppCode() const { return this->appCode_ != nullptr;};
    void deleteAppCode() { this->appCode_ = nullptr;};
    inline string getAppCode() const { DARABONBA_PTR_GET_DEFAULT(appCode_, "") };
    inline DelApThirdAppRequest& setAppCode(string appCode) { DARABONBA_PTR_SET_VALUE(appCode_, appCode) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline DelApThirdAppRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DelApThirdAppRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // mac Field Functions 
    bool hasMac() const { return this->mac_ != nullptr;};
    void deleteMac() { this->mac_ = nullptr;};
    inline string getMac() const { DARABONBA_PTR_GET_DEFAULT(mac_, "") };
    inline DelApThirdAppRequest& setMac(string mac) { DARABONBA_PTR_SET_VALUE(mac_, mac) };


  protected:
    shared_ptr<int64_t> apAssetId_ {};
    // This parameter is required.
    shared_ptr<string> appCode_ {};
    // This parameter is required.
    shared_ptr<string> appName_ {};
    shared_ptr<int64_t> id_ {};
    // This parameter is required.
    shared_ptr<string> mac_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudwifiPop20191118
#endif
