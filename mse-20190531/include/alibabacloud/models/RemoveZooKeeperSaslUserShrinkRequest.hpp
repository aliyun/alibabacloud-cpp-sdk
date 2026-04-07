// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEZOOKEEPERSASLUSERSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVEZOOKEEPERSASLUSERSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class RemoveZooKeeperSaslUserShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveZooKeeperSaslUserShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Reload, reload_);
      DARABONBA_PTR_TO_JSON(UserNames, userNamesShrink_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveZooKeeperSaslUserShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Reload, reload_);
      DARABONBA_PTR_FROM_JSON(UserNames, userNamesShrink_);
    };
    RemoveZooKeeperSaslUserShrinkRequest() = default ;
    RemoveZooKeeperSaslUserShrinkRequest(const RemoveZooKeeperSaslUserShrinkRequest &) = default ;
    RemoveZooKeeperSaslUserShrinkRequest(RemoveZooKeeperSaslUserShrinkRequest &&) = default ;
    RemoveZooKeeperSaslUserShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveZooKeeperSaslUserShrinkRequest() = default ;
    RemoveZooKeeperSaslUserShrinkRequest& operator=(const RemoveZooKeeperSaslUserShrinkRequest &) = default ;
    RemoveZooKeeperSaslUserShrinkRequest& operator=(RemoveZooKeeperSaslUserShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->instanceId_ == nullptr && this->reload_ == nullptr && this->userNamesShrink_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline RemoveZooKeeperSaslUserShrinkRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline RemoveZooKeeperSaslUserShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // reload Field Functions 
    bool hasReload() const { return this->reload_ != nullptr;};
    void deleteReload() { this->reload_ = nullptr;};
    inline bool getReload() const { DARABONBA_PTR_GET_DEFAULT(reload_, false) };
    inline RemoveZooKeeperSaslUserShrinkRequest& setReload(bool reload) { DARABONBA_PTR_SET_VALUE(reload_, reload) };


    // userNamesShrink Field Functions 
    bool hasUserNamesShrink() const { return this->userNamesShrink_ != nullptr;};
    void deleteUserNamesShrink() { this->userNamesShrink_ = nullptr;};
    inline string getUserNamesShrink() const { DARABONBA_PTR_GET_DEFAULT(userNamesShrink_, "") };
    inline RemoveZooKeeperSaslUserShrinkRequest& setUserNamesShrink(string userNamesShrink) { DARABONBA_PTR_SET_VALUE(userNamesShrink_, userNamesShrink) };


  protected:
    shared_ptr<string> acceptLanguage_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<bool> reload_ {};
    // This parameter is required.
    shared_ptr<string> userNamesShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
