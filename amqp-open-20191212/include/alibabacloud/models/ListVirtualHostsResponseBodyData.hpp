// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVIRTUALHOSTSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTVIRTUALHOSTSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListVirtualHostsResponseBodyDataVirtualHosts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AmqpOpen20191212
{
namespace Models
{
  class ListVirtualHostsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVirtualHostsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(VirtualHosts, virtualHosts_);
    };
    friend void from_json(const Darabonba::Json& j, ListVirtualHostsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(VirtualHosts, virtualHosts_);
    };
    ListVirtualHostsResponseBodyData() = default ;
    ListVirtualHostsResponseBodyData(const ListVirtualHostsResponseBodyData &) = default ;
    ListVirtualHostsResponseBodyData(ListVirtualHostsResponseBodyData &&) = default ;
    ListVirtualHostsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVirtualHostsResponseBodyData() = default ;
    ListVirtualHostsResponseBodyData& operator=(const ListVirtualHostsResponseBodyData &) = default ;
    ListVirtualHostsResponseBodyData& operator=(ListVirtualHostsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->maxResults_ != nullptr
        && this->nextToken_ != nullptr && this->virtualHosts_ != nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListVirtualHostsResponseBodyData& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListVirtualHostsResponseBodyData& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // virtualHosts Field Functions 
    bool hasVirtualHosts() const { return this->virtualHosts_ != nullptr;};
    void deleteVirtualHosts() { this->virtualHosts_ = nullptr;};
    inline const vector<Models::ListVirtualHostsResponseBodyDataVirtualHosts> & virtualHosts() const { DARABONBA_PTR_GET_CONST(virtualHosts_, vector<Models::ListVirtualHostsResponseBodyDataVirtualHosts>) };
    inline vector<Models::ListVirtualHostsResponseBodyDataVirtualHosts> virtualHosts() { DARABONBA_PTR_GET(virtualHosts_, vector<Models::ListVirtualHostsResponseBodyDataVirtualHosts>) };
    inline ListVirtualHostsResponseBodyData& setVirtualHosts(const vector<Models::ListVirtualHostsResponseBodyDataVirtualHosts> & virtualHosts) { DARABONBA_PTR_SET_VALUE(virtualHosts_, virtualHosts) };
    inline ListVirtualHostsResponseBodyData& setVirtualHosts(vector<Models::ListVirtualHostsResponseBodyDataVirtualHosts> && virtualHosts) { DARABONBA_PTR_SET_RVALUE(virtualHosts_, virtualHosts) };


  protected:
    // The maximum number of entries returned.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The token that marks the end of the current returned page. If this parameter is empty, all data is retrieved.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The vhosts.
    std::shared_ptr<vector<Models::ListVirtualHostsResponseBodyDataVirtualHosts>> virtualHosts_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AmqpOpen20191212
#endif
