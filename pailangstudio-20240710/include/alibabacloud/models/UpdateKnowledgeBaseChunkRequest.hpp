// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEKNOWLEDGEBASECHUNKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEKNOWLEDGEBASECHUNKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAILangStudio20240710
{
namespace Models
{
  class UpdateKnowledgeBaseChunkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateKnowledgeBaseChunkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ChunkContent, chunkContent_);
      DARABONBA_PTR_TO_JSON(ChunkStatus, chunkStatus_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateKnowledgeBaseChunkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ChunkContent, chunkContent_);
      DARABONBA_PTR_FROM_JSON(ChunkStatus, chunkStatus_);
    };
    UpdateKnowledgeBaseChunkRequest() = default ;
    UpdateKnowledgeBaseChunkRequest(const UpdateKnowledgeBaseChunkRequest &) = default ;
    UpdateKnowledgeBaseChunkRequest(UpdateKnowledgeBaseChunkRequest &&) = default ;
    UpdateKnowledgeBaseChunkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateKnowledgeBaseChunkRequest() = default ;
    UpdateKnowledgeBaseChunkRequest& operator=(const UpdateKnowledgeBaseChunkRequest &) = default ;
    UpdateKnowledgeBaseChunkRequest& operator=(UpdateKnowledgeBaseChunkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->chunkContent_ == nullptr
        && this->chunkStatus_ == nullptr; };
    // chunkContent Field Functions 
    bool hasChunkContent() const { return this->chunkContent_ != nullptr;};
    void deleteChunkContent() { this->chunkContent_ = nullptr;};
    inline string getChunkContent() const { DARABONBA_PTR_GET_DEFAULT(chunkContent_, "") };
    inline UpdateKnowledgeBaseChunkRequest& setChunkContent(string chunkContent) { DARABONBA_PTR_SET_VALUE(chunkContent_, chunkContent) };


    // chunkStatus Field Functions 
    bool hasChunkStatus() const { return this->chunkStatus_ != nullptr;};
    void deleteChunkStatus() { this->chunkStatus_ = nullptr;};
    inline string getChunkStatus() const { DARABONBA_PTR_GET_DEFAULT(chunkStatus_, "") };
    inline UpdateKnowledgeBaseChunkRequest& setChunkStatus(string chunkStatus) { DARABONBA_PTR_SET_VALUE(chunkStatus_, chunkStatus) };


  protected:
    shared_ptr<string> chunkContent_ {};
    shared_ptr<string> chunkStatus_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710
#endif
