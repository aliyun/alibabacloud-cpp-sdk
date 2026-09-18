// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSCANNERTASKHITDATAURLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSCANNERTASKHITDATAURLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AISC20260101
{
namespace Models
{
  class GetScannerTaskHitDataUrlResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetScannerTaskHitDataUrlResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetScannerTaskHitDataUrlResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetScannerTaskHitDataUrlResponseBody() = default ;
    GetScannerTaskHitDataUrlResponseBody(const GetScannerTaskHitDataUrlResponseBody &) = default ;
    GetScannerTaskHitDataUrlResponseBody(GetScannerTaskHitDataUrlResponseBody &&) = default ;
    GetScannerTaskHitDataUrlResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetScannerTaskHitDataUrlResponseBody() = default ;
    GetScannerTaskHitDataUrlResponseBody& operator=(const GetScannerTaskHitDataUrlResponseBody &) = default ;
    GetScannerTaskHitDataUrlResponseBody& operator=(GetScannerTaskHitDataUrlResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ScannerTaskHitDataDownloadUrl, scannerTaskHitDataDownloadUrl_);
        DARABONBA_PTR_TO_JSON(ScannerTaskId, scannerTaskId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ScannerTaskHitDataDownloadUrl, scannerTaskHitDataDownloadUrl_);
        DARABONBA_PTR_FROM_JSON(ScannerTaskId, scannerTaskId_);
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
      virtual bool empty() const override { return this->scannerTaskHitDataDownloadUrl_ == nullptr
        && this->scannerTaskId_ == nullptr; };
      // scannerTaskHitDataDownloadUrl Field Functions 
      bool hasScannerTaskHitDataDownloadUrl() const { return this->scannerTaskHitDataDownloadUrl_ != nullptr;};
      void deleteScannerTaskHitDataDownloadUrl() { this->scannerTaskHitDataDownloadUrl_ = nullptr;};
      inline string getScannerTaskHitDataDownloadUrl() const { DARABONBA_PTR_GET_DEFAULT(scannerTaskHitDataDownloadUrl_, "") };
      inline Data& setScannerTaskHitDataDownloadUrl(string scannerTaskHitDataDownloadUrl) { DARABONBA_PTR_SET_VALUE(scannerTaskHitDataDownloadUrl_, scannerTaskHitDataDownloadUrl) };


      // scannerTaskId Field Functions 
      bool hasScannerTaskId() const { return this->scannerTaskId_ != nullptr;};
      void deleteScannerTaskId() { this->scannerTaskId_ = nullptr;};
      inline string getScannerTaskId() const { DARABONBA_PTR_GET_DEFAULT(scannerTaskId_, "") };
      inline Data& setScannerTaskId(string scannerTaskId) { DARABONBA_PTR_SET_VALUE(scannerTaskId_, scannerTaskId) };


    protected:
      // The temporary download URL for the attack hit data (hits.csv). The URL is valid for 2 hours. After the URL expires, call this operation again to obtain a new URL. If the task is an existing task or the agent execution mode does not produce hit data, this parameter is an empty string. The actual value is a signed temporary URL of Object Storage Service (OSS) that contains signature parameters.
      shared_ptr<string> scannerTaskHitDataDownloadUrl_ {};
      // The scan task identifier echoed from the request.
      shared_ptr<string> scannerTaskId_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetScannerTaskHitDataUrlResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetScannerTaskHitDataUrlResponseBody::Data) };
    inline GetScannerTaskHitDataUrlResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetScannerTaskHitDataUrlResponseBody::Data) };
    inline GetScannerTaskHitDataUrlResponseBody& setData(const GetScannerTaskHitDataUrlResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetScannerTaskHitDataUrlResponseBody& setData(GetScannerTaskHitDataUrlResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetScannerTaskHitDataUrlResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The query result, which contains the task identifier and the temporary download URL for the hit data.
    shared_ptr<GetScannerTaskHitDataUrlResponseBody::Data> data_ {};
    // The request ID. You can use this ID for troubleshooting and log tracing.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AISC20260101
#endif
