// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEZOOKEEPERSASLUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVEZOOKEEPERSASLUSERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class RemoveZooKeeperSaslUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveZooKeeperSaslUserRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Reload, reload_);
      DARABONBA_PTR_TO_JSON(UserNames, userNames_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveZooKeeperSaslUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Reload, reload_);
      DARABONBA_PTR_FROM_JSON(UserNames, userNames_);
    };
    RemoveZooKeeperSaslUserRequest() = default ;
    RemoveZooKeeperSaslUserRequest(const RemoveZooKeeperSaslUserRequest &) = default ;
    RemoveZooKeeperSaslUserRequest(RemoveZooKeeperSaslUserRequest &&) = default ;
    RemoveZooKeeperSaslUserRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveZooKeeperSaslUserRequest() = default ;
    RemoveZooKeeperSaslUserRequest& operator=(const RemoveZooKeeperSaslUserRequest &) = default ;
    RemoveZooKeeperSaslUserRequest& operator=(RemoveZooKeeperSaslUserRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->instanceId_ == nullptr && this->reload_ == nullptr && this->userNames_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline RemoveZooKeeperSaslUserRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline RemoveZooKeeperSaslUserRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // reload Field Functions 
    bool hasReload() const { return this->reload_ != nullptr;};
    void deleteReload() { this->reload_ = nullptr;};
    inline bool getReload() const { DARABONBA_PTR_GET_DEFAULT(reload_, false) };
    inline RemoveZooKeeperSaslUserRequest& setReload(bool reload) { DARABONBA_PTR_SET_VALUE(reload_, reload) };


    // userNames Field Functions 
    bool hasUserNames() const { return this->userNames_ != nullptr;};
    void deleteUserNames() { this->userNames_ = nullptr;};
    inline const vector<string> & getUserNames() const { DARABONBA_PTR_GET_CONST(userNames_, vector<string>) };
    inline vector<string> getUserNames() { DARABONBA_PTR_GET(userNames_, vector<string>) };
    inline RemoveZooKeeperSaslUserRequest& setUserNames(const vector<string> & userNames) { DARABONBA_PTR_SET_VALUE(userNames_, userNames) };
    inline RemoveZooKeeperSaslUserRequest& setUserNames(vector<string> && userNames) { DARABONBA_PTR_SET_RVALUE(userNames_, userNames) };


  protected:
    shared_ptr<string> acceptLanguage_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<bool> reload_ {};
    // This parameter is required.
    shared_ptr<vector<string>> userNames_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
