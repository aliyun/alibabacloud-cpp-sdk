// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMESSAGESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMESSAGESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenAgent20260801
{
namespace Models
{
  class ListMessagesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMessagesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(runId, runId_);
    };
    friend void from_json(const Darabonba::Json& j, ListMessagesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(runId, runId_);
    };
    ListMessagesRequest() = default ;
    ListMessagesRequest(const ListMessagesRequest &) = default ;
    ListMessagesRequest(ListMessagesRequest &&) = default ;
    ListMessagesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMessagesRequest() = default ;
    ListMessagesRequest& operator=(const ListMessagesRequest &) = default ;
    ListMessagesRequest& operator=(ListMessagesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->runId_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline string getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, "") };
    inline ListMessagesRequest& setMaxResults(string maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListMessagesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // runId Field Functions 
    bool hasRunId() const { return this->runId_ != nullptr;};
    void deleteRunId() { this->runId_ = nullptr;};
    inline string getRunId() const { DARABONBA_PTR_GET_DEFAULT(runId_, "") };
    inline ListMessagesRequest& setRunId(string runId) { DARABONBA_PTR_SET_VALUE(runId_, runId) };


  protected:
    // The maximum number of timeline entries to return per page. The value must be a positive integer.
    shared_ptr<string> maxResults_ {};
    // The pagination token. Do not specify this parameter for the first request. For subsequent requests, use the value returned from the previous page.
    shared_ptr<string> nextToken_ {};
    // Filters messages by the specified run ID.
    shared_ptr<string> runId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenAgent20260801
#endif
