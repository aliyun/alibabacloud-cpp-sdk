// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMPUSHMETRICDETAILDATARESPONSEBODYSTREAMDETAILDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMPUSHMETRICDETAILDATARESPONSEBODYSTREAMDETAILDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveStreamPushMetricDetailDataResponseBodyStreamDetailDataStreamData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveStreamPushMetricDetailDataResponseBodyStreamDetailData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveStreamPushMetricDetailDataResponseBodyStreamDetailData& obj) { 
      DARABONBA_PTR_TO_JSON(StreamData, streamData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveStreamPushMetricDetailDataResponseBodyStreamDetailData& obj) { 
      DARABONBA_PTR_FROM_JSON(StreamData, streamData_);
    };
    DescribeLiveStreamPushMetricDetailDataResponseBodyStreamDetailData() = default ;
    DescribeLiveStreamPushMetricDetailDataResponseBodyStreamDetailData(const DescribeLiveStreamPushMetricDetailDataResponseBodyStreamDetailData &) = default ;
    DescribeLiveStreamPushMetricDetailDataResponseBodyStreamDetailData(DescribeLiveStreamPushMetricDetailDataResponseBodyStreamDetailData &&) = default ;
    DescribeLiveStreamPushMetricDetailDataResponseBodyStreamDetailData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveStreamPushMetricDetailDataResponseBodyStreamDetailData() = default ;
    DescribeLiveStreamPushMetricDetailDataResponseBodyStreamDetailData& operator=(const DescribeLiveStreamPushMetricDetailDataResponseBodyStreamDetailData &) = default ;
    DescribeLiveStreamPushMetricDetailDataResponseBodyStreamDetailData& operator=(DescribeLiveStreamPushMetricDetailDataResponseBodyStreamDetailData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->streamData_ == nullptr; };
    // streamData Field Functions 
    bool hasStreamData() const { return this->streamData_ != nullptr;};
    void deleteStreamData() { this->streamData_ = nullptr;};
    inline const vector<Models::DescribeLiveStreamPushMetricDetailDataResponseBodyStreamDetailDataStreamData> & streamData() const { DARABONBA_PTR_GET_CONST(streamData_, vector<Models::DescribeLiveStreamPushMetricDetailDataResponseBodyStreamDetailDataStreamData>) };
    inline vector<Models::DescribeLiveStreamPushMetricDetailDataResponseBodyStreamDetailDataStreamData> streamData() { DARABONBA_PTR_GET(streamData_, vector<Models::DescribeLiveStreamPushMetricDetailDataResponseBodyStreamDetailDataStreamData>) };
    inline DescribeLiveStreamPushMetricDetailDataResponseBodyStreamDetailData& setStreamData(const vector<Models::DescribeLiveStreamPushMetricDetailDataResponseBodyStreamDetailDataStreamData> & streamData) { DARABONBA_PTR_SET_VALUE(streamData_, streamData) };
    inline DescribeLiveStreamPushMetricDetailDataResponseBodyStreamDetailData& setStreamData(vector<Models::DescribeLiveStreamPushMetricDetailDataResponseBodyStreamDetailDataStreamData> && streamData) { DARABONBA_PTR_SET_RVALUE(streamData_, streamData) };


  protected:
    std::shared_ptr<vector<Models::DescribeLiveStreamPushMetricDetailDataResponseBodyStreamDetailDataStreamData>> streamData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
