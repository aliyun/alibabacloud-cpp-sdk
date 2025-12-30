// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRANSFERFILEDOWNLOADURLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTRANSFERFILEDOWNLOADURLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ListTransferFileDownloadUrlResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTransferFileDownloadUrlResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Urls, urls_);
    };
    friend void from_json(const Darabonba::Json& j, ListTransferFileDownloadUrlResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Urls, urls_);
    };
    ListTransferFileDownloadUrlResponseBody() = default ;
    ListTransferFileDownloadUrlResponseBody(const ListTransferFileDownloadUrlResponseBody &) = default ;
    ListTransferFileDownloadUrlResponseBody(ListTransferFileDownloadUrlResponseBody &&) = default ;
    ListTransferFileDownloadUrlResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTransferFileDownloadUrlResponseBody() = default ;
    ListTransferFileDownloadUrlResponseBody& operator=(const ListTransferFileDownloadUrlResponseBody &) = default ;
    ListTransferFileDownloadUrlResponseBody& operator=(ListTransferFileDownloadUrlResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Urls : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Urls& obj) { 
        DARABONBA_PTR_TO_JSON(FileId, fileId_);
        DARABONBA_PTR_TO_JSON(FileName, fileName_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Url, url_);
      };
      friend void from_json(const Darabonba::Json& j, Urls& obj) { 
        DARABONBA_PTR_FROM_JSON(FileId, fileId_);
        DARABONBA_PTR_FROM_JSON(FileName, fileName_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Url, url_);
      };
      Urls() = default ;
      Urls(const Urls &) = default ;
      Urls(Urls &&) = default ;
      Urls(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Urls() = default ;
      Urls& operator=(const Urls &) = default ;
      Urls& operator=(Urls &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->fileId_ == nullptr
        && this->fileName_ == nullptr && this->status_ == nullptr && this->url_ == nullptr; };
      // fileId Field Functions 
      bool hasFileId() const { return this->fileId_ != nullptr;};
      void deleteFileId() { this->fileId_ = nullptr;};
      inline string getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
      inline Urls& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


      // fileName Field Functions 
      bool hasFileName() const { return this->fileName_ != nullptr;};
      void deleteFileName() { this->fileName_ = nullptr;};
      inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
      inline Urls& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Urls& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // url Field Functions 
      bool hasUrl() const { return this->url_ != nullptr;};
      void deleteUrl() { this->url_ = nullptr;};
      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
      inline Urls& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    protected:
      shared_ptr<string> fileId_ {};
      shared_ptr<string> fileName_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> url_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->urls_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTransferFileDownloadUrlResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // urls Field Functions 
    bool hasUrls() const { return this->urls_ != nullptr;};
    void deleteUrls() { this->urls_ = nullptr;};
    inline const vector<ListTransferFileDownloadUrlResponseBody::Urls> & getUrls() const { DARABONBA_PTR_GET_CONST(urls_, vector<ListTransferFileDownloadUrlResponseBody::Urls>) };
    inline vector<ListTransferFileDownloadUrlResponseBody::Urls> getUrls() { DARABONBA_PTR_GET(urls_, vector<ListTransferFileDownloadUrlResponseBody::Urls>) };
    inline ListTransferFileDownloadUrlResponseBody& setUrls(const vector<ListTransferFileDownloadUrlResponseBody::Urls> & urls) { DARABONBA_PTR_SET_VALUE(urls_, urls) };
    inline ListTransferFileDownloadUrlResponseBody& setUrls(vector<ListTransferFileDownloadUrlResponseBody::Urls> && urls) { DARABONBA_PTR_SET_RVALUE(urls_, urls) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<ListTransferFileDownloadUrlResponseBody::Urls>> urls_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
