// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESOURCEREQUESTK8SSOURCECONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATESOURCEREQUESTK8SSOURCECONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateSourceRequestK8sSourceConfigAuthorizeSecurityGroupRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class CreateSourceRequestK8sSourceConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSourceRequestK8sSourceConfig& obj) { 
      DARABONBA_PTR_TO_JSON(authorizeSecurityGroupRules, authorizeSecurityGroupRules_);
      DARABONBA_PTR_TO_JSON(clusterId, clusterId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSourceRequestK8sSourceConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(authorizeSecurityGroupRules, authorizeSecurityGroupRules_);
      DARABONBA_PTR_FROM_JSON(clusterId, clusterId_);
    };
    CreateSourceRequestK8sSourceConfig() = default ;
    CreateSourceRequestK8sSourceConfig(const CreateSourceRequestK8sSourceConfig &) = default ;
    CreateSourceRequestK8sSourceConfig(CreateSourceRequestK8sSourceConfig &&) = default ;
    CreateSourceRequestK8sSourceConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSourceRequestK8sSourceConfig() = default ;
    CreateSourceRequestK8sSourceConfig& operator=(const CreateSourceRequestK8sSourceConfig &) = default ;
    CreateSourceRequestK8sSourceConfig& operator=(CreateSourceRequestK8sSourceConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authorizeSecurityGroupRules_ == nullptr
        && return this->clusterId_ == nullptr; };
    // authorizeSecurityGroupRules Field Functions 
    bool hasAuthorizeSecurityGroupRules() const { return this->authorizeSecurityGroupRules_ != nullptr;};
    void deleteAuthorizeSecurityGroupRules() { this->authorizeSecurityGroupRules_ = nullptr;};
    inline const vector<Models::CreateSourceRequestK8sSourceConfigAuthorizeSecurityGroupRules> & authorizeSecurityGroupRules() const { DARABONBA_PTR_GET_CONST(authorizeSecurityGroupRules_, vector<Models::CreateSourceRequestK8sSourceConfigAuthorizeSecurityGroupRules>) };
    inline vector<Models::CreateSourceRequestK8sSourceConfigAuthorizeSecurityGroupRules> authorizeSecurityGroupRules() { DARABONBA_PTR_GET(authorizeSecurityGroupRules_, vector<Models::CreateSourceRequestK8sSourceConfigAuthorizeSecurityGroupRules>) };
    inline CreateSourceRequestK8sSourceConfig& setAuthorizeSecurityGroupRules(const vector<Models::CreateSourceRequestK8sSourceConfigAuthorizeSecurityGroupRules> & authorizeSecurityGroupRules) { DARABONBA_PTR_SET_VALUE(authorizeSecurityGroupRules_, authorizeSecurityGroupRules) };
    inline CreateSourceRequestK8sSourceConfig& setAuthorizeSecurityGroupRules(vector<Models::CreateSourceRequestK8sSourceConfigAuthorizeSecurityGroupRules> && authorizeSecurityGroupRules) { DARABONBA_PTR_SET_RVALUE(authorizeSecurityGroupRules_, authorizeSecurityGroupRules) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline CreateSourceRequestK8sSourceConfig& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


  protected:
    std::shared_ptr<vector<Models::CreateSourceRequestK8sSourceConfigAuthorizeSecurityGroupRules>> authorizeSecurityGroupRules_ = nullptr;
    std::shared_ptr<string> clusterId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
