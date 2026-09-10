// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATACHECKCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDATACHECKCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LHM20250116
{
namespace Models
{
  class ListDataCheckConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataCheckConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(pageIndex, pageIndex_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(srcTable, srcTable_);
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataCheckConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(pageIndex, pageIndex_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(srcTable, srcTable_);
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
    };
    ListDataCheckConfigRequest() = default ;
    ListDataCheckConfigRequest(const ListDataCheckConfigRequest &) = default ;
    ListDataCheckConfigRequest(ListDataCheckConfigRequest &&) = default ;
    ListDataCheckConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataCheckConfigRequest() = default ;
    ListDataCheckConfigRequest& operator=(const ListDataCheckConfigRequest &) = default ;
    ListDataCheckConfigRequest& operator=(ListDataCheckConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageIndex_ == nullptr
        && this->pageSize_ == nullptr && this->srcTable_ == nullptr && this->taskId_ == nullptr; };
    // pageIndex Field Functions 
    bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
    void deletePageIndex() { this->pageIndex_ = nullptr;};
    inline int32_t getPageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, 0) };
    inline ListDataCheckConfigRequest& setPageIndex(int32_t pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDataCheckConfigRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // srcTable Field Functions 
    bool hasSrcTable() const { return this->srcTable_ != nullptr;};
    void deleteSrcTable() { this->srcTable_ = nullptr;};
    inline string getSrcTable() const { DARABONBA_PTR_GET_DEFAULT(srcTable_, "") };
    inline ListDataCheckConfigRequest& setSrcTable(string srcTable) { DARABONBA_PTR_SET_VALUE(srcTable_, srcTable) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline ListDataCheckConfigRequest& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    shared_ptr<int32_t> pageIndex_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> srcTable_ {};
    // This parameter is required.
    shared_ptr<int64_t> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LHM20250116
#endif
