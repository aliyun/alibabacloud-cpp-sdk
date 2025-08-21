// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKINTERFACESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKINTERFACESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeNetworkInterfacesResponseBodyNetworkInterfaceSets.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeNetworkInterfacesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkInterfacesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkInterfaceSets, networkInterfaceSets_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkInterfacesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkInterfaceSets, networkInterfaceSets_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeNetworkInterfacesResponseBody() = default ;
    DescribeNetworkInterfacesResponseBody(const DescribeNetworkInterfacesResponseBody &) = default ;
    DescribeNetworkInterfacesResponseBody(DescribeNetworkInterfacesResponseBody &&) = default ;
    DescribeNetworkInterfacesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkInterfacesResponseBody() = default ;
    DescribeNetworkInterfacesResponseBody& operator=(const DescribeNetworkInterfacesResponseBody &) = default ;
    DescribeNetworkInterfacesResponseBody& operator=(DescribeNetworkInterfacesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->networkInterfaceSets_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // networkInterfaceSets Field Functions 
    bool hasNetworkInterfaceSets() const { return this->networkInterfaceSets_ != nullptr;};
    void deleteNetworkInterfaceSets() { this->networkInterfaceSets_ = nullptr;};
    inline const DescribeNetworkInterfacesResponseBodyNetworkInterfaceSets & networkInterfaceSets() const { DARABONBA_PTR_GET_CONST(networkInterfaceSets_, DescribeNetworkInterfacesResponseBodyNetworkInterfaceSets) };
    inline DescribeNetworkInterfacesResponseBodyNetworkInterfaceSets networkInterfaceSets() { DARABONBA_PTR_GET(networkInterfaceSets_, DescribeNetworkInterfacesResponseBodyNetworkInterfaceSets) };
    inline DescribeNetworkInterfacesResponseBody& setNetworkInterfaceSets(const DescribeNetworkInterfacesResponseBodyNetworkInterfaceSets & networkInterfaceSets) { DARABONBA_PTR_SET_VALUE(networkInterfaceSets_, networkInterfaceSets) };
    inline DescribeNetworkInterfacesResponseBody& setNetworkInterfaceSets(DescribeNetworkInterfacesResponseBodyNetworkInterfaceSets && networkInterfaceSets) { DARABONBA_PTR_SET_RVALUE(networkInterfaceSets_, networkInterfaceSets) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeNetworkInterfacesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeNetworkInterfacesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNetworkInterfacesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeNetworkInterfacesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Details about the ENIs.
    std::shared_ptr<DescribeNetworkInterfacesResponseBodyNetworkInterfaceSets> networkInterfaceSets_ = nullptr;
    // The number of the page to return. Pages start from page **1**. Default value: **1**.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries returned per page. Maximum value: **50**. Default value: **10**.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries in the list.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
