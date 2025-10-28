// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTK8SINGRESSRULESRESPONSEBODYDATAINGRESSCONFSRULESPATHS_HPP_
#define ALIBABACLOUD_MODELS_LISTK8SINGRESSRULESRESPONSEBODYDATAINGRESSCONFSRULESPATHS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListK8sIngressRulesResponseBodyDataIngressConfsRulesPathsBackend.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListK8sIngressRulesResponseBodyDataIngressConfsRulesPaths : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListK8sIngressRulesResponseBodyDataIngressConfsRulesPaths& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(Backend, backend_);
      DARABONBA_PTR_TO_JSON(CollectRate, collectRate_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(PathType, pathType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListK8sIngressRulesResponseBodyDataIngressConfsRulesPaths& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(Backend, backend_);
      DARABONBA_PTR_FROM_JSON(CollectRate, collectRate_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(PathType, pathType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListK8sIngressRulesResponseBodyDataIngressConfsRulesPaths() = default ;
    ListK8sIngressRulesResponseBodyDataIngressConfsRulesPaths(const ListK8sIngressRulesResponseBodyDataIngressConfsRulesPaths &) = default ;
    ListK8sIngressRulesResponseBodyDataIngressConfsRulesPaths(ListK8sIngressRulesResponseBodyDataIngressConfsRulesPaths &&) = default ;
    ListK8sIngressRulesResponseBodyDataIngressConfsRulesPaths(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListK8sIngressRulesResponseBodyDataIngressConfsRulesPaths() = default ;
    ListK8sIngressRulesResponseBodyDataIngressConfsRulesPaths& operator=(const ListK8sIngressRulesResponseBodyDataIngressConfsRulesPaths &) = default ;
    ListK8sIngressRulesResponseBodyDataIngressConfsRulesPaths& operator=(ListK8sIngressRulesResponseBodyDataIngressConfsRulesPaths &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->appName_ == nullptr && return this->backend_ == nullptr && return this->collectRate_ == nullptr && return this->path_ == nullptr && return this->pathType_ == nullptr
        && return this->status_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ListK8sIngressRulesResponseBodyDataIngressConfsRulesPaths& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ListK8sIngressRulesResponseBodyDataIngressConfsRulesPaths& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // backend Field Functions 
    bool hasBackend() const { return this->backend_ != nullptr;};
    void deleteBackend() { this->backend_ = nullptr;};
    inline const Models::ListK8sIngressRulesResponseBodyDataIngressConfsRulesPathsBackend & backend() const { DARABONBA_PTR_GET_CONST(backend_, Models::ListK8sIngressRulesResponseBodyDataIngressConfsRulesPathsBackend) };
    inline Models::ListK8sIngressRulesResponseBodyDataIngressConfsRulesPathsBackend backend() { DARABONBA_PTR_GET(backend_, Models::ListK8sIngressRulesResponseBodyDataIngressConfsRulesPathsBackend) };
    inline ListK8sIngressRulesResponseBodyDataIngressConfsRulesPaths& setBackend(const Models::ListK8sIngressRulesResponseBodyDataIngressConfsRulesPathsBackend & backend) { DARABONBA_PTR_SET_VALUE(backend_, backend) };
    inline ListK8sIngressRulesResponseBodyDataIngressConfsRulesPaths& setBackend(Models::ListK8sIngressRulesResponseBodyDataIngressConfsRulesPathsBackend && backend) { DARABONBA_PTR_SET_RVALUE(backend_, backend) };


    // collectRate Field Functions 
    bool hasCollectRate() const { return this->collectRate_ != nullptr;};
    void deleteCollectRate() { this->collectRate_ = nullptr;};
    inline int32_t collectRate() const { DARABONBA_PTR_GET_DEFAULT(collectRate_, 0) };
    inline ListK8sIngressRulesResponseBodyDataIngressConfsRulesPaths& setCollectRate(int32_t collectRate) { DARABONBA_PTR_SET_VALUE(collectRate_, collectRate) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline ListK8sIngressRulesResponseBodyDataIngressConfsRulesPaths& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // pathType Field Functions 
    bool hasPathType() const { return this->pathType_ != nullptr;};
    void deletePathType() { this->pathType_ = nullptr;};
    inline string pathType() const { DARABONBA_PTR_GET_DEFAULT(pathType_, "") };
    inline ListK8sIngressRulesResponseBodyDataIngressConfsRulesPaths& setPathType(string pathType) { DARABONBA_PTR_SET_VALUE(pathType_, pathType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListK8sIngressRulesResponseBodyDataIngressConfsRulesPaths& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The ID of the EDAS application.
    std::shared_ptr<string> appId_ = nullptr;
    // The name of the EDAS application.
    std::shared_ptr<string> appName_ = nullptr;
    // The configurations of the backend Service.
    std::shared_ptr<Models::ListK8sIngressRulesResponseBodyDataIngressConfsRulesPathsBackend> backend_ = nullptr;
    // The collection rate that is set based on the trace query feature. You can add a trace ID to a gateway to use the trace query feature of EDAS.
    std::shared_ptr<int32_t> collectRate_ = nullptr;
    // The path to be accessed.
    std::shared_ptr<string> path_ = nullptr;
    // The path type that determines how a path is matched.
    // 
    // *   ImplementationSpecific (default)
    // *   Exact
    // *   Prefix
    std::shared_ptr<string> pathType_ = nullptr;
    // The state of the Ingress. Valid values:
    // 
    // *   **Normal**: The Ingress works as expected.
    // *   **ServiceNotFound**: The backend Service does not exist.
    // *   **InvalidServicePort**: The Service port is invalid.
    // *   **NotManagedService**: The Service is not managed by EDAS.
    // *   **Unknown**: An unknown error occurred.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
