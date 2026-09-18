// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSCANNERTASKRESULTHTMLURLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSCANNERTASKRESULTHTMLURLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AISC20260101
{
namespace Models
{
  class GetScannerTaskResultHtmlUrlResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetScannerTaskResultHtmlUrlResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetScannerTaskResultHtmlUrlResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetScannerTaskResultHtmlUrlResponseBody() = default ;
    GetScannerTaskResultHtmlUrlResponseBody(const GetScannerTaskResultHtmlUrlResponseBody &) = default ;
    GetScannerTaskResultHtmlUrlResponseBody(GetScannerTaskResultHtmlUrlResponseBody &&) = default ;
    GetScannerTaskResultHtmlUrlResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetScannerTaskResultHtmlUrlResponseBody() = default ;
    GetScannerTaskResultHtmlUrlResponseBody& operator=(const GetScannerTaskResultHtmlUrlResponseBody &) = default ;
    GetScannerTaskResultHtmlUrlResponseBody& operator=(GetScannerTaskResultHtmlUrlResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ScannerTaskResultHtmlDownloadUrl, scannerTaskResultHtmlDownloadUrl_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ScannerTaskResultHtmlDownloadUrl, scannerTaskResultHtmlDownloadUrl_);
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
      virtual bool empty() const override { return this->scannerTaskResultHtmlDownloadUrl_ == nullptr; };
      // scannerTaskResultHtmlDownloadUrl Field Functions 
      bool hasScannerTaskResultHtmlDownloadUrl() const { return this->scannerTaskResultHtmlDownloadUrl_ != nullptr;};
      void deleteScannerTaskResultHtmlDownloadUrl() { this->scannerTaskResultHtmlDownloadUrl_ = nullptr;};
      inline string getScannerTaskResultHtmlDownloadUrl() const { DARABONBA_PTR_GET_DEFAULT(scannerTaskResultHtmlDownloadUrl_, "") };
      inline Data& setScannerTaskResultHtmlDownloadUrl(string scannerTaskResultHtmlDownloadUrl) { DARABONBA_PTR_SET_VALUE(scannerTaskResultHtmlDownloadUrl_, scannerTaskResultHtmlDownloadUrl) };


    protected:
      // The temporary download URL for the HTML result report. The URL is valid for 2 hours. After the URL expires, call this operation again to obtain a new URL. If the report has not been generated, this value is an empty string. The actual value is a signed temporary URL from object storage that includes signature parameters.
      shared_ptr<string> scannerTaskResultHtmlDownloadUrl_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetScannerTaskResultHtmlUrlResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetScannerTaskResultHtmlUrlResponseBody::Data) };
    inline GetScannerTaskResultHtmlUrlResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetScannerTaskResultHtmlUrlResponseBody::Data) };
    inline GetScannerTaskResultHtmlUrlResponseBody& setData(const GetScannerTaskResultHtmlUrlResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetScannerTaskResultHtmlUrlResponseBody& setData(GetScannerTaskResultHtmlUrlResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetScannerTaskResultHtmlUrlResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The query result, which contains the temporary download URL for the HTML result report.
    shared_ptr<GetScannerTaskResultHtmlUrlResponseBody::Data> data_ {};
    // The request ID, which is used for troubleshooting and log tracing.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AISC20260101
#endif
