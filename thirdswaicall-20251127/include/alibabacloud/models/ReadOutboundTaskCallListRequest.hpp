// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_READOUTBOUNDTASKCALLLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_READOUTBOUNDTASKCALLLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ThirdswAicall20251127
{
namespace Models
{
  class ReadOutboundTaskCallListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReadOutboundTaskCallListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Current, current_);
      DARABONBA_PTR_TO_JSON(CustomerNameOrPhone, customerNameOrPhone_);
      DARABONBA_PTR_TO_JSON(DisplayStatusList, displayStatusList_);
      DARABONBA_PTR_TO_JSON(LabelTags, labelTags_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, ReadOutboundTaskCallListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Current, current_);
      DARABONBA_PTR_FROM_JSON(CustomerNameOrPhone, customerNameOrPhone_);
      DARABONBA_PTR_FROM_JSON(DisplayStatusList, displayStatusList_);
      DARABONBA_PTR_FROM_JSON(LabelTags, labelTags_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    ReadOutboundTaskCallListRequest() = default ;
    ReadOutboundTaskCallListRequest(const ReadOutboundTaskCallListRequest &) = default ;
    ReadOutboundTaskCallListRequest(ReadOutboundTaskCallListRequest &&) = default ;
    ReadOutboundTaskCallListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReadOutboundTaskCallListRequest() = default ;
    ReadOutboundTaskCallListRequest& operator=(const ReadOutboundTaskCallListRequest &) = default ;
    ReadOutboundTaskCallListRequest& operator=(ReadOutboundTaskCallListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->current_ == nullptr
        && this->customerNameOrPhone_ == nullptr && this->displayStatusList_ == nullptr && this->labelTags_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr
        && this->size_ == nullptr && this->taskId_ == nullptr && this->userId_ == nullptr; };
    // current Field Functions 
    bool hasCurrent() const { return this->current_ != nullptr;};
    void deleteCurrent() { this->current_ = nullptr;};
    inline int32_t getCurrent() const { DARABONBA_PTR_GET_DEFAULT(current_, 0) };
    inline ReadOutboundTaskCallListRequest& setCurrent(int32_t current) { DARABONBA_PTR_SET_VALUE(current_, current) };


    // customerNameOrPhone Field Functions 
    bool hasCustomerNameOrPhone() const { return this->customerNameOrPhone_ != nullptr;};
    void deleteCustomerNameOrPhone() { this->customerNameOrPhone_ = nullptr;};
    inline string getCustomerNameOrPhone() const { DARABONBA_PTR_GET_DEFAULT(customerNameOrPhone_, "") };
    inline ReadOutboundTaskCallListRequest& setCustomerNameOrPhone(string customerNameOrPhone) { DARABONBA_PTR_SET_VALUE(customerNameOrPhone_, customerNameOrPhone) };


    // displayStatusList Field Functions 
    bool hasDisplayStatusList() const { return this->displayStatusList_ != nullptr;};
    void deleteDisplayStatusList() { this->displayStatusList_ = nullptr;};
    inline const vector<string> & getDisplayStatusList() const { DARABONBA_PTR_GET_CONST(displayStatusList_, vector<string>) };
    inline vector<string> getDisplayStatusList() { DARABONBA_PTR_GET(displayStatusList_, vector<string>) };
    inline ReadOutboundTaskCallListRequest& setDisplayStatusList(const vector<string> & displayStatusList) { DARABONBA_PTR_SET_VALUE(displayStatusList_, displayStatusList) };
    inline ReadOutboundTaskCallListRequest& setDisplayStatusList(vector<string> && displayStatusList) { DARABONBA_PTR_SET_RVALUE(displayStatusList_, displayStatusList) };


    // labelTags Field Functions 
    bool hasLabelTags() const { return this->labelTags_ != nullptr;};
    void deleteLabelTags() { this->labelTags_ = nullptr;};
    inline const vector<string> & getLabelTags() const { DARABONBA_PTR_GET_CONST(labelTags_, vector<string>) };
    inline vector<string> getLabelTags() { DARABONBA_PTR_GET(labelTags_, vector<string>) };
    inline ReadOutboundTaskCallListRequest& setLabelTags(const vector<string> & labelTags) { DARABONBA_PTR_SET_VALUE(labelTags_, labelTags) };
    inline ReadOutboundTaskCallListRequest& setLabelTags(vector<string> && labelTags) { DARABONBA_PTR_SET_RVALUE(labelTags_, labelTags) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ReadOutboundTaskCallListRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ReadOutboundTaskCallListRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline ReadOutboundTaskCallListRequest& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline ReadOutboundTaskCallListRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ReadOutboundTaskCallListRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    shared_ptr<int32_t> current_ {};
    shared_ptr<string> customerNameOrPhone_ {};
    shared_ptr<vector<string>> displayStatusList_ {};
    shared_ptr<vector<string>> labelTags_ {};
    shared_ptr<int32_t> maxResults_ {};
    // nextToken
    shared_ptr<string> nextToken_ {};
    shared_ptr<int32_t> size_ {};
    shared_ptr<string> taskId_ {};
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ThirdswAicall20251127
#endif
