// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMHISTORYUSERNUMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMHISTORYUSERNUMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLiveStreamHistoryUserNumResponseBodyLiveStreamUserNumInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveStreamHistoryUserNumResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveStreamHistoryUserNumResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LiveStreamUserNumInfos, liveStreamUserNumInfos_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveStreamHistoryUserNumResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LiveStreamUserNumInfos, liveStreamUserNumInfos_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLiveStreamHistoryUserNumResponseBody() = default ;
    DescribeLiveStreamHistoryUserNumResponseBody(const DescribeLiveStreamHistoryUserNumResponseBody &) = default ;
    DescribeLiveStreamHistoryUserNumResponseBody(DescribeLiveStreamHistoryUserNumResponseBody &&) = default ;
    DescribeLiveStreamHistoryUserNumResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveStreamHistoryUserNumResponseBody() = default ;
    DescribeLiveStreamHistoryUserNumResponseBody& operator=(const DescribeLiveStreamHistoryUserNumResponseBody &) = default ;
    DescribeLiveStreamHistoryUserNumResponseBody& operator=(DescribeLiveStreamHistoryUserNumResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->liveStreamUserNumInfos_ == nullptr
        && return this->requestId_ == nullptr; };
    // liveStreamUserNumInfos Field Functions 
    bool hasLiveStreamUserNumInfos() const { return this->liveStreamUserNumInfos_ != nullptr;};
    void deleteLiveStreamUserNumInfos() { this->liveStreamUserNumInfos_ = nullptr;};
    inline const DescribeLiveStreamHistoryUserNumResponseBodyLiveStreamUserNumInfos & liveStreamUserNumInfos() const { DARABONBA_PTR_GET_CONST(liveStreamUserNumInfos_, DescribeLiveStreamHistoryUserNumResponseBodyLiveStreamUserNumInfos) };
    inline DescribeLiveStreamHistoryUserNumResponseBodyLiveStreamUserNumInfos liveStreamUserNumInfos() { DARABONBA_PTR_GET(liveStreamUserNumInfos_, DescribeLiveStreamHistoryUserNumResponseBodyLiveStreamUserNumInfos) };
    inline DescribeLiveStreamHistoryUserNumResponseBody& setLiveStreamUserNumInfos(const DescribeLiveStreamHistoryUserNumResponseBodyLiveStreamUserNumInfos & liveStreamUserNumInfos) { DARABONBA_PTR_SET_VALUE(liveStreamUserNumInfos_, liveStreamUserNumInfos) };
    inline DescribeLiveStreamHistoryUserNumResponseBody& setLiveStreamUserNumInfos(DescribeLiveStreamHistoryUserNumResponseBodyLiveStreamUserNumInfos && liveStreamUserNumInfos) { DARABONBA_PTR_SET_RVALUE(liveStreamUserNumInfos_, liveStreamUserNumInfos) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveStreamHistoryUserNumResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The number of historical online users for the live stream.
    std::shared_ptr<DescribeLiveStreamHistoryUserNumResponseBodyLiveStreamUserNumInfos> liveStreamUserNumInfos_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
