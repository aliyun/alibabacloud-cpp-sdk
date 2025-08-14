// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALTERSEARCHINDEXREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ALTERSEARCHINDEXREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class AlterSearchIndexRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AlterSearchIndexRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IndexConfig, indexConfig_);
      DARABONBA_PTR_TO_JSON(IndexStatus, indexStatus_);
      DARABONBA_PTR_TO_JSON(IndexType, indexType_);
      DARABONBA_PTR_TO_JSON(SearchLibName, searchLibName_);
    };
    friend void from_json(const Darabonba::Json& j, AlterSearchIndexRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IndexConfig, indexConfig_);
      DARABONBA_PTR_FROM_JSON(IndexStatus, indexStatus_);
      DARABONBA_PTR_FROM_JSON(IndexType, indexType_);
      DARABONBA_PTR_FROM_JSON(SearchLibName, searchLibName_);
    };
    AlterSearchIndexRequest() = default ;
    AlterSearchIndexRequest(const AlterSearchIndexRequest &) = default ;
    AlterSearchIndexRequest(AlterSearchIndexRequest &&) = default ;
    AlterSearchIndexRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AlterSearchIndexRequest() = default ;
    AlterSearchIndexRequest& operator=(const AlterSearchIndexRequest &) = default ;
    AlterSearchIndexRequest& operator=(AlterSearchIndexRequest &&) = default ;
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
    inline AlterSearchIndexRequest& setIndexConfig(string indexConfig) { DARABONBA_PTR_SET_VALUE(indexConfig_, indexConfig) };


    // indexStatus Field Functions 
    bool hasIndexStatus() const { return this->indexStatus_ != nullptr;};
    void deleteIndexStatus() { this->indexStatus_ = nullptr;};
    inline string indexStatus() const { DARABONBA_PTR_GET_DEFAULT(indexStatus_, "") };
    inline AlterSearchIndexRequest& setIndexStatus(string indexStatus) { DARABONBA_PTR_SET_VALUE(indexStatus_, indexStatus) };


    // indexType Field Functions 
    bool hasIndexType() const { return this->indexType_ != nullptr;};
    void deleteIndexType() { this->indexType_ = nullptr;};
    inline string indexType() const { DARABONBA_PTR_GET_DEFAULT(indexType_, "") };
    inline AlterSearchIndexRequest& setIndexType(string indexType) { DARABONBA_PTR_SET_VALUE(indexType_, indexType) };


    // searchLibName Field Functions 
    bool hasSearchLibName() const { return this->searchLibName_ != nullptr;};
    void deleteSearchLibName() { this->searchLibName_ = nullptr;};
    inline string searchLibName() const { DARABONBA_PTR_GET_DEFAULT(searchLibName_, "") };
    inline AlterSearchIndexRequest& setSearchLibName(string searchLibName) { DARABONBA_PTR_SET_VALUE(searchLibName_, searchLibName) };


  protected:
    // The configurations of the index.
    // 
    // >  You must specify either IndexStatus or IndexConfig.
    std::shared_ptr<string> indexConfig_ = nullptr;
    // The state of the index. Valid values:
    // 
    // *   active (default): the index is enabled.
    // *   Deactive: the index is not enabled.
    // 
    // >  You must specify either IndexStatus or IndexConfig.
    std::shared_ptr<string> indexStatus_ = nullptr;
    // The category of the index. Valid values:
    // 
    // *   mm: large visual model.
    // *   face: face recognition.
    // *   aiLabel: smart tagging.
    // 
    // This parameter is required.
    std::shared_ptr<string> indexType_ = nullptr;
    // The name of the search library.
    // 
    // *   If you leave this parameter empty, the search index is created in the default search library of Intelligent Media Service (IMS). Default value: ims-default-search-lib.
    // *   To query information about an existing search library, call the [QuerySearchLib](https://help.aliyun.com/document_detail/2584455.html) API operation.
    std::shared_ptr<string> searchLibName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
