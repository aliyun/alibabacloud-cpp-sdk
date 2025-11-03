// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDIRQUOTASRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDIRQUOTASRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDirQuotasResponseBodyDirQuotaInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeDirQuotasResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDirQuotasResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DirQuotaInfos, dirQuotaInfos_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDirQuotasResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DirQuotaInfos, dirQuotaInfos_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDirQuotasResponseBody() = default ;
    DescribeDirQuotasResponseBody(const DescribeDirQuotasResponseBody &) = default ;
    DescribeDirQuotasResponseBody(DescribeDirQuotasResponseBody &&) = default ;
    DescribeDirQuotasResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDirQuotasResponseBody() = default ;
    DescribeDirQuotasResponseBody& operator=(const DescribeDirQuotasResponseBody &) = default ;
    DescribeDirQuotasResponseBody& operator=(DescribeDirQuotasResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dirQuotaInfos_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // dirQuotaInfos Field Functions 
    bool hasDirQuotaInfos() const { return this->dirQuotaInfos_ != nullptr;};
    void deleteDirQuotaInfos() { this->dirQuotaInfos_ = nullptr;};
    inline const vector<DescribeDirQuotasResponseBodyDirQuotaInfos> & dirQuotaInfos() const { DARABONBA_PTR_GET_CONST(dirQuotaInfos_, vector<DescribeDirQuotasResponseBodyDirQuotaInfos>) };
    inline vector<DescribeDirQuotasResponseBodyDirQuotaInfos> dirQuotaInfos() { DARABONBA_PTR_GET(dirQuotaInfos_, vector<DescribeDirQuotasResponseBodyDirQuotaInfos>) };
    inline DescribeDirQuotasResponseBody& setDirQuotaInfos(const vector<DescribeDirQuotasResponseBodyDirQuotaInfos> & dirQuotaInfos) { DARABONBA_PTR_SET_VALUE(dirQuotaInfos_, dirQuotaInfos) };
    inline DescribeDirQuotasResponseBody& setDirQuotaInfos(vector<DescribeDirQuotasResponseBodyDirQuotaInfos> && dirQuotaInfos) { DARABONBA_PTR_SET_RVALUE(dirQuotaInfos_, dirQuotaInfos) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDirQuotasResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDirQuotasResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDirQuotasResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeDirQuotasResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The queried directory quotas.
    std::shared_ptr<vector<DescribeDirQuotasResponseBodyDirQuotaInfos>> dirQuotaInfos_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of directories.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
