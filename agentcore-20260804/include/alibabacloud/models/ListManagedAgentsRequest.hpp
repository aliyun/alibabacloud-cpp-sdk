// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMANAGEDAGENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMANAGEDAGENTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class ListManagedAgentsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListManagedAgentsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListManagedAgentsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
    };
    ListManagedAgentsRequest() = default ;
    ListManagedAgentsRequest(const ListManagedAgentsRequest &) = default ;
    ListManagedAgentsRequest(ListManagedAgentsRequest &&) = default ;
    ListManagedAgentsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListManagedAgentsRequest() = default ;
    ListManagedAgentsRequest& operator=(const ListManagedAgentsRequest &) = default ;
    ListManagedAgentsRequest& operator=(ListManagedAgentsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListManagedAgentsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListManagedAgentsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    // The maximum number of entries to return per page. Default value: 20. Valid values: 1 to 100.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token. Leave this parameter empty for the first request. For subsequent requests, use the nextToken value returned in the previous response.
    shared_ptr<string> nextToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
