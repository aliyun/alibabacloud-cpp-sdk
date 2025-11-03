// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREPOTAGSCANSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETREPOTAGSCANSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class GetRepoTagScanStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRepoTagScanStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ScanService, scanService_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetRepoTagScanStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ScanService, scanService_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetRepoTagScanStatusResponseBody() = default ;
    GetRepoTagScanStatusResponseBody(const GetRepoTagScanStatusResponseBody &) = default ;
    GetRepoTagScanStatusResponseBody(GetRepoTagScanStatusResponseBody &&) = default ;
    GetRepoTagScanStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRepoTagScanStatusResponseBody() = default ;
    GetRepoTagScanStatusResponseBody& operator=(const GetRepoTagScanStatusResponseBody &) = default ;
    GetRepoTagScanStatusResponseBody& operator=(GetRepoTagScanStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->isSuccess_ == nullptr && return this->requestId_ == nullptr && return this->scanService_ == nullptr && return this->status_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetRepoTagScanStatusResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // isSuccess Field Functions 
    bool hasIsSuccess() const { return this->isSuccess_ != nullptr;};
    void deleteIsSuccess() { this->isSuccess_ = nullptr;};
    inline bool isSuccess() const { DARABONBA_PTR_GET_DEFAULT(isSuccess_, false) };
    inline GetRepoTagScanStatusResponseBody& setIsSuccess(bool isSuccess) { DARABONBA_PTR_SET_VALUE(isSuccess_, isSuccess) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRepoTagScanStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scanService Field Functions 
    bool hasScanService() const { return this->scanService_ != nullptr;};
    void deleteScanService() { this->scanService_ = nullptr;};
    inline string scanService() const { DARABONBA_PTR_GET_DEFAULT(scanService_, "") };
    inline GetRepoTagScanStatusResponseBody& setScanService(string scanService) { DARABONBA_PTR_SET_VALUE(scanService_, scanService) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetRepoTagScanStatusResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The HTTP status code.
    std::shared_ptr<string> code_ = nullptr;
    // Indicates whether the request is successful. Valid values:
    // 
    // *   `true`: The request is successful.
    // *   `false`: The request fails.
    std::shared_ptr<bool> isSuccess_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The type of the scanning engine.
    // 
    // *   `ACR_SCAN_SERVICE`: Trivy scan engine provided by Container Registry
    // *   `SAS_SCAN_SERVICE`: Security Center scan engine
    std::shared_ptr<string> scanService_ = nullptr;
    // The scanning status of the image tag. Valid values:
    // 
    // *   `SCANNING`: The image tag is being scanned.
    // *   `COMPLETE`: The scanning of the image tag is complete.
    // *   `FAILED`: The image tag failed to be scanned.
    // *   `RETRYING`: The system is retrying to scan the image tag.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
