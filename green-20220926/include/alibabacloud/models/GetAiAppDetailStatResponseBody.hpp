// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAIAPPDETAILSTATRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAIAPPDETAILSTATRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class GetAiAppDetailStatResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAiAppDetailStatResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AvgModelDuration, avgModelDuration_);
      DARABONBA_PTR_TO_JSON(AvgModelDurationDau, avgModelDurationDau_);
      DARABONBA_PTR_TO_JSON(ModelCount, modelCount_);
      DARABONBA_PTR_TO_JSON(ModelCountDau, modelCountDau_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RiskEventCount, riskEventCount_);
      DARABONBA_PTR_TO_JSON(TokenCount, tokenCount_);
      DARABONBA_PTR_TO_JSON(TokenCountDau, tokenCountDau_);
    };
    friend void from_json(const Darabonba::Json& j, GetAiAppDetailStatResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AvgModelDuration, avgModelDuration_);
      DARABONBA_PTR_FROM_JSON(AvgModelDurationDau, avgModelDurationDau_);
      DARABONBA_PTR_FROM_JSON(ModelCount, modelCount_);
      DARABONBA_PTR_FROM_JSON(ModelCountDau, modelCountDau_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RiskEventCount, riskEventCount_);
      DARABONBA_PTR_FROM_JSON(TokenCount, tokenCount_);
      DARABONBA_PTR_FROM_JSON(TokenCountDau, tokenCountDau_);
    };
    GetAiAppDetailStatResponseBody() = default ;
    GetAiAppDetailStatResponseBody(const GetAiAppDetailStatResponseBody &) = default ;
    GetAiAppDetailStatResponseBody(GetAiAppDetailStatResponseBody &&) = default ;
    GetAiAppDetailStatResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAiAppDetailStatResponseBody() = default ;
    GetAiAppDetailStatResponseBody& operator=(const GetAiAppDetailStatResponseBody &) = default ;
    GetAiAppDetailStatResponseBody& operator=(GetAiAppDetailStatResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->avgModelDuration_ == nullptr && this->avgModelDurationDau_ == nullptr && this->modelCount_ == nullptr && this->modelCountDau_ == nullptr && this->requestId_ == nullptr
        && this->riskEventCount_ == nullptr && this->tokenCount_ == nullptr && this->tokenCountDau_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline GetAiAppDetailStatResponseBody& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // avgModelDuration Field Functions 
    bool hasAvgModelDuration() const { return this->avgModelDuration_ != nullptr;};
    void deleteAvgModelDuration() { this->avgModelDuration_ = nullptr;};
    inline float getAvgModelDuration() const { DARABONBA_PTR_GET_DEFAULT(avgModelDuration_, 0.0) };
    inline GetAiAppDetailStatResponseBody& setAvgModelDuration(float avgModelDuration) { DARABONBA_PTR_SET_VALUE(avgModelDuration_, avgModelDuration) };


    // avgModelDurationDau Field Functions 
    bool hasAvgModelDurationDau() const { return this->avgModelDurationDau_ != nullptr;};
    void deleteAvgModelDurationDau() { this->avgModelDurationDau_ = nullptr;};
    inline float getAvgModelDurationDau() const { DARABONBA_PTR_GET_DEFAULT(avgModelDurationDau_, 0.0) };
    inline GetAiAppDetailStatResponseBody& setAvgModelDurationDau(float avgModelDurationDau) { DARABONBA_PTR_SET_VALUE(avgModelDurationDau_, avgModelDurationDau) };


    // modelCount Field Functions 
    bool hasModelCount() const { return this->modelCount_ != nullptr;};
    void deleteModelCount() { this->modelCount_ = nullptr;};
    inline int64_t getModelCount() const { DARABONBA_PTR_GET_DEFAULT(modelCount_, 0L) };
    inline GetAiAppDetailStatResponseBody& setModelCount(int64_t modelCount) { DARABONBA_PTR_SET_VALUE(modelCount_, modelCount) };


    // modelCountDau Field Functions 
    bool hasModelCountDau() const { return this->modelCountDau_ != nullptr;};
    void deleteModelCountDau() { this->modelCountDau_ = nullptr;};
    inline float getModelCountDau() const { DARABONBA_PTR_GET_DEFAULT(modelCountDau_, 0.0) };
    inline GetAiAppDetailStatResponseBody& setModelCountDau(float modelCountDau) { DARABONBA_PTR_SET_VALUE(modelCountDau_, modelCountDau) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAiAppDetailStatResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // riskEventCount Field Functions 
    bool hasRiskEventCount() const { return this->riskEventCount_ != nullptr;};
    void deleteRiskEventCount() { this->riskEventCount_ = nullptr;};
    inline int64_t getRiskEventCount() const { DARABONBA_PTR_GET_DEFAULT(riskEventCount_, 0L) };
    inline GetAiAppDetailStatResponseBody& setRiskEventCount(int64_t riskEventCount) { DARABONBA_PTR_SET_VALUE(riskEventCount_, riskEventCount) };


    // tokenCount Field Functions 
    bool hasTokenCount() const { return this->tokenCount_ != nullptr;};
    void deleteTokenCount() { this->tokenCount_ = nullptr;};
    inline int64_t getTokenCount() const { DARABONBA_PTR_GET_DEFAULT(tokenCount_, 0L) };
    inline GetAiAppDetailStatResponseBody& setTokenCount(int64_t tokenCount) { DARABONBA_PTR_SET_VALUE(tokenCount_, tokenCount) };


    // tokenCountDau Field Functions 
    bool hasTokenCountDau() const { return this->tokenCountDau_ != nullptr;};
    void deleteTokenCountDau() { this->tokenCountDau_ = nullptr;};
    inline float getTokenCountDau() const { DARABONBA_PTR_GET_DEFAULT(tokenCountDau_, 0.0) };
    inline GetAiAppDetailStatResponseBody& setTokenCountDau(float tokenCountDau) { DARABONBA_PTR_SET_VALUE(tokenCountDau_, tokenCountDau) };


  protected:
    // The application ID.
    shared_ptr<string> appId_ {};
    // The average duration of model calls.
    shared_ptr<float> avgModelDuration_ {};
    // The day-over-day change ratio of average model call duration.
    shared_ptr<float> avgModelDurationDau_ {};
    // The number of model calls.
    shared_ptr<int64_t> modelCount_ {};
    // The day-over-day change ratio of model call count.
    shared_ptr<float> modelCountDau_ {};
    // The ID assigned by the backend to uniquely identify a request. You can use this ID to troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The number of risk events.
    shared_ptr<int64_t> riskEventCount_ {};
    // The number of tokens consumed.
    shared_ptr<int64_t> tokenCount_ {};
    // The day-over-day change ratio of token consumption count.
    shared_ptr<float> tokenCountDau_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
