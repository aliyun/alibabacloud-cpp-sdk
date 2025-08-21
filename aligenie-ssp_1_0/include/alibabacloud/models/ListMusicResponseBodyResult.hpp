// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMUSICRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTMUSICRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListMusicResponseBodyResultModel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class ListMusicResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMusicResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(PageCount, pageCount_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListMusicResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(PageCount, pageCount_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListMusicResponseBodyResult() = default ;
    ListMusicResponseBodyResult(const ListMusicResponseBodyResult &) = default ;
    ListMusicResponseBodyResult(ListMusicResponseBodyResult &&) = default ;
    ListMusicResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMusicResponseBodyResult() = default ;
    ListMusicResponseBodyResult& operator=(const ListMusicResponseBodyResult &) = default ;
    ListMusicResponseBodyResult& operator=(ListMusicResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->currentPage_ != nullptr
        && this->model_ != nullptr && this->pageCount_ != nullptr && this->pageSize_ != nullptr && this->totalCount_ != nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListMusicResponseBodyResult& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline const vector<Models::ListMusicResponseBodyResultModel> & model() const { DARABONBA_PTR_GET_CONST(model_, vector<Models::ListMusicResponseBodyResultModel>) };
    inline vector<Models::ListMusicResponseBodyResultModel> model() { DARABONBA_PTR_GET(model_, vector<Models::ListMusicResponseBodyResultModel>) };
    inline ListMusicResponseBodyResult& setModel(const vector<Models::ListMusicResponseBodyResultModel> & model) { DARABONBA_PTR_SET_VALUE(model_, model) };
    inline ListMusicResponseBodyResult& setModel(vector<Models::ListMusicResponseBodyResultModel> && model) { DARABONBA_PTR_SET_RVALUE(model_, model) };


    // pageCount Field Functions 
    bool hasPageCount() const { return this->pageCount_ != nullptr;};
    void deletePageCount() { this->pageCount_ = nullptr;};
    inline int32_t pageCount() const { DARABONBA_PTR_GET_DEFAULT(pageCount_, 0) };
    inline ListMusicResponseBodyResult& setPageCount(int32_t pageCount) { DARABONBA_PTR_SET_VALUE(pageCount_, pageCount) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListMusicResponseBodyResult& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListMusicResponseBodyResult& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    std::shared_ptr<vector<Models::ListMusicResponseBodyResultModel>> model_ = nullptr;
    std::shared_ptr<int32_t> pageCount_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
