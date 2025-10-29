// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMDETAILFRAMERATEANDBITRATEDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMDETAILFRAMERATEANDBITRATEDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveStreamDetailFrameRateAndBitRateDataResponseBodyFrameRateAndBitRateInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveStreamDetailFrameRateAndBitRateDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveStreamDetailFrameRateAndBitRateDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FrameRateAndBitRateInfos, frameRateAndBitRateInfos_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveStreamDetailFrameRateAndBitRateDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FrameRateAndBitRateInfos, frameRateAndBitRateInfos_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLiveStreamDetailFrameRateAndBitRateDataResponseBody() = default ;
    DescribeLiveStreamDetailFrameRateAndBitRateDataResponseBody(const DescribeLiveStreamDetailFrameRateAndBitRateDataResponseBody &) = default ;
    DescribeLiveStreamDetailFrameRateAndBitRateDataResponseBody(DescribeLiveStreamDetailFrameRateAndBitRateDataResponseBody &&) = default ;
    DescribeLiveStreamDetailFrameRateAndBitRateDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveStreamDetailFrameRateAndBitRateDataResponseBody() = default ;
    DescribeLiveStreamDetailFrameRateAndBitRateDataResponseBody& operator=(const DescribeLiveStreamDetailFrameRateAndBitRateDataResponseBody &) = default ;
    DescribeLiveStreamDetailFrameRateAndBitRateDataResponseBody& operator=(DescribeLiveStreamDetailFrameRateAndBitRateDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->frameRateAndBitRateInfos_ == nullptr
        && return this->requestId_ == nullptr; };
    // frameRateAndBitRateInfos Field Functions 
    bool hasFrameRateAndBitRateInfos() const { return this->frameRateAndBitRateInfos_ != nullptr;};
    void deleteFrameRateAndBitRateInfos() { this->frameRateAndBitRateInfos_ = nullptr;};
    inline const vector<DescribeLiveStreamDetailFrameRateAndBitRateDataResponseBodyFrameRateAndBitRateInfos> & frameRateAndBitRateInfos() const { DARABONBA_PTR_GET_CONST(frameRateAndBitRateInfos_, vector<DescribeLiveStreamDetailFrameRateAndBitRateDataResponseBodyFrameRateAndBitRateInfos>) };
    inline vector<DescribeLiveStreamDetailFrameRateAndBitRateDataResponseBodyFrameRateAndBitRateInfos> frameRateAndBitRateInfos() { DARABONBA_PTR_GET(frameRateAndBitRateInfos_, vector<DescribeLiveStreamDetailFrameRateAndBitRateDataResponseBodyFrameRateAndBitRateInfos>) };
    inline DescribeLiveStreamDetailFrameRateAndBitRateDataResponseBody& setFrameRateAndBitRateInfos(const vector<DescribeLiveStreamDetailFrameRateAndBitRateDataResponseBodyFrameRateAndBitRateInfos> & frameRateAndBitRateInfos) { DARABONBA_PTR_SET_VALUE(frameRateAndBitRateInfos_, frameRateAndBitRateInfos) };
    inline DescribeLiveStreamDetailFrameRateAndBitRateDataResponseBody& setFrameRateAndBitRateInfos(vector<DescribeLiveStreamDetailFrameRateAndBitRateDataResponseBodyFrameRateAndBitRateInfos> && frameRateAndBitRateInfos) { DARABONBA_PTR_SET_RVALUE(frameRateAndBitRateInfos_, frameRateAndBitRateInfos) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveStreamDetailFrameRateAndBitRateDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The audio and video frame rates and bitrates at each time granularity.
    std::shared_ptr<vector<DescribeLiveStreamDetailFrameRateAndBitRateDataResponseBodyFrameRateAndBitRateInfos>> frameRateAndBitRateInfos_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
