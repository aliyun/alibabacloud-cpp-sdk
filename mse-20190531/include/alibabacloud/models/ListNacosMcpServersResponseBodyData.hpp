// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNACOSMCPSERVERSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTNACOSMCPSERVERSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListNacosMcpServersResponseBodyDataPageItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListNacosMcpServersResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNacosMcpServersResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(PageItems, pageItems_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PagesAvailable, pagesAvailable_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListNacosMcpServersResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(PageItems, pageItems_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PagesAvailable, pagesAvailable_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListNacosMcpServersResponseBodyData() = default ;
    ListNacosMcpServersResponseBodyData(const ListNacosMcpServersResponseBodyData &) = default ;
    ListNacosMcpServersResponseBodyData(ListNacosMcpServersResponseBodyData &&) = default ;
    ListNacosMcpServersResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNacosMcpServersResponseBodyData() = default ;
    ListNacosMcpServersResponseBodyData& operator=(const ListNacosMcpServersResponseBodyData &) = default ;
    ListNacosMcpServersResponseBodyData& operator=(ListNacosMcpServersResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageItems_ != nullptr
        && this->pageNumber_ != nullptr && this->pagesAvailable_ != nullptr && this->totalCount_ != nullptr; };
    // pageItems Field Functions 
    bool hasPageItems() const { return this->pageItems_ != nullptr;};
    void deletePageItems() { this->pageItems_ = nullptr;};
    inline const vector<Models::ListNacosMcpServersResponseBodyDataPageItems> & pageItems() const { DARABONBA_PTR_GET_CONST(pageItems_, vector<Models::ListNacosMcpServersResponseBodyDataPageItems>) };
    inline vector<Models::ListNacosMcpServersResponseBodyDataPageItems> pageItems() { DARABONBA_PTR_GET(pageItems_, vector<Models::ListNacosMcpServersResponseBodyDataPageItems>) };
    inline ListNacosMcpServersResponseBodyData& setPageItems(const vector<Models::ListNacosMcpServersResponseBodyDataPageItems> & pageItems) { DARABONBA_PTR_SET_VALUE(pageItems_, pageItems) };
    inline ListNacosMcpServersResponseBodyData& setPageItems(vector<Models::ListNacosMcpServersResponseBodyDataPageItems> && pageItems) { DARABONBA_PTR_SET_RVALUE(pageItems_, pageItems) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListNacosMcpServersResponseBodyData& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pagesAvailable Field Functions 
    bool hasPagesAvailable() const { return this->pagesAvailable_ != nullptr;};
    void deletePagesAvailable() { this->pagesAvailable_ = nullptr;};
    inline int32_t pagesAvailable() const { DARABONBA_PTR_GET_DEFAULT(pagesAvailable_, 0) };
    inline ListNacosMcpServersResponseBodyData& setPagesAvailable(int32_t pagesAvailable) { DARABONBA_PTR_SET_VALUE(pagesAvailable_, pagesAvailable) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListNacosMcpServersResponseBodyData& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<Models::ListNacosMcpServersResponseBodyDataPageItems>> pageItems_ = nullptr;
    // pageNumber.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // pagesAvailable.
    std::shared_ptr<int32_t> pagesAvailable_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
