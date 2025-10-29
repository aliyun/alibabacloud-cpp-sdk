// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCATALOGSRESPONSEBODYPAGINGINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTCATALOGSRESPONSEBODYPAGINGINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Catalog.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListCatalogsResponseBodyPagingInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCatalogsResponseBodyPagingInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Catalogs, catalogs_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListCatalogsResponseBodyPagingInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Catalogs, catalogs_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListCatalogsResponseBodyPagingInfo() = default ;
    ListCatalogsResponseBodyPagingInfo(const ListCatalogsResponseBodyPagingInfo &) = default ;
    ListCatalogsResponseBodyPagingInfo(ListCatalogsResponseBodyPagingInfo &&) = default ;
    ListCatalogsResponseBodyPagingInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCatalogsResponseBodyPagingInfo() = default ;
    ListCatalogsResponseBodyPagingInfo& operator=(const ListCatalogsResponseBodyPagingInfo &) = default ;
    ListCatalogsResponseBodyPagingInfo& operator=(ListCatalogsResponseBodyPagingInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->catalogs_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->totalCount_ == nullptr; };
    // catalogs Field Functions 
    bool hasCatalogs() const { return this->catalogs_ != nullptr;};
    void deleteCatalogs() { this->catalogs_ = nullptr;};
    inline const vector<Models::Catalog> & catalogs() const { DARABONBA_PTR_GET_CONST(catalogs_, vector<Models::Catalog>) };
    inline vector<Models::Catalog> catalogs() { DARABONBA_PTR_GET(catalogs_, vector<Models::Catalog>) };
    inline ListCatalogsResponseBodyPagingInfo& setCatalogs(const vector<Models::Catalog> & catalogs) { DARABONBA_PTR_SET_VALUE(catalogs_, catalogs) };
    inline ListCatalogsResponseBodyPagingInfo& setCatalogs(vector<Models::Catalog> && catalogs) { DARABONBA_PTR_SET_RVALUE(catalogs_, catalogs) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListCatalogsResponseBodyPagingInfo& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListCatalogsResponseBodyPagingInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListCatalogsResponseBodyPagingInfo& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The catalog.
    std::shared_ptr<vector<Models::Catalog>> catalogs_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of records per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The total number of records.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
