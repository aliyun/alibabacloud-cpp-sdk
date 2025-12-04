// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESYNDBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESYNDBSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSynDbsResponseBodySynDbs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20191111
{
namespace Models
{
  class DescribeSynDbsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSynDbsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SynDbs, synDbs_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSynDbsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SynDbs, synDbs_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeSynDbsResponseBody() = default ;
    DescribeSynDbsResponseBody(const DescribeSynDbsResponseBody &) = default ;
    DescribeSynDbsResponseBody(DescribeSynDbsResponseBody &&) = default ;
    DescribeSynDbsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSynDbsResponseBody() = default ;
    DescribeSynDbsResponseBody& operator=(const DescribeSynDbsResponseBody &) = default ;
    DescribeSynDbsResponseBody& operator=(DescribeSynDbsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->synDbs_ == nullptr && return this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeSynDbsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeSynDbsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSynDbsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // synDbs Field Functions 
    bool hasSynDbs() const { return this->synDbs_ != nullptr;};
    void deleteSynDbs() { this->synDbs_ = nullptr;};
    inline const vector<DescribeSynDbsResponseBodySynDbs> & synDbs() const { DARABONBA_PTR_GET_CONST(synDbs_, vector<DescribeSynDbsResponseBodySynDbs>) };
    inline vector<DescribeSynDbsResponseBodySynDbs> synDbs() { DARABONBA_PTR_GET(synDbs_, vector<DescribeSynDbsResponseBodySynDbs>) };
    inline DescribeSynDbsResponseBody& setSynDbs(const vector<DescribeSynDbsResponseBodySynDbs> & synDbs) { DARABONBA_PTR_SET_VALUE(synDbs_, synDbs) };
    inline DescribeSynDbsResponseBody& setSynDbs(vector<DescribeSynDbsResponseBodySynDbs> && synDbs) { DARABONBA_PTR_SET_RVALUE(synDbs_, synDbs) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeSynDbsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about data synchronization between the ApsaraDB for ClickHouse cluster and an ApsaraDB RDS for MySQL instance.
    std::shared_ptr<vector<DescribeSynDbsResponseBodySynDbs>> synDbs_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20191111
#endif
