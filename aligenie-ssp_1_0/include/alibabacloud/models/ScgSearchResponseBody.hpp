// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCGSEARCHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SCGSEARCHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class ScgSearchResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScgSearchResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ScgSearchResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    ScgSearchResponseBody() = default ;
    ScgSearchResponseBody(const ScgSearchResponseBody &) = default ;
    ScgSearchResponseBody(ScgSearchResponseBody &&) = default ;
    ScgSearchResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScgSearchResponseBody() = default ;
    ScgSearchResponseBody& operator=(const ScgSearchResponseBody &) = default ;
    ScgSearchResponseBody& operator=(ScgSearchResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(Album, album_);
        DARABONBA_PTR_TO_JSON(AlbumRawId, albumRawId_);
        DARABONBA_PTR_TO_JSON(AlbumType, albumType_);
        DARABONBA_PTR_TO_JSON(Alias, alias_);
        DARABONBA_PTR_TO_JSON(AuthorIds, authorIds_);
        DARABONBA_PTR_TO_JSON(AuthorNames, authorNames_);
        DARABONBA_PTR_TO_JSON(Category, category_);
        DARABONBA_PTR_TO_JSON(ContentType, contentType_);
        DARABONBA_PTR_TO_JSON(Cover, cover_);
        DARABONBA_PTR_TO_JSON(IsAudition, isAudition_);
        DARABONBA_PTR_TO_JSON(IsCharge, isCharge_);
        DARABONBA_PTR_TO_JSON(NeedCharge, needCharge_);
        DARABONBA_PTR_TO_JSON(RawId, rawId_);
        DARABONBA_PTR_TO_JSON(Singers, singers_);
        DARABONBA_PTR_TO_JSON(Source, source_);
        DARABONBA_PTR_TO_JSON(SupportAudition, supportAudition_);
        DARABONBA_PTR_TO_JSON(Title, title_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(Album, album_);
        DARABONBA_PTR_FROM_JSON(AlbumRawId, albumRawId_);
        DARABONBA_PTR_FROM_JSON(AlbumType, albumType_);
        DARABONBA_PTR_FROM_JSON(Alias, alias_);
        DARABONBA_PTR_FROM_JSON(AuthorIds, authorIds_);
        DARABONBA_PTR_FROM_JSON(AuthorNames, authorNames_);
        DARABONBA_PTR_FROM_JSON(Category, category_);
        DARABONBA_PTR_FROM_JSON(ContentType, contentType_);
        DARABONBA_PTR_FROM_JSON(Cover, cover_);
        DARABONBA_PTR_FROM_JSON(IsAudition, isAudition_);
        DARABONBA_PTR_FROM_JSON(IsCharge, isCharge_);
        DARABONBA_PTR_FROM_JSON(NeedCharge, needCharge_);
        DARABONBA_PTR_FROM_JSON(RawId, rawId_);
        DARABONBA_PTR_FROM_JSON(Singers, singers_);
        DARABONBA_PTR_FROM_JSON(Source, source_);
        DARABONBA_PTR_FROM_JSON(SupportAudition, supportAudition_);
        DARABONBA_PTR_FROM_JSON(Title, title_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Cover : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Cover& obj) { 
          DARABONBA_PTR_TO_JSON(Img, img_);
          DARABONBA_PTR_TO_JSON(Large, large_);
          DARABONBA_PTR_TO_JSON(Medium, medium_);
          DARABONBA_PTR_TO_JSON(Small, small_);
          DARABONBA_PTR_TO_JSON(canResize, canResize_);
        };
        friend void from_json(const Darabonba::Json& j, Cover& obj) { 
          DARABONBA_PTR_FROM_JSON(Img, img_);
          DARABONBA_PTR_FROM_JSON(Large, large_);
          DARABONBA_PTR_FROM_JSON(Medium, medium_);
          DARABONBA_PTR_FROM_JSON(Small, small_);
          DARABONBA_PTR_FROM_JSON(canResize, canResize_);
        };
        Cover() = default ;
        Cover(const Cover &) = default ;
        Cover(Cover &&) = default ;
        Cover(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Cover() = default ;
        Cover& operator=(const Cover &) = default ;
        Cover& operator=(Cover &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->img_ == nullptr
        && this->large_ == nullptr && this->medium_ == nullptr && this->small_ == nullptr && this->canResize_ == nullptr; };
        // img Field Functions 
        bool hasImg() const { return this->img_ != nullptr;};
        void deleteImg() { this->img_ = nullptr;};
        inline string getImg() const { DARABONBA_PTR_GET_DEFAULT(img_, "") };
        inline Cover& setImg(string img) { DARABONBA_PTR_SET_VALUE(img_, img) };


        // large Field Functions 
        bool hasLarge() const { return this->large_ != nullptr;};
        void deleteLarge() { this->large_ = nullptr;};
        inline string getLarge() const { DARABONBA_PTR_GET_DEFAULT(large_, "") };
        inline Cover& setLarge(string large) { DARABONBA_PTR_SET_VALUE(large_, large) };


        // medium Field Functions 
        bool hasMedium() const { return this->medium_ != nullptr;};
        void deleteMedium() { this->medium_ = nullptr;};
        inline string getMedium() const { DARABONBA_PTR_GET_DEFAULT(medium_, "") };
        inline Cover& setMedium(string medium) { DARABONBA_PTR_SET_VALUE(medium_, medium) };


        // small Field Functions 
        bool hasSmall() const { return this->small_ != nullptr;};
        void deleteSmall() { this->small_ = nullptr;};
        inline string getSmall() const { DARABONBA_PTR_GET_DEFAULT(small_, "") };
        inline Cover& setSmall(string small) { DARABONBA_PTR_SET_VALUE(small_, small) };


        // canResize Field Functions 
        bool hasCanResize() const { return this->canResize_ != nullptr;};
        void deleteCanResize() { this->canResize_ = nullptr;};
        inline bool getCanResize() const { DARABONBA_PTR_GET_DEFAULT(canResize_, false) };
        inline Cover& setCanResize(bool canResize) { DARABONBA_PTR_SET_VALUE(canResize_, canResize) };


      protected:
        // Thumbnail image (Img, Large, Medium, and Small may not appear simultaneously; only one of them may be present)
        shared_ptr<string> img_ {};
        // Large graph
        shared_ptr<string> large_ {};
        // Medium image
        shared_ptr<string> medium_ {};
        // Small image
        shared_ptr<string> small_ {};
        // Whether scaling is supported
        shared_ptr<bool> canResize_ {};
      };

      virtual bool empty() const override { return this->album_ == nullptr
        && this->albumRawId_ == nullptr && this->albumType_ == nullptr && this->alias_ == nullptr && this->authorIds_ == nullptr && this->authorNames_ == nullptr
        && this->category_ == nullptr && this->contentType_ == nullptr && this->cover_ == nullptr && this->isAudition_ == nullptr && this->isCharge_ == nullptr
        && this->needCharge_ == nullptr && this->rawId_ == nullptr && this->singers_ == nullptr && this->source_ == nullptr && this->supportAudition_ == nullptr
        && this->title_ == nullptr && this->type_ == nullptr; };
      // album Field Functions 
      bool hasAlbum() const { return this->album_ != nullptr;};
      void deleteAlbum() { this->album_ = nullptr;};
      inline bool getAlbum() const { DARABONBA_PTR_GET_DEFAULT(album_, false) };
      inline Result& setAlbum(bool album) { DARABONBA_PTR_SET_VALUE(album_, album) };


      // albumRawId Field Functions 
      bool hasAlbumRawId() const { return this->albumRawId_ != nullptr;};
      void deleteAlbumRawId() { this->albumRawId_ = nullptr;};
      inline string getAlbumRawId() const { DARABONBA_PTR_GET_DEFAULT(albumRawId_, "") };
      inline Result& setAlbumRawId(string albumRawId) { DARABONBA_PTR_SET_VALUE(albumRawId_, albumRawId) };


      // albumType Field Functions 
      bool hasAlbumType() const { return this->albumType_ != nullptr;};
      void deleteAlbumType() { this->albumType_ = nullptr;};
      inline int32_t getAlbumType() const { DARABONBA_PTR_GET_DEFAULT(albumType_, 0) };
      inline Result& setAlbumType(int32_t albumType) { DARABONBA_PTR_SET_VALUE(albumType_, albumType) };


      // alias Field Functions 
      bool hasAlias() const { return this->alias_ != nullptr;};
      void deleteAlias() { this->alias_ = nullptr;};
      inline const vector<string> & getAlias() const { DARABONBA_PTR_GET_CONST(alias_, vector<string>) };
      inline vector<string> getAlias() { DARABONBA_PTR_GET(alias_, vector<string>) };
      inline Result& setAlias(const vector<string> & alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };
      inline Result& setAlias(vector<string> && alias) { DARABONBA_PTR_SET_RVALUE(alias_, alias) };


      // authorIds Field Functions 
      bool hasAuthorIds() const { return this->authorIds_ != nullptr;};
      void deleteAuthorIds() { this->authorIds_ = nullptr;};
      inline const vector<int64_t> & getAuthorIds() const { DARABONBA_PTR_GET_CONST(authorIds_, vector<int64_t>) };
      inline vector<int64_t> getAuthorIds() { DARABONBA_PTR_GET(authorIds_, vector<int64_t>) };
      inline Result& setAuthorIds(const vector<int64_t> & authorIds) { DARABONBA_PTR_SET_VALUE(authorIds_, authorIds) };
      inline Result& setAuthorIds(vector<int64_t> && authorIds) { DARABONBA_PTR_SET_RVALUE(authorIds_, authorIds) };


      // authorNames Field Functions 
      bool hasAuthorNames() const { return this->authorNames_ != nullptr;};
      void deleteAuthorNames() { this->authorNames_ = nullptr;};
      inline const vector<string> & getAuthorNames() const { DARABONBA_PTR_GET_CONST(authorNames_, vector<string>) };
      inline vector<string> getAuthorNames() { DARABONBA_PTR_GET(authorNames_, vector<string>) };
      inline Result& setAuthorNames(const vector<string> & authorNames) { DARABONBA_PTR_SET_VALUE(authorNames_, authorNames) };
      inline Result& setAuthorNames(vector<string> && authorNames) { DARABONBA_PTR_SET_RVALUE(authorNames_, authorNames) };


      // category Field Functions 
      bool hasCategory() const { return this->category_ != nullptr;};
      void deleteCategory() { this->category_ = nullptr;};
      inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
      inline Result& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


      // contentType Field Functions 
      bool hasContentType() const { return this->contentType_ != nullptr;};
      void deleteContentType() { this->contentType_ = nullptr;};
      inline string getContentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
      inline Result& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


      // cover Field Functions 
      bool hasCover() const { return this->cover_ != nullptr;};
      void deleteCover() { this->cover_ = nullptr;};
      inline const Result::Cover & getCover() const { DARABONBA_PTR_GET_CONST(cover_, Result::Cover) };
      inline Result::Cover getCover() { DARABONBA_PTR_GET(cover_, Result::Cover) };
      inline Result& setCover(const Result::Cover & cover) { DARABONBA_PTR_SET_VALUE(cover_, cover) };
      inline Result& setCover(Result::Cover && cover) { DARABONBA_PTR_SET_RVALUE(cover_, cover) };


      // isAudition Field Functions 
      bool hasIsAudition() const { return this->isAudition_ != nullptr;};
      void deleteIsAudition() { this->isAudition_ = nullptr;};
      inline bool getIsAudition() const { DARABONBA_PTR_GET_DEFAULT(isAudition_, false) };
      inline Result& setIsAudition(bool isAudition) { DARABONBA_PTR_SET_VALUE(isAudition_, isAudition) };


      // isCharge Field Functions 
      bool hasIsCharge() const { return this->isCharge_ != nullptr;};
      void deleteIsCharge() { this->isCharge_ = nullptr;};
      inline string getIsCharge() const { DARABONBA_PTR_GET_DEFAULT(isCharge_, "") };
      inline Result& setIsCharge(string isCharge) { DARABONBA_PTR_SET_VALUE(isCharge_, isCharge) };


      // needCharge Field Functions 
      bool hasNeedCharge() const { return this->needCharge_ != nullptr;};
      void deleteNeedCharge() { this->needCharge_ = nullptr;};
      inline bool getNeedCharge() const { DARABONBA_PTR_GET_DEFAULT(needCharge_, false) };
      inline Result& setNeedCharge(bool needCharge) { DARABONBA_PTR_SET_VALUE(needCharge_, needCharge) };


      // rawId Field Functions 
      bool hasRawId() const { return this->rawId_ != nullptr;};
      void deleteRawId() { this->rawId_ = nullptr;};
      inline string getRawId() const { DARABONBA_PTR_GET_DEFAULT(rawId_, "") };
      inline Result& setRawId(string rawId) { DARABONBA_PTR_SET_VALUE(rawId_, rawId) };


      // singers Field Functions 
      bool hasSingers() const { return this->singers_ != nullptr;};
      void deleteSingers() { this->singers_ = nullptr;};
      inline string getSingers() const { DARABONBA_PTR_GET_DEFAULT(singers_, "") };
      inline Result& setSingers(string singers) { DARABONBA_PTR_SET_VALUE(singers_, singers) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline Result& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


      // supportAudition Field Functions 
      bool hasSupportAudition() const { return this->supportAudition_ != nullptr;};
      void deleteSupportAudition() { this->supportAudition_ = nullptr;};
      inline bool getSupportAudition() const { DARABONBA_PTR_GET_DEFAULT(supportAudition_, false) };
      inline Result& setSupportAudition(bool supportAudition) { DARABONBA_PTR_SET_VALUE(supportAudition_, supportAudition) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline Result& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Result& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // Whether it is an album
      shared_ptr<bool> album_ {};
      // Album ID
      shared_ptr<string> albumRawId_ {};
      // Album type
      shared_ptr<int32_t> albumType_ {};
      // Alias
      shared_ptr<vector<string>> alias_ {};
      // Author ID
      shared_ptr<vector<int64_t>> authorIds_ {};
      // Author names
      shared_ptr<vector<string>> authorNames_ {};
      // Category
      shared_ptr<string> category_ {};
      // Content type
      shared_ptr<string> contentType_ {};
      // Thumbnail
      shared_ptr<Result::Cover> cover_ {};
      // Whether audition is available
      shared_ptr<bool> isAudition_ {};
      // Is charged
      shared_ptr<string> isCharge_ {};
      // Whether charging is required
      shared_ptr<bool> needCharge_ {};
      // Third-party content ID
      shared_ptr<string> rawId_ {};
      // Singer name
      shared_ptr<string> singers_ {};
      // Content source
      shared_ptr<string> source_ {};
      // Whether audition is supported
      shared_ptr<bool> supportAudition_ {};
      // Content title
      shared_ptr<string> title_ {};
      // Content type
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ScgSearchResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ScgSearchResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline ScgSearchResponseBody& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ScgSearchResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ScgSearchResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ScgSearchResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<ScgSearchResponseBody::Result>) };
    inline vector<ScgSearchResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<ScgSearchResponseBody::Result>) };
    inline ScgSearchResponseBody& setResult(const vector<ScgSearchResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ScgSearchResponseBody& setResult(vector<ScgSearchResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // Status code
    shared_ptr<int32_t> code_ {};
    // Response message
    shared_ptr<string> message_ {};
    // Page number
    shared_ptr<int32_t> pageNum_ {};
    // Number of records per page
    shared_ptr<int32_t> pageSize_ {};
    // Request ID
    shared_ptr<string> requestId_ {};
    // Detailed returned information.
    shared_ptr<vector<ScgSearchResponseBody::Result>> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
