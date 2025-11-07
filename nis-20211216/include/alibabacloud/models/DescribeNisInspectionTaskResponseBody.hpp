// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENISINSPECTIONTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENISINSPECTIONTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeNisInspectionTaskResponseBodyCheckResourceList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nis20211216
{
namespace Models
{
  class DescribeNisInspectionTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNisInspectionTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CheckResourceList, checkResourceList_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(InspectionInterval, inspectionInterval_);
      DARABONBA_PTR_TO_JSON(InspectionName, inspectionName_);
      DARABONBA_PTR_TO_JSON(InspectionProject, inspectionProject_);
      DARABONBA_PTR_TO_JSON(InspectionTaskId, inspectionTaskId_);
      DARABONBA_PTR_TO_JSON(InspectionTriggerTime, inspectionTriggerTime_);
      DARABONBA_PTR_TO_JSON(LastUpdateReportId, lastUpdateReportId_);
      DARABONBA_PTR_TO_JSON(LastUpdateTime, lastUpdateTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNisInspectionTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckResourceList, checkResourceList_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(InspectionInterval, inspectionInterval_);
      DARABONBA_PTR_FROM_JSON(InspectionName, inspectionName_);
      DARABONBA_PTR_FROM_JSON(InspectionProject, inspectionProject_);
      DARABONBA_PTR_FROM_JSON(InspectionTaskId, inspectionTaskId_);
      DARABONBA_PTR_FROM_JSON(InspectionTriggerTime, inspectionTriggerTime_);
      DARABONBA_PTR_FROM_JSON(LastUpdateReportId, lastUpdateReportId_);
      DARABONBA_PTR_FROM_JSON(LastUpdateTime, lastUpdateTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeNisInspectionTaskResponseBody() = default ;
    DescribeNisInspectionTaskResponseBody(const DescribeNisInspectionTaskResponseBody &) = default ;
    DescribeNisInspectionTaskResponseBody(DescribeNisInspectionTaskResponseBody &&) = default ;
    DescribeNisInspectionTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNisInspectionTaskResponseBody() = default ;
    DescribeNisInspectionTaskResponseBody& operator=(const DescribeNisInspectionTaskResponseBody &) = default ;
    DescribeNisInspectionTaskResponseBody& operator=(DescribeNisInspectionTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkResourceList_ == nullptr
        && return this->createTime_ == nullptr && return this->inspectionInterval_ == nullptr && return this->inspectionName_ == nullptr && return this->inspectionProject_ == nullptr && return this->inspectionTaskId_ == nullptr
        && return this->inspectionTriggerTime_ == nullptr && return this->lastUpdateReportId_ == nullptr && return this->lastUpdateTime_ == nullptr && return this->requestId_ == nullptr && return this->status_ == nullptr; };
    // checkResourceList Field Functions 
    bool hasCheckResourceList() const { return this->checkResourceList_ != nullptr;};
    void deleteCheckResourceList() { this->checkResourceList_ = nullptr;};
    inline const vector<DescribeNisInspectionTaskResponseBodyCheckResourceList> & checkResourceList() const { DARABONBA_PTR_GET_CONST(checkResourceList_, vector<DescribeNisInspectionTaskResponseBodyCheckResourceList>) };
    inline vector<DescribeNisInspectionTaskResponseBodyCheckResourceList> checkResourceList() { DARABONBA_PTR_GET(checkResourceList_, vector<DescribeNisInspectionTaskResponseBodyCheckResourceList>) };
    inline DescribeNisInspectionTaskResponseBody& setCheckResourceList(const vector<DescribeNisInspectionTaskResponseBodyCheckResourceList> & checkResourceList) { DARABONBA_PTR_SET_VALUE(checkResourceList_, checkResourceList) };
    inline DescribeNisInspectionTaskResponseBody& setCheckResourceList(vector<DescribeNisInspectionTaskResponseBodyCheckResourceList> && checkResourceList) { DARABONBA_PTR_SET_RVALUE(checkResourceList_, checkResourceList) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeNisInspectionTaskResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // inspectionInterval Field Functions 
    bool hasInspectionInterval() const { return this->inspectionInterval_ != nullptr;};
    void deleteInspectionInterval() { this->inspectionInterval_ = nullptr;};
    inline string inspectionInterval() const { DARABONBA_PTR_GET_DEFAULT(inspectionInterval_, "") };
    inline DescribeNisInspectionTaskResponseBody& setInspectionInterval(string inspectionInterval) { DARABONBA_PTR_SET_VALUE(inspectionInterval_, inspectionInterval) };


    // inspectionName Field Functions 
    bool hasInspectionName() const { return this->inspectionName_ != nullptr;};
    void deleteInspectionName() { this->inspectionName_ = nullptr;};
    inline string inspectionName() const { DARABONBA_PTR_GET_DEFAULT(inspectionName_, "") };
    inline DescribeNisInspectionTaskResponseBody& setInspectionName(string inspectionName) { DARABONBA_PTR_SET_VALUE(inspectionName_, inspectionName) };


    // inspectionProject Field Functions 
    bool hasInspectionProject() const { return this->inspectionProject_ != nullptr;};
    void deleteInspectionProject() { this->inspectionProject_ = nullptr;};
    inline string inspectionProject() const { DARABONBA_PTR_GET_DEFAULT(inspectionProject_, "") };
    inline DescribeNisInspectionTaskResponseBody& setInspectionProject(string inspectionProject) { DARABONBA_PTR_SET_VALUE(inspectionProject_, inspectionProject) };


    // inspectionTaskId Field Functions 
    bool hasInspectionTaskId() const { return this->inspectionTaskId_ != nullptr;};
    void deleteInspectionTaskId() { this->inspectionTaskId_ = nullptr;};
    inline string inspectionTaskId() const { DARABONBA_PTR_GET_DEFAULT(inspectionTaskId_, "") };
    inline DescribeNisInspectionTaskResponseBody& setInspectionTaskId(string inspectionTaskId) { DARABONBA_PTR_SET_VALUE(inspectionTaskId_, inspectionTaskId) };


    // inspectionTriggerTime Field Functions 
    bool hasInspectionTriggerTime() const { return this->inspectionTriggerTime_ != nullptr;};
    void deleteInspectionTriggerTime() { this->inspectionTriggerTime_ = nullptr;};
    inline string inspectionTriggerTime() const { DARABONBA_PTR_GET_DEFAULT(inspectionTriggerTime_, "") };
    inline DescribeNisInspectionTaskResponseBody& setInspectionTriggerTime(string inspectionTriggerTime) { DARABONBA_PTR_SET_VALUE(inspectionTriggerTime_, inspectionTriggerTime) };


    // lastUpdateReportId Field Functions 
    bool hasLastUpdateReportId() const { return this->lastUpdateReportId_ != nullptr;};
    void deleteLastUpdateReportId() { this->lastUpdateReportId_ = nullptr;};
    inline string lastUpdateReportId() const { DARABONBA_PTR_GET_DEFAULT(lastUpdateReportId_, "") };
    inline DescribeNisInspectionTaskResponseBody& setLastUpdateReportId(string lastUpdateReportId) { DARABONBA_PTR_SET_VALUE(lastUpdateReportId_, lastUpdateReportId) };


    // lastUpdateTime Field Functions 
    bool hasLastUpdateTime() const { return this->lastUpdateTime_ != nullptr;};
    void deleteLastUpdateTime() { this->lastUpdateTime_ = nullptr;};
    inline string lastUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(lastUpdateTime_, "") };
    inline DescribeNisInspectionTaskResponseBody& setLastUpdateTime(string lastUpdateTime) { DARABONBA_PTR_SET_VALUE(lastUpdateTime_, lastUpdateTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNisInspectionTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeNisInspectionTaskResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<vector<DescribeNisInspectionTaskResponseBodyCheckResourceList>> checkResourceList_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> inspectionInterval_ = nullptr;
    std::shared_ptr<string> inspectionName_ = nullptr;
    std::shared_ptr<string> inspectionProject_ = nullptr;
    std::shared_ptr<string> inspectionTaskId_ = nullptr;
    std::shared_ptr<string> inspectionTriggerTime_ = nullptr;
    std::shared_ptr<string> lastUpdateReportId_ = nullptr;
    std::shared_ptr<string> lastUpdateTime_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nis20211216
#endif
