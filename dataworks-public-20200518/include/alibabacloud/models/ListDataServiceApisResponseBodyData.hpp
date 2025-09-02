// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASERVICEAPISRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASERVICEAPISRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDataServiceApisResponseBodyDataApis.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListDataServiceApisResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataServiceApisResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Apis, apis_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataServiceApisResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Apis, apis_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListDataServiceApisResponseBodyData() = default ;
    ListDataServiceApisResponseBodyData(const ListDataServiceApisResponseBodyData &) = default ;
    ListDataServiceApisResponseBodyData(ListDataServiceApisResponseBodyData &&) = default ;
    ListDataServiceApisResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataServiceApisResponseBodyData() = default ;
    ListDataServiceApisResponseBodyData& operator=(const ListDataServiceApisResponseBodyData &) = default ;
    ListDataServiceApisResponseBodyData& operator=(ListDataServiceApisResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->apis_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->totalCount_ != nullptr; };
    // apis Field Functions 
    bool hasApis() const { return this->apis_ != nullptr;};
    void deleteApis() { this->apis_ = nullptr;};
    inline const vector<Models::ListDataServiceApisResponseBodyDataApis> & apis() const { DARABONBA_PTR_GET_CONST(apis_, vector<Models::ListDataServiceApisResponseBodyDataApis>) };
    inline vector<Models::ListDataServiceApisResponseBodyDataApis> apis() { DARABONBA_PTR_GET(apis_, vector<Models::ListDataServiceApisResponseBodyDataApis>) };
    inline ListDataServiceApisResponseBodyData& setApis(const vector<Models::ListDataServiceApisResponseBodyDataApis> & apis) { DARABONBA_PTR_SET_VALUE(apis_, apis) };
    inline ListDataServiceApisResponseBodyData& setApis(vector<Models::ListDataServiceApisResponseBodyDataApis> && apis) { DARABONBA_PTR_SET_RVALUE(apis_, apis) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListDataServiceApisResponseBodyData& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDataServiceApisResponseBodyData& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListDataServiceApisResponseBodyData& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of APIs in the development state.
    std::shared_ptr<vector<Models::ListDataServiceApisResponseBodyDataApis>> apis_ = nullptr;
    // The page number. The value of this parameter is the same as that of the PageNumber parameter in the request.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Valid values: 1 to 50. Default value: 10.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
