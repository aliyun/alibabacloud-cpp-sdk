// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSANDBOXESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSANDBOXESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class ListSandboxesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSandboxesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(searchText, searchText_);
      DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListSandboxesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(searchText, searchText_);
      DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
    };
    ListSandboxesRequest() = default ;
    ListSandboxesRequest(const ListSandboxesRequest &) = default ;
    ListSandboxesRequest(ListSandboxesRequest &&) = default ;
    ListSandboxesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSandboxesRequest() = default ;
    ListSandboxesRequest& operator=(const ListSandboxesRequest &) = default ;
    ListSandboxesRequest& operator=(ListSandboxesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->searchText_ == nullptr && this->sessionId_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListSandboxesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListSandboxesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // searchText Field Functions 
    bool hasSearchText() const { return this->searchText_ != nullptr;};
    void deleteSearchText() { this->searchText_ = nullptr;};
    inline string getSearchText() const { DARABONBA_PTR_GET_DEFAULT(searchText_, "") };
    inline ListSandboxesRequest& setSearchText(string searchText) { DARABONBA_PTR_SET_VALUE(searchText_, searchText) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline ListSandboxesRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


  protected:
    // The maximum number of records per page. Default value: 20.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token for the next page. When paginating, keep workspaceId, agentId, searchText, sessionId, and maxResults unchanged.
    shared_ptr<string> nextToken_ {};
    // When explicitly specified, this parameter cannot be empty or consist entirely of whitespace. The value can contain up to 36 characters and allows only hexadecimal characters and hyphens. This parameter can be used together with sessionId, combined with AND logic.
    shared_ptr<string> searchText_ {};
    // When explicitly specified, this parameter cannot be empty or consist entirely of whitespace. The value must be valid UTF-8 of 1 to 128 bytes and cannot contain forward slashes (/), vertical bars (|), control characters, or format characters. The original case and leading/trailing spaces are preserved. This parameter can be used together with searchText, combined with AND logic.
    shared_ptr<string> sessionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
