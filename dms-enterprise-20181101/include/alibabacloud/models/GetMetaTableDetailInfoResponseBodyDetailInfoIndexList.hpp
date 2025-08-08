// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMETATABLEDETAILINFORESPONSEBODYDETAILINFOINDEXLIST_HPP_
#define ALIBABACLOUD_MODELS_GETMETATABLEDETAILINFORESPONSEBODYDETAILINFOINDEXLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetMetaTableDetailInfoResponseBodyDetailInfoIndexList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMetaTableDetailInfoResponseBodyDetailInfoIndexList& obj) { 
      DARABONBA_PTR_TO_JSON(IndexColumns, indexColumns_);
      DARABONBA_PTR_TO_JSON(IndexId, indexId_);
      DARABONBA_PTR_TO_JSON(IndexName, indexName_);
      DARABONBA_PTR_TO_JSON(IndexType, indexType_);
      DARABONBA_PTR_TO_JSON(Unique, unique_);
    };
    friend void from_json(const Darabonba::Json& j, GetMetaTableDetailInfoResponseBodyDetailInfoIndexList& obj) { 
      DARABONBA_PTR_FROM_JSON(IndexColumns, indexColumns_);
      DARABONBA_PTR_FROM_JSON(IndexId, indexId_);
      DARABONBA_PTR_FROM_JSON(IndexName, indexName_);
      DARABONBA_PTR_FROM_JSON(IndexType, indexType_);
      DARABONBA_PTR_FROM_JSON(Unique, unique_);
    };
    GetMetaTableDetailInfoResponseBodyDetailInfoIndexList() = default ;
    GetMetaTableDetailInfoResponseBodyDetailInfoIndexList(const GetMetaTableDetailInfoResponseBodyDetailInfoIndexList &) = default ;
    GetMetaTableDetailInfoResponseBodyDetailInfoIndexList(GetMetaTableDetailInfoResponseBodyDetailInfoIndexList &&) = default ;
    GetMetaTableDetailInfoResponseBodyDetailInfoIndexList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMetaTableDetailInfoResponseBodyDetailInfoIndexList() = default ;
    GetMetaTableDetailInfoResponseBodyDetailInfoIndexList& operator=(const GetMetaTableDetailInfoResponseBodyDetailInfoIndexList &) = default ;
    GetMetaTableDetailInfoResponseBodyDetailInfoIndexList& operator=(GetMetaTableDetailInfoResponseBodyDetailInfoIndexList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->indexColumns_ != nullptr
        && this->indexId_ != nullptr && this->indexName_ != nullptr && this->indexType_ != nullptr && this->unique_ != nullptr; };
    // indexColumns Field Functions 
    bool hasIndexColumns() const { return this->indexColumns_ != nullptr;};
    void deleteIndexColumns() { this->indexColumns_ = nullptr;};
    inline const vector<string> & indexColumns() const { DARABONBA_PTR_GET_CONST(indexColumns_, vector<string>) };
    inline vector<string> indexColumns() { DARABONBA_PTR_GET(indexColumns_, vector<string>) };
    inline GetMetaTableDetailInfoResponseBodyDetailInfoIndexList& setIndexColumns(const vector<string> & indexColumns) { DARABONBA_PTR_SET_VALUE(indexColumns_, indexColumns) };
    inline GetMetaTableDetailInfoResponseBodyDetailInfoIndexList& setIndexColumns(vector<string> && indexColumns) { DARABONBA_PTR_SET_RVALUE(indexColumns_, indexColumns) };


    // indexId Field Functions 
    bool hasIndexId() const { return this->indexId_ != nullptr;};
    void deleteIndexId() { this->indexId_ = nullptr;};
    inline string indexId() const { DARABONBA_PTR_GET_DEFAULT(indexId_, "") };
    inline GetMetaTableDetailInfoResponseBodyDetailInfoIndexList& setIndexId(string indexId) { DARABONBA_PTR_SET_VALUE(indexId_, indexId) };


    // indexName Field Functions 
    bool hasIndexName() const { return this->indexName_ != nullptr;};
    void deleteIndexName() { this->indexName_ = nullptr;};
    inline string indexName() const { DARABONBA_PTR_GET_DEFAULT(indexName_, "") };
    inline GetMetaTableDetailInfoResponseBodyDetailInfoIndexList& setIndexName(string indexName) { DARABONBA_PTR_SET_VALUE(indexName_, indexName) };


    // indexType Field Functions 
    bool hasIndexType() const { return this->indexType_ != nullptr;};
    void deleteIndexType() { this->indexType_ = nullptr;};
    inline string indexType() const { DARABONBA_PTR_GET_DEFAULT(indexType_, "") };
    inline GetMetaTableDetailInfoResponseBodyDetailInfoIndexList& setIndexType(string indexType) { DARABONBA_PTR_SET_VALUE(indexType_, indexType) };


    // unique Field Functions 
    bool hasUnique() const { return this->unique_ != nullptr;};
    void deleteUnique() { this->unique_ = nullptr;};
    inline bool unique() const { DARABONBA_PTR_GET_DEFAULT(unique_, false) };
    inline GetMetaTableDetailInfoResponseBodyDetailInfoIndexList& setUnique(bool unique) { DARABONBA_PTR_SET_VALUE(unique_, unique) };


  protected:
    // The index column.
    std::shared_ptr<vector<string>> indexColumns_ = nullptr;
    // The ID of the index.
    std::shared_ptr<string> indexId_ = nullptr;
    // The name of the index.
    std::shared_ptr<string> indexName_ = nullptr;
    // The type of the index. Examples: Primary, Unique, and Normal.
    std::shared_ptr<string> indexType_ = nullptr;
    // Indicates whether the index is unique. Valid values:
    // 
    // *   true: The index is unique.
    // *   false: The index is not unique.
    std::shared_ptr<bool> unique_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
