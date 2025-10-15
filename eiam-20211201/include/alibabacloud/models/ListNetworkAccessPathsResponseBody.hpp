// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNETWORKACCESSPATHSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTNETWORKACCESSPATHSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListNetworkAccessPathsResponseBodyNetworkAccessPaths.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListNetworkAccessPathsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNetworkAccessPathsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkAccessPaths, networkAccessPaths_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListNetworkAccessPathsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkAccessPaths, networkAccessPaths_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListNetworkAccessPathsResponseBody() = default ;
    ListNetworkAccessPathsResponseBody(const ListNetworkAccessPathsResponseBody &) = default ;
    ListNetworkAccessPathsResponseBody(ListNetworkAccessPathsResponseBody &&) = default ;
    ListNetworkAccessPathsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNetworkAccessPathsResponseBody() = default ;
    ListNetworkAccessPathsResponseBody& operator=(const ListNetworkAccessPathsResponseBody &) = default ;
    ListNetworkAccessPathsResponseBody& operator=(ListNetworkAccessPathsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->networkAccessPaths_ == nullptr
        && return this->requestId_ == nullptr; };
    // networkAccessPaths Field Functions 
    bool hasNetworkAccessPaths() const { return this->networkAccessPaths_ != nullptr;};
    void deleteNetworkAccessPaths() { this->networkAccessPaths_ = nullptr;};
    inline const vector<ListNetworkAccessPathsResponseBodyNetworkAccessPaths> & networkAccessPaths() const { DARABONBA_PTR_GET_CONST(networkAccessPaths_, vector<ListNetworkAccessPathsResponseBodyNetworkAccessPaths>) };
    inline vector<ListNetworkAccessPathsResponseBodyNetworkAccessPaths> networkAccessPaths() { DARABONBA_PTR_GET(networkAccessPaths_, vector<ListNetworkAccessPathsResponseBodyNetworkAccessPaths>) };
    inline ListNetworkAccessPathsResponseBody& setNetworkAccessPaths(const vector<ListNetworkAccessPathsResponseBodyNetworkAccessPaths> & networkAccessPaths) { DARABONBA_PTR_SET_VALUE(networkAccessPaths_, networkAccessPaths) };
    inline ListNetworkAccessPathsResponseBody& setNetworkAccessPaths(vector<ListNetworkAccessPathsResponseBodyNetworkAccessPaths> && networkAccessPaths) { DARABONBA_PTR_SET_RVALUE(networkAccessPaths_, networkAccessPaths) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListNetworkAccessPathsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Network access paths
    std::shared_ptr<vector<ListNetworkAccessPathsResponseBodyNetworkAccessPaths>> networkAccessPaths_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
