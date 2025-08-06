// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODTRANSCODEDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODTRANSCODEDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeVodTranscodeDataResponseBodyTranscodeData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodTranscodeDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodTranscodeDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TranscodeData, transcodeData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodTranscodeDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TranscodeData, transcodeData_);
    };
    DescribeVodTranscodeDataResponseBody() = default ;
    DescribeVodTranscodeDataResponseBody(const DescribeVodTranscodeDataResponseBody &) = default ;
    DescribeVodTranscodeDataResponseBody(DescribeVodTranscodeDataResponseBody &&) = default ;
    DescribeVodTranscodeDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodTranscodeDataResponseBody() = default ;
    DescribeVodTranscodeDataResponseBody& operator=(const DescribeVodTranscodeDataResponseBody &) = default ;
    DescribeVodTranscodeDataResponseBody& operator=(DescribeVodTranscodeDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataInterval_ != nullptr
        && this->requestId_ != nullptr && this->transcodeData_ != nullptr; };
    // dataInterval Field Functions 
    bool hasDataInterval() const { return this->dataInterval_ != nullptr;};
    void deleteDataInterval() { this->dataInterval_ = nullptr;};
    inline string dataInterval() const { DARABONBA_PTR_GET_DEFAULT(dataInterval_, "") };
    inline DescribeVodTranscodeDataResponseBody& setDataInterval(string dataInterval) { DARABONBA_PTR_SET_VALUE(dataInterval_, dataInterval) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVodTranscodeDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // transcodeData Field Functions 
    bool hasTranscodeData() const { return this->transcodeData_ != nullptr;};
    void deleteTranscodeData() { this->transcodeData_ = nullptr;};
    inline const DescribeVodTranscodeDataResponseBodyTranscodeData & transcodeData() const { DARABONBA_PTR_GET_CONST(transcodeData_, DescribeVodTranscodeDataResponseBodyTranscodeData) };
    inline DescribeVodTranscodeDataResponseBodyTranscodeData transcodeData() { DARABONBA_PTR_GET(transcodeData_, DescribeVodTranscodeDataResponseBodyTranscodeData) };
    inline DescribeVodTranscodeDataResponseBody& setTranscodeData(const DescribeVodTranscodeDataResponseBodyTranscodeData & transcodeData) { DARABONBA_PTR_SET_VALUE(transcodeData_, transcodeData) };
    inline DescribeVodTranscodeDataResponseBody& setTranscodeData(DescribeVodTranscodeDataResponseBodyTranscodeData && transcodeData) { DARABONBA_PTR_SET_RVALUE(transcodeData_, transcodeData) };


  protected:
    // The interval at which the data was queried. Valid values:
    // 
    // *   **hour**
    // *   **day**
    std::shared_ptr<string> dataInterval_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The transcoding statistics returned.
    std::shared_ptr<DescribeVodTranscodeDataResponseBodyTranscodeData> transcodeData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
