// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERRATEPLANINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERRATEPLANINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListUserRatePlanInstancesResponseBodyInstanceInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListUserRatePlanInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserRatePlanInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceInfo, instanceInfo_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserRatePlanInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceInfo, instanceInfo_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
    };
    ListUserRatePlanInstancesResponseBody() = default ;
    ListUserRatePlanInstancesResponseBody(const ListUserRatePlanInstancesResponseBody &) = default ;
    ListUserRatePlanInstancesResponseBody(ListUserRatePlanInstancesResponseBody &&) = default ;
    ListUserRatePlanInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserRatePlanInstancesResponseBody() = default ;
    ListUserRatePlanInstancesResponseBody& operator=(const ListUserRatePlanInstancesResponseBody &) = default ;
    ListUserRatePlanInstancesResponseBody& operator=(ListUserRatePlanInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceInfo_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr && this->totalPage_ != nullptr; };
    // instanceInfo Field Functions 
    bool hasInstanceInfo() const { return this->instanceInfo_ != nullptr;};
    void deleteInstanceInfo() { this->instanceInfo_ = nullptr;};
    inline const vector<ListUserRatePlanInstancesResponseBodyInstanceInfo> & instanceInfo() const { DARABONBA_PTR_GET_CONST(instanceInfo_, vector<ListUserRatePlanInstancesResponseBodyInstanceInfo>) };
    inline vector<ListUserRatePlanInstancesResponseBodyInstanceInfo> instanceInfo() { DARABONBA_PTR_GET(instanceInfo_, vector<ListUserRatePlanInstancesResponseBodyInstanceInfo>) };
    inline ListUserRatePlanInstancesResponseBody& setInstanceInfo(const vector<ListUserRatePlanInstancesResponseBodyInstanceInfo> & instanceInfo) { DARABONBA_PTR_SET_VALUE(instanceInfo_, instanceInfo) };
    inline ListUserRatePlanInstancesResponseBody& setInstanceInfo(vector<ListUserRatePlanInstancesResponseBodyInstanceInfo> && instanceInfo) { DARABONBA_PTR_SET_RVALUE(instanceInfo_, instanceInfo) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListUserRatePlanInstancesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListUserRatePlanInstancesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListUserRatePlanInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListUserRatePlanInstancesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int32_t totalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0) };
    inline ListUserRatePlanInstancesResponseBody& setTotalPage(int32_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    // The queried plans.
    std::shared_ptr<vector<ListUserRatePlanInstancesResponseBodyInstanceInfo>> instanceInfo_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    // The total number of pages returned.
    std::shared_ptr<int32_t> totalPage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
