// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEINSTANCESETTINGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEINSTANCESETTINGSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class UpdateInstanceSettingsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateInstanceSettingsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(esConfig, esConfig_);
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(force, force_);
      DARABONBA_PTR_TO_JSON(updateStrategy, updateStrategy_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateInstanceSettingsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(esConfig, esConfig_);
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(force, force_);
      DARABONBA_PTR_FROM_JSON(updateStrategy, updateStrategy_);
    };
    UpdateInstanceSettingsRequest() = default ;
    UpdateInstanceSettingsRequest(const UpdateInstanceSettingsRequest &) = default ;
    UpdateInstanceSettingsRequest(UpdateInstanceSettingsRequest &&) = default ;
    UpdateInstanceSettingsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateInstanceSettingsRequest() = default ;
    UpdateInstanceSettingsRequest& operator=(const UpdateInstanceSettingsRequest &) = default ;
    UpdateInstanceSettingsRequest& operator=(UpdateInstanceSettingsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->esConfig_ == nullptr
        && this->clientToken_ == nullptr && this->force_ == nullptr && this->updateStrategy_ == nullptr; };
    // esConfig Field Functions 
    bool hasEsConfig() const { return this->esConfig_ != nullptr;};
    void deleteEsConfig() { this->esConfig_ = nullptr;};
    inline const map<string, string> & getEsConfig() const { DARABONBA_PTR_GET_CONST(esConfig_, map<string, string>) };
    inline map<string, string> getEsConfig() { DARABONBA_PTR_GET(esConfig_, map<string, string>) };
    inline UpdateInstanceSettingsRequest& setEsConfig(const map<string, string> & esConfig) { DARABONBA_PTR_SET_VALUE(esConfig_, esConfig) };
    inline UpdateInstanceSettingsRequest& setEsConfig(map<string, string> && esConfig) { DARABONBA_PTR_SET_RVALUE(esConfig_, esConfig) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateInstanceSettingsRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // force Field Functions 
    bool hasForce() const { return this->force_ != nullptr;};
    void deleteForce() { this->force_ = nullptr;};
    inline bool getForce() const { DARABONBA_PTR_GET_DEFAULT(force_, false) };
    inline UpdateInstanceSettingsRequest& setForce(bool force) { DARABONBA_PTR_SET_VALUE(force_, force) };


    // updateStrategy Field Functions 
    bool hasUpdateStrategy() const { return this->updateStrategy_ != nullptr;};
    void deleteUpdateStrategy() { this->updateStrategy_ = nullptr;};
    inline string getUpdateStrategy() const { DARABONBA_PTR_GET_DEFAULT(updateStrategy_, "") };
    inline UpdateInstanceSettingsRequest& setUpdateStrategy(string updateStrategy) { DARABONBA_PTR_SET_VALUE(updateStrategy_, updateStrategy) };


  protected:
    // The YML file configuration of the instance.
    shared_ptr<map<string, string>> esConfig_ {};
    // A client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to forcefully apply the change.
    shared_ptr<bool> force_ {};
    // The change strategy for Elasticsearch (for example, the change method used during index updates, cluster upgrades, or service deployments). Valid values:
    // - blue_green: blue-green change. Implements seamless switchover by running two identical environments (blue and green) in parallel.
    // - normal: in-place change. Performs changes directly in the current environment (for example, upgrades or scaling) without requiring additional resources.
    // - intelligent: intelligent change. The system automatically analyzes the change type and environment state, and dynamically selects the optimal change method (blue-green change or in-place change).
    shared_ptr<string> updateStrategy_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
