// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOPERATIONHOSTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTOPERATIONHOSTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListOperationHostsResponseBodyHosts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ListOperationHostsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOperationHostsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Hosts, hosts_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListOperationHostsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Hosts, hosts_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListOperationHostsResponseBody() = default ;
    ListOperationHostsResponseBody(const ListOperationHostsResponseBody &) = default ;
    ListOperationHostsResponseBody(ListOperationHostsResponseBody &&) = default ;
    ListOperationHostsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOperationHostsResponseBody() = default ;
    ListOperationHostsResponseBody& operator=(const ListOperationHostsResponseBody &) = default ;
    ListOperationHostsResponseBody& operator=(ListOperationHostsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->hosts_ != nullptr
        && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // hosts Field Functions 
    bool hasHosts() const { return this->hosts_ != nullptr;};
    void deleteHosts() { this->hosts_ = nullptr;};
    inline const vector<ListOperationHostsResponseBodyHosts> & hosts() const { DARABONBA_PTR_GET_CONST(hosts_, vector<ListOperationHostsResponseBodyHosts>) };
    inline vector<ListOperationHostsResponseBodyHosts> hosts() { DARABONBA_PTR_GET(hosts_, vector<ListOperationHostsResponseBodyHosts>) };
    inline ListOperationHostsResponseBody& setHosts(const vector<ListOperationHostsResponseBodyHosts> & hosts) { DARABONBA_PTR_SET_VALUE(hosts_, hosts) };
    inline ListOperationHostsResponseBody& setHosts(vector<ListOperationHostsResponseBodyHosts> && hosts) { DARABONBA_PTR_SET_RVALUE(hosts_, hosts) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListOperationHostsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListOperationHostsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The hosts returned.
    std::shared_ptr<vector<ListOperationHostsResponseBodyHosts>> hosts_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of hosts returned.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
