// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMSTOTALCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMSTOTALCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLiveStreamsTotalCountResponseBodyStreamCountList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveStreamsTotalCountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveStreamsTotalCountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StreamCountList, streamCountList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveStreamsTotalCountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StreamCountList, streamCountList_);
    };
    DescribeLiveStreamsTotalCountResponseBody() = default ;
    DescribeLiveStreamsTotalCountResponseBody(const DescribeLiveStreamsTotalCountResponseBody &) = default ;
    DescribeLiveStreamsTotalCountResponseBody(DescribeLiveStreamsTotalCountResponseBody &&) = default ;
    DescribeLiveStreamsTotalCountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveStreamsTotalCountResponseBody() = default ;
    DescribeLiveStreamsTotalCountResponseBody& operator=(const DescribeLiveStreamsTotalCountResponseBody &) = default ;
    DescribeLiveStreamsTotalCountResponseBody& operator=(DescribeLiveStreamsTotalCountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->streamCountList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveStreamsTotalCountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // streamCountList Field Functions 
    bool hasStreamCountList() const { return this->streamCountList_ != nullptr;};
    void deleteStreamCountList() { this->streamCountList_ = nullptr;};
    inline const DescribeLiveStreamsTotalCountResponseBodyStreamCountList & streamCountList() const { DARABONBA_PTR_GET_CONST(streamCountList_, DescribeLiveStreamsTotalCountResponseBodyStreamCountList) };
    inline DescribeLiveStreamsTotalCountResponseBodyStreamCountList streamCountList() { DARABONBA_PTR_GET(streamCountList_, DescribeLiveStreamsTotalCountResponseBodyStreamCountList) };
    inline DescribeLiveStreamsTotalCountResponseBody& setStreamCountList(const DescribeLiveStreamsTotalCountResponseBodyStreamCountList & streamCountList) { DARABONBA_PTR_SET_VALUE(streamCountList_, streamCountList) };
    inline DescribeLiveStreamsTotalCountResponseBody& setStreamCountList(DescribeLiveStreamsTotalCountResponseBodyStreamCountList && streamCountList) { DARABONBA_PTR_SET_RVALUE(streamCountList_, streamCountList) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The statistics about the live streams.
    std::shared_ptr<DescribeLiveStreamsTotalCountResponseBodyStreamCountList> streamCountList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
