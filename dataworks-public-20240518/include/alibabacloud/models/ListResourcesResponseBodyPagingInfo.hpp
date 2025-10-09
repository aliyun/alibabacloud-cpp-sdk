// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCESRESPONSEBODYPAGINGINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCESRESPONSEBODYPAGINGINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListResourcesResponseBodyPagingInfoResources.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListResourcesResponseBodyPagingInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourcesResponseBodyPagingInfo& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Resources, resources_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourcesResponseBodyPagingInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Resources, resources_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListResourcesResponseBodyPagingInfo() = default ;
    ListResourcesResponseBodyPagingInfo(const ListResourcesResponseBodyPagingInfo &) = default ;
    ListResourcesResponseBodyPagingInfo(ListResourcesResponseBodyPagingInfo &&) = default ;
    ListResourcesResponseBodyPagingInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourcesResponseBodyPagingInfo() = default ;
    ListResourcesResponseBodyPagingInfo& operator=(const ListResourcesResponseBodyPagingInfo &) = default ;
    ListResourcesResponseBodyPagingInfo& operator=(ListResourcesResponseBodyPagingInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageNumber_ != nullptr
        && this->pageSize_ != nullptr && this->resources_ != nullptr && this->totalCount_ != nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListResourcesResponseBodyPagingInfo& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListResourcesResponseBodyPagingInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline const vector<Models::ListResourcesResponseBodyPagingInfoResources> & resources() const { DARABONBA_PTR_GET_CONST(resources_, vector<Models::ListResourcesResponseBodyPagingInfoResources>) };
    inline vector<Models::ListResourcesResponseBodyPagingInfoResources> resources() { DARABONBA_PTR_GET(resources_, vector<Models::ListResourcesResponseBodyPagingInfoResources>) };
    inline ListResourcesResponseBodyPagingInfo& setResources(const vector<Models::ListResourcesResponseBodyPagingInfoResources> & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
    inline ListResourcesResponseBodyPagingInfo& setResources(vector<Models::ListResourcesResponseBodyPagingInfoResources> && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListResourcesResponseBodyPagingInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The queried file resources.
    std::shared_ptr<vector<Models::ListResourcesResponseBodyPagingInfoResources>> resources_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
