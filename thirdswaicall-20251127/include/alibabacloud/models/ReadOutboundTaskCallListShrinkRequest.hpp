// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_READOUTBOUNDTASKCALLLISTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_READOUTBOUNDTASKCALLLISTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ThirdswAicall20251127
{
namespace Models
{
  class ReadOutboundTaskCallListShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReadOutboundTaskCallListShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CallEndTimeBegin, callEndTimeBegin_);
      DARABONBA_PTR_TO_JSON(CallEndTimeEnd, callEndTimeEnd_);
      DARABONBA_PTR_TO_JSON(CallStartTimeBegin, callStartTimeBegin_);
      DARABONBA_PTR_TO_JSON(CallStartTimeEnd, callStartTimeEnd_);
      DARABONBA_PTR_TO_JSON(Current, current_);
      DARABONBA_PTR_TO_JSON(CustomerNameOrPhone, customerNameOrPhone_);
      DARABONBA_PTR_TO_JSON(DisplayStatusList, displayStatusListShrink_);
      DARABONBA_PTR_TO_JSON(LabelTags, labelTagsShrink_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, ReadOutboundTaskCallListShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CallEndTimeBegin, callEndTimeBegin_);
      DARABONBA_PTR_FROM_JSON(CallEndTimeEnd, callEndTimeEnd_);
      DARABONBA_PTR_FROM_JSON(CallStartTimeBegin, callStartTimeBegin_);
      DARABONBA_PTR_FROM_JSON(CallStartTimeEnd, callStartTimeEnd_);
      DARABONBA_PTR_FROM_JSON(Current, current_);
      DARABONBA_PTR_FROM_JSON(CustomerNameOrPhone, customerNameOrPhone_);
      DARABONBA_PTR_FROM_JSON(DisplayStatusList, displayStatusListShrink_);
      DARABONBA_PTR_FROM_JSON(LabelTags, labelTagsShrink_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    ReadOutboundTaskCallListShrinkRequest() = default ;
    ReadOutboundTaskCallListShrinkRequest(const ReadOutboundTaskCallListShrinkRequest &) = default ;
    ReadOutboundTaskCallListShrinkRequest(ReadOutboundTaskCallListShrinkRequest &&) = default ;
    ReadOutboundTaskCallListShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReadOutboundTaskCallListShrinkRequest() = default ;
    ReadOutboundTaskCallListShrinkRequest& operator=(const ReadOutboundTaskCallListShrinkRequest &) = default ;
    ReadOutboundTaskCallListShrinkRequest& operator=(ReadOutboundTaskCallListShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callEndTimeBegin_ == nullptr
        && this->callEndTimeEnd_ == nullptr && this->callStartTimeBegin_ == nullptr && this->callStartTimeEnd_ == nullptr && this->current_ == nullptr && this->customerNameOrPhone_ == nullptr
        && this->displayStatusListShrink_ == nullptr && this->labelTagsShrink_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->size_ == nullptr
        && this->taskId_ == nullptr && this->userId_ == nullptr; };
    // callEndTimeBegin Field Functions 
    bool hasCallEndTimeBegin() const { return this->callEndTimeBegin_ != nullptr;};
    void deleteCallEndTimeBegin() { this->callEndTimeBegin_ = nullptr;};
    inline int64_t getCallEndTimeBegin() const { DARABONBA_PTR_GET_DEFAULT(callEndTimeBegin_, 0L) };
    inline ReadOutboundTaskCallListShrinkRequest& setCallEndTimeBegin(int64_t callEndTimeBegin) { DARABONBA_PTR_SET_VALUE(callEndTimeBegin_, callEndTimeBegin) };


    // callEndTimeEnd Field Functions 
    bool hasCallEndTimeEnd() const { return this->callEndTimeEnd_ != nullptr;};
    void deleteCallEndTimeEnd() { this->callEndTimeEnd_ = nullptr;};
    inline int64_t getCallEndTimeEnd() const { DARABONBA_PTR_GET_DEFAULT(callEndTimeEnd_, 0L) };
    inline ReadOutboundTaskCallListShrinkRequest& setCallEndTimeEnd(int64_t callEndTimeEnd) { DARABONBA_PTR_SET_VALUE(callEndTimeEnd_, callEndTimeEnd) };


    // callStartTimeBegin Field Functions 
    bool hasCallStartTimeBegin() const { return this->callStartTimeBegin_ != nullptr;};
    void deleteCallStartTimeBegin() { this->callStartTimeBegin_ = nullptr;};
    inline int64_t getCallStartTimeBegin() const { DARABONBA_PTR_GET_DEFAULT(callStartTimeBegin_, 0L) };
    inline ReadOutboundTaskCallListShrinkRequest& setCallStartTimeBegin(int64_t callStartTimeBegin) { DARABONBA_PTR_SET_VALUE(callStartTimeBegin_, callStartTimeBegin) };


    // callStartTimeEnd Field Functions 
    bool hasCallStartTimeEnd() const { return this->callStartTimeEnd_ != nullptr;};
    void deleteCallStartTimeEnd() { this->callStartTimeEnd_ = nullptr;};
    inline int64_t getCallStartTimeEnd() const { DARABONBA_PTR_GET_DEFAULT(callStartTimeEnd_, 0L) };
    inline ReadOutboundTaskCallListShrinkRequest& setCallStartTimeEnd(int64_t callStartTimeEnd) { DARABONBA_PTR_SET_VALUE(callStartTimeEnd_, callStartTimeEnd) };


    // current Field Functions 
    bool hasCurrent() const { return this->current_ != nullptr;};
    void deleteCurrent() { this->current_ = nullptr;};
    inline int32_t getCurrent() const { DARABONBA_PTR_GET_DEFAULT(current_, 0) };
    inline ReadOutboundTaskCallListShrinkRequest& setCurrent(int32_t current) { DARABONBA_PTR_SET_VALUE(current_, current) };


    // customerNameOrPhone Field Functions 
    bool hasCustomerNameOrPhone() const { return this->customerNameOrPhone_ != nullptr;};
    void deleteCustomerNameOrPhone() { this->customerNameOrPhone_ = nullptr;};
    inline string getCustomerNameOrPhone() const { DARABONBA_PTR_GET_DEFAULT(customerNameOrPhone_, "") };
    inline ReadOutboundTaskCallListShrinkRequest& setCustomerNameOrPhone(string customerNameOrPhone) { DARABONBA_PTR_SET_VALUE(customerNameOrPhone_, customerNameOrPhone) };


    // displayStatusListShrink Field Functions 
    bool hasDisplayStatusListShrink() const { return this->displayStatusListShrink_ != nullptr;};
    void deleteDisplayStatusListShrink() { this->displayStatusListShrink_ = nullptr;};
    inline string getDisplayStatusListShrink() const { DARABONBA_PTR_GET_DEFAULT(displayStatusListShrink_, "") };
    inline ReadOutboundTaskCallListShrinkRequest& setDisplayStatusListShrink(string displayStatusListShrink) { DARABONBA_PTR_SET_VALUE(displayStatusListShrink_, displayStatusListShrink) };


    // labelTagsShrink Field Functions 
    bool hasLabelTagsShrink() const { return this->labelTagsShrink_ != nullptr;};
    void deleteLabelTagsShrink() { this->labelTagsShrink_ = nullptr;};
    inline string getLabelTagsShrink() const { DARABONBA_PTR_GET_DEFAULT(labelTagsShrink_, "") };
    inline ReadOutboundTaskCallListShrinkRequest& setLabelTagsShrink(string labelTagsShrink) { DARABONBA_PTR_SET_VALUE(labelTagsShrink_, labelTagsShrink) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ReadOutboundTaskCallListShrinkRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ReadOutboundTaskCallListShrinkRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline ReadOutboundTaskCallListShrinkRequest& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline ReadOutboundTaskCallListShrinkRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ReadOutboundTaskCallListShrinkRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    shared_ptr<int64_t> callEndTimeBegin_ {};
    shared_ptr<int64_t> callEndTimeEnd_ {};
    shared_ptr<int64_t> callStartTimeBegin_ {};
    shared_ptr<int64_t> callStartTimeEnd_ {};
    shared_ptr<int32_t> current_ {};
    shared_ptr<string> customerNameOrPhone_ {};
    shared_ptr<string> displayStatusListShrink_ {};
    shared_ptr<string> labelTagsShrink_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<int32_t> size_ {};
    shared_ptr<string> taskId_ {};
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ThirdswAicall20251127
#endif
