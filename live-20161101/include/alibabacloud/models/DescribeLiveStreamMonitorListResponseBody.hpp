// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMMONITORLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMMONITORLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveStreamMonitorListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveStreamMonitorListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LiveStreamMonitorList, liveStreamMonitorList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveStreamMonitorListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LiveStreamMonitorList, liveStreamMonitorList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeLiveStreamMonitorListResponseBody() = default ;
    DescribeLiveStreamMonitorListResponseBody(const DescribeLiveStreamMonitorListResponseBody &) = default ;
    DescribeLiveStreamMonitorListResponseBody(DescribeLiveStreamMonitorListResponseBody &&) = default ;
    DescribeLiveStreamMonitorListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveStreamMonitorListResponseBody() = default ;
    DescribeLiveStreamMonitorListResponseBody& operator=(const DescribeLiveStreamMonitorListResponseBody &) = default ;
    DescribeLiveStreamMonitorListResponseBody& operator=(DescribeLiveStreamMonitorListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->liveStreamMonitorList_ == nullptr
        && return this->requestId_ == nullptr && return this->total_ == nullptr; };
    // liveStreamMonitorList Field Functions 
    bool hasLiveStreamMonitorList() const { return this->liveStreamMonitorList_ != nullptr;};
    void deleteLiveStreamMonitorList() { this->liveStreamMonitorList_ = nullptr;};
    inline const vector<DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorList> & liveStreamMonitorList() const { DARABONBA_PTR_GET_CONST(liveStreamMonitorList_, vector<DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorList>) };
    inline vector<DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorList> liveStreamMonitorList() { DARABONBA_PTR_GET(liveStreamMonitorList_, vector<DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorList>) };
    inline DescribeLiveStreamMonitorListResponseBody& setLiveStreamMonitorList(const vector<DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorList> & liveStreamMonitorList) { DARABONBA_PTR_SET_VALUE(liveStreamMonitorList_, liveStreamMonitorList) };
    inline DescribeLiveStreamMonitorListResponseBody& setLiveStreamMonitorList(vector<DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorList> && liveStreamMonitorList) { DARABONBA_PTR_SET_RVALUE(liveStreamMonitorList_, liveStreamMonitorList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveStreamMonitorListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline DescribeLiveStreamMonitorListResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The list of monitoring sessions.
    std::shared_ptr<vector<DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorList>> liveStreamMonitorList_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The number of monitoring sessions.
    std::shared_ptr<int32_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
