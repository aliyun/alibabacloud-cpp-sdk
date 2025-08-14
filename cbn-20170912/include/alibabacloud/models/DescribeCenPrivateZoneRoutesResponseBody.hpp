// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECENPRIVATEZONEROUTESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECENPRIVATEZONEROUTESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCenPrivateZoneRoutesResponseBodyPrivateZoneInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribeCenPrivateZoneRoutesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCenPrivateZoneRoutesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CenId, cenId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PrivateZoneDnsServers, privateZoneDnsServers_);
      DARABONBA_PTR_TO_JSON(PrivateZoneInfos, privateZoneInfos_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCenPrivateZoneRoutesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CenId, cenId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PrivateZoneDnsServers, privateZoneDnsServers_);
      DARABONBA_PTR_FROM_JSON(PrivateZoneInfos, privateZoneInfos_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeCenPrivateZoneRoutesResponseBody() = default ;
    DescribeCenPrivateZoneRoutesResponseBody(const DescribeCenPrivateZoneRoutesResponseBody &) = default ;
    DescribeCenPrivateZoneRoutesResponseBody(DescribeCenPrivateZoneRoutesResponseBody &&) = default ;
    DescribeCenPrivateZoneRoutesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCenPrivateZoneRoutesResponseBody() = default ;
    DescribeCenPrivateZoneRoutesResponseBody& operator=(const DescribeCenPrivateZoneRoutesResponseBody &) = default ;
    DescribeCenPrivateZoneRoutesResponseBody& operator=(DescribeCenPrivateZoneRoutesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cenId_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->privateZoneDnsServers_ != nullptr && this->privateZoneInfos_ != nullptr && this->requestId_ != nullptr
        && this->totalCount_ != nullptr; };
    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string cenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline DescribeCenPrivateZoneRoutesResponseBody& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeCenPrivateZoneRoutesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeCenPrivateZoneRoutesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // privateZoneDnsServers Field Functions 
    bool hasPrivateZoneDnsServers() const { return this->privateZoneDnsServers_ != nullptr;};
    void deletePrivateZoneDnsServers() { this->privateZoneDnsServers_ = nullptr;};
    inline string privateZoneDnsServers() const { DARABONBA_PTR_GET_DEFAULT(privateZoneDnsServers_, "") };
    inline DescribeCenPrivateZoneRoutesResponseBody& setPrivateZoneDnsServers(string privateZoneDnsServers) { DARABONBA_PTR_SET_VALUE(privateZoneDnsServers_, privateZoneDnsServers) };


    // privateZoneInfos Field Functions 
    bool hasPrivateZoneInfos() const { return this->privateZoneInfos_ != nullptr;};
    void deletePrivateZoneInfos() { this->privateZoneInfos_ = nullptr;};
    inline const DescribeCenPrivateZoneRoutesResponseBodyPrivateZoneInfos & privateZoneInfos() const { DARABONBA_PTR_GET_CONST(privateZoneInfos_, DescribeCenPrivateZoneRoutesResponseBodyPrivateZoneInfos) };
    inline DescribeCenPrivateZoneRoutesResponseBodyPrivateZoneInfos privateZoneInfos() { DARABONBA_PTR_GET(privateZoneInfos_, DescribeCenPrivateZoneRoutesResponseBodyPrivateZoneInfos) };
    inline DescribeCenPrivateZoneRoutesResponseBody& setPrivateZoneInfos(const DescribeCenPrivateZoneRoutesResponseBodyPrivateZoneInfos & privateZoneInfos) { DARABONBA_PTR_SET_VALUE(privateZoneInfos_, privateZoneInfos) };
    inline DescribeCenPrivateZoneRoutesResponseBody& setPrivateZoneInfos(DescribeCenPrivateZoneRoutesResponseBodyPrivateZoneInfos && privateZoneInfos) { DARABONBA_PTR_SET_RVALUE(privateZoneInfos_, privateZoneInfos) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCenPrivateZoneRoutesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeCenPrivateZoneRoutesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The ID of the CEN instance.
    std::shared_ptr<string> cenId_ = nullptr;
    // The page number of the returned page.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The IP address of the DNS server used by PrivateZone.
    std::shared_ptr<string> privateZoneDnsServers_ = nullptr;
    // The detailed configuration of PrivateZone.
    std::shared_ptr<DescribeCenPrivateZoneRoutesResponseBodyPrivateZoneInfos> privateZoneInfos_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
