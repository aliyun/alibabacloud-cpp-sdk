// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCALLDETAILRECORDSV2RESPONSEBODYDATALISTANALYTICSREPORTSATISFACTION_HPP_
#define ALIBABACLOUD_MODELS_LISTCALLDETAILRECORDSV2RESPONSEBODYDATALISTANALYTICSREPORTSATISFACTION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReportSatisfaction : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReportSatisfaction& obj) { 
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(SatisfactionDescription, satisfactionDescription_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReportSatisfaction& obj) { 
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(SatisfactionDescription, satisfactionDescription_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReportSatisfaction() = default ;
    ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReportSatisfaction(const ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReportSatisfaction &) = default ;
    ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReportSatisfaction(ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReportSatisfaction &&) = default ;
    ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReportSatisfaction(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReportSatisfaction() = default ;
    ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReportSatisfaction& operator=(const ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReportSatisfaction &) = default ;
    ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReportSatisfaction& operator=(ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReportSatisfaction &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->remark_ == nullptr
        && return this->satisfactionDescription_ == nullptr && return this->success_ == nullptr && return this->taskId_ == nullptr; };
    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReportSatisfaction& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // satisfactionDescription Field Functions 
    bool hasSatisfactionDescription() const { return this->satisfactionDescription_ != nullptr;};
    void deleteSatisfactionDescription() { this->satisfactionDescription_ = nullptr;};
    inline string satisfactionDescription() const { DARABONBA_PTR_GET_DEFAULT(satisfactionDescription_, "") };
    inline ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReportSatisfaction& setSatisfactionDescription(string satisfactionDescription) { DARABONBA_PTR_SET_VALUE(satisfactionDescription_, satisfactionDescription) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReportSatisfaction& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReportSatisfaction& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    std::shared_ptr<string> remark_ = nullptr;
    std::shared_ptr<string> satisfactionDescription_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
