// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLiveStreamCountResponseBodyStreamCountInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveStreamCountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveStreamCountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StreamCountInfos, streamCountInfos_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveStreamCountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StreamCountInfos, streamCountInfos_);
    };
    DescribeLiveStreamCountResponseBody() = default ;
    DescribeLiveStreamCountResponseBody(const DescribeLiveStreamCountResponseBody &) = default ;
    DescribeLiveStreamCountResponseBody(DescribeLiveStreamCountResponseBody &&) = default ;
    DescribeLiveStreamCountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveStreamCountResponseBody() = default ;
    DescribeLiveStreamCountResponseBody& operator=(const DescribeLiveStreamCountResponseBody &) = default ;
    DescribeLiveStreamCountResponseBody& operator=(DescribeLiveStreamCountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->streamCountInfos_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveStreamCountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // streamCountInfos Field Functions 
    bool hasStreamCountInfos() const { return this->streamCountInfos_ != nullptr;};
    void deleteStreamCountInfos() { this->streamCountInfos_ = nullptr;};
    inline const DescribeLiveStreamCountResponseBodyStreamCountInfos & streamCountInfos() const { DARABONBA_PTR_GET_CONST(streamCountInfos_, DescribeLiveStreamCountResponseBodyStreamCountInfos) };
    inline DescribeLiveStreamCountResponseBodyStreamCountInfos streamCountInfos() { DARABONBA_PTR_GET(streamCountInfos_, DescribeLiveStreamCountResponseBodyStreamCountInfos) };
    inline DescribeLiveStreamCountResponseBody& setStreamCountInfos(const DescribeLiveStreamCountResponseBodyStreamCountInfos & streamCountInfos) { DARABONBA_PTR_SET_VALUE(streamCountInfos_, streamCountInfos) };
    inline DescribeLiveStreamCountResponseBody& setStreamCountInfos(DescribeLiveStreamCountResponseBodyStreamCountInfos && streamCountInfos) { DARABONBA_PTR_SET_RVALUE(streamCountInfos_, streamCountInfos) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The statistics of the live streams.
    std::shared_ptr<DescribeLiveStreamCountResponseBodyStreamCountInfos> streamCountInfos_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
