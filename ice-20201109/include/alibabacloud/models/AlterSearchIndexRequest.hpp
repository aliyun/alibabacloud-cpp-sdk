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
    virtual bool empty() const override { return this->indexConfig_ == nullptr
        && this->indexStatus_ == nullptr && this->indexType_ == nullptr && this->searchLibName_ == nullptr; };
    // indexConfig Field Functions 
    bool hasIndexConfig() const { return this->indexConfig_ != nullptr;};
    void deleteIndexConfig() { this->indexConfig_ = nullptr;};
    inline string getIndexConfig() const { DARABONBA_PTR_GET_DEFAULT(indexConfig_, "") };
    inline AlterSearchIndexRequest& setIndexConfig(string indexConfig) { DARABONBA_PTR_SET_VALUE(indexConfig_, indexConfig) };


    // indexStatus Field Functions 
    bool hasIndexStatus() const { return this->indexStatus_ != nullptr;};
    void deleteIndexStatus() { this->indexStatus_ = nullptr;};
    inline string getIndexStatus() const { DARABONBA_PTR_GET_DEFAULT(indexStatus_, "") };
    inline AlterSearchIndexRequest& setIndexStatus(string indexStatus) { DARABONBA_PTR_SET_VALUE(indexStatus_, indexStatus) };


    // indexType Field Functions 
    bool hasIndexType() const { return this->indexType_ != nullptr;};
    void deleteIndexType() { this->indexType_ = nullptr;};
    inline string getIndexType() const { DARABONBA_PTR_GET_DEFAULT(indexType_, "") };
    inline AlterSearchIndexRequest& setIndexType(string indexType) { DARABONBA_PTR_SET_VALUE(indexType_, indexType) };


    // searchLibName Field Functions 
    bool hasSearchLibName() const { return this->searchLibName_ != nullptr;};
    void deleteSearchLibName() { this->searchLibName_ = nullptr;};
    inline string getSearchLibName() const { DARABONBA_PTR_GET_DEFAULT(searchLibName_, "") };
    inline AlterSearchIndexRequest& setSearchLibName(string searchLibName) { DARABONBA_PTR_SET_VALUE(searchLibName_, searchLibName) };


  protected:
    // The index configuration.
    // >Notice:  You must specify either IndexStatus or IndexConfig.
    shared_ptr<string> indexConfig_ {};
    // The index status. Default value: Active. Valid values:
    // - Active: activated.
    // - Deactive: deactivated.
    // 
    // >Notice:  You must specify either IndexStatus or IndexConfig.
    shared_ptr<string> indexStatus_ {};
    // The index type. Valid values:
    // - mm: large model.
    // - face: face.
    // - aiLabel: intelligent tag.
    // 
    // This parameter is required.
    shared_ptr<string> indexType_ {};
    // The search library name.
    // 
    // - If no search library name is specified, the search index is created in the default IMS search library. Default value: ims-default-search-lib.
    // - You can call the [QuerySearchLib](https://help.aliyun.com/document_detail/2584455.html) operation to query existing search library information.
    shared_ptr<string> searchLibName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
