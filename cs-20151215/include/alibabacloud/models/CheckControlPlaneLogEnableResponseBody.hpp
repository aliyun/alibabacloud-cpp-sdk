// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKCONTROLPLANELOGENABLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKCONTROLPLANELOGENABLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class CheckControlPlaneLogEnableResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckControlPlaneLogEnableResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(aliuid, aliuid_);
      DARABONBA_PTR_TO_JSON(components, components_);
      DARABONBA_PTR_TO_JSON(log_project, logProject_);
      DARABONBA_PTR_TO_JSON(log_ttl, logTtl_);
    };
    friend void from_json(const Darabonba::Json& j, CheckControlPlaneLogEnableResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(aliuid, aliuid_);
      DARABONBA_PTR_FROM_JSON(components, components_);
      DARABONBA_PTR_FROM_JSON(log_project, logProject_);
      DARABONBA_PTR_FROM_JSON(log_ttl, logTtl_);
    };
    CheckControlPlaneLogEnableResponseBody() = default ;
    CheckControlPlaneLogEnableResponseBody(const CheckControlPlaneLogEnableResponseBody &) = default ;
    CheckControlPlaneLogEnableResponseBody(CheckControlPlaneLogEnableResponseBody &&) = default ;
    CheckControlPlaneLogEnableResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckControlPlaneLogEnableResponseBody() = default ;
    CheckControlPlaneLogEnableResponseBody& operator=(const CheckControlPlaneLogEnableResponseBody &) = default ;
    CheckControlPlaneLogEnableResponseBody& operator=(CheckControlPlaneLogEnableResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliuid_ == nullptr
        && this->components_ == nullptr && this->logProject_ == nullptr && this->logTtl_ == nullptr; };
    // aliuid Field Functions 
    bool hasAliuid() const { return this->aliuid_ != nullptr;};
    void deleteAliuid() { this->aliuid_ = nullptr;};
    inline string getAliuid() const { DARABONBA_PTR_GET_DEFAULT(aliuid_, "") };
    inline CheckControlPlaneLogEnableResponseBody& setAliuid(string aliuid) { DARABONBA_PTR_SET_VALUE(aliuid_, aliuid) };


    // components Field Functions 
    bool hasComponents() const { return this->components_ != nullptr;};
    void deleteComponents() { this->components_ = nullptr;};
    inline const vector<string> & getComponents() const { DARABONBA_PTR_GET_CONST(components_, vector<string>) };
    inline vector<string> getComponents() { DARABONBA_PTR_GET(components_, vector<string>) };
    inline CheckControlPlaneLogEnableResponseBody& setComponents(const vector<string> & components) { DARABONBA_PTR_SET_VALUE(components_, components) };
    inline CheckControlPlaneLogEnableResponseBody& setComponents(vector<string> && components) { DARABONBA_PTR_SET_RVALUE(components_, components) };


    // logProject Field Functions 
    bool hasLogProject() const { return this->logProject_ != nullptr;};
    void deleteLogProject() { this->logProject_ = nullptr;};
    inline string getLogProject() const { DARABONBA_PTR_GET_DEFAULT(logProject_, "") };
    inline CheckControlPlaneLogEnableResponseBody& setLogProject(string logProject) { DARABONBA_PTR_SET_VALUE(logProject_, logProject) };


    // logTtl Field Functions 
    bool hasLogTtl() const { return this->logTtl_ != nullptr;};
    void deleteLogTtl() { this->logTtl_ = nullptr;};
    inline string getLogTtl() const { DARABONBA_PTR_GET_DEFAULT(logTtl_, "") };
    inline CheckControlPlaneLogEnableResponseBody& setLogTtl(string logTtl) { DARABONBA_PTR_SET_VALUE(logTtl_, logTtl) };


  protected:
    // The ID of the Alibaba Cloud account to which the resource belongs.
    shared_ptr<string> aliuid_ {};
    // The control plane components for which log collection is enabled.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> components_ {};
    // The name of the Simple Log Service project that you want to use to store the logs of control plane components.
    // 
    // Default value: k8s-log-$Cluster ID.
    shared_ptr<string> logProject_ {};
    // The retention period of the log data stored in the Logstore. Valid values: 1 to 3000. Unit: days.
    // 
    // Default value: 30.
    shared_ptr<string> logTtl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
