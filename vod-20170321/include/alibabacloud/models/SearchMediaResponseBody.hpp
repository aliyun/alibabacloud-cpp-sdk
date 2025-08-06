// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHMEDIARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SEARCHMEDIARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SearchMediaResponseBodyMediaList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class SearchMediaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchMediaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MediaList, mediaList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ScrollToken, scrollToken_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, SearchMediaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaList, mediaList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ScrollToken, scrollToken_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    SearchMediaResponseBody() = default ;
    SearchMediaResponseBody(const SearchMediaResponseBody &) = default ;
    SearchMediaResponseBody(SearchMediaResponseBody &&) = default ;
    SearchMediaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchMediaResponseBody() = default ;
    SearchMediaResponseBody& operator=(const SearchMediaResponseBody &) = default ;
    SearchMediaResponseBody& operator=(SearchMediaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->mediaList_ != nullptr
        && this->requestId_ != nullptr && this->scrollToken_ != nullptr && this->total_ != nullptr; };
    // mediaList Field Functions 
    bool hasMediaList() const { return this->mediaList_ != nullptr;};
    void deleteMediaList() { this->mediaList_ = nullptr;};
    inline const vector<SearchMediaResponseBodyMediaList> & mediaList() const { DARABONBA_PTR_GET_CONST(mediaList_, vector<SearchMediaResponseBodyMediaList>) };
    inline vector<SearchMediaResponseBodyMediaList> mediaList() { DARABONBA_PTR_GET(mediaList_, vector<SearchMediaResponseBodyMediaList>) };
    inline SearchMediaResponseBody& setMediaList(const vector<SearchMediaResponseBodyMediaList> & mediaList) { DARABONBA_PTR_SET_VALUE(mediaList_, mediaList) };
    inline SearchMediaResponseBody& setMediaList(vector<SearchMediaResponseBodyMediaList> && mediaList) { DARABONBA_PTR_SET_RVALUE(mediaList_, mediaList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SearchMediaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scrollToken Field Functions 
    bool hasScrollToken() const { return this->scrollToken_ != nullptr;};
    void deleteScrollToken() { this->scrollToken_ = nullptr;};
    inline string scrollToken() const { DARABONBA_PTR_GET_DEFAULT(scrollToken_, "") };
    inline SearchMediaResponseBody& setScrollToken(string scrollToken) { DARABONBA_PTR_SET_VALUE(scrollToken_, scrollToken) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline SearchMediaResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The information about the media assets.
    std::shared_ptr<vector<SearchMediaResponseBodyMediaList>> mediaList_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The pagination identifier.
    std::shared_ptr<string> scrollToken_ = nullptr;
    // The total number of data records that meet the specified filter criteria.
    std::shared_ptr<int64_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
