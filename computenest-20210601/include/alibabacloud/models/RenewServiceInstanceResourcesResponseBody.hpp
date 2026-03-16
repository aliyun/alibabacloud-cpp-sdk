// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RENEWSERVICEINSTANCERESOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RENEWSERVICEINSTANCERESOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class RenewServiceInstanceResourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RenewServiceInstanceResourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FailureDetails, failureDetails_);
      DARABONBA_PTR_TO_JSON(RenewalResult, renewalResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RenewServiceInstanceResourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FailureDetails, failureDetails_);
      DARABONBA_PTR_FROM_JSON(RenewalResult, renewalResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    RenewServiceInstanceResourcesResponseBody() = default ;
    RenewServiceInstanceResourcesResponseBody(const RenewServiceInstanceResourcesResponseBody &) = default ;
    RenewServiceInstanceResourcesResponseBody(RenewServiceInstanceResourcesResponseBody &&) = default ;
    RenewServiceInstanceResourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RenewServiceInstanceResourcesResponseBody() = default ;
    RenewServiceInstanceResourcesResponseBody& operator=(const RenewServiceInstanceResourcesResponseBody &) = default ;
    RenewServiceInstanceResourcesResponseBody& operator=(RenewServiceInstanceResourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RenewalResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RenewalResult& obj) { 
        DARABONBA_PTR_TO_JSON(Failed, failed_);
        DARABONBA_PTR_TO_JSON(Succeeded, succeeded_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, RenewalResult& obj) { 
        DARABONBA_PTR_FROM_JSON(Failed, failed_);
        DARABONBA_PTR_FROM_JSON(Succeeded, succeeded_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      RenewalResult() = default ;
      RenewalResult(const RenewalResult &) = default ;
      RenewalResult(RenewalResult &&) = default ;
      RenewalResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RenewalResult() = default ;
      RenewalResult& operator=(const RenewalResult &) = default ;
      RenewalResult& operator=(RenewalResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->failed_ == nullptr
        && this->succeeded_ == nullptr && this->totalCount_ == nullptr; };
      // failed Field Functions 
      bool hasFailed() const { return this->failed_ != nullptr;};
      void deleteFailed() { this->failed_ = nullptr;};
      inline int32_t getFailed() const { DARABONBA_PTR_GET_DEFAULT(failed_, 0) };
      inline RenewalResult& setFailed(int32_t failed) { DARABONBA_PTR_SET_VALUE(failed_, failed) };


      // succeeded Field Functions 
      bool hasSucceeded() const { return this->succeeded_ != nullptr;};
      void deleteSucceeded() { this->succeeded_ = nullptr;};
      inline int32_t getSucceeded() const { DARABONBA_PTR_GET_DEFAULT(succeeded_, 0) };
      inline RenewalResult& setSucceeded(int32_t succeeded) { DARABONBA_PTR_SET_VALUE(succeeded_, succeeded) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline RenewalResult& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // Number of failed renewals.
      shared_ptr<int32_t> failed_ {};
      // Number of successfully renewed resources.
      shared_ptr<int32_t> succeeded_ {};
      // Number of renewed resources.
      shared_ptr<int32_t> totalCount_ {};
    };

    class FailureDetails : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FailureDetails& obj) { 
        DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_TO_JSON(ResourceArn, resourceArn_);
      };
      friend void from_json(const Darabonba::Json& j, FailureDetails& obj) { 
        DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_FROM_JSON(ResourceArn, resourceArn_);
      };
      FailureDetails() = default ;
      FailureDetails(const FailureDetails &) = default ;
      FailureDetails(FailureDetails &&) = default ;
      FailureDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FailureDetails() = default ;
      FailureDetails& operator=(const FailureDetails &) = default ;
      FailureDetails& operator=(FailureDetails &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->resourceArn_ == nullptr; };
      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
      inline FailureDetails& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline FailureDetails& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      // resourceArn Field Functions 
      bool hasResourceArn() const { return this->resourceArn_ != nullptr;};
      void deleteResourceArn() { this->resourceArn_ = nullptr;};
      inline string getResourceArn() const { DARABONBA_PTR_GET_DEFAULT(resourceArn_, "") };
      inline FailureDetails& setResourceArn(string resourceArn) { DARABONBA_PTR_SET_VALUE(resourceArn_, resourceArn) };


    protected:
      // Error code.
      shared_ptr<string> errorCode_ {};
      // Error message.
      shared_ptr<string> errorMessage_ {};
      // Resource ARN (Aliyun Resource Name).
      shared_ptr<string> resourceArn_ {};
    };

    virtual bool empty() const override { return this->failureDetails_ == nullptr
        && this->renewalResult_ == nullptr && this->requestId_ == nullptr; };
    // failureDetails Field Functions 
    bool hasFailureDetails() const { return this->failureDetails_ != nullptr;};
    void deleteFailureDetails() { this->failureDetails_ = nullptr;};
    inline const vector<RenewServiceInstanceResourcesResponseBody::FailureDetails> & getFailureDetails() const { DARABONBA_PTR_GET_CONST(failureDetails_, vector<RenewServiceInstanceResourcesResponseBody::FailureDetails>) };
    inline vector<RenewServiceInstanceResourcesResponseBody::FailureDetails> getFailureDetails() { DARABONBA_PTR_GET(failureDetails_, vector<RenewServiceInstanceResourcesResponseBody::FailureDetails>) };
    inline RenewServiceInstanceResourcesResponseBody& setFailureDetails(const vector<RenewServiceInstanceResourcesResponseBody::FailureDetails> & failureDetails) { DARABONBA_PTR_SET_VALUE(failureDetails_, failureDetails) };
    inline RenewServiceInstanceResourcesResponseBody& setFailureDetails(vector<RenewServiceInstanceResourcesResponseBody::FailureDetails> && failureDetails) { DARABONBA_PTR_SET_RVALUE(failureDetails_, failureDetails) };


    // renewalResult Field Functions 
    bool hasRenewalResult() const { return this->renewalResult_ != nullptr;};
    void deleteRenewalResult() { this->renewalResult_ = nullptr;};
    inline const RenewServiceInstanceResourcesResponseBody::RenewalResult & getRenewalResult() const { DARABONBA_PTR_GET_CONST(renewalResult_, RenewServiceInstanceResourcesResponseBody::RenewalResult) };
    inline RenewServiceInstanceResourcesResponseBody::RenewalResult getRenewalResult() { DARABONBA_PTR_GET(renewalResult_, RenewServiceInstanceResourcesResponseBody::RenewalResult) };
    inline RenewServiceInstanceResourcesResponseBody& setRenewalResult(const RenewServiceInstanceResourcesResponseBody::RenewalResult & renewalResult) { DARABONBA_PTR_SET_VALUE(renewalResult_, renewalResult) };
    inline RenewServiceInstanceResourcesResponseBody& setRenewalResult(RenewServiceInstanceResourcesResponseBody::RenewalResult && renewalResult) { DARABONBA_PTR_SET_RVALUE(renewalResult_, renewalResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RenewServiceInstanceResourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Details of failed renewals.
    shared_ptr<vector<RenewServiceInstanceResourcesResponseBody::FailureDetails>> failureDetails_ {};
    // Renewal result.
    shared_ptr<RenewServiceInstanceResourcesResponseBody::RenewalResult> renewalResult_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
