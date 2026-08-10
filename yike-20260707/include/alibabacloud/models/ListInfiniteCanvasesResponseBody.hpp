// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINFINITECANVASESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINFINITECANVASESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yike20260707
{
namespace Models
{
  class ListInfiniteCanvasesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInfiniteCanvasesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CanvasList, canvasList_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListInfiniteCanvasesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CanvasList, canvasList_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListInfiniteCanvasesResponseBody() = default ;
    ListInfiniteCanvasesResponseBody(const ListInfiniteCanvasesResponseBody &) = default ;
    ListInfiniteCanvasesResponseBody(ListInfiniteCanvasesResponseBody &&) = default ;
    ListInfiniteCanvasesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInfiniteCanvasesResponseBody() = default ;
    ListInfiniteCanvasesResponseBody& operator=(const ListInfiniteCanvasesResponseBody &) = default ;
    ListInfiniteCanvasesResponseBody& operator=(ListInfiniteCanvasesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CanvasList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CanvasList& obj) { 
        DARABONBA_PTR_TO_JSON(CanvasId, canvasId_);
        DARABONBA_PTR_TO_JSON(CoverUrl, coverUrl_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(Thumbnail, thumbnail_);
        DARABONBA_PTR_TO_JSON(Title, title_);
      };
      friend void from_json(const Darabonba::Json& j, CanvasList& obj) { 
        DARABONBA_PTR_FROM_JSON(CanvasId, canvasId_);
        DARABONBA_PTR_FROM_JSON(CoverUrl, coverUrl_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(Thumbnail, thumbnail_);
        DARABONBA_PTR_FROM_JSON(Title, title_);
      };
      CanvasList() = default ;
      CanvasList(const CanvasList &) = default ;
      CanvasList(CanvasList &&) = default ;
      CanvasList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CanvasList() = default ;
      CanvasList& operator=(const CanvasList &) = default ;
      CanvasList& operator=(CanvasList &&) = default ;
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
      inline CanvasList& setCanvasId(string canvasId) { DARABONBA_PTR_SET_VALUE(canvasId_, canvasId) };


      // coverUrl Field Functions 
      bool hasCoverUrl() const { return this->coverUrl_ != nullptr;};
      void deleteCoverUrl() { this->coverUrl_ = nullptr;};
      inline string getCoverUrl() const { DARABONBA_PTR_GET_DEFAULT(coverUrl_, "") };
      inline CanvasList& setCoverUrl(string coverUrl) { DARABONBA_PTR_SET_VALUE(coverUrl_, coverUrl) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline CanvasList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline CanvasList& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // thumbnail Field Functions 
      bool hasThumbnail() const { return this->thumbnail_ != nullptr;};
      void deleteThumbnail() { this->thumbnail_ = nullptr;};
      inline string getThumbnail() const { DARABONBA_PTR_GET_DEFAULT(thumbnail_, "") };
      inline CanvasList& setThumbnail(string thumbnail) { DARABONBA_PTR_SET_VALUE(thumbnail_, thumbnail) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline CanvasList& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    protected:
      // The ID of the infinite canvas.
      shared_ptr<string> canvasId_ {};
      // The cover URL.
      shared_ptr<string> coverUrl_ {};
      // The creation time, in milliseconds.
      shared_ptr<string> gmtCreate_ {};
      // The last modification time.
      shared_ptr<string> gmtModified_ {};
      // The thumbnail height, in px.
      shared_ptr<string> thumbnail_ {};
      // The title of the infinite canvas.
      shared_ptr<string> title_ {};
    };

    virtual bool empty() const override { return this->canvasList_ == nullptr
        && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // canvasList Field Functions 
    bool hasCanvasList() const { return this->canvasList_ != nullptr;};
    void deleteCanvasList() { this->canvasList_ = nullptr;};
    inline const vector<ListInfiniteCanvasesResponseBody::CanvasList> & getCanvasList() const { DARABONBA_PTR_GET_CONST(canvasList_, vector<ListInfiniteCanvasesResponseBody::CanvasList>) };
    inline vector<ListInfiniteCanvasesResponseBody::CanvasList> getCanvasList() { DARABONBA_PTR_GET(canvasList_, vector<ListInfiniteCanvasesResponseBody::CanvasList>) };
    inline ListInfiniteCanvasesResponseBody& setCanvasList(const vector<ListInfiniteCanvasesResponseBody::CanvasList> & canvasList) { DARABONBA_PTR_SET_VALUE(canvasList_, canvasList) };
    inline ListInfiniteCanvasesResponseBody& setCanvasList(vector<ListInfiniteCanvasesResponseBody::CanvasList> && canvasList) { DARABONBA_PTR_SET_RVALUE(canvasList_, canvasList) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline ListInfiniteCanvasesResponseBody& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListInfiniteCanvasesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListInfiniteCanvasesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListInfiniteCanvasesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of infinite canvases.
    shared_ptr<vector<ListInfiniteCanvasesResponseBody::CanvasList>> canvasList_ {};
    // The current page number. Default value: 1.
    shared_ptr<int32_t> pageNo_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of infinite canvases.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yike20260707
#endif
