// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETHREATEVENTTOPMETRICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETHREATEVENTTOPMETRICRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeThreatEventTopMetricResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeThreatEventTopMetricResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TopMetrics, topMetrics_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeThreatEventTopMetricResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TopMetrics, topMetrics_);
    };
    DescribeThreatEventTopMetricResponseBody() = default ;
    DescribeThreatEventTopMetricResponseBody(const DescribeThreatEventTopMetricResponseBody &) = default ;
    DescribeThreatEventTopMetricResponseBody(DescribeThreatEventTopMetricResponseBody &&) = default ;
    DescribeThreatEventTopMetricResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeThreatEventTopMetricResponseBody() = default ;
    DescribeThreatEventTopMetricResponseBody& operator=(const DescribeThreatEventTopMetricResponseBody &) = default ;
    DescribeThreatEventTopMetricResponseBody& operator=(DescribeThreatEventTopMetricResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TopMetrics : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TopMetrics& obj) { 
        DARABONBA_PTR_TO_JSON(Cnt, cnt_);
        DARABONBA_PTR_TO_JSON(Country, country_);
        DARABONBA_PTR_TO_JSON(Region, region_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, TopMetrics& obj) { 
        DARABONBA_PTR_FROM_JSON(Cnt, cnt_);
        DARABONBA_PTR_FROM_JSON(Country, country_);
        DARABONBA_PTR_FROM_JSON(Region, region_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      TopMetrics() = default ;
      TopMetrics(const TopMetrics &) = default ;
      TopMetrics(TopMetrics &&) = default ;
      TopMetrics(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TopMetrics() = default ;
      TopMetrics& operator=(const TopMetrics &) = default ;
      TopMetrics& operator=(TopMetrics &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cnt_ == nullptr
        && this->country_ == nullptr && this->region_ == nullptr && this->value_ == nullptr; };
      // cnt Field Functions 
      bool hasCnt() const { return this->cnt_ != nullptr;};
      void deleteCnt() { this->cnt_ = nullptr;};
      inline int64_t getCnt() const { DARABONBA_PTR_GET_DEFAULT(cnt_, 0L) };
      inline TopMetrics& setCnt(int64_t cnt) { DARABONBA_PTR_SET_VALUE(cnt_, cnt) };


      // country Field Functions 
      bool hasCountry() const { return this->country_ != nullptr;};
      void deleteCountry() { this->country_ = nullptr;};
      inline string getCountry() const { DARABONBA_PTR_GET_DEFAULT(country_, "") };
      inline TopMetrics& setCountry(string country) { DARABONBA_PTR_SET_VALUE(country_, country) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline TopMetrics& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline TopMetrics& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<int64_t> cnt_ {};
      shared_ptr<string> country_ {};
      shared_ptr<string> region_ {};
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->topMetrics_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeThreatEventTopMetricResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // topMetrics Field Functions 
    bool hasTopMetrics() const { return this->topMetrics_ != nullptr;};
    void deleteTopMetrics() { this->topMetrics_ = nullptr;};
    inline const vector<DescribeThreatEventTopMetricResponseBody::TopMetrics> & getTopMetrics() const { DARABONBA_PTR_GET_CONST(topMetrics_, vector<DescribeThreatEventTopMetricResponseBody::TopMetrics>) };
    inline vector<DescribeThreatEventTopMetricResponseBody::TopMetrics> getTopMetrics() { DARABONBA_PTR_GET(topMetrics_, vector<DescribeThreatEventTopMetricResponseBody::TopMetrics>) };
    inline DescribeThreatEventTopMetricResponseBody& setTopMetrics(const vector<DescribeThreatEventTopMetricResponseBody::TopMetrics> & topMetrics) { DARABONBA_PTR_SET_VALUE(topMetrics_, topMetrics) };
    inline DescribeThreatEventTopMetricResponseBody& setTopMetrics(vector<DescribeThreatEventTopMetricResponseBody::TopMetrics> && topMetrics) { DARABONBA_PTR_SET_RVALUE(topMetrics_, topMetrics) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<DescribeThreatEventTopMetricResponseBody::TopMetrics>> topMetrics_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
