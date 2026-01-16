// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALTERNATIVESNAPSHOTREPOSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTALTERNATIVESNAPSHOTREPOSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(repoPath, repoPath_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(repoPath, repoPath_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->repoPath_ == nullptr; };
      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Result& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // repoPath Field Functions 
      bool hasRepoPath() const { return this->repoPath_ != nullptr;};
      void deleteRepoPath() { this->repoPath_ = nullptr;};
      inline string getRepoPath() const { DARABONBA_PTR_GET_DEFAULT(repoPath_, "") };
      inline Result& setRepoPath(string repoPath) { DARABONBA_PTR_SET_VALUE(repoPath_, repoPath) };


    protected:
      // The ID of the instance.
      shared_ptr<string> instanceId_ {};
      // The address of the repository.
      shared_ptr<string> repoPath_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAlternativeSnapshotReposResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ListAlternativeSnapshotReposResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<ListAlternativeSnapshotReposResponseBody::Result>) };
    inline vector<ListAlternativeSnapshotReposResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<ListAlternativeSnapshotReposResponseBody::Result>) };
    inline ListAlternativeSnapshotReposResponseBody& setResult(const vector<ListAlternativeSnapshotReposResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListAlternativeSnapshotReposResponseBody& setResult(vector<ListAlternativeSnapshotReposResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The return results.
    shared_ptr<vector<ListAlternativeSnapshotReposResponseBody::Result>> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
