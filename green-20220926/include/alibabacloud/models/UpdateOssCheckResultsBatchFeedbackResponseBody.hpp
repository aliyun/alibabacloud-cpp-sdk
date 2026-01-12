// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEOSSCHECKRESULTSBATCHFEEDBACKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEOSSCHECKRESULTSBATCHFEEDBACKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class UpdateOssCheckResultsBatchFeedbackResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateOssCheckResultsBatchFeedbackResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InvalidCount, invalidCount_);
      DARABONBA_PTR_TO_JSON(RepeatCount, repeatCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SuccessCount, successCount_);
      DARABONBA_PTR_TO_JSON(Tips, tips_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateOssCheckResultsBatchFeedbackResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InvalidCount, invalidCount_);
      DARABONBA_PTR_FROM_JSON(RepeatCount, repeatCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SuccessCount, successCount_);
      DARABONBA_PTR_FROM_JSON(Tips, tips_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    UpdateOssCheckResultsBatchFeedbackResponseBody() = default ;
    UpdateOssCheckResultsBatchFeedbackResponseBody(const UpdateOssCheckResultsBatchFeedbackResponseBody &) = default ;
    UpdateOssCheckResultsBatchFeedbackResponseBody(UpdateOssCheckResultsBatchFeedbackResponseBody &&) = default ;
    UpdateOssCheckResultsBatchFeedbackResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateOssCheckResultsBatchFeedbackResponseBody() = default ;
    UpdateOssCheckResultsBatchFeedbackResponseBody& operator=(const UpdateOssCheckResultsBatchFeedbackResponseBody &) = default ;
    UpdateOssCheckResultsBatchFeedbackResponseBody& operator=(UpdateOssCheckResultsBatchFeedbackResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->invalidCount_ == nullptr
        && this->repeatCount_ == nullptr && this->requestId_ == nullptr && this->successCount_ == nullptr && this->tips_ == nullptr && this->totalCount_ == nullptr; };
    // invalidCount Field Functions 
    bool hasInvalidCount() const { return this->invalidCount_ != nullptr;};
    void deleteInvalidCount() { this->invalidCount_ = nullptr;};
    inline int32_t getInvalidCount() const { DARABONBA_PTR_GET_DEFAULT(invalidCount_, 0) };
    inline UpdateOssCheckResultsBatchFeedbackResponseBody& setInvalidCount(int32_t invalidCount) { DARABONBA_PTR_SET_VALUE(invalidCount_, invalidCount) };


    // repeatCount Field Functions 
    bool hasRepeatCount() const { return this->repeatCount_ != nullptr;};
    void deleteRepeatCount() { this->repeatCount_ = nullptr;};
    inline int32_t getRepeatCount() const { DARABONBA_PTR_GET_DEFAULT(repeatCount_, 0) };
    inline UpdateOssCheckResultsBatchFeedbackResponseBody& setRepeatCount(int32_t repeatCount) { DARABONBA_PTR_SET_VALUE(repeatCount_, repeatCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateOssCheckResultsBatchFeedbackResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // successCount Field Functions 
    bool hasSuccessCount() const { return this->successCount_ != nullptr;};
    void deleteSuccessCount() { this->successCount_ = nullptr;};
    inline int32_t getSuccessCount() const { DARABONBA_PTR_GET_DEFAULT(successCount_, 0) };
    inline UpdateOssCheckResultsBatchFeedbackResponseBody& setSuccessCount(int32_t successCount) { DARABONBA_PTR_SET_VALUE(successCount_, successCount) };


    // tips Field Functions 
    bool hasTips() const { return this->tips_ != nullptr;};
    void deleteTips() { this->tips_ = nullptr;};
    inline string getTips() const { DARABONBA_PTR_GET_DEFAULT(tips_, "") };
    inline UpdateOssCheckResultsBatchFeedbackResponseBody& setTips(string tips) { DARABONBA_PTR_SET_VALUE(tips_, tips) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline UpdateOssCheckResultsBatchFeedbackResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<int32_t> invalidCount_ {};
    shared_ptr<int32_t> repeatCount_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> successCount_ {};
    shared_ptr<string> tips_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
