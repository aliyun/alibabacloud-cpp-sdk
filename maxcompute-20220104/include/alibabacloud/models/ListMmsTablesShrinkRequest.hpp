// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMMSTABLESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMMSTABLESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
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
      DARABONBA_PTR_TO_JSON(dstName, dstName_);
      DARABONBA_PTR_TO_JSON(dstProjectName, dstProjectName_);
      DARABONBA_PTR_TO_JSON(dstSchemaName, dstSchemaName_);
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
      DARABONBA_PTR_FROM_JSON(dstName, dstName_);
      DARABONBA_PTR_FROM_JSON(dstProjectName, dstProjectName_);
      DARABONBA_PTR_FROM_JSON(dstSchemaName, dstSchemaName_);
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
    class Sorter : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Sorter& obj) { 
        DARABONBA_PTR_TO_JSON(lastDdlTime, lastDdlTime_);
        DARABONBA_PTR_TO_JSON(numRows, numRows_);
        DARABONBA_PTR_TO_JSON(size, size_);
      };
      friend void from_json(const Darabonba::Json& j, Sorter& obj) { 
        DARABONBA_PTR_FROM_JSON(lastDdlTime, lastDdlTime_);
        DARABONBA_PTR_FROM_JSON(numRows, numRows_);
        DARABONBA_PTR_FROM_JSON(size, size_);
      };
      Sorter() = default ;
      Sorter(const Sorter &) = default ;
      Sorter(Sorter &&) = default ;
      Sorter(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Sorter() = default ;
      Sorter& operator=(const Sorter &) = default ;
      Sorter& operator=(Sorter &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->lastDdlTime_ == nullptr
        && this->numRows_ == nullptr && this->size_ == nullptr; };
      // lastDdlTime Field Functions 
      bool hasLastDdlTime() const { return this->lastDdlTime_ != nullptr;};
      void deleteLastDdlTime() { this->lastDdlTime_ = nullptr;};
      inline string getLastDdlTime() const { DARABONBA_PTR_GET_DEFAULT(lastDdlTime_, "") };
      inline Sorter& setLastDdlTime(string lastDdlTime) { DARABONBA_PTR_SET_VALUE(lastDdlTime_, lastDdlTime) };


      // numRows Field Functions 
      bool hasNumRows() const { return this->numRows_ != nullptr;};
      void deleteNumRows() { this->numRows_ = nullptr;};
      inline string getNumRows() const { DARABONBA_PTR_GET_DEFAULT(numRows_, "") };
      inline Sorter& setNumRows(string numRows) { DARABONBA_PTR_SET_VALUE(numRows_, numRows) };


      // size Field Functions 
      bool hasSize() const { return this->size_ != nullptr;};
      void deleteSize() { this->size_ = nullptr;};
      inline string getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, "") };
      inline Sorter& setSize(string size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    protected:
      shared_ptr<string> lastDdlTime_ {};
      shared_ptr<string> numRows_ {};
      shared_ptr<string> size_ {};
    };

    virtual bool empty() const override { return this->sorter_ == nullptr
        && this->dbId_ == nullptr && this->dbName_ == nullptr && this->dstName_ == nullptr && this->dstProjectName_ == nullptr && this->dstSchemaName_ == nullptr
        && this->hasPartitions_ == nullptr && this->lastDdlTimeEnd_ == nullptr && this->lastDdlTimeStart_ == nullptr && this->name_ == nullptr && this->onlyName_ == nullptr
        && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->statusShrink_ == nullptr && this->type_ == nullptr; };
    // sorter Field Functions 
    bool hasSorter() const { return this->sorter_ != nullptr;};
    void deleteSorter() { this->sorter_ = nullptr;};
    inline const ListMmsTablesShrinkRequest::Sorter & getSorter() const { DARABONBA_PTR_GET_CONST(sorter_, ListMmsTablesShrinkRequest::Sorter) };
    inline ListMmsTablesShrinkRequest::Sorter getSorter() { DARABONBA_PTR_GET(sorter_, ListMmsTablesShrinkRequest::Sorter) };
    inline ListMmsTablesShrinkRequest& setSorter(const ListMmsTablesShrinkRequest::Sorter & sorter) { DARABONBA_PTR_SET_VALUE(sorter_, sorter) };
    inline ListMmsTablesShrinkRequest& setSorter(ListMmsTablesShrinkRequest::Sorter && sorter) { DARABONBA_PTR_SET_RVALUE(sorter_, sorter) };


    // dbId Field Functions 
    bool hasDbId() const { return this->dbId_ != nullptr;};
    void deleteDbId() { this->dbId_ = nullptr;};
    inline int64_t getDbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0L) };
    inline ListMmsTablesShrinkRequest& setDbId(int64_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string getDbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline ListMmsTablesShrinkRequest& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // dstName Field Functions 
    bool hasDstName() const { return this->dstName_ != nullptr;};
    void deleteDstName() { this->dstName_ = nullptr;};
    inline string getDstName() const { DARABONBA_PTR_GET_DEFAULT(dstName_, "") };
    inline ListMmsTablesShrinkRequest& setDstName(string dstName) { DARABONBA_PTR_SET_VALUE(dstName_, dstName) };


    // dstProjectName Field Functions 
    bool hasDstProjectName() const { return this->dstProjectName_ != nullptr;};
    void deleteDstProjectName() { this->dstProjectName_ = nullptr;};
    inline string getDstProjectName() const { DARABONBA_PTR_GET_DEFAULT(dstProjectName_, "") };
    inline ListMmsTablesShrinkRequest& setDstProjectName(string dstProjectName) { DARABONBA_PTR_SET_VALUE(dstProjectName_, dstProjectName) };


    // dstSchemaName Field Functions 
    bool hasDstSchemaName() const { return this->dstSchemaName_ != nullptr;};
    void deleteDstSchemaName() { this->dstSchemaName_ = nullptr;};
    inline string getDstSchemaName() const { DARABONBA_PTR_GET_DEFAULT(dstSchemaName_, "") };
    inline ListMmsTablesShrinkRequest& setDstSchemaName(string dstSchemaName) { DARABONBA_PTR_SET_VALUE(dstSchemaName_, dstSchemaName) };


    // hasPartitions Field Functions 
    bool hasHasPartitions() const { return this->hasPartitions_ != nullptr;};
    void deleteHasPartitions() { this->hasPartitions_ = nullptr;};
    inline bool getHasPartitions() const { DARABONBA_PTR_GET_DEFAULT(hasPartitions_, false) };
    inline ListMmsTablesShrinkRequest& setHasPartitions(bool hasPartitions) { DARABONBA_PTR_SET_VALUE(hasPartitions_, hasPartitions) };


    // lastDdlTimeEnd Field Functions 
    bool hasLastDdlTimeEnd() const { return this->lastDdlTimeEnd_ != nullptr;};
    void deleteLastDdlTimeEnd() { this->lastDdlTimeEnd_ = nullptr;};
    inline string getLastDdlTimeEnd() const { DARABONBA_PTR_GET_DEFAULT(lastDdlTimeEnd_, "") };
    inline ListMmsTablesShrinkRequest& setLastDdlTimeEnd(string lastDdlTimeEnd) { DARABONBA_PTR_SET_VALUE(lastDdlTimeEnd_, lastDdlTimeEnd) };


    // lastDdlTimeStart Field Functions 
    bool hasLastDdlTimeStart() const { return this->lastDdlTimeStart_ != nullptr;};
    void deleteLastDdlTimeStart() { this->lastDdlTimeStart_ = nullptr;};
    inline string getLastDdlTimeStart() const { DARABONBA_PTR_GET_DEFAULT(lastDdlTimeStart_, "") };
    inline ListMmsTablesShrinkRequest& setLastDdlTimeStart(string lastDdlTimeStart) { DARABONBA_PTR_SET_VALUE(lastDdlTimeStart_, lastDdlTimeStart) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListMmsTablesShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // onlyName Field Functions 
    bool hasOnlyName() const { return this->onlyName_ != nullptr;};
    void deleteOnlyName() { this->onlyName_ = nullptr;};
    inline bool getOnlyName() const { DARABONBA_PTR_GET_DEFAULT(onlyName_, false) };
    inline ListMmsTablesShrinkRequest& setOnlyName(bool onlyName) { DARABONBA_PTR_SET_VALUE(onlyName_, onlyName) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline ListMmsTablesShrinkRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListMmsTablesShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // statusShrink Field Functions 
    bool hasStatusShrink() const { return this->statusShrink_ != nullptr;};
    void deleteStatusShrink() { this->statusShrink_ = nullptr;};
    inline string getStatusShrink() const { DARABONBA_PTR_GET_DEFAULT(statusShrink_, "") };
    inline ListMmsTablesShrinkRequest& setStatusShrink(string statusShrink) { DARABONBA_PTR_SET_VALUE(statusShrink_, statusShrink) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListMmsTablesShrinkRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    shared_ptr<ListMmsTablesShrinkRequest::Sorter> sorter_ {};
    shared_ptr<int64_t> dbId_ {};
    shared_ptr<string> dbName_ {};
    shared_ptr<string> dstName_ {};
    shared_ptr<string> dstProjectName_ {};
    shared_ptr<string> dstSchemaName_ {};
    shared_ptr<bool> hasPartitions_ {};
    shared_ptr<string> lastDdlTimeEnd_ {};
    shared_ptr<string> lastDdlTimeStart_ {};
    shared_ptr<string> name_ {};
    shared_ptr<bool> onlyName_ {};
    shared_ptr<int32_t> pageNum_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> statusShrink_ {};
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
