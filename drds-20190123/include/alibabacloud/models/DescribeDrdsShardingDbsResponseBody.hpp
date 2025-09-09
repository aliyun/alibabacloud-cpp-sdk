// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDRDSSHARDINGDBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDRDSSHARDINGDBSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDrdsShardingDbsResponseBodyShardingDbs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeDrdsShardingDbsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDrdsShardingDbsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ShardingDbs, shardingDbs_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDrdsShardingDbsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ShardingDbs, shardingDbs_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeDrdsShardingDbsResponseBody() = default ;
    DescribeDrdsShardingDbsResponseBody(const DescribeDrdsShardingDbsResponseBody &) = default ;
    DescribeDrdsShardingDbsResponseBody(DescribeDrdsShardingDbsResponseBody &&) = default ;
    DescribeDrdsShardingDbsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDrdsShardingDbsResponseBody() = default ;
    DescribeDrdsShardingDbsResponseBody& operator=(const DescribeDrdsShardingDbsResponseBody &) = default ;
    DescribeDrdsShardingDbsResponseBody& operator=(DescribeDrdsShardingDbsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageNumber_ != nullptr
        && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->shardingDbs_ != nullptr && this->success_ != nullptr && this->total_ != nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline DescribeDrdsShardingDbsResponseBody& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeDrdsShardingDbsResponseBody& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDrdsShardingDbsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // shardingDbs Field Functions 
    bool hasShardingDbs() const { return this->shardingDbs_ != nullptr;};
    void deleteShardingDbs() { this->shardingDbs_ = nullptr;};
    inline const DescribeDrdsShardingDbsResponseBodyShardingDbs & shardingDbs() const { DARABONBA_PTR_GET_CONST(shardingDbs_, DescribeDrdsShardingDbsResponseBodyShardingDbs) };
    inline DescribeDrdsShardingDbsResponseBodyShardingDbs shardingDbs() { DARABONBA_PTR_GET(shardingDbs_, DescribeDrdsShardingDbsResponseBodyShardingDbs) };
    inline DescribeDrdsShardingDbsResponseBody& setShardingDbs(const DescribeDrdsShardingDbsResponseBodyShardingDbs & shardingDbs) { DARABONBA_PTR_SET_VALUE(shardingDbs_, shardingDbs) };
    inline DescribeDrdsShardingDbsResponseBody& setShardingDbs(DescribeDrdsShardingDbsResponseBodyShardingDbs && shardingDbs) { DARABONBA_PTR_SET_RVALUE(shardingDbs_, shardingDbs) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeDrdsShardingDbsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline string total() const { DARABONBA_PTR_GET_DEFAULT(total_, "") };
    inline DescribeDrdsShardingDbsResponseBody& setTotal(string total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The page number of the returned page.
    std::shared_ptr<string> pageNumber_ = nullptr;
    // The number of database shards returned per page.
    std::shared_ptr<string> pageSize_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The list of returned database shards.
    std::shared_ptr<DescribeDrdsShardingDbsResponseBodyShardingDbs> shardingDbs_ = nullptr;
    // Indicates whether the request is successful.
    std::shared_ptr<bool> success_ = nullptr;
    // The number of returned database shards.
    std::shared_ptr<string> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
