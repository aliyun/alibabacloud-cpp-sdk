// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVROUTERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVROUTERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeVRoutersResponseBodyVRouters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeVRoutersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVRoutersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(VRouters, VRouters_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVRoutersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(VRouters, VRouters_);
    };
    DescribeVRoutersResponseBody() = default ;
    DescribeVRoutersResponseBody(const DescribeVRoutersResponseBody &) = default ;
    DescribeVRoutersResponseBody(DescribeVRoutersResponseBody &&) = default ;
    DescribeVRoutersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVRoutersResponseBody() = default ;
    DescribeVRoutersResponseBody& operator=(const DescribeVRoutersResponseBody &) = default ;
    DescribeVRoutersResponseBody& operator=(DescribeVRoutersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageNumber_ != nullptr
        && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr && this->VRouters_ != nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeVRoutersResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeVRoutersResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVRoutersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeVRoutersResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // VRouters Field Functions 
    bool hasVRouters() const { return this->VRouters_ != nullptr;};
    void deleteVRouters() { this->VRouters_ = nullptr;};
    inline const DescribeVRoutersResponseBodyVRouters & VRouters() const { DARABONBA_PTR_GET_CONST(VRouters_, DescribeVRoutersResponseBodyVRouters) };
    inline DescribeVRoutersResponseBodyVRouters VRouters() { DARABONBA_PTR_GET(VRouters_, DescribeVRoutersResponseBodyVRouters) };
    inline DescribeVRoutersResponseBody& setVRouters(const DescribeVRoutersResponseBodyVRouters & VRouters) { DARABONBA_PTR_SET_VALUE(VRouters_, VRouters) };
    inline DescribeVRoutersResponseBody& setVRouters(DescribeVRoutersResponseBodyVRouters && VRouters) { DARABONBA_PTR_SET_RVALUE(VRouters_, VRouters) };


  protected:
    // The page number of the returned page.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    // The details about the vRouters.
    std::shared_ptr<DescribeVRoutersResponseBodyVRouters> VRouters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
