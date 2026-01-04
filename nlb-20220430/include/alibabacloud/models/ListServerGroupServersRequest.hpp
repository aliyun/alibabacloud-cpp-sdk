// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVERGROUPSERVERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVERGROUPSERVERSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nlb20220430
{
namespace Models
{
  class ListServerGroupServersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServerGroupServersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ServerGroupId, serverGroupId_);
      DARABONBA_PTR_TO_JSON(ServerIds, serverIds_);
      DARABONBA_PTR_TO_JSON(ServerIps, serverIps_);
    };
    friend void from_json(const Darabonba::Json& j, ListServerGroupServersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ServerGroupId, serverGroupId_);
      DARABONBA_PTR_FROM_JSON(ServerIds, serverIds_);
      DARABONBA_PTR_FROM_JSON(ServerIps, serverIps_);
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
        && this->nextToken_ == nullptr && this->regionId_ == nullptr && this->serverGroupId_ == nullptr && this->serverIds_ == nullptr && this->serverIps_ == nullptr; };
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


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListServerGroupServersRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


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


  protected:
    // The number of entries to return in each call. Valid values: **1** to **100**. Default value: **20**.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token used to specify a particular page of results. Valid values:
    // 
    // *   Left this parameter empty if this is the first query or the only query.
    // *   Set this parameter to the value of NextToken obtained from the previous query.
    shared_ptr<string> nextToken_ {};
    // The region ID of the NLB instance.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/443657.html) operation to query the most recent region list.
    shared_ptr<string> regionId_ {};
    // The ID of the server group.
    shared_ptr<string> serverGroupId_ {};
    // The IDs of the backend servers. You can specify up to 40 backend servers in each call.
    shared_ptr<vector<string>> serverIds_ {};
    // The IP addresses of the backend servers. You can specify up to 40 backend servers in each call.
    shared_ptr<vector<string>> serverIps_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nlb20220430
#endif
