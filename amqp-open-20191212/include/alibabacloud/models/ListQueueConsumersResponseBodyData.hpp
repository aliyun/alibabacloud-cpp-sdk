// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUEUECONSUMERSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTQUEUECONSUMERSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListQueueConsumersResponseBodyDataConsumers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AmqpOpen20191212
{
namespace Models
{
  class ListQueueConsumersResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQueueConsumersResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Consumers, consumers_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListQueueConsumersResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Consumers, consumers_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
    };
    ListQueueConsumersResponseBodyData() = default ;
    ListQueueConsumersResponseBodyData(const ListQueueConsumersResponseBodyData &) = default ;
    ListQueueConsumersResponseBodyData(ListQueueConsumersResponseBodyData &&) = default ;
    ListQueueConsumersResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQueueConsumersResponseBodyData() = default ;
    ListQueueConsumersResponseBodyData& operator=(const ListQueueConsumersResponseBodyData &) = default ;
    ListQueueConsumersResponseBodyData& operator=(ListQueueConsumersResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->consumers_ == nullptr
        && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr; };
    // consumers Field Functions 
    bool hasConsumers() const { return this->consumers_ != nullptr;};
    void deleteConsumers() { this->consumers_ = nullptr;};
    inline const vector<Models::ListQueueConsumersResponseBodyDataConsumers> & consumers() const { DARABONBA_PTR_GET_CONST(consumers_, vector<Models::ListQueueConsumersResponseBodyDataConsumers>) };
    inline vector<Models::ListQueueConsumersResponseBodyDataConsumers> consumers() { DARABONBA_PTR_GET(consumers_, vector<Models::ListQueueConsumersResponseBodyDataConsumers>) };
    inline ListQueueConsumersResponseBodyData& setConsumers(const vector<Models::ListQueueConsumersResponseBodyDataConsumers> & consumers) { DARABONBA_PTR_SET_VALUE(consumers_, consumers) };
    inline ListQueueConsumersResponseBodyData& setConsumers(vector<Models::ListQueueConsumersResponseBodyDataConsumers> && consumers) { DARABONBA_PTR_SET_RVALUE(consumers_, consumers) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListQueueConsumersResponseBodyData& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListQueueConsumersResponseBodyData& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    // The consumers.
    std::shared_ptr<vector<Models::ListQueueConsumersResponseBodyDataConsumers>> consumers_ = nullptr;
    // The maximum number of entries returned.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The token that marks the end of the current returned page. If this parameter is empty, all data is retrieved.
    std::shared_ptr<string> nextToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AmqpOpen20191212
#endif
