// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSHARDRECOVERIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSHARDRECOVERIESRESPONSEBODY_HPP_
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
  class ListShardRecoveriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListShardRecoveriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ListShardRecoveriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    ListShardRecoveriesResponseBody() = default ;
    ListShardRecoveriesResponseBody(const ListShardRecoveriesResponseBody &) = default ;
    ListShardRecoveriesResponseBody(ListShardRecoveriesResponseBody &&) = default ;
    ListShardRecoveriesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListShardRecoveriesResponseBody() = default ;
    ListShardRecoveriesResponseBody& operator=(const ListShardRecoveriesResponseBody &) = default ;
    ListShardRecoveriesResponseBody& operator=(ListShardRecoveriesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(bytesPercent, bytesPercent_);
        DARABONBA_PTR_TO_JSON(bytesTotal, bytesTotal_);
        DARABONBA_PTR_TO_JSON(filesPercent, filesPercent_);
        DARABONBA_PTR_TO_JSON(filesTotal, filesTotal_);
        DARABONBA_PTR_TO_JSON(index, index_);
        DARABONBA_PTR_TO_JSON(sourceHost, sourceHost_);
        DARABONBA_PTR_TO_JSON(sourceNode, sourceNode_);
        DARABONBA_PTR_TO_JSON(stage, stage_);
        DARABONBA_PTR_TO_JSON(targetHost, targetHost_);
        DARABONBA_PTR_TO_JSON(targetNode, targetNode_);
        DARABONBA_PTR_TO_JSON(translogOps, translogOps_);
        DARABONBA_PTR_TO_JSON(translogOpsPercent, translogOpsPercent_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(bytesPercent, bytesPercent_);
        DARABONBA_PTR_FROM_JSON(bytesTotal, bytesTotal_);
        DARABONBA_PTR_FROM_JSON(filesPercent, filesPercent_);
        DARABONBA_PTR_FROM_JSON(filesTotal, filesTotal_);
        DARABONBA_PTR_FROM_JSON(index, index_);
        DARABONBA_PTR_FROM_JSON(sourceHost, sourceHost_);
        DARABONBA_PTR_FROM_JSON(sourceNode, sourceNode_);
        DARABONBA_PTR_FROM_JSON(stage, stage_);
        DARABONBA_PTR_FROM_JSON(targetHost, targetHost_);
        DARABONBA_PTR_FROM_JSON(targetNode, targetNode_);
        DARABONBA_PTR_FROM_JSON(translogOps, translogOps_);
        DARABONBA_PTR_FROM_JSON(translogOpsPercent, translogOpsPercent_);
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
      virtual bool empty() const override { return this->bytesPercent_ == nullptr
        && this->bytesTotal_ == nullptr && this->filesPercent_ == nullptr && this->filesTotal_ == nullptr && this->index_ == nullptr && this->sourceHost_ == nullptr
        && this->sourceNode_ == nullptr && this->stage_ == nullptr && this->targetHost_ == nullptr && this->targetNode_ == nullptr && this->translogOps_ == nullptr
        && this->translogOpsPercent_ == nullptr; };
      // bytesPercent Field Functions 
      bool hasBytesPercent() const { return this->bytesPercent_ != nullptr;};
      void deleteBytesPercent() { this->bytesPercent_ = nullptr;};
      inline string getBytesPercent() const { DARABONBA_PTR_GET_DEFAULT(bytesPercent_, "") };
      inline Result& setBytesPercent(string bytesPercent) { DARABONBA_PTR_SET_VALUE(bytesPercent_, bytesPercent) };


      // bytesTotal Field Functions 
      bool hasBytesTotal() const { return this->bytesTotal_ != nullptr;};
      void deleteBytesTotal() { this->bytesTotal_ = nullptr;};
      inline int64_t getBytesTotal() const { DARABONBA_PTR_GET_DEFAULT(bytesTotal_, 0L) };
      inline Result& setBytesTotal(int64_t bytesTotal) { DARABONBA_PTR_SET_VALUE(bytesTotal_, bytesTotal) };


      // filesPercent Field Functions 
      bool hasFilesPercent() const { return this->filesPercent_ != nullptr;};
      void deleteFilesPercent() { this->filesPercent_ = nullptr;};
      inline string getFilesPercent() const { DARABONBA_PTR_GET_DEFAULT(filesPercent_, "") };
      inline Result& setFilesPercent(string filesPercent) { DARABONBA_PTR_SET_VALUE(filesPercent_, filesPercent) };


      // filesTotal Field Functions 
      bool hasFilesTotal() const { return this->filesTotal_ != nullptr;};
      void deleteFilesTotal() { this->filesTotal_ = nullptr;};
      inline int64_t getFilesTotal() const { DARABONBA_PTR_GET_DEFAULT(filesTotal_, 0L) };
      inline Result& setFilesTotal(int64_t filesTotal) { DARABONBA_PTR_SET_VALUE(filesTotal_, filesTotal) };


      // index Field Functions 
      bool hasIndex() const { return this->index_ != nullptr;};
      void deleteIndex() { this->index_ = nullptr;};
      inline string getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, "") };
      inline Result& setIndex(string index) { DARABONBA_PTR_SET_VALUE(index_, index) };


      // sourceHost Field Functions 
      bool hasSourceHost() const { return this->sourceHost_ != nullptr;};
      void deleteSourceHost() { this->sourceHost_ = nullptr;};
      inline string getSourceHost() const { DARABONBA_PTR_GET_DEFAULT(sourceHost_, "") };
      inline Result& setSourceHost(string sourceHost) { DARABONBA_PTR_SET_VALUE(sourceHost_, sourceHost) };


      // sourceNode Field Functions 
      bool hasSourceNode() const { return this->sourceNode_ != nullptr;};
      void deleteSourceNode() { this->sourceNode_ = nullptr;};
      inline string getSourceNode() const { DARABONBA_PTR_GET_DEFAULT(sourceNode_, "") };
      inline Result& setSourceNode(string sourceNode) { DARABONBA_PTR_SET_VALUE(sourceNode_, sourceNode) };


      // stage Field Functions 
      bool hasStage() const { return this->stage_ != nullptr;};
      void deleteStage() { this->stage_ = nullptr;};
      inline string getStage() const { DARABONBA_PTR_GET_DEFAULT(stage_, "") };
      inline Result& setStage(string stage) { DARABONBA_PTR_SET_VALUE(stage_, stage) };


      // targetHost Field Functions 
      bool hasTargetHost() const { return this->targetHost_ != nullptr;};
      void deleteTargetHost() { this->targetHost_ = nullptr;};
      inline string getTargetHost() const { DARABONBA_PTR_GET_DEFAULT(targetHost_, "") };
      inline Result& setTargetHost(string targetHost) { DARABONBA_PTR_SET_VALUE(targetHost_, targetHost) };


      // targetNode Field Functions 
      bool hasTargetNode() const { return this->targetNode_ != nullptr;};
      void deleteTargetNode() { this->targetNode_ = nullptr;};
      inline string getTargetNode() const { DARABONBA_PTR_GET_DEFAULT(targetNode_, "") };
      inline Result& setTargetNode(string targetNode) { DARABONBA_PTR_SET_VALUE(targetNode_, targetNode) };


      // translogOps Field Functions 
      bool hasTranslogOps() const { return this->translogOps_ != nullptr;};
      void deleteTranslogOps() { this->translogOps_ = nullptr;};
      inline int64_t getTranslogOps() const { DARABONBA_PTR_GET_DEFAULT(translogOps_, 0L) };
      inline Result& setTranslogOps(int64_t translogOps) { DARABONBA_PTR_SET_VALUE(translogOps_, translogOps) };


      // translogOpsPercent Field Functions 
      bool hasTranslogOpsPercent() const { return this->translogOpsPercent_ != nullptr;};
      void deleteTranslogOpsPercent() { this->translogOpsPercent_ = nullptr;};
      inline string getTranslogOpsPercent() const { DARABONBA_PTR_GET_DEFAULT(translogOpsPercent_, "") };
      inline Result& setTranslogOpsPercent(string translogOpsPercent) { DARABONBA_PTR_SET_VALUE(translogOpsPercent_, translogOpsPercent) };


    protected:
      // The data restoration progress.
      shared_ptr<string> bytesPercent_ {};
      // The total amount of data that is restored.
      shared_ptr<int64_t> bytesTotal_ {};
      // The file execution progress.
      shared_ptr<string> filesPercent_ {};
      // The total number of files.
      shared_ptr<int64_t> filesTotal_ {};
      // The name of the index.
      shared_ptr<string> index_ {};
      // The IP address of the source node.
      shared_ptr<string> sourceHost_ {};
      // The name of the source node.
      shared_ptr<string> sourceNode_ {};
      // The data restoration status. Valid values:
      // 
      // *   done: Data restoration is complete.
      // *   finalize: Data is being cleared.
      // *   index: Index metadata is being read, and bytes are being copied from source to destination.
      // *   init: Data restoration is not started.
      // *   start: Data restoration is started.
      // *   translog: Translogs are being redone.
      shared_ptr<string> stage_ {};
      // The IP address of the destination node.
      shared_ptr<string> targetHost_ {};
      // The name of the destination node.
      shared_ptr<string> targetNode_ {};
      // The number of translog operations to be restored.
      shared_ptr<int64_t> translogOps_ {};
      // The restoration progress of translog operations.
      shared_ptr<string> translogOpsPercent_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListShardRecoveriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ListShardRecoveriesResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<ListShardRecoveriesResponseBody::Result>) };
    inline vector<ListShardRecoveriesResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<ListShardRecoveriesResponseBody::Result>) };
    inline ListShardRecoveriesResponseBody& setResult(const vector<ListShardRecoveriesResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListShardRecoveriesResponseBody& setResult(vector<ListShardRecoveriesResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The returned result.
    shared_ptr<vector<ListShardRecoveriesResponseBody::Result>> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
