// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVERGROUPSERVERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVERGROUPSERVERSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gwlb20240415
{
namespace Models
{
  class ListServerGroupServersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServerGroupServersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ServerGroupId, serverGroupId_);
      DARABONBA_PTR_TO_JSON(ServerIds, serverIds_);
      DARABONBA_PTR_TO_JSON(ServerIps, serverIps_);
      DARABONBA_PTR_TO_JSON(Skip, skip_);
    };
    friend void from_json(const Darabonba::Json& j, ListServerGroupServersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ServerGroupId, serverGroupId_);
      DARABONBA_PTR_FROM_JSON(ServerIds, serverIds_);
      DARABONBA_PTR_FROM_JSON(ServerIps, serverIps_);
      DARABONBA_PTR_FROM_JSON(Skip, skip_);
    };
    ListServerGroupServersRequest() = default ;
    ListServerGroupServersRequest(const ListServerGroupServersRequest &) = default ;
    ListServerGroupServersRequest(ListServerGroupServersRequest &&) = default ;
    ListServerGroupServersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServerGroupServersRequest() = default ;
    ListServerGroupServersRequest& operator=(const ListServerGroupServersRequest &) = default ;
    ListServerGroupServersRequest& operator=(ListServerGroupServersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->serverGroupId_ == nullptr && this->serverIds_ == nullptr && this->serverIps_ == nullptr && this->skip_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListServerGroupServersRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListServerGroupServersRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // serverGroupId Field Functions 
    bool hasServerGroupId() const { return this->serverGroupId_ != nullptr;};
    void deleteServerGroupId() { this->serverGroupId_ = nullptr;};
    inline string getServerGroupId() const { DARABONBA_PTR_GET_DEFAULT(serverGroupId_, "") };
    inline ListServerGroupServersRequest& setServerGroupId(string serverGroupId) { DARABONBA_PTR_SET_VALUE(serverGroupId_, serverGroupId) };


    // serverIds Field Functions 
    bool hasServerIds() const { return this->serverIds_ != nullptr;};
    void deleteServerIds() { this->serverIds_ = nullptr;};
    inline const vector<string> & getServerIds() const { DARABONBA_PTR_GET_CONST(serverIds_, vector<string>) };
    inline vector<string> getServerIds() { DARABONBA_PTR_GET(serverIds_, vector<string>) };
    inline ListServerGroupServersRequest& setServerIds(const vector<string> & serverIds) { DARABONBA_PTR_SET_VALUE(serverIds_, serverIds) };
    inline ListServerGroupServersRequest& setServerIds(vector<string> && serverIds) { DARABONBA_PTR_SET_RVALUE(serverIds_, serverIds) };


    // serverIps Field Functions 
    bool hasServerIps() const { return this->serverIps_ != nullptr;};
    void deleteServerIps() { this->serverIps_ = nullptr;};
    inline const vector<string> & getServerIps() const { DARABONBA_PTR_GET_CONST(serverIps_, vector<string>) };
    inline vector<string> getServerIps() { DARABONBA_PTR_GET(serverIps_, vector<string>) };
    inline ListServerGroupServersRequest& setServerIps(const vector<string> & serverIps) { DARABONBA_PTR_SET_VALUE(serverIps_, serverIps) };
    inline ListServerGroupServersRequest& setServerIps(vector<string> && serverIps) { DARABONBA_PTR_SET_RVALUE(serverIps_, serverIps) };


    // skip Field Functions 
    bool hasSkip() const { return this->skip_ != nullptr;};
    void deleteSkip() { this->skip_ = nullptr;};
    inline int32_t getSkip() const { DARABONBA_PTR_GET_DEFAULT(skip_, 0) };
    inline ListServerGroupServersRequest& setSkip(int32_t skip) { DARABONBA_PTR_SET_VALUE(skip_, skip) };


  protected:
    // The number of entries per page.
    // 
    // Valid values: 1 to 1000.
    // 
    // Default value: 20.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token that is used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   If **NextToken** is empty, no next page exists.
    // *   If a value of **NextToken** is returned, the value indicates the token that is used for the next query.
    shared_ptr<string> nextToken_ {};
    // The server group ID.
    shared_ptr<string> serverGroupId_ {};
    // The server IDs.
    // 
    // You can specify at most 200 servers in each call.
    shared_ptr<vector<string>> serverIds_ {};
    // The server IP addresses.
    // 
    // You can specify at most 200 servers in each call.
    shared_ptr<vector<string>> serverIps_ {};
    // The number of entries to be skipped in the call.
    shared_ptr<int32_t> skip_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gwlb20240415
#endif
