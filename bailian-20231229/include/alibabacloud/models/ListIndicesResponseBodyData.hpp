// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINDICESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTINDICESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListIndicesResponseBodyDataIndices.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class ListIndicesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIndicesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Indices, indices_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListIndicesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Indices, indices_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListIndicesResponseBodyData() = default ;
    ListIndicesResponseBodyData(const ListIndicesResponseBodyData &) = default ;
    ListIndicesResponseBodyData(ListIndicesResponseBodyData &&) = default ;
    ListIndicesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIndicesResponseBodyData() = default ;
    ListIndicesResponseBodyData& operator=(const ListIndicesResponseBodyData &) = default ;
    ListIndicesResponseBodyData& operator=(ListIndicesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->indices_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->totalCount_ != nullptr; };
    // indices Field Functions 
    bool hasIndices() const { return this->indices_ != nullptr;};
    void deleteIndices() { this->indices_ = nullptr;};
    inline const vector<Models::ListIndicesResponseBodyDataIndices> & indices() const { DARABONBA_PTR_GET_CONST(indices_, vector<Models::ListIndicesResponseBodyDataIndices>) };
    inline vector<Models::ListIndicesResponseBodyDataIndices> indices() { DARABONBA_PTR_GET(indices_, vector<Models::ListIndicesResponseBodyDataIndices>) };
    inline ListIndicesResponseBodyData& setIndices(const vector<Models::ListIndicesResponseBodyDataIndices> & indices) { DARABONBA_PTR_SET_VALUE(indices_, indices) };
    inline ListIndicesResponseBodyData& setIndices(vector<Models::ListIndicesResponseBodyDataIndices> && indices) { DARABONBA_PTR_SET_RVALUE(indices_, indices) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListIndicesResponseBodyData& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListIndicesResponseBodyData& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListIndicesResponseBodyData& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of knowledge bases.
    std::shared_ptr<vector<Models::ListIndicesResponseBodyDataIndices>> indices_ = nullptr;
    // The specified page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The specified number of documents on each page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The total number of knowledge bases returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
