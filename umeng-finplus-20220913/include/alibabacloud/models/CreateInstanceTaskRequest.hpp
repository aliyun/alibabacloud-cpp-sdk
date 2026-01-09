// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINSTANCETASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEINSTANCETASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace UmengFinplus20220913
{
namespace Models
{
  class CreateInstanceTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateInstanceTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(CalbackUrl, calbackUrl_);
      DARABONBA_PTR_TO_JSON(ClientId, clientId_);
      DARABONBA_PTR_TO_JSON(DatasetIds, datasetIds_);
      DARABONBA_PTR_TO_JSON(MonitorType, monitorType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OutputConfig, outputConfig_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ScoreStrategyConfig, scoreStrategyConfig_);
    };
    friend void from_json(const Darabonba::Json& j, CreateInstanceTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(CalbackUrl, calbackUrl_);
      DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
      DARABONBA_PTR_FROM_JSON(DatasetIds, datasetIds_);
      DARABONBA_PTR_FROM_JSON(MonitorType, monitorType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OutputConfig, outputConfig_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ScoreStrategyConfig, scoreStrategyConfig_);
    };
    CreateInstanceTaskRequest() = default ;
    CreateInstanceTaskRequest(const CreateInstanceTaskRequest &) = default ;
    CreateInstanceTaskRequest(CreateInstanceTaskRequest &&) = default ;
    CreateInstanceTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateInstanceTaskRequest() = default ;
    CreateInstanceTaskRequest& operator=(const CreateInstanceTaskRequest &) = default ;
    CreateInstanceTaskRequest& operator=(CreateInstanceTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->calbackUrl_ == nullptr && this->clientId_ == nullptr && this->datasetIds_ == nullptr && this->monitorType_ == nullptr && this->name_ == nullptr
        && this->outputConfig_ == nullptr && this->requestId_ == nullptr && this->scoreStrategyConfig_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline int64_t getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, 0L) };
    inline CreateInstanceTaskRequest& setAppId(int64_t appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // calbackUrl Field Functions 
    bool hasCalbackUrl() const { return this->calbackUrl_ != nullptr;};
    void deleteCalbackUrl() { this->calbackUrl_ = nullptr;};
    inline string getCalbackUrl() const { DARABONBA_PTR_GET_DEFAULT(calbackUrl_, "") };
    inline CreateInstanceTaskRequest& setCalbackUrl(string calbackUrl) { DARABONBA_PTR_SET_VALUE(calbackUrl_, calbackUrl) };


    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline int64_t getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, 0L) };
    inline CreateInstanceTaskRequest& setClientId(int64_t clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // datasetIds Field Functions 
    bool hasDatasetIds() const { return this->datasetIds_ != nullptr;};
    void deleteDatasetIds() { this->datasetIds_ = nullptr;};
    inline string getDatasetIds() const { DARABONBA_PTR_GET_DEFAULT(datasetIds_, "") };
    inline CreateInstanceTaskRequest& setDatasetIds(string datasetIds) { DARABONBA_PTR_SET_VALUE(datasetIds_, datasetIds) };


    // monitorType Field Functions 
    bool hasMonitorType() const { return this->monitorType_ != nullptr;};
    void deleteMonitorType() { this->monitorType_ = nullptr;};
    inline string getMonitorType() const { DARABONBA_PTR_GET_DEFAULT(monitorType_, "") };
    inline CreateInstanceTaskRequest& setMonitorType(string monitorType) { DARABONBA_PTR_SET_VALUE(monitorType_, monitorType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateInstanceTaskRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // outputConfig Field Functions 
    bool hasOutputConfig() const { return this->outputConfig_ != nullptr;};
    void deleteOutputConfig() { this->outputConfig_ = nullptr;};
    inline string getOutputConfig() const { DARABONBA_PTR_GET_DEFAULT(outputConfig_, "") };
    inline CreateInstanceTaskRequest& setOutputConfig(string outputConfig) { DARABONBA_PTR_SET_VALUE(outputConfig_, outputConfig) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateInstanceTaskRequest& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scoreStrategyConfig Field Functions 
    bool hasScoreStrategyConfig() const { return this->scoreStrategyConfig_ != nullptr;};
    void deleteScoreStrategyConfig() { this->scoreStrategyConfig_ = nullptr;};
    inline string getScoreStrategyConfig() const { DARABONBA_PTR_GET_DEFAULT(scoreStrategyConfig_, "") };
    inline CreateInstanceTaskRequest& setScoreStrategyConfig(string scoreStrategyConfig) { DARABONBA_PTR_SET_VALUE(scoreStrategyConfig_, scoreStrategyConfig) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> appId_ {};
    shared_ptr<string> calbackUrl_ {};
    shared_ptr<int64_t> clientId_ {};
    // This parameter is required.
    shared_ptr<string> datasetIds_ {};
    shared_ptr<string> monitorType_ {};
    // This parameter is required.
    shared_ptr<string> name_ {};
    shared_ptr<string> outputConfig_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> scoreStrategyConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace UmengFinplus20220913
#endif
