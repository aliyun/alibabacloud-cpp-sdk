// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESEARCHINDEXREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESEARCHINDEXREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class CreateSearchIndexRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSearchIndexRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IndexConfig, indexConfig_);
      DARABONBA_PTR_TO_JSON(IndexStatus, indexStatus_);
      DARABONBA_PTR_TO_JSON(IndexType, indexType_);
      DARABONBA_PTR_TO_JSON(SearchLibName, searchLibName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSearchIndexRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IndexConfig, indexConfig_);
      DARABONBA_PTR_FROM_JSON(IndexStatus, indexStatus_);
      DARABONBA_PTR_FROM_JSON(IndexType, indexType_);
      DARABONBA_PTR_FROM_JSON(SearchLibName, searchLibName_);
    };
    CreateSearchIndexRequest() = default ;
    CreateSearchIndexRequest(const CreateSearchIndexRequest &) = default ;
    CreateSearchIndexRequest(CreateSearchIndexRequest &&) = default ;
    CreateSearchIndexRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSearchIndexRequest() = default ;
    CreateSearchIndexRequest& operator=(const CreateSearchIndexRequest &) = default ;
    CreateSearchIndexRequest& operator=(CreateSearchIndexRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->indexConfig_ != nullptr
        && this->indexStatus_ != nullptr && this->indexType_ != nullptr && this->searchLibName_ != nullptr; };
    // indexConfig Field Functions 
    bool hasIndexConfig() const { return this->indexConfig_ != nullptr;};
    void deleteIndexConfig() { this->indexConfig_ = nullptr;};
    inline string indexConfig() const { DARABONBA_PTR_GET_DEFAULT(indexConfig_, "") };
    inline CreateSearchIndexRequest& setIndexConfig(string indexConfig) { DARABONBA_PTR_SET_VALUE(indexConfig_, indexConfig) };


    // indexStatus Field Functions 
    bool hasIndexStatus() const { return this->indexStatus_ != nullptr;};
    void deleteIndexStatus() { this->indexStatus_ = nullptr;};
    inline string indexStatus() const { DARABONBA_PTR_GET_DEFAULT(indexStatus_, "") };
    inline CreateSearchIndexRequest& setIndexStatus(string indexStatus) { DARABONBA_PTR_SET_VALUE(indexStatus_, indexStatus) };


    // indexType Field Functions 
    bool hasIndexType() const { return this->indexType_ != nullptr;};
    void deleteIndexType() { this->indexType_ = nullptr;};
    inline string indexType() const { DARABONBA_PTR_GET_DEFAULT(indexType_, "") };
    inline CreateSearchIndexRequest& setIndexType(string indexType) { DARABONBA_PTR_SET_VALUE(indexType_, indexType) };


    // searchLibName Field Functions 
    bool hasSearchLibName() const { return this->searchLibName_ != nullptr;};
    void deleteSearchLibName() { this->searchLibName_ = nullptr;};
    inline string searchLibName() const { DARABONBA_PTR_GET_DEFAULT(searchLibName_, "") };
    inline CreateSearchIndexRequest& setSearchLibName(string searchLibName) { DARABONBA_PTR_SET_VALUE(searchLibName_, searchLibName) };


  protected:
    std::shared_ptr<string> indexConfig_ = nullptr;
    std::shared_ptr<string> indexStatus_ = nullptr;
    // The category of the index. Valid values:
    // 
    // *   mm: large visual model. You can use this model to describe complex visual features and identify and search for specific actions, movements, and events in videos, such as when athletes score a goal or get injured.
    // 
    // >  This feature is in the public preview phase. You can use this feature for free for 1,000 hours of videos.
    // 
    // *   face: face recognition. You can use the face recognition technology to describe face characteristics and automatically mark or search for faces in videos.
    // *   aiLabel: smart tagging. The smart tagging category is used to describe content such as subtitles and audio in videos. You can use the speech recognition technology to automatically extract, mark, and search for subtitles and dialog content from videos. This helps you quickly locate the video content that is related to specific topics or keywords.
    // 
    // This parameter is required.
    std::shared_ptr<string> indexType_ = nullptr;
    std::shared_ptr<string> searchLibName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
