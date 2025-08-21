// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALTERNATIVESNAPSHOTREPOSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTALTERNATIVESNAPSHOTREPOSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAlternativeSnapshotReposResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListAlternativeSnapshotReposResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAlternativeSnapshotReposResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ListAlternativeSnapshotReposResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    ListAlternativeSnapshotReposResponseBody() = default ;
    ListAlternativeSnapshotReposResponseBody(const ListAlternativeSnapshotReposResponseBody &) = default ;
    ListAlternativeSnapshotReposResponseBody(ListAlternativeSnapshotReposResponseBody &&) = default ;
    ListAlternativeSnapshotReposResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAlternativeSnapshotReposResponseBody() = default ;
    ListAlternativeSnapshotReposResponseBody& operator=(const ListAlternativeSnapshotReposResponseBody &) = default ;
    ListAlternativeSnapshotReposResponseBody& operator=(ListAlternativeSnapshotReposResponseBody &&) = default ;
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
    inline ListAlternativeSnapshotReposResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ListAlternativeSnapshotReposResponseBodyResult> & result() const { DARABONBA_PTR_GET_CONST(result_, vector<ListAlternativeSnapshotReposResponseBodyResult>) };
    inline vector<ListAlternativeSnapshotReposResponseBodyResult> result() { DARABONBA_PTR_GET(result_, vector<ListAlternativeSnapshotReposResponseBodyResult>) };
    inline ListAlternativeSnapshotReposResponseBody& setResult(const vector<ListAlternativeSnapshotReposResponseBodyResult> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListAlternativeSnapshotReposResponseBody& setResult(vector<ListAlternativeSnapshotReposResponseBodyResult> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The return results.
    std::shared_ptr<vector<ListAlternativeSnapshotReposResponseBodyResult>> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
