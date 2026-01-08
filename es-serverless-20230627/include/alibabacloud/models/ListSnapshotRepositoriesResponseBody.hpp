// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSNAPSHOTREPOSITORIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSNAPSHOTREPOSITORIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EsServerless20230627
{
namespace Models
{
  class ListSnapshotRepositoriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSnapshotRepositoriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ListSnapshotRepositoriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
    };
    ListSnapshotRepositoriesResponseBody() = default ;
    ListSnapshotRepositoriesResponseBody(const ListSnapshotRepositoriesResponseBody &) = default ;
    ListSnapshotRepositoriesResponseBody(ListSnapshotRepositoriesResponseBody &&) = default ;
    ListSnapshotRepositoriesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSnapshotRepositoriesResponseBody() = default ;
    ListSnapshotRepositoriesResponseBody& operator=(const ListSnapshotRepositoriesResponseBody &) = default ;
    ListSnapshotRepositoriesResponseBody& operator=(ListSnapshotRepositoriesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSnapshotRepositoriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<Darabonba::Json> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> getResult() { DARABONBA_PTR_GET(result_, vector<Darabonba::Json>) };
    inline ListSnapshotRepositoriesResponseBody& setResult(const vector<Darabonba::Json> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListSnapshotRepositoriesResponseBody& setResult(vector<Darabonba::Json> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<Darabonba::Json>> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EsServerless20230627
#endif
