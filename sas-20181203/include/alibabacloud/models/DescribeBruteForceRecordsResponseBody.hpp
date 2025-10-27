// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBRUTEFORCERECORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBRUTEFORCERECORDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeBruteForceRecordsResponseBodyMachineList.hpp>
#include <alibabacloud/models/DescribeBruteForceRecordsResponseBodyPageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeBruteForceRecordsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBruteForceRecordsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MachineList, machineList_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBruteForceRecordsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MachineList, machineList_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeBruteForceRecordsResponseBody() = default ;
    DescribeBruteForceRecordsResponseBody(const DescribeBruteForceRecordsResponseBody &) = default ;
    DescribeBruteForceRecordsResponseBody(DescribeBruteForceRecordsResponseBody &&) = default ;
    DescribeBruteForceRecordsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBruteForceRecordsResponseBody() = default ;
    DescribeBruteForceRecordsResponseBody& operator=(const DescribeBruteForceRecordsResponseBody &) = default ;
    DescribeBruteForceRecordsResponseBody& operator=(DescribeBruteForceRecordsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->machineList_ == nullptr
        && return this->pageInfo_ == nullptr && return this->requestId_ == nullptr; };
    // machineList Field Functions 
    bool hasMachineList() const { return this->machineList_ != nullptr;};
    void deleteMachineList() { this->machineList_ = nullptr;};
    inline const vector<DescribeBruteForceRecordsResponseBodyMachineList> & machineList() const { DARABONBA_PTR_GET_CONST(machineList_, vector<DescribeBruteForceRecordsResponseBodyMachineList>) };
    inline vector<DescribeBruteForceRecordsResponseBodyMachineList> machineList() { DARABONBA_PTR_GET(machineList_, vector<DescribeBruteForceRecordsResponseBodyMachineList>) };
    inline DescribeBruteForceRecordsResponseBody& setMachineList(const vector<DescribeBruteForceRecordsResponseBodyMachineList> & machineList) { DARABONBA_PTR_SET_VALUE(machineList_, machineList) };
    inline DescribeBruteForceRecordsResponseBody& setMachineList(vector<DescribeBruteForceRecordsResponseBodyMachineList> && machineList) { DARABONBA_PTR_SET_RVALUE(machineList_, machineList) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeBruteForceRecordsResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeBruteForceRecordsResponseBodyPageInfo) };
    inline DescribeBruteForceRecordsResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeBruteForceRecordsResponseBodyPageInfo) };
    inline DescribeBruteForceRecordsResponseBody& setPageInfo(const DescribeBruteForceRecordsResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeBruteForceRecordsResponseBody& setPageInfo(DescribeBruteForceRecordsResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBruteForceRecordsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The IP addresses.
    std::shared_ptr<vector<DescribeBruteForceRecordsResponseBodyMachineList>> machineList_ = nullptr;
    // The pagination information.
    std::shared_ptr<DescribeBruteForceRecordsResponseBodyPageInfo> pageInfo_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
