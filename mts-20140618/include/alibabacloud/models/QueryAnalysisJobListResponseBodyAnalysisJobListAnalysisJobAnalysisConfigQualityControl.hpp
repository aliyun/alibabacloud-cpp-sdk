// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYANALYSISJOBLISTRESPONSEBODYANALYSISJOBLISTANALYSISJOBANALYSISCONFIGQUALITYCONTROL_HPP_
#define ALIBABACLOUD_MODELS_QUERYANALYSISJOBLISTRESPONSEBODYANALYSISJOBLISTANALYSISJOBANALYSISCONFIGQUALITYCONTROL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobAnalysisConfigQualityControl : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobAnalysisConfigQualityControl& obj) { 
      DARABONBA_PTR_TO_JSON(MethodStreaming, methodStreaming_);
      DARABONBA_PTR_TO_JSON(RateQuality, rateQuality_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobAnalysisConfigQualityControl& obj) { 
      DARABONBA_PTR_FROM_JSON(MethodStreaming, methodStreaming_);
      DARABONBA_PTR_FROM_JSON(RateQuality, rateQuality_);
    };
    QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobAnalysisConfigQualityControl() = default ;
    QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobAnalysisConfigQualityControl(const QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobAnalysisConfigQualityControl &) = default ;
    QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobAnalysisConfigQualityControl(QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobAnalysisConfigQualityControl &&) = default ;
    QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobAnalysisConfigQualityControl(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobAnalysisConfigQualityControl() = default ;
    QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobAnalysisConfigQualityControl& operator=(const QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobAnalysisConfigQualityControl &) = default ;
    QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobAnalysisConfigQualityControl& operator=(QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobAnalysisConfigQualityControl &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->methodStreaming_ == nullptr
        && return this->rateQuality_ == nullptr; };
    // methodStreaming Field Functions 
    bool hasMethodStreaming() const { return this->methodStreaming_ != nullptr;};
    void deleteMethodStreaming() { this->methodStreaming_ = nullptr;};
    inline string methodStreaming() const { DARABONBA_PTR_GET_DEFAULT(methodStreaming_, "") };
    inline QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobAnalysisConfigQualityControl& setMethodStreaming(string methodStreaming) { DARABONBA_PTR_SET_VALUE(methodStreaming_, methodStreaming) };


    // rateQuality Field Functions 
    bool hasRateQuality() const { return this->rateQuality_ != nullptr;};
    void deleteRateQuality() { this->rateQuality_ = nullptr;};
    inline string rateQuality() const { DARABONBA_PTR_GET_DEFAULT(rateQuality_, "") };
    inline QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobAnalysisConfigQualityControl& setRateQuality(string rateQuality) { DARABONBA_PTR_SET_VALUE(rateQuality_, rateQuality) };


  protected:
    // The playback mode. Valid values:
    // 
    // *   **network**: online playback.
    // *   **local**: playback on on-premises devices.
    // *   Default value: **network**.
    std::shared_ptr<string> methodStreaming_ = nullptr;
    // The quality level of the job output. Default value: **25**.
    std::shared_ptr<string> rateQuality_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
