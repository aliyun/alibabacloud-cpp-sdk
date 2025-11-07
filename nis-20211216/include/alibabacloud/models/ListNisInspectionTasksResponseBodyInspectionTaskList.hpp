// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNISINSPECTIONTASKSRESPONSEBODYINSPECTIONTASKLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTNISINSPECTIONTASKSRESPONSEBODYINSPECTIONTASKLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nis20211216
{
namespace Models
{
  class ListNisInspectionTasksResponseBodyInspectionTaskList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNisInspectionTasksResponseBodyInspectionTaskList& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(InspectionName, inspectionName_);
      DARABONBA_PTR_TO_JSON(InspectionProject, inspectionProject_);
      DARABONBA_PTR_TO_JSON(InspectionTaskId, inspectionTaskId_);
      DARABONBA_PTR_TO_JSON(LastUpdateReportId, lastUpdateReportId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListNisInspectionTasksResponseBodyInspectionTaskList& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(InspectionName, inspectionName_);
      DARABONBA_PTR_FROM_JSON(InspectionProject, inspectionProject_);
      DARABONBA_PTR_FROM_JSON(InspectionTaskId, inspectionTaskId_);
      DARABONBA_PTR_FROM_JSON(LastUpdateReportId, lastUpdateReportId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListNisInspectionTasksResponseBodyInspectionTaskList() = default ;
    ListNisInspectionTasksResponseBodyInspectionTaskList(const ListNisInspectionTasksResponseBodyInspectionTaskList &) = default ;
    ListNisInspectionTasksResponseBodyInspectionTaskList(ListNisInspectionTasksResponseBodyInspectionTaskList &&) = default ;
    ListNisInspectionTasksResponseBodyInspectionTaskList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNisInspectionTasksResponseBodyInspectionTaskList() = default ;
    ListNisInspectionTasksResponseBodyInspectionTaskList& operator=(const ListNisInspectionTasksResponseBodyInspectionTaskList &) = default ;
    ListNisInspectionTasksResponseBodyInspectionTaskList& operator=(ListNisInspectionTasksResponseBodyInspectionTaskList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->inspectionName_ == nullptr && return this->inspectionProject_ == nullptr && return this->inspectionTaskId_ == nullptr && return this->lastUpdateReportId_ == nullptr && return this->status_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListNisInspectionTasksResponseBodyInspectionTaskList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // inspectionName Field Functions 
    bool hasInspectionName() const { return this->inspectionName_ != nullptr;};
    void deleteInspectionName() { this->inspectionName_ = nullptr;};
    inline string inspectionName() const { DARABONBA_PTR_GET_DEFAULT(inspectionName_, "") };
    inline ListNisInspectionTasksResponseBodyInspectionTaskList& setInspectionName(string inspectionName) { DARABONBA_PTR_SET_VALUE(inspectionName_, inspectionName) };


    // inspectionProject Field Functions 
    bool hasInspectionProject() const { return this->inspectionProject_ != nullptr;};
    void deleteInspectionProject() { this->inspectionProject_ = nullptr;};
    inline string inspectionProject() const { DARABONBA_PTR_GET_DEFAULT(inspectionProject_, "") };
    inline ListNisInspectionTasksResponseBodyInspectionTaskList& setInspectionProject(string inspectionProject) { DARABONBA_PTR_SET_VALUE(inspectionProject_, inspectionProject) };


    // inspectionTaskId Field Functions 
    bool hasInspectionTaskId() const { return this->inspectionTaskId_ != nullptr;};
    void deleteInspectionTaskId() { this->inspectionTaskId_ = nullptr;};
    inline string inspectionTaskId() const { DARABONBA_PTR_GET_DEFAULT(inspectionTaskId_, "") };
    inline ListNisInspectionTasksResponseBodyInspectionTaskList& setInspectionTaskId(string inspectionTaskId) { DARABONBA_PTR_SET_VALUE(inspectionTaskId_, inspectionTaskId) };


    // lastUpdateReportId Field Functions 
    bool hasLastUpdateReportId() const { return this->lastUpdateReportId_ != nullptr;};
    void deleteLastUpdateReportId() { this->lastUpdateReportId_ = nullptr;};
    inline string lastUpdateReportId() const { DARABONBA_PTR_GET_DEFAULT(lastUpdateReportId_, "") };
    inline ListNisInspectionTasksResponseBodyInspectionTaskList& setLastUpdateReportId(string lastUpdateReportId) { DARABONBA_PTR_SET_VALUE(lastUpdateReportId_, lastUpdateReportId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListNisInspectionTasksResponseBodyInspectionTaskList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> inspectionName_ = nullptr;
    std::shared_ptr<string> inspectionProject_ = nullptr;
    std::shared_ptr<string> inspectionTaskId_ = nullptr;
    std::shared_ptr<string> lastUpdateReportId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nis20211216
#endif
