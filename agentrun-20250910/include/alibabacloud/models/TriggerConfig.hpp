// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRIGGERCONFIG_HPP_
#define ALIBABACLOUD_MODELS_TRIGGERCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class TriggerConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TriggerConfig& obj) { 
      DARABONBA_PTR_TO_JSON(authType, authType_);
      DARABONBA_PTR_TO_JSON(methods, methods_);
    };
    friend void from_json(const Darabonba::Json& j, TriggerConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(authType, authType_);
      DARABONBA_PTR_FROM_JSON(methods, methods_);
    };
    TriggerConfig() = default ;
    TriggerConfig(const TriggerConfig &) = default ;
    TriggerConfig(TriggerConfig &&) = default ;
    TriggerConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TriggerConfig() = default ;
    TriggerConfig& operator=(const TriggerConfig &) = default ;
    TriggerConfig& operator=(TriggerConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authType_ == nullptr
        && this->methods_ == nullptr; };
    // authType Field Functions 
    bool hasAuthType() const { return this->authType_ != nullptr;};
    void deleteAuthType() { this->authType_ = nullptr;};
    inline string getAuthType() const { DARABONBA_PTR_GET_DEFAULT(authType_, "") };
    inline TriggerConfig& setAuthType(string authType) { DARABONBA_PTR_SET_VALUE(authType_, authType) };


    // methods Field Functions 
    bool hasMethods() const { return this->methods_ != nullptr;};
    void deleteMethods() { this->methods_ = nullptr;};
    inline const vector<string> & getMethods() const { DARABONBA_PTR_GET_CONST(methods_, vector<string>) };
    inline vector<string> getMethods() { DARABONBA_PTR_GET(methods_, vector<string>) };
    inline TriggerConfig& setMethods(const vector<string> & methods) { DARABONBA_PTR_SET_VALUE(methods_, methods) };
    inline TriggerConfig& setMethods(vector<string> && methods) { DARABONBA_PTR_SET_RVALUE(methods_, methods) };


  protected:
    shared_ptr<string> authType_ {};
    shared_ptr<vector<string>> methods_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
