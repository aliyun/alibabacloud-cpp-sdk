// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEDIAGNOSISSUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEDIAGNOSISSUMMARYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBInstanceDiagnosisSummaryResponseBodyItems.hpp>
#include <alibabacloud/models/DescribeDBInstanceDiagnosisSummaryResponseBodyMasterStatusInfo.hpp>
#include <alibabacloud/models/DescribeDBInstanceDiagnosisSummaryResponseBodySegmentStatusInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeDBInstanceDiagnosisSummaryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceDiagnosisSummaryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(MasterStatusInfo, masterStatusInfo_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SegmentStatusInfo, segmentStatusInfo_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceDiagnosisSummaryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(MasterStatusInfo, masterStatusInfo_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SegmentStatusInfo, segmentStatusInfo_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDBInstanceDiagnosisSummaryResponseBody() = default ;
    DescribeDBInstanceDiagnosisSummaryResponseBody(const DescribeDBInstanceDiagnosisSummaryResponseBody &) = default ;
    DescribeDBInstanceDiagnosisSummaryResponseBody(DescribeDBInstanceDiagnosisSummaryResponseBody &&) = default ;
    DescribeDBInstanceDiagnosisSummaryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceDiagnosisSummaryResponseBody() = default ;
    DescribeDBInstanceDiagnosisSummaryResponseBody& operator=(const DescribeDBInstanceDiagnosisSummaryResponseBody &) = default ;
    DescribeDBInstanceDiagnosisSummaryResponseBody& operator=(DescribeDBInstanceDiagnosisSummaryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->items_ != nullptr
        && this->masterStatusInfo_ != nullptr && this->pageNumber_ != nullptr && this->requestId_ != nullptr && this->segmentStatusInfo_ != nullptr && this->totalCount_ != nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeDBInstanceDiagnosisSummaryResponseBodyItems> & items() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeDBInstanceDiagnosisSummaryResponseBodyItems>) };
    inline vector<DescribeDBInstanceDiagnosisSummaryResponseBodyItems> items() { DARABONBA_PTR_GET(items_, vector<DescribeDBInstanceDiagnosisSummaryResponseBodyItems>) };
    inline DescribeDBInstanceDiagnosisSummaryResponseBody& setItems(const vector<DescribeDBInstanceDiagnosisSummaryResponseBodyItems> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeDBInstanceDiagnosisSummaryResponseBody& setItems(vector<DescribeDBInstanceDiagnosisSummaryResponseBodyItems> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // masterStatusInfo Field Functions 
    bool hasMasterStatusInfo() const { return this->masterStatusInfo_ != nullptr;};
    void deleteMasterStatusInfo() { this->masterStatusInfo_ = nullptr;};
    inline const DescribeDBInstanceDiagnosisSummaryResponseBodyMasterStatusInfo & masterStatusInfo() const { DARABONBA_PTR_GET_CONST(masterStatusInfo_, DescribeDBInstanceDiagnosisSummaryResponseBodyMasterStatusInfo) };
    inline DescribeDBInstanceDiagnosisSummaryResponseBodyMasterStatusInfo masterStatusInfo() { DARABONBA_PTR_GET(masterStatusInfo_, DescribeDBInstanceDiagnosisSummaryResponseBodyMasterStatusInfo) };
    inline DescribeDBInstanceDiagnosisSummaryResponseBody& setMasterStatusInfo(const DescribeDBInstanceDiagnosisSummaryResponseBodyMasterStatusInfo & masterStatusInfo) { DARABONBA_PTR_SET_VALUE(masterStatusInfo_, masterStatusInfo) };
    inline DescribeDBInstanceDiagnosisSummaryResponseBody& setMasterStatusInfo(DescribeDBInstanceDiagnosisSummaryResponseBodyMasterStatusInfo && masterStatusInfo) { DARABONBA_PTR_SET_RVALUE(masterStatusInfo_, masterStatusInfo) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline DescribeDBInstanceDiagnosisSummaryResponseBody& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBInstanceDiagnosisSummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // segmentStatusInfo Field Functions 
    bool hasSegmentStatusInfo() const { return this->segmentStatusInfo_ != nullptr;};
    void deleteSegmentStatusInfo() { this->segmentStatusInfo_ = nullptr;};
    inline const DescribeDBInstanceDiagnosisSummaryResponseBodySegmentStatusInfo & segmentStatusInfo() const { DARABONBA_PTR_GET_CONST(segmentStatusInfo_, DescribeDBInstanceDiagnosisSummaryResponseBodySegmentStatusInfo) };
    inline DescribeDBInstanceDiagnosisSummaryResponseBodySegmentStatusInfo segmentStatusInfo() { DARABONBA_PTR_GET(segmentStatusInfo_, DescribeDBInstanceDiagnosisSummaryResponseBodySegmentStatusInfo) };
    inline DescribeDBInstanceDiagnosisSummaryResponseBody& setSegmentStatusInfo(const DescribeDBInstanceDiagnosisSummaryResponseBodySegmentStatusInfo & segmentStatusInfo) { DARABONBA_PTR_SET_VALUE(segmentStatusInfo_, segmentStatusInfo) };
    inline DescribeDBInstanceDiagnosisSummaryResponseBody& setSegmentStatusInfo(DescribeDBInstanceDiagnosisSummaryResponseBodySegmentStatusInfo && segmentStatusInfo) { DARABONBA_PTR_SET_RVALUE(segmentStatusInfo_, segmentStatusInfo) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline DescribeDBInstanceDiagnosisSummaryResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The group ID.
    std::shared_ptr<vector<DescribeDBInstanceDiagnosisSummaryResponseBodyItems>> items_ = nullptr;
    // The state information about the coordinator node.
    std::shared_ptr<DescribeDBInstanceDiagnosisSummaryResponseBodyMasterStatusInfo> masterStatusInfo_ = nullptr;
    // The page number.
    std::shared_ptr<string> pageNumber_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The state information about compute nodes.
    std::shared_ptr<DescribeDBInstanceDiagnosisSummaryResponseBodySegmentStatusInfo> segmentStatusInfo_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<string> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
