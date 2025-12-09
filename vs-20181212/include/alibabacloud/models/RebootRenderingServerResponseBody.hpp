// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REBOOTRENDERINGSERVERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_REBOOTRENDERINGSERVERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RebootRenderingServerResponseBodyFailedInstances.hpp>
#include <alibabacloud/models/RebootRenderingServerResponseBodySuccessInstances.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class RebootRenderingServerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RebootRenderingServerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FailedInstanceCount, failedInstanceCount_);
      DARABONBA_PTR_TO_JSON(FailedInstances, failedInstances_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SuccessInstanceCount, successInstanceCount_);
      DARABONBA_PTR_TO_JSON(SuccessInstances, successInstances_);
    };
    friend void from_json(const Darabonba::Json& j, RebootRenderingServerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FailedInstanceCount, failedInstanceCount_);
      DARABONBA_PTR_FROM_JSON(FailedInstances, failedInstances_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SuccessInstanceCount, successInstanceCount_);
      DARABONBA_PTR_FROM_JSON(SuccessInstances, successInstances_);
    };
    RebootRenderingServerResponseBody() = default ;
    RebootRenderingServerResponseBody(const RebootRenderingServerResponseBody &) = default ;
    RebootRenderingServerResponseBody(RebootRenderingServerResponseBody &&) = default ;
    RebootRenderingServerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RebootRenderingServerResponseBody() = default ;
    RebootRenderingServerResponseBody& operator=(const RebootRenderingServerResponseBody &) = default ;
    RebootRenderingServerResponseBody& operator=(RebootRenderingServerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->failedInstanceCount_ == nullptr
        && return this->failedInstances_ == nullptr && return this->requestId_ == nullptr && return this->successInstanceCount_ == nullptr && return this->successInstances_ == nullptr; };
    // failedInstanceCount Field Functions 
    bool hasFailedInstanceCount() const { return this->failedInstanceCount_ != nullptr;};
    void deleteFailedInstanceCount() { this->failedInstanceCount_ = nullptr;};
    inline int32_t failedInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(failedInstanceCount_, 0) };
    inline RebootRenderingServerResponseBody& setFailedInstanceCount(int32_t failedInstanceCount) { DARABONBA_PTR_SET_VALUE(failedInstanceCount_, failedInstanceCount) };


    // failedInstances Field Functions 
    bool hasFailedInstances() const { return this->failedInstances_ != nullptr;};
    void deleteFailedInstances() { this->failedInstances_ = nullptr;};
    inline const vector<RebootRenderingServerResponseBodyFailedInstances> & failedInstances() const { DARABONBA_PTR_GET_CONST(failedInstances_, vector<RebootRenderingServerResponseBodyFailedInstances>) };
    inline vector<RebootRenderingServerResponseBodyFailedInstances> failedInstances() { DARABONBA_PTR_GET(failedInstances_, vector<RebootRenderingServerResponseBodyFailedInstances>) };
    inline RebootRenderingServerResponseBody& setFailedInstances(const vector<RebootRenderingServerResponseBodyFailedInstances> & failedInstances) { DARABONBA_PTR_SET_VALUE(failedInstances_, failedInstances) };
    inline RebootRenderingServerResponseBody& setFailedInstances(vector<RebootRenderingServerResponseBodyFailedInstances> && failedInstances) { DARABONBA_PTR_SET_RVALUE(failedInstances_, failedInstances) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RebootRenderingServerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // successInstanceCount Field Functions 
    bool hasSuccessInstanceCount() const { return this->successInstanceCount_ != nullptr;};
    void deleteSuccessInstanceCount() { this->successInstanceCount_ = nullptr;};
    inline int32_t successInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(successInstanceCount_, 0) };
    inline RebootRenderingServerResponseBody& setSuccessInstanceCount(int32_t successInstanceCount) { DARABONBA_PTR_SET_VALUE(successInstanceCount_, successInstanceCount) };


    // successInstances Field Functions 
    bool hasSuccessInstances() const { return this->successInstances_ != nullptr;};
    void deleteSuccessInstances() { this->successInstances_ = nullptr;};
    inline const vector<RebootRenderingServerResponseBodySuccessInstances> & successInstances() const { DARABONBA_PTR_GET_CONST(successInstances_, vector<RebootRenderingServerResponseBodySuccessInstances>) };
    inline vector<RebootRenderingServerResponseBodySuccessInstances> successInstances() { DARABONBA_PTR_GET(successInstances_, vector<RebootRenderingServerResponseBodySuccessInstances>) };
    inline RebootRenderingServerResponseBody& setSuccessInstances(const vector<RebootRenderingServerResponseBodySuccessInstances> & successInstances) { DARABONBA_PTR_SET_VALUE(successInstances_, successInstances) };
    inline RebootRenderingServerResponseBody& setSuccessInstances(vector<RebootRenderingServerResponseBodySuccessInstances> && successInstances) { DARABONBA_PTR_SET_RVALUE(successInstances_, successInstances) };


  protected:
    std::shared_ptr<int32_t> failedInstanceCount_ = nullptr;
    std::shared_ptr<vector<RebootRenderingServerResponseBodyFailedInstances>> failedInstances_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> successInstanceCount_ = nullptr;
    std::shared_ptr<vector<RebootRenderingServerResponseBodySuccessInstances>> successInstances_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
