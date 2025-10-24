// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMEDIALISTBYURLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYMEDIALISTBYURLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryMediaListByURLResponseBodyMediaList.hpp>
#include <alibabacloud/models/QueryMediaListByURLResponseBodyNonExistFileURLs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryMediaListByURLResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMediaListByURLResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MediaList, mediaList_);
      DARABONBA_PTR_TO_JSON(NonExistFileURLs, nonExistFileURLs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMediaListByURLResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaList, mediaList_);
      DARABONBA_PTR_FROM_JSON(NonExistFileURLs, nonExistFileURLs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryMediaListByURLResponseBody() = default ;
    QueryMediaListByURLResponseBody(const QueryMediaListByURLResponseBody &) = default ;
    QueryMediaListByURLResponseBody(QueryMediaListByURLResponseBody &&) = default ;
    QueryMediaListByURLResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMediaListByURLResponseBody() = default ;
    QueryMediaListByURLResponseBody& operator=(const QueryMediaListByURLResponseBody &) = default ;
    QueryMediaListByURLResponseBody& operator=(QueryMediaListByURLResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mediaList_ == nullptr
        && return this->nonExistFileURLs_ == nullptr && return this->requestId_ == nullptr; };
    // mediaList Field Functions 
    bool hasMediaList() const { return this->mediaList_ != nullptr;};
    void deleteMediaList() { this->mediaList_ = nullptr;};
    inline const QueryMediaListByURLResponseBodyMediaList & mediaList() const { DARABONBA_PTR_GET_CONST(mediaList_, QueryMediaListByURLResponseBodyMediaList) };
    inline QueryMediaListByURLResponseBodyMediaList mediaList() { DARABONBA_PTR_GET(mediaList_, QueryMediaListByURLResponseBodyMediaList) };
    inline QueryMediaListByURLResponseBody& setMediaList(const QueryMediaListByURLResponseBodyMediaList & mediaList) { DARABONBA_PTR_SET_VALUE(mediaList_, mediaList) };
    inline QueryMediaListByURLResponseBody& setMediaList(QueryMediaListByURLResponseBodyMediaList && mediaList) { DARABONBA_PTR_SET_RVALUE(mediaList_, mediaList) };


    // nonExistFileURLs Field Functions 
    bool hasNonExistFileURLs() const { return this->nonExistFileURLs_ != nullptr;};
    void deleteNonExistFileURLs() { this->nonExistFileURLs_ = nullptr;};
    inline const QueryMediaListByURLResponseBodyNonExistFileURLs & nonExistFileURLs() const { DARABONBA_PTR_GET_CONST(nonExistFileURLs_, QueryMediaListByURLResponseBodyNonExistFileURLs) };
    inline QueryMediaListByURLResponseBodyNonExistFileURLs nonExistFileURLs() { DARABONBA_PTR_GET(nonExistFileURLs_, QueryMediaListByURLResponseBodyNonExistFileURLs) };
    inline QueryMediaListByURLResponseBody& setNonExistFileURLs(const QueryMediaListByURLResponseBodyNonExistFileURLs & nonExistFileURLs) { DARABONBA_PTR_SET_VALUE(nonExistFileURLs_, nonExistFileURLs) };
    inline QueryMediaListByURLResponseBody& setNonExistFileURLs(QueryMediaListByURLResponseBodyNonExistFileURLs && nonExistFileURLs) { DARABONBA_PTR_SET_RVALUE(nonExistFileURLs_, nonExistFileURLs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryMediaListByURLResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of media files.
    std::shared_ptr<QueryMediaListByURLResponseBodyMediaList> mediaList_ = nullptr;
    // The IDs of the media files that do not exist. This parameter is not returned if all specified media files exist.
    std::shared_ptr<QueryMediaListByURLResponseBodyNonExistFileURLs> nonExistFileURLs_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
