// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHQUERYRECEIVEDPUSHSTATUSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHQUERYRECEIVEDPUSHSTATUSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180208
{
namespace Models
{
  class BatchQueryReceivedPushStatusShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchQueryReceivedPushStatusShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PushNos, pushNosShrink_);
    };
    friend void from_json(const Darabonba::Json& j, BatchQueryReceivedPushStatusShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PushNos, pushNosShrink_);
    };
    BatchQueryReceivedPushStatusShrinkRequest() = default ;
    BatchQueryReceivedPushStatusShrinkRequest(const BatchQueryReceivedPushStatusShrinkRequest &) = default ;
    BatchQueryReceivedPushStatusShrinkRequest(BatchQueryReceivedPushStatusShrinkRequest &&) = default ;
    BatchQueryReceivedPushStatusShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchQueryReceivedPushStatusShrinkRequest() = default ;
    BatchQueryReceivedPushStatusShrinkRequest& operator=(const BatchQueryReceivedPushStatusShrinkRequest &) = default ;
    BatchQueryReceivedPushStatusShrinkRequest& operator=(BatchQueryReceivedPushStatusShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->pushNosShrink_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline BatchQueryReceivedPushStatusShrinkRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline BatchQueryReceivedPushStatusShrinkRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pushNosShrink Field Functions 
    bool hasPushNosShrink() const { return this->pushNosShrink_ != nullptr;};
    void deletePushNosShrink() { this->pushNosShrink_ = nullptr;};
    inline string getPushNosShrink() const { DARABONBA_PTR_GET_DEFAULT(pushNosShrink_, "") };
    inline BatchQueryReceivedPushStatusShrinkRequest& setPushNosShrink(string pushNosShrink) { DARABONBA_PTR_SET_VALUE(pushNosShrink_, pushNosShrink) };


  protected:
    // 本次请求最多返回的记录条数
    shared_ptr<int32_t> maxResults_ {};
    // 标记当前开始读取的位置，置空表示从头开始
    shared_ptr<string> nextToken_ {};
    // Push编号列表，最多50个
    // 
    // This parameter is required.
    shared_ptr<string> pushNosShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180208
#endif
