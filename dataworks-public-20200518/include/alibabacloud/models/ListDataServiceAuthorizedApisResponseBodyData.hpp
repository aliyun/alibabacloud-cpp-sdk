// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASERVICEAUTHORIZEDAPISRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASERVICEAUTHORIZEDAPISRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDataServiceAuthorizedApisResponseBodyDataApiAuthorizedList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListDataServiceAuthorizedApisResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataServiceAuthorizedApisResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ApiAuthorizedList, apiAuthorizedList_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataServiceAuthorizedApisResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiAuthorizedList, apiAuthorizedList_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListDataServiceAuthorizedApisResponseBodyData() = default ;
    ListDataServiceAuthorizedApisResponseBodyData(const ListDataServiceAuthorizedApisResponseBodyData &) = default ;
    ListDataServiceAuthorizedApisResponseBodyData(ListDataServiceAuthorizedApisResponseBodyData &&) = default ;
    ListDataServiceAuthorizedApisResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataServiceAuthorizedApisResponseBodyData() = default ;
    ListDataServiceAuthorizedApisResponseBodyData& operator=(const ListDataServiceAuthorizedApisResponseBodyData &) = default ;
    ListDataServiceAuthorizedApisResponseBodyData& operator=(ListDataServiceAuthorizedApisResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->apiAuthorizedList_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->totalCount_ != nullptr; };
    // apiAuthorizedList Field Functions 
    bool hasApiAuthorizedList() const { return this->apiAuthorizedList_ != nullptr;};
    void deleteApiAuthorizedList() { this->apiAuthorizedList_ = nullptr;};
    inline const vector<Models::ListDataServiceAuthorizedApisResponseBodyDataApiAuthorizedList> & apiAuthorizedList() const { DARABONBA_PTR_GET_CONST(apiAuthorizedList_, vector<Models::ListDataServiceAuthorizedApisResponseBodyDataApiAuthorizedList>) };
    inline vector<Models::ListDataServiceAuthorizedApisResponseBodyDataApiAuthorizedList> apiAuthorizedList() { DARABONBA_PTR_GET(apiAuthorizedList_, vector<Models::ListDataServiceAuthorizedApisResponseBodyDataApiAuthorizedList>) };
    inline ListDataServiceAuthorizedApisResponseBodyData& setApiAuthorizedList(const vector<Models::ListDataServiceAuthorizedApisResponseBodyDataApiAuthorizedList> & apiAuthorizedList) { DARABONBA_PTR_SET_VALUE(apiAuthorizedList_, apiAuthorizedList) };
    inline ListDataServiceAuthorizedApisResponseBodyData& setApiAuthorizedList(vector<Models::ListDataServiceAuthorizedApisResponseBodyDataApiAuthorizedList> && apiAuthorizedList) { DARABONBA_PTR_SET_RVALUE(apiAuthorizedList_, apiAuthorizedList) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListDataServiceAuthorizedApisResponseBodyData& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDataServiceAuthorizedApisResponseBodyData& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListDataServiceAuthorizedApisResponseBodyData& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The APIs that you are authorized to access.
    std::shared_ptr<vector<Models::ListDataServiceAuthorizedApisResponseBodyDataApiAuthorizedList>> apiAuthorizedList_ = nullptr;
    // The page number. The value of this parameter is the same as that of the PageNumber parameter in the request.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Default value: 10. Maximum value: 100.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
