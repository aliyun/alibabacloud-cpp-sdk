// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECHUNKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECHUNKSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class DeleteChunkShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteChunkShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ChunkIds, chunkIdsShrink_);
      DARABONBA_PTR_TO_JSON(PipelineId, pipelineId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteChunkShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ChunkIds, chunkIdsShrink_);
      DARABONBA_PTR_FROM_JSON(PipelineId, pipelineId_);
    };
    DeleteChunkShrinkRequest() = default ;
    DeleteChunkShrinkRequest(const DeleteChunkShrinkRequest &) = default ;
    DeleteChunkShrinkRequest(DeleteChunkShrinkRequest &&) = default ;
    DeleteChunkShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteChunkShrinkRequest() = default ;
    DeleteChunkShrinkRequest& operator=(const DeleteChunkShrinkRequest &) = default ;
    DeleteChunkShrinkRequest& operator=(DeleteChunkShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->chunkIdsShrink_ != nullptr
        && this->pipelineId_ != nullptr; };
    // chunkIdsShrink Field Functions 
    bool hasChunkIdsShrink() const { return this->chunkIdsShrink_ != nullptr;};
    void deleteChunkIdsShrink() { this->chunkIdsShrink_ = nullptr;};
    inline string chunkIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(chunkIdsShrink_, "") };
    inline DeleteChunkShrinkRequest& setChunkIdsShrink(string chunkIdsShrink) { DARABONBA_PTR_SET_VALUE(chunkIdsShrink_, chunkIdsShrink) };


    // pipelineId Field Functions 
    bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
    void deletePipelineId() { this->pipelineId_ = nullptr;};
    inline string pipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, "") };
    inline DeleteChunkShrinkRequest& setPipelineId(string pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> chunkIdsShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> pipelineId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
