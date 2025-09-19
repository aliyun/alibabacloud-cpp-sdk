// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECHECKWARNINGMACHINESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECHECKWARNINGMACHINESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCheckWarningMachinesResponseBodyMachines.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeCheckWarningMachinesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCheckWarningMachinesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Machines, machines_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCheckWarningMachinesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Machines, machines_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCheckWarningMachinesResponseBody() = default ;
    DescribeCheckWarningMachinesResponseBody(const DescribeCheckWarningMachinesResponseBody &) = default ;
    DescribeCheckWarningMachinesResponseBody(DescribeCheckWarningMachinesResponseBody &&) = default ;
    DescribeCheckWarningMachinesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCheckWarningMachinesResponseBody() = default ;
    DescribeCheckWarningMachinesResponseBody& operator=(const DescribeCheckWarningMachinesResponseBody &) = default ;
    DescribeCheckWarningMachinesResponseBody& operator=(DescribeCheckWarningMachinesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->count_ != nullptr
        && this->currentPage_ != nullptr && this->machines_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeCheckWarningMachinesResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeCheckWarningMachinesResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // machines Field Functions 
    bool hasMachines() const { return this->machines_ != nullptr;};
    void deleteMachines() { this->machines_ = nullptr;};
    inline const vector<DescribeCheckWarningMachinesResponseBodyMachines> & machines() const { DARABONBA_PTR_GET_CONST(machines_, vector<DescribeCheckWarningMachinesResponseBodyMachines>) };
    inline vector<DescribeCheckWarningMachinesResponseBodyMachines> machines() { DARABONBA_PTR_GET(machines_, vector<DescribeCheckWarningMachinesResponseBodyMachines>) };
    inline DescribeCheckWarningMachinesResponseBody& setMachines(const vector<DescribeCheckWarningMachinesResponseBodyMachines> & machines) { DARABONBA_PTR_SET_VALUE(machines_, machines) };
    inline DescribeCheckWarningMachinesResponseBody& setMachines(vector<DescribeCheckWarningMachinesResponseBodyMachines> && machines) { DARABONBA_PTR_SET_RVALUE(machines_, machines) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeCheckWarningMachinesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCheckWarningMachinesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The number of the servers on which the same risk item is detected.
    std::shared_ptr<int32_t> count_ = nullptr;
    // The number of the page to return. Default value: **1**.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The servers on which the same risk item is detected.
    std::shared_ptr<vector<DescribeCheckWarningMachinesResponseBodyMachines>> machines_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
