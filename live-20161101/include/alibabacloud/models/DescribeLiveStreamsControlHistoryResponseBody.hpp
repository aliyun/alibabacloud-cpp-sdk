// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMSCONTROLHISTORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMSCONTROLHISTORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLiveStreamsControlHistoryResponseBodyControlInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveStreamsControlHistoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveStreamsControlHistoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ControlInfo, controlInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveStreamsControlHistoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ControlInfo, controlInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLiveStreamsControlHistoryResponseBody() = default ;
    DescribeLiveStreamsControlHistoryResponseBody(const DescribeLiveStreamsControlHistoryResponseBody &) = default ;
    DescribeLiveStreamsControlHistoryResponseBody(DescribeLiveStreamsControlHistoryResponseBody &&) = default ;
    DescribeLiveStreamsControlHistoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveStreamsControlHistoryResponseBody() = default ;
    DescribeLiveStreamsControlHistoryResponseBody& operator=(const DescribeLiveStreamsControlHistoryResponseBody &) = default ;
    DescribeLiveStreamsControlHistoryResponseBody& operator=(DescribeLiveStreamsControlHistoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->controlInfo_ == nullptr
        && return this->requestId_ == nullptr; };
    // controlInfo Field Functions 
    bool hasControlInfo() const { return this->controlInfo_ != nullptr;};
    void deleteControlInfo() { this->controlInfo_ = nullptr;};
    inline const DescribeLiveStreamsControlHistoryResponseBodyControlInfo & controlInfo() const { DARABONBA_PTR_GET_CONST(controlInfo_, DescribeLiveStreamsControlHistoryResponseBodyControlInfo) };
    inline DescribeLiveStreamsControlHistoryResponseBodyControlInfo controlInfo() { DARABONBA_PTR_GET(controlInfo_, DescribeLiveStreamsControlHistoryResponseBodyControlInfo) };
    inline DescribeLiveStreamsControlHistoryResponseBody& setControlInfo(const DescribeLiveStreamsControlHistoryResponseBodyControlInfo & controlInfo) { DARABONBA_PTR_SET_VALUE(controlInfo_, controlInfo) };
    inline DescribeLiveStreamsControlHistoryResponseBody& setControlInfo(DescribeLiveStreamsControlHistoryResponseBodyControlInfo && controlInfo) { DARABONBA_PTR_SET_RVALUE(controlInfo_, controlInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveStreamsControlHistoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The operation records.
    std::shared_ptr<DescribeLiveStreamsControlHistoryResponseBodyControlInfo> controlInfo_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
