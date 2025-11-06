// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPDOMAINREDIRECTRECORDSRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPDOMAINREDIRECTRECORDSRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAppDomainRedirectRecordsResponseBodyModuleData.hpp>
#include <alibabacloud/models/ListAppDomainRedirectRecordsResponseBodyModuleNext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class ListAppDomainRedirectRecordsResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAppDomainRedirectRecordsResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPageNum, currentPageNum_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Next, next_);
      DARABONBA_PTR_TO_JSON(NextPage, nextPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PrePage, prePage_);
      DARABONBA_PTR_TO_JSON(ResultLimit, resultLimit_);
      DARABONBA_PTR_TO_JSON(TotalItemNum, totalItemNum_);
      DARABONBA_PTR_TO_JSON(TotalPageNum, totalPageNum_);
    };
    friend void from_json(const Darabonba::Json& j, ListAppDomainRedirectRecordsResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPageNum, currentPageNum_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Next, next_);
      DARABONBA_PTR_FROM_JSON(NextPage, nextPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PrePage, prePage_);
      DARABONBA_PTR_FROM_JSON(ResultLimit, resultLimit_);
      DARABONBA_PTR_FROM_JSON(TotalItemNum, totalItemNum_);
      DARABONBA_PTR_FROM_JSON(TotalPageNum, totalPageNum_);
    };
    ListAppDomainRedirectRecordsResponseBodyModule() = default ;
    ListAppDomainRedirectRecordsResponseBodyModule(const ListAppDomainRedirectRecordsResponseBodyModule &) = default ;
    ListAppDomainRedirectRecordsResponseBodyModule(ListAppDomainRedirectRecordsResponseBodyModule &&) = default ;
    ListAppDomainRedirectRecordsResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAppDomainRedirectRecordsResponseBodyModule() = default ;
    ListAppDomainRedirectRecordsResponseBodyModule& operator=(const ListAppDomainRedirectRecordsResponseBodyModule &) = default ;
    ListAppDomainRedirectRecordsResponseBodyModule& operator=(ListAppDomainRedirectRecordsResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPageNum_ == nullptr
        && return this->data_ == nullptr && return this->next_ == nullptr && return this->nextPage_ == nullptr && return this->pageSize_ == nullptr && return this->prePage_ == nullptr
        && return this->resultLimit_ == nullptr && return this->totalItemNum_ == nullptr && return this->totalPageNum_ == nullptr; };
    // currentPageNum Field Functions 
    bool hasCurrentPageNum() const { return this->currentPageNum_ != nullptr;};
    void deleteCurrentPageNum() { this->currentPageNum_ = nullptr;};
    inline int32_t currentPageNum() const { DARABONBA_PTR_GET_DEFAULT(currentPageNum_, 0) };
    inline ListAppDomainRedirectRecordsResponseBodyModule& setCurrentPageNum(int32_t currentPageNum) { DARABONBA_PTR_SET_VALUE(currentPageNum_, currentPageNum) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<Models::ListAppDomainRedirectRecordsResponseBodyModuleData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<Models::ListAppDomainRedirectRecordsResponseBodyModuleData>) };
    inline vector<Models::ListAppDomainRedirectRecordsResponseBodyModuleData> data() { DARABONBA_PTR_GET(data_, vector<Models::ListAppDomainRedirectRecordsResponseBodyModuleData>) };
    inline ListAppDomainRedirectRecordsResponseBodyModule& setData(const vector<Models::ListAppDomainRedirectRecordsResponseBodyModuleData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListAppDomainRedirectRecordsResponseBodyModule& setData(vector<Models::ListAppDomainRedirectRecordsResponseBodyModuleData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // next Field Functions 
    bool hasNext() const { return this->next_ != nullptr;};
    void deleteNext() { this->next_ = nullptr;};
    inline const Models::ListAppDomainRedirectRecordsResponseBodyModuleNext & next() const { DARABONBA_PTR_GET_CONST(next_, Models::ListAppDomainRedirectRecordsResponseBodyModuleNext) };
    inline Models::ListAppDomainRedirectRecordsResponseBodyModuleNext next() { DARABONBA_PTR_GET(next_, Models::ListAppDomainRedirectRecordsResponseBodyModuleNext) };
    inline ListAppDomainRedirectRecordsResponseBodyModule& setNext(const Models::ListAppDomainRedirectRecordsResponseBodyModuleNext & next) { DARABONBA_PTR_SET_VALUE(next_, next) };
    inline ListAppDomainRedirectRecordsResponseBodyModule& setNext(Models::ListAppDomainRedirectRecordsResponseBodyModuleNext && next) { DARABONBA_PTR_SET_RVALUE(next_, next) };


    // nextPage Field Functions 
    bool hasNextPage() const { return this->nextPage_ != nullptr;};
    void deleteNextPage() { this->nextPage_ = nullptr;};
    inline bool nextPage() const { DARABONBA_PTR_GET_DEFAULT(nextPage_, false) };
    inline ListAppDomainRedirectRecordsResponseBodyModule& setNextPage(bool nextPage) { DARABONBA_PTR_SET_VALUE(nextPage_, nextPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAppDomainRedirectRecordsResponseBodyModule& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // prePage Field Functions 
    bool hasPrePage() const { return this->prePage_ != nullptr;};
    void deletePrePage() { this->prePage_ = nullptr;};
    inline bool prePage() const { DARABONBA_PTR_GET_DEFAULT(prePage_, false) };
    inline ListAppDomainRedirectRecordsResponseBodyModule& setPrePage(bool prePage) { DARABONBA_PTR_SET_VALUE(prePage_, prePage) };


    // resultLimit Field Functions 
    bool hasResultLimit() const { return this->resultLimit_ != nullptr;};
    void deleteResultLimit() { this->resultLimit_ = nullptr;};
    inline bool resultLimit() const { DARABONBA_PTR_GET_DEFAULT(resultLimit_, false) };
    inline ListAppDomainRedirectRecordsResponseBodyModule& setResultLimit(bool resultLimit) { DARABONBA_PTR_SET_VALUE(resultLimit_, resultLimit) };


    // totalItemNum Field Functions 
    bool hasTotalItemNum() const { return this->totalItemNum_ != nullptr;};
    void deleteTotalItemNum() { this->totalItemNum_ = nullptr;};
    inline int32_t totalItemNum() const { DARABONBA_PTR_GET_DEFAULT(totalItemNum_, 0) };
    inline ListAppDomainRedirectRecordsResponseBodyModule& setTotalItemNum(int32_t totalItemNum) { DARABONBA_PTR_SET_VALUE(totalItemNum_, totalItemNum) };


    // totalPageNum Field Functions 
    bool hasTotalPageNum() const { return this->totalPageNum_ != nullptr;};
    void deleteTotalPageNum() { this->totalPageNum_ = nullptr;};
    inline int32_t totalPageNum() const { DARABONBA_PTR_GET_DEFAULT(totalPageNum_, 0) };
    inline ListAppDomainRedirectRecordsResponseBodyModule& setTotalPageNum(int32_t totalPageNum) { DARABONBA_PTR_SET_VALUE(totalPageNum_, totalPageNum) };


  protected:
    std::shared_ptr<int32_t> currentPageNum_ = nullptr;
    std::shared_ptr<vector<Models::ListAppDomainRedirectRecordsResponseBodyModuleData>> data_ = nullptr;
    std::shared_ptr<Models::ListAppDomainRedirectRecordsResponseBodyModuleNext> next_ = nullptr;
    std::shared_ptr<bool> nextPage_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<bool> prePage_ = nullptr;
    std::shared_ptr<bool> resultLimit_ = nullptr;
    std::shared_ptr<int32_t> totalItemNum_ = nullptr;
    std::shared_ptr<int32_t> totalPageNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
