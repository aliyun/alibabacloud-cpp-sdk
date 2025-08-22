// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSYNTHETICTASKLISTRESPONSEBODYPAGEINFO_HPP_
#define ALIBABACLOUD_MODELS_GETSYNTHETICTASKLISTRESPONSEBODYPAGEINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetSyntheticTaskListResponseBodyPageInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetSyntheticTaskListResponseBodyPageInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSyntheticTaskListResponseBodyPageInfo& obj) { 
      DARABONBA_PTR_TO_JSON(HasNextPage, hasNextPage_);
      DARABONBA_PTR_TO_JSON(HasPreviousPage, hasPreviousPage_);
      DARABONBA_PTR_TO_JSON(IsFirstPage, isFirstPage_);
      DARABONBA_PTR_TO_JSON(IsLastPage, isLastPage_);
      DARABONBA_PTR_TO_JSON(List, list_);
      DARABONBA_PTR_TO_JSON(NavigateFirstPage, navigateFirstPage_);
      DARABONBA_PTR_TO_JSON(NavigateLastPage, navigateLastPage_);
      DARABONBA_PTR_TO_JSON(NavigatePageNums, navigatePageNums_);
      DARABONBA_PTR_TO_JSON(NextPage, nextPage_);
      DARABONBA_PTR_TO_JSON(Pages, pages_);
      DARABONBA_PTR_TO_JSON(Prepage, prepage_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, GetSyntheticTaskListResponseBodyPageInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(HasNextPage, hasNextPage_);
      DARABONBA_PTR_FROM_JSON(HasPreviousPage, hasPreviousPage_);
      DARABONBA_PTR_FROM_JSON(IsFirstPage, isFirstPage_);
      DARABONBA_PTR_FROM_JSON(IsLastPage, isLastPage_);
      DARABONBA_PTR_FROM_JSON(List, list_);
      DARABONBA_PTR_FROM_JSON(NavigateFirstPage, navigateFirstPage_);
      DARABONBA_PTR_FROM_JSON(NavigateLastPage, navigateLastPage_);
      DARABONBA_PTR_FROM_JSON(NavigatePageNums, navigatePageNums_);
      DARABONBA_PTR_FROM_JSON(NextPage, nextPage_);
      DARABONBA_PTR_FROM_JSON(Pages, pages_);
      DARABONBA_PTR_FROM_JSON(Prepage, prepage_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    GetSyntheticTaskListResponseBodyPageInfo() = default ;
    GetSyntheticTaskListResponseBodyPageInfo(const GetSyntheticTaskListResponseBodyPageInfo &) = default ;
    GetSyntheticTaskListResponseBodyPageInfo(GetSyntheticTaskListResponseBodyPageInfo &&) = default ;
    GetSyntheticTaskListResponseBodyPageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSyntheticTaskListResponseBodyPageInfo() = default ;
    GetSyntheticTaskListResponseBodyPageInfo& operator=(const GetSyntheticTaskListResponseBodyPageInfo &) = default ;
    GetSyntheticTaskListResponseBodyPageInfo& operator=(GetSyntheticTaskListResponseBodyPageInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->hasNextPage_ != nullptr
        && this->hasPreviousPage_ != nullptr && this->isFirstPage_ != nullptr && this->isLastPage_ != nullptr && this->list_ != nullptr && this->navigateFirstPage_ != nullptr
        && this->navigateLastPage_ != nullptr && this->navigatePageNums_ != nullptr && this->nextPage_ != nullptr && this->pages_ != nullptr && this->prepage_ != nullptr
        && this->size_ != nullptr && this->total_ != nullptr; };
    // hasNextPage Field Functions 
    bool hasHasNextPage() const { return this->hasNextPage_ != nullptr;};
    void deleteHasNextPage() { this->hasNextPage_ = nullptr;};
    inline string hasNextPage() const { DARABONBA_PTR_GET_DEFAULT(hasNextPage_, "") };
    inline GetSyntheticTaskListResponseBodyPageInfo& setHasNextPage(string hasNextPage) { DARABONBA_PTR_SET_VALUE(hasNextPage_, hasNextPage) };


    // hasPreviousPage Field Functions 
    bool hasHasPreviousPage() const { return this->hasPreviousPage_ != nullptr;};
    void deleteHasPreviousPage() { this->hasPreviousPage_ = nullptr;};
    inline bool hasPreviousPage() const { DARABONBA_PTR_GET_DEFAULT(hasPreviousPage_, false) };
    inline GetSyntheticTaskListResponseBodyPageInfo& setHasPreviousPage(bool hasPreviousPage) { DARABONBA_PTR_SET_VALUE(hasPreviousPage_, hasPreviousPage) };


    // isFirstPage Field Functions 
    bool hasIsFirstPage() const { return this->isFirstPage_ != nullptr;};
    void deleteIsFirstPage() { this->isFirstPage_ = nullptr;};
    inline bool isFirstPage() const { DARABONBA_PTR_GET_DEFAULT(isFirstPage_, false) };
    inline GetSyntheticTaskListResponseBodyPageInfo& setIsFirstPage(bool isFirstPage) { DARABONBA_PTR_SET_VALUE(isFirstPage_, isFirstPage) };


    // isLastPage Field Functions 
    bool hasIsLastPage() const { return this->isLastPage_ != nullptr;};
    void deleteIsLastPage() { this->isLastPage_ = nullptr;};
    inline bool isLastPage() const { DARABONBA_PTR_GET_DEFAULT(isLastPage_, false) };
    inline GetSyntheticTaskListResponseBodyPageInfo& setIsLastPage(bool isLastPage) { DARABONBA_PTR_SET_VALUE(isLastPage_, isLastPage) };


    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<Models::GetSyntheticTaskListResponseBodyPageInfoList> & list() const { DARABONBA_PTR_GET_CONST(list_, vector<Models::GetSyntheticTaskListResponseBodyPageInfoList>) };
    inline vector<Models::GetSyntheticTaskListResponseBodyPageInfoList> list() { DARABONBA_PTR_GET(list_, vector<Models::GetSyntheticTaskListResponseBodyPageInfoList>) };
    inline GetSyntheticTaskListResponseBodyPageInfo& setList(const vector<Models::GetSyntheticTaskListResponseBodyPageInfoList> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline GetSyntheticTaskListResponseBodyPageInfo& setList(vector<Models::GetSyntheticTaskListResponseBodyPageInfoList> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // navigateFirstPage Field Functions 
    bool hasNavigateFirstPage() const { return this->navigateFirstPage_ != nullptr;};
    void deleteNavigateFirstPage() { this->navigateFirstPage_ = nullptr;};
    inline string navigateFirstPage() const { DARABONBA_PTR_GET_DEFAULT(navigateFirstPage_, "") };
    inline GetSyntheticTaskListResponseBodyPageInfo& setNavigateFirstPage(string navigateFirstPage) { DARABONBA_PTR_SET_VALUE(navigateFirstPage_, navigateFirstPage) };


    // navigateLastPage Field Functions 
    bool hasNavigateLastPage() const { return this->navigateLastPage_ != nullptr;};
    void deleteNavigateLastPage() { this->navigateLastPage_ = nullptr;};
    inline string navigateLastPage() const { DARABONBA_PTR_GET_DEFAULT(navigateLastPage_, "") };
    inline GetSyntheticTaskListResponseBodyPageInfo& setNavigateLastPage(string navigateLastPage) { DARABONBA_PTR_SET_VALUE(navigateLastPage_, navigateLastPage) };


    // navigatePageNums Field Functions 
    bool hasNavigatePageNums() const { return this->navigatePageNums_ != nullptr;};
    void deleteNavigatePageNums() { this->navigatePageNums_ = nullptr;};
    inline string navigatePageNums() const { DARABONBA_PTR_GET_DEFAULT(navigatePageNums_, "") };
    inline GetSyntheticTaskListResponseBodyPageInfo& setNavigatePageNums(string navigatePageNums) { DARABONBA_PTR_SET_VALUE(navigatePageNums_, navigatePageNums) };


    // nextPage Field Functions 
    bool hasNextPage() const { return this->nextPage_ != nullptr;};
    void deleteNextPage() { this->nextPage_ = nullptr;};
    inline string nextPage() const { DARABONBA_PTR_GET_DEFAULT(nextPage_, "") };
    inline GetSyntheticTaskListResponseBodyPageInfo& setNextPage(string nextPage) { DARABONBA_PTR_SET_VALUE(nextPage_, nextPage) };


    // pages Field Functions 
    bool hasPages() const { return this->pages_ != nullptr;};
    void deletePages() { this->pages_ = nullptr;};
    inline string pages() const { DARABONBA_PTR_GET_DEFAULT(pages_, "") };
    inline GetSyntheticTaskListResponseBodyPageInfo& setPages(string pages) { DARABONBA_PTR_SET_VALUE(pages_, pages) };


    // prepage Field Functions 
    bool hasPrepage() const { return this->prepage_ != nullptr;};
    void deletePrepage() { this->prepage_ = nullptr;};
    inline string prepage() const { DARABONBA_PTR_GET_DEFAULT(prepage_, "") };
    inline GetSyntheticTaskListResponseBodyPageInfo& setPrepage(string prepage) { DARABONBA_PTR_SET_VALUE(prepage_, prepage) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline GetSyntheticTaskListResponseBodyPageInfo& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline GetSyntheticTaskListResponseBodyPageInfo& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // Indicates whether the current page is followed by a page.
    std::shared_ptr<string> hasNextPage_ = nullptr;
    // Indicates whether a previous page exists.
    std::shared_ptr<bool> hasPreviousPage_ = nullptr;
    // Indicates whether the page is the first page.
    std::shared_ptr<bool> isFirstPage_ = nullptr;
    // Indicates whether the page is the last page.
    std::shared_ptr<bool> isLastPage_ = nullptr;
    // The task information.
    std::shared_ptr<vector<Models::GetSyntheticTaskListResponseBodyPageInfoList>> list_ = nullptr;
    // The first page on the navigation bar.
    std::shared_ptr<string> navigateFirstPage_ = nullptr;
    // The last page on the navigation bar.
    std::shared_ptr<string> navigateLastPage_ = nullptr;
    // All navigation page numbers.
    std::shared_ptr<string> navigatePageNums_ = nullptr;
    // The next page.
    std::shared_ptr<string> nextPage_ = nullptr;
    // The total number of pages returned.
    std::shared_ptr<string> pages_ = nullptr;
    // The previous page.
    std::shared_ptr<string> prepage_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int64_t> size_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
