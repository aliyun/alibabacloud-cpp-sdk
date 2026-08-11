// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAIAPPSCANSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAIAPPSCANSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class UpdateAiAppScanStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAiAppScanStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FailedAppIds, failedAppIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SuccessAppIds, successAppIds_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAiAppScanStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FailedAppIds, failedAppIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SuccessAppIds, successAppIds_);
    };
    UpdateAiAppScanStatusResponseBody() = default ;
    UpdateAiAppScanStatusResponseBody(const UpdateAiAppScanStatusResponseBody &) = default ;
    UpdateAiAppScanStatusResponseBody(UpdateAiAppScanStatusResponseBody &&) = default ;
    UpdateAiAppScanStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAiAppScanStatusResponseBody() = default ;
    UpdateAiAppScanStatusResponseBody& operator=(const UpdateAiAppScanStatusResponseBody &) = default ;
    UpdateAiAppScanStatusResponseBody& operator=(UpdateAiAppScanStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->failedAppIds_ == nullptr
        && this->requestId_ == nullptr && this->status_ == nullptr && this->successAppIds_ == nullptr; };
    // failedAppIds Field Functions 
    bool hasFailedAppIds() const { return this->failedAppIds_ != nullptr;};
    void deleteFailedAppIds() { this->failedAppIds_ = nullptr;};
    inline const vector<string> & getFailedAppIds() const { DARABONBA_PTR_GET_CONST(failedAppIds_, vector<string>) };
    inline vector<string> getFailedAppIds() { DARABONBA_PTR_GET(failedAppIds_, vector<string>) };
    inline UpdateAiAppScanStatusResponseBody& setFailedAppIds(const vector<string> & failedAppIds) { DARABONBA_PTR_SET_VALUE(failedAppIds_, failedAppIds) };
    inline UpdateAiAppScanStatusResponseBody& setFailedAppIds(vector<string> && failedAppIds) { DARABONBA_PTR_SET_RVALUE(failedAppIds_, failedAppIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateAiAppScanStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpdateAiAppScanStatusResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // successAppIds Field Functions 
    bool hasSuccessAppIds() const { return this->successAppIds_ != nullptr;};
    void deleteSuccessAppIds() { this->successAppIds_ = nullptr;};
    inline const vector<string> & getSuccessAppIds() const { DARABONBA_PTR_GET_CONST(successAppIds_, vector<string>) };
    inline vector<string> getSuccessAppIds() { DARABONBA_PTR_GET(successAppIds_, vector<string>) };
    inline UpdateAiAppScanStatusResponseBody& setSuccessAppIds(const vector<string> & successAppIds) { DARABONBA_PTR_SET_VALUE(successAppIds_, successAppIds) };
    inline UpdateAiAppScanStatusResponseBody& setSuccessAppIds(vector<string> && successAppIds) { DARABONBA_PTR_SET_RVALUE(successAppIds_, successAppIds) };


  protected:
    // The list of application IDs that failed.
    shared_ptr<vector<string>> failedAppIds_ {};
    // The ID assigned by the backend to uniquely identify a request. You can use this ID to troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The status. Valid values:
    // 
    // - SUCCESS: Succeeded.
    // 
    // - PARTIAL_SUCCESS: Partially succeeded.
    // 
    // - FAILED: Failed.
    shared_ptr<string> status_ {};
    // The list of application IDs that succeeded.
    shared_ptr<vector<string>> successAppIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
