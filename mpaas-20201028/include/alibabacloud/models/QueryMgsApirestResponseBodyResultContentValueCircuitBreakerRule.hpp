// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMGSAPIRESTRESPONSEBODYRESULTCONTENTVALUECIRCUITBREAKERRULE_HPP_
#define ALIBABACLOUD_MODELS_QUERYMGSAPIRESTRESPONSEBODYRESULTCONTENTVALUECIRCUITBREAKERRULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class QueryMgsApirestResponseBodyResultContentValueCircuitBreakerRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMgsApirestResponseBodyResultContentValueCircuitBreakerRule& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(DefaultResponse, defaultResponse_);
      DARABONBA_PTR_TO_JSON(ErrorThreshold, errorThreshold_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(OpenTimeoutSeconds, openTimeoutSeconds_);
      DARABONBA_PTR_TO_JSON(SlowRatioThreshold, slowRatioThreshold_);
      DARABONBA_PTR_TO_JSON(SwitchStatus, switchStatus_);
      DARABONBA_PTR_TO_JSON(WindowsInSeconds, windowsInSeconds_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMgsApirestResponseBodyResultContentValueCircuitBreakerRule& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(DefaultResponse, defaultResponse_);
      DARABONBA_PTR_FROM_JSON(ErrorThreshold, errorThreshold_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(OpenTimeoutSeconds, openTimeoutSeconds_);
      DARABONBA_PTR_FROM_JSON(SlowRatioThreshold, slowRatioThreshold_);
      DARABONBA_PTR_FROM_JSON(SwitchStatus, switchStatus_);
      DARABONBA_PTR_FROM_JSON(WindowsInSeconds, windowsInSeconds_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    QueryMgsApirestResponseBodyResultContentValueCircuitBreakerRule() = default ;
    QueryMgsApirestResponseBodyResultContentValueCircuitBreakerRule(const QueryMgsApirestResponseBodyResultContentValueCircuitBreakerRule &) = default ;
    QueryMgsApirestResponseBodyResultContentValueCircuitBreakerRule(QueryMgsApirestResponseBodyResultContentValueCircuitBreakerRule &&) = default ;
    QueryMgsApirestResponseBodyResultContentValueCircuitBreakerRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMgsApirestResponseBodyResultContentValueCircuitBreakerRule() = default ;
    QueryMgsApirestResponseBodyResultContentValueCircuitBreakerRule& operator=(const QueryMgsApirestResponseBodyResultContentValueCircuitBreakerRule &) = default ;
    QueryMgsApirestResponseBodyResultContentValueCircuitBreakerRule& operator=(QueryMgsApirestResponseBodyResultContentValueCircuitBreakerRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->defaultResponse_ != nullptr && this->errorThreshold_ != nullptr && this->id_ != nullptr && this->model_ != nullptr && this->openTimeoutSeconds_ != nullptr
        && this->slowRatioThreshold_ != nullptr && this->switchStatus_ != nullptr && this->windowsInSeconds_ != nullptr && this->workspaceId_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline QueryMgsApirestResponseBodyResultContentValueCircuitBreakerRule& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // defaultResponse Field Functions 
    bool hasDefaultResponse() const { return this->defaultResponse_ != nullptr;};
    void deleteDefaultResponse() { this->defaultResponse_ = nullptr;};
    inline string defaultResponse() const { DARABONBA_PTR_GET_DEFAULT(defaultResponse_, "") };
    inline QueryMgsApirestResponseBodyResultContentValueCircuitBreakerRule& setDefaultResponse(string defaultResponse) { DARABONBA_PTR_SET_VALUE(defaultResponse_, defaultResponse) };


    // errorThreshold Field Functions 
    bool hasErrorThreshold() const { return this->errorThreshold_ != nullptr;};
    void deleteErrorThreshold() { this->errorThreshold_ = nullptr;};
    inline int64_t errorThreshold() const { DARABONBA_PTR_GET_DEFAULT(errorThreshold_, 0L) };
    inline QueryMgsApirestResponseBodyResultContentValueCircuitBreakerRule& setErrorThreshold(int64_t errorThreshold) { DARABONBA_PTR_SET_VALUE(errorThreshold_, errorThreshold) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline QueryMgsApirestResponseBodyResultContentValueCircuitBreakerRule& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string model() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline QueryMgsApirestResponseBodyResultContentValueCircuitBreakerRule& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // openTimeoutSeconds Field Functions 
    bool hasOpenTimeoutSeconds() const { return this->openTimeoutSeconds_ != nullptr;};
    void deleteOpenTimeoutSeconds() { this->openTimeoutSeconds_ = nullptr;};
    inline int64_t openTimeoutSeconds() const { DARABONBA_PTR_GET_DEFAULT(openTimeoutSeconds_, 0L) };
    inline QueryMgsApirestResponseBodyResultContentValueCircuitBreakerRule& setOpenTimeoutSeconds(int64_t openTimeoutSeconds) { DARABONBA_PTR_SET_VALUE(openTimeoutSeconds_, openTimeoutSeconds) };


    // slowRatioThreshold Field Functions 
    bool hasSlowRatioThreshold() const { return this->slowRatioThreshold_ != nullptr;};
    void deleteSlowRatioThreshold() { this->slowRatioThreshold_ = nullptr;};
    inline double slowRatioThreshold() const { DARABONBA_PTR_GET_DEFAULT(slowRatioThreshold_, 0.0) };
    inline QueryMgsApirestResponseBodyResultContentValueCircuitBreakerRule& setSlowRatioThreshold(double slowRatioThreshold) { DARABONBA_PTR_SET_VALUE(slowRatioThreshold_, slowRatioThreshold) };


    // switchStatus Field Functions 
    bool hasSwitchStatus() const { return this->switchStatus_ != nullptr;};
    void deleteSwitchStatus() { this->switchStatus_ = nullptr;};
    inline string switchStatus() const { DARABONBA_PTR_GET_DEFAULT(switchStatus_, "") };
    inline QueryMgsApirestResponseBodyResultContentValueCircuitBreakerRule& setSwitchStatus(string switchStatus) { DARABONBA_PTR_SET_VALUE(switchStatus_, switchStatus) };


    // windowsInSeconds Field Functions 
    bool hasWindowsInSeconds() const { return this->windowsInSeconds_ != nullptr;};
    void deleteWindowsInSeconds() { this->windowsInSeconds_ = nullptr;};
    inline int64_t windowsInSeconds() const { DARABONBA_PTR_GET_DEFAULT(windowsInSeconds_, 0L) };
    inline QueryMgsApirestResponseBodyResultContentValueCircuitBreakerRule& setWindowsInSeconds(int64_t windowsInSeconds) { DARABONBA_PTR_SET_VALUE(windowsInSeconds_, windowsInSeconds) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline QueryMgsApirestResponseBodyResultContentValueCircuitBreakerRule& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> defaultResponse_ = nullptr;
    std::shared_ptr<int64_t> errorThreshold_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> model_ = nullptr;
    std::shared_ptr<int64_t> openTimeoutSeconds_ = nullptr;
    std::shared_ptr<double> slowRatioThreshold_ = nullptr;
    std::shared_ptr<string> switchStatus_ = nullptr;
    std::shared_ptr<int64_t> windowsInSeconds_ = nullptr;
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
