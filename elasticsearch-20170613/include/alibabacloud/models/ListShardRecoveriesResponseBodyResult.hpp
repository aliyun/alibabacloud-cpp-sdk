// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSHARDRECOVERIESRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTSHARDRECOVERIESRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListShardRecoveriesResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListShardRecoveriesResponseBodyResult& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListShardRecoveriesResponseBodyResult& obj) { 
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
    ListShardRecoveriesResponseBodyResult() = default ;
    ListShardRecoveriesResponseBodyResult(const ListShardRecoveriesResponseBodyResult &) = default ;
    ListShardRecoveriesResponseBodyResult(ListShardRecoveriesResponseBodyResult &&) = default ;
    ListShardRecoveriesResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListShardRecoveriesResponseBodyResult() = default ;
    ListShardRecoveriesResponseBodyResult& operator=(const ListShardRecoveriesResponseBodyResult &) = default ;
    ListShardRecoveriesResponseBodyResult& operator=(ListShardRecoveriesResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bytesPercent_ != nullptr
        && this->bytesTotal_ != nullptr && this->filesPercent_ != nullptr && this->filesTotal_ != nullptr && this->index_ != nullptr && this->sourceHost_ != nullptr
        && this->sourceNode_ != nullptr && this->stage_ != nullptr && this->targetHost_ != nullptr && this->targetNode_ != nullptr && this->translogOps_ != nullptr
        && this->translogOpsPercent_ != nullptr; };
    // bytesPercent Field Functions 
    bool hasBytesPercent() const { return this->bytesPercent_ != nullptr;};
    void deleteBytesPercent() { this->bytesPercent_ = nullptr;};
    inline string bytesPercent() const { DARABONBA_PTR_GET_DEFAULT(bytesPercent_, "") };
    inline ListShardRecoveriesResponseBodyResult& setBytesPercent(string bytesPercent) { DARABONBA_PTR_SET_VALUE(bytesPercent_, bytesPercent) };


    // bytesTotal Field Functions 
    bool hasBytesTotal() const { return this->bytesTotal_ != nullptr;};
    void deleteBytesTotal() { this->bytesTotal_ = nullptr;};
    inline int64_t bytesTotal() const { DARABONBA_PTR_GET_DEFAULT(bytesTotal_, 0L) };
    inline ListShardRecoveriesResponseBodyResult& setBytesTotal(int64_t bytesTotal) { DARABONBA_PTR_SET_VALUE(bytesTotal_, bytesTotal) };


    // filesPercent Field Functions 
    bool hasFilesPercent() const { return this->filesPercent_ != nullptr;};
    void deleteFilesPercent() { this->filesPercent_ = nullptr;};
    inline string filesPercent() const { DARABONBA_PTR_GET_DEFAULT(filesPercent_, "") };
    inline ListShardRecoveriesResponseBodyResult& setFilesPercent(string filesPercent) { DARABONBA_PTR_SET_VALUE(filesPercent_, filesPercent) };


    // filesTotal Field Functions 
    bool hasFilesTotal() const { return this->filesTotal_ != nullptr;};
    void deleteFilesTotal() { this->filesTotal_ = nullptr;};
    inline int64_t filesTotal() const { DARABONBA_PTR_GET_DEFAULT(filesTotal_, 0L) };
    inline ListShardRecoveriesResponseBodyResult& setFilesTotal(int64_t filesTotal) { DARABONBA_PTR_SET_VALUE(filesTotal_, filesTotal) };


    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline string index() const { DARABONBA_PTR_GET_DEFAULT(index_, "") };
    inline ListShardRecoveriesResponseBodyResult& setIndex(string index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // sourceHost Field Functions 
    bool hasSourceHost() const { return this->sourceHost_ != nullptr;};
    void deleteSourceHost() { this->sourceHost_ = nullptr;};
    inline string sourceHost() const { DARABONBA_PTR_GET_DEFAULT(sourceHost_, "") };
    inline ListShardRecoveriesResponseBodyResult& setSourceHost(string sourceHost) { DARABONBA_PTR_SET_VALUE(sourceHost_, sourceHost) };


    // sourceNode Field Functions 
    bool hasSourceNode() const { return this->sourceNode_ != nullptr;};
    void deleteSourceNode() { this->sourceNode_ = nullptr;};
    inline string sourceNode() const { DARABONBA_PTR_GET_DEFAULT(sourceNode_, "") };
    inline ListShardRecoveriesResponseBodyResult& setSourceNode(string sourceNode) { DARABONBA_PTR_SET_VALUE(sourceNode_, sourceNode) };


    // stage Field Functions 
    bool hasStage() const { return this->stage_ != nullptr;};
    void deleteStage() { this->stage_ = nullptr;};
    inline string stage() const { DARABONBA_PTR_GET_DEFAULT(stage_, "") };
    inline ListShardRecoveriesResponseBodyResult& setStage(string stage) { DARABONBA_PTR_SET_VALUE(stage_, stage) };


    // targetHost Field Functions 
    bool hasTargetHost() const { return this->targetHost_ != nullptr;};
    void deleteTargetHost() { this->targetHost_ = nullptr;};
    inline string targetHost() const { DARABONBA_PTR_GET_DEFAULT(targetHost_, "") };
    inline ListShardRecoveriesResponseBodyResult& setTargetHost(string targetHost) { DARABONBA_PTR_SET_VALUE(targetHost_, targetHost) };


    // targetNode Field Functions 
    bool hasTargetNode() const { return this->targetNode_ != nullptr;};
    void deleteTargetNode() { this->targetNode_ = nullptr;};
    inline string targetNode() const { DARABONBA_PTR_GET_DEFAULT(targetNode_, "") };
    inline ListShardRecoveriesResponseBodyResult& setTargetNode(string targetNode) { DARABONBA_PTR_SET_VALUE(targetNode_, targetNode) };


    // translogOps Field Functions 
    bool hasTranslogOps() const { return this->translogOps_ != nullptr;};
    void deleteTranslogOps() { this->translogOps_ = nullptr;};
    inline int64_t translogOps() const { DARABONBA_PTR_GET_DEFAULT(translogOps_, 0L) };
    inline ListShardRecoveriesResponseBodyResult& setTranslogOps(int64_t translogOps) { DARABONBA_PTR_SET_VALUE(translogOps_, translogOps) };


    // translogOpsPercent Field Functions 
    bool hasTranslogOpsPercent() const { return this->translogOpsPercent_ != nullptr;};
    void deleteTranslogOpsPercent() { this->translogOpsPercent_ = nullptr;};
    inline string translogOpsPercent() const { DARABONBA_PTR_GET_DEFAULT(translogOpsPercent_, "") };
    inline ListShardRecoveriesResponseBodyResult& setTranslogOpsPercent(string translogOpsPercent) { DARABONBA_PTR_SET_VALUE(translogOpsPercent_, translogOpsPercent) };


  protected:
    // The data restoration progress.
    std::shared_ptr<string> bytesPercent_ = nullptr;
    // The total amount of data that is restored.
    std::shared_ptr<int64_t> bytesTotal_ = nullptr;
    // The file execution progress.
    std::shared_ptr<string> filesPercent_ = nullptr;
    // The total number of files.
    std::shared_ptr<int64_t> filesTotal_ = nullptr;
    // The name of the index.
    std::shared_ptr<string> index_ = nullptr;
    // The IP address of the source node.
    std::shared_ptr<string> sourceHost_ = nullptr;
    // The name of the source node.
    std::shared_ptr<string> sourceNode_ = nullptr;
    // The data restoration status. Valid values:
    // 
    // *   done: Data restoration is complete.
    // *   finalize: Data is being cleared.
    // *   index: Index metadata is being read, and bytes are being copied from source to destination.
    // *   init: Data restoration is not started.
    // *   start: Data restoration is started.
    // *   translog: Translogs are being redone.
    std::shared_ptr<string> stage_ = nullptr;
    // The IP address of the destination node.
    std::shared_ptr<string> targetHost_ = nullptr;
    // The name of the destination node.
    std::shared_ptr<string> targetNode_ = nullptr;
    // The number of translog operations to be restored.
    std::shared_ptr<int64_t> translogOps_ = nullptr;
    // The restoration progress of translog operations.
    std::shared_ptr<string> translogOpsPercent_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
