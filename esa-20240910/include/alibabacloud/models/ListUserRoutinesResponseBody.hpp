// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERROUTINESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERROUTINESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListUserRoutinesResponseBodyRoutines.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListUserRoutinesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserRoutinesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(QuotaRoutineNumber, quotaRoutineNumber_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Routines, routines_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(UsedRoutineNumber, usedRoutineNumber_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserRoutinesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(QuotaRoutineNumber, quotaRoutineNumber_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Routines, routines_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(UsedRoutineNumber, usedRoutineNumber_);
    };
    ListUserRoutinesResponseBody() = default ;
    ListUserRoutinesResponseBody(const ListUserRoutinesResponseBody &) = default ;
    ListUserRoutinesResponseBody(ListUserRoutinesResponseBody &&) = default ;
    ListUserRoutinesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserRoutinesResponseBody() = default ;
    ListUserRoutinesResponseBody& operator=(const ListUserRoutinesResponseBody &) = default ;
    ListUserRoutinesResponseBody& operator=(ListUserRoutinesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && return this->pageSize_ == nullptr && return this->quotaRoutineNumber_ == nullptr && return this->requestId_ == nullptr && return this->routines_ == nullptr && return this->totalCount_ == nullptr
        && return this->usedRoutineNumber_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListUserRoutinesResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListUserRoutinesResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // quotaRoutineNumber Field Functions 
    bool hasQuotaRoutineNumber() const { return this->quotaRoutineNumber_ != nullptr;};
    void deleteQuotaRoutineNumber() { this->quotaRoutineNumber_ = nullptr;};
    inline int64_t quotaRoutineNumber() const { DARABONBA_PTR_GET_DEFAULT(quotaRoutineNumber_, 0L) };
    inline ListUserRoutinesResponseBody& setQuotaRoutineNumber(int64_t quotaRoutineNumber) { DARABONBA_PTR_SET_VALUE(quotaRoutineNumber_, quotaRoutineNumber) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListUserRoutinesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // routines Field Functions 
    bool hasRoutines() const { return this->routines_ != nullptr;};
    void deleteRoutines() { this->routines_ = nullptr;};
    inline const vector<ListUserRoutinesResponseBodyRoutines> & routines() const { DARABONBA_PTR_GET_CONST(routines_, vector<ListUserRoutinesResponseBodyRoutines>) };
    inline vector<ListUserRoutinesResponseBodyRoutines> routines() { DARABONBA_PTR_GET(routines_, vector<ListUserRoutinesResponseBodyRoutines>) };
    inline ListUserRoutinesResponseBody& setRoutines(const vector<ListUserRoutinesResponseBodyRoutines> & routines) { DARABONBA_PTR_SET_VALUE(routines_, routines) };
    inline ListUserRoutinesResponseBody& setRoutines(vector<ListUserRoutinesResponseBodyRoutines> && routines) { DARABONBA_PTR_SET_RVALUE(routines_, routines) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListUserRoutinesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // usedRoutineNumber Field Functions 
    bool hasUsedRoutineNumber() const { return this->usedRoutineNumber_ != nullptr;};
    void deleteUsedRoutineNumber() { this->usedRoutineNumber_ = nullptr;};
    inline int64_t usedRoutineNumber() const { DARABONBA_PTR_GET_DEFAULT(usedRoutineNumber_, 0L) };
    inline ListUserRoutinesResponseBody& setUsedRoutineNumber(int64_t usedRoutineNumber) { DARABONBA_PTR_SET_VALUE(usedRoutineNumber_, usedRoutineNumber) };


  protected:
    // The page number. Pages start from page 1. Default value: 1.
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The maximum number of functions supported by the billing plan.
    std::shared_ptr<int64_t> quotaRoutineNumber_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The functions.
    std::shared_ptr<vector<ListUserRoutinesResponseBodyRoutines>> routines_ = nullptr;
    // The total count.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
    // The number of functions that were already created.
    std::shared_ptr<int64_t> usedRoutineNumber_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
