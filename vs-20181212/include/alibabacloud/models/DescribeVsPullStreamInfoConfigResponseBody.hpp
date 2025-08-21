// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSPULLSTREAMINFOCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSPULLSTREAMINFOCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeVsPullStreamInfoConfigResponseBodyLiveAppRecordList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeVsPullStreamInfoConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVsPullStreamInfoConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LiveAppRecordList, liveAppRecordList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVsPullStreamInfoConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LiveAppRecordList, liveAppRecordList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeVsPullStreamInfoConfigResponseBody() = default ;
    DescribeVsPullStreamInfoConfigResponseBody(const DescribeVsPullStreamInfoConfigResponseBody &) = default ;
    DescribeVsPullStreamInfoConfigResponseBody(DescribeVsPullStreamInfoConfigResponseBody &&) = default ;
    DescribeVsPullStreamInfoConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVsPullStreamInfoConfigResponseBody() = default ;
    DescribeVsPullStreamInfoConfigResponseBody& operator=(const DescribeVsPullStreamInfoConfigResponseBody &) = default ;
    DescribeVsPullStreamInfoConfigResponseBody& operator=(DescribeVsPullStreamInfoConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->liveAppRecordList_ != nullptr
        && this->requestId_ != nullptr; };
    // liveAppRecordList Field Functions 
    bool hasLiveAppRecordList() const { return this->liveAppRecordList_ != nullptr;};
    void deleteLiveAppRecordList() { this->liveAppRecordList_ = nullptr;};
    inline const DescribeVsPullStreamInfoConfigResponseBodyLiveAppRecordList & liveAppRecordList() const { DARABONBA_PTR_GET_CONST(liveAppRecordList_, DescribeVsPullStreamInfoConfigResponseBodyLiveAppRecordList) };
    inline DescribeVsPullStreamInfoConfigResponseBodyLiveAppRecordList liveAppRecordList() { DARABONBA_PTR_GET(liveAppRecordList_, DescribeVsPullStreamInfoConfigResponseBodyLiveAppRecordList) };
    inline DescribeVsPullStreamInfoConfigResponseBody& setLiveAppRecordList(const DescribeVsPullStreamInfoConfigResponseBodyLiveAppRecordList & liveAppRecordList) { DARABONBA_PTR_SET_VALUE(liveAppRecordList_, liveAppRecordList) };
    inline DescribeVsPullStreamInfoConfigResponseBody& setLiveAppRecordList(DescribeVsPullStreamInfoConfigResponseBodyLiveAppRecordList && liveAppRecordList) { DARABONBA_PTR_SET_RVALUE(liveAppRecordList_, liveAppRecordList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVsPullStreamInfoConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<DescribeVsPullStreamInfoConfigResponseBodyLiveAppRecordList> liveAppRecordList_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
