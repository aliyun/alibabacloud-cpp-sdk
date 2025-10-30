// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OFFLINEPIPELINEREQUESTOFFLINECOMMAND_HPP_
#define ALIBABACLOUD_MODELS_OFFLINEPIPELINEREQUESTOFFLINECOMMAND_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class OfflinePipelineRequestOfflineCommand : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OfflinePipelineRequestOfflineCommand& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(Delete, delete_);
      DARABONBA_PTR_TO_JSON(FileId, fileId_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(PipelineId, pipelineId_);
    };
    friend void from_json(const Darabonba::Json& j, OfflinePipelineRequestOfflineCommand& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(Delete, delete_);
      DARABONBA_PTR_FROM_JSON(FileId, fileId_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(PipelineId, pipelineId_);
    };
    OfflinePipelineRequestOfflineCommand() = default ;
    OfflinePipelineRequestOfflineCommand(const OfflinePipelineRequestOfflineCommand &) = default ;
    OfflinePipelineRequestOfflineCommand(OfflinePipelineRequestOfflineCommand &&) = default ;
    OfflinePipelineRequestOfflineCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OfflinePipelineRequestOfflineCommand() = default ;
    OfflinePipelineRequestOfflineCommand& operator=(const OfflinePipelineRequestOfflineCommand &) = default ;
    OfflinePipelineRequestOfflineCommand& operator=(OfflinePipelineRequestOfflineCommand &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comment_ == nullptr
        && return this->delete_ == nullptr && return this->fileId_ == nullptr && return this->nodeId_ == nullptr && return this->pipelineId_ == nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline OfflinePipelineRequestOfflineCommand& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // delete Field Functions 
    bool hasDelete() const { return this->delete_ != nullptr;};
    void deleteDelete() { this->delete_ = nullptr;};
    inline bool _delete() const { DARABONBA_PTR_GET_DEFAULT(delete_, false) };
    inline OfflinePipelineRequestOfflineCommand& setDelete(bool _delete) { DARABONBA_PTR_SET_VALUE(delete_, _delete) };


    // fileId Field Functions 
    bool hasFileId() const { return this->fileId_ != nullptr;};
    void deleteFileId() { this->fileId_ = nullptr;};
    inline int64_t fileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, 0L) };
    inline OfflinePipelineRequestOfflineCommand& setFileId(int64_t fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline OfflinePipelineRequestOfflineCommand& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // pipelineId Field Functions 
    bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
    void deletePipelineId() { this->pipelineId_ = nullptr;};
    inline int64_t pipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, 0L) };
    inline OfflinePipelineRequestOfflineCommand& setPipelineId(int64_t pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


  protected:
    std::shared_ptr<string> comment_ = nullptr;
    // This parameter is required.
    std::shared_ptr<bool> delete_ = nullptr;
    std::shared_ptr<int64_t> fileId_ = nullptr;
    std::shared_ptr<string> nodeId_ = nullptr;
    std::shared_ptr<int64_t> pipelineId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
