// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENAMESPACESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENAMESPACESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeNamespacesResponseBodyDataNamespaces.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeNamespacesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNamespacesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Namespaces, namespaces_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNamespacesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Namespaces, namespaces_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
    };
    DescribeNamespacesResponseBodyData() = default ;
    DescribeNamespacesResponseBodyData(const DescribeNamespacesResponseBodyData &) = default ;
    DescribeNamespacesResponseBodyData(DescribeNamespacesResponseBodyData &&) = default ;
    DescribeNamespacesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNamespacesResponseBodyData() = default ;
    DescribeNamespacesResponseBodyData& operator=(const DescribeNamespacesResponseBodyData &) = default ;
    DescribeNamespacesResponseBodyData& operator=(DescribeNamespacesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && return this->namespaces_ == nullptr && return this->pageSize_ == nullptr && return this->totalSize_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeNamespacesResponseBodyData& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // namespaces Field Functions 
    bool hasNamespaces() const { return this->namespaces_ != nullptr;};
    void deleteNamespaces() { this->namespaces_ = nullptr;};
    inline const vector<Models::DescribeNamespacesResponseBodyDataNamespaces> & namespaces() const { DARABONBA_PTR_GET_CONST(namespaces_, vector<Models::DescribeNamespacesResponseBodyDataNamespaces>) };
    inline vector<Models::DescribeNamespacesResponseBodyDataNamespaces> namespaces() { DARABONBA_PTR_GET(namespaces_, vector<Models::DescribeNamespacesResponseBodyDataNamespaces>) };
    inline DescribeNamespacesResponseBodyData& setNamespaces(const vector<Models::DescribeNamespacesResponseBodyDataNamespaces> & namespaces) { DARABONBA_PTR_SET_VALUE(namespaces_, namespaces) };
    inline DescribeNamespacesResponseBodyData& setNamespaces(vector<Models::DescribeNamespacesResponseBodyDataNamespaces> && namespaces) { DARABONBA_PTR_SET_RVALUE(namespaces_, namespaces) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeNamespacesResponseBodyData& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalSize Field Functions 
    bool hasTotalSize() const { return this->totalSize_ != nullptr;};
    void deleteTotalSize() { this->totalSize_ = nullptr;};
    inline int32_t totalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0) };
    inline DescribeNamespacesResponseBodyData& setTotalSize(int32_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


  protected:
    // The page number.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The namespaces.
    std::shared_ptr<vector<Models::DescribeNamespacesResponseBodyDataNamespaces>> namespaces_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The total number of namespaces.
    std::shared_ptr<int32_t> totalSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
