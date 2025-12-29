// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOWNLOADVERIFYRECORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DOWNLOADVERIFYRECORDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DownloadVerifyRecordsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DownloadVerifyRecordsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultObject, resultObject_);
    };
    friend void from_json(const Darabonba::Json& j, DownloadVerifyRecordsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultObject, resultObject_);
    };
    DownloadVerifyRecordsResponseBody() = default ;
    DownloadVerifyRecordsResponseBody(const DownloadVerifyRecordsResponseBody &) = default ;
    DownloadVerifyRecordsResponseBody(DownloadVerifyRecordsResponseBody &&) = default ;
    DownloadVerifyRecordsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DownloadVerifyRecordsResponseBody() = default ;
    DownloadVerifyRecordsResponseBody& operator=(const DownloadVerifyRecordsResponseBody &) = default ;
    DownloadVerifyRecordsResponseBody& operator=(DownloadVerifyRecordsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resultObject_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DownloadVerifyRecordsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline string getResultObject() const { DARABONBA_PTR_GET_DEFAULT(resultObject_, "") };
    inline DownloadVerifyRecordsResponseBody& setResultObject(string resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };


  protected:
    // ID of the request
    shared_ptr<string> requestId_ {};
    // OSS link for file download.
    shared_ptr<string> resultObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
