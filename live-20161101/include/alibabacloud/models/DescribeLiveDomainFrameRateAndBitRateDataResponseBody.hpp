// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINFRAMERATEANDBITRATEDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINFRAMERATEANDBITRATEDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLiveDomainFrameRateAndBitRateDataResponseBodyFrameRateAndBitRateInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDomainFrameRateAndBitRateDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDomainFrameRateAndBitRateDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FrameRateAndBitRateInfos, frameRateAndBitRateInfos_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDomainFrameRateAndBitRateDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FrameRateAndBitRateInfos, frameRateAndBitRateInfos_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLiveDomainFrameRateAndBitRateDataResponseBody() = default ;
    DescribeLiveDomainFrameRateAndBitRateDataResponseBody(const DescribeLiveDomainFrameRateAndBitRateDataResponseBody &) = default ;
    DescribeLiveDomainFrameRateAndBitRateDataResponseBody(DescribeLiveDomainFrameRateAndBitRateDataResponseBody &&) = default ;
    DescribeLiveDomainFrameRateAndBitRateDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDomainFrameRateAndBitRateDataResponseBody() = default ;
    DescribeLiveDomainFrameRateAndBitRateDataResponseBody& operator=(const DescribeLiveDomainFrameRateAndBitRateDataResponseBody &) = default ;
    DescribeLiveDomainFrameRateAndBitRateDataResponseBody& operator=(DescribeLiveDomainFrameRateAndBitRateDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->frameRateAndBitRateInfos_ == nullptr
        && return this->requestId_ == nullptr; };
    // frameRateAndBitRateInfos Field Functions 
    bool hasFrameRateAndBitRateInfos() const { return this->frameRateAndBitRateInfos_ != nullptr;};
    void deleteFrameRateAndBitRateInfos() { this->frameRateAndBitRateInfos_ = nullptr;};
    inline const DescribeLiveDomainFrameRateAndBitRateDataResponseBodyFrameRateAndBitRateInfos & frameRateAndBitRateInfos() const { DARABONBA_PTR_GET_CONST(frameRateAndBitRateInfos_, DescribeLiveDomainFrameRateAndBitRateDataResponseBodyFrameRateAndBitRateInfos) };
    inline DescribeLiveDomainFrameRateAndBitRateDataResponseBodyFrameRateAndBitRateInfos frameRateAndBitRateInfos() { DARABONBA_PTR_GET(frameRateAndBitRateInfos_, DescribeLiveDomainFrameRateAndBitRateDataResponseBodyFrameRateAndBitRateInfos) };
    inline DescribeLiveDomainFrameRateAndBitRateDataResponseBody& setFrameRateAndBitRateInfos(const DescribeLiveDomainFrameRateAndBitRateDataResponseBodyFrameRateAndBitRateInfos & frameRateAndBitRateInfos) { DARABONBA_PTR_SET_VALUE(frameRateAndBitRateInfos_, frameRateAndBitRateInfos) };
    inline DescribeLiveDomainFrameRateAndBitRateDataResponseBody& setFrameRateAndBitRateInfos(DescribeLiveDomainFrameRateAndBitRateDataResponseBodyFrameRateAndBitRateInfos && frameRateAndBitRateInfos) { DARABONBA_PTR_SET_RVALUE(frameRateAndBitRateInfos_, frameRateAndBitRateInfos) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveDomainFrameRateAndBitRateDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The frame rates and bitrates of the live streams that were queried.
    std::shared_ptr<DescribeLiveDomainFrameRateAndBitRateDataResponseBodyFrameRateAndBitRateInfos> frameRateAndBitRateInfos_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
