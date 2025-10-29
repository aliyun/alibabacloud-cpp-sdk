// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMMETRICDETAILDATARESPONSEBODYSTREAMDETAILDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMMETRICDETAILDATARESPONSEBODYSTREAMDETAILDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveStreamMetricDetailDataResponseBodyStreamDetailDataStreamData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveStreamMetricDetailDataResponseBodyStreamDetailData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveStreamMetricDetailDataResponseBodyStreamDetailData& obj) { 
      DARABONBA_PTR_TO_JSON(StreamData, streamData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveStreamMetricDetailDataResponseBodyStreamDetailData& obj) { 
      DARABONBA_PTR_FROM_JSON(StreamData, streamData_);
    };
    DescribeLiveStreamMetricDetailDataResponseBodyStreamDetailData() = default ;
    DescribeLiveStreamMetricDetailDataResponseBodyStreamDetailData(const DescribeLiveStreamMetricDetailDataResponseBodyStreamDetailData &) = default ;
    DescribeLiveStreamMetricDetailDataResponseBodyStreamDetailData(DescribeLiveStreamMetricDetailDataResponseBodyStreamDetailData &&) = default ;
    DescribeLiveStreamMetricDetailDataResponseBodyStreamDetailData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveStreamMetricDetailDataResponseBodyStreamDetailData() = default ;
    DescribeLiveStreamMetricDetailDataResponseBodyStreamDetailData& operator=(const DescribeLiveStreamMetricDetailDataResponseBodyStreamDetailData &) = default ;
    DescribeLiveStreamMetricDetailDataResponseBodyStreamDetailData& operator=(DescribeLiveStreamMetricDetailDataResponseBodyStreamDetailData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->streamData_ == nullptr; };
    // streamData Field Functions 
    bool hasStreamData() const { return this->streamData_ != nullptr;};
    void deleteStreamData() { this->streamData_ = nullptr;};
    inline const vector<Models::DescribeLiveStreamMetricDetailDataResponseBodyStreamDetailDataStreamData> & streamData() const { DARABONBA_PTR_GET_CONST(streamData_, vector<Models::DescribeLiveStreamMetricDetailDataResponseBodyStreamDetailDataStreamData>) };
    inline vector<Models::DescribeLiveStreamMetricDetailDataResponseBodyStreamDetailDataStreamData> streamData() { DARABONBA_PTR_GET(streamData_, vector<Models::DescribeLiveStreamMetricDetailDataResponseBodyStreamDetailDataStreamData>) };
    inline DescribeLiveStreamMetricDetailDataResponseBodyStreamDetailData& setStreamData(const vector<Models::DescribeLiveStreamMetricDetailDataResponseBodyStreamDetailDataStreamData> & streamData) { DARABONBA_PTR_SET_VALUE(streamData_, streamData) };
    inline DescribeLiveStreamMetricDetailDataResponseBodyStreamDetailData& setStreamData(vector<Models::DescribeLiveStreamMetricDetailDataResponseBodyStreamDetailDataStreamData> && streamData) { DARABONBA_PTR_SET_RVALUE(streamData_, streamData) };


  protected:
    std::shared_ptr<vector<Models::DescribeLiveStreamMetricDetailDataResponseBodyStreamDetailDataStreamData>> streamData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
