// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSNAPSHOTREPOSBYINSTANCEIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSNAPSHOTREPOSBYINSTANCEIDRESPONSEBODY_HPP_
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
  class ListSnapshotReposByInstanceIdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSnapshotReposByInstanceIdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ListSnapshotReposByInstanceIdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    ListSnapshotReposByInstanceIdResponseBody() = default ;
    ListSnapshotReposByInstanceIdResponseBody(const ListSnapshotReposByInstanceIdResponseBody &) = default ;
    ListSnapshotReposByInstanceIdResponseBody(ListSnapshotReposByInstanceIdResponseBody &&) = default ;
    ListSnapshotReposByInstanceIdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSnapshotReposByInstanceIdResponseBody() = default ;
    ListSnapshotReposByInstanceIdResponseBody& operator=(const ListSnapshotReposByInstanceIdResponseBody &) = default ;
    ListSnapshotReposByInstanceIdResponseBody& operator=(ListSnapshotReposByInstanceIdResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(repoPath, repoPath_);
        DARABONBA_PTR_TO_JSON(snapWarehouse, snapWarehouse_);
        DARABONBA_PTR_TO_JSON(status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(repoPath, repoPath_);
        DARABONBA_PTR_FROM_JSON(snapWarehouse, snapWarehouse_);
        DARABONBA_PTR_FROM_JSON(status, status_);
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
        && this->repoPath_ == nullptr && this->snapWarehouse_ == nullptr && this->status_ == nullptr; };
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


      // snapWarehouse Field Functions 
      bool hasSnapWarehouse() const { return this->snapWarehouse_ != nullptr;};
      void deleteSnapWarehouse() { this->snapWarehouse_ = nullptr;};
      inline string getSnapWarehouse() const { DARABONBA_PTR_GET_DEFAULT(snapWarehouse_, "") };
      inline Result& setSnapWarehouse(string snapWarehouse) { DARABONBA_PTR_SET_VALUE(snapWarehouse_, snapWarehouse) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Result& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // Reference instance ID.
      shared_ptr<string> instanceId_ {};
      // The address of the repository.
      shared_ptr<string> repoPath_ {};
      // Reference warehouse name.
      shared_ptr<string> snapWarehouse_ {};
      // Reference warehouse status. available indicates that it is valid. unavailable indicates that it is invalid.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSnapshotReposByInstanceIdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ListSnapshotReposByInstanceIdResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<ListSnapshotReposByInstanceIdResponseBody::Result>) };
    inline vector<ListSnapshotReposByInstanceIdResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<ListSnapshotReposByInstanceIdResponseBody::Result>) };
    inline ListSnapshotReposByInstanceIdResponseBody& setResult(const vector<ListSnapshotReposByInstanceIdResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListSnapshotReposByInstanceIdResponseBody& setResult(vector<ListSnapshotReposByInstanceIdResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The return results.
    shared_ptr<vector<ListSnapshotReposByInstanceIdResponseBody::Result>> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
