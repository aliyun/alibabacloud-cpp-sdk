// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMEDIALISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYMEDIALISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryMediaListResponseBodyMediaList.hpp>
#include <alibabacloud/models/QueryMediaListResponseBodyNonExistMediaIds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryMediaListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMediaListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MediaList, mediaList_);
      DARABONBA_PTR_TO_JSON(NonExistMediaIds, nonExistMediaIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMediaListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaList, mediaList_);
      DARABONBA_PTR_FROM_JSON(NonExistMediaIds, nonExistMediaIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryMediaListResponseBody() = default ;
    QueryMediaListResponseBody(const QueryMediaListResponseBody &) = default ;
    QueryMediaListResponseBody(QueryMediaListResponseBody &&) = default ;
    QueryMediaListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMediaListResponseBody() = default ;
    QueryMediaListResponseBody& operator=(const QueryMediaListResponseBody &) = default ;
    QueryMediaListResponseBody& operator=(QueryMediaListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mediaList_ == nullptr
        && return this->nonExistMediaIds_ == nullptr && return this->requestId_ == nullptr; };
    // mediaList Field Functions 
    bool hasMediaList() const { return this->mediaList_ != nullptr;};
    void deleteMediaList() { this->mediaList_ = nullptr;};
    inline const QueryMediaListResponseBodyMediaList & mediaList() const { DARABONBA_PTR_GET_CONST(mediaList_, QueryMediaListResponseBodyMediaList) };
    inline QueryMediaListResponseBodyMediaList mediaList() { DARABONBA_PTR_GET(mediaList_, QueryMediaListResponseBodyMediaList) };
    inline QueryMediaListResponseBody& setMediaList(const QueryMediaListResponseBodyMediaList & mediaList) { DARABONBA_PTR_SET_VALUE(mediaList_, mediaList) };
    inline QueryMediaListResponseBody& setMediaList(QueryMediaListResponseBodyMediaList && mediaList) { DARABONBA_PTR_SET_RVALUE(mediaList_, mediaList) };


    // nonExistMediaIds Field Functions 
    bool hasNonExistMediaIds() const { return this->nonExistMediaIds_ != nullptr;};
    void deleteNonExistMediaIds() { this->nonExistMediaIds_ = nullptr;};
    inline const QueryMediaListResponseBodyNonExistMediaIds & nonExistMediaIds() const { DARABONBA_PTR_GET_CONST(nonExistMediaIds_, QueryMediaListResponseBodyNonExistMediaIds) };
    inline QueryMediaListResponseBodyNonExistMediaIds nonExistMediaIds() { DARABONBA_PTR_GET(nonExistMediaIds_, QueryMediaListResponseBodyNonExistMediaIds) };
    inline QueryMediaListResponseBody& setNonExistMediaIds(const QueryMediaListResponseBodyNonExistMediaIds & nonExistMediaIds) { DARABONBA_PTR_SET_VALUE(nonExistMediaIds_, nonExistMediaIds) };
    inline QueryMediaListResponseBody& setNonExistMediaIds(QueryMediaListResponseBodyNonExistMediaIds && nonExistMediaIds) { DARABONBA_PTR_SET_RVALUE(nonExistMediaIds_, nonExistMediaIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryMediaListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of media files.
    std::shared_ptr<QueryMediaListResponseBodyMediaList> mediaList_ = nullptr;
    // The IDs of the media files that do not exist. This parameter is not returned when all specified media files exist.
    std::shared_ptr<QueryMediaListResponseBodyNonExistMediaIds> nonExistMediaIds_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
