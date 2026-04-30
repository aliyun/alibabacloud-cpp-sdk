// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHTABLEASSETKNOWLEDGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHTABLEASSETKNOWLEDGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class SearchTableAssetKnowledgeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchTableAssetKnowledgeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DbId, dbId_);
      DARABONBA_PTR_TO_JSON(Offset, offset_);
      DARABONBA_PTR_TO_JSON(SearchKey, searchKey_);
      DARABONBA_PTR_TO_JSON(ShowType, showType_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
    };
    friend void from_json(const Darabonba::Json& j, SearchTableAssetKnowledgeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DbId, dbId_);
      DARABONBA_PTR_FROM_JSON(Offset, offset_);
      DARABONBA_PTR_FROM_JSON(SearchKey, searchKey_);
      DARABONBA_PTR_FROM_JSON(ShowType, showType_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
    };
    SearchTableAssetKnowledgeRequest() = default ;
    SearchTableAssetKnowledgeRequest(const SearchTableAssetKnowledgeRequest &) = default ;
    SearchTableAssetKnowledgeRequest(SearchTableAssetKnowledgeRequest &&) = default ;
    SearchTableAssetKnowledgeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchTableAssetKnowledgeRequest() = default ;
    SearchTableAssetKnowledgeRequest& operator=(const SearchTableAssetKnowledgeRequest &) = default ;
    SearchTableAssetKnowledgeRequest& operator=(SearchTableAssetKnowledgeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dbId_ == nullptr
        && this->offset_ == nullptr && this->searchKey_ == nullptr && this->showType_ == nullptr && this->size_ == nullptr && this->tableName_ == nullptr; };
    // dbId Field Functions 
    bool hasDbId() const { return this->dbId_ != nullptr;};
    void deleteDbId() { this->dbId_ = nullptr;};
    inline int32_t getDbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0) };
    inline SearchTableAssetKnowledgeRequest& setDbId(int32_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


    // offset Field Functions 
    bool hasOffset() const { return this->offset_ != nullptr;};
    void deleteOffset() { this->offset_ = nullptr;};
    inline int32_t getOffset() const { DARABONBA_PTR_GET_DEFAULT(offset_, 0) };
    inline SearchTableAssetKnowledgeRequest& setOffset(int32_t offset) { DARABONBA_PTR_SET_VALUE(offset_, offset) };


    // searchKey Field Functions 
    bool hasSearchKey() const { return this->searchKey_ != nullptr;};
    void deleteSearchKey() { this->searchKey_ = nullptr;};
    inline string getSearchKey() const { DARABONBA_PTR_GET_DEFAULT(searchKey_, "") };
    inline SearchTableAssetKnowledgeRequest& setSearchKey(string searchKey) { DARABONBA_PTR_SET_VALUE(searchKey_, searchKey) };


    // showType Field Functions 
    bool hasShowType() const { return this->showType_ != nullptr;};
    void deleteShowType() { this->showType_ = nullptr;};
    inline string getShowType() const { DARABONBA_PTR_GET_DEFAULT(showType_, "") };
    inline SearchTableAssetKnowledgeRequest& setShowType(string showType) { DARABONBA_PTR_SET_VALUE(showType_, showType) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline SearchTableAssetKnowledgeRequest& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline SearchTableAssetKnowledgeRequest& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    // This parameter is required.
    shared_ptr<int32_t> dbId_ {};
    shared_ptr<int32_t> offset_ {};
    shared_ptr<string> searchKey_ {};
    shared_ptr<string> showType_ {};
    shared_ptr<int32_t> size_ {};
    // This parameter is required.
    shared_ptr<string> tableName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
