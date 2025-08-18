// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESCHEDULEDPRELOADEXECUTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATESCHEDULEDPRELOADEXECUTIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateScheduledPreloadExecutionsResponseBodyFailedExecutions.hpp>
#include <alibabacloud/models/CreateScheduledPreloadExecutionsResponseBodySuccessExecutions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class CreateScheduledPreloadExecutionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateScheduledPreloadExecutionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FailedExecutions, failedExecutions_);
      DARABONBA_PTR_TO_JSON(FailedMessages, failedMessages_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SuccessCount, successCount_);
      DARABONBA_PTR_TO_JSON(SuccessExecutions, successExecutions_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, CreateScheduledPreloadExecutionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FailedExecutions, failedExecutions_);
      DARABONBA_PTR_FROM_JSON(FailedMessages, failedMessages_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SuccessCount, successCount_);
      DARABONBA_PTR_FROM_JSON(SuccessExecutions, successExecutions_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    CreateScheduledPreloadExecutionsResponseBody() = default ;
    CreateScheduledPreloadExecutionsResponseBody(const CreateScheduledPreloadExecutionsResponseBody &) = default ;
    CreateScheduledPreloadExecutionsResponseBody(CreateScheduledPreloadExecutionsResponseBody &&) = default ;
    CreateScheduledPreloadExecutionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateScheduledPreloadExecutionsResponseBody() = default ;
    CreateScheduledPreloadExecutionsResponseBody& operator=(const CreateScheduledPreloadExecutionsResponseBody &) = default ;
    CreateScheduledPreloadExecutionsResponseBody& operator=(CreateScheduledPreloadExecutionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->failedExecutions_ != nullptr
        && this->failedMessages_ != nullptr && this->requestId_ != nullptr && this->successCount_ != nullptr && this->successExecutions_ != nullptr && this->totalCount_ != nullptr; };
    // failedExecutions Field Functions 
    bool hasFailedExecutions() const { return this->failedExecutions_ != nullptr;};
    void deleteFailedExecutions() { this->failedExecutions_ = nullptr;};
    inline const vector<CreateScheduledPreloadExecutionsResponseBodyFailedExecutions> & failedExecutions() const { DARABONBA_PTR_GET_CONST(failedExecutions_, vector<CreateScheduledPreloadExecutionsResponseBodyFailedExecutions>) };
    inline vector<CreateScheduledPreloadExecutionsResponseBodyFailedExecutions> failedExecutions() { DARABONBA_PTR_GET(failedExecutions_, vector<CreateScheduledPreloadExecutionsResponseBodyFailedExecutions>) };
    inline CreateScheduledPreloadExecutionsResponseBody& setFailedExecutions(const vector<CreateScheduledPreloadExecutionsResponseBodyFailedExecutions> & failedExecutions) { DARABONBA_PTR_SET_VALUE(failedExecutions_, failedExecutions) };
    inline CreateScheduledPreloadExecutionsResponseBody& setFailedExecutions(vector<CreateScheduledPreloadExecutionsResponseBodyFailedExecutions> && failedExecutions) { DARABONBA_PTR_SET_RVALUE(failedExecutions_, failedExecutions) };


    // failedMessages Field Functions 
    bool hasFailedMessages() const { return this->failedMessages_ != nullptr;};
    void deleteFailedMessages() { this->failedMessages_ = nullptr;};
    inline const vector<string> & failedMessages() const { DARABONBA_PTR_GET_CONST(failedMessages_, vector<string>) };
    inline vector<string> failedMessages() { DARABONBA_PTR_GET(failedMessages_, vector<string>) };
    inline CreateScheduledPreloadExecutionsResponseBody& setFailedMessages(const vector<string> & failedMessages) { DARABONBA_PTR_SET_VALUE(failedMessages_, failedMessages) };
    inline CreateScheduledPreloadExecutionsResponseBody& setFailedMessages(vector<string> && failedMessages) { DARABONBA_PTR_SET_RVALUE(failedMessages_, failedMessages) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateScheduledPreloadExecutionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // successCount Field Functions 
    bool hasSuccessCount() const { return this->successCount_ != nullptr;};
    void deleteSuccessCount() { this->successCount_ = nullptr;};
    inline int32_t successCount() const { DARABONBA_PTR_GET_DEFAULT(successCount_, 0) };
    inline CreateScheduledPreloadExecutionsResponseBody& setSuccessCount(int32_t successCount) { DARABONBA_PTR_SET_VALUE(successCount_, successCount) };


    // successExecutions Field Functions 
    bool hasSuccessExecutions() const { return this->successExecutions_ != nullptr;};
    void deleteSuccessExecutions() { this->successExecutions_ = nullptr;};
    inline const vector<CreateScheduledPreloadExecutionsResponseBodySuccessExecutions> & successExecutions() const { DARABONBA_PTR_GET_CONST(successExecutions_, vector<CreateScheduledPreloadExecutionsResponseBodySuccessExecutions>) };
    inline vector<CreateScheduledPreloadExecutionsResponseBodySuccessExecutions> successExecutions() { DARABONBA_PTR_GET(successExecutions_, vector<CreateScheduledPreloadExecutionsResponseBodySuccessExecutions>) };
    inline CreateScheduledPreloadExecutionsResponseBody& setSuccessExecutions(const vector<CreateScheduledPreloadExecutionsResponseBodySuccessExecutions> & successExecutions) { DARABONBA_PTR_SET_VALUE(successExecutions_, successExecutions) };
    inline CreateScheduledPreloadExecutionsResponseBody& setSuccessExecutions(vector<CreateScheduledPreloadExecutionsResponseBodySuccessExecutions> && successExecutions) { DARABONBA_PTR_SET_RVALUE(successExecutions_, successExecutions) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline CreateScheduledPreloadExecutionsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about prefetch plans that failed to be created.
    std::shared_ptr<vector<CreateScheduledPreloadExecutionsResponseBodyFailedExecutions>> failedExecutions_ = nullptr;
    // The information about plan failures.
    std::shared_ptr<vector<string>> failedMessages_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The number of prefetch plans that are created.
    std::shared_ptr<int32_t> successCount_ = nullptr;
    // The information about created prefetch plans.
    std::shared_ptr<vector<CreateScheduledPreloadExecutionsResponseBodySuccessExecutions>> successExecutions_ = nullptr;
    // The total number of new plans requested.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
