// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALLMEDIABUCKETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTALLMEDIABUCKETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListAllMediaBucketResponseBodyMediaBucketList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class ListAllMediaBucketResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAllMediaBucketResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MediaBucketList, mediaBucketList_);
      DARABONBA_PTR_TO_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAllMediaBucketResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaBucketList, mediaBucketList_);
      DARABONBA_PTR_FROM_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAllMediaBucketResponseBody() = default ;
    ListAllMediaBucketResponseBody(const ListAllMediaBucketResponseBody &) = default ;
    ListAllMediaBucketResponseBody(ListAllMediaBucketResponseBody &&) = default ;
    ListAllMediaBucketResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAllMediaBucketResponseBody() = default ;
    ListAllMediaBucketResponseBody& operator=(const ListAllMediaBucketResponseBody &) = default ;
    ListAllMediaBucketResponseBody& operator=(ListAllMediaBucketResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mediaBucketList_ == nullptr
        && return this->nextPageToken_ == nullptr && return this->requestId_ == nullptr; };
    // mediaBucketList Field Functions 
    bool hasMediaBucketList() const { return this->mediaBucketList_ != nullptr;};
    void deleteMediaBucketList() { this->mediaBucketList_ = nullptr;};
    inline const ListAllMediaBucketResponseBodyMediaBucketList & mediaBucketList() const { DARABONBA_PTR_GET_CONST(mediaBucketList_, ListAllMediaBucketResponseBodyMediaBucketList) };
    inline ListAllMediaBucketResponseBodyMediaBucketList mediaBucketList() { DARABONBA_PTR_GET(mediaBucketList_, ListAllMediaBucketResponseBodyMediaBucketList) };
    inline ListAllMediaBucketResponseBody& setMediaBucketList(const ListAllMediaBucketResponseBodyMediaBucketList & mediaBucketList) { DARABONBA_PTR_SET_VALUE(mediaBucketList_, mediaBucketList) };
    inline ListAllMediaBucketResponseBody& setMediaBucketList(ListAllMediaBucketResponseBodyMediaBucketList && mediaBucketList) { DARABONBA_PTR_SET_RVALUE(mediaBucketList_, mediaBucketList) };


    // nextPageToken Field Functions 
    bool hasNextPageToken() const { return this->nextPageToken_ != nullptr;};
    void deleteNextPageToken() { this->nextPageToken_ = nullptr;};
    inline string nextPageToken() const { DARABONBA_PTR_GET_DEFAULT(nextPageToken_, "") };
    inline ListAllMediaBucketResponseBody& setNextPageToken(string nextPageToken) { DARABONBA_PTR_SET_VALUE(nextPageToken_, nextPageToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAllMediaBucketResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The media buckets returned.
    std::shared_ptr<ListAllMediaBucketResponseBodyMediaBucketList> mediaBucketList_ = nullptr;
    // The returned value of NextPageToken is a pagination token, which can be used in the next request to retrieve a new page of results.
    std::shared_ptr<string> nextPageToken_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
