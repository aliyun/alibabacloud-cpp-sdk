// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPPMODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPPMODEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class UpdateAppModeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAppModeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppIds, appIds_);
      DARABONBA_PTR_TO_JSON(EnableIdle, enableIdle_);
      DARABONBA_PTR_TO_JSON(IdleHour, idleHour_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAppModeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppIds, appIds_);
      DARABONBA_PTR_FROM_JSON(EnableIdle, enableIdle_);
      DARABONBA_PTR_FROM_JSON(IdleHour, idleHour_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
    };
    UpdateAppModeRequest() = default ;
    UpdateAppModeRequest(const UpdateAppModeRequest &) = default ;
    UpdateAppModeRequest(UpdateAppModeRequest &&) = default ;
    UpdateAppModeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAppModeRequest() = default ;
    UpdateAppModeRequest& operator=(const UpdateAppModeRequest &) = default ;
    UpdateAppModeRequest& operator=(UpdateAppModeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->appIds_ == nullptr && this->enableIdle_ == nullptr && this->idleHour_ == nullptr && this->namespaceId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline UpdateAppModeRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appIds Field Functions 
    bool hasAppIds() const { return this->appIds_ != nullptr;};
    void deleteAppIds() { this->appIds_ = nullptr;};
    inline string getAppIds() const { DARABONBA_PTR_GET_DEFAULT(appIds_, "") };
    inline UpdateAppModeRequest& setAppIds(string appIds) { DARABONBA_PTR_SET_VALUE(appIds_, appIds) };


    // enableIdle Field Functions 
    bool hasEnableIdle() const { return this->enableIdle_ != nullptr;};
    void deleteEnableIdle() { this->enableIdle_ = nullptr;};
    inline bool getEnableIdle() const { DARABONBA_PTR_GET_DEFAULT(enableIdle_, false) };
    inline UpdateAppModeRequest& setEnableIdle(bool enableIdle) { DARABONBA_PTR_SET_VALUE(enableIdle_, enableIdle) };


    // idleHour Field Functions 
    bool hasIdleHour() const { return this->idleHour_ != nullptr;};
    void deleteIdleHour() { this->idleHour_ = nullptr;};
    inline string getIdleHour() const { DARABONBA_PTR_GET_DEFAULT(idleHour_, "") };
    inline UpdateAppModeRequest& setIdleHour(string idleHour) { DARABONBA_PTR_SET_VALUE(idleHour_, idleHour) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string getNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline UpdateAppModeRequest& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


  protected:
    // The app ID.
    shared_ptr<string> appId_ {};
    shared_ptr<string> appIds_ {};
    // Enable Idle Mode?
    // 
    // Enumeration value:
    // 
    // *   true: enables.
    // *   false: disables.
    shared_ptr<bool> enableIdle_ {};
    shared_ptr<string> idleHour_ {};
    shared_ptr<string> namespaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
