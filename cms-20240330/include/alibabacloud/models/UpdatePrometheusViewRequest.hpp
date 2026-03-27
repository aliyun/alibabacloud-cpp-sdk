// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPROMETHEUSVIEWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPROMETHEUSVIEWREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class UpdatePrometheusViewRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePrometheusViewRequest& obj) { 
      DARABONBA_PTR_TO_JSON(authFreeReadPolicy, authFreeReadPolicy_);
      DARABONBA_PTR_TO_JSON(enableAuthFreeRead, enableAuthFreeRead_);
      DARABONBA_PTR_TO_JSON(enableAuthToken, enableAuthToken_);
      DARABONBA_PTR_TO_JSON(prometheusInstances, prometheusInstances_);
      DARABONBA_PTR_TO_JSON(prometheusViewName, prometheusViewName_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePrometheusViewRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(authFreeReadPolicy, authFreeReadPolicy_);
      DARABONBA_PTR_FROM_JSON(enableAuthFreeRead, enableAuthFreeRead_);
      DARABONBA_PTR_FROM_JSON(enableAuthToken, enableAuthToken_);
      DARABONBA_PTR_FROM_JSON(prometheusInstances, prometheusInstances_);
      DARABONBA_PTR_FROM_JSON(prometheusViewName, prometheusViewName_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
    };
    UpdatePrometheusViewRequest() = default ;
    UpdatePrometheusViewRequest(const UpdatePrometheusViewRequest &) = default ;
    UpdatePrometheusViewRequest(UpdatePrometheusViewRequest &&) = default ;
    UpdatePrometheusViewRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePrometheusViewRequest() = default ;
    UpdatePrometheusViewRequest& operator=(const UpdatePrometheusViewRequest &) = default ;
    UpdatePrometheusViewRequest& operator=(UpdatePrometheusViewRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PrometheusInstances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PrometheusInstances& obj) { 
        DARABONBA_PTR_TO_JSON(prometheusInstanceId, prometheusInstanceId_);
        DARABONBA_PTR_TO_JSON(regionId, regionId_);
        DARABONBA_PTR_TO_JSON(userId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, PrometheusInstances& obj) { 
        DARABONBA_PTR_FROM_JSON(prometheusInstanceId, prometheusInstanceId_);
        DARABONBA_PTR_FROM_JSON(regionId, regionId_);
        DARABONBA_PTR_FROM_JSON(userId, userId_);
      };
      PrometheusInstances() = default ;
      PrometheusInstances(const PrometheusInstances &) = default ;
      PrometheusInstances(PrometheusInstances &&) = default ;
      PrometheusInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PrometheusInstances() = default ;
      PrometheusInstances& operator=(const PrometheusInstances &) = default ;
      PrometheusInstances& operator=(PrometheusInstances &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->prometheusInstanceId_ == nullptr
        && this->regionId_ == nullptr && this->userId_ == nullptr; };
      // prometheusInstanceId Field Functions 
      bool hasPrometheusInstanceId() const { return this->prometheusInstanceId_ != nullptr;};
      void deletePrometheusInstanceId() { this->prometheusInstanceId_ = nullptr;};
      inline string getPrometheusInstanceId() const { DARABONBA_PTR_GET_DEFAULT(prometheusInstanceId_, "") };
      inline PrometheusInstances& setPrometheusInstanceId(string prometheusInstanceId) { DARABONBA_PTR_SET_VALUE(prometheusInstanceId_, prometheusInstanceId) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline PrometheusInstances& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline PrometheusInstances& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      // Instance ID.
      shared_ptr<string> prometheusInstanceId_ {};
      // Region.
      shared_ptr<string> regionId_ {};
      // User ID.
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->authFreeReadPolicy_ == nullptr
        && this->enableAuthFreeRead_ == nullptr && this->enableAuthToken_ == nullptr && this->prometheusInstances_ == nullptr && this->prometheusViewName_ == nullptr && this->status_ == nullptr
        && this->workspace_ == nullptr; };
    // authFreeReadPolicy Field Functions 
    bool hasAuthFreeReadPolicy() const { return this->authFreeReadPolicy_ != nullptr;};
    void deleteAuthFreeReadPolicy() { this->authFreeReadPolicy_ = nullptr;};
    inline string getAuthFreeReadPolicy() const { DARABONBA_PTR_GET_DEFAULT(authFreeReadPolicy_, "") };
    inline UpdatePrometheusViewRequest& setAuthFreeReadPolicy(string authFreeReadPolicy) { DARABONBA_PTR_SET_VALUE(authFreeReadPolicy_, authFreeReadPolicy) };


    // enableAuthFreeRead Field Functions 
    bool hasEnableAuthFreeRead() const { return this->enableAuthFreeRead_ != nullptr;};
    void deleteEnableAuthFreeRead() { this->enableAuthFreeRead_ = nullptr;};
    inline bool getEnableAuthFreeRead() const { DARABONBA_PTR_GET_DEFAULT(enableAuthFreeRead_, false) };
    inline UpdatePrometheusViewRequest& setEnableAuthFreeRead(bool enableAuthFreeRead) { DARABONBA_PTR_SET_VALUE(enableAuthFreeRead_, enableAuthFreeRead) };


    // enableAuthToken Field Functions 
    bool hasEnableAuthToken() const { return this->enableAuthToken_ != nullptr;};
    void deleteEnableAuthToken() { this->enableAuthToken_ = nullptr;};
    inline bool getEnableAuthToken() const { DARABONBA_PTR_GET_DEFAULT(enableAuthToken_, false) };
    inline UpdatePrometheusViewRequest& setEnableAuthToken(bool enableAuthToken) { DARABONBA_PTR_SET_VALUE(enableAuthToken_, enableAuthToken) };


    // prometheusInstances Field Functions 
    bool hasPrometheusInstances() const { return this->prometheusInstances_ != nullptr;};
    void deletePrometheusInstances() { this->prometheusInstances_ = nullptr;};
    inline const vector<UpdatePrometheusViewRequest::PrometheusInstances> & getPrometheusInstances() const { DARABONBA_PTR_GET_CONST(prometheusInstances_, vector<UpdatePrometheusViewRequest::PrometheusInstances>) };
    inline vector<UpdatePrometheusViewRequest::PrometheusInstances> getPrometheusInstances() { DARABONBA_PTR_GET(prometheusInstances_, vector<UpdatePrometheusViewRequest::PrometheusInstances>) };
    inline UpdatePrometheusViewRequest& setPrometheusInstances(const vector<UpdatePrometheusViewRequest::PrometheusInstances> & prometheusInstances) { DARABONBA_PTR_SET_VALUE(prometheusInstances_, prometheusInstances) };
    inline UpdatePrometheusViewRequest& setPrometheusInstances(vector<UpdatePrometheusViewRequest::PrometheusInstances> && prometheusInstances) { DARABONBA_PTR_SET_RVALUE(prometheusInstances_, prometheusInstances) };


    // prometheusViewName Field Functions 
    bool hasPrometheusViewName() const { return this->prometheusViewName_ != nullptr;};
    void deletePrometheusViewName() { this->prometheusViewName_ = nullptr;};
    inline string getPrometheusViewName() const { DARABONBA_PTR_GET_DEFAULT(prometheusViewName_, "") };
    inline UpdatePrometheusViewRequest& setPrometheusViewName(string prometheusViewName) { DARABONBA_PTR_SET_VALUE(prometheusViewName_, prometheusViewName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpdatePrometheusViewRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline UpdatePrometheusViewRequest& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    // Password-free read policy (supports IP segments and VpcId).
    shared_ptr<string> authFreeReadPolicy_ {};
    // Whether to support password-free read.
    shared_ptr<bool> enableAuthFreeRead_ {};
    // Whether to support authToken.
    shared_ptr<bool> enableAuthToken_ {};
    // List of Prometheus instances.
    shared_ptr<vector<UpdatePrometheusViewRequest::PrometheusInstances>> prometheusInstances_ {};
    // Prometheus view name.
    shared_ptr<string> prometheusViewName_ {};
    // Running status.
    shared_ptr<string> status_ {};
    // Belonging workspace.
    shared_ptr<string> workspace_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
