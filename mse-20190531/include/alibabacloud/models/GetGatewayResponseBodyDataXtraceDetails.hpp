// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGATEWAYRESPONSEBODYDATAXTRACEDETAILS_HPP_
#define ALIBABACLOUD_MODELS_GETGATEWAYRESPONSEBODYDATAXTRACEDETAILS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GetGatewayResponseBodyDataXtraceDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGatewayResponseBodyDataXtraceDetails& obj) { 
      DARABONBA_PTR_TO_JSON(Sample, sample_);
      DARABONBA_PTR_TO_JSON(TraceOn, traceOn_);
    };
    friend void from_json(const Darabonba::Json& j, GetGatewayResponseBodyDataXtraceDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(Sample, sample_);
      DARABONBA_PTR_FROM_JSON(TraceOn, traceOn_);
    };
    GetGatewayResponseBodyDataXtraceDetails() = default ;
    GetGatewayResponseBodyDataXtraceDetails(const GetGatewayResponseBodyDataXtraceDetails &) = default ;
    GetGatewayResponseBodyDataXtraceDetails(GetGatewayResponseBodyDataXtraceDetails &&) = default ;
    GetGatewayResponseBodyDataXtraceDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGatewayResponseBodyDataXtraceDetails() = default ;
    GetGatewayResponseBodyDataXtraceDetails& operator=(const GetGatewayResponseBodyDataXtraceDetails &) = default ;
    GetGatewayResponseBodyDataXtraceDetails& operator=(GetGatewayResponseBodyDataXtraceDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sample_ == nullptr
        && return this->traceOn_ == nullptr; };
    // sample Field Functions 
    bool hasSample() const { return this->sample_ != nullptr;};
    void deleteSample() { this->sample_ = nullptr;};
    inline int32_t sample() const { DARABONBA_PTR_GET_DEFAULT(sample_, 0) };
    inline GetGatewayResponseBodyDataXtraceDetails& setSample(int32_t sample) { DARABONBA_PTR_SET_VALUE(sample_, sample) };


    // traceOn Field Functions 
    bool hasTraceOn() const { return this->traceOn_ != nullptr;};
    void deleteTraceOn() { this->traceOn_ = nullptr;};
    inline bool traceOn() const { DARABONBA_PTR_GET_DEFAULT(traceOn_, false) };
    inline GetGatewayResponseBodyDataXtraceDetails& setTraceOn(bool traceOn) { DARABONBA_PTR_SET_VALUE(traceOn_, traceOn) };


  protected:
    // The sampling rate of Tracing Analysis.
    std::shared_ptr<int32_t> sample_ = nullptr;
    // Indicates whether sampling by using Tracing Analysis is enabled.
    std::shared_ptr<bool> traceOn_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
