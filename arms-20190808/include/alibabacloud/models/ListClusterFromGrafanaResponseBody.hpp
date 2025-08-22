// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLUSTERFROMGRAFANARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCLUSTERFROMGRAFANARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListClusterFromGrafanaResponseBodyPromClusterList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListClusterFromGrafanaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClusterFromGrafanaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PromClusterList, promClusterList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListClusterFromGrafanaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PromClusterList, promClusterList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListClusterFromGrafanaResponseBody() = default ;
    ListClusterFromGrafanaResponseBody(const ListClusterFromGrafanaResponseBody &) = default ;
    ListClusterFromGrafanaResponseBody(ListClusterFromGrafanaResponseBody &&) = default ;
    ListClusterFromGrafanaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClusterFromGrafanaResponseBody() = default ;
    ListClusterFromGrafanaResponseBody& operator=(const ListClusterFromGrafanaResponseBody &) = default ;
    ListClusterFromGrafanaResponseBody& operator=(ListClusterFromGrafanaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->promClusterList_ != nullptr
        && this->requestId_ != nullptr; };
    // promClusterList Field Functions 
    bool hasPromClusterList() const { return this->promClusterList_ != nullptr;};
    void deletePromClusterList() { this->promClusterList_ = nullptr;};
    inline const vector<ListClusterFromGrafanaResponseBodyPromClusterList> & promClusterList() const { DARABONBA_PTR_GET_CONST(promClusterList_, vector<ListClusterFromGrafanaResponseBodyPromClusterList>) };
    inline vector<ListClusterFromGrafanaResponseBodyPromClusterList> promClusterList() { DARABONBA_PTR_GET(promClusterList_, vector<ListClusterFromGrafanaResponseBodyPromClusterList>) };
    inline ListClusterFromGrafanaResponseBody& setPromClusterList(const vector<ListClusterFromGrafanaResponseBodyPromClusterList> & promClusterList) { DARABONBA_PTR_SET_VALUE(promClusterList_, promClusterList) };
    inline ListClusterFromGrafanaResponseBody& setPromClusterList(vector<ListClusterFromGrafanaResponseBodyPromClusterList> && promClusterList) { DARABONBA_PTR_SET_RVALUE(promClusterList_, promClusterList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListClusterFromGrafanaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The cluster information.
    std::shared_ptr<vector<ListClusterFromGrafanaResponseBodyPromClusterList>> promClusterList_ = nullptr;
    // The request ID. You can use the ID to query logs and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
