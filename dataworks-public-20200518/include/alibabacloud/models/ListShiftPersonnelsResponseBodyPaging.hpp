// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSHIFTPERSONNELSRESPONSEBODYPAGING_HPP_
#define ALIBABACLOUD_MODELS_LISTSHIFTPERSONNELSRESPONSEBODYPAGING_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListShiftPersonnelsResponseBodyPagingShiftPersons.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListShiftPersonnelsResponseBodyPaging : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListShiftPersonnelsResponseBodyPaging& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ShiftPersons, shiftPersons_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListShiftPersonnelsResponseBodyPaging& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ShiftPersons, shiftPersons_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListShiftPersonnelsResponseBodyPaging() = default ;
    ListShiftPersonnelsResponseBodyPaging(const ListShiftPersonnelsResponseBodyPaging &) = default ;
    ListShiftPersonnelsResponseBodyPaging(ListShiftPersonnelsResponseBodyPaging &&) = default ;
    ListShiftPersonnelsResponseBodyPaging(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListShiftPersonnelsResponseBodyPaging() = default ;
    ListShiftPersonnelsResponseBodyPaging& operator=(const ListShiftPersonnelsResponseBodyPaging &) = default ;
    ListShiftPersonnelsResponseBodyPaging& operator=(ListShiftPersonnelsResponseBodyPaging &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageNumber_ != nullptr
        && this->pageSize_ != nullptr && this->shiftPersons_ != nullptr && this->totalCount_ != nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListShiftPersonnelsResponseBodyPaging& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListShiftPersonnelsResponseBodyPaging& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // shiftPersons Field Functions 
    bool hasShiftPersons() const { return this->shiftPersons_ != nullptr;};
    void deleteShiftPersons() { this->shiftPersons_ = nullptr;};
    inline const vector<Models::ListShiftPersonnelsResponseBodyPagingShiftPersons> & shiftPersons() const { DARABONBA_PTR_GET_CONST(shiftPersons_, vector<Models::ListShiftPersonnelsResponseBodyPagingShiftPersons>) };
    inline vector<Models::ListShiftPersonnelsResponseBodyPagingShiftPersons> shiftPersons() { DARABONBA_PTR_GET(shiftPersons_, vector<Models::ListShiftPersonnelsResponseBodyPagingShiftPersons>) };
    inline ListShiftPersonnelsResponseBodyPaging& setShiftPersons(const vector<Models::ListShiftPersonnelsResponseBodyPagingShiftPersons> & shiftPersons) { DARABONBA_PTR_SET_VALUE(shiftPersons_, shiftPersons) };
    inline ListShiftPersonnelsResponseBodyPaging& setShiftPersons(vector<Models::ListShiftPersonnelsResponseBodyPagingShiftPersons> && shiftPersons) { DARABONBA_PTR_SET_RVALUE(shiftPersons_, shiftPersons) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListShiftPersonnelsResponseBodyPaging& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number. Valid values: 1 to 100. Default value: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Default value: 10. Maximum value: 100.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The on-duty engineers in the shift schedule.
    std::shared_ptr<vector<Models::ListShiftPersonnelsResponseBodyPagingShiftPersons>> shiftPersons_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
