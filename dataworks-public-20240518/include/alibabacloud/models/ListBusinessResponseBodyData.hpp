// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBUSINESSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTBUSINESSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListBusinessResponseBodyDataBusiness.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListBusinessResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBusinessResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Business, business_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListBusinessResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Business, business_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListBusinessResponseBodyData() = default ;
    ListBusinessResponseBodyData(const ListBusinessResponseBodyData &) = default ;
    ListBusinessResponseBodyData(ListBusinessResponseBodyData &&) = default ;
    ListBusinessResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBusinessResponseBodyData() = default ;
    ListBusinessResponseBodyData& operator=(const ListBusinessResponseBodyData &) = default ;
    ListBusinessResponseBodyData& operator=(ListBusinessResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->business_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->totalCount_ != nullptr; };
    // business Field Functions 
    bool hasBusiness() const { return this->business_ != nullptr;};
    void deleteBusiness() { this->business_ = nullptr;};
    inline const vector<Models::ListBusinessResponseBodyDataBusiness> & business() const { DARABONBA_PTR_GET_CONST(business_, vector<Models::ListBusinessResponseBodyDataBusiness>) };
    inline vector<Models::ListBusinessResponseBodyDataBusiness> business() { DARABONBA_PTR_GET(business_, vector<Models::ListBusinessResponseBodyDataBusiness>) };
    inline ListBusinessResponseBodyData& setBusiness(const vector<Models::ListBusinessResponseBodyDataBusiness> & business) { DARABONBA_PTR_SET_VALUE(business_, business) };
    inline ListBusinessResponseBodyData& setBusiness(vector<Models::ListBusinessResponseBodyDataBusiness> && business) { DARABONBA_PTR_SET_RVALUE(business_, business) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListBusinessResponseBodyData& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListBusinessResponseBodyData& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListBusinessResponseBodyData& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<Models::ListBusinessResponseBodyDataBusiness>> business_ = nullptr;
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
