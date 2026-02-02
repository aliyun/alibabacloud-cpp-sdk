// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPRIVATETTSVOICESCUSTOMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPRIVATETTSVOICESCUSTOMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LingMou20250527
{
namespace Models
{
  class ListPrivateTTSVoicesCustomResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPrivateTTSVoicesCustomResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListPrivateTTSVoicesCustomResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    ListPrivateTTSVoicesCustomResponseBody() = default ;
    ListPrivateTTSVoicesCustomResponseBody(const ListPrivateTTSVoicesCustomResponseBody &) = default ;
    ListPrivateTTSVoicesCustomResponseBody(ListPrivateTTSVoicesCustomResponseBody &&) = default ;
    ListPrivateTTSVoicesCustomResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPrivateTTSVoicesCustomResponseBody() = default ;
    ListPrivateTTSVoicesCustomResponseBody& operator=(const ListPrivateTTSVoicesCustomResponseBody &) = default ;
    ListPrivateTTSVoicesCustomResponseBody& operator=(ListPrivateTTSVoicesCustomResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(data, data_);
        DARABONBA_PTR_TO_JSON(page, page_);
        DARABONBA_PTR_TO_JSON(pages, pages_);
        DARABONBA_PTR_TO_JSON(size, size_);
        DARABONBA_PTR_TO_JSON(total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(data, data_);
        DARABONBA_PTR_FROM_JSON(page, page_);
        DARABONBA_PTR_FROM_JSON(pages, pages_);
        DARABONBA_PTR_FROM_JSON(size, size_);
        DARABONBA_PTR_FROM_JSON(total, total_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DataItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataItem& obj) { 
          DARABONBA_PTR_TO_JSON(audioURL, audioURL_);
          DARABONBA_PTR_TO_JSON(censorStatus, censorStatus_);
          DARABONBA_PTR_TO_JSON(common, common_);
          DARABONBA_PTR_TO_JSON(createTime, createTime_);
          DARABONBA_PTR_TO_JSON(description, description_);
          DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
          DARABONBA_PTR_TO_JSON(errorDetail, errorDetail_);
          DARABONBA_PTR_TO_JSON(gender, gender_);
          DARABONBA_PTR_TO_JSON(id, id_);
          DARABONBA_PTR_TO_JSON(language, language_);
          DARABONBA_PTR_TO_JSON(modifiedTime, modifiedTime_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(remainSeconds, remainSeconds_);
          DARABONBA_PTR_TO_JSON(status, status_);
          DARABONBA_PTR_TO_JSON(text, text_);
          DARABONBA_PTR_TO_JSON(voiceKey, voiceKey_);
        };
        friend void from_json(const Darabonba::Json& j, DataItem& obj) { 
          DARABONBA_PTR_FROM_JSON(audioURL, audioURL_);
          DARABONBA_PTR_FROM_JSON(censorStatus, censorStatus_);
          DARABONBA_PTR_FROM_JSON(common, common_);
          DARABONBA_PTR_FROM_JSON(createTime, createTime_);
          DARABONBA_PTR_FROM_JSON(description, description_);
          DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
          DARABONBA_PTR_FROM_JSON(errorDetail, errorDetail_);
          DARABONBA_PTR_FROM_JSON(gender, gender_);
          DARABONBA_PTR_FROM_JSON(id, id_);
          DARABONBA_PTR_FROM_JSON(language, language_);
          DARABONBA_PTR_FROM_JSON(modifiedTime, modifiedTime_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(remainSeconds, remainSeconds_);
          DARABONBA_PTR_FROM_JSON(status, status_);
          DARABONBA_PTR_FROM_JSON(text, text_);
          DARABONBA_PTR_FROM_JSON(voiceKey, voiceKey_);
        };
        DataItem() = default ;
        DataItem(const DataItem &) = default ;
        DataItem(DataItem &&) = default ;
        DataItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataItem() = default ;
        DataItem& operator=(const DataItem &) = default ;
        DataItem& operator=(DataItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->audioURL_ == nullptr
        && this->censorStatus_ == nullptr && this->common_ == nullptr && this->createTime_ == nullptr && this->description_ == nullptr && this->errorCode_ == nullptr
        && this->errorDetail_ == nullptr && this->gender_ == nullptr && this->id_ == nullptr && this->language_ == nullptr && this->modifiedTime_ == nullptr
        && this->name_ == nullptr && this->remainSeconds_ == nullptr && this->status_ == nullptr && this->text_ == nullptr && this->voiceKey_ == nullptr; };
        // audioURL Field Functions 
        bool hasAudioURL() const { return this->audioURL_ != nullptr;};
        void deleteAudioURL() { this->audioURL_ = nullptr;};
        inline string getAudioURL() const { DARABONBA_PTR_GET_DEFAULT(audioURL_, "") };
        inline DataItem& setAudioURL(string audioURL) { DARABONBA_PTR_SET_VALUE(audioURL_, audioURL) };


        // censorStatus Field Functions 
        bool hasCensorStatus() const { return this->censorStatus_ != nullptr;};
        void deleteCensorStatus() { this->censorStatus_ = nullptr;};
        inline string getCensorStatus() const { DARABONBA_PTR_GET_DEFAULT(censorStatus_, "") };
        inline DataItem& setCensorStatus(string censorStatus) { DARABONBA_PTR_SET_VALUE(censorStatus_, censorStatus) };


        // common Field Functions 
        bool hasCommon() const { return this->common_ != nullptr;};
        void deleteCommon() { this->common_ = nullptr;};
        inline bool getCommon() const { DARABONBA_PTR_GET_DEFAULT(common_, false) };
        inline DataItem& setCommon(bool common) { DARABONBA_PTR_SET_VALUE(common_, common) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline DataItem& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline DataItem& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // errorCode Field Functions 
        bool hasErrorCode() const { return this->errorCode_ != nullptr;};
        void deleteErrorCode() { this->errorCode_ = nullptr;};
        inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
        inline DataItem& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


        // errorDetail Field Functions 
        bool hasErrorDetail() const { return this->errorDetail_ != nullptr;};
        void deleteErrorDetail() { this->errorDetail_ = nullptr;};
        inline string getErrorDetail() const { DARABONBA_PTR_GET_DEFAULT(errorDetail_, "") };
        inline DataItem& setErrorDetail(string errorDetail) { DARABONBA_PTR_SET_VALUE(errorDetail_, errorDetail) };


        // gender Field Functions 
        bool hasGender() const { return this->gender_ != nullptr;};
        void deleteGender() { this->gender_ = nullptr;};
        inline string getGender() const { DARABONBA_PTR_GET_DEFAULT(gender_, "") };
        inline DataItem& setGender(string gender) { DARABONBA_PTR_SET_VALUE(gender_, gender) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline DataItem& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // language Field Functions 
        bool hasLanguage() const { return this->language_ != nullptr;};
        void deleteLanguage() { this->language_ = nullptr;};
        inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
        inline DataItem& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


        // modifiedTime Field Functions 
        bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
        void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
        inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
        inline DataItem& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline DataItem& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // remainSeconds Field Functions 
        bool hasRemainSeconds() const { return this->remainSeconds_ != nullptr;};
        void deleteRemainSeconds() { this->remainSeconds_ = nullptr;};
        inline int64_t getRemainSeconds() const { DARABONBA_PTR_GET_DEFAULT(remainSeconds_, 0L) };
        inline DataItem& setRemainSeconds(int64_t remainSeconds) { DARABONBA_PTR_SET_VALUE(remainSeconds_, remainSeconds) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline DataItem& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // text Field Functions 
        bool hasText() const { return this->text_ != nullptr;};
        void deleteText() { this->text_ = nullptr;};
        inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
        inline DataItem& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


        // voiceKey Field Functions 
        bool hasVoiceKey() const { return this->voiceKey_ != nullptr;};
        void deleteVoiceKey() { this->voiceKey_ = nullptr;};
        inline string getVoiceKey() const { DARABONBA_PTR_GET_DEFAULT(voiceKey_, "") };
        inline DataItem& setVoiceKey(string voiceKey) { DARABONBA_PTR_SET_VALUE(voiceKey_, voiceKey) };


      protected:
        shared_ptr<string> audioURL_ {};
        shared_ptr<string> censorStatus_ {};
        shared_ptr<bool> common_ {};
        shared_ptr<string> createTime_ {};
        shared_ptr<string> description_ {};
        // 错误码。
        shared_ptr<string> errorCode_ {};
        shared_ptr<string> errorDetail_ {};
        shared_ptr<string> gender_ {};
        shared_ptr<string> id_ {};
        shared_ptr<string> language_ {};
        shared_ptr<string> modifiedTime_ {};
        shared_ptr<string> name_ {};
        shared_ptr<int64_t> remainSeconds_ {};
        shared_ptr<string> status_ {};
        shared_ptr<string> text_ {};
        shared_ptr<string> voiceKey_ {};
      };

      virtual bool empty() const override { return this->data_ == nullptr
        && this->page_ == nullptr && this->pages_ == nullptr && this->size_ == nullptr && this->total_ == nullptr; };
      // data Field Functions 
      bool hasData() const { return this->data_ != nullptr;};
      void deleteData() { this->data_ = nullptr;};
      inline const vector<Data::DataItem> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<Data::DataItem>) };
      inline vector<Data::DataItem> getData() { DARABONBA_PTR_GET(data_, vector<Data::DataItem>) };
      inline Data& setData(const vector<Data::DataItem> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
      inline Data& setData(vector<Data::DataItem> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


      // page Field Functions 
      bool hasPage() const { return this->page_ != nullptr;};
      void deletePage() { this->page_ = nullptr;};
      inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
      inline Data& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


      // pages Field Functions 
      bool hasPages() const { return this->pages_ != nullptr;};
      void deletePages() { this->pages_ = nullptr;};
      inline int32_t getPages() const { DARABONBA_PTR_GET_DEFAULT(pages_, 0) };
      inline Data& setPages(int32_t pages) { DARABONBA_PTR_SET_VALUE(pages_, pages) };


      // size Field Functions 
      bool hasSize() const { return this->size_ != nullptr;};
      void deleteSize() { this->size_ = nullptr;};
      inline int32_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
      inline Data& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
      inline Data& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      shared_ptr<vector<Data::DataItem>> data_ {};
      shared_ptr<int32_t> page_ {};
      shared_ptr<int32_t> pages_ {};
      shared_ptr<int32_t> size_ {};
      shared_ptr<int64_t> total_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->maxResults_ == nullptr && this->message_ == nullptr && this->nextToken_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListPrivateTTSVoicesCustomResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListPrivateTTSVoicesCustomResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListPrivateTTSVoicesCustomResponseBody::Data) };
    inline ListPrivateTTSVoicesCustomResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListPrivateTTSVoicesCustomResponseBody::Data) };
    inline ListPrivateTTSVoicesCustomResponseBody& setData(const ListPrivateTTSVoicesCustomResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListPrivateTTSVoicesCustomResponseBody& setData(ListPrivateTTSVoicesCustomResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListPrivateTTSVoicesCustomResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListPrivateTTSVoicesCustomResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListPrivateTTSVoicesCustomResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListPrivateTTSVoicesCustomResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPrivateTTSVoicesCustomResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListPrivateTTSVoicesCustomResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<ListPrivateTTSVoicesCustomResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LingMou20250527
#endif
