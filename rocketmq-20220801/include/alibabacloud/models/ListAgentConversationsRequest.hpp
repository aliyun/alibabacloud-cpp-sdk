// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGENTCONVERSATIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAGENTCONVERSATIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class ListAgentConversationsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAgentConversationsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(purpose, purpose_);
      DARABONBA_PTR_TO_JSON(q, q_);
    };
    friend void from_json(const Darabonba::Json& j, ListAgentConversationsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(purpose, purpose_);
      DARABONBA_PTR_FROM_JSON(q, q_);
    };
    ListAgentConversationsRequest() = default ;
    ListAgentConversationsRequest(const ListAgentConversationsRequest &) = default ;
    ListAgentConversationsRequest(ListAgentConversationsRequest &&) = default ;
    ListAgentConversationsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAgentConversationsRequest() = default ;
    ListAgentConversationsRequest& operator=(const ListAgentConversationsRequest &) = default ;
    ListAgentConversationsRequest& operator=(ListAgentConversationsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->purpose_ == nullptr && this->q_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListAgentConversationsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAgentConversationsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // purpose Field Functions 
    bool hasPurpose() const { return this->purpose_ != nullptr;};
    void deletePurpose() { this->purpose_ = nullptr;};
    inline string getPurpose() const { DARABONBA_PTR_GET_DEFAULT(purpose_, "") };
    inline ListAgentConversationsRequest& setPurpose(string purpose) { DARABONBA_PTR_SET_VALUE(purpose_, purpose) };


    // q Field Functions 
    bool hasQ() const { return this->q_ != nullptr;};
    void deleteQ() { this->q_ = nullptr;};
    inline string getQ() const { DARABONBA_PTR_GET_DEFAULT(q_, "") };
    inline ListAgentConversationsRequest& setQ(string q) { DARABONBA_PTR_SET_VALUE(q_, q) };


  protected:
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> purpose_ {};
    shared_ptr<string> q_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
