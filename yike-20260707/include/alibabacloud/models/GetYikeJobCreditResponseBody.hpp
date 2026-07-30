// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETYIKEJOBCREDITRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETYIKEJOBCREDITRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yike20260707
{
namespace Models
{
  class GetYikeJobCreditResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetYikeJobCreditResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreditStatus, creditStatus_);
      DARABONBA_PTR_TO_JSON(JobCreditCost, jobCreditCost_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetYikeJobCreditResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreditStatus, creditStatus_);
      DARABONBA_PTR_FROM_JSON(JobCreditCost, jobCreditCost_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetYikeJobCreditResponseBody() = default ;
    GetYikeJobCreditResponseBody(const GetYikeJobCreditResponseBody &) = default ;
    GetYikeJobCreditResponseBody(GetYikeJobCreditResponseBody &&) = default ;
    GetYikeJobCreditResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetYikeJobCreditResponseBody() = default ;
    GetYikeJobCreditResponseBody& operator=(const GetYikeJobCreditResponseBody &) = default ;
    GetYikeJobCreditResponseBody& operator=(GetYikeJobCreditResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creditStatus_ == nullptr
        && this->jobCreditCost_ == nullptr && this->jobId_ == nullptr && this->requestId_ == nullptr; };
    // creditStatus Field Functions 
    bool hasCreditStatus() const { return this->creditStatus_ != nullptr;};
    void deleteCreditStatus() { this->creditStatus_ = nullptr;};
    inline string getCreditStatus() const { DARABONBA_PTR_GET_DEFAULT(creditStatus_, "") };
    inline GetYikeJobCreditResponseBody& setCreditStatus(string creditStatus) { DARABONBA_PTR_SET_VALUE(creditStatus_, creditStatus) };


    // jobCreditCost Field Functions 
    bool hasJobCreditCost() const { return this->jobCreditCost_ != nullptr;};
    void deleteJobCreditCost() { this->jobCreditCost_ = nullptr;};
    inline double getJobCreditCost() const { DARABONBA_PTR_GET_DEFAULT(jobCreditCost_, 0.0) };
    inline GetYikeJobCreditResponseBody& setJobCreditCost(double jobCreditCost) { DARABONBA_PTR_SET_VALUE(jobCreditCost_, jobCreditCost) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline GetYikeJobCreditResponseBody& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetYikeJobCreditResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The credit deduction status.
    shared_ptr<string> creditStatus_ {};
    // The actual credits consumed.
    shared_ptr<double> jobCreditCost_ {};
    // The task ID.
    shared_ptr<string> jobId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yike20260707
#endif
