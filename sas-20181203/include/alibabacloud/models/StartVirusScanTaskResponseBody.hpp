// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTVIRUSSCANTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_STARTVIRUSSCANTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class StartVirusScanTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartVirusScanTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ScanTaskId, scanTaskId_);
    };
    friend void from_json(const Darabonba::Json& j, StartVirusScanTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ScanTaskId, scanTaskId_);
    };
    StartVirusScanTaskResponseBody() = default ;
    StartVirusScanTaskResponseBody(const StartVirusScanTaskResponseBody &) = default ;
    StartVirusScanTaskResponseBody(StartVirusScanTaskResponseBody &&) = default ;
    StartVirusScanTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartVirusScanTaskResponseBody() = default ;
    StartVirusScanTaskResponseBody& operator=(const StartVirusScanTaskResponseBody &) = default ;
    StartVirusScanTaskResponseBody& operator=(StartVirusScanTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->scanTaskId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline StartVirusScanTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scanTaskId Field Functions 
    bool hasScanTaskId() const { return this->scanTaskId_ != nullptr;};
    void deleteScanTaskId() { this->scanTaskId_ = nullptr;};
    inline int64_t getScanTaskId() const { DARABONBA_PTR_GET_DEFAULT(scanTaskId_, 0L) };
    inline StartVirusScanTaskResponseBody& setScanTaskId(int64_t scanTaskId) { DARABONBA_PTR_SET_VALUE(scanTaskId_, scanTaskId) };


  protected:
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The ID of the virus scan task.
    shared_ptr<int64_t> scanTaskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
