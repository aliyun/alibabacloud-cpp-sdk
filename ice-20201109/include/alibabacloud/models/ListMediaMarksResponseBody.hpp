// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMEDIAMARKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMEDIAMARKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListMediaMarksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMediaMarksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
      DARABONBA_PTR_TO_JSON(MediaMarks, mediaMarks_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListMediaMarksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
      DARABONBA_PTR_FROM_JSON(MediaMarks, mediaMarks_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListMediaMarksResponseBody() = default ;
    ListMediaMarksResponseBody(const ListMediaMarksResponseBody &) = default ;
    ListMediaMarksResponseBody(ListMediaMarksResponseBody &&) = default ;
    ListMediaMarksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMediaMarksResponseBody() = default ;
    ListMediaMarksResponseBody& operator=(const ListMediaMarksResponseBody &) = default ;
    ListMediaMarksResponseBody& operator=(ListMediaMarksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mediaId_ == nullptr
        && this->mediaMarks_ == nullptr && this->requestId_ == nullptr; };
    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string getMediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline ListMediaMarksResponseBody& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


    // mediaMarks Field Functions 
    bool hasMediaMarks() const { return this->mediaMarks_ != nullptr;};
    void deleteMediaMarks() { this->mediaMarks_ = nullptr;};
    inline string getMediaMarks() const { DARABONBA_PTR_GET_DEFAULT(mediaMarks_, "") };
    inline ListMediaMarksResponseBody& setMediaMarks(string mediaMarks) { DARABONBA_PTR_SET_VALUE(mediaMarks_, mediaMarks) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMediaMarksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the media asset.
    shared_ptr<string> mediaId_ {};
    // The marks of the media asset, in the JSONArray format.
    shared_ptr<string> mediaMarks_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
