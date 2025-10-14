// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTROUTINECODEVERSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTROUTINECODEVERSIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListRoutineCodeVersionsResponseBodyCodeVersions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListRoutineCodeVersionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRoutineCodeVersionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CodeVersions, codeVersions_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListRoutineCodeVersionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CodeVersions, codeVersions_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListRoutineCodeVersionsResponseBody() = default ;
    ListRoutineCodeVersionsResponseBody(const ListRoutineCodeVersionsResponseBody &) = default ;
    ListRoutineCodeVersionsResponseBody(ListRoutineCodeVersionsResponseBody &&) = default ;
    ListRoutineCodeVersionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRoutineCodeVersionsResponseBody() = default ;
    ListRoutineCodeVersionsResponseBody& operator=(const ListRoutineCodeVersionsResponseBody &) = default ;
    ListRoutineCodeVersionsResponseBody& operator=(ListRoutineCodeVersionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->codeVersions_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // codeVersions Field Functions 
    bool hasCodeVersions() const { return this->codeVersions_ != nullptr;};
    void deleteCodeVersions() { this->codeVersions_ = nullptr;};
    inline const vector<ListRoutineCodeVersionsResponseBodyCodeVersions> & codeVersions() const { DARABONBA_PTR_GET_CONST(codeVersions_, vector<ListRoutineCodeVersionsResponseBodyCodeVersions>) };
    inline vector<ListRoutineCodeVersionsResponseBodyCodeVersions> codeVersions() { DARABONBA_PTR_GET(codeVersions_, vector<ListRoutineCodeVersionsResponseBodyCodeVersions>) };
    inline ListRoutineCodeVersionsResponseBody& setCodeVersions(const vector<ListRoutineCodeVersionsResponseBodyCodeVersions> & codeVersions) { DARABONBA_PTR_SET_VALUE(codeVersions_, codeVersions) };
    inline ListRoutineCodeVersionsResponseBody& setCodeVersions(vector<ListRoutineCodeVersionsResponseBodyCodeVersions> && codeVersions) { DARABONBA_PTR_SET_RVALUE(codeVersions_, codeVersions) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListRoutineCodeVersionsResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListRoutineCodeVersionsResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRoutineCodeVersionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListRoutineCodeVersionsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The code versions of the routine.
    std::shared_ptr<vector<ListRoutineCodeVersionsResponseBodyCodeVersions>> codeVersions_ = nullptr;
    // The page number. Pages start from page 1. Default value: 1.
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of code versions returned.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
