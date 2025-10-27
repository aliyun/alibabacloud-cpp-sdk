// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOFFLINEMACHINESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOFFLINEMACHINESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeOfflineMachinesResponseBodyMachineList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeOfflineMachinesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOfflineMachinesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(MachineList, machineList_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOfflineMachinesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(MachineList, machineList_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeOfflineMachinesResponseBody() = default ;
    DescribeOfflineMachinesResponseBody(const DescribeOfflineMachinesResponseBody &) = default ;
    DescribeOfflineMachinesResponseBody(DescribeOfflineMachinesResponseBody &&) = default ;
    DescribeOfflineMachinesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOfflineMachinesResponseBody() = default ;
    DescribeOfflineMachinesResponseBody& operator=(const DescribeOfflineMachinesResponseBody &) = default ;
    DescribeOfflineMachinesResponseBody& operator=(DescribeOfflineMachinesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && return this->machineList_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeOfflineMachinesResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // machineList Field Functions 
    bool hasMachineList() const { return this->machineList_ != nullptr;};
    void deleteMachineList() { this->machineList_ = nullptr;};
    inline const vector<DescribeOfflineMachinesResponseBodyMachineList> & machineList() const { DARABONBA_PTR_GET_CONST(machineList_, vector<DescribeOfflineMachinesResponseBodyMachineList>) };
    inline vector<DescribeOfflineMachinesResponseBodyMachineList> machineList() { DARABONBA_PTR_GET(machineList_, vector<DescribeOfflineMachinesResponseBodyMachineList>) };
    inline DescribeOfflineMachinesResponseBody& setMachineList(const vector<DescribeOfflineMachinesResponseBodyMachineList> & machineList) { DARABONBA_PTR_SET_VALUE(machineList_, machineList) };
    inline DescribeOfflineMachinesResponseBody& setMachineList(vector<DescribeOfflineMachinesResponseBodyMachineList> && machineList) { DARABONBA_PTR_SET_RVALUE(machineList_, machineList) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeOfflineMachinesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeOfflineMachinesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeOfflineMachinesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number of the returned page.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // An array that consists of the information about servers.
    std::shared_ptr<vector<DescribeOfflineMachinesResponseBodyMachineList>> machineList_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
