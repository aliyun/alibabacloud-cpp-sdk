// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINSTREAMTRANSCODEDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINSTREAMTRANSCODEDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLiveDomainStreamTranscodeDataResponseBodyTranscodeDataList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDomainStreamTranscodeDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDomainStreamTranscodeDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TranscodeDataList, transcodeDataList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDomainStreamTranscodeDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TranscodeDataList, transcodeDataList_);
    };
    DescribeLiveDomainStreamTranscodeDataResponseBody() = default ;
    DescribeLiveDomainStreamTranscodeDataResponseBody(const DescribeLiveDomainStreamTranscodeDataResponseBody &) = default ;
    DescribeLiveDomainStreamTranscodeDataResponseBody(DescribeLiveDomainStreamTranscodeDataResponseBody &&) = default ;
    DescribeLiveDomainStreamTranscodeDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDomainStreamTranscodeDataResponseBody() = default ;
    DescribeLiveDomainStreamTranscodeDataResponseBody& operator=(const DescribeLiveDomainStreamTranscodeDataResponseBody &) = default ;
    DescribeLiveDomainStreamTranscodeDataResponseBody& operator=(DescribeLiveDomainStreamTranscodeDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->transcodeDataList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveDomainStreamTranscodeDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // transcodeDataList Field Functions 
    bool hasTranscodeDataList() const { return this->transcodeDataList_ != nullptr;};
    void deleteTranscodeDataList() { this->transcodeDataList_ = nullptr;};
    inline const DescribeLiveDomainStreamTranscodeDataResponseBodyTranscodeDataList & transcodeDataList() const { DARABONBA_PTR_GET_CONST(transcodeDataList_, DescribeLiveDomainStreamTranscodeDataResponseBodyTranscodeDataList) };
    inline DescribeLiveDomainStreamTranscodeDataResponseBodyTranscodeDataList transcodeDataList() { DARABONBA_PTR_GET(transcodeDataList_, DescribeLiveDomainStreamTranscodeDataResponseBodyTranscodeDataList) };
    inline DescribeLiveDomainStreamTranscodeDataResponseBody& setTranscodeDataList(const DescribeLiveDomainStreamTranscodeDataResponseBodyTranscodeDataList & transcodeDataList) { DARABONBA_PTR_SET_VALUE(transcodeDataList_, transcodeDataList) };
    inline DescribeLiveDomainStreamTranscodeDataResponseBody& setTranscodeDataList(DescribeLiveDomainStreamTranscodeDataResponseBodyTranscodeDataList && transcodeDataList) { DARABONBA_PTR_SET_RVALUE(transcodeDataList_, transcodeDataList) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The transcoding usage data returned at each interval.
    std::shared_ptr<DescribeLiveDomainStreamTranscodeDataResponseBodyTranscodeDataList> transcodeDataList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
