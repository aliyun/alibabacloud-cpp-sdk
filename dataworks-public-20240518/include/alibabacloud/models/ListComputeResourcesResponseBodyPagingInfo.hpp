// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOMPUTERESOURCESRESPONSEBODYPAGINGINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTCOMPUTERESOURCESRESPONSEBODYPAGINGINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListComputeResourcesResponseBodyPagingInfoComputeResources.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListComputeResourcesResponseBodyPagingInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListComputeResourcesResponseBodyPagingInfo& obj) { 
      DARABONBA_PTR_TO_JSON(ComputeResources, computeResources_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListComputeResourcesResponseBodyPagingInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(ComputeResources, computeResources_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListComputeResourcesResponseBodyPagingInfo() = default ;
    ListComputeResourcesResponseBodyPagingInfo(const ListComputeResourcesResponseBodyPagingInfo &) = default ;
    ListComputeResourcesResponseBodyPagingInfo(ListComputeResourcesResponseBodyPagingInfo &&) = default ;
    ListComputeResourcesResponseBodyPagingInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListComputeResourcesResponseBodyPagingInfo() = default ;
    ListComputeResourcesResponseBodyPagingInfo& operator=(const ListComputeResourcesResponseBodyPagingInfo &) = default ;
    ListComputeResourcesResponseBodyPagingInfo& operator=(ListComputeResourcesResponseBodyPagingInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->computeResources_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->totalCount_ == nullptr; };
    // computeResources Field Functions 
    bool hasComputeResources() const { return this->computeResources_ != nullptr;};
    void deleteComputeResources() { this->computeResources_ = nullptr;};
    inline const vector<Models::ListComputeResourcesResponseBodyPagingInfoComputeResources> & computeResources() const { DARABONBA_PTR_GET_CONST(computeResources_, vector<Models::ListComputeResourcesResponseBodyPagingInfoComputeResources>) };
    inline vector<Models::ListComputeResourcesResponseBodyPagingInfoComputeResources> computeResources() { DARABONBA_PTR_GET(computeResources_, vector<Models::ListComputeResourcesResponseBodyPagingInfoComputeResources>) };
    inline ListComputeResourcesResponseBodyPagingInfo& setComputeResources(const vector<Models::ListComputeResourcesResponseBodyPagingInfoComputeResources> & computeResources) { DARABONBA_PTR_SET_VALUE(computeResources_, computeResources) };
    inline ListComputeResourcesResponseBodyPagingInfo& setComputeResources(vector<Models::ListComputeResourcesResponseBodyPagingInfoComputeResources> && computeResources) { DARABONBA_PTR_SET_RVALUE(computeResources_, computeResources) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListComputeResourcesResponseBodyPagingInfo& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListComputeResourcesResponseBodyPagingInfo& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListComputeResourcesResponseBodyPagingInfo& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<Models::ListComputeResourcesResponseBodyPagingInfoComputeResources>> computeResources_ = nullptr;
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
