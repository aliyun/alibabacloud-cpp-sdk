// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASERVICEAPIAUTHORITIESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASERVICEAPIAUTHORITIESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDataServiceApiAuthoritiesResponseBodyDataApiAuthorizationList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListDataServiceApiAuthoritiesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataServiceApiAuthoritiesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ApiAuthorizationList, apiAuthorizationList_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataServiceApiAuthoritiesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiAuthorizationList, apiAuthorizationList_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListDataServiceApiAuthoritiesResponseBodyData() = default ;
    ListDataServiceApiAuthoritiesResponseBodyData(const ListDataServiceApiAuthoritiesResponseBodyData &) = default ;
    ListDataServiceApiAuthoritiesResponseBodyData(ListDataServiceApiAuthoritiesResponseBodyData &&) = default ;
    ListDataServiceApiAuthoritiesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataServiceApiAuthoritiesResponseBodyData() = default ;
    ListDataServiceApiAuthoritiesResponseBodyData& operator=(const ListDataServiceApiAuthoritiesResponseBodyData &) = default ;
    ListDataServiceApiAuthoritiesResponseBodyData& operator=(ListDataServiceApiAuthoritiesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->apiAuthorizationList_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->totalCount_ != nullptr; };
    // apiAuthorizationList Field Functions 
    bool hasApiAuthorizationList() const { return this->apiAuthorizationList_ != nullptr;};
    void deleteApiAuthorizationList() { this->apiAuthorizationList_ = nullptr;};
    inline const vector<Models::ListDataServiceApiAuthoritiesResponseBodyDataApiAuthorizationList> & apiAuthorizationList() const { DARABONBA_PTR_GET_CONST(apiAuthorizationList_, vector<Models::ListDataServiceApiAuthoritiesResponseBodyDataApiAuthorizationList>) };
    inline vector<Models::ListDataServiceApiAuthoritiesResponseBodyDataApiAuthorizationList> apiAuthorizationList() { DARABONBA_PTR_GET(apiAuthorizationList_, vector<Models::ListDataServiceApiAuthoritiesResponseBodyDataApiAuthorizationList>) };
    inline ListDataServiceApiAuthoritiesResponseBodyData& setApiAuthorizationList(const vector<Models::ListDataServiceApiAuthoritiesResponseBodyDataApiAuthorizationList> & apiAuthorizationList) { DARABONBA_PTR_SET_VALUE(apiAuthorizationList_, apiAuthorizationList) };
    inline ListDataServiceApiAuthoritiesResponseBodyData& setApiAuthorizationList(vector<Models::ListDataServiceApiAuthoritiesResponseBodyDataApiAuthorizationList> && apiAuthorizationList) { DARABONBA_PTR_SET_RVALUE(apiAuthorizationList_, apiAuthorizationList) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListDataServiceApiAuthoritiesResponseBodyData& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDataServiceApiAuthoritiesResponseBodyData& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListDataServiceApiAuthoritiesResponseBodyData& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The APIs on which other users are granted the access permissions.
    std::shared_ptr<vector<Models::ListDataServiceApiAuthoritiesResponseBodyDataApiAuthorizationList>> apiAuthorizationList_ = nullptr;
    // The page number. The value of this parameter is the same as that of the PageNumber parameter in the request.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Valid values: 1 to 100. Default value: 10.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
