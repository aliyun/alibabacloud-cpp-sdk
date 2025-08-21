// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISASSOCIATERENDERINGPROJECTINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DISASSOCIATERENDERINGPROJECTINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DisassociateRenderingProjectInstancesResponseBodyFailedInstances.hpp>
#include <alibabacloud/models/DisassociateRenderingProjectInstancesResponseBodySuccessInstances.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DisassociateRenderingProjectInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisassociateRenderingProjectInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FailedInstanceCount, failedInstanceCount_);
      DARABONBA_PTR_TO_JSON(FailedInstances, failedInstances_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SuccessInstanceCount, successInstanceCount_);
      DARABONBA_PTR_TO_JSON(SuccessInstances, successInstances_);
    };
    friend void from_json(const Darabonba::Json& j, DisassociateRenderingProjectInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FailedInstanceCount, failedInstanceCount_);
      DARABONBA_PTR_FROM_JSON(FailedInstances, failedInstances_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SuccessInstanceCount, successInstanceCount_);
      DARABONBA_PTR_FROM_JSON(SuccessInstances, successInstances_);
    };
    DisassociateRenderingProjectInstancesResponseBody() = default ;
    DisassociateRenderingProjectInstancesResponseBody(const DisassociateRenderingProjectInstancesResponseBody &) = default ;
    DisassociateRenderingProjectInstancesResponseBody(DisassociateRenderingProjectInstancesResponseBody &&) = default ;
    DisassociateRenderingProjectInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisassociateRenderingProjectInstancesResponseBody() = default ;
    DisassociateRenderingProjectInstancesResponseBody& operator=(const DisassociateRenderingProjectInstancesResponseBody &) = default ;
    DisassociateRenderingProjectInstancesResponseBody& operator=(DisassociateRenderingProjectInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->failedInstanceCount_ != nullptr
        && this->failedInstances_ != nullptr && this->requestId_ != nullptr && this->successInstanceCount_ != nullptr && this->successInstances_ != nullptr; };
    // failedInstanceCount Field Functions 
    bool hasFailedInstanceCount() const { return this->failedInstanceCount_ != nullptr;};
    void deleteFailedInstanceCount() { this->failedInstanceCount_ = nullptr;};
    inline string failedInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(failedInstanceCount_, "") };
    inline DisassociateRenderingProjectInstancesResponseBody& setFailedInstanceCount(string failedInstanceCount) { DARABONBA_PTR_SET_VALUE(failedInstanceCount_, failedInstanceCount) };


    // failedInstances Field Functions 
    bool hasFailedInstances() const { return this->failedInstances_ != nullptr;};
    void deleteFailedInstances() { this->failedInstances_ = nullptr;};
    inline const vector<DisassociateRenderingProjectInstancesResponseBodyFailedInstances> & failedInstances() const { DARABONBA_PTR_GET_CONST(failedInstances_, vector<DisassociateRenderingProjectInstancesResponseBodyFailedInstances>) };
    inline vector<DisassociateRenderingProjectInstancesResponseBodyFailedInstances> failedInstances() { DARABONBA_PTR_GET(failedInstances_, vector<DisassociateRenderingProjectInstancesResponseBodyFailedInstances>) };
    inline DisassociateRenderingProjectInstancesResponseBody& setFailedInstances(const vector<DisassociateRenderingProjectInstancesResponseBodyFailedInstances> & failedInstances) { DARABONBA_PTR_SET_VALUE(failedInstances_, failedInstances) };
    inline DisassociateRenderingProjectInstancesResponseBody& setFailedInstances(vector<DisassociateRenderingProjectInstancesResponseBodyFailedInstances> && failedInstances) { DARABONBA_PTR_SET_RVALUE(failedInstances_, failedInstances) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DisassociateRenderingProjectInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // successInstanceCount Field Functions 
    bool hasSuccessInstanceCount() const { return this->successInstanceCount_ != nullptr;};
    void deleteSuccessInstanceCount() { this->successInstanceCount_ = nullptr;};
    inline string successInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(successInstanceCount_, "") };
    inline DisassociateRenderingProjectInstancesResponseBody& setSuccessInstanceCount(string successInstanceCount) { DARABONBA_PTR_SET_VALUE(successInstanceCount_, successInstanceCount) };


    // successInstances Field Functions 
    bool hasSuccessInstances() const { return this->successInstances_ != nullptr;};
    void deleteSuccessInstances() { this->successInstances_ = nullptr;};
    inline const vector<DisassociateRenderingProjectInstancesResponseBodySuccessInstances> & successInstances() const { DARABONBA_PTR_GET_CONST(successInstances_, vector<DisassociateRenderingProjectInstancesResponseBodySuccessInstances>) };
    inline vector<DisassociateRenderingProjectInstancesResponseBodySuccessInstances> successInstances() { DARABONBA_PTR_GET(successInstances_, vector<DisassociateRenderingProjectInstancesResponseBodySuccessInstances>) };
    inline DisassociateRenderingProjectInstancesResponseBody& setSuccessInstances(const vector<DisassociateRenderingProjectInstancesResponseBodySuccessInstances> & successInstances) { DARABONBA_PTR_SET_VALUE(successInstances_, successInstances) };
    inline DisassociateRenderingProjectInstancesResponseBody& setSuccessInstances(vector<DisassociateRenderingProjectInstancesResponseBodySuccessInstances> && successInstances) { DARABONBA_PTR_SET_RVALUE(successInstances_, successInstances) };


  protected:
    std::shared_ptr<string> failedInstanceCount_ = nullptr;
    std::shared_ptr<vector<DisassociateRenderingProjectInstancesResponseBodyFailedInstances>> failedInstances_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> successInstanceCount_ = nullptr;
    std::shared_ptr<vector<DisassociateRenderingProjectInstancesResponseBodySuccessInstances>> successInstances_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
