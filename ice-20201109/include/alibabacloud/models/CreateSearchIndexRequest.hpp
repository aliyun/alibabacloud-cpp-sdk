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
    virtual bool empty() const override { return this->indexConfig_ == nullptr
        && this->indexStatus_ == nullptr && this->indexType_ == nullptr && this->searchLibName_ == nullptr; };
    // indexConfig Field Functions 
    bool hasIndexConfig() const { return this->indexConfig_ != nullptr;};
    void deleteIndexConfig() { this->indexConfig_ = nullptr;};
    inline string getIndexConfig() const { DARABONBA_PTR_GET_DEFAULT(indexConfig_, "") };
    inline CreateSearchIndexRequest& setIndexConfig(string indexConfig) { DARABONBA_PTR_SET_VALUE(indexConfig_, indexConfig) };


    // indexStatus Field Functions 
    bool hasIndexStatus() const { return this->indexStatus_ != nullptr;};
    void deleteIndexStatus() { this->indexStatus_ = nullptr;};
    inline string getIndexStatus() const { DARABONBA_PTR_GET_DEFAULT(indexStatus_, "") };
    inline CreateSearchIndexRequest& setIndexStatus(string indexStatus) { DARABONBA_PTR_SET_VALUE(indexStatus_, indexStatus) };


    // indexType Field Functions 
    bool hasIndexType() const { return this->indexType_ != nullptr;};
    void deleteIndexType() { this->indexType_ = nullptr;};
    inline string getIndexType() const { DARABONBA_PTR_GET_DEFAULT(indexType_, "") };
    inline CreateSearchIndexRequest& setIndexType(string indexType) { DARABONBA_PTR_SET_VALUE(indexType_, indexType) };


    // searchLibName Field Functions 
    bool hasSearchLibName() const { return this->searchLibName_ != nullptr;};
    void deleteSearchLibName() { this->searchLibName_ = nullptr;};
    inline string getSearchLibName() const { DARABONBA_PTR_GET_DEFAULT(searchLibName_, "") };
    inline CreateSearchIndexRequest& setSearchLibName(string searchLibName) { DARABONBA_PTR_SET_VALUE(searchLibName_, searchLibName) };


  protected:
    // The index configuration.
    shared_ptr<string> indexConfig_ {};
    // The index status. Default value: Active. Valid values:
    // - Active: activated.
    // - Deactive: deactivated.
    shared_ptr<string> indexStatus_ {};
    // The index type. Valid values:
    // - mm: large model visual state. Used to describe complex visual features and actions in videos. This type helps identify and search for specific actions, movements, and events in videos, such as a soccer player scoring a goal or a basketball player getting injured.
    // > 
    // > The shared instance type supports up to 1,000 hours of video. After the limit is exceeded, the system no longer performs large model visual state analysis.
    // - face: automatic face recognition. Used to describe facial features in videos. Through face recognition technology, faces in videos can be automatically tagged and searched.
    // > 
    // > The shared instance type supports up to 1,000,000 face analyses. After the limit is exceeded, the system no longer performs face analysis.
    // - aiLabel: intelligent tagging. The intelligent tagging index type is used to describe subtitles, speech, and other content in videos. Through text and speech recognition technology, language information such as subtitles and dialogues in videos can be automatically extracted for tagging and searching. This helps users quickly search for and locate content related to specific topics or keywords in videos.
    // 
    // This parameter is required.
    shared_ptr<string> indexType_ {};
    // The name of the search library.
    // 
    // - If you do not specify a search library name, the search index is created in the default IMS search library. Default value: ims-default-search-lib.
    // - You can call the [QuerySearchLib](https://help.aliyun.com/document_detail/2584455.html) operation to query information about existing search libraries.
    shared_ptr<string> searchLibName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
