// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECHUNKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECHUNKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class UpdateChunkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateChunkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ChunkId, chunkId_);
      DARABONBA_PTR_TO_JSON(DataId, dataId_);
      DARABONBA_PTR_TO_JSON(IsDisplayedChunkContent, isDisplayedChunkContent_);
      DARABONBA_PTR_TO_JSON(PipelineId, pipelineId_);
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(title, title_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateChunkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ChunkId, chunkId_);
      DARABONBA_PTR_FROM_JSON(DataId, dataId_);
      DARABONBA_PTR_FROM_JSON(IsDisplayedChunkContent, isDisplayedChunkContent_);
      DARABONBA_PTR_FROM_JSON(PipelineId, pipelineId_);
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(title, title_);
    };
    UpdateChunkRequest() = default ;
    UpdateChunkRequest(const UpdateChunkRequest &) = default ;
    UpdateChunkRequest(UpdateChunkRequest &&) = default ;
    UpdateChunkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateChunkRequest() = default ;
    UpdateChunkRequest& operator=(const UpdateChunkRequest &) = default ;
    UpdateChunkRequest& operator=(UpdateChunkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->chunkId_ != nullptr
        && this->dataId_ != nullptr && this->isDisplayedChunkContent_ != nullptr && this->pipelineId_ != nullptr && this->content_ != nullptr && this->title_ != nullptr; };
    // chunkId Field Functions 
    bool hasChunkId() const { return this->chunkId_ != nullptr;};
    void deleteChunkId() { this->chunkId_ = nullptr;};
    inline string chunkId() const { DARABONBA_PTR_GET_DEFAULT(chunkId_, "") };
    inline UpdateChunkRequest& setChunkId(string chunkId) { DARABONBA_PTR_SET_VALUE(chunkId_, chunkId) };


    // dataId Field Functions 
    bool hasDataId() const { return this->dataId_ != nullptr;};
    void deleteDataId() { this->dataId_ = nullptr;};
    inline string dataId() const { DARABONBA_PTR_GET_DEFAULT(dataId_, "") };
    inline UpdateChunkRequest& setDataId(string dataId) { DARABONBA_PTR_SET_VALUE(dataId_, dataId) };


    // isDisplayedChunkContent Field Functions 
    bool hasIsDisplayedChunkContent() const { return this->isDisplayedChunkContent_ != nullptr;};
    void deleteIsDisplayedChunkContent() { this->isDisplayedChunkContent_ = nullptr;};
    inline bool isDisplayedChunkContent() const { DARABONBA_PTR_GET_DEFAULT(isDisplayedChunkContent_, false) };
    inline UpdateChunkRequest& setIsDisplayedChunkContent(bool isDisplayedChunkContent) { DARABONBA_PTR_SET_VALUE(isDisplayedChunkContent_, isDisplayedChunkContent) };


    // pipelineId Field Functions 
    bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
    void deletePipelineId() { this->pipelineId_ = nullptr;};
    inline string pipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, "") };
    inline UpdateChunkRequest& setPipelineId(string pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline UpdateChunkRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline UpdateChunkRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> chunkId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> dataId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<bool> isDisplayedChunkContent_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> pipelineId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
