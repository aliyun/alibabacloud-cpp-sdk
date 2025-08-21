// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEXPACKMONITORCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEXPACKMONITORCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class UpdateXpackMonitorConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateXpackMonitorConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(enable, enable_);
      DARABONBA_PTR_TO_JSON(endpoints, endpoints_);
      DARABONBA_PTR_TO_JSON(password, password_);
      DARABONBA_PTR_TO_JSON(userName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateXpackMonitorConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(enable, enable_);
      DARABONBA_PTR_FROM_JSON(endpoints, endpoints_);
      DARABONBA_PTR_FROM_JSON(password, password_);
      DARABONBA_PTR_FROM_JSON(userName, userName_);
    };
    UpdateXpackMonitorConfigRequest() = default ;
    UpdateXpackMonitorConfigRequest(const UpdateXpackMonitorConfigRequest &) = default ;
    UpdateXpackMonitorConfigRequest(UpdateXpackMonitorConfigRequest &&) = default ;
    UpdateXpackMonitorConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateXpackMonitorConfigRequest() = default ;
    UpdateXpackMonitorConfigRequest& operator=(const UpdateXpackMonitorConfigRequest &) = default ;
    UpdateXpackMonitorConfigRequest& operator=(UpdateXpackMonitorConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->enable_ != nullptr && this->endpoints_ != nullptr && this->password_ != nullptr && this->userName_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateXpackMonitorConfigRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline UpdateXpackMonitorConfigRequest& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // endpoints Field Functions 
    bool hasEndpoints() const { return this->endpoints_ != nullptr;};
    void deleteEndpoints() { this->endpoints_ = nullptr;};
    inline const vector<string> & endpoints() const { DARABONBA_PTR_GET_CONST(endpoints_, vector<string>) };
    inline vector<string> endpoints() { DARABONBA_PTR_GET(endpoints_, vector<string>) };
    inline UpdateXpackMonitorConfigRequest& setEndpoints(const vector<string> & endpoints) { DARABONBA_PTR_SET_VALUE(endpoints_, endpoints) };
    inline UpdateXpackMonitorConfigRequest& setEndpoints(vector<string> && endpoints) { DARABONBA_PTR_SET_RVALUE(endpoints_, endpoints) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline UpdateXpackMonitorConfigRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline UpdateXpackMonitorConfigRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    std::shared_ptr<string> clientToken_ = nullptr;
    std::shared_ptr<bool> enable_ = nullptr;
    std::shared_ptr<vector<string>> endpoints_ = nullptr;
    std::shared_ptr<string> password_ = nullptr;
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
