// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECHUNKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECHUNKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class DeleteChunkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteChunkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ChunkIds, chunkIds_);
      DARABONBA_PTR_TO_JSON(PipelineId, pipelineId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteChunkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ChunkIds, chunkIds_);
      DARABONBA_PTR_FROM_JSON(PipelineId, pipelineId_);
    };
    DeleteChunkRequest() = default ;
    DeleteChunkRequest(const DeleteChunkRequest &) = default ;
    DeleteChunkRequest(DeleteChunkRequest &&) = default ;
    DeleteChunkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteChunkRequest() = default ;
    DeleteChunkRequest& operator=(const DeleteChunkRequest &) = default ;
    DeleteChunkRequest& operator=(DeleteChunkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->chunkIds_ != nullptr
        && this->pipelineId_ != nullptr; };
    // chunkIds Field Functions 
    bool hasChunkIds() const { return this->chunkIds_ != nullptr;};
    void deleteChunkIds() { this->chunkIds_ = nullptr;};
    inline const vector<string> & chunkIds() const { DARABONBA_PTR_GET_CONST(chunkIds_, vector<string>) };
    inline vector<string> chunkIds() { DARABONBA_PTR_GET(chunkIds_, vector<string>) };
    inline DeleteChunkRequest& setChunkIds(const vector<string> & chunkIds) { DARABONBA_PTR_SET_VALUE(chunkIds_, chunkIds) };
    inline DeleteChunkRequest& setChunkIds(vector<string> && chunkIds) { DARABONBA_PTR_SET_RVALUE(chunkIds_, chunkIds) };


    // pipelineId Field Functions 
    bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
    void deletePipelineId() { this->pipelineId_ = nullptr;};
    inline string pipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, "") };
    inline DeleteChunkRequest& setPipelineId(string pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<string>> chunkIds_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> pipelineId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
