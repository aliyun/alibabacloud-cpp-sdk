// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNETWORKDOMAINSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTNETWORKDOMAINSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListNetworkDomainsResponseBodyNetworkDomains.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ListNetworkDomainsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNetworkDomainsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkDomains, networkDomains_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListNetworkDomainsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkDomains, networkDomains_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListNetworkDomainsResponseBody() = default ;
    ListNetworkDomainsResponseBody(const ListNetworkDomainsResponseBody &) = default ;
    ListNetworkDomainsResponseBody(ListNetworkDomainsResponseBody &&) = default ;
    ListNetworkDomainsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNetworkDomainsResponseBody() = default ;
    ListNetworkDomainsResponseBody& operator=(const ListNetworkDomainsResponseBody &) = default ;
    ListNetworkDomainsResponseBody& operator=(ListNetworkDomainsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->networkDomains_ == nullptr
        && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // networkDomains Field Functions 
    bool hasNetworkDomains() const { return this->networkDomains_ != nullptr;};
    void deleteNetworkDomains() { this->networkDomains_ = nullptr;};
    inline const vector<ListNetworkDomainsResponseBodyNetworkDomains> & networkDomains() const { DARABONBA_PTR_GET_CONST(networkDomains_, vector<ListNetworkDomainsResponseBodyNetworkDomains>) };
    inline vector<ListNetworkDomainsResponseBodyNetworkDomains> networkDomains() { DARABONBA_PTR_GET(networkDomains_, vector<ListNetworkDomainsResponseBodyNetworkDomains>) };
    inline ListNetworkDomainsResponseBody& setNetworkDomains(const vector<ListNetworkDomainsResponseBodyNetworkDomains> & networkDomains) { DARABONBA_PTR_SET_VALUE(networkDomains_, networkDomains) };
    inline ListNetworkDomainsResponseBody& setNetworkDomains(vector<ListNetworkDomainsResponseBodyNetworkDomains> && networkDomains) { DARABONBA_PTR_SET_RVALUE(networkDomains_, networkDomains) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListNetworkDomainsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListNetworkDomainsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The network domains that are returned.
    std::shared_ptr<vector<ListNetworkDomainsResponseBodyNetworkDomains>> networkDomains_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of network domains that are returned.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
