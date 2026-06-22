// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCANTASKPROGRESSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCANTASKPROGRESSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeScanTaskProgressResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScanTaskProgressResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ScanTaskProgress, scanTaskProgress_);
      DARABONBA_PTR_TO_JSON(TargetInfo, targetInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScanTaskProgressResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ScanTaskProgress, scanTaskProgress_);
      DARABONBA_PTR_FROM_JSON(TargetInfo, targetInfo_);
    };
    DescribeScanTaskProgressResponseBody() = default ;
    DescribeScanTaskProgressResponseBody(const DescribeScanTaskProgressResponseBody &) = default ;
    DescribeScanTaskProgressResponseBody(DescribeScanTaskProgressResponseBody &&) = default ;
    DescribeScanTaskProgressResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScanTaskProgressResponseBody() = default ;
    DescribeScanTaskProgressResponseBody& operator=(const DescribeScanTaskProgressResponseBody &) = default ;
    DescribeScanTaskProgressResponseBody& operator=(DescribeScanTaskProgressResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->scanTaskProgress_ == nullptr && this->targetInfo_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeScanTaskProgressResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scanTaskProgress Field Functions 
    bool hasScanTaskProgress() const { return this->scanTaskProgress_ != nullptr;};
    void deleteScanTaskProgress() { this->scanTaskProgress_ = nullptr;};
    inline string getScanTaskProgress() const { DARABONBA_PTR_GET_DEFAULT(scanTaskProgress_, "") };
    inline DescribeScanTaskProgressResponseBody& setScanTaskProgress(string scanTaskProgress) { DARABONBA_PTR_SET_VALUE(scanTaskProgress_, scanTaskProgress) };


    // targetInfo Field Functions 
    bool hasTargetInfo() const { return this->targetInfo_ != nullptr;};
    void deleteTargetInfo() { this->targetInfo_ = nullptr;};
    inline string getTargetInfo() const { DARABONBA_PTR_GET_DEFAULT(targetInfo_, "") };
    inline DescribeScanTaskProgressResponseBody& setTargetInfo(string targetInfo) { DARABONBA_PTR_SET_VALUE(targetInfo_, targetInfo) };


  protected:
    // The request ID. Alibaba Cloud generates a unique ID for each request. You can use the ID to troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The progress of the virus scan task. Valid values:
    // - **init**: The scan task is being initialized.
    // - **Processing**: The scan task is in progress.
    // - **Success**: The scan task is complete.
    // - **Failed**: The scan task failed.
    shared_ptr<string> scanTaskProgress_ {};
    // The asset information scanned by the virus scan node. This parameter is a string converted from a JSON array in character format. The following fields are included:
    // - **type**: The Asset Type on which the virus scan is executed. Valid values:
    //     - **groupId**: server group.
    //     - **uuid**: server.
    // - **name**: The name of the server group or server.
    // - **target**: The asset on which the virus scan is executed. The following describes the values of this field:
    //     - If **type** is set to **groupId**, this field specifies the server group ID.
    //     - If **type** is set to **uuid**, this field specifies the UUID of the server.
    shared_ptr<string> targetInfo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
