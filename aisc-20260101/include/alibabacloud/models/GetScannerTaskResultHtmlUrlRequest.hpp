// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSCANNERTASKRESULTHTMLURLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSCANNERTASKRESULTHTMLURLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AISC20260101
{
namespace Models
{
  class GetScannerTaskResultHtmlUrlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetScannerTaskResultHtmlUrlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ScannerTaskId, scannerTaskId_);
    };
    friend void from_json(const Darabonba::Json& j, GetScannerTaskResultHtmlUrlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ScannerTaskId, scannerTaskId_);
    };
    GetScannerTaskResultHtmlUrlRequest() = default ;
    GetScannerTaskResultHtmlUrlRequest(const GetScannerTaskResultHtmlUrlRequest &) = default ;
    GetScannerTaskResultHtmlUrlRequest(GetScannerTaskResultHtmlUrlRequest &&) = default ;
    GetScannerTaskResultHtmlUrlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetScannerTaskResultHtmlUrlRequest() = default ;
    GetScannerTaskResultHtmlUrlRequest& operator=(const GetScannerTaskResultHtmlUrlRequest &) = default ;
    GetScannerTaskResultHtmlUrlRequest& operator=(GetScannerTaskResultHtmlUrlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->scannerTaskId_ == nullptr; };
    // scannerTaskId Field Functions 
    bool hasScannerTaskId() const { return this->scannerTaskId_ != nullptr;};
    void deleteScannerTaskId() { this->scannerTaskId_ = nullptr;};
    inline string getScannerTaskId() const { DARABONBA_PTR_GET_DEFAULT(scannerTaskId_, "") };
    inline GetScannerTaskResultHtmlUrlRequest& setScannerTaskId(string scannerTaskId) { DARABONBA_PTR_SET_VALUE(scannerTaskId_, scannerTaskId) };


  protected:
    // The unique identifier of the scan task. This is the TaskId returned by CreateTargetScanTask or the ScannerTaskId returned by ListScanTasksByTarget. If the task does not exist or belongs to another tenant, a 400 error is returned to avoid exposing whether the resource exists.
    // 
    // This parameter is required.
    shared_ptr<string> scannerTaskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AISC20260101
#endif
