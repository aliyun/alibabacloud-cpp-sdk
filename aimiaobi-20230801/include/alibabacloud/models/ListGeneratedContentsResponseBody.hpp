// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGENERATEDCONTENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTGENERATEDCONTENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class ListGeneratedContentsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGeneratedContentsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Current, current_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListGeneratedContentsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Current, current_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    ListGeneratedContentsResponseBody() = default ;
    ListGeneratedContentsResponseBody(const ListGeneratedContentsResponseBody &) = default ;
    ListGeneratedContentsResponseBody(ListGeneratedContentsResponseBody &&) = default ;
    ListGeneratedContentsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGeneratedContentsResponseBody() = default ;
    ListGeneratedContentsResponseBody& operator=(const ListGeneratedContentsResponseBody &) = default ;
    ListGeneratedContentsResponseBody& operator=(ListGeneratedContentsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Content, content_);
        DARABONBA_PTR_TO_JSON(ContentDomain, contentDomain_);
        DARABONBA_PTR_TO_JSON(ContentText, contentText_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(CreateUser, createUser_);
        DARABONBA_PTR_TO_JSON(DeviceId, deviceId_);
        DARABONBA_PTR_TO_JSON(FileAttr, fileAttr_);
        DARABONBA_PTR_TO_JSON(FileKey, fileKey_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(KeywordList, keywordList_);
        DARABONBA_PTR_TO_JSON(Keywords, keywords_);
        DARABONBA_PTR_TO_JSON(Prompt, prompt_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(Title, title_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_TO_JSON(UpdateUser, updateUser_);
        DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Content, content_);
        DARABONBA_PTR_FROM_JSON(ContentDomain, contentDomain_);
        DARABONBA_PTR_FROM_JSON(ContentText, contentText_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(CreateUser, createUser_);
        DARABONBA_PTR_FROM_JSON(DeviceId, deviceId_);
        DARABONBA_PTR_FROM_JSON(FileAttr, fileAttr_);
        DARABONBA_PTR_FROM_JSON(FileKey, fileKey_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(KeywordList, keywordList_);
        DARABONBA_PTR_FROM_JSON(Keywords, keywords_);
        DARABONBA_PTR_FROM_JSON(Prompt, prompt_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(Title, title_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_FROM_JSON(UpdateUser, updateUser_);
        DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
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
      class FileAttr : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FileAttr& obj) { 
          DARABONBA_PTR_TO_JSON(FileName, fileName_);
          DARABONBA_PTR_TO_JSON(Height, height_);
          DARABONBA_PTR_TO_JSON(TmpUrl, tmpUrl_);
          DARABONBA_PTR_TO_JSON(Width, width_);
        };
        friend void from_json(const Darabonba::Json& j, FileAttr& obj) { 
          DARABONBA_PTR_FROM_JSON(FileName, fileName_);
          DARABONBA_PTR_FROM_JSON(Height, height_);
          DARABONBA_PTR_FROM_JSON(TmpUrl, tmpUrl_);
          DARABONBA_PTR_FROM_JSON(Width, width_);
        };
        FileAttr() = default ;
        FileAttr(const FileAttr &) = default ;
        FileAttr(FileAttr &&) = default ;
        FileAttr(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FileAttr() = default ;
        FileAttr& operator=(const FileAttr &) = default ;
        FileAttr& operator=(FileAttr &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->fileName_ == nullptr
        && this->height_ == nullptr && this->tmpUrl_ == nullptr && this->width_ == nullptr; };
        // fileName Field Functions 
        bool hasFileName() const { return this->fileName_ != nullptr;};
        void deleteFileName() { this->fileName_ = nullptr;};
        inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
        inline FileAttr& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


        // height Field Functions 
        bool hasHeight() const { return this->height_ != nullptr;};
        void deleteHeight() { this->height_ = nullptr;};
        inline int32_t getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, 0) };
        inline FileAttr& setHeight(int32_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


        // tmpUrl Field Functions 
        bool hasTmpUrl() const { return this->tmpUrl_ != nullptr;};
        void deleteTmpUrl() { this->tmpUrl_ = nullptr;};
        inline string getTmpUrl() const { DARABONBA_PTR_GET_DEFAULT(tmpUrl_, "") };
        inline FileAttr& setTmpUrl(string tmpUrl) { DARABONBA_PTR_SET_VALUE(tmpUrl_, tmpUrl) };


        // width Field Functions 
        bool hasWidth() const { return this->width_ != nullptr;};
        void deleteWidth() { this->width_ = nullptr;};
        inline int32_t getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, 0) };
        inline FileAttr& setWidth(int32_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


      protected:
        shared_ptr<string> fileName_ {};
        shared_ptr<int32_t> height_ {};
        shared_ptr<string> tmpUrl_ {};
        shared_ptr<int32_t> width_ {};
      };

      virtual bool empty() const override { return this->content_ == nullptr
        && this->contentDomain_ == nullptr && this->contentText_ == nullptr && this->createTime_ == nullptr && this->createUser_ == nullptr && this->deviceId_ == nullptr
        && this->fileAttr_ == nullptr && this->fileKey_ == nullptr && this->id_ == nullptr && this->keywordList_ == nullptr && this->keywords_ == nullptr
        && this->prompt_ == nullptr && this->taskId_ == nullptr && this->title_ == nullptr && this->updateTime_ == nullptr && this->updateUser_ == nullptr
        && this->uuid_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline Data& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // contentDomain Field Functions 
      bool hasContentDomain() const { return this->contentDomain_ != nullptr;};
      void deleteContentDomain() { this->contentDomain_ = nullptr;};
      inline string getContentDomain() const { DARABONBA_PTR_GET_DEFAULT(contentDomain_, "") };
      inline Data& setContentDomain(string contentDomain) { DARABONBA_PTR_SET_VALUE(contentDomain_, contentDomain) };


      // contentText Field Functions 
      bool hasContentText() const { return this->contentText_ != nullptr;};
      void deleteContentText() { this->contentText_ = nullptr;};
      inline string getContentText() const { DARABONBA_PTR_GET_DEFAULT(contentText_, "") };
      inline Data& setContentText(string contentText) { DARABONBA_PTR_SET_VALUE(contentText_, contentText) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Data& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // createUser Field Functions 
      bool hasCreateUser() const { return this->createUser_ != nullptr;};
      void deleteCreateUser() { this->createUser_ = nullptr;};
      inline string getCreateUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
      inline Data& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


      // deviceId Field Functions 
      bool hasDeviceId() const { return this->deviceId_ != nullptr;};
      void deleteDeviceId() { this->deviceId_ = nullptr;};
      inline string getDeviceId() const { DARABONBA_PTR_GET_DEFAULT(deviceId_, "") };
      inline Data& setDeviceId(string deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };


      // fileAttr Field Functions 
      bool hasFileAttr() const { return this->fileAttr_ != nullptr;};
      void deleteFileAttr() { this->fileAttr_ = nullptr;};
      inline const Data::FileAttr & getFileAttr() const { DARABONBA_PTR_GET_CONST(fileAttr_, Data::FileAttr) };
      inline Data::FileAttr getFileAttr() { DARABONBA_PTR_GET(fileAttr_, Data::FileAttr) };
      inline Data& setFileAttr(const Data::FileAttr & fileAttr) { DARABONBA_PTR_SET_VALUE(fileAttr_, fileAttr) };
      inline Data& setFileAttr(Data::FileAttr && fileAttr) { DARABONBA_PTR_SET_RVALUE(fileAttr_, fileAttr) };


      // fileKey Field Functions 
      bool hasFileKey() const { return this->fileKey_ != nullptr;};
      void deleteFileKey() { this->fileKey_ = nullptr;};
      inline string getFileKey() const { DARABONBA_PTR_GET_DEFAULT(fileKey_, "") };
      inline Data& setFileKey(string fileKey) { DARABONBA_PTR_SET_VALUE(fileKey_, fileKey) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Data& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // keywordList Field Functions 
      bool hasKeywordList() const { return this->keywordList_ != nullptr;};
      void deleteKeywordList() { this->keywordList_ = nullptr;};
      inline const vector<string> & getKeywordList() const { DARABONBA_PTR_GET_CONST(keywordList_, vector<string>) };
      inline vector<string> getKeywordList() { DARABONBA_PTR_GET(keywordList_, vector<string>) };
      inline Data& setKeywordList(const vector<string> & keywordList) { DARABONBA_PTR_SET_VALUE(keywordList_, keywordList) };
      inline Data& setKeywordList(vector<string> && keywordList) { DARABONBA_PTR_SET_RVALUE(keywordList_, keywordList) };


      // keywords Field Functions 
      bool hasKeywords() const { return this->keywords_ != nullptr;};
      void deleteKeywords() { this->keywords_ = nullptr;};
      inline string getKeywords() const { DARABONBA_PTR_GET_DEFAULT(keywords_, "") };
      inline Data& setKeywords(string keywords) { DARABONBA_PTR_SET_VALUE(keywords_, keywords) };


      // prompt Field Functions 
      bool hasPrompt() const { return this->prompt_ != nullptr;};
      void deletePrompt() { this->prompt_ = nullptr;};
      inline string getPrompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
      inline Data& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Data& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline Data& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline Data& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // updateUser Field Functions 
      bool hasUpdateUser() const { return this->updateUser_ != nullptr;};
      void deleteUpdateUser() { this->updateUser_ = nullptr;};
      inline string getUpdateUser() const { DARABONBA_PTR_GET_DEFAULT(updateUser_, "") };
      inline Data& setUpdateUser(string updateUser) { DARABONBA_PTR_SET_VALUE(updateUser_, updateUser) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline Data& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    protected:
      shared_ptr<string> content_ {};
      shared_ptr<string> contentDomain_ {};
      shared_ptr<string> contentText_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<string> createUser_ {};
      shared_ptr<string> deviceId_ {};
      shared_ptr<Data::FileAttr> fileAttr_ {};
      shared_ptr<string> fileKey_ {};
      shared_ptr<int64_t> id_ {};
      shared_ptr<vector<string>> keywordList_ {};
      shared_ptr<string> keywords_ {};
      shared_ptr<string> prompt_ {};
      shared_ptr<string> taskId_ {};
      shared_ptr<string> title_ {};
      shared_ptr<string> updateTime_ {};
      shared_ptr<string> updateUser_ {};
      shared_ptr<string> uuid_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->current_ == nullptr && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr
        && this->size_ == nullptr && this->success_ == nullptr && this->total_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListGeneratedContentsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // current Field Functions 
    bool hasCurrent() const { return this->current_ != nullptr;};
    void deleteCurrent() { this->current_ = nullptr;};
    inline int32_t getCurrent() const { DARABONBA_PTR_GET_DEFAULT(current_, 0) };
    inline ListGeneratedContentsResponseBody& setCurrent(int32_t current) { DARABONBA_PTR_SET_VALUE(current_, current) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListGeneratedContentsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListGeneratedContentsResponseBody::Data>) };
    inline vector<ListGeneratedContentsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListGeneratedContentsResponseBody::Data>) };
    inline ListGeneratedContentsResponseBody& setData(const vector<ListGeneratedContentsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListGeneratedContentsResponseBody& setData(vector<ListGeneratedContentsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListGeneratedContentsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListGeneratedContentsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListGeneratedContentsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline ListGeneratedContentsResponseBody& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListGeneratedContentsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline ListGeneratedContentsResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> current_ {};
    shared_ptr<vector<ListGeneratedContentsResponseBody::Data>> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> size_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
