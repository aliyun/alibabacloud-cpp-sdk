// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHQUERYRECEIVEDPUSHSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHQUERYRECEIVEDPUSHSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180208
{
namespace Models
{
  class BatchQueryReceivedPushStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchQueryReceivedPushStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PushNos, pushNos_);
    };
    friend void from_json(const Darabonba::Json& j, BatchQueryReceivedPushStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PushNos, pushNos_);
    };
    BatchQueryReceivedPushStatusRequest() = default ;
    BatchQueryReceivedPushStatusRequest(const BatchQueryReceivedPushStatusRequest &) = default ;
    BatchQueryReceivedPushStatusRequest(BatchQueryReceivedPushStatusRequest &&) = default ;
    BatchQueryReceivedPushStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchQueryReceivedPushStatusRequest() = default ;
    BatchQueryReceivedPushStatusRequest& operator=(const BatchQueryReceivedPushStatusRequest &) = default ;
    BatchQueryReceivedPushStatusRequest& operator=(BatchQueryReceivedPushStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->pushNos_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline BatchQueryReceivedPushStatusRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline BatchQueryReceivedPushStatusRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pushNos Field Functions 
    bool hasPushNos() const { return this->pushNos_ != nullptr;};
    void deletePushNos() { this->pushNos_ = nullptr;};
    inline const vector<string> & getPushNos() const { DARABONBA_PTR_GET_CONST(pushNos_, vector<string>) };
    inline vector<string> getPushNos() { DARABONBA_PTR_GET(pushNos_, vector<string>) };
    inline BatchQueryReceivedPushStatusRequest& setPushNos(const vector<string> & pushNos) { DARABONBA_PTR_SET_VALUE(pushNos_, pushNos) };
    inline BatchQueryReceivedPushStatusRequest& setPushNos(vector<string> && pushNos) { DARABONBA_PTR_SET_RVALUE(pushNos_, pushNos) };


  protected:
    // 本次请求最多返回的记录条数
    shared_ptr<int32_t> maxResults_ {};
    // 标记当前开始读取的位置，置空表示从头开始
    shared_ptr<string> nextToken_ {};
    // Push编号列表，最多50个
    // 
    // This parameter is required.
    shared_ptr<vector<string>> pushNos_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180208
#endif
