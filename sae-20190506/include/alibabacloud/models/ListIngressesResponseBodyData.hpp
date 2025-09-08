// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINGRESSESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTINGRESSESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListIngressesResponseBodyDataIngressList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ListIngressesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIngressesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(IngressList, ingressList_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListIngressesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(IngressList, ingressList_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
    };
    ListIngressesResponseBodyData() = default ;
    ListIngressesResponseBodyData(const ListIngressesResponseBodyData &) = default ;
    ListIngressesResponseBodyData(ListIngressesResponseBodyData &&) = default ;
    ListIngressesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIngressesResponseBodyData() = default ;
    ListIngressesResponseBodyData& operator=(const ListIngressesResponseBodyData &) = default ;
    ListIngressesResponseBodyData& operator=(ListIngressesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->currentPage_ != nullptr
        && this->ingressList_ != nullptr && this->pageSize_ != nullptr && this->totalSize_ != nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListIngressesResponseBodyData& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // ingressList Field Functions 
    bool hasIngressList() const { return this->ingressList_ != nullptr;};
    void deleteIngressList() { this->ingressList_ = nullptr;};
    inline const vector<Models::ListIngressesResponseBodyDataIngressList> & ingressList() const { DARABONBA_PTR_GET_CONST(ingressList_, vector<Models::ListIngressesResponseBodyDataIngressList>) };
    inline vector<Models::ListIngressesResponseBodyDataIngressList> ingressList() { DARABONBA_PTR_GET(ingressList_, vector<Models::ListIngressesResponseBodyDataIngressList>) };
    inline ListIngressesResponseBodyData& setIngressList(const vector<Models::ListIngressesResponseBodyDataIngressList> & ingressList) { DARABONBA_PTR_SET_VALUE(ingressList_, ingressList) };
    inline ListIngressesResponseBodyData& setIngressList(vector<Models::ListIngressesResponseBodyDataIngressList> && ingressList) { DARABONBA_PTR_SET_RVALUE(ingressList_, ingressList) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListIngressesResponseBodyData& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalSize Field Functions 
    bool hasTotalSize() const { return this->totalSize_ != nullptr;};
    void deleteTotalSize() { this->totalSize_ = nullptr;};
    inline int32_t totalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0) };
    inline ListIngressesResponseBodyData& setTotalSize(int32_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


  protected:
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The list of routing rules.
    std::shared_ptr<vector<Models::ListIngressesResponseBodyDataIngressList>> ingressList_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<int32_t> totalSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
