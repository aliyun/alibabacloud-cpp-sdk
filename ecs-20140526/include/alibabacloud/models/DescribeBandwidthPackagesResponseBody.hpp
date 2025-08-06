// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBANDWIDTHPACKAGESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBANDWIDTHPACKAGESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeBandwidthPackagesResponseBodyBandwidthPackages.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeBandwidthPackagesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBandwidthPackagesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BandwidthPackages, bandwidthPackages_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBandwidthPackagesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BandwidthPackages, bandwidthPackages_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeBandwidthPackagesResponseBody() = default ;
    DescribeBandwidthPackagesResponseBody(const DescribeBandwidthPackagesResponseBody &) = default ;
    DescribeBandwidthPackagesResponseBody(DescribeBandwidthPackagesResponseBody &&) = default ;
    DescribeBandwidthPackagesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBandwidthPackagesResponseBody() = default ;
    DescribeBandwidthPackagesResponseBody& operator=(const DescribeBandwidthPackagesResponseBody &) = default ;
    DescribeBandwidthPackagesResponseBody& operator=(DescribeBandwidthPackagesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bandwidthPackages_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // bandwidthPackages Field Functions 
    bool hasBandwidthPackages() const { return this->bandwidthPackages_ != nullptr;};
    void deleteBandwidthPackages() { this->bandwidthPackages_ = nullptr;};
    inline const DescribeBandwidthPackagesResponseBodyBandwidthPackages & bandwidthPackages() const { DARABONBA_PTR_GET_CONST(bandwidthPackages_, DescribeBandwidthPackagesResponseBodyBandwidthPackages) };
    inline DescribeBandwidthPackagesResponseBodyBandwidthPackages bandwidthPackages() { DARABONBA_PTR_GET(bandwidthPackages_, DescribeBandwidthPackagesResponseBodyBandwidthPackages) };
    inline DescribeBandwidthPackagesResponseBody& setBandwidthPackages(const DescribeBandwidthPackagesResponseBodyBandwidthPackages & bandwidthPackages) { DARABONBA_PTR_SET_VALUE(bandwidthPackages_, bandwidthPackages) };
    inline DescribeBandwidthPackagesResponseBody& setBandwidthPackages(DescribeBandwidthPackagesResponseBodyBandwidthPackages && bandwidthPackages) { DARABONBA_PTR_SET_RVALUE(bandwidthPackages_, bandwidthPackages) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeBandwidthPackagesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeBandwidthPackagesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBandwidthPackagesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeBandwidthPackagesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<DescribeBandwidthPackagesResponseBodyBandwidthPackages> bandwidthPackages_ = nullptr;
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
