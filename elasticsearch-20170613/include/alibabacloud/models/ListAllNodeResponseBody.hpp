// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALLNODERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTALLNODERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAllNodeResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListAllNodeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAllNodeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ListAllNodeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    ListAllNodeResponseBody() = default ;
    ListAllNodeResponseBody(const ListAllNodeResponseBody &) = default ;
    ListAllNodeResponseBody(ListAllNodeResponseBody &&) = default ;
    ListAllNodeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAllNodeResponseBody() = default ;
    ListAllNodeResponseBody& operator=(const ListAllNodeResponseBody &) = default ;
    ListAllNodeResponseBody& operator=(ListAllNodeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->result_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAllNodeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ListAllNodeResponseBodyResult> & result() const { DARABONBA_PTR_GET_CONST(result_, vector<ListAllNodeResponseBodyResult>) };
    inline vector<ListAllNodeResponseBodyResult> result() { DARABONBA_PTR_GET(result_, vector<ListAllNodeResponseBodyResult>) };
    inline ListAllNodeResponseBody& setResult(const vector<ListAllNodeResponseBodyResult> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListAllNodeResponseBody& setResult(vector<ListAllNodeResponseBodyResult> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The zone ID of the node.
    std::shared_ptr<string> requestId_ = nullptr;
    // The CPU utilization.
    // 
    // >  If the **extended** request parameter is set to **true** and the monitoring information of the nodes in the cluster is being synchronized, the value of the cpuPercent parameter is null. In this case, you need to send a request again after 10 seconds to obtain the value of the cpuPercent parameter.
    std::shared_ptr<vector<ListAllNodeResponseBodyResult>> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
