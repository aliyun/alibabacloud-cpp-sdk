// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMMSTABLESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMMSTABLESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListMmsTablesShrinkRequestSorter.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListMmsTablesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMmsTablesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(sorter, sorter_);
      DARABONBA_PTR_TO_JSON(dbId, dbId_);
      DARABONBA_PTR_TO_JSON(dbName, dbName_);
      DARABONBA_PTR_TO_JSON(hasPartitions, hasPartitions_);
      DARABONBA_PTR_TO_JSON(lastDdlTimeEnd, lastDdlTimeEnd_);
      DARABONBA_PTR_TO_JSON(lastDdlTimeStart, lastDdlTimeStart_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(onlyName, onlyName_);
      DARABONBA_PTR_TO_JSON(pageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(status, statusShrink_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListMmsTablesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(sorter, sorter_);
      DARABONBA_PTR_FROM_JSON(dbId, dbId_);
      DARABONBA_PTR_FROM_JSON(dbName, dbName_);
      DARABONBA_PTR_FROM_JSON(hasPartitions, hasPartitions_);
      DARABONBA_PTR_FROM_JSON(lastDdlTimeEnd, lastDdlTimeEnd_);
      DARABONBA_PTR_FROM_JSON(lastDdlTimeStart, lastDdlTimeStart_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(onlyName, onlyName_);
      DARABONBA_PTR_FROM_JSON(pageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(status, statusShrink_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    ListMmsTablesShrinkRequest() = default ;
    ListMmsTablesShrinkRequest(const ListMmsTablesShrinkRequest &) = default ;
    ListMmsTablesShrinkRequest(ListMmsTablesShrinkRequest &&) = default ;
    ListMmsTablesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMmsTablesShrinkRequest() = default ;
    ListMmsTablesShrinkRequest& operator=(const ListMmsTablesShrinkRequest &) = default ;
    ListMmsTablesShrinkRequest& operator=(ListMmsTablesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->sorter_ != nullptr
        && this->dbId_ != nullptr && this->dbName_ != nullptr && this->hasPartitions_ != nullptr && this->lastDdlTimeEnd_ != nullptr && this->lastDdlTimeStart_ != nullptr
        && this->name_ != nullptr && this->onlyName_ != nullptr && this->pageNum_ != nullptr && this->pageSize_ != nullptr && this->statusShrink_ != nullptr
        && this->type_ != nullptr; };
    // sorter Field Functions 
    bool hasSorter() const { return this->sorter_ != nullptr;};
    void deleteSorter() { this->sorter_ = nullptr;};
    inline const ListMmsTablesShrinkRequestSorter & sorter() const { DARABONBA_PTR_GET_CONST(sorter_, ListMmsTablesShrinkRequestSorter) };
    inline ListMmsTablesShrinkRequestSorter sorter() { DARABONBA_PTR_GET(sorter_, ListMmsTablesShrinkRequestSorter) };
    inline ListMmsTablesShrinkRequest& setSorter(const ListMmsTablesShrinkRequestSorter & sorter) { DARABONBA_PTR_SET_VALUE(sorter_, sorter) };
    inline ListMmsTablesShrinkRequest& setSorter(ListMmsTablesShrinkRequestSorter && sorter) { DARABONBA_PTR_SET_RVALUE(sorter_, sorter) };


    // dbId Field Functions 
    bool hasDbId() const { return this->dbId_ != nullptr;};
    void deleteDbId() { this->dbId_ = nullptr;};
    inline int64_t dbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0L) };
    inline ListMmsTablesShrinkRequest& setDbId(int64_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string dbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline ListMmsTablesShrinkRequest& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // hasPartitions Field Functions 
    bool hasHasPartitions() const { return this->hasPartitions_ != nullptr;};
    void deleteHasPartitions() { this->hasPartitions_ = nullptr;};
    inline bool hasPartitions() const { DARABONBA_PTR_GET_DEFAULT(hasPartitions_, false) };
    inline ListMmsTablesShrinkRequest& setHasPartitions(bool hasPartitions) { DARABONBA_PTR_SET_VALUE(hasPartitions_, hasPartitions) };


    // lastDdlTimeEnd Field Functions 
    bool hasLastDdlTimeEnd() const { return this->lastDdlTimeEnd_ != nullptr;};
    void deleteLastDdlTimeEnd() { this->lastDdlTimeEnd_ = nullptr;};
    inline string lastDdlTimeEnd() const { DARABONBA_PTR_GET_DEFAULT(lastDdlTimeEnd_, "") };
    inline ListMmsTablesShrinkRequest& setLastDdlTimeEnd(string lastDdlTimeEnd) { DARABONBA_PTR_SET_VALUE(lastDdlTimeEnd_, lastDdlTimeEnd) };


    // lastDdlTimeStart Field Functions 
    bool hasLastDdlTimeStart() const { return this->lastDdlTimeStart_ != nullptr;};
    void deleteLastDdlTimeStart() { this->lastDdlTimeStart_ = nullptr;};
    inline string lastDdlTimeStart() const { DARABONBA_PTR_GET_DEFAULT(lastDdlTimeStart_, "") };
    inline ListMmsTablesShrinkRequest& setLastDdlTimeStart(string lastDdlTimeStart) { DARABONBA_PTR_SET_VALUE(lastDdlTimeStart_, lastDdlTimeStart) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListMmsTablesShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // onlyName Field Functions 
    bool hasOnlyName() const { return this->onlyName_ != nullptr;};
    void deleteOnlyName() { this->onlyName_ = nullptr;};
    inline bool onlyName() const { DARABONBA_PTR_GET_DEFAULT(onlyName_, false) };
    inline ListMmsTablesShrinkRequest& setOnlyName(bool onlyName) { DARABONBA_PTR_SET_VALUE(onlyName_, onlyName) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline ListMmsTablesShrinkRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListMmsTablesShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // statusShrink Field Functions 
    bool hasStatusShrink() const { return this->statusShrink_ != nullptr;};
    void deleteStatusShrink() { this->statusShrink_ = nullptr;};
    inline string statusShrink() const { DARABONBA_PTR_GET_DEFAULT(statusShrink_, "") };
    inline ListMmsTablesShrinkRequest& setStatusShrink(string statusShrink) { DARABONBA_PTR_SET_VALUE(statusShrink_, statusShrink) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListMmsTablesShrinkRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<ListMmsTablesShrinkRequestSorter> sorter_ = nullptr;
    std::shared_ptr<int64_t> dbId_ = nullptr;
    std::shared_ptr<string> dbName_ = nullptr;
    std::shared_ptr<bool> hasPartitions_ = nullptr;
    std::shared_ptr<string> lastDdlTimeEnd_ = nullptr;
    std::shared_ptr<string> lastDdlTimeStart_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<bool> onlyName_ = nullptr;
    std::shared_ptr<int32_t> pageNum_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> statusShrink_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
