// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAVAILABLEESINSTANCEIDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAVAILABLEESINSTANCEIDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAvailableEsInstanceIdsResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListAvailableEsInstanceIdsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAvailableEsInstanceIdsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ListAvailableEsInstanceIdsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    ListAvailableEsInstanceIdsResponseBody() = default ;
    ListAvailableEsInstanceIdsResponseBody(const ListAvailableEsInstanceIdsResponseBody &) = default ;
    ListAvailableEsInstanceIdsResponseBody(ListAvailableEsInstanceIdsResponseBody &&) = default ;
    ListAvailableEsInstanceIdsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAvailableEsInstanceIdsResponseBody() = default ;
    ListAvailableEsInstanceIdsResponseBody& operator=(const ListAvailableEsInstanceIdsResponseBody &) = default ;
    ListAvailableEsInstanceIdsResponseBody& operator=(ListAvailableEsInstanceIdsResponseBody &&) = default ;
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
    inline ListAvailableEsInstanceIdsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ListAvailableEsInstanceIdsResponseBodyResult> & result() const { DARABONBA_PTR_GET_CONST(result_, vector<ListAvailableEsInstanceIdsResponseBodyResult>) };
    inline vector<ListAvailableEsInstanceIdsResponseBodyResult> result() { DARABONBA_PTR_GET(result_, vector<ListAvailableEsInstanceIdsResponseBodyResult>) };
    inline ListAvailableEsInstanceIdsResponseBody& setResult(const vector<ListAvailableEsInstanceIdsResponseBodyResult> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListAvailableEsInstanceIdsResponseBody& setResult(vector<ListAvailableEsInstanceIdsResponseBodyResult> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The returned result.
    std::shared_ptr<vector<ListAvailableEsInstanceIdsResponseBodyResult>> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
