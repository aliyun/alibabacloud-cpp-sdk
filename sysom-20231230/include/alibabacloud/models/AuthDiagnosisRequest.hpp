// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AUTHDIAGNOSISREQUEST_HPP_
#define ALIBABACLOUD_MODELS_AUTHDIAGNOSISREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AuthDiagnosisRequestInstances.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class AuthDiagnosisRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AuthDiagnosisRequest& obj) { 
      DARABONBA_PTR_TO_JSON(autoCreateRole, autoCreateRole_);
      DARABONBA_PTR_TO_JSON(autoInstallAgent, autoInstallAgent_);
      DARABONBA_PTR_TO_JSON(instances, instances_);
    };
    friend void from_json(const Darabonba::Json& j, AuthDiagnosisRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(autoCreateRole, autoCreateRole_);
      DARABONBA_PTR_FROM_JSON(autoInstallAgent, autoInstallAgent_);
      DARABONBA_PTR_FROM_JSON(instances, instances_);
    };
    AuthDiagnosisRequest() = default ;
    AuthDiagnosisRequest(const AuthDiagnosisRequest &) = default ;
    AuthDiagnosisRequest(AuthDiagnosisRequest &&) = default ;
    AuthDiagnosisRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AuthDiagnosisRequest() = default ;
    AuthDiagnosisRequest& operator=(const AuthDiagnosisRequest &) = default ;
    AuthDiagnosisRequest& operator=(AuthDiagnosisRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoCreateRole_ == nullptr
        && return this->autoInstallAgent_ == nullptr && return this->instances_ == nullptr; };
    // autoCreateRole Field Functions 
    bool hasAutoCreateRole() const { return this->autoCreateRole_ != nullptr;};
    void deleteAutoCreateRole() { this->autoCreateRole_ = nullptr;};
    inline bool autoCreateRole() const { DARABONBA_PTR_GET_DEFAULT(autoCreateRole_, false) };
    inline AuthDiagnosisRequest& setAutoCreateRole(bool autoCreateRole) { DARABONBA_PTR_SET_VALUE(autoCreateRole_, autoCreateRole) };


    // autoInstallAgent Field Functions 
    bool hasAutoInstallAgent() const { return this->autoInstallAgent_ != nullptr;};
    void deleteAutoInstallAgent() { this->autoInstallAgent_ = nullptr;};
    inline bool autoInstallAgent() const { DARABONBA_PTR_GET_DEFAULT(autoInstallAgent_, false) };
    inline AuthDiagnosisRequest& setAutoInstallAgent(bool autoInstallAgent) { DARABONBA_PTR_SET_VALUE(autoInstallAgent_, autoInstallAgent) };


    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const vector<AuthDiagnosisRequestInstances> & instances() const { DARABONBA_PTR_GET_CONST(instances_, vector<AuthDiagnosisRequestInstances>) };
    inline vector<AuthDiagnosisRequestInstances> instances() { DARABONBA_PTR_GET(instances_, vector<AuthDiagnosisRequestInstances>) };
    inline AuthDiagnosisRequest& setInstances(const vector<AuthDiagnosisRequestInstances> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline AuthDiagnosisRequest& setInstances(vector<AuthDiagnosisRequestInstances> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


  protected:
    std::shared_ptr<bool> autoCreateRole_ = nullptr;
    std::shared_ptr<bool> autoInstallAgent_ = nullptr;
    std::shared_ptr<vector<AuthDiagnosisRequestInstances>> instances_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
