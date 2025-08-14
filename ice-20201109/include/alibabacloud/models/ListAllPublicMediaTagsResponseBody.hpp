// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALLPUBLICMEDIATAGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTALLPUBLICMEDIATAGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAllPublicMediaTagsResponseBodyMediaTagList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListAllPublicMediaTagsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAllPublicMediaTagsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MediaTagList, mediaTagList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAllPublicMediaTagsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaTagList, mediaTagList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAllPublicMediaTagsResponseBody() = default ;
    ListAllPublicMediaTagsResponseBody(const ListAllPublicMediaTagsResponseBody &) = default ;
    ListAllPublicMediaTagsResponseBody(ListAllPublicMediaTagsResponseBody &&) = default ;
    ListAllPublicMediaTagsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAllPublicMediaTagsResponseBody() = default ;
    ListAllPublicMediaTagsResponseBody& operator=(const ListAllPublicMediaTagsResponseBody &) = default ;
    ListAllPublicMediaTagsResponseBody& operator=(ListAllPublicMediaTagsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->mediaTagList_ != nullptr
        && this->requestId_ != nullptr; };
    // mediaTagList Field Functions 
    bool hasMediaTagList() const { return this->mediaTagList_ != nullptr;};
    void deleteMediaTagList() { this->mediaTagList_ = nullptr;};
    inline const vector<ListAllPublicMediaTagsResponseBodyMediaTagList> & mediaTagList() const { DARABONBA_PTR_GET_CONST(mediaTagList_, vector<ListAllPublicMediaTagsResponseBodyMediaTagList>) };
    inline vector<ListAllPublicMediaTagsResponseBodyMediaTagList> mediaTagList() { DARABONBA_PTR_GET(mediaTagList_, vector<ListAllPublicMediaTagsResponseBodyMediaTagList>) };
    inline ListAllPublicMediaTagsResponseBody& setMediaTagList(const vector<ListAllPublicMediaTagsResponseBodyMediaTagList> & mediaTagList) { DARABONBA_PTR_SET_VALUE(mediaTagList_, mediaTagList) };
    inline ListAllPublicMediaTagsResponseBody& setMediaTagList(vector<ListAllPublicMediaTagsResponseBodyMediaTagList> && mediaTagList) { DARABONBA_PTR_SET_RVALUE(mediaTagList_, mediaTagList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAllPublicMediaTagsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The tags of media assets in the public media library.
    std::shared_ptr<vector<ListAllPublicMediaTagsResponseBodyMediaTagList>> mediaTagList_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
