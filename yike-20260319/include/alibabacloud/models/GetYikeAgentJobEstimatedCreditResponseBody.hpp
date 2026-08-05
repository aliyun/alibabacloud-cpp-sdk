// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETYIKEAGENTJOBESTIMATEDCREDITRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETYIKEAGENTJOBESTIMATEDCREDITRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yike20260319
{
namespace Models
{
  class GetYikeAgentJobEstimatedCreditResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetYikeAgentJobEstimatedCreditResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EstimatedCreditCost, estimatedCreditCost_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetYikeAgentJobEstimatedCreditResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EstimatedCreditCost, estimatedCreditCost_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetYikeAgentJobEstimatedCreditResponseBody() = default ;
    GetYikeAgentJobEstimatedCreditResponseBody(const GetYikeAgentJobEstimatedCreditResponseBody &) = default ;
    GetYikeAgentJobEstimatedCreditResponseBody(GetYikeAgentJobEstimatedCreditResponseBody &&) = default ;
    GetYikeAgentJobEstimatedCreditResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetYikeAgentJobEstimatedCreditResponseBody() = default ;
    GetYikeAgentJobEstimatedCreditResponseBody& operator=(const GetYikeAgentJobEstimatedCreditResponseBody &) = default ;
    GetYikeAgentJobEstimatedCreditResponseBody& operator=(GetYikeAgentJobEstimatedCreditResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->estimatedCreditCost_ == nullptr
        && this->requestId_ == nullptr; };
    // estimatedCreditCost Field Functions 
    bool hasEstimatedCreditCost() const { return this->estimatedCreditCost_ != nullptr;};
    void deleteEstimatedCreditCost() { this->estimatedCreditCost_ = nullptr;};
    inline double getEstimatedCreditCost() const { DARABONBA_PTR_GET_DEFAULT(estimatedCreditCost_, 0.0) };
    inline GetYikeAgentJobEstimatedCreditResponseBody& setEstimatedCreditCost(double estimatedCreditCost) { DARABONBA_PTR_SET_VALUE(estimatedCreditCost_, estimatedCreditCost) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetYikeAgentJobEstimatedCreditResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The estimated credits to be deducted.
    shared_ptr<double> estimatedCreditCost_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yike20260319
#endif
