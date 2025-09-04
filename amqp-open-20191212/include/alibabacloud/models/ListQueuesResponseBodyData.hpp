// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUEUESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTQUEUESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListQueuesResponseBodyDataQueues.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AmqpOpen20191212
{
namespace Models
{
  class ListQueuesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQueuesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Queues, queues_);
    };
    friend void from_json(const Darabonba::Json& j, ListQueuesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Queues, queues_);
    };
    ListQueuesResponseBodyData() = default ;
    ListQueuesResponseBodyData(const ListQueuesResponseBodyData &) = default ;
    ListQueuesResponseBodyData(ListQueuesResponseBodyData &&) = default ;
    ListQueuesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQueuesResponseBodyData() = default ;
    ListQueuesResponseBodyData& operator=(const ListQueuesResponseBodyData &) = default ;
    ListQueuesResponseBodyData& operator=(ListQueuesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->maxResults_ != nullptr
        && this->nextToken_ != nullptr && this->queues_ != nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListQueuesResponseBodyData& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListQueuesResponseBodyData& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // queues Field Functions 
    bool hasQueues() const { return this->queues_ != nullptr;};
    void deleteQueues() { this->queues_ = nullptr;};
    inline const vector<Models::ListQueuesResponseBodyDataQueues> & queues() const { DARABONBA_PTR_GET_CONST(queues_, vector<Models::ListQueuesResponseBodyDataQueues>) };
    inline vector<Models::ListQueuesResponseBodyDataQueues> queues() { DARABONBA_PTR_GET(queues_, vector<Models::ListQueuesResponseBodyDataQueues>) };
    inline ListQueuesResponseBodyData& setQueues(const vector<Models::ListQueuesResponseBodyDataQueues> & queues) { DARABONBA_PTR_SET_VALUE(queues_, queues) };
    inline ListQueuesResponseBodyData& setQueues(vector<Models::ListQueuesResponseBodyDataQueues> && queues) { DARABONBA_PTR_SET_RVALUE(queues_, queues) };


  protected:
    // The maximum number of entries returned.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The token that marks the end of the current returned page. If this parameter is empty, all data is retrieved.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The queues.
    std::shared_ptr<vector<Models::ListQueuesResponseBodyDataQueues>> queues_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AmqpOpen20191212
#endif
