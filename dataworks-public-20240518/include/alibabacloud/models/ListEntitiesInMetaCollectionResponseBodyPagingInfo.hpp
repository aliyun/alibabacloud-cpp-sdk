// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTENTITIESINMETACOLLECTIONRESPONSEBODYPAGINGINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTENTITIESINMETACOLLECTIONRESPONSEBODYPAGINGINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListEntitiesInMetaCollectionResponseBodyPagingInfoEntities.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListEntitiesInMetaCollectionResponseBodyPagingInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEntitiesInMetaCollectionResponseBodyPagingInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Entities, entities_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListEntitiesInMetaCollectionResponseBodyPagingInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Entities, entities_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListEntitiesInMetaCollectionResponseBodyPagingInfo() = default ;
    ListEntitiesInMetaCollectionResponseBodyPagingInfo(const ListEntitiesInMetaCollectionResponseBodyPagingInfo &) = default ;
    ListEntitiesInMetaCollectionResponseBodyPagingInfo(ListEntitiesInMetaCollectionResponseBodyPagingInfo &&) = default ;
    ListEntitiesInMetaCollectionResponseBodyPagingInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEntitiesInMetaCollectionResponseBodyPagingInfo() = default ;
    ListEntitiesInMetaCollectionResponseBodyPagingInfo& operator=(const ListEntitiesInMetaCollectionResponseBodyPagingInfo &) = default ;
    ListEntitiesInMetaCollectionResponseBodyPagingInfo& operator=(ListEntitiesInMetaCollectionResponseBodyPagingInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->entities_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->totalCount_ != nullptr; };
    // entities Field Functions 
    bool hasEntities() const { return this->entities_ != nullptr;};
    void deleteEntities() { this->entities_ = nullptr;};
    inline const vector<Models::ListEntitiesInMetaCollectionResponseBodyPagingInfoEntities> & entities() const { DARABONBA_PTR_GET_CONST(entities_, vector<Models::ListEntitiesInMetaCollectionResponseBodyPagingInfoEntities>) };
    inline vector<Models::ListEntitiesInMetaCollectionResponseBodyPagingInfoEntities> entities() { DARABONBA_PTR_GET(entities_, vector<Models::ListEntitiesInMetaCollectionResponseBodyPagingInfoEntities>) };
    inline ListEntitiesInMetaCollectionResponseBodyPagingInfo& setEntities(const vector<Models::ListEntitiesInMetaCollectionResponseBodyPagingInfoEntities> & entities) { DARABONBA_PTR_SET_VALUE(entities_, entities) };
    inline ListEntitiesInMetaCollectionResponseBodyPagingInfo& setEntities(vector<Models::ListEntitiesInMetaCollectionResponseBodyPagingInfoEntities> && entities) { DARABONBA_PTR_SET_RVALUE(entities_, entities) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListEntitiesInMetaCollectionResponseBodyPagingInfo& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListEntitiesInMetaCollectionResponseBodyPagingInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListEntitiesInMetaCollectionResponseBodyPagingInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The entities in the collection.
    std::shared_ptr<vector<Models::ListEntitiesInMetaCollectionResponseBodyPagingInfoEntities>> entities_ = nullptr;
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
