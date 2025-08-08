// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINDEXESRESPONSEBODYINDEXLISTINDEX_HPP_
#define ALIBABACLOUD_MODELS_LISTINDEXESRESPONSEBODYINDEXLISTINDEX_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListIndexesResponseBodyIndexListIndex : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIndexesResponseBodyIndexListIndex& obj) { 
      DARABONBA_PTR_TO_JSON(IndexComment, indexComment_);
      DARABONBA_PTR_TO_JSON(IndexId, indexId_);
      DARABONBA_PTR_TO_JSON(IndexName, indexName_);
      DARABONBA_PTR_TO_JSON(IndexType, indexType_);
      DARABONBA_PTR_TO_JSON(TableId, tableId_);
    };
    friend void from_json(const Darabonba::Json& j, ListIndexesResponseBodyIndexListIndex& obj) { 
      DARABONBA_PTR_FROM_JSON(IndexComment, indexComment_);
      DARABONBA_PTR_FROM_JSON(IndexId, indexId_);
      DARABONBA_PTR_FROM_JSON(IndexName, indexName_);
      DARABONBA_PTR_FROM_JSON(IndexType, indexType_);
      DARABONBA_PTR_FROM_JSON(TableId, tableId_);
    };
    ListIndexesResponseBodyIndexListIndex() = default ;
    ListIndexesResponseBodyIndexListIndex(const ListIndexesResponseBodyIndexListIndex &) = default ;
    ListIndexesResponseBodyIndexListIndex(ListIndexesResponseBodyIndexListIndex &&) = default ;
    ListIndexesResponseBodyIndexListIndex(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIndexesResponseBodyIndexListIndex() = default ;
    ListIndexesResponseBodyIndexListIndex& operator=(const ListIndexesResponseBodyIndexListIndex &) = default ;
    ListIndexesResponseBodyIndexListIndex& operator=(ListIndexesResponseBodyIndexListIndex &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->indexComment_ != nullptr
        && this->indexId_ != nullptr && this->indexName_ != nullptr && this->indexType_ != nullptr && this->tableId_ != nullptr; };
    // indexComment Field Functions 
    bool hasIndexComment() const { return this->indexComment_ != nullptr;};
    void deleteIndexComment() { this->indexComment_ = nullptr;};
    inline string indexComment() const { DARABONBA_PTR_GET_DEFAULT(indexComment_, "") };
    inline ListIndexesResponseBodyIndexListIndex& setIndexComment(string indexComment) { DARABONBA_PTR_SET_VALUE(indexComment_, indexComment) };


    // indexId Field Functions 
    bool hasIndexId() const { return this->indexId_ != nullptr;};
    void deleteIndexId() { this->indexId_ = nullptr;};
    inline string indexId() const { DARABONBA_PTR_GET_DEFAULT(indexId_, "") };
    inline ListIndexesResponseBodyIndexListIndex& setIndexId(string indexId) { DARABONBA_PTR_SET_VALUE(indexId_, indexId) };


    // indexName Field Functions 
    bool hasIndexName() const { return this->indexName_ != nullptr;};
    void deleteIndexName() { this->indexName_ = nullptr;};
    inline string indexName() const { DARABONBA_PTR_GET_DEFAULT(indexName_, "") };
    inline ListIndexesResponseBodyIndexListIndex& setIndexName(string indexName) { DARABONBA_PTR_SET_VALUE(indexName_, indexName) };


    // indexType Field Functions 
    bool hasIndexType() const { return this->indexType_ != nullptr;};
    void deleteIndexType() { this->indexType_ = nullptr;};
    inline string indexType() const { DARABONBA_PTR_GET_DEFAULT(indexType_, "") };
    inline ListIndexesResponseBodyIndexListIndex& setIndexType(string indexType) { DARABONBA_PTR_SET_VALUE(indexType_, indexType) };


    // tableId Field Functions 
    bool hasTableId() const { return this->tableId_ != nullptr;};
    void deleteTableId() { this->tableId_ = nullptr;};
    inline string tableId() const { DARABONBA_PTR_GET_DEFAULT(tableId_, "") };
    inline ListIndexesResponseBodyIndexListIndex& setTableId(string tableId) { DARABONBA_PTR_SET_VALUE(tableId_, tableId) };


  protected:
    // The description of the index.
    std::shared_ptr<string> indexComment_ = nullptr;
    // The ID of the index.
    std::shared_ptr<string> indexId_ = nullptr;
    // The name of the index.
    std::shared_ptr<string> indexName_ = nullptr;
    // The type of the index. Valid values:
    // 
    // *   Primary
    // *   Unique
    // *   Normal
    // *   FullText
    // *   Spatial
    std::shared_ptr<string> indexType_ = nullptr;
    // The ID of the table.
    std::shared_ptr<string> tableId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
