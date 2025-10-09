// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMETACOLLECTIONSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTMETACOLLECTIONSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListMetaCollectionsResponseBodyDataMetaCollections.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListMetaCollectionsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMetaCollectionsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(MetaCollections, metaCollections_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListMetaCollectionsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(MetaCollections, metaCollections_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListMetaCollectionsResponseBodyData() = default ;
    ListMetaCollectionsResponseBodyData(const ListMetaCollectionsResponseBodyData &) = default ;
    ListMetaCollectionsResponseBodyData(ListMetaCollectionsResponseBodyData &&) = default ;
    ListMetaCollectionsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMetaCollectionsResponseBodyData() = default ;
    ListMetaCollectionsResponseBodyData& operator=(const ListMetaCollectionsResponseBodyData &) = default ;
    ListMetaCollectionsResponseBodyData& operator=(ListMetaCollectionsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->metaCollections_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->totalCount_ != nullptr; };
    // metaCollections Field Functions 
    bool hasMetaCollections() const { return this->metaCollections_ != nullptr;};
    void deleteMetaCollections() { this->metaCollections_ = nullptr;};
    inline const vector<Models::ListMetaCollectionsResponseBodyDataMetaCollections> & metaCollections() const { DARABONBA_PTR_GET_CONST(metaCollections_, vector<Models::ListMetaCollectionsResponseBodyDataMetaCollections>) };
    inline vector<Models::ListMetaCollectionsResponseBodyDataMetaCollections> metaCollections() { DARABONBA_PTR_GET(metaCollections_, vector<Models::ListMetaCollectionsResponseBodyDataMetaCollections>) };
    inline ListMetaCollectionsResponseBodyData& setMetaCollections(const vector<Models::ListMetaCollectionsResponseBodyDataMetaCollections> & metaCollections) { DARABONBA_PTR_SET_VALUE(metaCollections_, metaCollections) };
    inline ListMetaCollectionsResponseBodyData& setMetaCollections(vector<Models::ListMetaCollectionsResponseBodyDataMetaCollections> && metaCollections) { DARABONBA_PTR_SET_RVALUE(metaCollections_, metaCollections) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListMetaCollectionsResponseBodyData& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListMetaCollectionsResponseBodyData& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListMetaCollectionsResponseBodyData& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The collections.
    std::shared_ptr<vector<Models::ListMetaCollectionsResponseBodyDataMetaCollections>> metaCollections_ = nullptr;
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
