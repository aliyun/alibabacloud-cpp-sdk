// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECONTROLPLANELOGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECONTROLPLANELOGREQUEST_HPP_
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
  class UpdateControlPlaneLogRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateControlPlaneLogRequest& obj) { 
      DARABONBA_PTR_TO_JSON(aliuid, aliuid_);
      DARABONBA_PTR_TO_JSON(components, components_);
      DARABONBA_PTR_TO_JSON(log_project, logProject_);
      DARABONBA_PTR_TO_JSON(log_ttl, logTtl_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateControlPlaneLogRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(aliuid, aliuid_);
      DARABONBA_PTR_FROM_JSON(components, components_);
      DARABONBA_PTR_FROM_JSON(log_project, logProject_);
      DARABONBA_PTR_FROM_JSON(log_ttl, logTtl_);
    };
    UpdateControlPlaneLogRequest() = default ;
    UpdateControlPlaneLogRequest(const UpdateControlPlaneLogRequest &) = default ;
    UpdateControlPlaneLogRequest(UpdateControlPlaneLogRequest &&) = default ;
    UpdateControlPlaneLogRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateControlPlaneLogRequest() = default ;
    UpdateControlPlaneLogRequest& operator=(const UpdateControlPlaneLogRequest &) = default ;
    UpdateControlPlaneLogRequest& operator=(UpdateControlPlaneLogRequest &&) = default ;
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
    inline UpdateControlPlaneLogRequest& setAliuid(string aliuid) { DARABONBA_PTR_SET_VALUE(aliuid_, aliuid) };


    // components Field Functions 
    bool hasComponents() const { return this->components_ != nullptr;};
    void deleteComponents() { this->components_ = nullptr;};
    inline const vector<string> & getComponents() const { DARABONBA_PTR_GET_CONST(components_, vector<string>) };
    inline vector<string> getComponents() { DARABONBA_PTR_GET(components_, vector<string>) };
    inline UpdateControlPlaneLogRequest& setComponents(const vector<string> & components) { DARABONBA_PTR_SET_VALUE(components_, components) };
    inline UpdateControlPlaneLogRequest& setComponents(vector<string> && components) { DARABONBA_PTR_SET_RVALUE(components_, components) };


    // logProject Field Functions 
    bool hasLogProject() const { return this->logProject_ != nullptr;};
    void deleteLogProject() { this->logProject_ = nullptr;};
    inline string getLogProject() const { DARABONBA_PTR_GET_DEFAULT(logProject_, "") };
    inline UpdateControlPlaneLogRequest& setLogProject(string logProject) { DARABONBA_PTR_SET_VALUE(logProject_, logProject) };


    // logTtl Field Functions 
    bool hasLogTtl() const { return this->logTtl_ != nullptr;};
    void deleteLogTtl() { this->logTtl_ = nullptr;};
    inline string getLogTtl() const { DARABONBA_PTR_GET_DEFAULT(logTtl_, "") };
    inline UpdateControlPlaneLogRequest& setLogTtl(string logTtl) { DARABONBA_PTR_SET_VALUE(logTtl_, logTtl) };


  protected:
    // The Alibaba Cloud account ID.
    shared_ptr<string> aliuid_ {};
    // The list of components for which control plane logging is enabled.
    shared_ptr<vector<string>> components_ {};
    // The name of the SLS project used to store control plane component logs.
    // 
    // Default value: k8s-log-$Cluster ID.
    shared_ptr<string> logProject_ {};
    // The retention period of logs in the SLS Logstore. Valid values: 1 to 3000. Unit: days.
    // 
    // Default value: 30 days.
    shared_ptr<string> logTtl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
