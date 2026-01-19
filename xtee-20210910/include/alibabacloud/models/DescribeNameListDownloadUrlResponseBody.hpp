// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENAMELISTDOWNLOADURLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENAMELISTDOWNLOADURLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeNameListDownloadUrlResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNameListDownloadUrlResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(resultObject, resultObject_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNameListDownloadUrlResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(resultObject, resultObject_);
    };
    DescribeNameListDownloadUrlResponseBody() = default ;
    DescribeNameListDownloadUrlResponseBody(const DescribeNameListDownloadUrlResponseBody &) = default ;
    DescribeNameListDownloadUrlResponseBody(DescribeNameListDownloadUrlResponseBody &&) = default ;
    DescribeNameListDownloadUrlResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNameListDownloadUrlResponseBody() = default ;
    DescribeNameListDownloadUrlResponseBody& operator=(const DescribeNameListDownloadUrlResponseBody &) = default ;
    DescribeNameListDownloadUrlResponseBody& operator=(DescribeNameListDownloadUrlResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(downloadFileUrl, downloadFileUrl_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(downloadFileUrl, downloadFileUrl_);
      };
      ResultObject() = default ;
      ResultObject(const ResultObject &) = default ;
      ResultObject(ResultObject &&) = default ;
      ResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResultObject() = default ;
      ResultObject& operator=(const ResultObject &) = default ;
      ResultObject& operator=(ResultObject &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->downloadFileUrl_ == nullptr; };
      // downloadFileUrl Field Functions 
      bool hasDownloadFileUrl() const { return this->downloadFileUrl_ != nullptr;};
      void deleteDownloadFileUrl() { this->downloadFileUrl_ = nullptr;};
      inline string getDownloadFileUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadFileUrl_, "") };
      inline ResultObject& setDownloadFileUrl(string downloadFileUrl) { DARABONBA_PTR_SET_VALUE(downloadFileUrl_, downloadFileUrl) };


    protected:
      // Download URL.
      shared_ptr<string> downloadFileUrl_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resultObject_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNameListDownloadUrlResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const DescribeNameListDownloadUrlResponseBody::ResultObject & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, DescribeNameListDownloadUrlResponseBody::ResultObject) };
    inline DescribeNameListDownloadUrlResponseBody::ResultObject getResultObject() { DARABONBA_PTR_GET(resultObject_, DescribeNameListDownloadUrlResponseBody::ResultObject) };
    inline DescribeNameListDownloadUrlResponseBody& setResultObject(const DescribeNameListDownloadUrlResponseBody::ResultObject & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline DescribeNameListDownloadUrlResponseBody& setResultObject(DescribeNameListDownloadUrlResponseBody::ResultObject && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


  protected:
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Returned object
    shared_ptr<DescribeNameListDownloadUrlResponseBody::ResultObject> resultObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
