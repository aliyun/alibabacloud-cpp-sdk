// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMSTATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMSTATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveStreamStateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveStreamStateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StreamState, streamState_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveStreamStateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StreamState, streamState_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeLiveStreamStateResponseBody() = default ;
    DescribeLiveStreamStateResponseBody(const DescribeLiveStreamStateResponseBody &) = default ;
    DescribeLiveStreamStateResponseBody(DescribeLiveStreamStateResponseBody &&) = default ;
    DescribeLiveStreamStateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveStreamStateResponseBody() = default ;
    DescribeLiveStreamStateResponseBody& operator=(const DescribeLiveStreamStateResponseBody &) = default ;
    DescribeLiveStreamStateResponseBody& operator=(DescribeLiveStreamStateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->streamState_ == nullptr && return this->type_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveStreamStateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // streamState Field Functions 
    bool hasStreamState() const { return this->streamState_ != nullptr;};
    void deleteStreamState() { this->streamState_ = nullptr;};
    inline string streamState() const { DARABONBA_PTR_GET_DEFAULT(streamState_, "") };
    inline DescribeLiveStreamStateResponseBody& setStreamState(string streamState) { DARABONBA_PTR_SET_VALUE(streamState_, streamState) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeLiveStreamStateResponseBody& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The status of the stream. Valid values:
    // 
    // *   online: The stream is being ingested.
    // *   offline: The stream is offline. This may be caused by failed or completed stream ingest. For the specific reason, check the stream ingest callback. This operation does not provide detailed information.
    std::shared_ptr<string> streamState_ = nullptr;
    // The mode of the stream. Valid values:
    // 
    // *   push: stream ingest
    // *   pull: triggered stream pulling
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
