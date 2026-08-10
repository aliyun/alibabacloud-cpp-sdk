// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINFINITECANVASRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINFINITECANVASRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yike20260707
{
namespace Models
{
  class GetInfiniteCanvasResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInfiniteCanvasResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InfiniteCanvas, infiniteCanvas_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetInfiniteCanvasResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InfiniteCanvas, infiniteCanvas_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetInfiniteCanvasResponseBody() = default ;
    GetInfiniteCanvasResponseBody(const GetInfiniteCanvasResponseBody &) = default ;
    GetInfiniteCanvasResponseBody(GetInfiniteCanvasResponseBody &&) = default ;
    GetInfiniteCanvasResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInfiniteCanvasResponseBody() = default ;
    GetInfiniteCanvasResponseBody& operator=(const GetInfiniteCanvasResponseBody &) = default ;
    GetInfiniteCanvasResponseBody& operator=(GetInfiniteCanvasResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InfiniteCanvas : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InfiniteCanvas& obj) { 
        DARABONBA_PTR_TO_JSON(CanvasId, canvasId_);
        DARABONBA_PTR_TO_JSON(CoverUrl, coverUrl_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(Thumbnail, thumbnail_);
        DARABONBA_PTR_TO_JSON(Title, title_);
      };
      friend void from_json(const Darabonba::Json& j, InfiniteCanvas& obj) { 
        DARABONBA_PTR_FROM_JSON(CanvasId, canvasId_);
        DARABONBA_PTR_FROM_JSON(CoverUrl, coverUrl_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(Thumbnail, thumbnail_);
        DARABONBA_PTR_FROM_JSON(Title, title_);
      };
      InfiniteCanvas() = default ;
      InfiniteCanvas(const InfiniteCanvas &) = default ;
      InfiniteCanvas(InfiniteCanvas &&) = default ;
      InfiniteCanvas(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InfiniteCanvas() = default ;
      InfiniteCanvas& operator=(const InfiniteCanvas &) = default ;
      InfiniteCanvas& operator=(InfiniteCanvas &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->canvasId_ == nullptr
        && this->coverUrl_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->thumbnail_ == nullptr && this->title_ == nullptr; };
      // canvasId Field Functions 
      bool hasCanvasId() const { return this->canvasId_ != nullptr;};
      void deleteCanvasId() { this->canvasId_ = nullptr;};
      inline string getCanvasId() const { DARABONBA_PTR_GET_DEFAULT(canvasId_, "") };
      inline InfiniteCanvas& setCanvasId(string canvasId) { DARABONBA_PTR_SET_VALUE(canvasId_, canvasId) };


      // coverUrl Field Functions 
      bool hasCoverUrl() const { return this->coverUrl_ != nullptr;};
      void deleteCoverUrl() { this->coverUrl_ = nullptr;};
      inline string getCoverUrl() const { DARABONBA_PTR_GET_DEFAULT(coverUrl_, "") };
      inline InfiniteCanvas& setCoverUrl(string coverUrl) { DARABONBA_PTR_SET_VALUE(coverUrl_, coverUrl) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline InfiniteCanvas& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline InfiniteCanvas& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // thumbnail Field Functions 
      bool hasThumbnail() const { return this->thumbnail_ != nullptr;};
      void deleteThumbnail() { this->thumbnail_ = nullptr;};
      inline string getThumbnail() const { DARABONBA_PTR_GET_DEFAULT(thumbnail_, "") };
      inline InfiniteCanvas& setThumbnail(string thumbnail) { DARABONBA_PTR_SET_VALUE(thumbnail_, thumbnail) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline InfiniteCanvas& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    protected:
      // The ID of the infinite canvas.
      shared_ptr<string> canvasId_ {};
      // The cover URL.
      shared_ptr<string> coverUrl_ {};
      // The creation time in UTC.
      shared_ptr<string> gmtCreate_ {};
      // The modification time.
      shared_ptr<string> gmtModified_ {};
      // The thumbnail URL.
      shared_ptr<string> thumbnail_ {};
      // The title of the infinite canvas.
      shared_ptr<string> title_ {};
    };

    virtual bool empty() const override { return this->infiniteCanvas_ == nullptr
        && this->requestId_ == nullptr; };
    // infiniteCanvas Field Functions 
    bool hasInfiniteCanvas() const { return this->infiniteCanvas_ != nullptr;};
    void deleteInfiniteCanvas() { this->infiniteCanvas_ = nullptr;};
    inline const GetInfiniteCanvasResponseBody::InfiniteCanvas & getInfiniteCanvas() const { DARABONBA_PTR_GET_CONST(infiniteCanvas_, GetInfiniteCanvasResponseBody::InfiniteCanvas) };
    inline GetInfiniteCanvasResponseBody::InfiniteCanvas getInfiniteCanvas() { DARABONBA_PTR_GET(infiniteCanvas_, GetInfiniteCanvasResponseBody::InfiniteCanvas) };
    inline GetInfiniteCanvasResponseBody& setInfiniteCanvas(const GetInfiniteCanvasResponseBody::InfiniteCanvas & infiniteCanvas) { DARABONBA_PTR_SET_VALUE(infiniteCanvas_, infiniteCanvas) };
    inline GetInfiniteCanvasResponseBody& setInfiniteCanvas(GetInfiniteCanvasResponseBody::InfiniteCanvas && infiniteCanvas) { DARABONBA_PTR_SET_RVALUE(infiniteCanvas_, infiniteCanvas) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetInfiniteCanvasResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The infinite canvas details.
    shared_ptr<GetInfiniteCanvasResponseBody::InfiniteCanvas> infiniteCanvas_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yike20260707
#endif
