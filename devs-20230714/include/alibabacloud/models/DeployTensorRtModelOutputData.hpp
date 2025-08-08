// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEPLOYTENSORRTMODELOUTPUTDATA_HPP_
#define ALIBABACLOUD_MODELS_DEPLOYTENSORRTMODELOUTPUTDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class DeployTensorRtModelOutputData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeployTensorRtModelOutputData& obj) { 
      DARABONBA_PTR_TO_JSON(deploymentTaskID, deploymentTaskID_);
      DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(finished, finished_);
      DARABONBA_PTR_TO_JSON(serviceName, serviceName_);
      DARABONBA_PTR_TO_JSON(traceID, traceID_);
      DARABONBA_PTR_TO_JSON(urlInternet, urlInternet_);
      DARABONBA_PTR_TO_JSON(urlIntranet, urlIntranet_);
    };
    friend void from_json(const Darabonba::Json& j, DeployTensorRtModelOutputData& obj) { 
      DARABONBA_PTR_FROM_JSON(deploymentTaskID, deploymentTaskID_);
      DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(finished, finished_);
      DARABONBA_PTR_FROM_JSON(serviceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(traceID, traceID_);
      DARABONBA_PTR_FROM_JSON(urlInternet, urlInternet_);
      DARABONBA_PTR_FROM_JSON(urlIntranet, urlIntranet_);
    };
    DeployTensorRtModelOutputData() = default ;
    DeployTensorRtModelOutputData(const DeployTensorRtModelOutputData &) = default ;
    DeployTensorRtModelOutputData(DeployTensorRtModelOutputData &&) = default ;
    DeployTensorRtModelOutputData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeployTensorRtModelOutputData() = default ;
    DeployTensorRtModelOutputData& operator=(const DeployTensorRtModelOutputData &) = default ;
    DeployTensorRtModelOutputData& operator=(DeployTensorRtModelOutputData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deploymentTaskID_ != nullptr
        && this->errorMessage_ != nullptr && this->finished_ != nullptr && this->serviceName_ != nullptr && this->traceID_ != nullptr && this->urlInternet_ != nullptr
        && this->urlIntranet_ != nullptr; };
    // deploymentTaskID Field Functions 
    bool hasDeploymentTaskID() const { return this->deploymentTaskID_ != nullptr;};
    void deleteDeploymentTaskID() { this->deploymentTaskID_ = nullptr;};
    inline string deploymentTaskID() const { DARABONBA_PTR_GET_DEFAULT(deploymentTaskID_, "") };
    inline DeployTensorRtModelOutputData& setDeploymentTaskID(string deploymentTaskID) { DARABONBA_PTR_SET_VALUE(deploymentTaskID_, deploymentTaskID) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline DeployTensorRtModelOutputData& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // finished Field Functions 
    bool hasFinished() const { return this->finished_ != nullptr;};
    void deleteFinished() { this->finished_ = nullptr;};
    inline bool finished() const { DARABONBA_PTR_GET_DEFAULT(finished_, false) };
    inline DeployTensorRtModelOutputData& setFinished(bool finished) { DARABONBA_PTR_SET_VALUE(finished_, finished) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline DeployTensorRtModelOutputData& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // traceID Field Functions 
    bool hasTraceID() const { return this->traceID_ != nullptr;};
    void deleteTraceID() { this->traceID_ = nullptr;};
    inline string traceID() const { DARABONBA_PTR_GET_DEFAULT(traceID_, "") };
    inline DeployTensorRtModelOutputData& setTraceID(string traceID) { DARABONBA_PTR_SET_VALUE(traceID_, traceID) };


    // urlInternet Field Functions 
    bool hasUrlInternet() const { return this->urlInternet_ != nullptr;};
    void deleteUrlInternet() { this->urlInternet_ = nullptr;};
    inline string urlInternet() const { DARABONBA_PTR_GET_DEFAULT(urlInternet_, "") };
    inline DeployTensorRtModelOutputData& setUrlInternet(string urlInternet) { DARABONBA_PTR_SET_VALUE(urlInternet_, urlInternet) };


    // urlIntranet Field Functions 
    bool hasUrlIntranet() const { return this->urlIntranet_ != nullptr;};
    void deleteUrlIntranet() { this->urlIntranet_ = nullptr;};
    inline string urlIntranet() const { DARABONBA_PTR_GET_DEFAULT(urlIntranet_, "") };
    inline DeployTensorRtModelOutputData& setUrlIntranet(string urlIntranet) { DARABONBA_PTR_SET_VALUE(urlIntranet_, urlIntranet) };


  protected:
    std::shared_ptr<string> deploymentTaskID_ = nullptr;
    std::shared_ptr<string> errorMessage_ = nullptr;
    std::shared_ptr<bool> finished_ = nullptr;
    std::shared_ptr<string> serviceName_ = nullptr;
    std::shared_ptr<string> traceID_ = nullptr;
    std::shared_ptr<string> urlInternet_ = nullptr;
    std::shared_ptr<string> urlIntranet_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
