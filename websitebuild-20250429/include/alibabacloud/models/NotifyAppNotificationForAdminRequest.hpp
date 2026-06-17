// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NOTIFYAPPNOTIFICATIONFORADMINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_NOTIFYAPPNOTIFICATIONFORADMINREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class NotifyAppNotificationForAdminRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NotifyAppNotificationForAdminRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(Env, env_);
      DARABONBA_PTR_TO_JSON(Payload, payload_);
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
    };
    friend void from_json(const Darabonba::Json& j, NotifyAppNotificationForAdminRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(Env, env_);
      DARABONBA_PTR_FROM_JSON(Payload, payload_);
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
    };
    NotifyAppNotificationForAdminRequest() = default ;
    NotifyAppNotificationForAdminRequest(const NotifyAppNotificationForAdminRequest &) = default ;
    NotifyAppNotificationForAdminRequest(NotifyAppNotificationForAdminRequest &&) = default ;
    NotifyAppNotificationForAdminRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NotifyAppNotificationForAdminRequest() = default ;
    NotifyAppNotificationForAdminRequest& operator=(const NotifyAppNotificationForAdminRequest &) = default ;
    NotifyAppNotificationForAdminRequest& operator=(NotifyAppNotificationForAdminRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && this->env_ == nullptr && this->payload_ == nullptr && this->sceneId_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline NotifyAppNotificationForAdminRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline string getEnv() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
    inline NotifyAppNotificationForAdminRequest& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


    // payload Field Functions 
    bool hasPayload() const { return this->payload_ != nullptr;};
    void deletePayload() { this->payload_ = nullptr;};
    inline string getPayload() const { DARABONBA_PTR_GET_DEFAULT(payload_, "") };
    inline NotifyAppNotificationForAdminRequest& setPayload(string payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline string getSceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, "") };
    inline NotifyAppNotificationForAdminRequest& setSceneId(string sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


  protected:
    // The business ID.
    shared_ptr<string> bizId_ {};
    // The environment identifier.
    shared_ptr<string> env_ {};
    shared_ptr<string> payload_ {};
    // The scene ID.
    shared_ptr<string> sceneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
