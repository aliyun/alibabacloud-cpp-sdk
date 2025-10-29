// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEPULLSTREAMCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEPULLSTREAMCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLivePullStreamConfigResponseBodyLiveAppRecordList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLivePullStreamConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLivePullStreamConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LiveAppRecordList, liveAppRecordList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLivePullStreamConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LiveAppRecordList, liveAppRecordList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLivePullStreamConfigResponseBody() = default ;
    DescribeLivePullStreamConfigResponseBody(const DescribeLivePullStreamConfigResponseBody &) = default ;
    DescribeLivePullStreamConfigResponseBody(DescribeLivePullStreamConfigResponseBody &&) = default ;
    DescribeLivePullStreamConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLivePullStreamConfigResponseBody() = default ;
    DescribeLivePullStreamConfigResponseBody& operator=(const DescribeLivePullStreamConfigResponseBody &) = default ;
    DescribeLivePullStreamConfigResponseBody& operator=(DescribeLivePullStreamConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->liveAppRecordList_ == nullptr
        && return this->requestId_ == nullptr; };
    // liveAppRecordList Field Functions 
    bool hasLiveAppRecordList() const { return this->liveAppRecordList_ != nullptr;};
    void deleteLiveAppRecordList() { this->liveAppRecordList_ = nullptr;};
    inline const DescribeLivePullStreamConfigResponseBodyLiveAppRecordList & liveAppRecordList() const { DARABONBA_PTR_GET_CONST(liveAppRecordList_, DescribeLivePullStreamConfigResponseBodyLiveAppRecordList) };
    inline DescribeLivePullStreamConfigResponseBodyLiveAppRecordList liveAppRecordList() { DARABONBA_PTR_GET(liveAppRecordList_, DescribeLivePullStreamConfigResponseBodyLiveAppRecordList) };
    inline DescribeLivePullStreamConfigResponseBody& setLiveAppRecordList(const DescribeLivePullStreamConfigResponseBodyLiveAppRecordList & liveAppRecordList) { DARABONBA_PTR_SET_VALUE(liveAppRecordList_, liveAppRecordList) };
    inline DescribeLivePullStreamConfigResponseBody& setLiveAppRecordList(DescribeLivePullStreamConfigResponseBodyLiveAppRecordList && liveAppRecordList) { DARABONBA_PTR_SET_RVALUE(liveAppRecordList_, liveAppRecordList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLivePullStreamConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Details about the stream pulling configurations.
    std::shared_ptr<DescribeLivePullStreamConfigResponseBodyLiveAppRecordList> liveAppRecordList_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
