// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPLAYFIRSTFRAMEDURATIONMETRICDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPLAYFIRSTFRAMEDURATIONMETRICDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribePlayFirstFrameDurationMetricDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePlayFirstFrameDurationMetricDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BeginTs, beginTs_);
      DARABONBA_PTR_TO_JSON(EndTs, endTs_);
      DARABONBA_PTR_TO_JSON(TraceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePlayFirstFrameDurationMetricDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BeginTs, beginTs_);
      DARABONBA_PTR_FROM_JSON(EndTs, endTs_);
      DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
    };
    DescribePlayFirstFrameDurationMetricDataRequest() = default ;
    DescribePlayFirstFrameDurationMetricDataRequest(const DescribePlayFirstFrameDurationMetricDataRequest &) = default ;
    DescribePlayFirstFrameDurationMetricDataRequest(DescribePlayFirstFrameDurationMetricDataRequest &&) = default ;
    DescribePlayFirstFrameDurationMetricDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePlayFirstFrameDurationMetricDataRequest() = default ;
    DescribePlayFirstFrameDurationMetricDataRequest& operator=(const DescribePlayFirstFrameDurationMetricDataRequest &) = default ;
    DescribePlayFirstFrameDurationMetricDataRequest& operator=(DescribePlayFirstFrameDurationMetricDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->beginTs_ != nullptr
        && this->endTs_ != nullptr && this->traceId_ != nullptr; };
    // beginTs Field Functions 
    bool hasBeginTs() const { return this->beginTs_ != nullptr;};
    void deleteBeginTs() { this->beginTs_ = nullptr;};
    inline string beginTs() const { DARABONBA_PTR_GET_DEFAULT(beginTs_, "") };
    inline DescribePlayFirstFrameDurationMetricDataRequest& setBeginTs(string beginTs) { DARABONBA_PTR_SET_VALUE(beginTs_, beginTs) };


    // endTs Field Functions 
    bool hasEndTs() const { return this->endTs_ != nullptr;};
    void deleteEndTs() { this->endTs_ = nullptr;};
    inline string endTs() const { DARABONBA_PTR_GET_DEFAULT(endTs_, "") };
    inline DescribePlayFirstFrameDurationMetricDataRequest& setEndTs(string endTs) { DARABONBA_PTR_SET_VALUE(endTs_, endTs) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string traceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline DescribePlayFirstFrameDurationMetricDataRequest& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> beginTs_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> endTs_ = nullptr;
    std::shared_ptr<string> traceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
