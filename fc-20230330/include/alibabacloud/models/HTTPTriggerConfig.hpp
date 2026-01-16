// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HTTPTRIGGERCONFIG_HPP_
#define ALIBABACLOUD_MODELS_HTTPTRIGGERCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class HTTPTriggerConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HTTPTriggerConfig& obj) { 
      DARABONBA_PTR_TO_JSON(authConfig, authConfig_);
      DARABONBA_PTR_TO_JSON(authType, authType_);
      DARABONBA_PTR_TO_JSON(disableURLInternet, disableURLInternet_);
      DARABONBA_PTR_TO_JSON(methods, methods_);
    };
    friend void from_json(const Darabonba::Json& j, HTTPTriggerConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(authConfig, authConfig_);
      DARABONBA_PTR_FROM_JSON(authType, authType_);
      DARABONBA_PTR_FROM_JSON(disableURLInternet, disableURLInternet_);
      DARABONBA_PTR_FROM_JSON(methods, methods_);
    };
    HTTPTriggerConfig() = default ;
    HTTPTriggerConfig(const HTTPTriggerConfig &) = default ;
    HTTPTriggerConfig(HTTPTriggerConfig &&) = default ;
    HTTPTriggerConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HTTPTriggerConfig() = default ;
    HTTPTriggerConfig& operator=(const HTTPTriggerConfig &) = default ;
    HTTPTriggerConfig& operator=(HTTPTriggerConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authConfig_ == nullptr
        && this->authType_ == nullptr && this->disableURLInternet_ == nullptr && this->methods_ == nullptr; };
    // authConfig Field Functions 
    bool hasAuthConfig() const { return this->authConfig_ != nullptr;};
    void deleteAuthConfig() { this->authConfig_ = nullptr;};
    inline string getAuthConfig() const { DARABONBA_PTR_GET_DEFAULT(authConfig_, "") };
    inline HTTPTriggerConfig& setAuthConfig(string authConfig) { DARABONBA_PTR_SET_VALUE(authConfig_, authConfig) };


    // authType Field Functions 
    bool hasAuthType() const { return this->authType_ != nullptr;};
    void deleteAuthType() { this->authType_ = nullptr;};
    inline string getAuthType() const { DARABONBA_PTR_GET_DEFAULT(authType_, "") };
    inline HTTPTriggerConfig& setAuthType(string authType) { DARABONBA_PTR_SET_VALUE(authType_, authType) };


    // disableURLInternet Field Functions 
    bool hasDisableURLInternet() const { return this->disableURLInternet_ != nullptr;};
    void deleteDisableURLInternet() { this->disableURLInternet_ = nullptr;};
    inline bool getDisableURLInternet() const { DARABONBA_PTR_GET_DEFAULT(disableURLInternet_, false) };
    inline HTTPTriggerConfig& setDisableURLInternet(bool disableURLInternet) { DARABONBA_PTR_SET_VALUE(disableURLInternet_, disableURLInternet) };


    // methods Field Functions 
    bool hasMethods() const { return this->methods_ != nullptr;};
    void deleteMethods() { this->methods_ = nullptr;};
    inline const vector<string> & getMethods() const { DARABONBA_PTR_GET_CONST(methods_, vector<string>) };
    inline vector<string> getMethods() { DARABONBA_PTR_GET(methods_, vector<string>) };
    inline HTTPTriggerConfig& setMethods(const vector<string> & methods) { DARABONBA_PTR_SET_VALUE(methods_, methods) };
    inline HTTPTriggerConfig& setMethods(vector<string> && methods) { DARABONBA_PTR_SET_RVALUE(methods_, methods) };


  protected:
    shared_ptr<string> authConfig_ {};
    shared_ptr<string> authType_ {};
    shared_ptr<bool> disableURLInternet_ {};
    shared_ptr<vector<string>> methods_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
