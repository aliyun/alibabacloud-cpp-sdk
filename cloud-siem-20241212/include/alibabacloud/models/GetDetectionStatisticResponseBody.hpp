// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDETECTIONSTATISTICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDETECTIONSTATISTICRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class GetDetectionStatisticResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDetectionStatisticResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DetectionStatistic, detectionStatistic_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDetectionStatisticResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DetectionStatistic, detectionStatistic_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetDetectionStatisticResponseBody() = default ;
    GetDetectionStatisticResponseBody(const GetDetectionStatisticResponseBody &) = default ;
    GetDetectionStatisticResponseBody(GetDetectionStatisticResponseBody &&) = default ;
    GetDetectionStatisticResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDetectionStatisticResponseBody() = default ;
    GetDetectionStatisticResponseBody& operator=(const GetDetectionStatisticResponseBody &) = default ;
    GetDetectionStatisticResponseBody& operator=(GetDetectionStatisticResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DetectionStatistic : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DetectionStatistic& obj) { 
        DARABONBA_PTR_TO_JSON(DetectionRuleOnlineCount, detectionRuleOnlineCount_);
        DARABONBA_PTR_TO_JSON(DetectionRuleTemplateCount, detectionRuleTemplateCount_);
        DARABONBA_PTR_TO_JSON(DetectionRuleTestCount, detectionRuleTestCount_);
        DARABONBA_PTR_TO_JSON(GraphComputeRuleCount, graphComputeRuleCount_);
        DARABONBA_PTR_TO_JSON(PassthroughRuleCount, passthroughRuleCount_);
        DARABONBA_PTR_TO_JSON(WindowRuleCount, windowRuleCount_);
      };
      friend void from_json(const Darabonba::Json& j, DetectionStatistic& obj) { 
        DARABONBA_PTR_FROM_JSON(DetectionRuleOnlineCount, detectionRuleOnlineCount_);
        DARABONBA_PTR_FROM_JSON(DetectionRuleTemplateCount, detectionRuleTemplateCount_);
        DARABONBA_PTR_FROM_JSON(DetectionRuleTestCount, detectionRuleTestCount_);
        DARABONBA_PTR_FROM_JSON(GraphComputeRuleCount, graphComputeRuleCount_);
        DARABONBA_PTR_FROM_JSON(PassthroughRuleCount, passthroughRuleCount_);
        DARABONBA_PTR_FROM_JSON(WindowRuleCount, windowRuleCount_);
      };
      DetectionStatistic() = default ;
      DetectionStatistic(const DetectionStatistic &) = default ;
      DetectionStatistic(DetectionStatistic &&) = default ;
      DetectionStatistic(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DetectionStatistic() = default ;
      DetectionStatistic& operator=(const DetectionStatistic &) = default ;
      DetectionStatistic& operator=(DetectionStatistic &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->detectionRuleOnlineCount_ == nullptr
        && this->detectionRuleTemplateCount_ == nullptr && this->detectionRuleTestCount_ == nullptr && this->graphComputeRuleCount_ == nullptr && this->passthroughRuleCount_ == nullptr && this->windowRuleCount_ == nullptr; };
      // detectionRuleOnlineCount Field Functions 
      bool hasDetectionRuleOnlineCount() const { return this->detectionRuleOnlineCount_ != nullptr;};
      void deleteDetectionRuleOnlineCount() { this->detectionRuleOnlineCount_ = nullptr;};
      inline int32_t getDetectionRuleOnlineCount() const { DARABONBA_PTR_GET_DEFAULT(detectionRuleOnlineCount_, 0) };
      inline DetectionStatistic& setDetectionRuleOnlineCount(int32_t detectionRuleOnlineCount) { DARABONBA_PTR_SET_VALUE(detectionRuleOnlineCount_, detectionRuleOnlineCount) };


      // detectionRuleTemplateCount Field Functions 
      bool hasDetectionRuleTemplateCount() const { return this->detectionRuleTemplateCount_ != nullptr;};
      void deleteDetectionRuleTemplateCount() { this->detectionRuleTemplateCount_ = nullptr;};
      inline int32_t getDetectionRuleTemplateCount() const { DARABONBA_PTR_GET_DEFAULT(detectionRuleTemplateCount_, 0) };
      inline DetectionStatistic& setDetectionRuleTemplateCount(int32_t detectionRuleTemplateCount) { DARABONBA_PTR_SET_VALUE(detectionRuleTemplateCount_, detectionRuleTemplateCount) };


      // detectionRuleTestCount Field Functions 
      bool hasDetectionRuleTestCount() const { return this->detectionRuleTestCount_ != nullptr;};
      void deleteDetectionRuleTestCount() { this->detectionRuleTestCount_ = nullptr;};
      inline int32_t getDetectionRuleTestCount() const { DARABONBA_PTR_GET_DEFAULT(detectionRuleTestCount_, 0) };
      inline DetectionStatistic& setDetectionRuleTestCount(int32_t detectionRuleTestCount) { DARABONBA_PTR_SET_VALUE(detectionRuleTestCount_, detectionRuleTestCount) };


      // graphComputeRuleCount Field Functions 
      bool hasGraphComputeRuleCount() const { return this->graphComputeRuleCount_ != nullptr;};
      void deleteGraphComputeRuleCount() { this->graphComputeRuleCount_ = nullptr;};
      inline int32_t getGraphComputeRuleCount() const { DARABONBA_PTR_GET_DEFAULT(graphComputeRuleCount_, 0) };
      inline DetectionStatistic& setGraphComputeRuleCount(int32_t graphComputeRuleCount) { DARABONBA_PTR_SET_VALUE(graphComputeRuleCount_, graphComputeRuleCount) };


      // passthroughRuleCount Field Functions 
      bool hasPassthroughRuleCount() const { return this->passthroughRuleCount_ != nullptr;};
      void deletePassthroughRuleCount() { this->passthroughRuleCount_ = nullptr;};
      inline int32_t getPassthroughRuleCount() const { DARABONBA_PTR_GET_DEFAULT(passthroughRuleCount_, 0) };
      inline DetectionStatistic& setPassthroughRuleCount(int32_t passthroughRuleCount) { DARABONBA_PTR_SET_VALUE(passthroughRuleCount_, passthroughRuleCount) };


      // windowRuleCount Field Functions 
      bool hasWindowRuleCount() const { return this->windowRuleCount_ != nullptr;};
      void deleteWindowRuleCount() { this->windowRuleCount_ = nullptr;};
      inline int32_t getWindowRuleCount() const { DARABONBA_PTR_GET_DEFAULT(windowRuleCount_, 0) };
      inline DetectionStatistic& setWindowRuleCount(int32_t windowRuleCount) { DARABONBA_PTR_SET_VALUE(windowRuleCount_, windowRuleCount) };


    protected:
      shared_ptr<int32_t> detectionRuleOnlineCount_ {};
      shared_ptr<int32_t> detectionRuleTemplateCount_ {};
      shared_ptr<int32_t> detectionRuleTestCount_ {};
      shared_ptr<int32_t> graphComputeRuleCount_ {};
      shared_ptr<int32_t> passthroughRuleCount_ {};
      shared_ptr<int32_t> windowRuleCount_ {};
    };

    virtual bool empty() const override { return this->detectionStatistic_ == nullptr
        && this->requestId_ == nullptr; };
    // detectionStatistic Field Functions 
    bool hasDetectionStatistic() const { return this->detectionStatistic_ != nullptr;};
    void deleteDetectionStatistic() { this->detectionStatistic_ = nullptr;};
    inline const GetDetectionStatisticResponseBody::DetectionStatistic & getDetectionStatistic() const { DARABONBA_PTR_GET_CONST(detectionStatistic_, GetDetectionStatisticResponseBody::DetectionStatistic) };
    inline GetDetectionStatisticResponseBody::DetectionStatistic getDetectionStatistic() { DARABONBA_PTR_GET(detectionStatistic_, GetDetectionStatisticResponseBody::DetectionStatistic) };
    inline GetDetectionStatisticResponseBody& setDetectionStatistic(const GetDetectionStatisticResponseBody::DetectionStatistic & detectionStatistic) { DARABONBA_PTR_SET_VALUE(detectionStatistic_, detectionStatistic) };
    inline GetDetectionStatisticResponseBody& setDetectionStatistic(GetDetectionStatisticResponseBody::DetectionStatistic && detectionStatistic) { DARABONBA_PTR_SET_RVALUE(detectionStatistic_, detectionStatistic) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDetectionStatisticResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetDetectionStatisticResponseBody::DetectionStatistic> detectionStatistic_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
