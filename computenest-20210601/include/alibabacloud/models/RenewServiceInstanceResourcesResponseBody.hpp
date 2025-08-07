// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RENEWSERVICEINSTANCERESOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RENEWSERVICEINSTANCERESOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RenewServiceInstanceResourcesResponseBodyFailureDetails.hpp>
#include <alibabacloud/models/RenewServiceInstanceResourcesResponseBodyRenewalResult.hpp>
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
    virtual bool empty() const override { this->failureDetails_ != nullptr
        && this->renewalResult_ != nullptr && this->requestId_ != nullptr; };
    // failureDetails Field Functions 
    bool hasFailureDetails() const { return this->failureDetails_ != nullptr;};
    void deleteFailureDetails() { this->failureDetails_ = nullptr;};
    inline const vector<RenewServiceInstanceResourcesResponseBodyFailureDetails> & failureDetails() const { DARABONBA_PTR_GET_CONST(failureDetails_, vector<RenewServiceInstanceResourcesResponseBodyFailureDetails>) };
    inline vector<RenewServiceInstanceResourcesResponseBodyFailureDetails> failureDetails() { DARABONBA_PTR_GET(failureDetails_, vector<RenewServiceInstanceResourcesResponseBodyFailureDetails>) };
    inline RenewServiceInstanceResourcesResponseBody& setFailureDetails(const vector<RenewServiceInstanceResourcesResponseBodyFailureDetails> & failureDetails) { DARABONBA_PTR_SET_VALUE(failureDetails_, failureDetails) };
    inline RenewServiceInstanceResourcesResponseBody& setFailureDetails(vector<RenewServiceInstanceResourcesResponseBodyFailureDetails> && failureDetails) { DARABONBA_PTR_SET_RVALUE(failureDetails_, failureDetails) };


    // renewalResult Field Functions 
    bool hasRenewalResult() const { return this->renewalResult_ != nullptr;};
    void deleteRenewalResult() { this->renewalResult_ = nullptr;};
    inline const RenewServiceInstanceResourcesResponseBodyRenewalResult & renewalResult() const { DARABONBA_PTR_GET_CONST(renewalResult_, RenewServiceInstanceResourcesResponseBodyRenewalResult) };
    inline RenewServiceInstanceResourcesResponseBodyRenewalResult renewalResult() { DARABONBA_PTR_GET(renewalResult_, RenewServiceInstanceResourcesResponseBodyRenewalResult) };
    inline RenewServiceInstanceResourcesResponseBody& setRenewalResult(const RenewServiceInstanceResourcesResponseBodyRenewalResult & renewalResult) { DARABONBA_PTR_SET_VALUE(renewalResult_, renewalResult) };
    inline RenewServiceInstanceResourcesResponseBody& setRenewalResult(RenewServiceInstanceResourcesResponseBodyRenewalResult && renewalResult) { DARABONBA_PTR_SET_RVALUE(renewalResult_, renewalResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RenewServiceInstanceResourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Details of failed renewals.
    std::shared_ptr<vector<RenewServiceInstanceResourcesResponseBodyFailureDetails>> failureDetails_ = nullptr;
    // Renewal result.
    std::shared_ptr<RenewServiceInstanceResourcesResponseBodyRenewalResult> renewalResult_ = nullptr;
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
