// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEMEDIAMARKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEMEDIAMARKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class DeleteMediaMarksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteMediaMarksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
      DARABONBA_PTR_TO_JSON(MediaMarkIds, mediaMarkIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteMediaMarksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
      DARABONBA_PTR_FROM_JSON(MediaMarkIds, mediaMarkIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DeleteMediaMarksResponseBody() = default ;
    DeleteMediaMarksResponseBody(const DeleteMediaMarksResponseBody &) = default ;
    DeleteMediaMarksResponseBody(DeleteMediaMarksResponseBody &&) = default ;
    DeleteMediaMarksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteMediaMarksResponseBody() = default ;
    DeleteMediaMarksResponseBody& operator=(const DeleteMediaMarksResponseBody &) = default ;
    DeleteMediaMarksResponseBody& operator=(DeleteMediaMarksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->mediaId_ != nullptr
        && this->mediaMarkIds_ != nullptr && this->requestId_ != nullptr; };
    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string mediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline DeleteMediaMarksResponseBody& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


    // mediaMarkIds Field Functions 
    bool hasMediaMarkIds() const { return this->mediaMarkIds_ != nullptr;};
    void deleteMediaMarkIds() { this->mediaMarkIds_ = nullptr;};
    inline string mediaMarkIds() const { DARABONBA_PTR_GET_DEFAULT(mediaMarkIds_, "") };
    inline DeleteMediaMarksResponseBody& setMediaMarkIds(string mediaMarkIds) { DARABONBA_PTR_SET_VALUE(mediaMarkIds_, mediaMarkIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteMediaMarksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the media asset.
    std::shared_ptr<string> mediaId_ = nullptr;
    // The IDs of the deleted marks separated with commas (,).
    std::shared_ptr<string> mediaMarkIds_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
