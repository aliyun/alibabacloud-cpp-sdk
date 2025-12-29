// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYVERIFYDOWNLOADTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYVERIFYDOWNLOADTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class QueryVerifyDownloadTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryVerifyDownloadTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(Finish, finish_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, QueryVerifyDownloadTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(Finish, finish_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    QueryVerifyDownloadTaskResponseBody() = default ;
    QueryVerifyDownloadTaskResponseBody(const QueryVerifyDownloadTaskResponseBody &) = default ;
    QueryVerifyDownloadTaskResponseBody(QueryVerifyDownloadTaskResponseBody &&) = default ;
    QueryVerifyDownloadTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryVerifyDownloadTaskResponseBody() = default ;
    QueryVerifyDownloadTaskResponseBody& operator=(const QueryVerifyDownloadTaskResponseBody &) = default ;
    QueryVerifyDownloadTaskResponseBody& operator=(QueryVerifyDownloadTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->finish_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr && this->url_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline QueryVerifyDownloadTaskResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // finish Field Functions 
    bool hasFinish() const { return this->finish_ != nullptr;};
    void deleteFinish() { this->finish_ = nullptr;};
    inline bool getFinish() const { DARABONBA_PTR_GET_DEFAULT(finish_, false) };
    inline QueryVerifyDownloadTaskResponseBody& setFinish(bool finish) { DARABONBA_PTR_SET_VALUE(finish_, finish) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryVerifyDownloadTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline QueryVerifyDownloadTaskResponseBody& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline QueryVerifyDownloadTaskResponseBody& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    // Error code.
    shared_ptr<string> errorCode_ {};
    // Whether the download task is completed:
    // - **true**: Completed
    // - **false**: Not completed
    shared_ptr<bool> finish_ {};
    // ID of the request
    shared_ptr<string> requestId_ {};
    // Task status:
    // - **1**: File generation in progress
    // - **2**: File generation completed
    // - **3**: File generation failed
    shared_ptr<int32_t> status_ {};
    // Download URL.
    shared_ptr<string> url_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
