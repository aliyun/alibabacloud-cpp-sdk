// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERMESSAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERMESSAGERESPONSEBODY_HPP_
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
  class ListUserMessageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserMessageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserMessageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    ListUserMessageResponseBody() = default ;
    ListUserMessageResponseBody(const ListUserMessageResponseBody &) = default ;
    ListUserMessageResponseBody(ListUserMessageResponseBody &&) = default ;
    ListUserMessageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserMessageResponseBody() = default ;
    ListUserMessageResponseBody& operator=(const ListUserMessageResponseBody &) = default ;
    ListUserMessageResponseBody& operator=(ListUserMessageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(Content, content_);
        DARABONBA_PTR_TO_JSON(DeviceName, deviceName_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Pic, pic_);
        DARABONBA_PTR_TO_JSON(Source, source_);
        DARABONBA_PTR_TO_JSON(SourceUuid, sourceUuid_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(Url, url_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(Content, content_);
        DARABONBA_PTR_FROM_JSON(DeviceName, deviceName_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Pic, pic_);
        DARABONBA_PTR_FROM_JSON(Source, source_);
        DARABONBA_PTR_FROM_JSON(SourceUuid, sourceUuid_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(Url, url_);
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
      virtual bool empty() const override { return this->content_ == nullptr
        && this->deviceName_ == nullptr && this->gmtCreate_ == nullptr && this->id_ == nullptr && this->pic_ == nullptr && this->source_ == nullptr
        && this->sourceUuid_ == nullptr && this->status_ == nullptr && this->type_ == nullptr && this->url_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline Result& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // deviceName Field Functions 
      bool hasDeviceName() const { return this->deviceName_ != nullptr;};
      void deleteDeviceName() { this->deviceName_ = nullptr;};
      inline string getDeviceName() const { DARABONBA_PTR_GET_DEFAULT(deviceName_, "") };
      inline Result& setDeviceName(string deviceName) { DARABONBA_PTR_SET_VALUE(deviceName_, deviceName) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Result& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Result& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // pic Field Functions 
      bool hasPic() const { return this->pic_ != nullptr;};
      void deletePic() { this->pic_ = nullptr;};
      inline string getPic() const { DARABONBA_PTR_GET_DEFAULT(pic_, "") };
      inline Result& setPic(string pic) { DARABONBA_PTR_SET_VALUE(pic_, pic) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline Result& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


      // sourceUuid Field Functions 
      bool hasSourceUuid() const { return this->sourceUuid_ != nullptr;};
      void deleteSourceUuid() { this->sourceUuid_ = nullptr;};
      inline string getSourceUuid() const { DARABONBA_PTR_GET_DEFAULT(sourceUuid_, "") };
      inline Result& setSourceUuid(string sourceUuid) { DARABONBA_PTR_SET_VALUE(sourceUuid_, sourceUuid) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Result& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Result& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // url Field Functions 
      bool hasUrl() const { return this->url_ != nullptr;};
      void deleteUrl() { this->url_ = nullptr;};
      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
      inline Result& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    protected:
      // Message text
      shared_ptr<string> content_ {};
      // Device name
      shared_ptr<string> deviceName_ {};
      // Time when the message was sent
      shared_ptr<string> gmtCreate_ {};
      // Message ID
      shared_ptr<string> id_ {};
      // Device Image
      shared_ptr<string> pic_ {};
      // Message source: app or box
      shared_ptr<string> source_ {};
      // Source Device ID
      shared_ptr<string> sourceUuid_ {};
      // Message status: 0 indicates unread, and 1 indicates read.
      shared_ptr<int32_t> status_ {};
      // Currently only audio is supported.
      shared_ptr<string> type_ {};
      // Audio message link
      shared_ptr<string> url_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->result_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListUserMessageResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListUserMessageResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ListUserMessageResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<ListUserMessageResponseBody::Result>) };
    inline vector<ListUserMessageResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<ListUserMessageResponseBody::Result>) };
    inline ListUserMessageResponseBody& setResult(const vector<ListUserMessageResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListUserMessageResponseBody& setResult(vector<ListUserMessageResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // Status code returned by the service. SUCCESS indicates success; otherwise, it indicates failure.
    shared_ptr<string> code_ {};
    // error message
    shared_ptr<string> message_ {};
    // List of user message query results
    shared_ptr<vector<ListUserMessageResponseBody::Result>> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
