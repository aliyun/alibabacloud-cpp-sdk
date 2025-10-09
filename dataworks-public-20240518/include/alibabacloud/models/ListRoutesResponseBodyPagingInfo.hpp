// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTROUTESRESPONSEBODYPAGINGINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTROUTESRESPONSEBODYPAGINGINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListRoutesResponseBodyPagingInfoRouteList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListRoutesResponseBodyPagingInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRoutesResponseBodyPagingInfo& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RouteList, routeList_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListRoutesResponseBodyPagingInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RouteList, routeList_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListRoutesResponseBodyPagingInfo() = default ;
    ListRoutesResponseBodyPagingInfo(const ListRoutesResponseBodyPagingInfo &) = default ;
    ListRoutesResponseBodyPagingInfo(ListRoutesResponseBodyPagingInfo &&) = default ;
    ListRoutesResponseBodyPagingInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRoutesResponseBodyPagingInfo() = default ;
    ListRoutesResponseBodyPagingInfo& operator=(const ListRoutesResponseBodyPagingInfo &) = default ;
    ListRoutesResponseBodyPagingInfo& operator=(ListRoutesResponseBodyPagingInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageNumber_ != nullptr
        && this->pageSize_ != nullptr && this->routeList_ != nullptr && this->totalCount_ != nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListRoutesResponseBodyPagingInfo& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListRoutesResponseBodyPagingInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // routeList Field Functions 
    bool hasRouteList() const { return this->routeList_ != nullptr;};
    void deleteRouteList() { this->routeList_ = nullptr;};
    inline const vector<Models::ListRoutesResponseBodyPagingInfoRouteList> & routeList() const { DARABONBA_PTR_GET_CONST(routeList_, vector<Models::ListRoutesResponseBodyPagingInfoRouteList>) };
    inline vector<Models::ListRoutesResponseBodyPagingInfoRouteList> routeList() { DARABONBA_PTR_GET(routeList_, vector<Models::ListRoutesResponseBodyPagingInfoRouteList>) };
    inline ListRoutesResponseBodyPagingInfo& setRouteList(const vector<Models::ListRoutesResponseBodyPagingInfoRouteList> & routeList) { DARABONBA_PTR_SET_VALUE(routeList_, routeList) };
    inline ListRoutesResponseBodyPagingInfo& setRouteList(vector<Models::ListRoutesResponseBodyPagingInfoRouteList> && routeList) { DARABONBA_PTR_SET_RVALUE(routeList_, routeList) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListRoutesResponseBodyPagingInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The list of network resource routing information obtained.
    std::shared_ptr<vector<Models::ListRoutesResponseBodyPagingInfoRouteList>> routeList_ = nullptr;
    // All data entries
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
