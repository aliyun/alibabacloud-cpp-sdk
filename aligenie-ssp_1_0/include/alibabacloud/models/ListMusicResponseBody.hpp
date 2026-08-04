// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMUSICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMUSICRESPONSEBODY_HPP_
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
  class ListMusicResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMusicResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ListMusicResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    ListMusicResponseBody() = default ;
    ListMusicResponseBody(const ListMusicResponseBody &) = default ;
    ListMusicResponseBody(ListMusicResponseBody &&) = default ;
    ListMusicResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMusicResponseBody() = default ;
    ListMusicResponseBody& operator=(const ListMusicResponseBody &) = default ;
    ListMusicResponseBody& operator=(ListMusicResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(Model, model_);
        DARABONBA_PTR_TO_JSON(PageCount, pageCount_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(Model, model_);
        DARABONBA_PTR_FROM_JSON(PageCount, pageCount_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
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
      class Model : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Model& obj) { 
          DARABONBA_PTR_TO_JSON(MusicId, musicId_);
          DARABONBA_PTR_TO_JSON(MusicName, musicName_);
          DARABONBA_PTR_TO_JSON(MusicType, musicType_);
          DARABONBA_PTR_TO_JSON(MusicTypeName, musicTypeName_);
          DARABONBA_PTR_TO_JSON(MusicUrl, musicUrl_);
        };
        friend void from_json(const Darabonba::Json& j, Model& obj) { 
          DARABONBA_PTR_FROM_JSON(MusicId, musicId_);
          DARABONBA_PTR_FROM_JSON(MusicName, musicName_);
          DARABONBA_PTR_FROM_JSON(MusicType, musicType_);
          DARABONBA_PTR_FROM_JSON(MusicTypeName, musicTypeName_);
          DARABONBA_PTR_FROM_JSON(MusicUrl, musicUrl_);
        };
        Model() = default ;
        Model(const Model &) = default ;
        Model(Model &&) = default ;
        Model(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Model() = default ;
        Model& operator=(const Model &) = default ;
        Model& operator=(Model &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->musicId_ == nullptr
        && this->musicName_ == nullptr && this->musicType_ == nullptr && this->musicTypeName_ == nullptr && this->musicUrl_ == nullptr; };
        // musicId Field Functions 
        bool hasMusicId() const { return this->musicId_ != nullptr;};
        void deleteMusicId() { this->musicId_ = nullptr;};
        inline int64_t getMusicId() const { DARABONBA_PTR_GET_DEFAULT(musicId_, 0L) };
        inline Model& setMusicId(int64_t musicId) { DARABONBA_PTR_SET_VALUE(musicId_, musicId) };


        // musicName Field Functions 
        bool hasMusicName() const { return this->musicName_ != nullptr;};
        void deleteMusicName() { this->musicName_ = nullptr;};
        inline string getMusicName() const { DARABONBA_PTR_GET_DEFAULT(musicName_, "") };
        inline Model& setMusicName(string musicName) { DARABONBA_PTR_SET_VALUE(musicName_, musicName) };


        // musicType Field Functions 
        bool hasMusicType() const { return this->musicType_ != nullptr;};
        void deleteMusicType() { this->musicType_ = nullptr;};
        inline int64_t getMusicType() const { DARABONBA_PTR_GET_DEFAULT(musicType_, 0L) };
        inline Model& setMusicType(int64_t musicType) { DARABONBA_PTR_SET_VALUE(musicType_, musicType) };


        // musicTypeName Field Functions 
        bool hasMusicTypeName() const { return this->musicTypeName_ != nullptr;};
        void deleteMusicTypeName() { this->musicTypeName_ = nullptr;};
        inline string getMusicTypeName() const { DARABONBA_PTR_GET_DEFAULT(musicTypeName_, "") };
        inline Model& setMusicTypeName(string musicTypeName) { DARABONBA_PTR_SET_VALUE(musicTypeName_, musicTypeName) };


        // musicUrl Field Functions 
        bool hasMusicUrl() const { return this->musicUrl_ != nullptr;};
        void deleteMusicUrl() { this->musicUrl_ = nullptr;};
        inline string getMusicUrl() const { DARABONBA_PTR_GET_DEFAULT(musicUrl_, "") };
        inline Model& setMusicUrl(string musicUrl) { DARABONBA_PTR_SET_VALUE(musicUrl_, musicUrl) };


      protected:
        // Ringtone ID
        shared_ptr<int64_t> musicId_ {};
        // Ringtone name
        shared_ptr<string> musicName_ {};
        // Ringtone category ID
        shared_ptr<int64_t> musicType_ {};
        // Ringtone category name
        shared_ptr<string> musicTypeName_ {};
        // Ringtone URL
        shared_ptr<string> musicUrl_ {};
      };

      virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->model_ == nullptr && this->pageCount_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline Result& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // model Field Functions 
      bool hasModel() const { return this->model_ != nullptr;};
      void deleteModel() { this->model_ = nullptr;};
      inline const vector<Result::Model> & getModel() const { DARABONBA_PTR_GET_CONST(model_, vector<Result::Model>) };
      inline vector<Result::Model> getModel() { DARABONBA_PTR_GET(model_, vector<Result::Model>) };
      inline Result& setModel(const vector<Result::Model> & model) { DARABONBA_PTR_SET_VALUE(model_, model) };
      inline Result& setModel(vector<Result::Model> && model) { DARABONBA_PTR_SET_RVALUE(model_, model) };


      // pageCount Field Functions 
      bool hasPageCount() const { return this->pageCount_ != nullptr;};
      void deletePageCount() { this->pageCount_ = nullptr;};
      inline int32_t getPageCount() const { DARABONBA_PTR_GET_DEFAULT(pageCount_, 0) };
      inline Result& setPageCount(int32_t pageCount) { DARABONBA_PTR_SET_VALUE(pageCount_, pageCount) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Result& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Result& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // Current page
      shared_ptr<int32_t> currentPage_ {};
      // List of ringtones
      shared_ptr<vector<Result::Model>> model_ {};
      // Total number of pages
      shared_ptr<int32_t> pageCount_ {};
      // Number of entries per page: maximum value is 100; values exceeding 100 are treated as 100
      shared_ptr<int32_t> pageSize_ {};
      // Total number of entries
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListMusicResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListMusicResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMusicResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const ListMusicResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, ListMusicResponseBody::Result) };
    inline ListMusicResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, ListMusicResponseBody::Result) };
    inline ListMusicResponseBody& setResult(const ListMusicResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListMusicResponseBody& setResult(ListMusicResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // Status code returned by the alarm service
    shared_ptr<int32_t> code_ {};
    // error message
    shared_ptr<string> message_ {};
    // Request ID
    shared_ptr<string> requestId_ {};
    // collection of ringtone query results
    shared_ptr<ListMusicResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
