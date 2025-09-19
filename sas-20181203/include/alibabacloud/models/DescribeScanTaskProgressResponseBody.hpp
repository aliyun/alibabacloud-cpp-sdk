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
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->scanTaskProgress_ != nullptr && this->targetInfo_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeScanTaskProgressResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scanTaskProgress Field Functions 
    bool hasScanTaskProgress() const { return this->scanTaskProgress_ != nullptr;};
    void deleteScanTaskProgress() { this->scanTaskProgress_ = nullptr;};
    inline string scanTaskProgress() const { DARABONBA_PTR_GET_DEFAULT(scanTaskProgress_, "") };
    inline DescribeScanTaskProgressResponseBody& setScanTaskProgress(string scanTaskProgress) { DARABONBA_PTR_SET_VALUE(scanTaskProgress_, scanTaskProgress) };


    // targetInfo Field Functions 
    bool hasTargetInfo() const { return this->targetInfo_ != nullptr;};
    void deleteTargetInfo() { this->targetInfo_ = nullptr;};
    inline string targetInfo() const { DARABONBA_PTR_GET_DEFAULT(targetInfo_, "") };
    inline DescribeScanTaskProgressResponseBody& setTargetInfo(string targetInfo) { DARABONBA_PTR_SET_VALUE(targetInfo_, targetInfo) };


  protected:
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The progress of the virus scan task. Valid values:
    // 
    // *   **init**: The task is being initialized.
    // *   **Processing**: The task is running.
    // *   **Success**: The task is complete.
    // *   **Failed**: The task fails.
    std::shared_ptr<string> scanTaskProgress_ = nullptr;
    // The information about the asset on which the virus scan task runs. The value is a string that consists of JSON arrays. Each element in a JSON array is a JSON struct that contains the following fields:
    // 
    // *   **type**: the type of the asset on which you want to perform a virus scan task. Valid values:
    // 
    //     *   **groupId**: server group.
    //     *   **uuid**: server.
    // 
    // *   **name**: the name of the server group or server.
    // 
    // *   **target**: the asset on which the virus scan task runs. The value of this field varies based on the value of the type field.
    // 
    //     *   If the **type** field is set to **groupId**, the value of this field is the ID of the server group.
    //     *   If the **type** field is set to **uuid**, the value of this field is the universally unique identifier (UUID) of the server.
    std::shared_ptr<string> targetInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
