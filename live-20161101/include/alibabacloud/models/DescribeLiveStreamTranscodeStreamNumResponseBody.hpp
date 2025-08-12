// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMTRANSCODESTREAMNUMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMTRANSCODESTREAMNUMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveStreamTranscodeStreamNumResponseBodyTranscodeStreamCountDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveStreamTranscodeStreamNumResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveStreamTranscodeStreamNumResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LazyTranscodedNumber, lazyTranscodedNumber_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
      DARABONBA_PTR_TO_JSON(TranscodeStreamCountDetails, transcodeStreamCountDetails_);
      DARABONBA_PTR_TO_JSON(TranscodedNumber, transcodedNumber_);
      DARABONBA_PTR_TO_JSON(UntranscodeNumber, untranscodeNumber_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveStreamTranscodeStreamNumResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LazyTranscodedNumber, lazyTranscodedNumber_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
      DARABONBA_PTR_FROM_JSON(TranscodeStreamCountDetails, transcodeStreamCountDetails_);
      DARABONBA_PTR_FROM_JSON(TranscodedNumber, transcodedNumber_);
      DARABONBA_PTR_FROM_JSON(UntranscodeNumber, untranscodeNumber_);
    };
    DescribeLiveStreamTranscodeStreamNumResponseBody() = default ;
    DescribeLiveStreamTranscodeStreamNumResponseBody(const DescribeLiveStreamTranscodeStreamNumResponseBody &) = default ;
    DescribeLiveStreamTranscodeStreamNumResponseBody(DescribeLiveStreamTranscodeStreamNumResponseBody &&) = default ;
    DescribeLiveStreamTranscodeStreamNumResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveStreamTranscodeStreamNumResponseBody() = default ;
    DescribeLiveStreamTranscodeStreamNumResponseBody& operator=(const DescribeLiveStreamTranscodeStreamNumResponseBody &) = default ;
    DescribeLiveStreamTranscodeStreamNumResponseBody& operator=(DescribeLiveStreamTranscodeStreamNumResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->lazyTranscodedNumber_ != nullptr
        && this->requestId_ != nullptr && this->total_ != nullptr && this->transcodeStreamCountDetails_ != nullptr && this->transcodedNumber_ != nullptr && this->untranscodeNumber_ != nullptr; };
    // lazyTranscodedNumber Field Functions 
    bool hasLazyTranscodedNumber() const { return this->lazyTranscodedNumber_ != nullptr;};
    void deleteLazyTranscodedNumber() { this->lazyTranscodedNumber_ = nullptr;};
    inline int64_t lazyTranscodedNumber() const { DARABONBA_PTR_GET_DEFAULT(lazyTranscodedNumber_, 0L) };
    inline DescribeLiveStreamTranscodeStreamNumResponseBody& setLazyTranscodedNumber(int64_t lazyTranscodedNumber) { DARABONBA_PTR_SET_VALUE(lazyTranscodedNumber_, lazyTranscodedNumber) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveStreamTranscodeStreamNumResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline DescribeLiveStreamTranscodeStreamNumResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    // transcodeStreamCountDetails Field Functions 
    bool hasTranscodeStreamCountDetails() const { return this->transcodeStreamCountDetails_ != nullptr;};
    void deleteTranscodeStreamCountDetails() { this->transcodeStreamCountDetails_ = nullptr;};
    inline const vector<DescribeLiveStreamTranscodeStreamNumResponseBodyTranscodeStreamCountDetails> & transcodeStreamCountDetails() const { DARABONBA_PTR_GET_CONST(transcodeStreamCountDetails_, vector<DescribeLiveStreamTranscodeStreamNumResponseBodyTranscodeStreamCountDetails>) };
    inline vector<DescribeLiveStreamTranscodeStreamNumResponseBodyTranscodeStreamCountDetails> transcodeStreamCountDetails() { DARABONBA_PTR_GET(transcodeStreamCountDetails_, vector<DescribeLiveStreamTranscodeStreamNumResponseBodyTranscodeStreamCountDetails>) };
    inline DescribeLiveStreamTranscodeStreamNumResponseBody& setTranscodeStreamCountDetails(const vector<DescribeLiveStreamTranscodeStreamNumResponseBodyTranscodeStreamCountDetails> & transcodeStreamCountDetails) { DARABONBA_PTR_SET_VALUE(transcodeStreamCountDetails_, transcodeStreamCountDetails) };
    inline DescribeLiveStreamTranscodeStreamNumResponseBody& setTranscodeStreamCountDetails(vector<DescribeLiveStreamTranscodeStreamNumResponseBodyTranscodeStreamCountDetails> && transcodeStreamCountDetails) { DARABONBA_PTR_SET_RVALUE(transcodeStreamCountDetails_, transcodeStreamCountDetails) };


    // transcodedNumber Field Functions 
    bool hasTranscodedNumber() const { return this->transcodedNumber_ != nullptr;};
    void deleteTranscodedNumber() { this->transcodedNumber_ = nullptr;};
    inline int64_t transcodedNumber() const { DARABONBA_PTR_GET_DEFAULT(transcodedNumber_, 0L) };
    inline DescribeLiveStreamTranscodeStreamNumResponseBody& setTranscodedNumber(int64_t transcodedNumber) { DARABONBA_PTR_SET_VALUE(transcodedNumber_, transcodedNumber) };


    // untranscodeNumber Field Functions 
    bool hasUntranscodeNumber() const { return this->untranscodeNumber_ != nullptr;};
    void deleteUntranscodeNumber() { this->untranscodeNumber_ = nullptr;};
    inline int64_t untranscodeNumber() const { DARABONBA_PTR_GET_DEFAULT(untranscodeNumber_, 0L) };
    inline DescribeLiveStreamTranscodeStreamNumResponseBody& setUntranscodeNumber(int64_t untranscodeNumber) { DARABONBA_PTR_SET_VALUE(untranscodeNumber_, untranscodeNumber) };


  protected:
    // The number of streams for which transcoding is triggered by stream pulling.
    std::shared_ptr<int64_t> lazyTranscodedNumber_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of streams.
    std::shared_ptr<int64_t> total_ = nullptr;
    // The details about the transcoding templates.
    std::shared_ptr<vector<DescribeLiveStreamTranscodeStreamNumResponseBodyTranscodeStreamCountDetails>> transcodeStreamCountDetails_ = nullptr;
    // The number of streams that are transcoded.
    std::shared_ptr<int64_t> transcodedNumber_ = nullptr;
    // The number of streams that are not transcoded.
    std::shared_ptr<int64_t> untranscodeNumber_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
