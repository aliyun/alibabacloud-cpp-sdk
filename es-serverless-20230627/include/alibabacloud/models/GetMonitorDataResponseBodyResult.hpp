// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMONITORDATARESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETMONITORDATARESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EsServerless20230627
{
namespace Models
{
  class GetMonitorDataResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMonitorDataResponseBodyResult& obj) { 
      DARABONBA_ANY_TO_JSON(dps, dps_);
      DARABONBA_PTR_TO_JSON(integrity, integrity_);
      DARABONBA_PTR_TO_JSON(messageWatermark, messageWatermark_);
      DARABONBA_PTR_TO_JSON(metric, metric_);
      DARABONBA_PTR_TO_JSON(summary, summary_);
      DARABONBA_ANY_TO_JSON(tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, GetMonitorDataResponseBodyResult& obj) { 
      DARABONBA_ANY_FROM_JSON(dps, dps_);
      DARABONBA_PTR_FROM_JSON(integrity, integrity_);
      DARABONBA_PTR_FROM_JSON(messageWatermark, messageWatermark_);
      DARABONBA_PTR_FROM_JSON(metric, metric_);
      DARABONBA_PTR_FROM_JSON(summary, summary_);
      DARABONBA_ANY_FROM_JSON(tags, tags_);
    };
    GetMonitorDataResponseBodyResult() = default ;
    GetMonitorDataResponseBodyResult(const GetMonitorDataResponseBodyResult &) = default ;
    GetMonitorDataResponseBodyResult(GetMonitorDataResponseBodyResult &&) = default ;
    GetMonitorDataResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMonitorDataResponseBodyResult() = default ;
    GetMonitorDataResponseBodyResult& operator=(const GetMonitorDataResponseBodyResult &) = default ;
    GetMonitorDataResponseBodyResult& operator=(GetMonitorDataResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dps_ != nullptr
        && this->integrity_ != nullptr && this->messageWatermark_ != nullptr && this->metric_ != nullptr && this->summary_ != nullptr && this->tags_ != nullptr; };
    // dps Field Functions 
    bool hasDps() const { return this->dps_ != nullptr;};
    void deleteDps() { this->dps_ = nullptr;};
    inline     const Darabonba::Json & dps() const { DARABONBA_GET(dps_) };
    Darabonba::Json & dps() { DARABONBA_GET(dps_) };
    inline GetMonitorDataResponseBodyResult& setDps(const Darabonba::Json & dps) { DARABONBA_SET_VALUE(dps_, dps) };
    inline GetMonitorDataResponseBodyResult& setDps(Darabonba::Json & dps) { DARABONBA_SET_RVALUE(dps_, dps) };


    // integrity Field Functions 
    bool hasIntegrity() const { return this->integrity_ != nullptr;};
    void deleteIntegrity() { this->integrity_ = nullptr;};
    inline float integrity() const { DARABONBA_PTR_GET_DEFAULT(integrity_, 0.0) };
    inline GetMonitorDataResponseBodyResult& setIntegrity(float integrity) { DARABONBA_PTR_SET_VALUE(integrity_, integrity) };


    // messageWatermark Field Functions 
    bool hasMessageWatermark() const { return this->messageWatermark_ != nullptr;};
    void deleteMessageWatermark() { this->messageWatermark_ = nullptr;};
    inline int64_t messageWatermark() const { DARABONBA_PTR_GET_DEFAULT(messageWatermark_, 0L) };
    inline GetMonitorDataResponseBodyResult& setMessageWatermark(int64_t messageWatermark) { DARABONBA_PTR_SET_VALUE(messageWatermark_, messageWatermark) };


    // metric Field Functions 
    bool hasMetric() const { return this->metric_ != nullptr;};
    void deleteMetric() { this->metric_ = nullptr;};
    inline string metric() const { DARABONBA_PTR_GET_DEFAULT(metric_, "") };
    inline GetMonitorDataResponseBodyResult& setMetric(string metric) { DARABONBA_PTR_SET_VALUE(metric_, metric) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline float summary() const { DARABONBA_PTR_GET_DEFAULT(summary_, 0.0) };
    inline GetMonitorDataResponseBodyResult& setSummary(float summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline     const Darabonba::Json & tags() const { DARABONBA_GET(tags_) };
    Darabonba::Json & tags() { DARABONBA_GET(tags_) };
    inline GetMonitorDataResponseBodyResult& setTags(const Darabonba::Json & tags) { DARABONBA_SET_VALUE(tags_, tags) };
    inline GetMonitorDataResponseBodyResult& setTags(Darabonba::Json & tags) { DARABONBA_SET_RVALUE(tags_, tags) };


  protected:
    Darabonba::Json dps_ = nullptr;
    std::shared_ptr<float> integrity_ = nullptr;
    std::shared_ptr<int64_t> messageWatermark_ = nullptr;
    std::shared_ptr<string> metric_ = nullptr;
    std::shared_ptr<float> summary_ = nullptr;
    Darabonba::Json tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EsServerless20230627
#endif
