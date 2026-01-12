// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSOURCEFILERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSOURCEFILERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace XrEngine20221111
{
namespace Models
{
  class ListSourceFileResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSourceFileResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListSourceFileResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListSourceFileResponseBody() = default ;
    ListSourceFileResponseBody(const ListSourceFileResponseBody &) = default ;
    ListSourceFileResponseBody(ListSourceFileResponseBody &&) = default ;
    ListSourceFileResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSourceFileResponseBody() = default ;
    ListSourceFileResponseBody& operator=(const ListSourceFileResponseBody &) = default ;
    ListSourceFileResponseBody& operator=(ListSourceFileResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(PicList, picList_);
        DARABONBA_PTR_TO_JSON(VideoList, videoList_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(PicList, picList_);
        DARABONBA_PTR_FROM_JSON(VideoList, videoList_);
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
      class VideoList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VideoList& obj) { 
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(FileName, fileName_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
          DARABONBA_PTR_TO_JSON(OssKey, ossKey_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(Url, url_);
        };
        friend void from_json(const Darabonba::Json& j, VideoList& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(FileName, fileName_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
          DARABONBA_PTR_FROM_JSON(OssKey, ossKey_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(Url, url_);
        };
        VideoList() = default ;
        VideoList(const VideoList &) = default ;
        VideoList(VideoList &&) = default ;
        VideoList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VideoList() = default ;
        VideoList& operator=(const VideoList &) = default ;
        VideoList& operator=(VideoList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->fileName_ == nullptr && this->id_ == nullptr && this->modifiedTime_ == nullptr && this->ossKey_ == nullptr && this->type_ == nullptr
        && this->url_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline VideoList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // fileName Field Functions 
        bool hasFileName() const { return this->fileName_ != nullptr;};
        void deleteFileName() { this->fileName_ = nullptr;};
        inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
        inline VideoList& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline VideoList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // modifiedTime Field Functions 
        bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
        void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
        inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
        inline VideoList& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


        // ossKey Field Functions 
        bool hasOssKey() const { return this->ossKey_ != nullptr;};
        void deleteOssKey() { this->ossKey_ = nullptr;};
        inline string getOssKey() const { DARABONBA_PTR_GET_DEFAULT(ossKey_, "") };
        inline VideoList& setOssKey(string ossKey) { DARABONBA_PTR_SET_VALUE(ossKey_, ossKey) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline VideoList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // url Field Functions 
        bool hasUrl() const { return this->url_ != nullptr;};
        void deleteUrl() { this->url_ = nullptr;};
        inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
        inline VideoList& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


      protected:
        shared_ptr<string> createTime_ {};
        shared_ptr<string> fileName_ {};
        shared_ptr<string> id_ {};
        shared_ptr<string> modifiedTime_ {};
        shared_ptr<string> ossKey_ {};
        shared_ptr<string> type_ {};
        shared_ptr<string> url_ {};
      };

      class PicList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PicList& obj) { 
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(FileName, fileName_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
          DARABONBA_PTR_TO_JSON(OssKey, ossKey_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(Url, url_);
        };
        friend void from_json(const Darabonba::Json& j, PicList& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(FileName, fileName_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
          DARABONBA_PTR_FROM_JSON(OssKey, ossKey_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(Url, url_);
        };
        PicList() = default ;
        PicList(const PicList &) = default ;
        PicList(PicList &&) = default ;
        PicList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PicList() = default ;
        PicList& operator=(const PicList &) = default ;
        PicList& operator=(PicList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->fileName_ == nullptr && this->id_ == nullptr && this->modifiedTime_ == nullptr && this->ossKey_ == nullptr && this->type_ == nullptr
        && this->url_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline PicList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // fileName Field Functions 
        bool hasFileName() const { return this->fileName_ != nullptr;};
        void deleteFileName() { this->fileName_ = nullptr;};
        inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
        inline PicList& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline PicList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // modifiedTime Field Functions 
        bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
        void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
        inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
        inline PicList& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


        // ossKey Field Functions 
        bool hasOssKey() const { return this->ossKey_ != nullptr;};
        void deleteOssKey() { this->ossKey_ = nullptr;};
        inline string getOssKey() const { DARABONBA_PTR_GET_DEFAULT(ossKey_, "") };
        inline PicList& setOssKey(string ossKey) { DARABONBA_PTR_SET_VALUE(ossKey_, ossKey) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline PicList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // url Field Functions 
        bool hasUrl() const { return this->url_ != nullptr;};
        void deleteUrl() { this->url_ = nullptr;};
        inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
        inline PicList& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


      protected:
        shared_ptr<string> createTime_ {};
        shared_ptr<string> fileName_ {};
        shared_ptr<string> id_ {};
        shared_ptr<string> modifiedTime_ {};
        shared_ptr<string> ossKey_ {};
        shared_ptr<string> type_ {};
        shared_ptr<string> url_ {};
      };

      virtual bool empty() const override { return this->picList_ == nullptr
        && this->videoList_ == nullptr; };
      // picList Field Functions 
      bool hasPicList() const { return this->picList_ != nullptr;};
      void deletePicList() { this->picList_ = nullptr;};
      inline const vector<Data::PicList> & getPicList() const { DARABONBA_PTR_GET_CONST(picList_, vector<Data::PicList>) };
      inline vector<Data::PicList> getPicList() { DARABONBA_PTR_GET(picList_, vector<Data::PicList>) };
      inline Data& setPicList(const vector<Data::PicList> & picList) { DARABONBA_PTR_SET_VALUE(picList_, picList) };
      inline Data& setPicList(vector<Data::PicList> && picList) { DARABONBA_PTR_SET_RVALUE(picList_, picList) };


      // videoList Field Functions 
      bool hasVideoList() const { return this->videoList_ != nullptr;};
      void deleteVideoList() { this->videoList_ = nullptr;};
      inline const vector<Data::VideoList> & getVideoList() const { DARABONBA_PTR_GET_CONST(videoList_, vector<Data::VideoList>) };
      inline vector<Data::VideoList> getVideoList() { DARABONBA_PTR_GET(videoList_, vector<Data::VideoList>) };
      inline Data& setVideoList(const vector<Data::VideoList> & videoList) { DARABONBA_PTR_SET_VALUE(videoList_, videoList) };
      inline Data& setVideoList(vector<Data::VideoList> && videoList) { DARABONBA_PTR_SET_RVALUE(videoList_, videoList) };


    protected:
      shared_ptr<vector<Data::PicList>> picList_ {};
      shared_ptr<vector<Data::VideoList>> videoList_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListSourceFileResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListSourceFileResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListSourceFileResponseBody::Data) };
    inline ListSourceFileResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListSourceFileResponseBody::Data) };
    inline ListSourceFileResponseBody& setData(const ListSourceFileResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListSourceFileResponseBody& setData(ListSourceFileResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListSourceFileResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSourceFileResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListSourceFileResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<ListSourceFileResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace XrEngine20221111
#endif
