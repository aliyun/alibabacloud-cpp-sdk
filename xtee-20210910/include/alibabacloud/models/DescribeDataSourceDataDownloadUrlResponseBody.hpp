// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATASOURCEDATADOWNLOADURLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATASOURCEDATADOWNLOADURLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeDataSourceDataDownloadUrlResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataSourceDataDownloadUrlResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(resultObject, resultObject_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataSourceDataDownloadUrlResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(resultObject, resultObject_);
    };
    DescribeDataSourceDataDownloadUrlResponseBody() = default ;
    DescribeDataSourceDataDownloadUrlResponseBody(const DescribeDataSourceDataDownloadUrlResponseBody &) = default ;
    DescribeDataSourceDataDownloadUrlResponseBody(DescribeDataSourceDataDownloadUrlResponseBody &&) = default ;
    DescribeDataSourceDataDownloadUrlResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataSourceDataDownloadUrlResponseBody() = default ;
    DescribeDataSourceDataDownloadUrlResponseBody& operator=(const DescribeDataSourceDataDownloadUrlResponseBody &) = default ;
    DescribeDataSourceDataDownloadUrlResponseBody& operator=(DescribeDataSourceDataDownloadUrlResponseBody &&) = default ;
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
    inline DescribeDataSourceDataDownloadUrlResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const DescribeDataSourceDataDownloadUrlResponseBody::ResultObject & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, DescribeDataSourceDataDownloadUrlResponseBody::ResultObject) };
    inline DescribeDataSourceDataDownloadUrlResponseBody::ResultObject getResultObject() { DARABONBA_PTR_GET(resultObject_, DescribeDataSourceDataDownloadUrlResponseBody::ResultObject) };
    inline DescribeDataSourceDataDownloadUrlResponseBody& setResultObject(const DescribeDataSourceDataDownloadUrlResponseBody::ResultObject & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline DescribeDataSourceDataDownloadUrlResponseBody& setResultObject(DescribeDataSourceDataDownloadUrlResponseBody::ResultObject && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


  protected:
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Return object
    shared_ptr<DescribeDataSourceDataDownloadUrlResponseBody::ResultObject> resultObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
