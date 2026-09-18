// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSCANNERTASKHITDATAURLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSCANNERTASKHITDATAURLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AISC20260101
{
namespace Models
{
  class GetScannerTaskHitDataUrlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetScannerTaskHitDataUrlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ScannerTaskId, scannerTaskId_);
    };
    friend void from_json(const Darabonba::Json& j, GetScannerTaskHitDataUrlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ScannerTaskId, scannerTaskId_);
    };
    GetScannerTaskHitDataUrlRequest() = default ;
    GetScannerTaskHitDataUrlRequest(const GetScannerTaskHitDataUrlRequest &) = default ;
    GetScannerTaskHitDataUrlRequest(GetScannerTaskHitDataUrlRequest &&) = default ;
    GetScannerTaskHitDataUrlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetScannerTaskHitDataUrlRequest() = default ;
    GetScannerTaskHitDataUrlRequest& operator=(const GetScannerTaskHitDataUrlRequest &) = default ;
    GetScannerTaskHitDataUrlRequest& operator=(GetScannerTaskHitDataUrlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->scannerTaskId_ == nullptr; };
    // scannerTaskId Field Functions 
    bool hasScannerTaskId() const { return this->scannerTaskId_ != nullptr;};
    void deleteScannerTaskId() { this->scannerTaskId_ = nullptr;};
    inline string getScannerTaskId() const { DARABONBA_PTR_GET_DEFAULT(scannerTaskId_, "") };
    inline GetScannerTaskHitDataUrlRequest& setScannerTaskId(string scannerTaskId) { DARABONBA_PTR_SET_VALUE(scannerTaskId_, scannerTaskId) };


  protected:
    // The unique identifier of the scan task. This is the TaskId returned by CreateTargetScanTask or the ScannerTaskId returned by ListScanTasksByTarget. This parameter is registered as optional but is required in practice. An empty value returns HTTP status code 400. If the task does not exist or belongs to another tenant, HTTP status code 400 is returned uniformly to avoid exposing whether the resource exists.
    shared_ptr<string> scannerTaskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AISC20260101
#endif
