// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONACCESSPOINTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONACCESSPOINTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListApplicationAccessPointsResponseBodyApplicationAccessPoints.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class ListApplicationAccessPointsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationAccessPointsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationAccessPoints, applicationAccessPoints_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListApplicationAccessPointsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationAccessPoints, applicationAccessPoints_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListApplicationAccessPointsResponseBody() = default ;
    ListApplicationAccessPointsResponseBody(const ListApplicationAccessPointsResponseBody &) = default ;
    ListApplicationAccessPointsResponseBody(ListApplicationAccessPointsResponseBody &&) = default ;
    ListApplicationAccessPointsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApplicationAccessPointsResponseBody() = default ;
    ListApplicationAccessPointsResponseBody& operator=(const ListApplicationAccessPointsResponseBody &) = default ;
    ListApplicationAccessPointsResponseBody& operator=(ListApplicationAccessPointsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationAccessPoints_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // applicationAccessPoints Field Functions 
    bool hasApplicationAccessPoints() const { return this->applicationAccessPoints_ != nullptr;};
    void deleteApplicationAccessPoints() { this->applicationAccessPoints_ = nullptr;};
    inline const ListApplicationAccessPointsResponseBodyApplicationAccessPoints & applicationAccessPoints() const { DARABONBA_PTR_GET_CONST(applicationAccessPoints_, ListApplicationAccessPointsResponseBodyApplicationAccessPoints) };
    inline ListApplicationAccessPointsResponseBodyApplicationAccessPoints applicationAccessPoints() { DARABONBA_PTR_GET(applicationAccessPoints_, ListApplicationAccessPointsResponseBodyApplicationAccessPoints) };
    inline ListApplicationAccessPointsResponseBody& setApplicationAccessPoints(const ListApplicationAccessPointsResponseBodyApplicationAccessPoints & applicationAccessPoints) { DARABONBA_PTR_SET_VALUE(applicationAccessPoints_, applicationAccessPoints) };
    inline ListApplicationAccessPointsResponseBody& setApplicationAccessPoints(ListApplicationAccessPointsResponseBodyApplicationAccessPoints && applicationAccessPoints) { DARABONBA_PTR_SET_RVALUE(applicationAccessPoints_, applicationAccessPoints) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListApplicationAccessPointsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListApplicationAccessPointsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListApplicationAccessPointsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListApplicationAccessPointsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // A list of AAPs.
    std::shared_ptr<ListApplicationAccessPointsResponseBodyApplicationAccessPoints> applicationAccessPoints_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
