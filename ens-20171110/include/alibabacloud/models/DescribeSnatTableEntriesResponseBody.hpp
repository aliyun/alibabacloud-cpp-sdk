// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESNATTABLEENTRIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESNATTABLEENTRIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSnatTableEntriesResponseBodySnatTableEntries.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeSnatTableEntriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSnatTableEntriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SnatTableEntries, snatTableEntries_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSnatTableEntriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SnatTableEntries, snatTableEntries_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeSnatTableEntriesResponseBody() = default ;
    DescribeSnatTableEntriesResponseBody(const DescribeSnatTableEntriesResponseBody &) = default ;
    DescribeSnatTableEntriesResponseBody(DescribeSnatTableEntriesResponseBody &&) = default ;
    DescribeSnatTableEntriesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSnatTableEntriesResponseBody() = default ;
    DescribeSnatTableEntriesResponseBody& operator=(const DescribeSnatTableEntriesResponseBody &) = default ;
    DescribeSnatTableEntriesResponseBody& operator=(DescribeSnatTableEntriesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageNumber_ != nullptr
        && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->snatTableEntries_ != nullptr && this->totalCount_ != nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeSnatTableEntriesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeSnatTableEntriesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSnatTableEntriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // snatTableEntries Field Functions 
    bool hasSnatTableEntries() const { return this->snatTableEntries_ != nullptr;};
    void deleteSnatTableEntries() { this->snatTableEntries_ = nullptr;};
    inline const vector<DescribeSnatTableEntriesResponseBodySnatTableEntries> & snatTableEntries() const { DARABONBA_PTR_GET_CONST(snatTableEntries_, vector<DescribeSnatTableEntriesResponseBodySnatTableEntries>) };
    inline vector<DescribeSnatTableEntriesResponseBodySnatTableEntries> snatTableEntries() { DARABONBA_PTR_GET(snatTableEntries_, vector<DescribeSnatTableEntriesResponseBodySnatTableEntries>) };
    inline DescribeSnatTableEntriesResponseBody& setSnatTableEntries(const vector<DescribeSnatTableEntriesResponseBodySnatTableEntries> & snatTableEntries) { DARABONBA_PTR_SET_VALUE(snatTableEntries_, snatTableEntries) };
    inline DescribeSnatTableEntriesResponseBody& setSnatTableEntries(vector<DescribeSnatTableEntriesResponseBodySnatTableEntries> && snatTableEntries) { DARABONBA_PTR_SET_RVALUE(snatTableEntries_, snatTableEntries) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeSnatTableEntriesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The details of the SNAT entries.
    std::shared_ptr<vector<DescribeSnatTableEntriesResponseBodySnatTableEntries>> snatTableEntries_ = nullptr;
    // The number of SNAT entries that are returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
