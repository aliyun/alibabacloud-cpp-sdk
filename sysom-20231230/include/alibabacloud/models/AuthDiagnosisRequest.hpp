// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AUTHDIAGNOSISREQUEST_HPP_
#define ALIBABACLOUD_MODELS_AUTHDIAGNOSISREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
      DARABONBA_PTR_TO_JSON(X-Debug-Id, xDebugId_);
      DARABONBA_PTR_TO_JSON(autoCreateRole, autoCreateRole_);
      DARABONBA_PTR_TO_JSON(autoInstallAgent, autoInstallAgent_);
      DARABONBA_PTR_TO_JSON(instances, instances_);
      DARABONBA_PTR_TO_JSON(x-sysom-invoke-source, xSysomInvokeSource_);
    };
    friend void from_json(const Darabonba::Json& j, AuthDiagnosisRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(X-Debug-Id, xDebugId_);
      DARABONBA_PTR_FROM_JSON(autoCreateRole, autoCreateRole_);
      DARABONBA_PTR_FROM_JSON(autoInstallAgent, autoInstallAgent_);
      DARABONBA_PTR_FROM_JSON(instances, instances_);
      DARABONBA_PTR_FROM_JSON(x-sysom-invoke-source, xSysomInvokeSource_);
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
    class Instances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Instances& obj) { 
        DARABONBA_PTR_TO_JSON(instance, instance_);
        DARABONBA_PTR_TO_JSON(region, region_);
      };
      friend void from_json(const Darabonba::Json& j, Instances& obj) { 
        DARABONBA_PTR_FROM_JSON(instance, instance_);
        DARABONBA_PTR_FROM_JSON(region, region_);
      };
      Instances() = default ;
      Instances(const Instances &) = default ;
      Instances(Instances &&) = default ;
      Instances(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Instances() = default ;
      Instances& operator=(const Instances &) = default ;
      Instances& operator=(Instances &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->instance_ == nullptr
        && this->region_ == nullptr; };
      // instance Field Functions 
      bool hasInstance() const { return this->instance_ != nullptr;};
      void deleteInstance() { this->instance_ = nullptr;};
      inline string getInstance() const { DARABONBA_PTR_GET_DEFAULT(instance_, "") };
      inline Instances& setInstance(string instance) { DARABONBA_PTR_SET_VALUE(instance_, instance) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline Instances& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    protected:
      // The instance ID.
      shared_ptr<string> instance_ {};
      // The region ID.
      shared_ptr<string> region_ {};
    };

    virtual bool empty() const override { return this->xDebugId_ == nullptr
        && this->autoCreateRole_ == nullptr && this->autoInstallAgent_ == nullptr && this->instances_ == nullptr && this->xSysomInvokeSource_ == nullptr; };
    // xDebugId Field Functions 
    bool hasXDebugId() const { return this->xDebugId_ != nullptr;};
    void deleteXDebugId() { this->xDebugId_ = nullptr;};
    inline string getXDebugId() const { DARABONBA_PTR_GET_DEFAULT(xDebugId_, "") };
    inline AuthDiagnosisRequest& setXDebugId(string xDebugId) { DARABONBA_PTR_SET_VALUE(xDebugId_, xDebugId) };


    // autoCreateRole Field Functions 
    bool hasAutoCreateRole() const { return this->autoCreateRole_ != nullptr;};
    void deleteAutoCreateRole() { this->autoCreateRole_ = nullptr;};
    inline bool getAutoCreateRole() const { DARABONBA_PTR_GET_DEFAULT(autoCreateRole_, false) };
    inline AuthDiagnosisRequest& setAutoCreateRole(bool autoCreateRole) { DARABONBA_PTR_SET_VALUE(autoCreateRole_, autoCreateRole) };


    // autoInstallAgent Field Functions 
    bool hasAutoInstallAgent() const { return this->autoInstallAgent_ != nullptr;};
    void deleteAutoInstallAgent() { this->autoInstallAgent_ = nullptr;};
    inline bool getAutoInstallAgent() const { DARABONBA_PTR_GET_DEFAULT(autoInstallAgent_, false) };
    inline AuthDiagnosisRequest& setAutoInstallAgent(bool autoInstallAgent) { DARABONBA_PTR_SET_VALUE(autoInstallAgent_, autoInstallAgent) };


    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const vector<AuthDiagnosisRequest::Instances> & getInstances() const { DARABONBA_PTR_GET_CONST(instances_, vector<AuthDiagnosisRequest::Instances>) };
    inline vector<AuthDiagnosisRequest::Instances> getInstances() { DARABONBA_PTR_GET(instances_, vector<AuthDiagnosisRequest::Instances>) };
    inline AuthDiagnosisRequest& setInstances(const vector<AuthDiagnosisRequest::Instances> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline AuthDiagnosisRequest& setInstances(vector<AuthDiagnosisRequest::Instances> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


    // xSysomInvokeSource Field Functions 
    bool hasXSysomInvokeSource() const { return this->xSysomInvokeSource_ != nullptr;};
    void deleteXSysomInvokeSource() { this->xSysomInvokeSource_ = nullptr;};
    inline string getXSysomInvokeSource() const { DARABONBA_PTR_GET_DEFAULT(xSysomInvokeSource_, "") };
    inline AuthDiagnosisRequest& setXSysomInvokeSource(string xSysomInvokeSource) { DARABONBA_PTR_SET_VALUE(xSysomInvokeSource_, xSysomInvokeSource) };


  protected:
    shared_ptr<string> xDebugId_ {};
    // Specifies whether to enable automatic creation of the service-linked role.
    shared_ptr<bool> autoCreateRole_ {};
    // Specifies whether to automatically install the latest version of the agent if it is not installed.
    shared_ptr<bool> autoInstallAgent_ {};
    // The list of instances authorized for diagnosis.
    shared_ptr<vector<AuthDiagnosisRequest::Instances>> instances_ {};
    shared_ptr<string> xSysomInvokeSource_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
