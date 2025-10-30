// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLUSTERKUBECONFIGSTATESRESPONSEBODYPAGE_HPP_
#define ALIBABACLOUD_MODELS_LISTCLUSTERKUBECONFIGSTATESRESPONSEBODYPAGE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class ListClusterKubeconfigStatesResponseBodyPage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClusterKubeconfigStatesResponseBodyPage& obj) { 
      DARABONBA_PTR_TO_JSON(page_number, pageNumber_);
      DARABONBA_PTR_TO_JSON(page_size, pageSize_);
      DARABONBA_PTR_TO_JSON(total_count, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListClusterKubeconfigStatesResponseBodyPage& obj) { 
      DARABONBA_PTR_FROM_JSON(page_number, pageNumber_);
      DARABONBA_PTR_FROM_JSON(page_size, pageSize_);
      DARABONBA_PTR_FROM_JSON(total_count, totalCount_);
    };
    ListClusterKubeconfigStatesResponseBodyPage() = default ;
    ListClusterKubeconfigStatesResponseBodyPage(const ListClusterKubeconfigStatesResponseBodyPage &) = default ;
    ListClusterKubeconfigStatesResponseBodyPage(ListClusterKubeconfigStatesResponseBodyPage &&) = default ;
    ListClusterKubeconfigStatesResponseBodyPage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClusterKubeconfigStatesResponseBodyPage() = default ;
    ListClusterKubeconfigStatesResponseBodyPage& operator=(const ListClusterKubeconfigStatesResponseBodyPage &) = default ;
    ListClusterKubeconfigStatesResponseBodyPage& operator=(ListClusterKubeconfigStatesResponseBodyPage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && return this->pageSize_ == nullptr && return this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListClusterKubeconfigStatesResponseBodyPage& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListClusterKubeconfigStatesResponseBodyPage& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListClusterKubeconfigStatesResponseBodyPage& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
