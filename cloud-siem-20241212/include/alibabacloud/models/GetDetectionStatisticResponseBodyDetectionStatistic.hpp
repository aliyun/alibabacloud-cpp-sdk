// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDETECTIONSTATISTICRESPONSEBODYDETECTIONSTATISTIC_HPP_
#define ALIBABACLOUD_MODELS_GETDETECTIONSTATISTICRESPONSEBODYDETECTIONSTATISTIC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class GetDetectionStatisticResponseBodyDetectionStatistic : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDetectionStatisticResponseBodyDetectionStatistic& obj) { 
      DARABONBA_PTR_TO_JSON(DetectionRuleOnlineCount, detectionRuleOnlineCount_);
      DARABONBA_PTR_TO_JSON(DetectionRuleTemplateCount, detectionRuleTemplateCount_);
      DARABONBA_PTR_TO_JSON(DetectionRuleTestCount, detectionRuleTestCount_);
      DARABONBA_PTR_TO_JSON(GraphComputeRuleCount, graphComputeRuleCount_);
      DARABONBA_PTR_TO_JSON(PassthroughRuleCount, passthroughRuleCount_);
      DARABONBA_PTR_TO_JSON(WindowRuleCount, windowRuleCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetDetectionStatisticResponseBodyDetectionStatistic& obj) { 
      DARABONBA_PTR_FROM_JSON(DetectionRuleOnlineCount, detectionRuleOnlineCount_);
      DARABONBA_PTR_FROM_JSON(DetectionRuleTemplateCount, detectionRuleTemplateCount_);
      DARABONBA_PTR_FROM_JSON(DetectionRuleTestCount, detectionRuleTestCount_);
      DARABONBA_PTR_FROM_JSON(GraphComputeRuleCount, graphComputeRuleCount_);
      DARABONBA_PTR_FROM_JSON(PassthroughRuleCount, passthroughRuleCount_);
      DARABONBA_PTR_FROM_JSON(WindowRuleCount, windowRuleCount_);
    };
    GetDetectionStatisticResponseBodyDetectionStatistic() = default ;
    GetDetectionStatisticResponseBodyDetectionStatistic(const GetDetectionStatisticResponseBodyDetectionStatistic &) = default ;
    GetDetectionStatisticResponseBodyDetectionStatistic(GetDetectionStatisticResponseBodyDetectionStatistic &&) = default ;
    GetDetectionStatisticResponseBodyDetectionStatistic(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDetectionStatisticResponseBodyDetectionStatistic() = default ;
    GetDetectionStatisticResponseBodyDetectionStatistic& operator=(const GetDetectionStatisticResponseBodyDetectionStatistic &) = default ;
    GetDetectionStatisticResponseBodyDetectionStatistic& operator=(GetDetectionStatisticResponseBodyDetectionStatistic &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->detectionRuleOnlineCount_ == nullptr
        && return this->detectionRuleTemplateCount_ == nullptr && return this->detectionRuleTestCount_ == nullptr && return this->graphComputeRuleCount_ == nullptr && return this->passthroughRuleCount_ == nullptr && return this->windowRuleCount_ == nullptr; };
    // detectionRuleOnlineCount Field Functions 
    bool hasDetectionRuleOnlineCount() const { return this->detectionRuleOnlineCount_ != nullptr;};
    void deleteDetectionRuleOnlineCount() { this->detectionRuleOnlineCount_ = nullptr;};
    inline int32_t detectionRuleOnlineCount() const { DARABONBA_PTR_GET_DEFAULT(detectionRuleOnlineCount_, 0) };
    inline GetDetectionStatisticResponseBodyDetectionStatistic& setDetectionRuleOnlineCount(int32_t detectionRuleOnlineCount) { DARABONBA_PTR_SET_VALUE(detectionRuleOnlineCount_, detectionRuleOnlineCount) };


    // detectionRuleTemplateCount Field Functions 
    bool hasDetectionRuleTemplateCount() const { return this->detectionRuleTemplateCount_ != nullptr;};
    void deleteDetectionRuleTemplateCount() { this->detectionRuleTemplateCount_ = nullptr;};
    inline int32_t detectionRuleTemplateCount() const { DARABONBA_PTR_GET_DEFAULT(detectionRuleTemplateCount_, 0) };
    inline GetDetectionStatisticResponseBodyDetectionStatistic& setDetectionRuleTemplateCount(int32_t detectionRuleTemplateCount) { DARABONBA_PTR_SET_VALUE(detectionRuleTemplateCount_, detectionRuleTemplateCount) };


    // detectionRuleTestCount Field Functions 
    bool hasDetectionRuleTestCount() const { return this->detectionRuleTestCount_ != nullptr;};
    void deleteDetectionRuleTestCount() { this->detectionRuleTestCount_ = nullptr;};
    inline int32_t detectionRuleTestCount() const { DARABONBA_PTR_GET_DEFAULT(detectionRuleTestCount_, 0) };
    inline GetDetectionStatisticResponseBodyDetectionStatistic& setDetectionRuleTestCount(int32_t detectionRuleTestCount) { DARABONBA_PTR_SET_VALUE(detectionRuleTestCount_, detectionRuleTestCount) };


    // graphComputeRuleCount Field Functions 
    bool hasGraphComputeRuleCount() const { return this->graphComputeRuleCount_ != nullptr;};
    void deleteGraphComputeRuleCount() { this->graphComputeRuleCount_ = nullptr;};
    inline int32_t graphComputeRuleCount() const { DARABONBA_PTR_GET_DEFAULT(graphComputeRuleCount_, 0) };
    inline GetDetectionStatisticResponseBodyDetectionStatistic& setGraphComputeRuleCount(int32_t graphComputeRuleCount) { DARABONBA_PTR_SET_VALUE(graphComputeRuleCount_, graphComputeRuleCount) };


    // passthroughRuleCount Field Functions 
    bool hasPassthroughRuleCount() const { return this->passthroughRuleCount_ != nullptr;};
    void deletePassthroughRuleCount() { this->passthroughRuleCount_ = nullptr;};
    inline int32_t passthroughRuleCount() const { DARABONBA_PTR_GET_DEFAULT(passthroughRuleCount_, 0) };
    inline GetDetectionStatisticResponseBodyDetectionStatistic& setPassthroughRuleCount(int32_t passthroughRuleCount) { DARABONBA_PTR_SET_VALUE(passthroughRuleCount_, passthroughRuleCount) };


    // windowRuleCount Field Functions 
    bool hasWindowRuleCount() const { return this->windowRuleCount_ != nullptr;};
    void deleteWindowRuleCount() { this->windowRuleCount_ = nullptr;};
    inline int32_t windowRuleCount() const { DARABONBA_PTR_GET_DEFAULT(windowRuleCount_, 0) };
    inline GetDetectionStatisticResponseBodyDetectionStatistic& setWindowRuleCount(int32_t windowRuleCount) { DARABONBA_PTR_SET_VALUE(windowRuleCount_, windowRuleCount) };


  protected:
    std::shared_ptr<int32_t> detectionRuleOnlineCount_ = nullptr;
    std::shared_ptr<int32_t> detectionRuleTemplateCount_ = nullptr;
    std::shared_ptr<int32_t> detectionRuleTestCount_ = nullptr;
    std::shared_ptr<int32_t> graphComputeRuleCount_ = nullptr;
    std::shared_ptr<int32_t> passthroughRuleCount_ = nullptr;
    std::shared_ptr<int32_t> windowRuleCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
