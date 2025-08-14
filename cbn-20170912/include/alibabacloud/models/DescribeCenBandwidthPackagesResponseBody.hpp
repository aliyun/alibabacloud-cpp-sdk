// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECENBANDWIDTHPACKAGESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECENBANDWIDTHPACKAGESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackages.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribeCenBandwidthPackagesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCenBandwidthPackagesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CenBandwidthPackages, cenBandwidthPackages_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCenBandwidthPackagesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CenBandwidthPackages, cenBandwidthPackages_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeCenBandwidthPackagesResponseBody() = default ;
    DescribeCenBandwidthPackagesResponseBody(const DescribeCenBandwidthPackagesResponseBody &) = default ;
    DescribeCenBandwidthPackagesResponseBody(DescribeCenBandwidthPackagesResponseBody &&) = default ;
    DescribeCenBandwidthPackagesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCenBandwidthPackagesResponseBody() = default ;
    DescribeCenBandwidthPackagesResponseBody& operator=(const DescribeCenBandwidthPackagesResponseBody &) = default ;
    DescribeCenBandwidthPackagesResponseBody& operator=(DescribeCenBandwidthPackagesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cenBandwidthPackages_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // cenBandwidthPackages Field Functions 
    bool hasCenBandwidthPackages() const { return this->cenBandwidthPackages_ != nullptr;};
    void deleteCenBandwidthPackages() { this->cenBandwidthPackages_ = nullptr;};
    inline const DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackages & cenBandwidthPackages() const { DARABONBA_PTR_GET_CONST(cenBandwidthPackages_, DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackages) };
    inline DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackages cenBandwidthPackages() { DARABONBA_PTR_GET(cenBandwidthPackages_, DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackages) };
    inline DescribeCenBandwidthPackagesResponseBody& setCenBandwidthPackages(const DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackages & cenBandwidthPackages) { DARABONBA_PTR_SET_VALUE(cenBandwidthPackages_, cenBandwidthPackages) };
    inline DescribeCenBandwidthPackagesResponseBody& setCenBandwidthPackages(DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackages && cenBandwidthPackages) { DARABONBA_PTR_SET_RVALUE(cenBandwidthPackages_, cenBandwidthPackages) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeCenBandwidthPackagesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeCenBandwidthPackagesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCenBandwidthPackagesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeCenBandwidthPackagesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The details about the bandwidth plan.
    std::shared_ptr<DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackages> cenBandwidthPackages_ = nullptr;
    // The number of the returned page.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
