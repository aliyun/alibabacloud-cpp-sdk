// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPROMETHEUSVIEWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPROMETHEUSVIEWREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdatePrometheusViewRequestPrometheusInstances.hpp>
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
    virtual bool empty() const override { return this->authFreeReadPolicy_ == nullptr
        && return this->enableAuthFreeRead_ == nullptr && return this->enableAuthToken_ == nullptr && return this->prometheusInstances_ == nullptr && return this->prometheusViewName_ == nullptr && return this->status_ == nullptr
        && return this->workspace_ == nullptr; };
    // authFreeReadPolicy Field Functions 
    bool hasAuthFreeReadPolicy() const { return this->authFreeReadPolicy_ != nullptr;};
    void deleteAuthFreeReadPolicy() { this->authFreeReadPolicy_ = nullptr;};
    inline string authFreeReadPolicy() const { DARABONBA_PTR_GET_DEFAULT(authFreeReadPolicy_, "") };
    inline UpdatePrometheusViewRequest& setAuthFreeReadPolicy(string authFreeReadPolicy) { DARABONBA_PTR_SET_VALUE(authFreeReadPolicy_, authFreeReadPolicy) };


    // enableAuthFreeRead Field Functions 
    bool hasEnableAuthFreeRead() const { return this->enableAuthFreeRead_ != nullptr;};
    void deleteEnableAuthFreeRead() { this->enableAuthFreeRead_ = nullptr;};
    inline bool enableAuthFreeRead() const { DARABONBA_PTR_GET_DEFAULT(enableAuthFreeRead_, false) };
    inline UpdatePrometheusViewRequest& setEnableAuthFreeRead(bool enableAuthFreeRead) { DARABONBA_PTR_SET_VALUE(enableAuthFreeRead_, enableAuthFreeRead) };


    // enableAuthToken Field Functions 
    bool hasEnableAuthToken() const { return this->enableAuthToken_ != nullptr;};
    void deleteEnableAuthToken() { this->enableAuthToken_ = nullptr;};
    inline bool enableAuthToken() const { DARABONBA_PTR_GET_DEFAULT(enableAuthToken_, false) };
    inline UpdatePrometheusViewRequest& setEnableAuthToken(bool enableAuthToken) { DARABONBA_PTR_SET_VALUE(enableAuthToken_, enableAuthToken) };


    // prometheusInstances Field Functions 
    bool hasPrometheusInstances() const { return this->prometheusInstances_ != nullptr;};
    void deletePrometheusInstances() { this->prometheusInstances_ = nullptr;};
    inline const vector<UpdatePrometheusViewRequestPrometheusInstances> & prometheusInstances() const { DARABONBA_PTR_GET_CONST(prometheusInstances_, vector<UpdatePrometheusViewRequestPrometheusInstances>) };
    inline vector<UpdatePrometheusViewRequestPrometheusInstances> prometheusInstances() { DARABONBA_PTR_GET(prometheusInstances_, vector<UpdatePrometheusViewRequestPrometheusInstances>) };
    inline UpdatePrometheusViewRequest& setPrometheusInstances(const vector<UpdatePrometheusViewRequestPrometheusInstances> & prometheusInstances) { DARABONBA_PTR_SET_VALUE(prometheusInstances_, prometheusInstances) };
    inline UpdatePrometheusViewRequest& setPrometheusInstances(vector<UpdatePrometheusViewRequestPrometheusInstances> && prometheusInstances) { DARABONBA_PTR_SET_RVALUE(prometheusInstances_, prometheusInstances) };


    // prometheusViewName Field Functions 
    bool hasPrometheusViewName() const { return this->prometheusViewName_ != nullptr;};
    void deletePrometheusViewName() { this->prometheusViewName_ = nullptr;};
    inline string prometheusViewName() const { DARABONBA_PTR_GET_DEFAULT(prometheusViewName_, "") };
    inline UpdatePrometheusViewRequest& setPrometheusViewName(string prometheusViewName) { DARABONBA_PTR_SET_VALUE(prometheusViewName_, prometheusViewName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpdatePrometheusViewRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string workspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline UpdatePrometheusViewRequest& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    std::shared_ptr<string> authFreeReadPolicy_ = nullptr;
    std::shared_ptr<bool> enableAuthFreeRead_ = nullptr;
    std::shared_ptr<bool> enableAuthToken_ = nullptr;
    std::shared_ptr<vector<UpdatePrometheusViewRequestPrometheusInstances>> prometheusInstances_ = nullptr;
    std::shared_ptr<string> prometheusViewName_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> workspace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
