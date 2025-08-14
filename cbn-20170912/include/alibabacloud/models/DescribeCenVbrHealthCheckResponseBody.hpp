// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECENVBRHEALTHCHECKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECENVBRHEALTHCHECKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCenVbrHealthCheckResponseBodyVbrHealthChecks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribeCenVbrHealthCheckResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCenVbrHealthCheckResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(VbrHealthChecks, vbrHealthChecks_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCenVbrHealthCheckResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(VbrHealthChecks, vbrHealthChecks_);
    };
    DescribeCenVbrHealthCheckResponseBody() = default ;
    DescribeCenVbrHealthCheckResponseBody(const DescribeCenVbrHealthCheckResponseBody &) = default ;
    DescribeCenVbrHealthCheckResponseBody(DescribeCenVbrHealthCheckResponseBody &&) = default ;
    DescribeCenVbrHealthCheckResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCenVbrHealthCheckResponseBody() = default ;
    DescribeCenVbrHealthCheckResponseBody& operator=(const DescribeCenVbrHealthCheckResponseBody &) = default ;
    DescribeCenVbrHealthCheckResponseBody& operator=(DescribeCenVbrHealthCheckResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageNumber_ != nullptr
        && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr && this->vbrHealthChecks_ != nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeCenVbrHealthCheckResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeCenVbrHealthCheckResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCenVbrHealthCheckResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeCenVbrHealthCheckResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // vbrHealthChecks Field Functions 
    bool hasVbrHealthChecks() const { return this->vbrHealthChecks_ != nullptr;};
    void deleteVbrHealthChecks() { this->vbrHealthChecks_ = nullptr;};
    inline const DescribeCenVbrHealthCheckResponseBodyVbrHealthChecks & vbrHealthChecks() const { DARABONBA_PTR_GET_CONST(vbrHealthChecks_, DescribeCenVbrHealthCheckResponseBodyVbrHealthChecks) };
    inline DescribeCenVbrHealthCheckResponseBodyVbrHealthChecks vbrHealthChecks() { DARABONBA_PTR_GET(vbrHealthChecks_, DescribeCenVbrHealthCheckResponseBodyVbrHealthChecks) };
    inline DescribeCenVbrHealthCheckResponseBody& setVbrHealthChecks(const DescribeCenVbrHealthCheckResponseBodyVbrHealthChecks & vbrHealthChecks) { DARABONBA_PTR_SET_VALUE(vbrHealthChecks_, vbrHealthChecks) };
    inline DescribeCenVbrHealthCheckResponseBody& setVbrHealthChecks(DescribeCenVbrHealthCheckResponseBodyVbrHealthChecks && vbrHealthChecks) { DARABONBA_PTR_SET_RVALUE(vbrHealthChecks_, vbrHealthChecks) };


  protected:
    // The page number of the returned page.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    // The health check configuration of the VBR.
    std::shared_ptr<DescribeCenVbrHealthCheckResponseBodyVbrHealthChecks> vbrHealthChecks_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
