// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSYMBOLICFILESRESPONSEBODYMODEL_HPP_
#define ALIBABACLOUD_MODELS_GETSYMBOLICFILESRESPONSEBODYMODEL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetSymbolicFilesResponseBodyModelItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmasAppmonitor20190611
{
namespace Models
{
  class GetSymbolicFilesResponseBodyModel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSymbolicFilesResponseBodyModel& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Pages, pages_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, GetSymbolicFilesResponseBodyModel& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Pages, pages_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    GetSymbolicFilesResponseBodyModel() = default ;
    GetSymbolicFilesResponseBodyModel(const GetSymbolicFilesResponseBodyModel &) = default ;
    GetSymbolicFilesResponseBodyModel(GetSymbolicFilesResponseBodyModel &&) = default ;
    GetSymbolicFilesResponseBodyModel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSymbolicFilesResponseBodyModel() = default ;
    GetSymbolicFilesResponseBodyModel& operator=(const GetSymbolicFilesResponseBodyModel &) = default ;
    GetSymbolicFilesResponseBodyModel& operator=(GetSymbolicFilesResponseBodyModel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->items_ != nullptr
        && this->pageNum_ != nullptr && this->pageSize_ != nullptr && this->pages_ != nullptr && this->total_ != nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<Models::GetSymbolicFilesResponseBodyModelItems> & items() const { DARABONBA_PTR_GET_CONST(items_, vector<Models::GetSymbolicFilesResponseBodyModelItems>) };
    inline vector<Models::GetSymbolicFilesResponseBodyModelItems> items() { DARABONBA_PTR_GET(items_, vector<Models::GetSymbolicFilesResponseBodyModelItems>) };
    inline GetSymbolicFilesResponseBodyModel& setItems(const vector<Models::GetSymbolicFilesResponseBodyModelItems> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline GetSymbolicFilesResponseBodyModel& setItems(vector<Models::GetSymbolicFilesResponseBodyModelItems> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline GetSymbolicFilesResponseBodyModel& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetSymbolicFilesResponseBodyModel& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // pages Field Functions 
    bool hasPages() const { return this->pages_ != nullptr;};
    void deletePages() { this->pages_ = nullptr;};
    inline int32_t pages() const { DARABONBA_PTR_GET_DEFAULT(pages_, 0) };
    inline GetSymbolicFilesResponseBodyModel& setPages(int32_t pages) { DARABONBA_PTR_SET_VALUE(pages_, pages) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline GetSymbolicFilesResponseBodyModel& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    std::shared_ptr<vector<Models::GetSymbolicFilesResponseBodyModelItems>> items_ = nullptr;
    std::shared_ptr<int32_t> pageNum_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<int32_t> pages_ = nullptr;
    std::shared_ptr<int64_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmasAppmonitor20190611
#endif
