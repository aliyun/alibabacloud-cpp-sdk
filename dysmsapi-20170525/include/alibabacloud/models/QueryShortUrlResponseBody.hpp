// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSHORTURLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYSHORTURLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class QueryShortUrlResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryShortUrlResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryShortUrlResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryShortUrlResponseBody() = default ;
    QueryShortUrlResponseBody(const QueryShortUrlResponseBody &) = default ;
    QueryShortUrlResponseBody(QueryShortUrlResponseBody &&) = default ;
    QueryShortUrlResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryShortUrlResponseBody() = default ;
    QueryShortUrlResponseBody& operator=(const QueryShortUrlResponseBody &) = default ;
    QueryShortUrlResponseBody& operator=(QueryShortUrlResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
        DARABONBA_PTR_TO_JSON(ExpireDate, expireDate_);
        DARABONBA_PTR_TO_JSON(PageViewCount, pageViewCount_);
        DARABONBA_PTR_TO_JSON(ShortUrl, shortUrl_);
        DARABONBA_PTR_TO_JSON(ShortUrlName, shortUrlName_);
        DARABONBA_PTR_TO_JSON(ShortUrlStatus, shortUrlStatus_);
        DARABONBA_PTR_TO_JSON(SourceUrl, sourceUrl_);
        DARABONBA_PTR_TO_JSON(UniqueVisitorCount, uniqueVisitorCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
        DARABONBA_PTR_FROM_JSON(ExpireDate, expireDate_);
        DARABONBA_PTR_FROM_JSON(PageViewCount, pageViewCount_);
        DARABONBA_PTR_FROM_JSON(ShortUrl, shortUrl_);
        DARABONBA_PTR_FROM_JSON(ShortUrlName, shortUrlName_);
        DARABONBA_PTR_FROM_JSON(ShortUrlStatus, shortUrlStatus_);
        DARABONBA_PTR_FROM_JSON(SourceUrl, sourceUrl_);
        DARABONBA_PTR_FROM_JSON(UniqueVisitorCount, uniqueVisitorCount_);
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
      virtual bool empty() const override { return this->createDate_ == nullptr
        && this->expireDate_ == nullptr && this->pageViewCount_ == nullptr && this->shortUrl_ == nullptr && this->shortUrlName_ == nullptr && this->shortUrlStatus_ == nullptr
        && this->sourceUrl_ == nullptr && this->uniqueVisitorCount_ == nullptr; };
      // createDate Field Functions 
      bool hasCreateDate() const { return this->createDate_ != nullptr;};
      void deleteCreateDate() { this->createDate_ = nullptr;};
      inline string getCreateDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
      inline Data& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


      // expireDate Field Functions 
      bool hasExpireDate() const { return this->expireDate_ != nullptr;};
      void deleteExpireDate() { this->expireDate_ = nullptr;};
      inline string getExpireDate() const { DARABONBA_PTR_GET_DEFAULT(expireDate_, "") };
      inline Data& setExpireDate(string expireDate) { DARABONBA_PTR_SET_VALUE(expireDate_, expireDate) };


      // pageViewCount Field Functions 
      bool hasPageViewCount() const { return this->pageViewCount_ != nullptr;};
      void deletePageViewCount() { this->pageViewCount_ = nullptr;};
      inline string getPageViewCount() const { DARABONBA_PTR_GET_DEFAULT(pageViewCount_, "") };
      inline Data& setPageViewCount(string pageViewCount) { DARABONBA_PTR_SET_VALUE(pageViewCount_, pageViewCount) };


      // shortUrl Field Functions 
      bool hasShortUrl() const { return this->shortUrl_ != nullptr;};
      void deleteShortUrl() { this->shortUrl_ = nullptr;};
      inline string getShortUrl() const { DARABONBA_PTR_GET_DEFAULT(shortUrl_, "") };
      inline Data& setShortUrl(string shortUrl) { DARABONBA_PTR_SET_VALUE(shortUrl_, shortUrl) };


      // shortUrlName Field Functions 
      bool hasShortUrlName() const { return this->shortUrlName_ != nullptr;};
      void deleteShortUrlName() { this->shortUrlName_ = nullptr;};
      inline string getShortUrlName() const { DARABONBA_PTR_GET_DEFAULT(shortUrlName_, "") };
      inline Data& setShortUrlName(string shortUrlName) { DARABONBA_PTR_SET_VALUE(shortUrlName_, shortUrlName) };


      // shortUrlStatus Field Functions 
      bool hasShortUrlStatus() const { return this->shortUrlStatus_ != nullptr;};
      void deleteShortUrlStatus() { this->shortUrlStatus_ = nullptr;};
      inline string getShortUrlStatus() const { DARABONBA_PTR_GET_DEFAULT(shortUrlStatus_, "") };
      inline Data& setShortUrlStatus(string shortUrlStatus) { DARABONBA_PTR_SET_VALUE(shortUrlStatus_, shortUrlStatus) };


      // sourceUrl Field Functions 
      bool hasSourceUrl() const { return this->sourceUrl_ != nullptr;};
      void deleteSourceUrl() { this->sourceUrl_ = nullptr;};
      inline string getSourceUrl() const { DARABONBA_PTR_GET_DEFAULT(sourceUrl_, "") };
      inline Data& setSourceUrl(string sourceUrl) { DARABONBA_PTR_SET_VALUE(sourceUrl_, sourceUrl) };


      // uniqueVisitorCount Field Functions 
      bool hasUniqueVisitorCount() const { return this->uniqueVisitorCount_ != nullptr;};
      void deleteUniqueVisitorCount() { this->uniqueVisitorCount_ = nullptr;};
      inline string getUniqueVisitorCount() const { DARABONBA_PTR_GET_DEFAULT(uniqueVisitorCount_, "") };
      inline Data& setUniqueVisitorCount(string uniqueVisitorCount) { DARABONBA_PTR_SET_VALUE(uniqueVisitorCount_, uniqueVisitorCount) };


    protected:
      // The time when the short URL was created.
      shared_ptr<string> createDate_ {};
      // The time when the short URL expires.
      shared_ptr<string> expireDate_ {};
      // The PV.
      shared_ptr<string> pageViewCount_ {};
      // The short URL.
      shared_ptr<string> shortUrl_ {};
      // The service name of the short URL.
      shared_ptr<string> shortUrlName_ {};
      // The status of the short URL. Valid values:
      // 
      // *   **expired**
      // *   **effective**
      // *   **audit**
      // *   **reject**
      shared_ptr<string> shortUrlStatus_ {};
      // The source address.
      shared_ptr<string> sourceUrl_ {};
      // The UV.
      shared_ptr<string> uniqueVisitorCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryShortUrlResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryShortUrlResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryShortUrlResponseBody::Data) };
    inline QueryShortUrlResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryShortUrlResponseBody::Data) };
    inline QueryShortUrlResponseBody& setData(const QueryShortUrlResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryShortUrlResponseBody& setData(QueryShortUrlResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryShortUrlResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryShortUrlResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response code.
    // 
    // *   If OK is returned, the request is successful.
    // *   Other values indicate that the request fails. For more information, see [Error codes](https://help.aliyun.com/document_detail/101346.html).
    shared_ptr<string> code_ {};
    // The details of the short URL.
    shared_ptr<QueryShortUrlResponseBody::Data> data_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
