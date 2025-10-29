// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMTRANSCODEMETRICDATARESPONSEBODYSTREAMDETAILDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMTRANSCODEMETRICDATARESPONSEBODYSTREAMDETAILDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveStreamTranscodeMetricDataResponseBodyStreamDetailDataStreamData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveStreamTranscodeMetricDataResponseBodyStreamDetailData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveStreamTranscodeMetricDataResponseBodyStreamDetailData& obj) { 
      DARABONBA_PTR_TO_JSON(StreamData, streamData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveStreamTranscodeMetricDataResponseBodyStreamDetailData& obj) { 
      DARABONBA_PTR_FROM_JSON(StreamData, streamData_);
    };
    DescribeLiveStreamTranscodeMetricDataResponseBodyStreamDetailData() = default ;
    DescribeLiveStreamTranscodeMetricDataResponseBodyStreamDetailData(const DescribeLiveStreamTranscodeMetricDataResponseBodyStreamDetailData &) = default ;
    DescribeLiveStreamTranscodeMetricDataResponseBodyStreamDetailData(DescribeLiveStreamTranscodeMetricDataResponseBodyStreamDetailData &&) = default ;
    DescribeLiveStreamTranscodeMetricDataResponseBodyStreamDetailData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveStreamTranscodeMetricDataResponseBodyStreamDetailData() = default ;
    DescribeLiveStreamTranscodeMetricDataResponseBodyStreamDetailData& operator=(const DescribeLiveStreamTranscodeMetricDataResponseBodyStreamDetailData &) = default ;
    DescribeLiveStreamTranscodeMetricDataResponseBodyStreamDetailData& operator=(DescribeLiveStreamTranscodeMetricDataResponseBodyStreamDetailData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->streamData_ == nullptr; };
    // streamData Field Functions 
    bool hasStreamData() const { return this->streamData_ != nullptr;};
    void deleteStreamData() { this->streamData_ = nullptr;};
    inline const vector<Models::DescribeLiveStreamTranscodeMetricDataResponseBodyStreamDetailDataStreamData> & streamData() const { DARABONBA_PTR_GET_CONST(streamData_, vector<Models::DescribeLiveStreamTranscodeMetricDataResponseBodyStreamDetailDataStreamData>) };
    inline vector<Models::DescribeLiveStreamTranscodeMetricDataResponseBodyStreamDetailDataStreamData> streamData() { DARABONBA_PTR_GET(streamData_, vector<Models::DescribeLiveStreamTranscodeMetricDataResponseBodyStreamDetailDataStreamData>) };
    inline DescribeLiveStreamTranscodeMetricDataResponseBodyStreamDetailData& setStreamData(const vector<Models::DescribeLiveStreamTranscodeMetricDataResponseBodyStreamDetailDataStreamData> & streamData) { DARABONBA_PTR_SET_VALUE(streamData_, streamData) };
    inline DescribeLiveStreamTranscodeMetricDataResponseBodyStreamDetailData& setStreamData(vector<Models::DescribeLiveStreamTranscodeMetricDataResponseBodyStreamDetailDataStreamData> && streamData) { DARABONBA_PTR_SET_RVALUE(streamData_, streamData) };


  protected:
    std::shared_ptr<vector<Models::DescribeLiveStreamTranscodeMetricDataResponseBodyStreamDetailDataStreamData>> streamData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
