// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHINGTARGET_HPP_
#define ALIBABACLOUD_MODELS_PUSHINGTARGET_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class PushingTarget : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PushingTarget& obj) { 
      DARABONBA_PTR_TO_JSON(Arn, arn_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(HttpRequestTarget, httpRequestTarget_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Range, range_);
      DARABONBA_PTR_TO_JSON(TemplateUuid, templateUuid_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, PushingTarget& obj) { 
      DARABONBA_PTR_FROM_JSON(Arn, arn_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(HttpRequestTarget, httpRequestTarget_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Range, range_);
      DARABONBA_PTR_FROM_JSON(TemplateUuid, templateUuid_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    PushingTarget() = default ;
    PushingTarget(const PushingTarget &) = default ;
    PushingTarget(PushingTarget &&) = default ;
    PushingTarget(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PushingTarget() = default ;
    PushingTarget& operator=(const PushingTarget &) = default ;
    PushingTarget& operator=(PushingTarget &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class HttpRequestTarget : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const HttpRequestTarget& obj) { 
        DARABONBA_PTR_TO_JSON(ContentType, contentType_);
        DARABONBA_PTR_TO_JSON(EncryptSignatureKey, encryptSignatureKey_);
        DARABONBA_PTR_TO_JSON(EncryptString, encryptString_);
        DARABONBA_PTR_TO_JSON(EncryptTimestampKey, encryptTimestampKey_);
        DARABONBA_PTR_TO_JSON(Headers, headers_);
        DARABONBA_PTR_TO_JSON(Method, method_);
        DARABONBA_PTR_TO_JSON(Url, url_);
      };
      friend void from_json(const Darabonba::Json& j, HttpRequestTarget& obj) { 
        DARABONBA_PTR_FROM_JSON(ContentType, contentType_);
        DARABONBA_PTR_FROM_JSON(EncryptSignatureKey, encryptSignatureKey_);
        DARABONBA_PTR_FROM_JSON(EncryptString, encryptString_);
        DARABONBA_PTR_FROM_JSON(EncryptTimestampKey, encryptTimestampKey_);
        DARABONBA_PTR_FROM_JSON(Headers, headers_);
        DARABONBA_PTR_FROM_JSON(Method, method_);
        DARABONBA_PTR_FROM_JSON(Url, url_);
      };
      HttpRequestTarget() = default ;
      HttpRequestTarget(const HttpRequestTarget &) = default ;
      HttpRequestTarget(HttpRequestTarget &&) = default ;
      HttpRequestTarget(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~HttpRequestTarget() = default ;
      HttpRequestTarget& operator=(const HttpRequestTarget &) = default ;
      HttpRequestTarget& operator=(HttpRequestTarget &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Headers : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Headers& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Headers& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Headers() = default ;
        Headers(const Headers &) = default ;
        Headers(Headers &&) = default ;
        Headers(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Headers() = default ;
        Headers& operator=(const Headers &) = default ;
        Headers& operator=(Headers &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Headers& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Headers& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        shared_ptr<string> key_ {};
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->contentType_ == nullptr
        && this->encryptSignatureKey_ == nullptr && this->encryptString_ == nullptr && this->encryptTimestampKey_ == nullptr && this->headers_ == nullptr && this->method_ == nullptr
        && this->url_ == nullptr; };
      // contentType Field Functions 
      bool hasContentType() const { return this->contentType_ != nullptr;};
      void deleteContentType() { this->contentType_ = nullptr;};
      inline string getContentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
      inline HttpRequestTarget& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


      // encryptSignatureKey Field Functions 
      bool hasEncryptSignatureKey() const { return this->encryptSignatureKey_ != nullptr;};
      void deleteEncryptSignatureKey() { this->encryptSignatureKey_ = nullptr;};
      inline string getEncryptSignatureKey() const { DARABONBA_PTR_GET_DEFAULT(encryptSignatureKey_, "") };
      inline HttpRequestTarget& setEncryptSignatureKey(string encryptSignatureKey) { DARABONBA_PTR_SET_VALUE(encryptSignatureKey_, encryptSignatureKey) };


      // encryptString Field Functions 
      bool hasEncryptString() const { return this->encryptString_ != nullptr;};
      void deleteEncryptString() { this->encryptString_ = nullptr;};
      inline string getEncryptString() const { DARABONBA_PTR_GET_DEFAULT(encryptString_, "") };
      inline HttpRequestTarget& setEncryptString(string encryptString) { DARABONBA_PTR_SET_VALUE(encryptString_, encryptString) };


      // encryptTimestampKey Field Functions 
      bool hasEncryptTimestampKey() const { return this->encryptTimestampKey_ != nullptr;};
      void deleteEncryptTimestampKey() { this->encryptTimestampKey_ = nullptr;};
      inline string getEncryptTimestampKey() const { DARABONBA_PTR_GET_DEFAULT(encryptTimestampKey_, "") };
      inline HttpRequestTarget& setEncryptTimestampKey(string encryptTimestampKey) { DARABONBA_PTR_SET_VALUE(encryptTimestampKey_, encryptTimestampKey) };


      // headers Field Functions 
      bool hasHeaders() const { return this->headers_ != nullptr;};
      void deleteHeaders() { this->headers_ = nullptr;};
      inline const vector<HttpRequestTarget::Headers> & getHeaders() const { DARABONBA_PTR_GET_CONST(headers_, vector<HttpRequestTarget::Headers>) };
      inline vector<HttpRequestTarget::Headers> getHeaders() { DARABONBA_PTR_GET(headers_, vector<HttpRequestTarget::Headers>) };
      inline HttpRequestTarget& setHeaders(const vector<HttpRequestTarget::Headers> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
      inline HttpRequestTarget& setHeaders(vector<HttpRequestTarget::Headers> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


      // method Field Functions 
      bool hasMethod() const { return this->method_ != nullptr;};
      void deleteMethod() { this->method_ = nullptr;};
      inline string getMethod() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
      inline HttpRequestTarget& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


      // url Field Functions 
      bool hasUrl() const { return this->url_ != nullptr;};
      void deleteUrl() { this->url_ = nullptr;};
      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
      inline HttpRequestTarget& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    protected:
      shared_ptr<string> contentType_ {};
      shared_ptr<string> encryptSignatureKey_ {};
      shared_ptr<string> encryptString_ {};
      shared_ptr<string> encryptTimestampKey_ {};
      shared_ptr<vector<HttpRequestTarget::Headers>> headers_ {};
      shared_ptr<string> method_ {};
      shared_ptr<string> url_ {};
    };

    virtual bool empty() const override { return this->arn_ == nullptr
        && this->createTime_ == nullptr && this->description_ == nullptr && this->httpRequestTarget_ == nullptr && this->name_ == nullptr && this->range_ == nullptr
        && this->templateUuid_ == nullptr && this->type_ == nullptr && this->updateTime_ == nullptr && this->userId_ == nullptr && this->uuid_ == nullptr; };
    // arn Field Functions 
    bool hasArn() const { return this->arn_ != nullptr;};
    void deleteArn() { this->arn_ = nullptr;};
    inline string getArn() const { DARABONBA_PTR_GET_DEFAULT(arn_, "") };
    inline PushingTarget& setArn(string arn) { DARABONBA_PTR_SET_VALUE(arn_, arn) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline PushingTarget& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline PushingTarget& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // httpRequestTarget Field Functions 
    bool hasHttpRequestTarget() const { return this->httpRequestTarget_ != nullptr;};
    void deleteHttpRequestTarget() { this->httpRequestTarget_ = nullptr;};
    inline const PushingTarget::HttpRequestTarget & getHttpRequestTarget() const { DARABONBA_PTR_GET_CONST(httpRequestTarget_, PushingTarget::HttpRequestTarget) };
    inline PushingTarget::HttpRequestTarget getHttpRequestTarget() { DARABONBA_PTR_GET(httpRequestTarget_, PushingTarget::HttpRequestTarget) };
    inline PushingTarget& setHttpRequestTarget(const PushingTarget::HttpRequestTarget & httpRequestTarget) { DARABONBA_PTR_SET_VALUE(httpRequestTarget_, httpRequestTarget) };
    inline PushingTarget& setHttpRequestTarget(PushingTarget::HttpRequestTarget && httpRequestTarget) { DARABONBA_PTR_SET_RVALUE(httpRequestTarget_, httpRequestTarget) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline PushingTarget& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // range Field Functions 
    bool hasRange() const { return this->range_ != nullptr;};
    void deleteRange() { this->range_ = nullptr;};
    inline string getRange() const { DARABONBA_PTR_GET_DEFAULT(range_, "") };
    inline PushingTarget& setRange(string range) { DARABONBA_PTR_SET_VALUE(range_, range) };


    // templateUuid Field Functions 
    bool hasTemplateUuid() const { return this->templateUuid_ != nullptr;};
    void deleteTemplateUuid() { this->templateUuid_ = nullptr;};
    inline string getTemplateUuid() const { DARABONBA_PTR_GET_DEFAULT(templateUuid_, "") };
    inline PushingTarget& setTemplateUuid(string templateUuid) { DARABONBA_PTR_SET_VALUE(templateUuid_, templateUuid) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline PushingTarget& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline PushingTarget& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline PushingTarget& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline PushingTarget& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    shared_ptr<string> arn_ {};
    shared_ptr<string> createTime_ {};
    shared_ptr<string> description_ {};
    shared_ptr<PushingTarget::HttpRequestTarget> httpRequestTarget_ {};
    // This parameter is required.
    shared_ptr<string> name_ {};
    shared_ptr<string> range_ {};
    shared_ptr<string> templateUuid_ {};
    shared_ptr<string> type_ {};
    shared_ptr<string> updateTime_ {};
    shared_ptr<string> userId_ {};
    shared_ptr<string> uuid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
