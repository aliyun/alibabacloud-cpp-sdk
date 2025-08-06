// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLIVERECORDVIDEORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLIVERECORDVIDEORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListLiveRecordVideoResponseBodyLiveRecordVideoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListLiveRecordVideoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLiveRecordVideoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LiveRecordVideoList, liveRecordVideoList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListLiveRecordVideoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LiveRecordVideoList, liveRecordVideoList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    ListLiveRecordVideoResponseBody() = default ;
    ListLiveRecordVideoResponseBody(const ListLiveRecordVideoResponseBody &) = default ;
    ListLiveRecordVideoResponseBody(ListLiveRecordVideoResponseBody &&) = default ;
    ListLiveRecordVideoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLiveRecordVideoResponseBody() = default ;
    ListLiveRecordVideoResponseBody& operator=(const ListLiveRecordVideoResponseBody &) = default ;
    ListLiveRecordVideoResponseBody& operator=(ListLiveRecordVideoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->liveRecordVideoList_ != nullptr
        && this->requestId_ != nullptr && this->total_ != nullptr; };
    // liveRecordVideoList Field Functions 
    bool hasLiveRecordVideoList() const { return this->liveRecordVideoList_ != nullptr;};
    void deleteLiveRecordVideoList() { this->liveRecordVideoList_ = nullptr;};
    inline const ListLiveRecordVideoResponseBodyLiveRecordVideoList & liveRecordVideoList() const { DARABONBA_PTR_GET_CONST(liveRecordVideoList_, ListLiveRecordVideoResponseBodyLiveRecordVideoList) };
    inline ListLiveRecordVideoResponseBodyLiveRecordVideoList liveRecordVideoList() { DARABONBA_PTR_GET(liveRecordVideoList_, ListLiveRecordVideoResponseBodyLiveRecordVideoList) };
    inline ListLiveRecordVideoResponseBody& setLiveRecordVideoList(const ListLiveRecordVideoResponseBodyLiveRecordVideoList & liveRecordVideoList) { DARABONBA_PTR_SET_VALUE(liveRecordVideoList_, liveRecordVideoList) };
    inline ListLiveRecordVideoResponseBody& setLiveRecordVideoList(ListLiveRecordVideoResponseBodyLiveRecordVideoList && liveRecordVideoList) { DARABONBA_PTR_SET_RVALUE(liveRecordVideoList_, liveRecordVideoList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListLiveRecordVideoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline ListLiveRecordVideoResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The list of videos.
    std::shared_ptr<ListLiveRecordVideoResponseBodyLiveRecordVideoList> liveRecordVideoList_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of videos.
    std::shared_ptr<int32_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
